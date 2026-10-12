# REA Deobfuscation Results — `ext.exe` entry dispatch chain

**Target:** `C:\Users\joaco\Documents\567\ext.exe`
**SHA-256:** `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511`
(verified identical before and after analysis — the file was opened read-only and never modified)
**Provider:** REA bound to **Ghidra 12.1.4** (`provider.id = ghidra`)
**Safety:** the sample was never executed; no network contact; the existing Ghidra project was not modified.

---

## 1. Was REA actually invoked, and what did it return?

Yes. REA was bound to the binary via `open_binary` (format `pe`, arch `x86_64`, hash matched) and used
throughout. Representative invocations and their evidence IDs:

| REA call | subject | provider fact returned |
|---|---|---|
| `analyze_function(0x180035058)` | `entry` | body `0x180035058–0x1800350ef` (152 B); sig `undefined __fastcall entry(void)`; full assembly + pseudocode + high-pcode value flow |
| `analyze_function(0x180014d68)` | dispatcher | body `0x180014d68–0x180014dbc` (85 B); 4 callees; pseudocode (below) |
| `inspect_native_instruction(0x1800350ed)` | entry terminal | `JMP R10`, bytes `49ffe2`, flow **`COMPUTED_JUMP`** |
| `inspect_native_instruction(0x180014d68)` | dispatcher start | `SUB RSP,0x48`, bytes `4883ec48`, flow `FALL_THROUGH` |
| `read_bytes(...)` | gap stubs | raw bytes confirming `push;ret` (`51c3`) and `jmp r10` (`49ffe2`) |
| `inspect_native_instruction` ×150 | indirect-site candidates | per-address Ghidra decode status (§3) |

Evidence IDs (recorded): entry `ev_e8204191…`, dispatcher `ev_38e6dc15…`, entry-jmp `ev_d256083e…`,
`push;ret` `ev_df621ac4…`, `0x1800150a7` `ev_4fa9bcc3…`, dispatcher-start `ev_993843bc…`.

---

## 2. The obfuscation pattern and how it was resolved

### 2.1 Entry stub — straight-line arithmetic computed jump

Ghidra's high-pcode value flow for `entry` shows a single straight-line block reading a seed from
`.data` and ending in `JMP R10`. Two obfuscation idioms are visible immediately:

* **Constant splitting** — `MOV RCX,0x134a566cd452e905; ADD RCX,0x26378e28`. The Ghidra pseudocode
  shows only the collapsed sum `0x134a566cfa8a772d`. **Independent concrete emulation re-assembled the
  split to exactly that constant** (`match=True`) — confirming the emulation is faithful to the listing.
* **Junk instruction** — `ROR R10,0x0` (rotate by zero) and a duplicated `SUB R10,RCX`.

Every p-code op was flagged `is_dead:true`. That is a **misleading Ghidra AST artifact**: the flags are
set because the operations' only consumer is the terminal indirect jump — they are precisely the address
computation, not dead code.

### 2.2 Concrete evaluation → one verified hop

Emulating the reported assembly against the on-disk seed (`[0x1800bfbc6] = 0x3765020beb4502fc`):

```
COMPUTED JUMP TARGET (R10) = 0x180034df8
```

**Verification:** `0x180034df8` disassembles as a clean instruction boundary (`push r12; push rdx;
mov rcx,[rip+…]`) — a seed-reading stub that **Ghidra never recovered as a function** (it sits in the
194-byte gap between `FUN_180034d10` end `0x180034df6` and `FUN_180034eb8`).

### 2.3 Full chain trace → 154 hops to the dispatcher

A concrete, register-state-carrying emulator followed every computed jump. It had to handle **two**
jump idioms the naive scan missed:

1. `jmp reg` (`r10/rcx/r9/r11`)
2. **`push reg; ret`** — e.g. `0x1800346c0: lea r11,[rip]; add rcx,r11; push rcx; ret`
   (raw bytes at `0x1800346ca = 51 c3`). A first pass stopped early here, wrongly reporting `ret`.

Result — **exactly 154 computed-jump hops**, `entry 0x180035058 → FUN_180014d68` (the dispatcher),
where real conditional branching begins. This **independently reproduces** the earlier "154 hops to the
dispatcher" claim by concrete emulation — a path the direct-call BFS (reaching only 6 functions) was
structurally blind to.

**Structural findings:**

* **All 154 stubs live in Ghidra "gap" regions** — none is a Ghidra function. They are interleaved among
  the 1,217 functions (e.g. stub `0x180034df8` is 2 bytes after `FUN_180034d10`).
* **Concealment mechanism:** each stub is followed by `CC` (INT3) padding (`51 c3 cc cc cc cc …`). Ghidra's
  function detector treats the INT3 run as a boundary and never decodes the stub. Raw `read_bytes`
  confirms the real opcodes where Ghidra reports **`undecodable`**.
* Some stubs read fresh seeds from `.data` (`mov rcx,[rip+disp]`); others are self-contained `movabs`
  constant chains. A few read from the encrypted-payload region (`0x18006054x`).

### 2.4 Dispatcher (REA pseudocode, evidence `ev_38e6dc15…`)

```c
void FUN_180014d68(param_1, param_2, param_3) {
  if (DAT_1800bb185 == 0) {          // first call only
    FUN_180035df8();                  // decrypt  (direct callee)
    FUN_180036940();                  // alloc    (direct callee)
    FUN_180036a70();                  // IAT      (direct callee)
    FUN_1800381e0();                  // protect  (direct callee)
  }
  (*DAT_1800bb185)(DAT_1800bb18d, 0x947424cb3a18cd6e, param_2, param_3); // payload entry
}
```

So the demonstrated bootstrap is:
`entry → 154 hidden gap-stubs → dispatcher → [decrypt, alloc, iat, protect] → payload entry`
(with the staging-hash constant `0x947424cb3a18cd6e` passed to the payload).

---

## 3. Indirect-surface reassessment (why the "150 sites" figure was inflated)

The prior inventory listed **150** register/memory-indirect sites from a raw-byte scan. Every candidate
was re-checked against Ghidra's own instruction decoder (`inspect_native_instruction`). Results:

| classification | count | meaning |
|---|---:|---|
| `GENUINE_COMPUTED_CALL` | **1** | `0x180014db6 CALL RAX`, `flow=COMPUTED_CALL` — the dispatcher→payload call |
| `BOOTSTRAP_CHAIN_JUMP` | **71** | real `jmp reg` bytes, but they are the traced chain's terminals (byte-scan caught the `ff` at `terminal`/`terminal+1` of REX-prefixed `49 ff eX`) |
| `FALSE_POSITIVE_INTERIOR_DECOY` | **74** | Ghidra `not-instruction-boundary` — the `ff` byte sits *inside* another instruction's immediate |
| `UNRESOLVED_GAP` | **4** | Ghidra `undecodable` gap, not in the traced chain (`0x180016d10`, `0x180032f4c`, `0x18001a0ae`, `0x1800301fa`) |

Worked example of a decoy (`0x180007079`):

```
0x180007071: sbb rax, 0xf              (48 83 d8 0f)
0x180007075: movabs rdx, 0xe1ff2dbe    (48 ba | be 2d ff e1 00 00 00 00)
                       site 0x180007079 = "ff e1" = jmp rcx   ← INTERIOR to the immediate
```

On the linear path `0x180007079` is not an instruction at all. Backward synchronization correctly fails
because **no real instruction stream reaches it**. Other decoys sit inside `sub`/`retf`/`xchg`/`sbb`
immediates. Sample contexts also showed garbage (`out dx, eax`; `call [rax+0x4cca3348]` with an absurd
displacement).

**Conclusion:** of the 150 raw-byte candidates, **74 (~49%) are byte-scan artifacts** and **71 are the
bootstrap chain already traced**. There is **no genuine indirect dispatch feeding the 1,217 functions**;
the only genuine computed transfer is the single payload call.

---

## 4. Obfuscation patterns resolved (evidence-tagged)

| # | pattern | resolved? | evidence |
|---|---|---|---|
| 1 | constant splitting (`MOV`+`ADD`) | yes | re-assembled to `0x134a566cfa8a772d` = pseudocode constant |
| 2 | junk instrs (`ROR 0`, double `SUB`, POPCOUNT opaque predicates) | yes | entry listing |
| 3 | computed jump via `jmp reg` | yes | 71 sites; `COMPUTED_JUMP` at `0x1800350ed` |
| 4 | computed jump via `push reg; ret` | yes | raw `51 c3` at `0x1800346ca` |
| 5 | position-dependent base (`lea r11,[rip]`) | yes | `0x1800346c0` stub |
| 6 | INT3-padded gap concealment | yes | `cc cc cc cc` after each stub; Ghidra `undecodable` vs raw bytes |
| 7 | register-passed data-flow across jump boundaries | yes | `FUN_180034d10` consumes `R10` set by prior stub |
| 8 | planted fake-jump bytes in immediates | yes | 74 interior decoys (§3) |

---

## 5. What remains unresolved

* **4 `UNRESOLVED_GAP`** indirect candidates: Ghidra reports `undecodable` and they are not part of the
  traced chain. Their real targets are undetermined (they may be further decoy bytes or unreached gap code).
* **Reachability of the 1,217 functions** is still not demonstrated by any genuine indirect edge. Resolving
  it definitively requires either path-aware emulation across *Ghidra-decoded* computed-flow instructions
  or a dynamic trace — the latter is deliberately withheld (never execute the sample).
* This pass verified the **entry→dispatcher** path. It did **not** re-trace the payload's internal
  authorization flow (that lives in the decrypted inner image, not the outer loader — see
  `LICENSING_FUNCTION_MAP.md`).
