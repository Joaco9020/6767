// stage2_decryptor.cpp
//
// RECOVERED SOURCE — implementation of FUN_180035df8 (outer-stage decryptor).  RECOVERY STATUS: RECOVERED (verified).
//
// The arithmetic below is a faithful transcription of the verified per-word transform in
// reconstructed_source/packer/unpack_payload.c. Every statement maps to the decompiled loop body of
// FUN_180035df8; shifts are compile-time constants in [0,63] so plain shifts are exact (x86 masks to
// 6 bits anyway). Modular add/sub/xor are implicit for uint64_t.
//
// This is a pure data transformation: no loading, mapping, network, privilege, or execution transfer.
//
#include "stage2_decryptor.h"

namespace recovered {

uint64_t stage2_decrypt_word(uint64_t x)
{
    uint64_t u3, u4, a, b;

    u3 = (((x >> 33) | (x << 31)) + 0x6c07de65703ddae3ULL);
    u3 = ((((u3 >> 30) | (u3 << 34)) << 7) | ((u3 & 0x3fffffffULL) >> 23)) + 0xef33049642393603ULL;
    u3 = ((u3 >> 55) | (u3 << 9)) + 0x10ccfb69bdc6c9fdULL;
    u3 = ((u3 << 32) | (u3 >> 32)) + 0xef3304962dba6d49ULL;
    u3 = (((u3 >> 17) | (u3 << 47)) ^ 0x9c8c7a98c591fc88ULL) + 0x637385673a6e0378ULL;
    u3 = (((((u3 >> 50) | (u3 << 14)) << 44) | ((u3 & 0x3ffffffffffffULL) >> 6))) + 0x50c6e70ad012e86cULL;
    u3 = ((u3 << 43) | (u3 >> 21)) + 0xaf3918f52fed1794ULL;
    u3 = ((u3 << 25) | (u3 >> 39)) ^ 0x516fd7dcfc56e920ULL;
    u4 = ((u3 >> 25) | (u3 << 39)) + 0xae9028223815e7efULL;

    u3 = u4 >> 35;
    u3 = (u3 << 45) | (((u4 << 29) | u3) >> 19);
    u3 = u3 + 0xae9028223815e7efULL;
    u3 = ((u3 << 10) | (u3 >> 54)) + 0x45bf5f77400882fcULL;
    u4 = ((((u3 << 55) | (u3 >> 9)) + 0x516fd7de703a9603ULL) ^ 0x516fd7de703a9603ULL) + 0xa2dfafbce0752c06ULL;

    u3 = u4 >> 5;
    u3 = (u3 << 23) | (((u3 | (u4 << 59)) >> 41));
    u3 = u3 + 0xae9028218fc569fdULL;
    u3 = u3 ^ 0x36091bc659307389ULL;

    a = (((u3 << 17) & 0x3fffffffffULL) >> 24);
    b = (((u3 & 0x7fffffffffffULL) >> 21) | ((((u3 >> 15) | (u3 << 49)) << 26)));
    u3 = (a | (b << 14)) + 0x8104070b62b45707ULL;

    u4 = ((((u3 >> 32) | (u3 << 32)) - 0xd4c5c4ebULL) ^ 0xccf4a4abdffe6706ULL) + 0x330b5b54200198faULL;

    u3 = u4 >> 23;
    u3 = ((u3 << 26) | (((u4 << 41) | u3) >> 38)) ^ 0x78e630510ULL;
    u3 = u3 + 0x7a525628ceb10b66ULL;

    u4 = ((u3 >> 54) | (u3 << 10)) + 0xeb98a77a4cc2d6d5ULL;

    u3 = u4 >> 27;
    u4 = (((((u4 << 37) | u3) >> 34) | (u3 << 30)) ^ 0xd87c71b7de5a753eULL) + 0xd87c71b7950fc341ULL;

    u3 = (u4 & 0x3ffffffffffffffULL) >> 4;
    a = (u3 << 13);
    b = ((u3 | ((((u4 >> 58) | (u4 << 6)) << 54))) >> 51);
    u3 = (((a | b) << 34) | ((u3 & 0x7ffffffffffffULL) >> 17)) + 0x43f0d0761f1c6de5ULL;

    u3 = ((u3 << 35) | (u3 >> 29)) + 0x7170e748d2a5334dULL;
    u4 = ((u3 >> 25) | (u3 << 39)) ^ 0xd27fe92d391bb75eULL;

    u3 = u4 >> 49;
    u3 = ((u3 << 55) | (((u3 | (u4 << 15)) >> 9))) ^ 0xd27fe92cde66acdeULL;

    u3 = ((u3 << 21) | (u3 >> 43)) + 0x9fd761830a027ec3ULL;
    u3 = ((u3 >> 35) | (u3 << 29)) + 0x60289e7cf5fd813dULL;

    a = ((((u3 << 15) | (u3 >> 49)) << 19) | ((u3 & 0x1ffffffffffffULL) >> 30)) << 17;
    b = (((u3 << 15) & 0x1fffffffffffULL) >> 28);
    u3 = ((a | b) + 0x60289e7dd344f30cULL) ^ 0x9fd76181f9e5ada0ULL;

    u3 = (((((u3 >> 27) | (u3 << 37)) << 18) | ((u3 & 0x7ffffffULL) >> 9))) + 0xb0c0fcf2d6d04febULL;

    u4 = ((u3 >> 53) | (u3 << 11)) + 0x80810cf23a014fd9ULL;

    u3 = u4 >> 40;
    u4 = ((((((u3 | (u4 << 24)) >> 2) | (u3 << 62))) + 0x2f55dc08a25661d4ULL) ^ 0xd0aa23f75da99e2cULL) + 0x8e019419e703257cULL;

    u3 = u4 >> 19;
    u3 = ((u3 << 43) | (((u3 | (u4 << 45)) >> 21))) ^ 0xd0aa23f75da99e2cULL;
    u3 = u3 + 0xd0aa23f7232ae4c2ULL;

    u3 = ((((u3 << 39) | (u3 >> 25)) + 0xabb81136917da05fULL) ^ 0x1c3bc2bc6ULL) + 0x21371347021bb382ULL;

    u3 = ((u3 << 19) | (u3 >> 45)) + 0x560e59aa78d37e78ULL;
    u4 = (((((u3 >> 49) | (u3 << 15)) + 0x53e34cab0e590310ULL) ^ 0x560e59aa78d37e78ULL) + 0x560e59aa78d37e78ULL ^ 0x560e59aa78d37e78ULL) + 0xa9f1a655872c8188ULL;

    u3 = u4 >> 56;
    u3 = ((u3 << 58) | ((((u3 | (u4 << 8))) >> 6))) ^ 0x560e59aa78d37e78ULL;

    u4 = (((((u3 << 13) | (u3 >> 51)) << 22) | ((u3 & 0x7ffffffffffffULL) >> 29))) + 0x1cb2061ea7c69957ULL;

    u3 = u4 >> 16;
    u3 = ((u3 << 34) | ((((u4 << 48) | u3) >> 30))) + 0x8d37e78560e59aa7ULL;

    u4 = ((u3 << 45) | (u3 >> 19)) + 0x396adab9db66c6d1ULL;

    u3 = u4 >> 12;
    u4 = ((u3 << 57) | ((((u4 << 52) | u3) >> 7))) + 0x66b40f4fb2e0aab2ULL;

    u3 = u4 >> 34;
    u4 = ((((((u4 << 30) | u3) >> 5) | (u3 << 59))) ^ 0x66b40f4f9d38d966ULL) + 0xa443acd292cca774ULL;

    u3 = u4 >> 25;
    u3 = (((u3 & 0xfffffffff8000000ULL) | (u4 << 39) | (u3 & 0x7ffffffULL)) ^ 0xd60288c4689946d9ULL) + 0x29fd773b9766b927ULL;

    u3 = ((((u3 >> 9) | (u3 << 55)) ^ 0xd60288c4689946d9ULL)) + 0xc53faee727d01deeULL;

    a = ((((u3 & 0xfffffULL) >> 9) | ((u3 >> 20) << 11)) << 3);
    b = (((u3 << 44) & 0x1fffffffffffffULL) >> 50);
    u3 = (((a | b) << 41) | (((((u3 << 44) & 0x3ffffffffffffULL)) | (u3 >> 20)) >> 9)) + 0x8e7580a22f69cc50ULL;
    u3 = u3 ^ 0xf79d7341fef85340ULL;

    u3 = (((u3 << 7) | (u3 >> 57)) + 0x76e6146225d13e5ULL) ^ 0x76e61468c3ebc6bULL;
    u3 = ((u3 << 41) | (u3 >> 23)) + 0xa30faf1ac1db9851ULL;
    u3 = ((((u3 >> 62) | (u3 << 2)) ^ 0xa30faf1ac1db9851ULL)) + 0x7401357484a4de97ULL;

    u3 = ((u3 >> 29) | (u3 << 35)) + 0x58d2e5d09b01e0b0ULL;
    u3 = (((u3 << 10) | (u3 >> 54)) + 0xa78b16f808248c7ULL) ^ 0xa3efa9d086de6a91ULL;

    u3 = ((((u3 << 48) | (u3 >> 16)) ^ 0xe0832d9eda1afadeULL)) + 0x36e43cd80da8d00cULL;
    u3 = ((((u3 >> 18) | (u3 << 46)) ^ 0x1b721e6c06d46806ULL)) + 0xe48de194ba1d7123ULL;

    u3 = (((((u3 << 20) | (u3 >> 44)) << 10) | ((u3 & 0xfffffffffffULL) >> 34))) ^ 0x1b721e6b45e28eddULL;

    a = (((u3 & 0x7fffffffffULL) >> 27) | ((((u3 >> 39) | (u3 << 25)) << 12)));
    u3 = ((((a + 0x476e8db90f35a2f1ULL) ^ 0x476e8db90f35a2f1ULL)) + 0x476e8db90f35a2f1ULL);

    u3 = (((u3 << 48) | (u3 >> 16)) + 0x476e8db90f35a2f1ULL);
    u3 = ((u3 >> 33) | (u3 << 31)) + 0x476e8db90f35a2f1ULL;
    u3 = u3 ^ 0xf35a2f1476e8db9ULL;

    u3 = (((((u3 << 24) | (u3 >> 40)) ^ 0xf35a2f1476e8db9ULL) + 0xca5d0eb89172470ULL) ^ 0xf35a2f1476e8db90ULL);
    u3 = u3 + 0xca5d0eb89172470ULL;
    u3 = u3 ^ 0xf35a2f149a1dbafdULL;

    u3 = ((((u3 >> 13) | (u3 << 51)) ^ 0xdd7ef9ad178a4d0eULL) + 0xe6b45e29343b75fbULL);
    u3 = u3 ^ 0xe6b45e29343b75fbULL;

    u3 = ((u3 << 57) | (u3 >> 7)) + 0x652e875b2f12282ULL;
    u3 = u3 ^ 0xf9ad178a4d0edd7eULL;

    u3 = (((((u3 >> 33) | (u3 << 31)) << 2) | ((u3 & 0x1ffffffffULL) >> 31))) ^ 0xf9ad178a4d0edd7eULL;
    u3 = ((((u3 << 1) | (u3 >> 63)) << 2) | ((u3 & 0x7fffffffffffffffULL) >> 61)) + 0x44635b650d5ede70ULL;

    u3 = ((u3 << 53) | (u3 >> 11)) + 0x8be0c85c8e2b1f13ULL;

    u4 = u3 >> 30;
    u3 = (u4 | (u3 << 34)) >> 9;
    u4 = ((u4 << 55) | u3) >> 53;
    u3 = ((u4 << 56) | (((u3 << 11) | u4) >> 8)) + 0x72a1d9d4f8bd2a2fULL;

    u3 = ((u3 << 21) | (u3 >> 43)) ^ 0xad19ab03c0c1acb1ULL;
    u3 = ((u3 >> 44) | (u3 << 20)) + 0xad19ab03c0c1acb1ULL;

    u3 = ((((u3 >> 33) | (u3 << 31)) ^ 0x9fc04be6ULL)) + 0x914185282f4b7bbULL;
    u3 = ((((u3 >> 38) | (u3 << 26)) + 0xe7e90306b2c62ba6ULL) ^ 0xe7e90306b2c62ba6ULL) + 0x1816fcf94d39d45aULL;

    u3 = ((((u3 << 13) | (u3 >> 51)) + 0xcfd2060d658c574cULL) ^ 0x5e1343c71e77a14fULL);
    u3 = u3 + 0x4605bf3e534e7517ULL;
    u3 = u3 ^ 0xb9fa40c1acb18ae9ULL;

    u3 = ((((u3 >> 52) | (u3 << 12)) + 0xb9fa40c1acb18ae9ULL) ^ 0xb9fa40c1acb18ae9ULL) + 0x4605bf3e534e7517ULL;

    u3 = (((((u3 & 0x1ffffffffffffULL) >> 15)) | ((((u3 >> 49) | (u3 << 15)) << 34))) + 0x9dbab407a302dfa0ULL);
    u3 = ((((((u3 >> 39) | (u3 << 25)) << 23) | ((u3 & 0x7fffffffffULL) >> 16))) + 0xf67d5e8cb2f8a470ULL);

    u3 = ((u3 << 7) | (u3 >> 57)) + 0xf67d5e8cb2f8a470ULL;
    u3 = ((((u3 << 51) | (u3 >> 13)) + 0xf67d5e8cb2f8a470ULL) ^ 0xe41a2a13581cc48eULL) + 0x1267749feae460e2ULL;

    u4 = ((u3 >> 4) | (u3 << 60)) + 0x1267749f140deccdULL;
    u3 = u4 >> 41;

    return ((((u3 | (u4 << 23)) >> 7) | (u3 << 57)) + 0x667db3116c1d7e42ULL);
}

void stage2_decrypt_blob(const uint8_t* src, uint8_t* dst, size_t dst_len)
{
    size_t nwords = dst_len / 8u;
    if (nwords > kStage2WordCount) {
        nwords = kStage2WordCount;
    }
    for (size_t i = 0; i < nwords; i++) {
        const uint8_t* in = src + i * 8;
        uint64_t word = (uint64_t)in[0]       | ((uint64_t)in[1] << 8)  |
                        ((uint64_t)in[2] << 16)| ((uint64_t)in[3] << 24)|
                        ((uint64_t)in[4] << 32)| ((uint64_t)in[5] << 40)|
                        ((uint64_t)in[6] << 48)| ((uint64_t)in[7] << 56);
        uint64_t out = stage2_decrypt_word(word);
        uint8_t* o = dst + i * 8;
        o[0] = (uint8_t)(out      ); o[1] = (uint8_t)(out >> 8 );
        o[2] = (uint8_t)(out >> 16); o[3] = (uint8_t)(out >> 24);
        o[4] = (uint8_t)(out >> 32); o[5] = (uint8_t)(out >> 40);
        o[6] = (uint8_t)(out >> 48); o[7] = (uint8_t)(out >> 56);
    }
}

}  // namespace recovered
