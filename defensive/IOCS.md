# Indicators of Compromise (IOCs) — `ext.exe`

**Sample SHA‑256:** `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511`
**Derivation:** static analysis only; the binary and its recovered payload were never executed, and no server was contacted.
**Confidence key (reconciled with the report's evidence tags):** **HIGH** = directly read from the sample bytes (**[O]** directly observed in static evidence) · **MED** = inferred from structure/API semantics (**[I]** inferred from multiple observations) · **LOW** = speculative / needs runtime confirmation (**[U]** unresolved or unverified). The `HIGH/MED/LOW` scale here and the `[O]/[I]/[U]` tags in `MALWARE_ANALYSIS_REPORT.md` / `FUNCTION_MAP.md` denote the same three tiers.

> Every indicator below is specific to this sample. Generic Windows API names are **excluded** (they would flood false positives) unless paired with an unusual constant, string, or byte pattern unique to this family.

---

## 1. File / hash indicators

| Type | Value | Confidence | Context |
|------|-------|-----------|---------|
| SHA‑256 | `e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511` | HIGH | The packed outer sample (`ext.exe`) |
| Size | `873,984` bytes | HIGH | — |
| PE64 ImageBase | `0x180000000` | MED | Non‑default base is common but not unique |
| Encrypted blob SHA‑256 (decrypted stage‑2) | `903AA1B53777D9792CE85BF57E1BDF7972A7630B49D345EE4F1DF366EC18907E` | HIGH | Deterministic output of the verified decryptor; unique to this stage‑2 image |

---

## 2. Network indicators

See `NETWORK_DETECTIONS.md` for full context. Summary:

| Type | Value | Confidence | Notes |
|------|-------|-----------|-------|
| Domain | `discauth.net` | HIGH | Appears only inside encrypted stage‑2; not in outer plaintext |
| URL path | `/Auth/LoaderMapper.capp` | HIGH | Full URL string in stage‑2 |
| Full URL | `https://discauth.net/Auth/LoaderMapper.capp` | HIGH | Stage‑2 RVA `+0x484b8` |
| IPv4 | `104.26.1.205` | HIGH | Stage‑2 RVA `+0x481e8`; Cloudflare range |
| IPv4 | `172.67.74.91` | HIGH | Stage‑2 RVA `+0x481f8`; Cloudflare range |
| IPv4 | `104.26.0.205` | HIGH | Stage‑2 RVA `+0x48208`; Cloudflare range |

**Caveat [MED]:** the IPs are Cloudflare anycast addresses shared by many legitimate sites. Treat the **domain/path** as the high‑fidelity signal; the IPs alone are weak.

---

## 3. Protocol / behavioral strings (stage‑2)

These field names are an unusually distinctive set and are strong family markers:

| String | Stage‑2 RVA | Confidence |
|--------|-------------|-----------|
| `StagingHash` | `+0x48550` | HIGH |
| `RequestResult` | `+0x484e8` | HIGH |
| `HttpStatus` | `+0x484f8` | HIGH |
| `ImagedSize` | `+0x48620` | HIGH |
| `ImageAllocation` | `+0x48688` | HIGH |
| `MappedSections` | `+0x486d0` | HIGH |
| `MappedData` | `+0x486c0` | HIGH |
| `Entrypoint` | `+0x486b0` | HIGH |
| `Loader Processor %s\n%s\n` | `+0x48258` | HIGH |
| `This version of the loader processor has been marked as outdated!…` | `+0x48590` | HIGH |
| `mbedtls_https_nologs` | `+0x483c0` | MED |

---

## 4. Crypto / transport fingerprints

| Marker | Stage‑2 RVA | Confidence | Meaning |
|--------|-------------|-----------|---------|
| `secp256r1` | `+0x3f520` | HIGH | mbedTLS ECDH curve |
| `CHACHA20` / `CHACHA20-POLY1305` | `+0x3e81d` | HIGH | mbedTLS AEAD |
| `AES-128-GCM` | `+0x3e84d` | HIGH | mbedTLS AEAD |
| `master secret` / `key expansion` | `+0x3e468` | HIGH | TLS 1.2/1.3 key schedule labels |

The **full statically‑linked mbedTLS** inside the loader is itself a notable trait (most loaders use WinHTTP/WinINet).

---

## 5. Structural / code indicators

| Indicator | Value | Confidence |
|-----------|-------|-----------|
| Entry‑chain seed qword | qword @ `0x1800bfbc6` | HIGH |
| Stage‑2 blob location | `0x18006056e`, length `0x59ce0` | HIGH |
| Decrypt loop word count | `0xb39c` | HIGH |
| Stage‑2 entry offset | `buffer + 0x3470` | HIGH |
| Context key (16 B) | `88 21 33 ea ae c7 0f 00 2a 33 f1 cf 38 99 0d 00` | HIGH |
| Context cipher constant | `0xa9ff9483ccaeddf` (XOR process ID); LE bytes `DF ED CA 3C 48 F9 9F 0A`, found in the **decrypted** stage‑2 at payload offsets `0x1a38` **and** `0x3b42` (two occurrences), absent from the packed outer file | HIGH |
| Dispatcher magic arg | `0x947424cb3a18cd6e` (LE bytes `6E CD 18 3A CB 24 74 94`), packed file offset `0x141a4` | HIGH |
| Entry‑chain seed bytes | `FC 02 45 EB 0B 02 65 37`, packed file offset `0xbe5c6` | HIGH |

---

## 6. Host / behavioral indicators (runtime — not observed here)

Because the sample was never run, these are **architectural expectations**, not observed events [MED]:

- Process launches a child of itself with **elevated** token (UAC `runas` consent dialog).
- Process allocates an `0x59ce0`‑byte RW region, then flips a `0x3c990` span to **PAGE_EXECUTE_READ**.
- A network POST of binary data to the URL in §2.
- `IsDebuggerPresent` referenced (both stages).

---

## 7. Explicit non‑indicators (to reduce false positives)

To keep this rule set precise, the following are **deliberately not** IOCs on their own: `VirtualAlloc`, `VirtualProtect`, `GetProcAddress`, `LoadLibraryA`, `ShellExecuteExA`, `OpenProcessToken`, `GetTokenInformation`, `IsDebuggerPresent`, `Sleep`. These are ubiquitous legitimate APIs; only their **combination with the constants/strings above** is meaningful.
