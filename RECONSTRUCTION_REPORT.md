# Source Code Reconstruction Report - ext.exe

> ## ⚠ PIVOT NOTICE — this project is now **malware analysis**, not source reconstruction
>
> This report originally assumed `ext.exe` was a normal application whose source could be
> recovered. End‑to‑end static analysis established the opposite: **`ext.exe` is a two‑stage,
> network‑activated binary loader** (a "crypter‑as‑a‑service" / cheat‑loader client) that
> decrypts, maps and executes a payload fetched from a hard‑coded C2 endpoint at run time.
>
> Consequently the deliverable shifted from *rebuilding compilable source* to
> *validating evidence + documenting behaviour + producing defensive detections*. No loader
> source was rebuilt. The binary and its recovered payload were **never executed**, and the
> identified server was **never contacted**.
>
> **Current deliverables:**
> - `MALWARE_ANALYSIS_REPORT.md` — behavioural report (flow, protocol, elevation, mapping, anti‑analysis, limits)
> - `defensive/IOCS.md`, `defensive/YARA_RULE.yar`, `defensive/NETWORK_DETECTIONS.md`, `defensive/FUNCTION_MAP.md`
> - `BUILD_AND_VALIDATION.md` — the stage‑2 decryptor documented as a standalone analysis artifact
> - This report — retains the original decompilation/inventory work and records what is now confirmed vs. tentative (see §12–§14).
>
> Prior text describing `ext.exe` as a "PC optimization" application (e.g. in
> `AUTHENTICATION_FLOW_REPORT.txt`) is a **misreading and is superseded** by this analysis.

## Executive Summary

This report documents the comprehensive static decompilation and source reconstruction of `ext.exe`, a PE64 (x86-64) Windows executable. The binary contains **1,223 internal functions** and **220 external API imports**, compiled with **MSVC** using the **Universal C Runtime (UCRT)**.

The binary employs an **obfuscated entry point** using arithmetic substitution and bit-rotation chains to dynamically compute code offsets, indicating the use of a custom packer/protector or anti-tampering mechanism.

### Coverage at a glance

| Deliverable | Result |
|-------------|--------|
| Decompiled pseudocode | **1,223 / 1,223 functions (100 %), 0 failures** |
| Call graph (authoritative) | **1,723 edges** across all functions, incl. API edges |
| Call graph (pseudocode-derived) | **2,396 edges** (complementary; validated against the above) |
| Callers table | 1,175 edges |
| Function → API attribution | 548 edges |
| Global data references | 361 edges |
| Subsystem-classified functions | 450 (of 1,223 that import an API directly) |
| Inventories | 1,223 procedures, 220 imports, 357 strings |

All output is in `decompiled/` (pseudocode) and the sibling `.tsv` files (inventories and
cross-references). **The binary was never executed.** See §12 for an explicit statement of
what could and could not be reconstructed.

---

## 1. Binary Identity

| Property | Value |
|----------|-------|
| **File** | ext.exe |
| **SHA-256** | e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511 |
| **Format** | PE64 (x86-64) |
| **Image Base** | 0x180000000 |
| **Entry Point** | 0x180035058 (RVA 0x035058) |
| **File Size** | 873,984 bytes |
| **.text Section** | 0x180001000 - 0x180056600 (349,696 bytes) |
| **.data Section** | 0x180057000 - 0x1800d6800 (522,240 bytes) |
| **.reloc Section** | 0x1800d7000 - 0x1800d7400 (1,024 bytes) |

---

## 2. Compiler, Runtime & Language Identification

### Compiler
- **Microsoft Visual C++ (MSVC)** - Evidence:
  - UCRTBASE.DLL imports (Universal C Runtime)
  - MSVCRT.DLL imports (C Runtime)
  - Standard MSVC prologue/epilogue patterns
  - `__fastcall` calling convention (Windows x64)
  - Structured Exception Handling (SEH) with RtlLookupFunctionEntry

### Runtime
- **Universal C Runtime (UCRT)** + **Windows API**
- Windows 10/11 x64 target
- Uses modern Windows APIs (BCrypt, WS2_32, Toolhelp32)

### Original Language
- **C/C++** - Evidence:
  - C-style memory management (malloc/free/realloc)
  - C runtime library usage
  - Structured programming patterns
  - No .NET metadata, no Rust stdlib, no Go runtime
  - Standard Windows desktop application patterns

---

## 3. Architecture & Capabilities

### 3.1 Core Capabilities

| Category | APIs | Purpose |
|----------|------|---------|
| **Window Management** | USER32.DLL (DefWindowProcA, MoveWindow, GetWindowRect, RegisterClassExA, GetWindowTextA, SendMessageA, FindWindowA, PostMessageA, MessageBoxW, GetCursorPos, GetClientRect, TranslateMessage, SetWindowPos, SetWindowTextA, EnumWindows) | GUI window manipulation |
| **Process Manipulation** | KERNEL32.DLL (CreateProcessW, CreateProcessA, GetExitCodeProcess, TerminateProcess, VirtualAllocEx, Toolhelp32ReadProcessMemory, OpenProcessToken, GetTokenInformation) | Process creation, injection, termination |
| **Thread Manipulation** | KERNEL32.DLL (GetCurrentThreadId, Thread32Next, CreateEventA, WaitForSingleObject) | Thread enumeration and synchronization |
| **Memory Management** | KERNEL32.DLL (VirtualAlloc, VirtualProtect, VirtualFree, VirtualQuery, HeapAlloc, HeapFree) | Memory allocation and protection |
| **File Operations** | KERNEL32.DLL (CreateFileW, ReadFile, WriteFile, MoveFileW, FindFirstFileA, FindNextFileA, FindClose, GetFileSizeEx, SetFilePointerEx) | File I/O and enumeration |
| **Network** | WS2_32.DLL (WSAStartup, WSASocketA, WSASocketW, connect, send, recv, listen, accept, gethostname, getaddrinfo, inet_addr) | Network communication (client + server) |
| **Crypto** | BCRYPT.DLL (BCryptSecretAgreement, BCryptDecrypt, BCryptImportKeyPair, BCryptExportKey, BCryptGenRandom, BCryptHashData, BCryptCreateHash) | Cryptographic operations (ECDH, AES, hashing) |
| **Registry** | ADVAPI32.DLL (RegOpenKeyExW, RegCreateKeyExW, RegEnumValueA, RegDeleteValueW, RegCloseKey, RegFlushKey) | Registry manipulation |
| **Service Control** | ADVAPI32.DLL (OpenServiceW, ControlService, CloseServiceHandle) | Windows Service management |
| **Process Enumeration** | KERNEL32.DLL (CreateToolhelp32Snapshot, Process32NextW, Thread32Next) | Process/thread enumeration |
| **Native API** | NTDLL.DLL (NtQuerySystemInformation, NtProtectVirtualMemory, NtOpenProcess, NtSuspendThread, NtClose, NtFlushInstructionCache, NtOpenFile) | Low-level system operations |
| **Synchronization** | KERNEL32.DLL (EnterCriticalSection, LeaveCriticalSection, OpenMutexA, ReleaseMutex) | Thread synchronization |

### 3.2 Application Type
Based on the API imports, this appears to be a **Windows system utility/tweaker application** with:
- GUI window manipulation (can find, move, resize windows)
- Process injection and manipulation (VirtualAllocEx, Toolhelp32ReadProcessMemory)
- Network communication (Winsock client and server)
- Cryptographic operations (BCrypt)
- Service management
- Registry manipulation

---

## 4. Entry Point Analysis

### 4.1 Obfuscated Dispatcher

The entry point at `0x180035058` does NOT link to a standard MSVC CRT `mainCRTStartup`. Instead, it uses a custom **obfuscated dispatcher thunk**:

```c
void entry(void)
{
  ulonglong uVar1, uVar2;
  uVar1 = DAT_1800bfbc6 + 0xecb5a99351e4a523U ^ 0x134a566cfa8a772d;
  uVar2 = ((uVar1 >> 0x26 | uVar1 << 0x1a) ^ 0x134a566cfa8a772d) + 0xecb5a993057588d3;
  uVar1 = uVar2 >> 0x13;
  uVar2 = (uVar2 << 0x2d | uVar1) >> 0x17;
  // ... multi-round arithmetic substitution / bit-rotation chain ...
  (*(code *)(((uVar1 << 0x3e | (uVar2 << 0x22 | uVar1) >> 2) ^ 0x6a988d92723bcbb4) + 0x1800350e8))();
  return;
}
```

**Key Characteristics:**
- Multi-round XOR, rotation (ROR/ROL), addition, and shift operations
- Computes a jump target dynamically at runtime
- Uses a seed value from `DAT_1800bfbc6` (0x1800bfbc6)
- Final indirect jump to computed address (likely 0x180034DF8 based on prior analysis)
- This is a **custom packer/protector** mechanism

### 4.2 Startup Flow
1. PE loader jumps to `entry` (0x180035058)
2. Entry point computes real OEP (Original Entry Point) via arithmetic chain
3. Control transfers to the computed address (the real CRT startup)
4. Standard MSVC CRT initialization follows

---

## 5. Function Inventory

### 5.1 Internal Functions: 1,223

Functions are organized by address range. Key function categories:

| Range | Count | Description |
|-------|-------|-------------|
| 0x180001000-0x180005700 | ~100 | CRT initialization, basic utilities |
| 0x180005700-0x18000a000 | ~50 | Window management, message handling |
| 0x18000a000-0x18000f000 | ~100 | Process enumeration, manipulation |
| 0x18000f000-0x180014000 | ~80 | File operations, path handling |
| 0x180014000-0x180019000 | ~100 | Network (Winsock) operations |
| 0x180019000-0x18001e000 | ~80 | Crypto (BCrypt) operations |
| 0x18001e000-0x180023000 | ~100 | Registry operations |
| 0x180023000-0x180028000 | ~100 | Service control, system info |
| 0x180028000-0x18002d000 | ~80 | Threading, synchronization |
| 0x18002d000-0x180032000 | ~100 | GUI, window classes |
| 0x180032000-0x180035000 | ~50 | Memory management, allocation |
| 0x180035000-0x18003a000 | ~80 | Entry point, initialization |
| 0x18003a000-0x180040000 | ~100 | Core application logic |
| 0x180040000-0x180046000 | ~80 | Process injection, manipulation |
| 0x180046000-0x18004c000 | ~80 | Network client/server |
| 0x18004c000-0x180052000 | ~80 | Crypto operations |
| 0x180052000-0x180056600 | ~50 | Utilities, cleanup |

### 5.2 External Imports: 220

Organized by DLL:

| DLL | Count | Key Functions |
|-----|-------|---------------|
| KERNEL32.DLL | ~100 | Process, memory, file, thread, sync |
| USER32.DLL | 15 | Window management, messages |
| NTDLL.DLL | 18 | Native API |
| WS2_32.DLL | 20 | Winsock networking |
| BCRYPT.DLL | 12 | Cryptography |
| ADVAPI32.DLL | 16 | Registry, services |
| UCRTBASE.DLL | 15 | C runtime |
| MSVCRT.DLL | 8 | C runtime (legacy) |
| SHELL32.DLL | 1 | ShellExecuteExA |

---

## 6. Data Structures & Strings

### 6.1 Key Strings Identified

| String | Address | Context |
|--------|---------|---------|
| "timestamp" | 0x1800c0278 | Time-related operations |
| "hashs" | 0x1800d008d | Hash operations |
| "Ibrah" | 0x1800d4c4a | Internal identifier |
| "Evere" | 0x1800d4c78 | Internal identifier |
| "compressionlev" | 0x1800c1cec | Compression level |
| "transacti" | 0x1800c42e7 | Transaction-related |
| "permiss" | 0x1800c98c6 | Permissions |
| "runtime" | 0x1800ca9c1 | Runtime operations |
| "metrics" | 0x1800d418e | Metrics collection |
| "efficien" | 0x1800d4621 | Efficiency |

### 6.2 Encrypted/Obfuscated Data
- Many strings in the .data section appear encrypted or obfuscated
- Base64-like strings found (e.g., "UQBVo6lg7QUYVPoPaOwbKHdDjqAbEPiWST2p658vJFC9t5VJ6M9YoK87UHqyAJ6M1m4wPfen716ABgTHTkEvzQ6H8ABQzisj8I3OZEQ9BCWB26EWslwuL8jZrM8oLr4kdIVdMkneV3ikoUSTKM6jZL0q")
- These are likely encrypted at rest and decrypted at runtime

---

## 7. Anti-Analysis Features

1. **Obfuscated Entry Point**: Custom dispatcher with arithmetic substitution
2. **Indirect Jump**: Final jump target computed dynamically
3. **Encrypted Strings**: Most strings appear encrypted in the binary
4. **No Debug Symbols**: No PDB or debug information
5. **IsDebuggerPresent**: Anti-debugging check imported

---

## 8. Reconstruction Status

### 8.1 Completed

| # | Task | Status | Coverage |
|---|------|--------|----------|
| 1 | Binary identification & hashing | ✅ Done | 1 file, SHA-256 verified |
| 2 | Compiler / runtime / language identification | ✅ Done | MSVC + UCRT confirmed |
| 3 | Entry point analysis (obfuscated dispatcher) | ✅ Done | `0x180035058` decoded as far as static analysis allows |
| 4 | Internal function inventory | ✅ Done | **1,223 / 1,223 (100 %)** |
| 5 | Import inventory | ✅ Done | **220 / 220 (100 %)** |
| 6 | String inventory | ✅ Done | **357 / 357 (100 %)** |
| 7 | Segment / section mapping | ✅ Done | .text, .data, .reloc fully mapped |
| 8 | **Function-by-function decompilation** | ✅ **Done** | **1,223 / 1,223 succeeded, 0 failed (100 %)** |
| 9 | **Cross-reference & call-graph analysis** | ✅ **Done** | 1,723 authoritative edges + 2,396 pseudocode-derived edges |
| 10 | **Import usage attribution (which function calls which API)** | ✅ **Done** | 548 external call edges resolved |
| 11 | **Data-reference extraction** | ✅ **Done** | 361 `DAT_` global references |
| 12 | **Subsystem classification** | ✅ **Done** | 450 API-calling functions tagged |

### 8.2 Decompile coverage detail

Pseudocode was produced for **every** internal procedure, in 13 chunks via REA
`batch_decompile` (parameter `addresses`):

| Chunk file | Index range | Requested | Succeeded | Failed |
|------------|-------------|-----------|-----------|--------|
| `functions_0000_0099.md` | 0–99 | 100 | 100 | 0 |
| `functions_0100_0199.md` | 100–199 | 100 | 100 | 0 |
| `functions_0200_0299.md` | 200–299 | 100 | 100 | 0 |
| `functions_0300_0399.md` | 300–399 | 100 | 100 | 0 |
| `functions_0400_0499.md` | 400–499 | 100 | 100 | 0 |
| `functions_0500_0599.md` | 500–599 | 100 | 100 | 0 |
| `functions_0600_0699.md` | 600–699 | 100 | 100 | 0 |
| `functions_0700_0799.md` | 700–799 | 100 | 100 | 0 |
| `functions_0800_0899.md` | 800–899 | 100 | 100 | 0 |
| `functions_0900_0999.md` | 900–999 | 100 | 100 | 0 |
| `functions_1000_1099.md` | 1000–1099 | 100 | 100 | 0 |
| `functions_1100_1199.md` | 1100–1199 | 100 | 100 | 0 |
| `functions_1200_1222.md` | 1200–1222 | 23 | 23 | 0 |
| **Total** | | **1,223** | **1,223** | **0** |

Plus one supplementary higher-detail pass with caller/callee metadata:
`decompiled/batch_0201_0400.md` (index 200–400, 135 KB).

### 8.3 Cross-reference coverage

Two independent call graphs were produced and both are retained:

| Artifact | Edges | Method | Notes |
|----------|-------|--------|-------|
| `callgraph.tsv` | **1,723** | Ghidra `procedure_callees` over all 1,223 addresses (0 errors, 11.5 s) | Authoritative; includes `EXTERNAL:0xNN → DLL::Function` API edges |
| `callers.tsv` | 1,175 | Inversion of the above for internal callees | "who calls this function" |
| `callgraph_pseudocode.tsv` | 2,396 | Regex over the 13 decompiled chunk files | Catches calls in unreachable/bogus protector blocks that Ghidra drops |
| `api_calls.tsv` | 539 | Regex over pseudocode for import names | Function → API mapping |
| `data_refs.tsv` | 361 | Regex over pseudocode for `DAT_`/`_DAT_` | Function → global variable |

Validation: three sample functions were cross-checked between the two methods —
`0x180035a28`, `0x18003d090`, `0x1800434a8` — and the provider result matched the
pseudocode-derived callees **exactly** in all three cases.

### 8.4 Graph structure

| Metric | Value |
|--------|-------|
| Functions with ≥1 internal callee | 772 (1,223 − 451 leaves) |
| Functions with ≥1 internal caller | 750 (1,223 − 473 roots) |
| Leaf functions (no internal callees) | 451 |
| Root functions (no static internal caller) | 473 |
| Functions directly importing an API | 450 |

The large root count (473) is a direct consequence of the obfuscated dispatcher: many
functions are reached by **computed jumps**, registered as **callbacks** (window procs,
thread procs, `EnumWindows` predicates), or appear only in protector junk blocks — so they
have no statically resolvable caller.

**Most-reused helper functions (hub callees):**

| Address | Callers | Evidence name |
|---------|---------|---------------|
| `0x18004ffe0` | 6 | `FUN_18001cb28` |
| `0x180039240` | 5 | `FUN_1800150b0` |
| `0x1800329c0` | 5 | `FUN_18000aa40` |
| `0x180016490` | 5 | `FUN_180012138` |
| `0x180010be0` | 5 | `FUN_180009608` |

**Functions dispatching the most callees (hub callers):**

| Address | Callees | Evidence name |
|---------|---------|---------------|
| `0x180049c88` | 6 | `FUN_180010e38` |
| `0x180007888` | 5 | `FUN_180004a98` (CryptDecrypt + RegOpenKeyExW) |
| `0x18004cc68` | 5 | `FUN_18002cb40` |
| `0x18003eed8` | 5 | `FUN_18000b218` |
| `0x180032cf8` | 5 | `FUN_180012138` |

### 8.5 Subsystem mapping (evidence-based)

Every function that directly calls an API was tagged by the import families it uses
(`function_subsystems.tsv`; a function may belong to several):

| Subsystem | Functions | Dominant APIs |
|-----------|-----------|---------------|
| **Filesystem** | 174 | `RemoveDirectoryA` (128 sites), `FindFirstFileA`, `FindNextFileA`, `MoveFileW`, `GetCurrentDirectoryW`, `GetFullPathNameA`, `SetCurrentDirectoryA` |
| **Registry** | 89 | `RegOpenKeyExW` (69), `RegOpenKeyW` (12), `RegDeleteValueW`, `RegFlushKey` |
| **Process / thread enumeration & injection** | 68 | `CreateToolhelp32Snapshot` (38), `Process32NextW`, `Thread32Next`, `Toolhelp32ReadProcessMemory`, `VirtualAllocEx`, `GetExitCodeProcess`, `NtOpenProcess`, `NtProtectVirtualMemory`, `NtSuspendThread` |
| **C runtime** | 50 | `malloc`, `realloc`, `free`, `memcpy`, `strcmp`, `_aligned_malloc`, `_ftelli64`, `fflush` |
| **GUI (USER32)** | 39 | `MoveWindow`, `SetWindowPos`, `EnumWindows`, `SendMessageA`, `PostMessageA`, `RegisterClassExA`, `DefWindowProcA`, `MessageBoxW`, `SetWindowTextA` |
| **Cryptography** | 33 | BCrypt (`BCryptDecrypt`, `BCryptGenRandom`, `BCryptDestroyKey`, `BCryptExportKey`, `BCryptCreateHash`, `BCryptSetProperty`) + CryptoAPI (`CryptDecrypt`, `CryptEncrypt`, `CryptCreateHash`) |
| **Networking (WS2_32)** | 25 | `listen`, `accept`, `WSASocketA/W`, `getaddrinfo`, `inet_addr`, `closesocket`, `WSACleanup`, `gethostname`, `WSAGetLastError` |
| **Process creation / sync** | 15 | `CreateProcessA/W`, `_beginthreadex`, `WaitForSingleObjectEx`, `CreateEventA`, `Sleep`, `GetCommandLineA` |
| **Service control** | 5 | `ControlService`, `OpenServiceW`, `GetNamedSecurityInfoW`, `CloseServiceHandle` |
| **Unclassified / other** | 30 | Calls an API not matching the families above |

**Imports by DLL (distinct APIs / call sites):**

| DLL | Distinct APIs | Call sites |
|-----|---------------|------------|
| KERNEL32.DLL | 39 | 275 |
| ADVAPI32.DLL | 17 | 107 |
| USER32.DLL | 15 | 39 |
| WS2_32.DLL | 14 | 26 |
| NTDLL.DLL | 12 | 23 |
| UCRTBASE.DLL | 12 | 22 |
| MSVCRT.DLL | 11 | 28 |
| BCRYPT.DLL | 11 | 28 |

### 8.6 Remaining work / not attempted

- [ ] Human-readable **re-authored source** (the decompiled pseudocode has not been
      rewritten into idiomatic C; see §9.1 — this is inference, not recovery)
- [ ] Original **file / class / namespace** partitioning (unrecoverable, see §9.1)
- [ ] **Encrypted-string decryption** (requires tracing the runtime decoder)
- [ ] **Indirect/computed call resolution** (requires dynamic execution, which was
      explicitly out of scope — the binary was not run)

---

## 9. Missing Dependencies & Unrecoverable Portions

### 9.1 Cannot be recovered by any static means

1. **Original source file structure** — files, classes, namespaces and headers are lost;
   the binary carries no such metadata.
2. **Original identifier names** — every symbol is tool-generated (`FUN_XXXXXXXX`,
   `DAT_XXXXXXXX`, `uVar1`, `lVar1`, `local_80`, `unaff_RBX`). Original variable/function
   names existed only in a PDB that is not present.
3. **Type information** — no debug type data; all struct layouts, pointer targets and
   widths are decompiler inferences. Where Ghidra printed
   `/* WARNING: Type propagation algorithm not settling */`, even the inferred types are
   unreliable.
4. **Encrypted string contents** — 357 strings are inventoried by address, but most
   payloads are encrypted/obfuscated in `.data` and only materialise at runtime.
5. **Computed control flow through the obfuscated dispatcher** — the entry at
   `0x180035058` derives its jump target from an arithmetic/rotation chain seeded by
   `DAT_1800bfbc6`; static analysis cannot fold the chain to a single constant, so the
   entry→OEP edge is unresolved.
6. **Indirect / computed calls** — any call through a register, stack slot or table has an
   unresolved target; these are absent from `callgraph.tsv`.
7. **Compiler-generated layout of structs** — `local_*`/`uStack_*` frame offsets are
   evidence of stack layout, not of the original `struct` definitions.

### 9.2 Partially recovered (usable with caveats)

| Artifact | Status | Caveat |
|----------|--------|--------|
| Function boundaries | ✅ All 1,223 recovered | Protector junk functions may be present |
| Direct call graph | ✅ 1,723 edges | Excludes indirect and computed jumps |
| Import → call-site attribution | ✅ 548 edges | Misses APIs invoked through resolved pointers |
| Global data references | ⚠️ 361 `DAT_` refs | Names/semantics unknown; only addresses recovered |
| Pseudocode bodies | ✅ 100 % decompiled | Obfuscation makes many bodies semantically noisy |
| Strings | ⚠️ 357 addresses | Contents mostly encrypted |

### 9.3 Quality caveats in the decompiled output

The protector's fingerprints appear throughout the pseudocode and must not be mistaken for
original program logic:

- `/* WARNING: Removing unreachable block (ram,…) */` — dead/junk code inserted by the
  protector; the displayed path is the live one.
- `/* WARNING: Type propagation algorithm not settling */` — decompiler type inference did
  not converge; treat that signature as unreliable.
- `/* WARNING: This function may have set the stack pointer */` — unreliable frame recovery.
- Bogus arithmetic on stack variables (`uVar2 = (param_3 + 0x13) * uVar4;` etc.) with no
  consumer — control-flow flattening debris.
- `unaff_RBX` / `in_RAX` / `&stack0x…` — lost register/stack provenance.
- Implausibly frequent no-op API calls (e.g. `RemoveDirectoryA` at 128 call sites) — these
  are junk calls the protector inserted, not real directory-deletion logic.

---

## 10. Recommendations for Further Analysis

These are explicitly **out of scope** for this static-only reconstruction and would require
either running the binary (which was prohibited) or additional tooling:

1. **Dynamic analysis** (in a sandbox/VM) to:
   - decrypt the strings by capturing the decoder's output,
   - resolve indirect/computed calls,
   - unfold the entry-point arithmetic chain to find the true OEP,
   - capture the real runtime control flow.
2. **Targeted manual review** of the hub functions in §8.4 and the entry dispatcher in §4,
   since they gate the most downstream logic.
3. **Struct recovery** by hand from stack-frame access patterns in the decompiled bodies of
   the API-heavy functions in §8.5.
4. **Cross-reference against `rust.rar`** present in the working folder — if that archive
   contains related toolchain/source artifacts it may corroborate the language hypothesis
   (currently: MSVC + UCRT C/C++, with Rust/MSVC **unconfirmed**).

---

## 11. Output Files

### Decompiled pseudocode (primary deliverable)

| File | Description |
|------|-------------|
| `decompiled/functions_0000_0099.md` … `functions_1200_1222.md` (13 files) | **Decompiled pseudocode for all 1,223 internal functions**, grouped by procedure index; heading format `## Function: <name> (<address>)` |
| `decompiled/batch_0201_0400.md` | Supplementary higher-detail pass (index 200–400) including caller/callee metadata |
| `decompiled/README.md` | Directory legend, labelling convention (decompiled vs reconstructed) and quality caveats |

### Inventories & cross-references

| File | Rows | Description |
|------|------|-------------|
| `internal_procedures.tsv` | 1,223 | Address + evidence name of every internal procedure |
| `external_procedures.tsv` | 220 | Import name, DLL, function for every import |
| `strings.tsv` | 357 | Every recovered string with its address |
| `callgraph.tsv` | 1,723 | Authoritative call graph (incl. external/API edges) |
| `callers.tsv` | 1,175 | Inverted call graph — callers of each internal function |
| `callgraph_pseudocode.tsv` | 2,396 | Call edges parsed from the decompiled pseudocode |
| `api_calls.tsv` | 539 | Function → imported API edges |
| `data_refs.tsv` | 361 | Function → global data reference edges |
| `function_subsystems.tsv` | 450 | Per-function subsystem tags (§8.5) |
| `SUBSYSTEM_INDEX.md` | 528 memberships (450 unique functions) | Human-readable subsystem → function index; each row links to the chunk file containing that function's pseudocode |

### Malware analysis & defensive deliverables (post-pivot)

| File | Description |
|------|-------------|
| `MALWARE_ANALYSIS_REPORT.md` | Behavioural report: exec flow, network protocol, elevation, mapping/dynamic imports, packing, anti-analysis, limitations |
| `defensive/IOCS.md` | Extracted indicators with confidence + context (hashes, network, protocol strings, crypto/structural) |
| `defensive/YARA_RULE.yar` | Two sample-specific rules: decrypted stage-2 strings + packed-stub rare constants |
| `defensive/NETWORK_DETECTIONS.md` | Network indicators, recovered protocol, Sigma rules, fidelity caveats |
| `defensive/FUNCTION_MAP.md` | Important addresses → evidenced roles (outer + stage-2), with confidence tags |
| `BUILD_AND_VALIDATION.md` | Decryptor inputs/outputs/assumptions + verification method (static, no payload execution) |
| `reconstructed_source/packer/*` | Verified stage-2 decryptor + validation harness (standalone analysis artifact) |
| `reconstructed_source/ext_stage2_payload.pe` | Rebuilt inner image (analysis only; never executed) |

### Other

| File | Description |
|------|-------------|
| `RECONSTRUCTION_REPORT.md` | This report |
| `ghidra_project/` | Pre-existing Ghidra project / analysis database (preserved unchanged) |
| `ext.exe` | Original target (preserved unchanged, never executed) |

---

## 12. What Was and Was Not Reconstructed — Summary

> **Framing (post‑pivot).** "Reconstruction" below refers to *analysis recovery from the
> binary* — decompilation, inventories, and structural understanding. **No compilable loader
> source was produced**, by design (see PIVOT NOTICE). The behaviour documented here is
> evidence‑backed and the detection artifacts in `defensive/` are the operative output.

**Reconstructed / established (evidence-backed):**
- Complete decompilation of all 1,223 outer functions (100 % success).
- Complete import inventory (220) with per-callsite attribution (548 edges).
- Complete string inventory (357 addresses, outer plaintext).
- Complete static call graph (1,723 edges) + a complementary pseudocode-derived graph
  (2,396 edges), validated against each other on sampled functions.
- Global data-reference set (361 edges).
- Subsystem decomposition of the binary, with per-function membership.
- Compiler/runtime/language identification: MSVC + UCRT, C/C++, Windows x64.
- Documentation of the obfuscated entry dispatcher and the protector's artifacts.
- **Two-stage structure identified** and the inner image decrypted + rebuilt for analysis.
- **Behavioural understanding** of elevation, C2 handshake, dynamic import resolution,
  manual mapping, and control transfer (documented in `MALWARE_ANALYSIS_REPORT.md`).

**Not reconstructed (cannot be, statically):**
- Original source files, class/namespace layout, and identifier names.
- Exact struct/type definitions.
- The entry→OEP computed edge and all indirect/computed call targets.
- Any guarantee that protector junk code has been separated from real logic.
- **The delivered second payload** (fetched at runtime — not in this sample).

**Deliberately not attempted (scope boundary):**
- Executing the binary or the recovered payload (prohibited; never done).
- Authoring built/compilable source for the loader's offensive core (C2 client,
  manual PE mapper, self-elevation, licensing handshake) — declined as a scope decision.
- Contacting the identified C2 server or any indicator in `defensive/`.

---

## 13. Confirmed vs. Tentative Conclusions

**Confirmed (directly observed in disassembly/pseudocode — [O]):**
- Obfuscated entry (`0x180035058`) → 154 computed tail‑jumps → dispatcher `FUN_180014d68`.
- Dispatcher lazily runs `FUN_180035df8` (decrypt) → `FUN_180036940` (alloc+copy) →
  `FUN_180036a70` (IAT rebuild) → `FUN_1800381e0` (VirtualProtect RX) → calls stage‑2 entry at `+0x3470` with magic `0x947424cb3a18cd6e`.
- Stage‑2 decryptor is a **pure per‑word** transform over `0xb39c` words at `DAT_18006056e`
  (size `0x59ce0`); re‑implementation is **deterministic** (identical SHA‑256 `903A…907E` across runs).
- Decrypted image is a coherent PE: import table (`WS2_32`/`bcrypt`/`KERNEL32`/`ADVAPI32`/`SHELL32`),
  ordinal thunks, mbedTLS string table, valid entry prologue.
- Stage‑2 elevation via `GetTokenInformation(TokenElevation)` + `ShellExecuteExA` `runas`.
- Protocol keys, endpoint URL, hard‑coded IPs, UA strings, and crypto markers present in stage‑2.
- `IsDebuggerPresent` imported in outer image (present in stage‑2 strings).

**Tentative / inferred ([I]):**
- Full two‑exchange HTTP request/response sequencing (built from strings + control flow, not observed on the wire).
- Struct layouts (context, import map, section descriptors) — inferred from access patterns.
- `IsDebuggerPresent` *active anti‑debug branch* in the outer stub — import exists but **no resolved static call site**; likely resolved through the rebuilt IAT or called from stage‑2. Not proven.

**Unresolved / not determinable ([U]):**
- What payload the server would deliver, and its ultimate capability.
- C2 liveness and server response content (never contacted).
- Whether the Cloudflare IPs were ever the true target (they are shared anycast).
- Triage of the ~1,217 remaining outer functions (predominantly protector junk).

**Open questions (future work, requires dynamic analysis in a sandbox — not performed here):**
1. Decrypt the runtime strings by capturing the decoder output in a sandbox.
2. Resolve indirect/computed calls and confirm the true OEP control flow.
3. Capture the actual wire traffic to characterize the C2 protocol exactly.
4. Confirm whether an active anti‑debug/anti‑VM branch executes at runtime.
5. Recover struct definitions from stack-frame access patterns.

---

*Report generated: 2026-10-11*
*Updated: 2026-10-11 — **project pivoted from source reconstruction to malware analysis**; behavioural report, IOCs, YARA, network detections, function map and decryptor validation added; §12–§13 record confirmed vs. tentative conclusions*
*Tools: REA (Ghidra 12.1.4 provider), custom analysis, Capstone 5.0.7*
*Analysis type: Static decompilation only — the binary was NOT executed, the recovered payload was NOT executed, and no server was contacted*
