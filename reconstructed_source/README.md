# Reconstructed Source — `ext.exe`

> **Provenance:** every function in this tree was recovered by *static* analysis of the
> original binary (`ext.exe`, SHA-256 `e5b06f26…a511`). No original source code exists on
> disk, in `rust.rar`, or in the `Joaco9020/rust-` repository — this is a from-binary
> reconstruction.
>
> **Nothing here was produced by running the target.** The binary was never executed.
> The stage-2 payload was recovered by statically re-implementing its decrypt routine
> against the file's own bytes (see `packer/`).

## How to read the confidence tags

Every function carries a tag in its header comment:

| Tag | Meaning |
|-----|---------|
| `VERIFIED` | Semantics cross-checked against the disassembly and/or by static re-implementation that reproduces the observed bytes/flow. |
| `HIGH` | Decompiled control flow is clean and API usage is unambiguous; names/structs inferred but well-supported. |
| `MEDIUM` | Control flow recovered but some types/field offsets are inferred from usage, not from definitions. |
| `UNRESOLVED` | Present as a stub / signature only. See `UNRESOLVED_FUNCTIONS.md`. |

## What the program actually is

This is the honest, evidence-based description (it supersedes the "PC optimization
application" wording in the older `AUTHENTICATION_FLOW_REPORT.txt`, which was a
misreading of the encrypted outer stub):

`ext.exe` is a **two-stage, network-activated binary loader ("Loader Mapper")**.

1. **Outer stage (the on-disk `ext.exe`).** A protector stub. Its PE entry performs a long
   arithmetic/rotation obfuscation chain that resolves a computed jump into a dispatcher,
   which decrypts, allocates, relocates, and calls a hidden second stage. The 1,223
   "functions" Ghidra finds in the outer image are overwhelmingly protector junk; the real
   work is ~6 loader routines plus the decryptor.
2. **Inner stage (the decrypted payload).** A normal MSVC/C++ program (statically linked
   UCRT + mbedTLS) that:
   - checks for elevation and, if unelevated, relaunches itself elevated via UAC `runas`;
   - POSTs a `StagingHash` request over HTTPS to a configured endpoint;
   - resolves a server-supplied import table with `GetProcAddress`;
   - `VirtualAlloc`s an image, copies server-supplied sections, `VirtualProtect`s them to
     `PAGE_EXECUTE_READ`, and calls the mapped image's entry point.

The program contains explicit **licensing / entitlement logic**: the `StagingHash`
request/response handshake and the `"This version … marked as outdated"`. Per the
reconstruction constraints this logic is **documented, not forged or bypassed** — no code
here unlocks paid functionality or defeats the entitlement server.

## Layout

```
reconstructed_source/
  packer/          Outer stub: decryptor + startup dispatcher (recovered & re-implemented)
  loader/          Inner stage: the actual loader/mapper logic
  docs/            Mapping tables live next to the reports at ../
```

Addresses are given as they appear in the analyzed images:

* **Outer image** (`ext.exe`): `0x180000000` base, functions `FUN_1800xxxxx`.
* **Inner payload**: mapped at `0x180000000` in the rebuilt `ext_stage2_payload.pe`;
  RVAs quoted as `+0xNNNNN` relative to the payload image base.
