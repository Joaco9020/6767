# FINAL_EVIDENCE_MANIFEST.md

**Purpose.** Integrity record for the `ext.exe` malware-analysis project: SHA‑256 of every preserved sample, report, detection rule, and analysis artifact; tool/environment details; which tests were actually executed; and any unavailable tools or incomplete validation.

**Scope guardrails (all honored):** original `ext.exe` and the Ghidra project preserved unchanged · the original binary was never executed · the recovered payload was never executed · no connection was made to the C2 (`discauth.net`) or any indicator · no working loader was built.

**Manifest generated:** 2026‑10‑12 02:00 UTC · **All hashes recalculated directly from the files on disk** (not copied from any earlier report).

---

## 1. Original sample integrity

| File | SHA‑256 (recalculated) | Bytes | Status |
|------|------------------------|-------|--------|
| `ext.exe` | `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511` | 873,984 | **UNCHANGED** — matches the value recorded at the start of analysis |
| `ext - Copy.exe` | `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511` | 873,984 | Byte‑identical duplicate of `ext.exe` (same hash); not part of the analysis target, left untouched |

**Ghidra project (`ghidra_project/`)** — preserved and not modified during this validation pass. (The project is a directory of binary database files; no file‑level hash is asserted here because analysis legitimately *reads* it. It was not written to, deleted, or relocated by this task.)

> **Note on the two unrelated PE files** in the working folder (`new.exe`, `God - Copy.exe`, both `1750f85a…768a`, 1,165,312 B): these are **user files unrelated to the sample** — confirmed by the YARA scan below (neither matches either rule). They are recorded for completeness and were not modified.

---

## 2. SHA‑256 of final reports, detection rules, and analysis artifacts

All hashes below were recalculated from the current files. Files edited during validation carry the updated hash.

### 2.1 Reports

| File | SHA‑256 | Bytes |
|------|---------|-------|
| `MALWARE_ANALYSIS_REPORT.md` | `4a241e0d4d941a003a57ac4e5fe4cb26f8b14991466b3dcb18c0eead95b1c797` | 14,768 |
| `RECONSTRUCTION_REPORT.md` | `9b9ccda0245bb2889291b4a680a29a963a2ef588050918df18737a396f334303` | 30,525 |
| `BUILD_AND_VALIDATION.md` *(edited during validation)* | `7196d0b894861b1a1e021c8f81b8f55060c95430906fb000eadc2e6022c652d8` | 8,179 |
| `SUBSYSTEM_INDEX.md` | `1d74ee0a3446f5d9406ceb3859830655b334f042ee45ae18b0c69a587fce8f8e` | 43,079 |

### 2.2 Detection rules & defensive artifacts

| File | SHA‑256 | Bytes |
|------|---------|-------|
| `defensive/YARA_RULE.yar` *(edited during validation — compile‑error fix)* | `f959fbd1a9442bab7fbce02d890fe152c73c2c921cf1021e2b3488569a388d66` | 4,806 |
| `defensive/IOCS.md` *(edited during validation)* | `0e58b47bf09728d171917ac1bc125f6a89c34a2dd4ac5f78a28a2d1193156335` | 5,430 |
| `defensive/NETWORK_DETECTIONS.md` *(edited during validation)* | `cbabd5043f69734ddf5cf04821ff16745995acf0c407e6a73064a1878c90fa25` | 5,195 |
| `defensive/FUNCTION_MAP.md` | `7b718712909f6f22b7e324e81582f0a1f0ab1fb5928c316fb3b268f06d25c8d1` | 6,499 |

### 2.3 Analysis artifacts (decryptor, rebuilt payload)

| File | SHA‑256 | Bytes |
|------|---------|-------|
| `reconstructed_source/ext_stage2_payload.pe` *(rebuilt analyst PE)* | `c52957ad6429c4dab7c6e2711abac9c721061a08d291378da4be2b01a603f2bb` | 344,064 |
| `reconstructed_source/README.md` | `88a587c357b0bcaf674ab090a0644ed83cca45e8536c1a596787ce9feae83edf` | 3,238 |
| `reconstructed_source/packer/unpack_payload.h` | `b34af9e6b52f1590959f21336498f94f0c1d8805c689f6502866646ecfc817b7` | 2,226 |
| `reconstructed_source/packer/unpack_payload.c` | `46e77cfa6ca24054194240f953e1c78ff006273b2f5eeadfdc8ff0ffa803011f` | 9,235 |
| `reconstructed_source/packer/decrypt_test.c` | `6d7165ba5e5d0c00914ae525192fcb66cb61f180ba68a7214e6c41d5568c1420` | 1,632 |

### 2.4 Inventories (from the Ghidra analysis pass)

| File | SHA‑256 | Bytes |
|------|---------|-------|
| `internal_procedures.tsv` | `e7b765dd46111fb8c599d48f091447a4d3e2d93a58e9a69acf80e600045d0614` | 33,030 |
| `external_procedures.tsv` | `e0c9c745d102c81bae237a0f793b88ea2b91e9726b2b4aab1414f4ae4edc98ef` | 12,361 |
| `strings.tsv` | `5a8044065b2f1fca376bf264deff9b022be7047f6fe1a23cc69f9faff7d78541` | 16,635 |
| `api_calls.tsv` | `7a248e4c046bd3853304bc4d76cac2211b95551048363b4f9daf2500c288d5d7` | 29,603 |
| `func_quality.csv` | `c014c17d5cb7390a66e22fffeb201c78389bbe187a42f08fc16eb356bb8dc50f` | 100,564 |
| `indirect_calls.csv` | `16521b9e6fc9ce235173e3d8ce4edc5047da491393982ea3c51ae250546742f2` | 66 |

### 2.5 Decrypted‑blob reference hash (temp analysis file, not shipped)

| Artifact | SHA‑256 | Bytes |
|----------|---------|-------|
| Raw decrypted stage‑2 blob (`stage2_payload.bin`, in `%TEMP%\opencode`, not a shipped deliverable) | `903aa1b53777d9792ce85bf57e1bdf7972a7630b49d345ee4f1df366ec18907e` | 367,840 |

> The raw blob (`903a…`) and the rebuilt analyst PE (`c529…`) are **different artifacts by design**. See `BUILD_AND_VALIDATION.md` §3.3: the rebuilt PE is a headered reconstruction that reproduces every mapped byte exactly but omits a 15,584‑byte manifest/padding tail and adds a synthesized PE header + section table. Their hashes are therefore expected to differ.

---

## 3. Tool versions & environment

| Component | Version / value |
|-----------|-----------------|
| OS | Windows 11 (10.0.26200‑SP0), x86‑64 |
| CPU | AMD64 Family 23 Model 8 Stepping 2 |
| Python | 3.14.4 |
| **YARA engine** | **yara‑x 1.21.0** (Rust YARA implementation; `pe` module available) |
| **Sigma CLI** | **sigma‑cli 3.1.0** |
| pySigma (core) | 1.5.1 |
| pySigma Splunk backend | 2.1.0 (installed during validation) |
| pySigma Elasticsearch backend | 2.1.1 (installed during validation) |
| Capstone | 5.0.9 (5.0.7 import surface) |
| cryptography | 49.0.0 |
| Ghidra (via REA provider) | 12.1.4 |
| MSVC C compiler | **NOT AVAILABLE** (see §5) |

**Tools installed during this validation pass:** `sigma-cli`, `pysigma`, `yara-x`, `pySigma-backend-splunk`, `pySigma-backend-elasticsearch`. (`yara-python`/libyara could **not** be installed — no MSVC build tools; no prebuilt wheel for Python 3.14. Validation therefore used **yara‑x**, an independent Rust reimplementation of YARA, not classic libyara. This is a limitation, not a fabrication — see §5.)

---

## 4. Tests actually executed and results

| # | Test | Tool | Result |
|---|------|------|--------|
| 1 | Compile `YARA_RULE.yar` | yara‑x 1.21.0 | **PASS** (after fix — see §5.1) |
| 2 | Scan packed `ext.exe` | yara‑x | **PASS** — matches `ext_loader_packer_heuristics` only (correct) |
| 3 | Scan rebuilt stage‑2 PE | yara‑x | **PASS** — matches `ext_loader_stage2_plaintext` only (correct) |
| 4 | Scan 70 benign Windows PE files (System32/SysWOW64) | yara‑x | **PASS** — **0 false positives** |
| 5 | Scan unrelated user PE (`new.exe`, `God - Copy.exe`) | yara‑x | **PASS** — no match (correct; not the sample) |
| 6 | Independent byte‑pattern offset verification (`$magic`, `$seed`, `$ctxkey`) | Python byte scan | **PASS** — `$magic` @ `0x141a4`, `$seed` @ `0xbe5c6` (packed); `$ctxkey` @ `0x1a38` **and** `0x3b42` (decrypted) |
| 7 | Sigma syntax validation (`sigma check`) — network rule | sigma‑cli 3.1.0 | **PASS** — 0 errors, 0 condition errors (1 cosmetic "no UUID" issue) |
| 8 | Sigma syntax validation (`sigma check`) — DNS rule | sigma‑cli 3.1.0 | **PASS** — 0 errors, 0 condition errors (1 cosmetic "no UUID" issue) |
| 9 | Sigma → Splunk SPL conversion (field‑name survival) | pySigma splunk backend | **PASS** — `dst_domain`, `url`, `tls.sni`, `dns.question.name` preserved |
| 10 | Synthetic Sigma matching (10 labelled events: positives + FP probes) | Python local re‑implementation | **PASS** — 10/10 correct |
| 11 | Decryptor determinism (2 runs → identical hash) | Python reference | **PASS** — `903a…907E` both runs |
| 12 | Decryptor constant cross‑check (C vs decompiled body) | Python | **PASS** — 0 unexplained arithmetic keys |
| 13 | Rebuilt‑PE vs blob byte‑identity per section | Python byte compare | **PASS** — 336,960 B compared, **0 differing** |
| 14 | `ext.exe` integrity (recalculated hash) | Python hashlib | **PASS** — matches recorded value |

---

## 5. Unavailable tools, missing datasets, incomplete validation

Recorded honestly; no result below is presented as a passing test.

### 5.1 YARA engine substitution (classic libyara unavailable)
- **Not run:** classic `libyara` / `yara-python` compile+scan. `yara-python` requires MSVC 14+ build tools, which are absent, and no prebuilt wheel exists for Python 3.14.
- **What was run instead:** **yara‑x 1.21.0**, a Rust reimplementation. yara‑x is highly compatible but **not byte‑for‑byte identical** to classic libyara. A rule that compiles on yara‑x may still differ subtly on libyara (e.g. regex engine, module behavior). The rules use only core syntax (`import "pe"`, hex patterns, ascii/wide strings, `contains`, integer conditions), which is portable, but **an on‑libyara confirmation remains outstanding**.
- **Defect found & fixed:** the shipped `ext_loader_packer_heuristics` originally contained `pe.machine == "x86_64"`. This **does not compile** under yara‑x (`pe.machine` is an integer there) and would **not match** under classic libyara either (`pe.machine` returns strings like `"AMD64"`, never `"x86_64"`). The condition was corrected to rely on `pe.is_pe` + the two rare byte constants (both x86‑64‑specific), which compiles and detects correctly on yara‑x. This is a real bug caught by validation, not a hypothetical.

### 5.2 Sigma backend/pipeline gaps
- **ECS pipeline conversion:** the `ecs` processing pipeline was not installed, so conversion to Elasticsearch **EQL/Lucene with ECS field mapping** was not exercised. Splunk conversion (no pipeline) was run and confirmed field names pass through unchanged. ECS field mapping (`dst_domain` → ECS `destination.domain`, `tls.sni` → `tls.client.server_name`, etc.) therefore **remains unverified against a real ECS pipeline**.
- **No live SIEM:** no Splunk/Elastic/SigmaHQ test-harness dataset was available, so rules were **not** executed against a real log pipeline. Matching logic was validated via a labelled Python re‑implementation of the exact `contains`/`condition` semantics, not a production engine.

### 5.3 C compiler unavailable
- **Not run:** compiling `unpack_payload.c` / `decrypt_test.c` with MSVC. No MSVC toolchain present. The decryptor's correctness rests on the Python reference (deterministic + coherent output) and the constant‑level cross‑check — **not** on a build‑tested C binary. `BUILD_AND_VALIDATION.md` §4 records how to close this gap where a toolchain exists.

### 5.4 No dynamic / runtime validation (by design)
- **Not run:** dynamic execution of `ext.exe`, of the decrypted payload, of the manual mapper, or of the C2 client — **prohibited and never performed**. No network capture exists because **no traffic was generated**. Consequently:
  - the actual C2 request/response bytes are **unverified** (static reconstruction only);
  - the runtime behavior and capability of the delivered payload are **unknown**;
  - the `IsDebuggerPresent` outer‑stub call path remains **unresolved** (import present, no statically resolved caller).
- These are **[U]/Low** items by construction, not test failures.

### 5.5 Datasets not present
- No vendor threat‑intel feed, no malware corpus beyond this sample, and no benign corpus other than locally installed Windows System32/SysWOW64 binaries (70 files). The false‑positive assessment is therefore **representative but narrow** — it covers common signed Microsoft PE files, not a broad real‑world corpus.

---

## 6. What this manifest does **not** assert

- It does **not** assert the payload is benign, malicious, or safe — it was never executed or behaviorally assessed.
- It does **not** assert successful C2 communication or that any server is live — none was contacted.
- It does **not** assert the rebuilt PE is byte‑identical to the loader's mapped image — it is a faithful reconstruction that reproduces mapped bytes exactly but adds a header and omits a manifest tail (§2.5).
- It does **not** claim dynamic‑behavior verification — only static‑analysis completion.

*Static analysis and defensive‑rule validation only. Original binary preserved. Recovered payload never executed. Server never contacted.*
