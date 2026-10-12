# FUNCTION REASSESSMENT — ext.exe (source_recovery project)

Reassessment of the 1,217 functions previously labeled *junk/decoy*. That earlier label rested only on
**direct-call-graph reachability** and was not sufficient. This pass re-examines every function against
direct callers, data references, exception/unwind registration, function-pointer tables, indirect-control-
transfer sites, and obfuscation markers, and assigns an evidence-based classification per function.

Original `ext.exe` and the Ghidra project are unchanged. No function was renamed or merged. No binary was executed.

## 1. Classification counts

| Classification | Count | Confidence | Meaning |
|---|---|---|---|
| DIRECTLY_REACHABLE | 6 | HIGH=6 | on a direct-call path from the entry root (entry + dispatcher + its 4 callees) |
| INDIRECTLY_REFERENCED | 106 | MEDIUM=106 | address stored in a .data function-pointer table (demonstrated data reference) |
| POTENTIAL_OBFUSCATED_CODE | 430 | MEDIUM=430 | inside the unreachable network, shows obfuscation markers or an indirect-transfer site |
| POSSIBLE_DECOY | 261 | MEDIUM=261 | orphan (0 direct callers) with decoy/obfuscation markers |
| LIKELY_DEAD_OR_UNUSED | 165 | LOW=165 | orphan (0 direct callers), no obfuscation markers, no data reference |
| UNRESOLVED | 255 | LOW=255 | inside the unreachable network; static evidence insufficient to establish reachability or decoy status |
| **TOTAL** | **1223** | | 1,223 internal procedures |

## 2. Ground-truth structural facts (all verified from the PE)

- **Exception/unwind directory** (`.pdata`, RVA 0x5cc2a): **1,217 RUNTIME_FUNCTION entries** — these are *exactly* the 1,217 non-reachable functions. Each has a real registered unwind frame, i.e. they are properly-framed compiled functions, **not** random byte-junk. Conversely the **6 reachable loader-core functions have no unwind entry** (hand-crafted obfuscation stubs).
- **Function-pointer table** in `.data` (VA ≈ 0x1800d5964, file 0xd4364–0xd4b4c): a dense 8-byte-stride array storing **106 distinct function start addresses**. 45 of these 106 are orphans. Only **3 code references** point near it (`lea` at 0x180045daf / 0x1800482d4 / 0x1800560c0) and **all 3 are themselves in unreachable code**; no reachable code references it and no `movabs` loads its address.
- **Sole execution root**: only 3 sections exist (.text/.data/.reloc) — **no `.CRT`, no `.tls`, no export directory**. The TLS callback array at VA 0x180057000 is **empty (0 callbacks)**. Therefore the PE entry point (0x180035058) is the *only* execution root.
- **Indirect control-transfer surface**: 76 `jmp reg` + 4 `call reg` + 8 `jmp [reg+..]` + 62 `call [reg+..]` = **150 true indirect sites** (plus 570 `call [rip+d]` IAT/API calls, 0 `jmp [rip+d]` jump-tables). 138 of these sites sit inside the 1,217. The 6 reachable functions' own indirect sites (entry→dispatcher computed jump, dispatcher `call rax`→payload, alloc/protect IAT) **never target the 1,217**.
- **No function-range overlaps**: the 1,217 exception ranges are disjoint (0 `MISIDENTIFIED_FUNCTION_BOUNDARY`).
- **No runtime callbacks/initializers**: 0 TLS callbacks, no CRT initializer section → 0 `RUNTIME_CALLBACK_OR_INITIALIZER`.

## 3. Why the earlier pass reached the functions by direct-call edges only

The earlier junk label came from a BFS over **direct `call` edges** seeded at entry+dispatcher, which reached 6 functions. That method is blind by construction to: computed jumps (`jmp reg`), register/`[reg+disp]` indirect calls, function-pointer tables, and unwind registration. Each of those channels is quantified above, and every one was checked in this pass.

## 4. Largest address-range clusters per classification

### DIRECTLY_REACHABLE (6)
- `0x180036940`–`0x180036a70`  (span 0x130)
- `0x180014d68`–`0x180014d68`  (span 0x0)
- `0x180035058`–`0x180035058`  (span 0x0)
- `0x180035df8`–`0x180035df8`  (span 0x0)
- `0x1800381e0`–`0x1800381e0`  (span 0x0)

### INDIRECTLY_REFERENCED (106)
- `0x1800550d8`–`0x180055778`  (span 0x6a0)
- `0x180009948`–`0x180009f58`  (span 0x610)
- `0x1800451a8`–`0x180045650`  (span 0x4a8)
- `0x18001c8f0`–`0x18001cce8`  (span 0x3f8)
- `0x180033280`–`0x180033638`  (span 0x3b8)
- `0x180013358`–`0x1800136d0`  (span 0x378)

### POTENTIAL_OBFUSCATED_CODE (430)
- `0x1800195f8`–`0x18001a9c8`  (span 0x13d0)
- `0x18004cbc0`–`0x18004df88`  (span 0x13c8)
- `0x180046858`–`0x180047c00`  (span 0x13a8)
- `0x18000eef0`–`0x180010000`  (span 0x1110)
- `0x18000b9e0`–`0x18000ca60`  (span 0x1080)
- `0x180042880`–`0x180043828`  (span 0xfa8)

### POSSIBLE_DECOY (261)
- `0x18003f998`–`0x180040868`  (span 0xed0)
- `0x18003b100`–`0x18003bc28`  (span 0xb28)
- `0x180040d68`–`0x180041860`  (span 0xaf8)
- `0x18004e860`–`0x18004f258`  (span 0x9f8)
- `0x180005cf0`–`0x1800065e8`  (span 0x8f8)
- `0x1800025d8`–`0x180002d80`  (span 0x7a8)

### LIKELY_DEAD_OR_UNUSED (165)
- `0x18004eb08`–`0x18004f3e8`  (span 0x8e0)
- `0x180005b20`–`0x180006368`  (span 0x848)
- `0x18003af48`–`0x18003b780`  (span 0x838)
- `0x180052cf0`–`0x180053518`  (span 0x828)
- `0x180045b98`–`0x180046200`  (span 0x668)
- `0x18000eab0`–`0x18000f028`  (span 0x578)

### UNRESOLVED (255)
- `0x180042818`–`0x1800437b8`  (span 0xfa0)
- `0x18000cc98`–`0x18000dae0`  (span 0xe48)
- `0x18003bca8`–`0x18003c778`  (span 0xad0)
- `0x180004200`–`0x180004c38`  (span 0xa38)
- `0x18001d090`–`0x18001da50`  (span 0x9c0)
- `0x18003dd00`–`0x18003e688`  (span 0x988)

## 5. Most suspicious / highest-value cases

Functions with the most *real* (non-spray) imported-API calls, still unreachable — the best candidates for genuine logic if a hidden entry is ever found:

- `0x180009218` FUN_180009218 — POSSIBLE_DECOY (MEDIUM), realAPIs=4, callers=0, in-table=N
- `0x180003c70` FUN_180003c70 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=3, callers=4, in-table=N
- `0x1800065e8` FUN_1800065e8 — POSSIBLE_DECOY (MEDIUM), realAPIs=3, callers=0, in-table=N
- `0x1800093e8` FUN_1800093e8 — POSSIBLE_DECOY (MEDIUM), realAPIs=3, callers=0, in-table=N
- `0x180043a90` FUN_180043a90 — INDIRECTLY_REFERENCED (MEDIUM), realAPIs=3, callers=0, in-table=Y
- `0x1800011a0` FUN_1800011a0 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=2, callers=2, in-table=N
- `0x180002d80` FUN_180002d80 — POSSIBLE_DECOY (MEDIUM), realAPIs=2, callers=0, in-table=N
- `0x180002fc8` FUN_180002fc8 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=2, callers=2, in-table=N
- `0x1800057a8` FUN_1800057a8 — POSSIBLE_DECOY (MEDIUM), realAPIs=2, callers=0, in-table=N
- `0x1800063d0` FUN_1800063d0 — POSSIBLE_DECOY (MEDIUM), realAPIs=2, callers=0, in-table=N
- `0x180006930` FUN_180006930 — INDIRECTLY_REFERENCED (MEDIUM), realAPIs=2, callers=1, in-table=Y
- `0x180006f90` FUN_180006f90 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=2, callers=2, in-table=N
- `0x180007320` FUN_180007320 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=2, callers=1, in-table=N
- `0x180007888` FUN_180007888 — POSSIBLE_DECOY (MEDIUM), realAPIs=2, callers=0, in-table=N
- `0x1800085a0` FUN_1800085a0 — POTENTIAL_OBFUSCATED_CODE (MEDIUM), realAPIs=2, callers=1, in-table=N

Interpretation: even the API-richest unreachable functions combine *semantically unrelated* APIs (file iteration + registry + socket + GUI in one routine) and read never-initialized registers — the signature of deliberate decoys rather than coherent application logic. This supports, but does not *prove*, the decoy reading; they are therefore held at MEDIUM/LOW confidence, not asserted as junk.

## 6. What would resolve the remaining uncertainty

- **Static:** forward/concrete emulation of the 150 indirect sites (each `jmp reg` stub reads a `.data` seed and computes its target) would close most `UNRESOLVED`/`POTENTIAL_OBFUSCATED_CODE` cases and confirm/deny a hidden entry into the 1,217. The overlapping-instruction decode (e.g. `jmp rcx` sitting inside a `movabs` immediate) requires path-aware emulation, not linear sweep.
- **Dynamic:** a controlled execution trace would settle execution definitively, but is deliberately **withheld** here per the safety scope (never execute the sample).

## 7. Honest bottom line

The 1,217 functions are **structurally real** (unwind-registered, some reachable only through an obfuscation network or a function-pointer table) but **none is demonstrably reachable from the sole execution root** through any direct call, indirect site, or data reference that reaches back into the loader core. 106 are genuinely *referenced* by a data table whose own users are unreachable. 426 are orphans (261 with decoy markers, 165 without). 255 remain honestly `UNRESOLVED`. The earlier blanket "junk" label is thus **retracted and replaced** by this graded, evidence-tagged classification; no function is asserted dead without the supporting facts recorded per-row in `FUNCTION_REASSESSMENT.tsv`.

