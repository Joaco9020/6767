# Network Detections — `ext.exe` loader ("Loader Mapper")

**Source:** static analysis only. No connection to any indicator below was attempted, and no server response was observed. Everything here is derived from strings, import tables, and control flow recovered from the sample.

**Fidelity note:** the C2 sits behind **Cloudflare anycast**. The domain and URL path are the high‑fidelity signals; the raw IPs are weak on their own (shared by many unrelated legitimate sites). Rules are written to prefer the former.

**Confidence notation** (reconciled with `IOCS.md` / `MALWARE_ANALYSIS_REPORT.md`): **High** ≈ **[O]** directly observed in static evidence · **Med** ≈ **[I]** inferred · **Low** ≈ **[U]** unresolved. Fidelity (high/low) refers to indicator uniqueness, distinct from evidence confidence.

---

## 1. Static network indicators

| Indicator | Value | Where recovered | Fidelity |
|-----------|-------|-----------------|----------|
| Domain | `discauth.net` | stage‑2 string `+0x484b8` (encrypted at rest) | **High** |
| Full URL | `https://discauth.net/Auth/LoaderMapper.capp` | stage‑2 string `+0x484b8` | **High** |
| Path | `/Auth/LoaderMapper.capp` | same | **High** |
| IPv4 (Cloudflare) | `104.26.1.205` | stage‑2 `+0x481e8` | Low (shared) |
| IPv4 (Cloudflare) | `172.67.74.91` | stage‑2 `+0x481f8` | Low (shared) |
| IPv4 (Cloudflare) | `104.26.0.205` | stage‑2 `+0x48208` | Low (shared) |

> The domain/IPs appear **only inside the encrypted stage‑2 blob**, so a simple `strings` pass on the packed file will **not** surface them. Detection must either run post‑unpack (memory/yara‑on‑unpacked) or rely on the behavioral/protocol signals below.

---

## 2. Application‑layer protocol (statically recovered)

**Transport:** HTTPS (TLS 1.2/1.3) via **statically‑linked mbedTLS** over a raw `WS2_32` socket — *not* WinHTTP/WinINet. This is itself a useful network‑behavior tell.

**Request:** `POST`, binary body (`Content-Type: application/octet-stream`), `Accept-Encoding: identity`, `Connection: close`, `Content-Length: %Iu`. The client rotates its `User-Agent` between a Chrome‑122 and a Firefox‑121 string.

**Message field names (application layer, distinctive):** `StagingHash`, `Response`, `Error`, `RequestResult`, `HttpStatus`, `ImagedSize`, `Imports`, `Ordinal`, `ImageAllocation`, `Entrypoint`, `MappedData`, `MappedSections`.

**Two‑exchange sequence (from control flow):**
1. Request `type=1` carries `StagingHash` → response provides `ImagedSize` + `Imports` (a module→symbol map).
2. Request `type=2` carries `ImageAllocation` (a pointer) + the now‑resolved `Imports` → response provides `Entrypoint` + `MappedSections`.
3. The image is copied into an `RX` region and called.

**Gate / branch strings** that indicate a licensing check on the response: `"This version of the loader processor has been marked as outdated!…"` (response code path), `"Initial Response: 0x…"`, `"Build Response: 0x…"`.

---

## 3. Suggested detection logic (defensive)

### 3.1 Sigma — network‑level (domain / SNI / URL)

```yaml
title: Loader Mapper C2 - discauth.net Beacon/Download
status: experimental
description: Detects HTTPS C2 to discauth.net path /Auth/LoaderMapper.capp used by the two-stage loader.
references: [ static analysis of e5b06f26...a511 ]
logsource:
  category: proxy   # or firewall / dns / tls
  product: any
detection:
  sel_domain:
    - dst_domain|contains: 'discauth.net'
  sel_url:
    - url|contains: '/Auth/LoaderMapper.capp'
  sel_sni:
    - tls.sni|contains: 'discauth.net'
  condition: 1 of sel_*
falsepositives:
  - None expected for the path; the bare domain may be benign if unrelated tenants resolve through Cloudflare.
level: high
tags: [ attack.command-and-control, attack.t1071.001 ]
```

### 3.2 Sigma — DNS / resolution

```yaml
title: DNS Lookup for discauth.net (Loader Mapper C2)
logsource: { category: dns, product: any }
detection:
  sel: { dns.question.name|contains: 'discauth.net' }
  condition: sel
falsepositives: [ Minimal; investigate any resolution ]
level: high
```

### 3.3 Host/network behavioral co‑signals (raise confidence)

Correlate the network hit with these host behaviors to cut FPs:

- Process **relaunches itself elevated** (UAC `runas` consent), then immediately performs the HTTPS POST.
- Same process allocates RW memory of size **`0x59CE0` (367,840 B)**, then flips a **`0x3C990`‑byte** span to `PAGE_EXECUTE_READ`.
- `IsDebuggerPresent` referenced in the same process tree (both stages import it).

---

## 4. Explicitly out of scope / caveats

- **No C2 was contacted** and no response was captured; live liveness and server‑supplied payload are **unknown**.
- **IP‑only matches are weak** — Cloudflare anycast IPs are broadly shared. Do **not** block on the IPs alone; require the domain/path or protocol fields.
- The **delivered second payload** is not in this sample and cannot be fingerprinted here.
- Detection of the *TLS inner flow* is limited by encryption; match on SNI/hostname, JA3‑only if you accept higher FP, or the plaintext HTTP fields when the client is instrumented (e.g., a sandbox that terminates TLS).
