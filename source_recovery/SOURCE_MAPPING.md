# Source Mapping — recovered source ↔ original addresses

This maps every reconstructed artifact to its original address and records its recovery status.

**Two address spaces** (from `defensive/FUNCTION_MAP.md`, confirmed here):

* **[O] OUTER** — VAs inside the packed `ext.exe` (ImageBase `0x180000000`). Covered by the 1,223-function
  inventory (`internal_procedures.tsv`, `decompiled/*.md`).
* **[S2] STAGE-2** — offsets inside the decrypted inner image (rebuilt `ext_stage2_payload.pe`, also based
  at `0x180000000` *for analysis only*). These are **RVAs from the mapped image base, NOT runtime VAs** —
  the outer loader `VirtualAlloc`s the image at an arbitrary base and applies no relocations
  (position-independent, RIP-relative + rebuilt IAT). Stage-2 functions are **not** part of the outer
  1,223-function inventory (verified: `0x180001cbc / 0x180002cd8 / 0x1800033ec / 0x180003470` are absent
  from `internal_procedures.tsv`).

Status legend: **RECOVERED** (faithful + validated) · **INFERRED** (reasoned, not byte-validated) ·
**PLACEHOLDER** (structure only) · **ANALYSIS-ONLY** (pseudocode/state model, deliberately not implemented).

---

## 1. Reconstructed source files → original address

| file | kind | original symbol | address | status |
|---|---|---|---|---|
| `crypto_analysis/stage2_decryptor.h` | header | `FUN_180035df8` constants/decls | `0x180035df8` **[O]** | RECOVERED |
| `crypto_analysis/stage2_decryptor.cpp` | impl | `FUN_180035df8` (decrypt word/blob) | `0x180035df8` **[O]** | **RECOVERED (verified)** |
| `analysis_models/authorization_state.h` | data model | payload auth state vocabulary | string cluster `0x48400–0x486f8` **[S2]** | ANALYSIS-ONLY (enum INFERRED) |

The decryptor is the one component with a **functional, compilable, validated** implementation. It is a
pure per-word data transform (no cross-word state); re-implementing it over the file's own blob
reproduced a coherent inner image and byte-identical sections (SHA-256 `903aa1b5…907e`). See
`BUILD_AND_VALIDATION.md`.

Operational loader components (alloc / IAT build / section mapping / execution transfer) and the
remote-authorization fetch are **ANALYSIS-ONLY** by scope and are *not* present as compilable code —
see `analysis_models/` and `LICENSING_FUNCTION_MAP.md`.

---

## 2. Outer loader — verified execution path **[O]**

| address | symbol | role | evidence | status |
|---|---|---|---|---|
| `0x180035058` | `entry` | obfuscated chain head; reads seed `[0x1800bfbc6]`, ends `JMP R10` | REA `analyze_function`; `COMPUTED_JUMP` @ `0x1800350ed` | RECOVERED (control flow) |
| `0x180034df8` … `0x180015068` | *(154 gap stubs)* | computed-jump bootstrap (interleaved among the 1,217) | concrete emulation → 154 hops; raw bytes where Ghidra says `undecodable` | RECOVERED (chain) |
| `0x180014d68` | `FUN_180014d68` | **dispatcher** — lazy latch `DAT_1800bb185`; calls core fns then payload | REA pseudocode (evidence `ev_38e6dc15…`) | RECOVERED |
| `0x180035df8` | `FUN_180035df8` | **decrypt** stage-2 blob | direct callee of dispatcher; verified reconstruction | **RECOVERED (verified)** |
| `0x180036940` | `FUN_180036940` | alloc RW image (69 B) | direct callee of dispatcher | INFERRED (ANALYSIS-ONLY role) |
| `0x180036a70` | `FUN_180036a70` | build IAT (1,556 B) | direct callee of dispatcher | INFERRED (ANALYSIS-ONLY role) |
| `0x1800381e0` | `FUN_1800381e0` | `VirtualProtect` (51 B) | direct callee; api_calls.tsv | INFERRED (ANALYSIS-ONLY role) |
| `0x180014db6` | *(inside dispatcher)* | `CALL RAX` → payload entry, passes staging hash `0x947424cb3a18cd6e` | Ghidra `COMPUTED_CALL` | RECOVERED |

Bootstrap summary: `entry → 154 hidden gap-stubs → dispatcher → [decrypt, alloc, iat, protect] → payload`.

---

## 3. Stage-2 (payload) — authorization & loader roles **[S2]** (from `defensive/FUNCTION_MAP.md`)

Stage-2 addresses are **offsets from the mapped image base**, not runtime VAs. All are
**ANALYSIS-ONLY** (never implemented as operational code):

| offset | symbol | role | confidence |
|---|---|---|---|
| `+0x3470` | `entry` | main loader flow: elevation → staging request → import resolution → map → execute | HIGH |
| `+0x33ec` | `FUN_1800033ec` | elevation check (`OpenProcessToken`/`GetTokenInformation(TokenElevation)`) | HIGH |
| *(in entry)* | self-elevate | `ShellExecuteExA{lpVerb="runas"}` | HIGH |
| `+0x2cd8` | `FUN_180002cd8` | protocol request builder/sender (type 1 = staging, type 2 = build); inserts `StagingHash` | HIGH |
| `+0x1cbc` | `FUN_180001cbc` | HTTPS client (mbedTLS over WS2_32): socket/connect/send/recv, headers | MED |
| `+0x1a0c` | `FUN_180001a0c` | context scrambler: 8-byte const `0x0a9ff9483ccaeddf` XOR PID | HIGH |
| `+0x3df0` | `FUN_180003df0` | map insert (`StagingHash`, `ImageAllocation`, import entries) | HIGH |
| `+0x3e10` | `FUN_180003e10` | map get integer (`Error`, `RequestResult`, `HttpStatus`) | HIGH |
| `+0x3e50` | `FUN_180003e50` | map get size (`ImagedSize`, `Entrypoint`) | HIGH |

Mapping/execute sites inside stage-2 `entry` (ANALYSIS-ONLY): per-`MappedSections` `memcpy`, context
encrypt `FUN_180001a0c(ctx,len,0xa9ff9483ccaeddf,GetCurrentProcessId())`, and the terminal
`(*entrypoint)(imageBase,1,&ctx)`. The "execute" and remote-fetch steps are deliberately not
reconstructed as code.

---

## 4. What is deliberately NOT mapped to compilable source

| component | reason | representation |
|---|---|---|
| alloc / IAT build / section map / `VirtualProtect` core | operational loader (executable-memory mapping, execution transfer) | ANALYSIS-ONLY role tags (§2) |
| protocol request builder, HTTPS client, elevation | operational remote-fetch + self-elevation | ANALYSIS-ONLY state model (`authorization_state.h`, `LICENSING_FUNCTION_MAP.md`) |
| terminal `(*entrypoint)(...)` execution transfer | execution transfer to a remote-derived image | ANALYSIS-ONLY (described, not implemented) |
| 1,217 non-reached functions | reachability undemonstrated (see `FUNCTION_REASSESSMENT.tsv`) | classified, not reconstructed |
