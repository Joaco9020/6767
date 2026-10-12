# BUILD_AND_VALIDATION.md — the stage‑2 decryptor as an analysis artifact

**Scope.** The decryptor in `reconstructed_source/packer/` is retained **solely as a documented static‑analysis artifact** describing how the outer stub protects its inner image. It was **not** integrated into any rebuilt loader, and the recovered payload was **never executed**. Nothing in this directory is a functional program that fetches, maps, or runs a remote image.

**Evidence/confidence notation** (same scheme as `MALWARE_ANALYSIS_REPORT.md` / `FUNCTION_MAP.md`): **[O]** directly observed in static evidence · **[I]** inferred from multiple observations · **[U]** unresolved/unverified. Deterministic decryption is evidence that the *transform* was reconstructed correctly — **not** that the payload is safe or that its runtime behaviour is understood (it was never executed or assessed for intent).

---

## 1. What it is

`ext.exe` is a two‑stage loader. The outer stub stores its second stage **encrypted** in `.data` and decrypts it at run time. The decryptor is the routine that transforms that blob. Because the transformation is a **pure per‑word function** (each 64‑bit word depends only on itself — no cross‑word chaining), it can be re‑implemented exactly and applied offline to recover the inner image for analysis.

| File | Role |
|------|------|
| `unpack_payload.h` | Constants + prototype for the per‑word decrypt primitive |
| `unpack_payload.c` | Re‑implementation of `FUN_180035df8`'s loop body (outer image) |
| `decrypt_test.c` | Validation harness: reads the blob from `ext.exe`, decrypts, writes output |

---

## 2. Inputs / outputs / assumptions

**Source routine:** `FUN_180035df8` (outer image, `ext.exe`).
**Input:** encrypted blob at `DAT_18006056e` (VA `0x18006056e`, `.data`), file offset `0x5ef6e`, length `0x59ce0` bytes = `0xb39c` 64‑bit words.
**Output:** decrypted stage‑2 image, `0x59ce0` bytes.

**Assumptions (each stated explicitly):**
1. **Word independence.** The loop body reads one qword, transforms it, writes it back, then advances. No output depends on a previously decrypted word. *(Observed directly in the pseudocode — the loop only reads `*puVar1` and writes `*puVar1`, then `puVar1++`.)* This is what permits exact offline reconstruction.
2. **64‑bit modular arithmetic.** All operators are mod 2⁶⁴ (x86‑64 register width). Shifts by compile‑time constants in [0,63].
3. **Decompiler fidelity.** The Ghidra‑emitted expressions faithfully represent the machine operations. Where Ghidra emitted a rotate as a shift/OR pair, that form is preserved in the C so the mapping to the binary stays explicit.
4. **Little‑endian word order.** Words are read/written in increasing address order.
5. **No relocation applied.** The outer loader does not apply base relocations to the image; the code is effectively position‑independent (RIP‑relative + rebuilt IAT). The decrypted bytes are therefore meaningful independent of load address.

---

## 3. Verification method (all static — no execution of the payload)

The C was written by transcribing the decompiled loop body. Because the analysis environment had **no C compiler**, correctness was established by three independent static checks:

### 3.1 Reference re‑implementation is deterministic
A Python reference (`decrypt_stage2.py`, a `Parser` that evaluates the decompiled C expressions under true C precedence and 64‑bit masking) was run over the file's own bytes twice. Both runs produced byte‑identical output:

```
stage2_payload.bin  SHA-256 = 903AA1B53777D9792CE85BF57E1BDF7972A7630B49D345EE4F1DF366EC18907E   (run 1 == run 2)
```

### 3.2 Constant‑level cross‑check (C vs. decompiled source)
Every arithmetic key constant in the decompiled `FUN_180035df8` body was checked for presence in `unpack_payload.c`:

```
large (>0x100) constants in FUN_180035df8 body : 126
present in unpack_payload.c                     : 110
missing                                         :  16
   -> shift-multiplier forms (decompiler "* 0x200" == "<< 9") : 14   [all powers of two]
   -> header constants (0xb39c loop count, 0x59ce0 size)      :  1   [in unpack_payload.h]
   -> address labels / block ids                              :  1
   -> UNEXPLAINED arithmetic keys                             :  0
RESULT: PASS — every arithmetic key constant is transcribed; every delta is accounted for.
```

One initially‑suspicious constant (`0xd18efde75989a53d`) was traced and confirmed to belong to the **adjacent** function `FUN_180036860`, not to the decryptor — a slice artifact, not a transcription error.

### 3.3 Coherence of the decrypted output (structural sanity)
The decrypted output is not random bytes. It is a **flat, headerless mapped image** — it has
**no `MZ`/PE header at offset 0** (the loader `VirtualAlloc`s it and maps sections manually, so
no on-disk PE header is required). Despite being headerless, the recovered bytes contain fully
coherent PE *internals*:
- A complete **`IMAGE_IMPORT_DESCRIPTOR`** table resolves for `WS2_32.dll`, `bcrypt.dll`, `KERNEL32.dll`, `ADVAPI32.dll`, `SHELL32.dll`, terminated by a null descriptor.
- Thunks resolve to **real API names** (e.g. `SetEndOfFile`, `ReadConsoleW`, `ReadFile`, `GetTokenInformation`, `OpenProcessToken`, `ShellExecuteExA`, `BCryptGenRandom`); WS2_32 imports resolve to ordinals (`htons`=9, `recv`=16, `connect`=4, `WSAStartup`=116).
- The mapped entry at offset `+0x3470` disassembles as valid MSVC x86‑64 (`__security_cookie` stack‑cookie setup, standard prologue).
- A full **mbedTLS** string table is present (`secp256r1`, `CHACHA20‑POLY1305`, `AES‑128‑GCM`, TLS key‑schedule labels).

A wrong key would produce noise, not a coherent import table + valid code + TLS strings. This is
strong evidence the **decryption transform** is faithful. *(It is evidence about the decryptor's
correctness only — it says nothing about whether the payload is benign, which was never assessed
and never executed.)*

**`ext_stage2_payload.pe` is an analyst reconstruction, not a byte‑exact image of the blob.** To
open the headerless image in a disassembler, a PE header + 4‑section table (`.text`, `.rdata`,
`.data`, `.data2`) were synthesised around it. Verified relationship to the raw blob:

| Quantity | Value | Note |
|----------|-------|------|
| Decrypted blob length (loader's mapped image) | `0x59ce0` = 367,840 B | headerless flat image |
| Rebuilt PE `SizeOfImage` | `0x56000` = 352,256 B | RVA range `0x0–0x56000` |
| Rebuilt PE file size | `0x54000` = 344,064 B | header + 4 sections |
| Byte‑identity of mapped sections vs. blob | **100 %** (336,960 B compared, **0 differing**) | `.text/.rdata/.data/.data2` all identical |
| Un‑mapped blob tail | `0x56000–0x59ce0` = 15,584 B | 86.4 % zeros + an embedded Windows app manifest (`urn:schemas-microsoft-com:asm.v1`) |

So the rebuilt PE reproduces every mapped code/data byte exactly, and the only blob region it does
not carry is a trailing manifest + padding that the section table does not cover. The two artifacts
have different SHA‑256 values by design (raw blob `903AA1B5…907E`; rebuilt PE `c52957ad…f2bb`).

### 3.4 What was NOT validated
- The C file was **not compiled** (no toolchain present). It is a transcription verified by 3.1–3.3, not a build‑tested binary. Where a toolchain is available, building `decrypt_test.c` and diffing its output against the reference SHA‑256 above would close this gap.
- **No claim** of successful C2 communication or payload execution — none was performed.

---

## 4. Build (for a future, offline verification only)

If a compiler is available in an isolated analysis environment, the artifact can be reproduced with:

```
cl /O2 /W4 unpack_payload.c decrypt_test.c   # then:
decrypt_test.exe  <path\to\ext.exe>  <out.bin>
# compare SHA-256 of <out.bin> to 903AA1B5...907E
```

This is provided **only** to let an analyst re‑derive the inner image for further static study. It is not a loader component.

---

*Static analysis only. Original binary preserved. Recovered payload never executed. Server never contacted.*
