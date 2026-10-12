/* test harness — VALIDATION ONLY.
 * Reads the encrypted stage-2 blob out of ext.exe (bytes only), runs the reconstructed
 * decryptor over it, and emits the result. Used to prove the C reconstruction in
 * unpack_payload.c produces byte-identical output to the verified Python reference.
 * This does NOT execute the recovered payload — it only transforms the encrypted blob.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unpack_payload.h"

int main(int argc, char **argv)
{
    if (argc < 3) { fprintf(stderr, "usage: decrypt_test <ext.exe> <out.bin>\n"); return 2; }
    FILE *f = fopen(argv[1], "rb");
    if (!f) { fprintf(stderr, "cannot open %s\n", argv[1]); return 1; }

    /* File offset of VA 0x18006056e in ext.exe: .data VA 0x180057000 -> raw 0x55a00.
     * offset = 0x55a00 + (0x18006056e - 0x180057000) = 0x5ef6e */
    const unsigned long BLOB_FILE_OFF = 0x5ef6eUL;
    const size_t BLOB_SIZE = (size_t)STAGE2_IMAGE_SIZE; /* 0x59ce0 */

    unsigned char *enc = (unsigned char *)malloc(BLOB_SIZE);
    unsigned char *dec = (unsigned char *)malloc(BLOB_SIZE);
    if (!enc || !dec) { fprintf(stderr, "oom\n"); return 1; }

    if (fseek(f, (long)BLOB_FILE_OFF, SEEK_SET) != 0) { fprintf(stderr, "seek fail\n"); return 1; }
    if (fread(enc, 1, BLOB_SIZE, f) != BLOB_SIZE) { fprintf(stderr, "short read\n"); return 1; }
    fclose(f);

    stage2_decrypt_blob(enc, dec, BLOB_SIZE);

    FILE *o = fopen(argv[2], "wb");
    if (!o) { fprintf(stderr, "cannot write %s\n", argv[2]); return 1; }
    fwrite(dec, 1, BLOB_SIZE, o);
    fclose(o);

    free(enc); free(dec);
    return 0;
}
