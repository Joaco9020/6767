// authorization_state.h
//
// ANALYSIS-ONLY data model — NOT functional authorization code and NOT a network client.
//
// Mapped original component:  inner payload (decrypted stage-2 image), string cluster at
//                             file 0x48400–0x486f8 of ext_stage2_payload.pe
//                             (https://discauth.net/Auth/LoaderMapper.capp, StagingHash,
//                              Initial Response: 0x0..0x4, Build Response: 0x0..0x2, …)
//
// RECOVERY STATUS: ANALYSIS-ONLY (state enumeration + error reasons derived from string evidence).
//   The outer loader ext.exe contains NO authorization strings (verified by byte search). This header
//   records ONLY the observed response-state vocabulary and error reasons so the authorization flow can
//   be reasoned about. It deliberately contains no HTTP code, no request construction, no payload
//   handling, and no execution of anything received — per the engagement scope, operational
//   remote-payload-fetch / loader behaviour is represented as analysis, never as compilable code.
//
//   The enum values below are INFERRED ordinal labels (0x0..0x4 / 0x0..0x2) taken verbatim from the
//   "Initial Response: 0xN" / "Build Response: 0xN" strings; their exact semantic mapping to server
//   fields is UNRESOLVED (static string evidence only — the wire exchange was never observed).
//
#ifndef AUTHORIZATION_STATE_H
#define AUTHORIZATION_STATE_H

#include <cstdint>

namespace auth_model {

// Response fields observed verbatim in the payload string table.
// (Names are reproduced from the artifact; they are protocol keys, not invented identifiers.)
//   Type, Error, RequestResult, HttpStatus, StagingHash, Response
//   ImagedSize, Imports, Ordinal, ImageAllocation, Entrypoint, MappedData, MappedSections

// "Initial Response: 0xN" staged states (ordinal labels from the artifact).
enum class InitialResponse : uint8_t {
    Stage0 = 0x0,   // string "Initial Response: 0x0" + "Response"
    Stage1 = 0x1,   // "Initial Response: 0x1" + "ImagedSize"
    Stage2 = 0x2,   // "Initial Response: 0x2" + "Imports" / "Ordinal"
    Stage3 = 0x3,   // "Initial Response: 0x3" + "ImageAllocation"
    Stage4 = 0x4,   // "Initial Response: 0x4" + "Entrypoint"/"MappedData"/"MappedSections"
};

// "Build Response: 0xN" states.
enum class BuildResponse : uint8_t {
    Stage0 = 0x0,
    Stage1 = 0x1,
    Stage2 = 0x2,
};

// Error / rejection reasons observed as strings. These are the authorization error paths.
enum class AuthError : uint8_t {
    None,
    OutdatedLoader,     // "This version of the loader processor has been marked as outdated!"
                        // "Please download a new loader from your provider."
    ElevateFailed,      // "Failed to Elevate Process Privileges"
    SetupFailure,       // "Setup Failure: 0x0"
    HttpFailure,        // HttpStatus / Error / RequestResult indicate failure
};

// Static description of one authorization exchange, for documentation/tests only.
// Holds field NAMES and observed ordinal states. Carries no bytes and performs no I/O.
struct AuthObservation {
    const char* staging_hash_field;   // "StagingHash"
    InitialResponse initial;          // observed staged response
    BuildResponse    build;           // observed build state
    AuthError        error;           // observed error reason (None if none)
};

// Pure predicate: does the observed state indicate an authorization rejection?
// (reason model only — no I/O, no clock, no signature check; those belong to a real, separate
//  verifier and are intentionally not implemented here.)
constexpr bool IsRejected(AuthError e) { return e != AuthError::None; }

}  // namespace auth_model

#endif  // AUTHORIZATION_STATE_H
