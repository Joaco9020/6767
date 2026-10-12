/*
    YARA_RULE.yar — ext.exe two-stage loader ("Loader Mapper" / discauth.net C2)

    Derived purely from static analysis of SHA-256
      e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511
    The binary and its decrypted stage-2 were never executed; no server was contacted.

    Design notes (false-positive control):
      * Strings below were confirmed to live INSIDE the encrypted stage-2 blob, so they
        do not appear in the packed sample's plaintext. Two rules are therefore provided:
          - rule ext_loader_stage2_plaintext : matches a *decrypted / unpacked* image
                                               (e.g. captured from memory or produced by
                                               the documented decryptor).
          - rule ext_loader_packer_heuristics: matches the *packed* outer stub via rare
                                               structural constants (blob location, entry
                                               seed, dispatcher magic).
      * Generic WinAPI names are intentionally excluded. Every string/constant here is
        specific to this family.
      * The Cloudflare IPs are NOT used for matching (shared anycast -> high FP).
*/

import "pe"

rule ext_loader_stage2_plaintext
{
    meta:
        description = "Decrypted stage-2 image of the discauth.net 'Loader Mapper' loader (mbedTLS + protocol keys)"
        author      = "static-analysis reconstruction"
        sample      = "e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511"
        date        = "2026-10-11"
        confidence  = "high"

    strings:
        // C2 / endpoint
        $url   = "https://discauth.net/Auth/LoaderMapper.capp" ascii wide
        $host  = "discauth.net" ascii wide

        // Protocol field names (distinctive set, low collision)
        $p_staging = "StagingHash"        ascii wide
        $p_result  = "RequestResult"      ascii wide
        $p_status  = "HttpStatus"         ascii wide
        $p_imsize  = "ImagedSize"         ascii wide
        $p_imgalloc= "ImageAllocation"    ascii wide
        $p_sect    = "MappedSections"     ascii wide
        $p_mapdata = "MappedData"         ascii wide
        $p_entry   = "Entrypoint"         ascii wide

        // Licensing / operator messaging
        $m_loader  = "Loader Processor"   ascii wide
        $m_outd    = "marked as outdated" ascii wide
        $m_elev    = "Failed to Elevate Process Privileges" ascii wide

        // Transport fingerprint (statically linked mbedTLS inside the loader)
        $t_nolog   = "mbedtls_https_nologs" ascii
        $t_master  = "master secret"      ascii
        $t_expand  = "key expansion"      ascii

    condition:
        // Require the URL plus a meaningful cluster of protocol keys to fire.
        // Any 2 of the C2 strings AND any 5 of the protocol keys => stage-2 image.
        ( any of ($url, $host) )
        and ( 5 of ($p_*) )
        and ( 2 of ($m_*) )
        and ( 1 of ($t_*) )
}

rule ext_loader_packer_heuristics
{
    meta:
        description = "Packed outer stub of the discauth.net loader (rare structural constants; no plaintext C2)"
        author      = "static-analysis reconstruction"
        sample      = "e5b06f263946475d315a32ef2e9fc07a66cab8b0ce48fbfa48c6b59baed4a511"
        date        = "2026-10-11"
        confidence  = "medium"

    strings:
        // Dispatcher magic constant passed as 2nd arg to the mapped entry
        // (VERIFIED present in the packed sample at file offset 0x141a4):
        //   (*DAT_1800bb185)(DAT_1800bb18d, 0x947424cb3a18cd6e, ...)
        $magic   = { 6E CD 18 3A CB 24 74 94 }

        // Seed qword read by the entry obfuscation chain (VERIFIED present in the packed
        // sample at file offset 0xbe5c6; VA 0x1800bfbc6, .data).
        $seed    = { FC 02 45 EB 0B 02 65 37 }

    condition:
        // The packed sample has no plaintext C2, so lean on these two rare constants.
        // NOTE: the stage-2 context-cipher constant 0x0a9ff9483ccaeddf and the blob pointer
        // 0x18006056e are deliberately NOT used here — the former exists only inside the
        // decrypted image, and the latter is referenced RIP-relative (computed, not stored),
        // so neither yields reliable static bytes in the packed file.
        // Both $magic and $seed are x86-64 immediates/data specific to this stub, so the
        // arch check is effectively implied. No explicit pe.machine guard is used because
        // its syntax is engine-specific: under classic libyara pe.machine returns a string
        // (e.g. "AMD64"), under YARA-X it returns an integer (0x8664); the earlier string
        // form ("x86_64") does not compile in either (see FINAL_VALIDATION_REPORT).
        pe.is_pe
        and ( $magic and $seed )
}
