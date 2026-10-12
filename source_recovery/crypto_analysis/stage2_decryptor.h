// stage2_decryptor.h
//
// RECOVERED SOURCE — outer-stage payload decryptor from ext.exe.
//
// Mapped original symbol:  FUN_180035df8   (VA 0x180035df8, .text)
//                          └ called directly by dispatcher FUN_180014d68 (first-call branch)
//
// RECOVERY STATUS: RECOVERED (verified).
//   The per-word transform below was re-implemented from the decompiled body of FUN_180035df8 and
//   run over the file's own bytes at DAT_18006056e. The output is a coherent MSVC/C++ inner image
//   (mbedTLS + UCRT), and the rebuilt sections are byte-identical to the decrypted blob
//   (SHA-256 903aa1b5…907e for the blob; see BUILD_AND_VALIDATION.md). This is a pure data
//   transformation (independent per 64-bit word, no cross-word state), so it is safe to reconstruct
//   as ordinary, compilable, non-operational code.
//
//   Classification legend used throughout this tree:
//     RECOVERED   — implementation faithful to the binary and validated against known output.
//     INFERRED    — behaviour reasoned from evidence but not byte-validated.
//     PLACEHOLDER — structure preserved; body intentionally left empty.
//     ANALYSIS-ONLY — described as pseudocode/state model; deliberately NOT implemented.
//
// This file is benign data-transformation code. It performs no loading, mapping, network, privilege,
// or execution-transfer operation. Operational loader components are represented separately as
// ANALYSIS-ONLY artifacts under ../analysis_models/.
//
#ifndef STAGE2_DECRYPTOR_H
#define STAGE2_DECRYPTOR_H

#include <stdint.h>
#include <stddef.h>

namespace recovered {

// ---------------------------------------------------------------------------
// Constants recovered from the outer image (see SOURCE_MAPPING.md).
// ---------------------------------------------------------------------------
inline constexpr uint32_t kStage2BlobRva   = 0x6056Eu;  // DAT_18006056e: encrypted blob in outer .data
inline constexpr size_t   kStage2WordCount  = 0xB39Cu;   // number of 64-bit words transformed
inline constexpr size_t   kStage2ImageSize  = 0x59CE0u;  // bytes copied into the RW allocation
inline constexpr uint32_t kStage2OepRva     = 0x3470u;   // inner entry point (buffer + 0x3470)
// Staging-hash constant handed from dispatcher FUN_180014d68 to the payload entry (see
// LICENSING_FUNCTION_MAP.md). Recorded here for traceability only — not used by the transform.
inline constexpr uint64_t kStagingHash      = 0x947424CB3A18CD6EULL;

// ---------------------------------------------------------------------------
// stage2_decrypt_word  —  FUN_180035df8 (loop body)
//
// Transforms one 64-bit little-endian word *independently*. All arithmetic is 64-bit modular
// (mod 2^64). Rotates are written as shift/OR pairs exactly as the decompiler emitted them, so the
// statement order maps 1:1 to the binary rather than being collapsed into rotl()/ror().
//
// x : raw little-endian word read from the encrypted blob.
// returns: the decrypted word.
// ---------------------------------------------------------------------------
uint64_t stage2_decrypt_word(uint64_t x);

// ---------------------------------------------------------------------------
// stage2_decrypt_blob  —  FUN_180035df8 (caller loop)
//
// Decrypts the blob word-by-word, in file order (increasing address).
//
// src : the encrypted bytes (may equal dst for in-place decrypt).
// dst : receives decrypted bytes; must hold dst_len bytes.
// dst_len: capacity of dst; the number of words processed is min(dst_len/8, kStage2WordCount).
// ---------------------------------------------------------------------------
void stage2_decrypt_blob(const uint8_t* src, uint8_t* dst, size_t dst_len);

}  // namespace recovered

#endif  // STAGE2_DECRYPTOR_H
