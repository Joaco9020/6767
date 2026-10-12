# Licensing / Authorization Function Map

**Question asked:** identify licensing-related functions, strings, state variables, authorization calls
and error paths; determine whether the logic is a separate component or coupled to the loader; and identify
benign components that could be reconstructed plus how a clean replacement licensing component could be
designed (for software the owner is authorized to modify).

**Headline finding:** this sample contains **no client-side software-licensing subsystem**. There are no
license-key, seat, trial, expiry, entitlement, activation, or hardware-ID strings anywhere. What exists is
a **server-side authorization round-trip** (fetch a configuration/payload from a remote endpoint), and it
lives **entirely inside the decrypted inner payload — not in the outer loader `ext.exe`.**

---

## 1. Evidence: where the authorization strings actually live

Direct byte search of both artifacts:

| string | `ext.exe` (outer) | `ext_stage2_payload.pe` (inner) |
|---|---|---|
| `https://discauth.net/Auth/LoaderMapper.capp` | **not found** | **found** `0x484b8` |
| `StagingHash` | not found | found `0x48550` |
| `RequestResult` | not found | found `0x484e8` |
| `HttpStatus` | not found | found `0x484f8` |
| `ImagedSize` / `Imports` / `Ordinal` | not found | found `0x48620/0x48630/0x48650` |
| `ImageAllocation` / `Entrypoint` | not found | found `0x48688/0x486b0` |
| `MappedData` / `MappedSections` | not found | found `0x486c0/0x486d0` |
| `https://` (any) | **not found** | found |
| `License` / `license` / `Serial` / `HWID` | not found | **not found** |

Conclusion: the outer loader has **no** HTTP/auth/protocol strings at all (it is only an obfuscated
bootstrap). All authorization logic is in the payload.

---

## 2. The authorization state machine (evidence: payload string cluster `0x48400–0x486f8`)

Extracted verbatim from the payload (file offsets shown):

```
0x48400  Accept-Encoding: identity          HTTP request headers
0x48420  Connection: close
0x48438  Content-Length: %Iu
0x48450  Content-Type: %s
0x48468  HTTP/1.
0x48478  Transfer-Encoding: / chunked
0x484a8  Type                    ─┐
0x484b0  Error                   │ response fields
0x484e8  RequestResult           │
0x484f8  HttpStatus              ─┘
0x484b8  https://discauth.net/Auth/LoaderMapper.capp   ← AUTH ENDPOINT
0x48504  runas                                   UAC elevation verb
0x48510  Failed to Elevate Process Privileges    error path
0x48538  Setup Failure: 0x0                      error path
0x48550  StagingHash                             request field
0x48560  Initial Response: 0x0   ─┐
0x48578  Response                │
0x48608  Initial Response: 0x1   │
0x48620  ImagedSize              │
0x48638  Initial Response: 0x2   ├─ staged response states 0x0..0x4
0x48658  Initial Response: 0x3   │
0x48670  Initial Response: 0x4   ─┘
0x48590  This version of the loader processor has been marked as outdated!   ← rejection path
0x485d2  Please download a new loader from your provider.                    ← rejection path
0x48698  Build Response: 0x0/0x1/0x2       build states
0x486b0  Entrypoint / MappedData / MappedSections   PE-mapping fields
```

Interpretation (**analysis-only, not operational**): the payload performs an HTTP request to the auth
endpoint carrying a `StagingHash`; the server replies with a typed response (`Type`, `RequestResult`,
`HttpStatus`, `Error`) selecting one of several staged states (`Initial Response: 0x0..0x4`). One branch
is a **version-kill switch** ("marked as outdated"). Successful states expose mapping fields
(`ImagedSize`, `Imports`, `Ordinal`, `ImageAllocation`, `Entrypoint`, `MappedData`, `MappedSections`)
that describe an inner PE to map. A `runas`/elevation path and `Setup Failure`/`Failed to Elevate` are
separate error paths.

**No entitlement/license concept** is present. The `serialNumber / emailAddress / postalAddress /
postalCode / initials / generationQualifier / title / dnQualifier / pseudonym / uniqueIdentifier` strings
(`0x3ee10–0x3eef8`) are the **X.500 Distinguished-Name attribute set used by mbedTLS X.509 parsing** —
certificate fields, not license fields. Payload build markers: `mbedtls_https_nologs` (`0x483c0`),
C++20 (`operator<=>`, `co_await`), `std::` exceptions → a modern C++ program doing TLS certificate auth.

---

## 3. How authorization affects program state (evidence-backed call graph)

Only the **outer** portion is demonstrated by decompilation; the payload's internal auth flow is
represented as a non-operational state machine (§4).

```
[OS loader]
   └─ entry 0x180035058
        └─ 154 computed-jump gap stubs (REASSESSMENT: verified, REA_DEOBFUSCATION_RESULTS.md)
             └─ dispatcher FUN_180014d68          ← state latch DAT_1800bb185
                  ├─ (first call only, DAT_1800bb185==0):
                  │     FUN_180035df8 decrypt → FUN_180036940 alloc
                  │     → FUN_180036a70 IAT    → FUN_1800381e0 protect
                  │        (writes payload entry ptr into DAT_1800bb185)
                  └─ (*DAT_1800bb185)(DAT_1800bb18d, 0x947424cb3a18cd6e, p2, p3)
                                 ▲                        ▲
                                 │                        └ staging-hash constant (the only
                                 │                          auth datum the outer loader supplies)
                                 └ payload entry (inner image, built by the 4 core fns)
```

**How authorization affects state (outer loader):** the outer loader itself performs **no** authorization.
Its only contribution to authorization is (a) building the payload and (b) passing the constant
`0x947424cb3a18cd6e` (matching the payload's `StagingHash` field) into the payload entry. The lazy latch
`DAT_1800bb185` ensures the payload is built exactly once; the dispatcher then tail-calls it.

**State variable:** `DAT_1800bb185` (payload entry function pointer, NULL until built) is the only
authorization-adjacent state visible in the outer image.

---

## 4. Component separation verdict

| aspect | finding | confidence |
|---|---|---|
| Is there a software-licensing subsystem? | **No** (no license/seat/expiry/HWID strings in either component) | HIGH |
| Where does authorization live? | **Inner payload only** — outer loader has zero auth/HTTP strings | HIGH |
| Separate component or coupled to loader? | **Separate.** The outer loader is a generic bootstrap; the payload owns the auth protocol. The only coupling is the staging-hash constant passed at the payload-entry call. | HIGH |
| Authorization type | server-side config/payload delivery over TLS to `discauth.net`, with a version-kill rejection path | MEDIUM-HIGH (string evidence; wire behavior not observed — static only) |

**Scope note:** per the engagement rules I do **not** reconstruct the payload's HTTP fetch, the PE-mapping
logic, or the elevation chain as functional code. They are represented as an analysis-only state
machine below.

### Analysis-only authorization state machine (NON-OPERATIONAL)

```
states: START → [elevate?] → REQUEST(StagingHash) → RESPONSE
RESPONSE switch(Type/RequestResult):
   case "outdated-version" → ERROR: "marked as outdated / download new loader" → STOP
   case Initial Response 0x0 → {Response}                                  → SETUP
   case Initial Response 0x1 → {ImagedSize}                                → SETUP
   case Initial Response 0x2 → {Imports, Ordinal}                          → BUILD
   case Initial Response 0x3 → {ImageAllocation}                           → BUILD
   case Initial Response 0x4 → {Entrypoint, MappedData, MappedSections}    → MAP
BUILD states 0x0..0x2 → assemble in-memory image from mapping fields
error paths: "Failed to Elevate Process Privileges", "Setup Failure: 0x0", HttpStatus/Error
```
*(This is a data-model/state description for understanding, deliberately not compiled or connected to
any network code.)*

---

## 5. Benign reconstruction candidates & a clean licensing design (for owned software)

**What can be safely reconstructed as real, benign source** (evidence supports it, non-operational):

1. **Stage-2 decryptor** (`FUN_180035df8`) — a pure per-word 64-bit modular data transformation,
   already VERIFIED (SHA-256 of output matches the known blob). Reconstructed as
   `crypto_analysis/stage2_decryptor.{h,cpp}`. *This is a data-transform, not a loader.*
2. **Authorization state model** — the staged response enum + error paths, as a header-only data model
   (`analysis_models/authorization_state.h`), with no I/O.

**A clean, independent licensing component** (design only — nothing here is taken from the sample, and it
does not bypass anyone's entitlements):

```
LicenseClaims { subject, product, issued_at, expires_at, features[] , signature }
verify_license(claims, trusted_key):
    1. verify signature over canonical serialization with trusted_key   // authenticity
    2. check expires_at > now (clock-tamper resistant via monotonic + server time if available)
    3. check product/subject match this build
    4. return {valid, reason}                                          // explicit error paths
```
Principles: signature covers all fields (no unsigned "state"); verification returns typed errors
(reason codes) rather than a bare bool; entitlement checks are **server-authoritative** when offline
verification can be bypassed; keep the verifier in its own module so it can be audited and replaced
independently of the application logic. This mirrors the *separation* observed here (auth in its own
component), while being an ordinary signed-claims design — it neither forges licenses nor defeats any
third-party check.
