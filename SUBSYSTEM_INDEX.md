# Subsystem Index - ext.exe

Every function that directly calls an API, grouped by the import families it uses.
Generated from `function_subsystems.tsv` (450 of 1,223 functions import an API
directly; the remaining 773 are internal helpers called only by other functions).

A function can appear under multiple subsystems. **The pseudocode itself is NOT
duplicated here** - use the `Chunk` column to open the containing file in
`decompiled/` and search for the address.

| Subsystem | Functions |
|-----------|-----------|
| [Process / Thread Enumeration & Injection](#inject) | 68 |
| [Networking (Winsock)](#net) | 25 |
| [Cryptography (BCrypt + CryptoAPI)](#crypto) | 33 |
| [Registry](#registry) | 89 |
| [Windows Service Control](#service) | 5 |
| [GUI / Window Manipulation (USER32)](#gui) | 39 |
| [Filesystem](#file) | 174 |
| [Process Creation & Synchronization](#proc) | 15 |
| [C Runtime (MSVCRT / UCRTBASE)](#crt) | 50 |
| [Other / Unclassified](#other) | 30 |

## Process / Thread Enumeration & Injection

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x180002fc8` | FUN_180002fc8 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180003618` | FUN_180003618 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180004320` | FUN_180004320 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180004c38` | FUN_180004c38 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800063d0` | FUN_1800063d0 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180006a80` | FUN_180006a80 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180007320` | FUN_180007320 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180007728` | FUN_180007728 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180007b98` | FUN_180007b98 | 1 | `decompiled/functions_0100_0199.md` |
| `0x1800090d0` | FUN_1800090d0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000a090` | FUN_18000a090 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000a210` | FUN_18000a210 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000a770` | FUN_18000a770 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000b330` | FUN_18000b330 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000d358` | FUN_18000d358 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000d4a0` | FUN_18000d4a0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000de70` | FUN_18000de70 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000eab0` | FUN_18000eab0 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000f380` | FUN_18000f380 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000f3e8` | FUN_18000f3e8 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000f9b0` | FUN_18000f9b0 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000ff18` | FUN_18000ff18 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180012ba8` | FUN_180012ba8 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180014108` | FUN_180014108 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800185d8` | FUN_1800185d8 | 2 | `decompiled/functions_0300_0399.md` |
| `0x180019ac0` | FUN_180019ac0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a2e0` | FUN_18001a2e0 | 2 | `decompiled/functions_0300_0399.md` |
| `0x18001c438` | FUN_18001c438 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001c788` | FUN_18001c788 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180021138` | FUN_180021138 | 1 | `decompiled/functions_0400_0499.md` |
| `0x1800239c0` | FUN_1800239c0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180024ac8` | FUN_180024ac8 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180027d38` | FUN_180027d38 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180029230` | FUN_180029230 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180029798` | FUN_180029798 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002b0a0` | FUN_18002b0a0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002bc78` | FUN_18002bc78 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002f158` | FUN_18002f158 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180032098` | FUN_180032098 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180034b60` | FUN_180034b60 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180035770` | FUN_180035770 | 3 | `decompiled/functions_0700_0799.md` |
| `0x180037dd8` | FUN_180037dd8 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038848` | FUN_180038848 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003ad08` | FUN_18003ad08 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003c450` | FUN_18003c450 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003cbd8` | FUN_18003cbd8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003d4e8` | FUN_18003d4e8 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003e718` | FUN_18003e718 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003ec38` | FUN_18003ec38 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180040868` | FUN_180040868 | 1 | `decompiled/functions_0800_0899.md` |
| `0x1800419c0` | FUN_1800419c0 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180041d58` | FUN_180041d58 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180042618` | FUN_180042618 | 1 | `decompiled/functions_0800_0899.md` |
| `0x1800433f8` | FUN_1800433f8 | 1 | `decompiled/functions_0900_0999.md` |
| `0x1800444c8` | FUN_1800444c8 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180045390` | FUN_180045390 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046540` | FUN_180046540 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046858` | FUN_180046858 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180048928` | FUN_180048928 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180048f78` | FUN_180048f78 | 1 | `decompiled/functions_1000_1099.md` |
| `0x180049360` | FUN_180049360 | 2 | `decompiled/functions_1000_1099.md` |
| `0x18004a910` | FUN_18004a910 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004c720` | FUN_18004c720 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004de60` | FUN_18004de60 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004f340` | FUN_18004f340 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004fc90` | FUN_18004fc90 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180050d20` | FUN_180050d20 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180054558` | FUN_180054558 | 2 | `decompiled/functions_1100_1199.md` |

## Networking (Winsock)

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x180008330` | FUN_180008330 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180009218` | FUN_180009218 | 4 | `decompiled/functions_0100_0199.md` |
| `0x1800093e8` | FUN_1800093e8 | 3 | `decompiled/functions_0100_0199.md` |
| `0x18000b3b8` | FUN_18000b3b8 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000b860` | FUN_18000b860 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000dc58` | FUN_18000dc58 | 1 | `decompiled/functions_0200_0299.md` |
| `0x1800132a0` | FUN_1800132a0 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180014298` | FUN_180014298 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180015de0` | FUN_180015de0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800170d8` | FUN_1800170d8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180018ee8` | FUN_180018ee8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800250d0` | FUN_1800250d0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180029798` | FUN_180029798 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002b1b0` | FUN_18002b1b0 | 3 | `decompiled/functions_0500_0599.md` |
| `0x18002fa18` | FUN_18002fa18 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180033a68` | FUN_180033a68 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180037718` | FUN_180037718 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003b780` | FUN_18003b780 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180040bf0` | FUN_180040bf0 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180042ab8` | FUN_180042ab8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180043a90` | FUN_180043a90 | 3 | `decompiled/functions_0900_0999.md` |
| `0x1800495c0` | FUN_1800495c0 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004d0d8` | FUN_18004d0d8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004def0` | FUN_18004def0 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004fe48` | FUN_18004fe48 | 1 | `decompiled/functions_1100_1199.md` |

## Cryptography (BCrypt + CryptoAPI)

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x1800014a8` | FUN_1800014a8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180004c88` | FUN_180004c88 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800057a8` | FUN_1800057a8 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180007888` | FUN_180007888 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180007c80` | FUN_180007c80 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180009c38` | FUN_180009c38 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180009f58` | FUN_180009f58 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000a090` | FUN_18000a090 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000b5d8` | FUN_18000b5d8 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000b9e0` | FUN_18000b9e0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180012738` | FUN_180012738 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180013ab8` | FUN_180013ab8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180013e20` | FUN_180013e20 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180015300` | FUN_180015300 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800185d8` | FUN_1800185d8 | 2 | `decompiled/functions_0300_0399.md` |
| `0x18001a2e0` | FUN_18001a2e0 | 2 | `decompiled/functions_0300_0399.md` |
| `0x18001b5a8` | FUN_18001b5a8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800214a8` | FUN_1800214a8 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180023fd8` | FUN_180023fd8 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180024cf0` | FUN_180024cf0 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180026b60` | FUN_180026b60 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002cb40` | FUN_18002cb40 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002f930` | FUN_18002f930 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002fa18` | FUN_18002fa18 | 2 | `decompiled/functions_0600_0699.md` |
| `0x1800397d0` | FUN_1800397d0 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180042ab8` | FUN_180042ab8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180046340` | FUN_180046340 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046778` | FUN_180046778 | 1 | `decompiled/functions_0900_0999.md` |
| `0x1800489f0` | FUN_1800489f0 | 1 | `decompiled/functions_0900_0999.md` |
| `0x18004d968` | FUN_18004d968 | 1 | `decompiled/functions_1000_1099.md` |
| `0x180050070` | FUN_180050070 | 2 | `decompiled/functions_1100_1199.md` |
| `0x1800537a8` | FUN_1800537a8 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180056178` | FUN_180056178 | 1 | `decompiled/functions_1200_1222.md` |

## Registry

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x1800028f8` | FUN_1800028f8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180002d80` | FUN_180002d80 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180003c70` | FUN_180003c70 | 3 | `decompiled/functions_0000_0099.md` |
| `0x180005d68` | FUN_180005d68 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800065e8` | FUN_1800065e8 | 3 | `decompiled/functions_0000_0099.md` |
| `0x180006930` | FUN_180006930 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180007320` | FUN_180007320 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180007888` | FUN_180007888 | 2 | `decompiled/functions_0100_0199.md` |
| `0x1800081c8` | FUN_1800081c8 | 1 | `decompiled/functions_0100_0199.md` |
| `0x1800085a0` | FUN_1800085a0 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180008918` | FUN_180008918 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180008d10` | FUN_180008d10 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180008e80` | FUN_180008e80 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180009218` | FUN_180009218 | 4 | `decompiled/functions_0100_0199.md` |
| `0x180009a60` | FUN_180009a60 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000bdb0` | FUN_18000bdb0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000f2e0` | FUN_18000f2e0 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000fd50` | FUN_18000fd50 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180011a58` | FUN_180011a58 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180012138` | FUN_180012138 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180012880` | FUN_180012880 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180015368` | FUN_180015368 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180015908` | FUN_180015908 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180015e60` | FUN_180015e60 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800199f0` | FUN_1800199f0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001ac60` | FUN_18001ac60 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001b920` | FUN_18001b920 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001cea8` | FUN_18001cea8 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001d178` | FUN_18001d178 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001d2d8` | FUN_18001d2d8 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180021e78` | FUN_180021e78 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180022498` | FUN_180022498 | 1 | `decompiled/functions_0400_0499.md` |
| `0x1800241e0` | FUN_1800241e0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180024ac8` | FUN_180024ac8 | 2 | `decompiled/functions_0400_0499.md` |
| `0x1800255f8` | FUN_1800255f8 | 2 | `decompiled/functions_0500_0599.md` |
| `0x180025808` | FUN_180025808 | 2 | `decompiled/functions_0500_0599.md` |
| `0x180026438` | FUN_180026438 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180026810` | FUN_180026810 | 1 | `decompiled/functions_0500_0599.md` |
| `0x1800277d8` | FUN_1800277d8 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180028df8` | FUN_180028df8 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002a048` | FUN_18002a048 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002b1b0` | FUN_18002b1b0 | 3 | `decompiled/functions_0500_0599.md` |
| `0x18002c170` | FUN_18002c170 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002c480` | FUN_18002c480 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002c988` | FUN_18002c988 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002db20` | FUN_18002db20 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002e5e8` | FUN_18002e5e8 | 2 | `decompiled/functions_0600_0699.md` |
| `0x18002eb88` | FUN_18002eb88 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180030158` | FUN_180030158 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800303e0` | FUN_1800303e0 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180030548` | FUN_180030548 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800349d0` | FUN_1800349d0 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180037718` | FUN_180037718 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180037dd8` | FUN_180037dd8 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038008` | FUN_180038008 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038ea8` | FUN_180038ea8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180039f10` | FUN_180039f10 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003b628` | FUN_18003b628 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003b8a0` | FUN_18003b8a0 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003bc28` | FUN_18003bc28 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003da10` | FUN_18003da10 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003dee8` | FUN_18003dee8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003f678` | FUN_18003f678 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040d68` | FUN_180040d68 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180041298` | FUN_180041298 | 3 | `decompiled/functions_0800_0899.md` |
| `0x180041640` | FUN_180041640 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180041c20` | FUN_180041c20 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180042b48` | FUN_180042b48 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180042d90` | FUN_180042d90 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180043828` | FUN_180043828 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180043a90` | FUN_180043a90 | 3 | `decompiled/functions_0900_0999.md` |
| `0x180044030` | FUN_180044030 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180045f78` | FUN_180045f78 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046f80` | FUN_180046f80 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180047af0` | FUN_180047af0 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180048528` | FUN_180048528 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180049360` | FUN_180049360 | 2 | `decompiled/functions_1000_1099.md` |
| `0x1800498b8` | FUN_1800498b8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004b700` | FUN_18004b700 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004c350` | FUN_18004c350 | 2 | `decompiled/functions_1000_1099.md` |
| `0x18004c980` | FUN_18004c980 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004fad8` | FUN_18004fad8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004ffe0` | FUN_18004ffe0 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180050160` | FUN_180050160 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180051ce0` | FUN_180051ce0 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052f78` | FUN_180052f78 | 1 | `decompiled/functions_1100_1199.md` |
| `0x1800544a0` | FUN_1800544a0 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180054c88` | FUN_180054c88 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180055418` | FUN_180055418 | 1 | `decompiled/functions_1100_1199.md` |

## Windows Service Control

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x180001d88` | FUN_180001d88 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800085a0` | FUN_1800085a0 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180014810` | FUN_180014810 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180035770` | FUN_180035770 | 3 | `decompiled/functions_0700_0799.md` |
| `0x18003e488` | FUN_18003e488 | 2 | `decompiled/functions_0800_0899.md` |

## GUI / Window Manipulation (USER32)

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x180001bf8` | FUN_180001bf8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800025d8` | FUN_1800025d8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180003958` | FUN_180003958 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180004628` | FUN_180004628 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800057a8` | FUN_1800057a8 | 2 | `decompiled/functions_0000_0099.md` |
| `0x1800065e8` | FUN_1800065e8 | 3 | `decompiled/functions_0000_0099.md` |
| `0x1800072b0` | FUN_1800072b0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180008ad8` | FUN_180008ad8 | 1 | `decompiled/functions_0100_0199.md` |
| `0x1800093e8` | FUN_1800093e8 | 3 | `decompiled/functions_0100_0199.md` |
| `0x180009608` | FUN_180009608 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000cc98` | FUN_18000cc98 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000dae0` | FUN_18000dae0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180010548` | FUN_180010548 | 1 | `decompiled/functions_0200_0299.md` |
| `0x1800171b8` | FUN_1800171b8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001b710` | FUN_18001b710 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18002c070` | FUN_18002c070 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180030730` | FUN_180030730 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180033a68` | FUN_180033a68 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180035700` | FUN_180035700 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180037278` | FUN_180037278 | 3 | `decompiled/functions_0700_0799.md` |
| `0x1800375a8` | FUN_1800375a8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180037bb8` | FUN_180037bb8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180038008` | FUN_180038008 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003a538` | FUN_18003a538 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003e9c0` | FUN_18003e9c0 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003ec38` | FUN_18003ec38 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180040140` | FUN_180040140 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040bf0` | FUN_180040bf0 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180042218` | FUN_180042218 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180042a18` | FUN_180042a18 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180048338` | FUN_180048338 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180049968` | FUN_180049968 | 1 | `decompiled/functions_1000_1099.md` |
| `0x180049ac8` | FUN_180049ac8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004a1f8` | FUN_18004a1f8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004ad38` | FUN_18004ad38 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004b210` | FUN_18004b210 | 2 | `decompiled/functions_1000_1099.md` |
| `0x180051628` | FUN_180051628 | 1 | `decompiled/functions_1100_1199.md` |
| `0x1800558f0` | FUN_1800558f0 | 1 | `decompiled/functions_1200_1222.md` |
| `0x180055c88` | FUN_180055c88 | 1 | `decompiled/functions_1200_1222.md` |

## Filesystem

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x1800011a0` | FUN_1800011a0 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180001820` | FUN_180001820 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180001ac0` | FUN_180001ac0 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180002420` | FUN_180002420 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180002a88` | FUN_180002a88 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800034f8` | FUN_1800034f8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180003a90` | FUN_180003a90 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800043e0` | FUN_1800043e0 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180005408` | FUN_180005408 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180005558` | FUN_180005558 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180006298` | FUN_180006298 | 1 | `decompiled/functions_0000_0099.md` |
| `0x1800063d0` | FUN_1800063d0 | 2 | `decompiled/functions_0000_0099.md` |
| `0x1800067b8` | FUN_1800067b8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180006930` | FUN_180006930 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180006a80` | FUN_180006a80 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180006d88` | FUN_180006d88 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180006f90` | FUN_180006f90 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180008bf0` | FUN_180008bf0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180008d10` | FUN_180008d10 | 2 | `decompiled/functions_0100_0199.md` |
| `0x180009218` | FUN_180009218 | 4 | `decompiled/functions_0100_0199.md` |
| `0x1800093e8` | FUN_1800093e8 | 3 | `decompiled/functions_0100_0199.md` |
| `0x180009de8` | FUN_180009de8 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000a188` | FUN_18000a188 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000a968` | FUN_18000a968 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000ad20` | FUN_18000ad20 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000af90` | FUN_18000af90 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000baa0` | FUN_18000baa0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000bce0` | FUN_18000bce0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000bf30` | FUN_18000bf30 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000c040` | FUN_18000c040 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000c480` | FUN_18000c480 | 3 | `decompiled/functions_0100_0199.md` |
| `0x18000cb90` | FUN_18000cb90 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000d518` | FUN_18000d518 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000d5d0` | FUN_18000d5d0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000d698` | FUN_18000d698 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000e130` | FUN_18000e130 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000e240` | FUN_18000e240 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000f788` | FUN_18000f788 | 2 | `decompiled/functions_0200_0299.md` |
| `0x18000ff18` | FUN_18000ff18 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180010be0` | FUN_180010be0 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180011768` | FUN_180011768 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180012738` | FUN_180012738 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180012ba8` | FUN_180012ba8 | 2 | `decompiled/functions_0200_0299.md` |
| `0x180013730` | FUN_180013730 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180013fc8` | FUN_180013fc8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180014350` | FUN_180014350 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180014958` | FUN_180014958 | 2 | `decompiled/functions_0300_0399.md` |
| `0x180015af0` | FUN_180015af0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180016078` | FUN_180016078 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180016278` | FUN_180016278 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180016ac0` | FUN_180016ac0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180017430` | FUN_180017430 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180017eb0` | FUN_180017eb0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800195f8` | FUN_1800195f8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180019c78` | FUN_180019c78 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a110` | FUN_18001a110 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a1c8` | FUN_18001a1c8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a5d8` | FUN_18001a5d8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a710` | FUN_18001a710 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a818` | FUN_18001a818 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001b378` | FUN_18001b378 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001b430` | FUN_18001b430 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001b818` | FUN_18001b818 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001d1f0` | FUN_18001d1f0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001d398` | FUN_18001d398 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001df48` | FUN_18001df48 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001e108` | FUN_18001e108 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001e380` | FUN_18001e380 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001f3a0` | FUN_18001f3a0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001f580` | FUN_18001f580 | 1 | `decompiled/functions_0400_0499.md` |
| `0x18001f8f0` | FUN_18001f8f0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x1800212e8` | FUN_1800212e8 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180023468` | FUN_180023468 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180023938` | FUN_180023938 | 1 | `decompiled/functions_0400_0499.md` |
| `0x1800245c0` | FUN_1800245c0 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180024cf0` | FUN_180024cf0 | 2 | `decompiled/functions_0400_0499.md` |
| `0x1800251b0` | FUN_1800251b0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180025808` | FUN_180025808 | 2 | `decompiled/functions_0500_0599.md` |
| `0x1800259f8` | FUN_1800259f8 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180027420` | FUN_180027420 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180027e88` | FUN_180027e88 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180028aa0` | FUN_180028aa0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180028cb0` | FUN_180028cb0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002b1b0` | FUN_18002b1b0 | 3 | `decompiled/functions_0500_0599.md` |
| `0x18002b600` | FUN_18002b600 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002b9a0` | FUN_18002b9a0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002bc78` | FUN_18002bc78 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002c0e0` | FUN_18002c0e0 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002cf28` | FUN_18002cf28 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002dd78` | FUN_18002dd78 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002e418` | FUN_18002e418 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002e5e8` | FUN_18002e5e8 | 2 | `decompiled/functions_0600_0699.md` |
| `0x18002e958` | FUN_18002e958 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002eb88` | FUN_18002eb88 | 2 | `decompiled/functions_0600_0699.md` |
| `0x18002ef70` | FUN_18002ef70 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002fc10` | FUN_18002fc10 | 2 | `decompiled/functions_0600_0699.md` |
| `0x1800303e0` | FUN_1800303e0 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180031578` | FUN_180031578 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180032f68` | FUN_180032f68 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180033180` | FUN_180033180 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180034fc0` | FUN_180034fc0 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180035188` | FUN_180035188 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180035580` | FUN_180035580 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180035668` | FUN_180035668 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180035770` | FUN_180035770 | 3 | `decompiled/functions_0700_0799.md` |
| `0x180037278` | FUN_180037278 | 3 | `decompiled/functions_0700_0799.md` |
| `0x180038430` | FUN_180038430 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038848` | FUN_180038848 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038aa8` | FUN_180038aa8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180039240` | FUN_180039240 | 1 | `decompiled/functions_0700_0799.md` |
| `0x1800397d0` | FUN_1800397d0 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180039ab0` | FUN_180039ab0 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180039f10` | FUN_180039f10 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003a238` | FUN_18003a238 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003a788` | FUN_18003a788 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003af48` | FUN_18003af48 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003bd40` | FUN_18003bd40 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003c9d8` | FUN_18003c9d8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003d830` | FUN_18003d830 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003dee8` | FUN_18003dee8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003e2f8` | FUN_18003e2f8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003eed8` | FUN_18003eed8 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003f190` | FUN_18003f190 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003f5c8` | FUN_18003f5c8 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003f998` | FUN_18003f998 | 1 | `decompiled/functions_0800_0899.md` |
| `0x18003fd28` | FUN_18003fd28 | 1 | `decompiled/functions_0800_0899.md` |
| `0x1800405a0` | FUN_1800405a0 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040718` | FUN_180040718 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040a50` | FUN_180040a50 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040b28` | FUN_180040b28 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180041298` | FUN_180041298 | 3 | `decompiled/functions_0800_0899.md` |
| `0x1800419c0` | FUN_1800419c0 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180042168` | FUN_180042168 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180043538` | FUN_180043538 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180043a90` | FUN_180043a90 | 3 | `decompiled/functions_0900_0999.md` |
| `0x1800448c0` | FUN_1800448c0 | 1 | `decompiled/functions_0900_0999.md` |
| `0x1800450d0` | FUN_1800450d0 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180045650` | FUN_180045650 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180045a00` | FUN_180045a00 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046a70` | FUN_180046a70 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180046d40` | FUN_180046d40 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180047290` | FUN_180047290 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180048dd8` | FUN_180048dd8 | 2 | `decompiled/functions_1000_1099.md` |
| `0x1800491b8` | FUN_1800491b8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004a2b0` | FUN_18004a2b0 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004a548` | FUN_18004a548 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004a6e8` | FUN_18004a6e8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004b210` | FUN_18004b210 | 2 | `decompiled/functions_1000_1099.md` |
| `0x18004b448` | FUN_18004b448 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004c350` | FUN_18004c350 | 2 | `decompiled/functions_1000_1099.md` |
| `0x18004d208` | FUN_18004d208 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004d580` | FUN_18004d580 | 2 | `decompiled/functions_1000_1099.md` |
| `0x18004dc08` | FUN_18004dc08 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004df88` | FUN_18004df88 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004e438` | FUN_18004e438 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004ebd8` | FUN_18004ebd8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004ee18` | FUN_18004ee18 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004ff38` | FUN_18004ff38 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180050070` | FUN_180050070 | 2 | `decompiled/functions_1100_1199.md` |
| `0x1800503b8` | FUN_1800503b8 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180051468` | FUN_180051468 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180051928` | FUN_180051928 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052160` | FUN_180052160 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052880` | FUN_180052880 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180053450` | FUN_180053450 | 1 | `decompiled/functions_1100_1199.md` |
| `0x1800535b8` | FUN_1800535b8 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180053700` | FUN_180053700 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180053868` | FUN_180053868 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180054558` | FUN_180054558 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180054f10` | FUN_180054f10 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180055350` | FUN_180055350 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180055980` | FUN_180055980 | 2 | `decompiled/functions_1200_1222.md` |
| `0x180055b20` | FUN_180055b20 | 1 | `decompiled/functions_1200_1222.md` |
| `0x180056370` | FUN_180056370 | 1 | `decompiled/functions_1200_1222.md` |

## Process Creation & Synchronization

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x180002fc8` | FUN_180002fc8 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180003c70` | FUN_180003c70 | 3 | `decompiled/functions_0000_0099.md` |
| `0x18000c480` | FUN_18000c480 | 3 | `decompiled/functions_0100_0199.md` |
| `0x18000f8a8` | FUN_18000f8a8 | 1 | `decompiled/functions_0200_0299.md` |
| `0x18000fc50` | FUN_18000fc50 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180011f10` | FUN_180011f10 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180013030` | FUN_180013030 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180013ce0` | FUN_180013ce0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800214a8` | FUN_1800214a8 | 2 | `decompiled/functions_0400_0499.md` |
| `0x1800255f8` | FUN_1800255f8 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002c988` | FUN_18002c988 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18003ba30` | FUN_18003ba30 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003e2f8` | FUN_18003e2f8 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180040d68` | FUN_180040d68 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180041050` | FUN_180041050 | 1 | `decompiled/functions_0800_0899.md` |

## C Runtime (MSVCRT / UCRTBASE)

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x1800011a0` | FUN_1800011a0 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180001820` | FUN_180001820 | 2 | `decompiled/functions_0000_0099.md` |
| `0x180002368` | FUN_180002368 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180002420` | FUN_180002420 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180003388` | FUN_180003388 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180003c70` | FUN_180003c70 | 3 | `decompiled/functions_0000_0099.md` |
| `0x1800049f8` | FUN_1800049f8 | 1 | `decompiled/functions_0000_0099.md` |
| `0x180008e80` | FUN_180008e80 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000a528` | FUN_18000a528 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000b5d8` | FUN_18000b5d8 | 2 | `decompiled/functions_0100_0199.md` |
| `0x18000c480` | FUN_18000c480 | 3 | `decompiled/functions_0100_0199.md` |
| `0x18000cd30` | FUN_18000cd30 | 1 | `decompiled/functions_0100_0199.md` |
| `0x18000dcf8` | FUN_18000dcf8 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180016490` | FUN_180016490 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180018498` | FUN_180018498 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180019148` | FUN_180019148 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001a9c8` | FUN_18001a9c8 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800245c0` | FUN_1800245c0 | 2 | `decompiled/functions_0400_0499.md` |
| `0x180027330` | FUN_180027330 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180029ef8` | FUN_180029ef8 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002c518` | FUN_18002c518 | 2 | `decompiled/functions_0500_0599.md` |
| `0x18002e060` | FUN_18002e060 | 1 | `decompiled/functions_0600_0699.md` |
| `0x18002fc10` | FUN_18002fc10 | 2 | `decompiled/functions_0600_0699.md` |
| `0x180030b80` | FUN_180030b80 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180033870` | FUN_180033870 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800343b0` | FUN_1800343b0 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800347e0` | FUN_1800347e0 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180036940` | FUN_180036940 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038218` | FUN_180038218 | 2 | `decompiled/functions_0700_0799.md` |
| `0x180038430` | FUN_180038430 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003b780` | FUN_18003b780 | 2 | `decompiled/functions_0700_0799.md` |
| `0x18003c808` | FUN_18003c808 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003e488` | FUN_18003e488 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003e718` | FUN_18003e718 | 2 | `decompiled/functions_0800_0899.md` |
| `0x18003f520` | FUN_18003f520 | 1 | `decompiled/functions_0800_0899.md` |
| `0x1800404c0` | FUN_1800404c0 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040d68` | FUN_180040d68 | 2 | `decompiled/functions_0800_0899.md` |
| `0x180044ad8` | FUN_180044ad8 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180044c80` | FUN_180044c80 | 1 | `decompiled/functions_0900_0999.md` |
| `0x1800463b8` | FUN_1800463b8 | 1 | `decompiled/functions_0900_0999.md` |
| `0x180047858` | FUN_180047858 | 1 | `decompiled/functions_0900_0999.md` |
| `0x18004a020` | FUN_18004a020 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004b968` | FUN_18004b968 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004da28` | FUN_18004da28 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004f700` | FUN_18004f700 | 1 | `decompiled/functions_1000_1099.md` |
| `0x180050c10` | FUN_180050c10 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052408` | FUN_180052408 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052880` | FUN_180052880 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180054c88` | FUN_180054c88 | 2 | `decompiled/functions_1100_1199.md` |
| `0x180055980` | FUN_180055980 | 2 | `decompiled/functions_1200_1222.md` |

## Other / Unclassified

| Address | Evidence name | API calls | Chunk file |
|---------|---------------|-----------|------------|
| `0x1800080d0` | FUN_1800080d0 | 1 | `decompiled/functions_0100_0199.md` |
| `0x180011520` | FUN_180011520 | 1 | `decompiled/functions_0200_0299.md` |
| `0x180016590` | FUN_180016590 | 1 | `decompiled/functions_0300_0399.md` |
| `0x1800182d0` | FUN_1800182d0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x180019fb0` | FUN_180019fb0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001bff0` | FUN_18001bff0 | 1 | `decompiled/functions_0300_0399.md` |
| `0x18001ecc8` | FUN_18001ecc8 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180022df0` | FUN_180022df0 | 1 | `decompiled/functions_0400_0499.md` |
| `0x180029998` | FUN_180029998 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180029a20` | FUN_180029a20 | 1 | `decompiled/functions_0500_0599.md` |
| `0x18002ab88` | FUN_18002ab88 | 1 | `decompiled/functions_0500_0599.md` |
| `0x180032828` | FUN_180032828 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800333a8` | FUN_1800333a8 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180033638` | FUN_180033638 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180033d70` | FUN_180033d70 | 1 | `decompiled/functions_0600_0699.md` |
| `0x180034d10` | FUN_180034d10 | 1 | `decompiled/functions_0600_0699.md` |
| `0x1800381e0` | FUN_1800381e0 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180038fe8` | FUN_180038fe8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x180039cb8` | FUN_180039cb8 | 1 | `decompiled/functions_0700_0799.md` |
| `0x18003d940` | FUN_18003d940 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180040fa0` | FUN_180040fa0 | 1 | `decompiled/functions_0800_0899.md` |
| `0x180047008` | FUN_180047008 | 2 | `decompiled/functions_0900_0999.md` |
| `0x1800475d0` | FUN_1800475d0 | 1 | `decompiled/functions_0900_0999.md` |
| `0x18004c7d8` | FUN_18004c7d8 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004c840` | FUN_18004c840 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004f258` | FUN_18004f258 | 1 | `decompiled/functions_1000_1099.md` |
| `0x18004f868` | FUN_18004f868 | 1 | `decompiled/functions_1000_1099.md` |
| `0x180052a60` | FUN_180052a60 | 1 | `decompiled/functions_1100_1199.md` |
| `0x180052be8` | FUN_180052be8 | 1 | `decompiled/functions_1100_1199.md` |
| `0x1800560a8` | FUN_1800560a8 | 1 | `decompiled/functions_1200_1222.md` |


