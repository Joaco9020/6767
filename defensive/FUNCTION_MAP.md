# FUNCTION_MAP.md — important addresses → evidenced roles

Two address spaces are documented. **Outer** addresses are VAs in the packed `ext.exe` (ImageBase `0x180000000`). **Stage‑2** addresses are RVAs/offsets inside the decrypted inner image (rebuilt as `ext_stage2_payload.pe`, also based at `0x180000000` for analysis).

**Legend — evidence:** **[O]** directly observed (pseudocode/disassembly) · **[I]** inferred from API semantics/structure · **[U]** unresolved.
**Legend — confidence:** HIGH / MED / LOW.

---

## A. Outer image (`ext.exe`) — packer + stage‑2 loader glue

| Address | Analyst role | Evidence (observed) | Conf. |
|---------|--------------|---------------------|-------|
| `0x180035058` | **PE entry — obfuscated chain head** | arithmetic/rotation chain seeded by qword @ `0x1800bfbc6`; ends `LEA R14,[…]; ADD R10,R14; JMP R10` | HIGH [O] |
| `0x180034df8` | First computed‑jump target (real code gap; Ghidra defined no procedure) | valid x86‑64 (`41 54` push r12…) reachable only via computed jump | HIGH [O] |
| `0x180034ac8 … 0x180033328` | Mid‑chain stubs (sample of the 154 hops) | each a straight‑line arithmetic tail‑jump; statically emulated | HIGH [O] |
| `FUN_180014d68` (`0x180014d68`) | **Stage‑2 dispatcher** | `if (DAT_1800bb185==0){ FUN_180035df8(); FUN_180036940(); FUN_180036a70(); FUN_1800381e0(); } (*DAT_1800bb185)(DAT_1800bb18d,0x947424cb3a18cd6e,…)` | HIGH [O] |
| `FUN_180035df8` | **Stage‑2 decryptor** | loop over `0xb39c` words at `DAT_18006056e`; per‑word rotate/add/xor chain | HIGH [O] |
| `FUN_180036940` | Alloc + copy stage‑2 | `VirtualAlloc(0,0x59ce0,0x3000,4)`; `memcpy(…,&DAT_18006056e,0x59ce0)` | HIGH [O] |
| `FUN_180036a70` | Rebuild stage‑2 IAT | writes outer `*_exref` API pointers into `DAT_1800bb18d+0x3e000…`; sets `DAT_1800bb185 = buf+0x3470` | HIGH [O] |
| `FUN_1800381e0` | Make stage‑2 executable | `VirtualProtect(DAT_1800bb18d+0x1000, 0x3c990, 0x20 /*RX*/, …)` | HIGH [O] |
| `DAT_1800bb18d` | Stage‑2 image base pointer (global) | written by `FUN_180036940`, read by `FUN_180036a70`/`FUN_1800381e0`/dispatcher | HIGH [O] |
| `DAT_1800bb185` | Stage‑2 entry pointer (global) | set to `buf+0x3470`; called by dispatcher | HIGH [O] |
| `DAT_18006056e` | Encrypted stage‑2 blob (in `.data`) | decryptor source + memcpy source; len `0x59ce0` | HIGH [O] |
| `0x1800bfbc6` | Entry‑chain seed qword | read at head of `0x180035058` | HIGH [O] |

**Note:** the remaining ~1,217 outer functions are predominantly protector junk (e.g. `RemoveDirectoryA` ×128 as no‑op noise). Only the ~10 above are loader glue. See `MALWARE_ANALYSIS_REPORT.md` §7.

---

## B. Stage‑2 image — the actual loader/mapper program

Base: decrypted image. `entry` is the mapped‑image entry the outer dispatcher calls.

| Address (stage‑2) | Analyst role | Evidence (observed) | Conf. |
|-------------------|--------------|---------------------|-------|
| `entry` (`+0x3470`) | **Main loader flow**: elevation → staging request → import resolution → map → execute | full pseudocode read; MSVC prologue + `__security_cookie` | HIGH [O] |
| `FUN_1800033ec` | **Elevation check** | `OpenProcessToken(h,8,&t)`; `GetTokenInformation(t,TokenElevation,&b,4,&l)`; `CloseHandle` | HIGH [O] |
| *(in `entry`)* | **Self‑elevate** | `SHELLEXECUTEINFOA{cbSize=0x70,fMask=0x400,lpVerb="runas",lpFile=self}`; `ShellExecuteExA` | HIGH [O] |
| `FUN_180002cd8` | **Protocol request builder/sender** (type 1 = staging, type 2 = build) | builds map, calls HTTP path; `"StagingHash"` inserted via `FUN_180003df0` | HIGH [O] |
| `FUN_180001cbc` | **HTTPS client** (mbedTLS over WS2_32) | `SOCKET`, `sockaddr`, `connect`/`send`/`recv`, header assembly | MED [O/I] |
| `FUN_180001a0c` | **Context scrambler** (byte cipher) | 8‑byte const `df ed ca 3c 48 f9 9f 0a` (= `0x0a9ff9483ccaeddf`) XOR PID; keyed buffer walk | HIGH [O] |
| `FUN_180001b80` | **Console logger** | `AllocConsole`, `CONIN$`/`CONOUT$`, `SetConsoleTextAttribute`, `"Loader Processor %s…"` | HIGH [O] |
| `FUN_180003df0` | Map insert (key→value) | used for `"StagingHash"`, `"ImageAllocation"`, import entries | HIGH [O] |
| `FUN_180003e10` | Map get integer field | reads `"Error"`, `"RequestResult"`, `"HttpStatus"` | HIGH [O] |
| `FUN_180003e50` | Map get size field | reads `"ImagedSize"`, `"Entrypoint"` | HIGH [O] |
| `FUN_180003e6c` | Map get sub‑map | reads `"Imports"`, `"MappedSections"` | HIGH [O] |
| `FUN_180003e2c` | Response code getter | branch on `1` (ok) / `4` (outdated → gate message) | HIGH [O] |
| `FUN_180003e98` | Get module/proc name by index | used in import loop | MED [O] |
| `FUN_180003f98` / `FUN_180003fd4` | Get‑by‑ordinal / insert‑by‑ordinal | ordinal import path | MED [O] |
| `FUN_180004018` | Insert resolved module into import map | after `GetProcAddress` loop | MED [O] |
| `FUN_180003cba0` | `memset`‑like helper | zeroing buffers before use | MED [I] |
| `FUN_18003c500` | `memcpy`‑like helper | per‑section copy into mapped image | MED [I] |

### Import resolution & mapping sites (inside `entry`)
| Behavior | Evidence |
|----------|----------|
| Module resolve | `GetModuleHandleA(name)` → fallback `LoadLibraryA(name)` |
| Proc resolve (name) | `GetProcAddress(hModule, name)` → `FUN_180003df0(map, name, ptr)` |
| Proc resolve (ordinal) | `GetProcAddress(hModule, ordinal)` → `FUN_180003fd4(map, ord, ptr)` |
| Image alloc | `VirtualAlloc(NULL, ImagedSize, 0x3000, 4)` |
| Section copy | `memcpy(base + rva, src + off, size)` per `"MappedSections"` entry |
| Section protect | `VirtualProtect(base+adjust, size+adjust, 0x20 /*PAGE_EXECUTE_READ*/)` |
| Context build | 16‑byte key `88 21 33 ea ae c7 0f 00 2a 33 f1 cf 38 99 0d 00`; path; image ptr; size |
| Context encrypt | `FUN_180001a0c(ctx, len, 0xa9ff9483ccaeddf, GetCurrentProcessId())` |
| **Execute** | `(*entrypoint)(imageBase, 1, &ctx)`; `Sleep(10000)`; `VirtualFree(img,0,0x8000)`; `Sleep(INFINITE)` |

---

## C. Address resolution caveat

Stage‑2 addresses are **RVAs within a reconstructed image**. They are internally consistent and were used to rebuild `ext_stage2_payload.pe`, but they are **not** the runtime VAs (the outer loader `VirtualAlloc`s the image at an arbitrary base and does not apply relocations — the code is effectively position‑independent, using RIP‑relative addressing plus the rebuilt IAT). Treat stage‑2 addresses as offsets from the mapped image base. [I]
