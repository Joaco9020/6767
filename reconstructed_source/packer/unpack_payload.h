/* packer/unpack_payload.h
 *
 * Outer-stage payload decryptor recovered from ext.exe.
 *
 * VERIFIED. The function below is FUN_180035df8 (outer image). It was re-implemented
 * from the decompiled body and, when run over the file's own bytes at DAT_18006056e,
 * reproduces a coherent inner image (see ../docs/ and BUILD_AND_VALIDATION.md for the
 * reproduction evidence). The re-implementation is the ground truth for this header.
 *
 * The routine transforms each 64-bit little-endian word *independently* — there is no
 * cross-word chaining state — so the whole loop is a pure per-word function applied
 * 0xb39c times. That property is what makes an exact static reconstruction possible.
 *
 * NOTE ON SEMANTICS: every operator below is 64-bit modular (mod 2^64). Rotates are
 * expressed the way the decompiler emitted them (a rotate by N == a pair of shifts/ORs
 * that recover the rotated-out bits). Field names describe role, not provenance.
 */
#ifndef UNPACK_PAYLOAD_H
#define UNPACK_PAYLOAD_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Inner image constants (recovered from the outer loader, see loader/). */
#define STAGE2_BLOB_RVA      0x6056Eu   /* DAT_18006056e: encrypted blob in outer .data */
#define STAGE2_WORD_COUNT    0xB39Cu    /* number of 64-bit words transformed          */
#define STAGE2_IMAGE_SIZE    0x59CE0u   /* bytes copied to the RW allocation           */
#define STAGE2_OEP_RVA       0x3470u    /* inner entry point (buffer + 0x3470)         */

/* Decrypt one 64-bit word of the packed blob.
 *
 * x  : the raw little-endian word read from the encrypted blob.
 * returns: the decrypted word.
 *
 * Reconstructed from FUN_180035df8's loop body. Callers apply it to each of the
 * STAGE2_WORD_COUNT consecutive words starting at the blob.
 */
uint64_t stage2_decrypt_word(uint64_t x);

/* Decrypt the whole blob in place.
 *
 * dst must hold STAGE2_IMAGE_SIZE bytes. src may equal dst (in-place) or be a separate
 * copy of the encrypted bytes. Words are processed in file order (increasing address).
 */
void stage2_decrypt_blob(const uint8_t *src, uint8_t *dst, size_t dst_len);

#ifdef __cplusplus
}
#endif

#endif /* UNPACK_PAYLOAD_H */
