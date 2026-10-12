# FINAL_VALIDATION_REPORT.md

**Project:** `ext.exe` two‑stage loader — independent validation & final packaging
**Date:** 2026‑10‑12 · **Analyst scope:** static analysis + defensive‑rule validation only
**Guardrails honored:** original binary & Ghidra project preserved · binary never executed · recovered payload never executed · C2 never contacted · no working loader built

> **Static‑analysis completion ≠ dynamic‑behavior verification.** This report validates that the *evidence and detection artifacts* are internally consistent and that the rules *compile, match their intended targets, and do not false‑positive on a benign sample set*. It does **not** validate runtime behavior, which was never observed. The distinction is carried explicitly in §7.

---

## 1. Validation steps completed

| Step | Action | Outcome |
|------|--------|---------|
| **1. YARA validation** | Install an engine, compile the rules, scan the designed target, scan benign PEs, verify byte‑pattern offsets | Done — **1 defect found & fixed**, then all checks pass (§3) |
| **2. Sigma / network validation** | `sigma check` syntax, backend conversion for field‑name survival, synthetic‑event matching, FP analysis | Done — **0 errors**; field names survive; 10/10 synthetic tests pass (§4) |
| **3. Artifact integrity** | Recalculate SHA‑256 of every sample/report/rule/artifact from disk; confirm `ext.exe` unchanged | Done — `ext.exe` confirmed unchanged (§5) |
| **4. Consistency review** | Cross‑check addresses/constants/terminology/confidence labels across 7 documents | Done — 2 real issues found & resolved (§2) |
| **5. Final packaging** | Produce `FINAL_EVIDENCE_MANIFEST.md` + this report | Done (§8) |

---

## 2. Consistency review — findings and resolutions

Cross‑checked: `MALWARE_ANALYSIS_REPORT.md`, `RECONSTRUCTION_REPORT.md`, `IOCS.md`, `FUNCTION_MAP.md`, `NETWORK_DETECTIONS.md`, `YARA_RULE.yar`, `BUILD_AND_VALIDATION.md`.

### 2.1 Verified consistent (no conflict)
All core constants/addresses agree across every document that mentions them: sample SHA‑256, dispatcher magic `0x947424cb3a18cd6e`, stage‑2 entry `+0x3470`, blob `DAT_18006056e` / length `0x59ce0` / `0xb39c` words, decrypted‑blob hash `903a…`, context‑cipher constant `0xa9ff9483ccaeddf`, endpoint URL, the three Cloudflare IPs, `VirtualAlloc 0x59ce0`, `VirtualProtect 0x3c990`, and all loader/stage‑2 function addresses (`FUN_180014d68`, `FUN_180035df8`, `FUN_180036940`, `FUN_180036a70`, `FUN_1800381e0`, entry `0x180035058`). **No address or constant conflicts remain.**

### 2.2 Issue A — imprecise "valid PE" claim (RESOLVED)
- **Found:** the decrypted blob was described as "a structurally valid PE image." Verification showed the blob has **no MZ/PE header at offset 0** — it is a flat, headerless mapped image (the loader `VirtualAlloc`s it and maps sections manually). `ext_stage2_payload.pe` is an **analyst reconstruction** that *adds* a header + 4‑section table.
- **Evidence:** blob byte 0–1 = `00 00` (not `MZ`); rebuilt PE sections are **100 % byte‑identical** to the blob across all mapped regions (336,960 B compared, **0 differing**); the rebuilt PE omits a 15,584‑B tail (86.4 % zeros + an embedded Windows app manifest) that the section table doesn't cover.
- **Resolution:** `BUILD_AND_VALIDATION.md` §3.3 rewritten to state the blob is headerless, the PE is a reconstruction, and the two artifacts have different hashes **by design**. No claim of byte‑identity between blob and rebuilt PE is made.

### 2.3 Issue B — inconsistent confidence labelling (RESOLVED)
- **Found:** only `MALWARE_ANALYSIS_REPORT.md` (31×`[O]`/4×`[I]`/7×`[U]`) and `FUNCTION_MAP.md` (27/4/1) used the `[O]/[I]/[U]` evidence tags; `IOCS.md`, `NETWORK_DETECTIONS.md`, and `BUILD_AND_VALIDATION.md` used `HIGH/MED/LOW` or `High/Low` with no cross‑reference, and `YARA_RULE.yar` used `high`/`medium` in meta only.
- **Resolution:** each defensive document now carries an explicit legend reconciling the two scales (`HIGH`≈`[O]` observed, `MED`≈`[I]` inferred, `LOW`≈`[U]` unresolved). `NETWORK_DETECTIONS.md` additionally distinguishes *fidelity* (indicator uniqueness) from *evidence confidence*. **One scheme, three tiers, no ambiguity.**

### 2.4 Non‑issues reviewed and left as‑is
- **Terminology mix** (`stage‑2` / `stage2` / `inner` / `payload`): cosmetic variation, not a semantic conflict. All denote the same decrypted second stage; no content contradicts. Left unchanged to avoid unnecessary churn.
- **`ctxkey` two offsets:** validation found the context‑cipher constant at **both** `0x1a38` and `0x3b42` in the decrypted image. No document claimed a single offset (they named the constant, not a file offset), so this is an **enhancement, not a conflict** — both offsets added to `IOCS.md` §5.

---

## 3. YARA validation — detailed results

**Engine:** yara‑x 1.21.0 (Rust YARA reimplementation, `pe` module available). Classic libyara was **unavailable** (see §6.1).

### 3.1 Defect found and fixed
The shipped `ext_loader_packer_heuristics` originally contained:
```
pe.is_pe and pe.machine == "x86_64" and ( $magic and $seed )
```
- Under **yara‑x** this **failed to compile** (`pe.machine` is an `integer`, comparing to a `string`).
- Under **classic libyara** it would compile but **never match**, because `pe.machine` returns strings like `"AMD64"`, never `"x86_64"`.
- **This was a genuine, ship‑blocking bug** — the rule would have been inert on every real deployment. It was caught only because the rule was actually compiled and scanned, not merely written.

**Fix applied** (arch check dropped; both byte constants are x86‑64‑specific so the check is redundant):
```
pe.is_pe and ( $magic and $seed )
```

### 3.2 Post‑fix results (all pass)

| Test | Rule | Result |
|------|------|--------|
| Compile | both | **PASS** |
| Packed `ext.exe` (873,984 B) | `ext_loader_packer_heuristics` | **MATCH** (correct rule only) |
| Rebuilt stage‑2 PE (344,064 B) | `ext_loader_stage2_plaintext` | **MATCH** (correct rule only) |
| `ext - Copy.exe` (identical duplicate) | `ext_loader_packer_heuristics` | **MATCH** (correct — same bytes) |
| `new.exe` / `God - Copy.exe` (unrelated, 1,165,312 B) | — | **no match** (correct) |
| **70 benign** Windows PE files (System32/SysWOW64) | both | **0 false positives** |

### 3.3 Byte‑pattern offset verification (independent byte scan)

| Pattern | Packed `ext.exe` | Decrypted stage‑2 |
|---------|------------------|-------------------|
| `$magic` `6E CD 18 3A CB 24 74 94` | **`0x141a4`** ✓ | not found (correct — outer‑only) |
| `$seed` `FC 02 45 EB 0B 02 65 37` | **`0xbe5c6`** ✓ | not found (correct — outer‑only) |
| `$ctxkey` `DF ED CA 3C 48 F9 9F 0A` | not found (correct — inner‑only) | **`0x1a38` and `0x3b42`** |

Every documented offset matches. The `$ctxkey` **two‑occurrence** finding is new (recorded in `IOCS.md`).

### 3.4 YARA false‑positive assessment
0/70 benign files matched. The two rules are structurally low‑FP: the stage‑2 rule requires a C2 string **and** 5 protocol keys **and** 2 message strings **and** 1 TLS marker; the packer rule requires **both** rare 8‑byte constants. Caveat: the benign set is **narrow** (common signed Microsoft binaries only) — see §6.5.

---

## 4. Sigma / network‑detection validation — detailed results

**Tool:** sigma‑cli 3.1.0 + pySigma 1.5.1 (+ Splunk/ES backends installed during validation).

### 4.1 Syntax validation (`sigma check`)
| Rule | Errors | Condition errors | Issues |
|------|--------|------------------|--------|
| Network (domain/URL/SNI) | **0** | **0** | 1 × `IdentifierExistenceIssue` (no UUID) — **cosmetic**, medium severity |
| DNS (question name) | **0** | **0** | 1 × `IdentifierExistenceIssue` (no UUID) — cosmetic |

Both rules are **syntactically valid and semantically sound**. The missing‑UUID issue is a best‑practice nit, not a defect.

### 4.2 Field‑name / log‑source verification (backend conversion)
Converted to Splunk SPL to confirm field names survive mapping:
```
dst_domain="*discauth.net*" OR url="*/Auth/LoaderMapper.capp*" OR tls.sni="*discauth.net*"
dns.question.name="*discauth.net*"
```
Field names `dst_domain`, `url`, `tls.sni`, `dns.question.name` pass through **unchanged** (no pipeline). Log‑source assumptions (`category: proxy` / `category: dns`, `product: any`) are generic and portable. **Caveat:** ECS field mapping was **not** exercised (ECS pipeline unavailable) — see §6.2.

### 4.3 Synthetic‑event matching (10 labelled events)
Local re‑implementation of the exact `contains`/`condition` semantics. **10/10 correct:**
- **Positives (5):** proxy URL‑path, proxy domain, TLS SNI, DNS question, DNS subdomain — all matched correctly.
- **FP probes (5):** unrelated domain (no match ✓), Cloudflare IP‑only ×2 (no match ✓ — **IPs are not matching fields**), plus two **deliberate boundary probes** that surfaced real FP risks (below).

### 4.4 False‑positive findings (documented, not errors)
1. **Substring `contains` on domain:** `discauth.net` also matches a crafted `notdiscauth.net.attacker-test.example`. *Mitigation:* anchor exact/end‑with where the platform allows.
2. **URL‑path‑only match:** `/Auth/LoaderMapper.capp` fires even on an **unrelated host**, because the rule ORs the path selection independently. *Mitigation:* tighten to `(domain AND path)` for precision; current `1 of sel_*` favors recall.
3. **Shared Cloudflare IPs deliberately excluded:** `104.26.1.205` / `172.67.74.91` / `104.26.0.205` are **not** matching fields (confirmed by FP probes → no match). Rationale in §4.5.

### 4.5 Why shared‑CDN IPs must not be standalone indicators
These three IPs are **Cloudflare anycast** addresses shared by **thousands of unrelated legitimate tenants**. A rule matching them alone would fire on any Cloudflare‑proxied site — an unacceptable false‑positive volume that would bury real alerts. The domain (`discauth.net`), URL path, and SNI are the **high‑fidelity** signals; IPs are recorded as context in `IOCS.md`/`NETWORK_DETECTIONS.md` but intentionally kept **out of** the matching logic. Blocking on IP alone is explicitly advised against.

---

## 5. Artifact integrity

`ext.exe` recalculated SHA‑256 = `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511` — **unchanged**, matches the value recorded at the start of analysis. Full hashes of all 20+ deliverables are in `FINAL_EVIDENCE_MANIFEST.md` §2, all recalculated from disk.

---

## 6. Tests NOT run / limitations (honest record)

| # | Not run | Reason | Impact |
|---|---------|--------|--------|
| **6.1** | Classic **libyara** compile+scan | `yara-python` needs MSVC 14+ (absent); no Py3.14 wheel. Used **yara‑x** (Rust reimplementation) instead. | Rules use portable core syntax, but an **on‑libyara confirmation is outstanding**. |
| **6.2** | Sigma **ECS pipeline** conversion | ECS processing pipeline not installed. Splunk (no pipeline) was run. | ECS field mapping (`dst_domain`→`destination.domain`, etc.) **unverified** against a real ECS pipeline. |
| **6.3** | Live **SIEM** execution | No Splunk/Elastic/SigmaHQ dataset available. | Matching logic validated via local re‑implementation, **not** a production engine. |
| **6.4** | **MSVC compile** of decryptor | No MSVC toolchain. | Decryptor correctness rests on the Python reference (deterministic + coherent) + constant cross‑check — **not** a build‑tested C binary. |
| **6.5** | Broad **benign corpus** | Only 70 local System32/SysWOW64 files available. | FP assessment is **representative but narrow**; not a broad real‑world corpus. |
| **6.6** | **Dynamic / runtime** execution | **Prohibited and never performed.** No traffic generated. | C2 request/response bytes, delivered‑payload capability, and `IsDebuggerPresent` outer call path all remain **unverified [U]**. |

---

## 7. Static‑analysis completion vs. dynamic‑behavior verification

This is the core framing the whole project must respect:

| Dimension | Status |
|-----------|--------|
| **Static‑analysis completion** | **Complete.** Two‑stage architecture traced; decryptor reconstructed, deterministic, constant‑verified, and byte‑validated; behavior (elevation, C2 handshake, dynamic imports, manual mapping, control transfer) documented from disassembly; IOCs/YARA/Sigma extracted and **validated against the sample and a benign set**; artifacts hash‑pinned and cross‑consistent. |
| **Dynamic‑behavior verification** | **Not performed (by design).** The binary and payload were never run; no network traffic was generated; no C2 response was captured. Everything about *runtime* behavior — actual wire bytes, delivered‑payload content and capability, live server status, whether the anti‑debug branch executes — is **[U]/Low** and remains so. |

Deterministic, coherent decryption is evidence that the **transform** was reconstructed correctly. It is **not** evidence that the payload is benign or that its runtime behavior is understood — the payload was never executed or behaviorally assessed.

---

## 8. Outstanding questions (require dynamic analysis in an isolated sandbox — not performed here)

1. What are the exact C2 request/response bytes on the wire?
2. What payload does the server deliver, and what is its capability?
3. Is the C2 (`discauth.net`) live, and what does it return today?
4. Does the `IsDebuggerPresent` anti‑debug branch actually execute in the outer stub?
5. Do the Sigma rules translate cleanly through a real **ECS** pipeline?
6. Do the YARA rules compile and match identically under **classic libyara**?

---

## 9. Summary

- **Files checked:** 7 documents cross‑checked for consistency; 20+ artifacts hash‑verified; 2 YARA rules + 2 Sigma rules validated; 5 analysis/user binaries scanned; 70 benign PEs scanned.
- **Tests passed:** 14 (§4 of the manifest) — including YARA compile/match/0‑FP, Sigma 0‑error, 10/10 synthetic matches, decryptor determinism + constant + byte‑identity, and `ext.exe` integrity.
- **Tests failed:** 1 → the original YARA `pe.machine == "x86_64"` condition (compile error on yara‑x / no‑match on libyara). **Found, fixed, and re‑verified.**
- **Tests not run:** 6 categories (§6) — libyara, ECS pipeline, live SIEM, MSVC compile, broad benign corpus, dynamic execution — each documented with reason and impact.
- **Consistency issues found & resolved:** 2 (imprecise "valid PE" claim; inconsistent confidence labelling) + 1 enhancement (ctxkey two offsets).
- **Remaining issues:** the §6 limitations and §8 open questions — all static/dynamic gaps, none of which are concealed or overstated.

*Static analysis and defensive‑rule validation only. Original binary preserved. Recovered payload never executed. Server never contacted. No successful test was fabricated; every unavailable test is documented as not run.*
