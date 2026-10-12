# Decompiled Source Code — ext.exe

## Target Information

| Property | Value |
|----------|-------|
| **Executable** | `ext.exe` |
| **SHA-256** | `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511` |
| **Format** | PE64 (x86-64), ImageBase `0x180000000` |
| **Entry Point** | `0x180035058` (RVA `0x035058`) |
| **Internal functions** | 1,223 |
| **External imports** | 220 |
| **Strings** | 357 |
| **Analysis provider** | Ghidra 12.1.4 (via REA) |
| **Compiler / runtime** | MSVC + UCRT (UCRTBASE/MSVCRT imports, SEH, x64 ABI) |

> **The binary was never executed.** All output below is derived from static analysis only.

---

## Directory Contents

### 1. Decompiled pseudocode — `functions_XXXX_YYYY.md` (PRIMARY OUTPUT)

The full decompiled pseudocode for **all 1,223 internal functions**, split into 13 files by
procedure index (the enumeration order returned by the analysis provider, which is
address-ascending). Every file uses the same structure:

```markdown
# Decompiled Functions: index <X>-<Y>

Total requested: <n>, succeeded: <n>, failed: 0

## Function: <NAME> (<ADDRESS>)

```c
<decompiled pseudocode>
```

---
```

| File | Index range | Functions |
|------|-------------|-----------|
| `functions_0000_0099.md` | 0–99 | 100 |
| `functions_0100_0199.md` | 100–199 | 100 |
| `functions_0200_0299.md` | 200–299 | 100 |
| `functions_0300_0399.md` | 300–399 | 100 |
| `functions_0400_0499.md` | 400–499 | 100 |
| `functions_0500_0599.md` | 500–599 | 100 |
| `functions_0600_0699.md` | 600–699 | 100 |
| `functions_0700_0799.md` | 700–799 | 100 |
| `functions_0800_0899.md` | 800–899 | 100 |
| `functions_0900_0999.md` | 900–999 | 100 |
| `functions_1000_1099.md` | 1000–1099 | 100 |
| `functions_1100_1199.md` | 1100–1199 | 100 |
| `functions_1200_1222.md` | 1200–1222 | 23 |
| **Total** | | **1,223 / 1,223 (100%)** |

Decompilation success rate: **1,223 / 1,223 = 100 %** (0 failures across all chunks).

### 2. Richer per-function dossier — `batch_0201_0400.md` (SUPPLEMENTARY)

An independent, higher-detail decompilation pass over procedure index 200–400 produced by a
separate analysis run. Each entry here additionally carries **caller / callee relationship
data** and fuller metadata than the uniform `functions_*` series.

**Legend / relationship to the primary series:**

- `functions_0200_0299.md` + `functions_0300_0399.md` → same 200 functions as
  `batch_0201_0400.md`, but uniform formatting (address + pseudocode only).
- Use `batch_0201_0400.md` when you want caller/callee context for that address range.
- Use the `functions_*` series for complete, uniform, machine-greppable coverage of the
  whole binary.
- The authoritative whole-binary call graph lives in `../callgraph.tsv` (see below), so the
  relationship data in `batch_0201_0400.md` is redundant for ranges outside 200–400 but
  remains useful as corroborating detail.

### 3. Data files in the parent directory (`C:\Users\joaco\Documents\567\`)

| File | Rows | Description |
|------|------|-------------|
| `internal_procedures.tsv` | 1,223 | Address + name of every internal procedure |
| `external_procedures.tsv` | 220 | Import name, DLL, function for every import |
| `strings.tsv` | 357 | Every string with its address |
| `callgraph.tsv` | 1,723 | **Authoritative call graph** (Ghidra `procedure_callees`): `caller_address, caller_name, callee_address, callee_name`. Includes `EXTERNAL:0xNN → DLL::Function` edges for API calls. |
| `callers.tsv` | 1,175 | `callgraph.tsv` inverted for internal callees: who calls whom |
| `callgraph_pseudocode.tsv` | 2,396 | Call edges recovered by parsing the decompiled pseudocode text (catches calls Ghidra's call-graph omits, e.g. in unreachable/bogus blocks) |
| `api_calls.tsv` | 539 | `function → imported API` edges parsed from pseudocode |
| `data_refs.tsv` | 361 | `function → DAT_/​_DAT_ global` references parsed from pseudocode |
| `function_subsystems.tsv` | 450 | Every function that directly calls an API, tagged with subsystem(s) |
| `SUBSYSTEM_INDEX.md` | 528 memberships (450 unique) | Readable subsystem → function index; each row links back to the chunk file holding that function's pseudocode |

---

## Labelling Convention

- **Decompiled output** = everything in `functions_*.md` and `batch_0201_0400.md`.
  This is tool-generated pseudocode and is **not** original source. It preserves the
  decompiler's variable names (`FUN_…`, `DAT_…`, `local_…`, `unaff_RBX`), its type-inference
  guesses, and its recovery warnings (`/* WARNING: … */`).
- **Reconstructed code** = no rewritten/re-authored source has been placed in this directory.
  Any reconstruction derived from this material is written up separately in
  `../RECONSTRUCTION_REPORT.md`, and is explicitly marked as inference rather than
  decompiler output.
- **Addresses are preserved verbatim** in every heading, so any line can be traced back to
  the exact function in the binary.

---

## Known Quality Caveats

The binary is protected/obfuscated, which degrades pseudocode readability:

1. **Control-flow obfuscation** — many functions show flattened CFGs with bogus arithmetic
   on stack variables that has no semantic effect. Such statements are artifacts of the
   protector, not original source logic.
2. **Unreachable-block warnings** — `/* WARNING: Removing unreachable block … */` marks
   junk/dead code inserted by the protector; the real path is the one shown.
3. **Type propagation not settling** — `/* WARNING: Type propagation algorithm not settling */`
   means the decompiler could not converge on types; treat those signatures as unreliable.
4. **Register-lifetime artifacts** — `unaff_RBX`, `in_RAX`, `stack0x…` indicate the
   decompiler lost track of a value's origin; the underlying computation exists but its
   inputs were not recovered.
5. **Encrypted strings** — literal strings are largely absent; they are decrypted at runtime.
   Recovered strings live in `../strings.tsv`.
6. **Indirect dispatch** — the obfuscated entry dispatcher performs computed jumps, so a
   substantial share of true edges are absent from any static call graph (473 functions have
   no static caller, 451 have no static callee).

---

## Reproducing / Extending

Chunks were produced with REA's `list_procedures` → slice → `batch_decompile({addresses})`
pipeline (the parameter is `addresses`, not `procedures`), formatting each item as
`## Function: <name> (<address>)` + fenced pseudocode. Large outputs are auto-archived by
OpenCode under `%LOCALAPPDATA%`-style `tool-output/` and were copied here verbatim.

Cross-reference data came from REA's `procedure_callees` (batched over all 1,223 addresses,
0 errors, ~11.5 s) plus regex extraction over the pseudocode for API and data references.
