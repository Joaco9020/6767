null

Logs:
# Decompiled Functions: index 100-199

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180006ee0 (0x180006ee0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006ee0(void)

{
  _DAT_63170901 = 0x180006f6d;
  FUN_1800335b8();
  return;
}


```

---

## Function: FUN_180006f90 (0x180006f90)

```c

void FUN_180006f90(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  PMEMORY_BASIC_INFORMATION lpBuffer;
  undefined *dwLength;
  ulonglong in_R10;
  LPCWSTR lpExistingFileName;
  ulonglong in_R11;
  
  lpExistingFileName = (LPCWSTR)(in_R10 | in_R11);
  lpBuffer = (PMEMORY_BASIC_INFORMATION)0x1e;
  dwLength = &DAT_1800cea6a;
  BVar1 = MoveFileW(lpExistingFileName,(LPCWSTR)0x1e);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    lpExistingFileName = (LPCWSTR)((longlong)lpExistingFileName - 0x8d2eb363U ^ (ulonglong)dwLength)
    ;
    dwLength = (undefined *)((ulonglong)dwLength & (ulonglong)lpExistingFileName);
    lpBuffer = (PMEMORY_BASIC_INFORMATION)((longlong)&lpBuffer->RegionSize + 4);
  }
  VirtualQuery(lpExistingFileName,lpBuffer,(SIZE_T)dwLength);
  return;
}


```

---

## Function: FUN_180007048 (0x180007048)

```c

/* WARNING: Removing unreachable block (ram,0x0001800070c7) */
/* WARNING: Removing unreachable block (ram,0x000180007105) */

ulonglong FUN_180007048(void)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 local_28;
  
  return (local_28 + ((unaff_R13 * 0x4000000 + -0x14) - (ulonglong)((local_28 >> 0x10 & 1) != 0)) |
         unaff_R12 + unaff_R13 ^ local_28) ^ unaff_RDI - 0xeU;
}


```

---

## Function: FUN_180007130 (0x180007130)

```c

ulonglong FUN_180007130(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1800304b8();
  return uVar1 & 0x26bba77a2523bbef;
}


```

---

## Function: FUN_180007228 (0x180007228)

```c

/* WARNING: Removing unreachable block (ram,0x000180007250) */

void FUN_180007228(void)

{
  return;
}


```

---

## Function: FUN_1800072b0 (0x1800072b0)

```c

void FUN_1800072b0(void)

{
  TranslateMessage((MSG *)0xe7f5d67452c22f92);
  return;
}


```

---

## Function: FUN_180007320 (0x180007320)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180007320(void)

{
  LSTATUS LVar1;
  LPCWSTR in_RAX;
  undefined4 extraout_var;
  longlong lVar2;
  HKEY hKey;
  ulonglong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong in_R9;
  longlong in_R10;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_R12;
  ulonglong uVar10;
  ulonglong unaff_R13;
  undefined1 *puVar11;
  ulonglong local_140;
  undefined1 uStack_69;
  undefined8 local_68;
  
  hKey = (HKEY)&DAT_1800c8e34;
  lVar8 = in_R10 + in_R9 + 10;
  FUN_18004fad8(0x1800c8e34,&DAT_1800c097a,in_RAX,(LPCWSTR)(in_R9 + 10));
  LVar1 = RegOpenKeyW(hKey,in_RAX,(PHKEY)in_RAX);
  if (CONCAT44(extraout_var,LVar1) != 0) {
    unaff_R13 = unaff_R13 >> 0x15;
    lVar8 = lVar8 + 0x18;
  }
  uVar3 = 0;
  puVar5 = &DAT_1800c5ab8;
  lVar2 = FUN_180003c70();
  if (lVar2 == 0) {
    unaff_R12 = unaff_R12 * 0x200000;
    lVar8 = lVar8 - (uVar3 & (ulonglong)puVar5);
  }
  puVar6 = puVar5 + unaff_R12;
  puVar4 = &DAT_1800ce4aa;
  lVar2 = FUN_18003c1d0();
  uVar9 = lVar8 + lVar2;
  uVar3 = (ulonglong)((longlong)puVar4 << 0x1e < 0);
  uVar10 = ((ulonglong)puVar5 | (ulonglong)puVar6) + 5;
  puVar11 = (undefined1 *)
            ((unaff_R13 - 1) -
            (ulonglong)
            (0xfffffffffffffffa < ((ulonglong)puVar5 | (ulonglong)puVar6) || CARRY8(uVar10,uVar3)));
  uVar7 = 0xe6a17294;
  uVar10 = (longlong)(uVar10 + uVar3) >> 0x14;
  uVar3 = (ulonglong)(puVar11 + (longlong)puVar4 * 0x80000000) | 0xe6a17294;
  if (lVar8 != 0) {
    uVar9 = uVar9 - 0xb & (ulonglong)puVar11;
    uVar7 = ((ulonglong)puVar11 | 0xe6a17294) & (ulonglong)(puVar11 + uVar10);
    uVar10 = (ulonglong)(puVar11 + uVar10) >> 0x13;
    uVar3 = uVar3 - uVar9;
    puVar11 = &uStack_69 + (longlong)(puVar11 + 1);
  }
  lVar8 = CreateToolhelp32Snapshot(uVar3,local_68);
  if (lVar8 == 0) {
    uVar7 = uVar7 - 0x1b;
    uVar3 = (uVar3 & uVar7) - uVar7;
    uVar7 = uVar7 ^ uVar10 - uVar9;
  }
  lVar2 = uVar3 + 0x1a;
  puVar5 = &DAT_1800c8e41;
  FUN_180012488();
  lVar8 = uVar7 * (longlong)puVar5;
  if ((longlong)puVar5 < 0) {
    local_140 = local_140 ^ (ulonglong)puVar11;
    lVar8 = lVar2;
  }
  if (&stack0x00000000 == (undefined1 *)0x88) {
    local_140 = local_140 - 0x11;
  }
  return local_140 + (lVar8 + -10) * 0x8000;
}


```

---

## Function: FUN_180007560 (0x180007560)

```c

/* WARNING: Removing unreachable block (ram,0x0001800075ae) */
/* WARNING: Removing unreachable block (ram,0x00018000764d) */
/* WARNING: Removing unreachable block (ram,0x0001800076d7) */

void FUN_180007560(void)

{
  FUN_1800371c8();
  return;
}


```

---

## Function: FUN_180007728 (0x180007728)

```c

undefined8 FUN_180007728(void)

{
  undefined8 local_48;
  
  CreateToolhelp32Snapshot(0xe,local_48,0,&DAT_1800c867c);
  return 0;
}


```

---

## Function: FUN_180007888 (0x180007888)

```c

void FUN_180007888(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  uint uVar3;
  ulonglong unaff_RSI;
  DWORD ulOptions;
  REGSAM samDesired;
  longlong in_R10;
  int iVar4;
  ulonglong in_R11;
  PHKEY in_stack_ffffffffffffff68;
  DWORD *in_stack_ffffffffffffff70;
  
  ulOptions = 0;
  iVar4 = (int)(in_R10 >> 0xc);
  BVar1 = CryptDecrypt(0,0,0,0x800c9052 - ((in_R10 >> 0xb & 1U) != 0),
                       (BYTE *)in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    in_R11 = in_R11 >> 0x1c;
    ulOptions = (ulOptions - iVar4) - 0x1a;
    unaff_RSI = unaff_RSI >> 0x11;
  }
  iVar4 = (int)in_R11;
  uVar3 = 0;
  samDesired = 0xcb5a1d30;
  lVar2 = FUN_18001b228();
  if (lVar2 == 0) {
    samDesired = (samDesired ^ (uint)unaff_RSI & uVar3) + 0xf;
  }
  lVar2 = FUN_18000d5d0();
  if (lVar2 == 0) {
    ulOptions = ulOptions + iVar4;
  }
  FUN_180004a98();
  RegOpenKeyExW((HKEY)0xebdbc92cb3c0033a,(LPCWSTR)&DAT_1800c3347,ulOptions,samDesired,
                in_stack_ffffffffffffff68);
  FUN_180005010();
  FUN_180013fc8();
  return;
}


```

---

## Function: FUN_180007af8 (0x180007af8)

```c

ulonglong FUN_180007af8(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong in_R9;
  ulonglong in_R11;
  ulonglong unaff_R13;
  
  uVar1 = 0x913aa1da39414795;
  if ((longlong)unaff_RDI < 1) {
    unaff_RBX = unaff_RBX | in_R9;
  }
  if (-1 < (longlong)unaff_RBX) {
    unaff_RDI = unaff_RDI + in_R11;
    uVar1 = (0x913aa1da39414795 - unaff_RBX ^ in_R11) >> 3;
    in_R11 = in_R11 ^ unaff_R13;
  }
  return (uVar1 >> 0x1f ^ unaff_RDI) - 0x1b & in_R11;
}


```

---

## Function: FUN_180007b98 (0x180007b98)

```c

void FUN_180007b98(undefined8 param_1,longlong param_2)

{
  CreateToolhelp32Snapshot(&DAT_1800c0ed3,param_2 + 0xd,&DAT_1800c9067);
  return;
}


```

---

## Function: FUN_180007c80 (0x180007c80)

```c

ulonglong FUN_180007c80(void)

{
  longlong lVar1;
  DWORD *pDVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  BYTE *in_stack_ffffffffffffff88;
  DWORD *in_stack_ffffffffffffff90;
  ulonglong local_40;
  
  CryptDecrypt((HCRYPTKEY)&stack0xffffffffffffff90,0x1800c360b,-0x7ff308dc,0x800c360b,
               in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
  uVar4 = 0;
  lVar1 = FUN_18003ab70();
  pDVar2 = (DWORD *)0x0;
  if (lVar1 != 0) {
    uVar4 = uVar4 >> 0xc;
    pDVar2 = in_stack_ffffffffffffff90;
  }
  uVar3 = 0;
  if (local_40 != 0) {
    uVar3 = local_40 ^ (uVar4 - ((ulonglong)pDVar2 >> 0x19)) - 0x16;
  }
  return uVar3;
}


```

---

## Function: FUN_180007ea0 (0x180007ea0)

```c

void FUN_180007ea0(void)

{
  FUN_180051ef0();
  return;
}


```

---

## Function: FUN_1800080d0 (0x1800080d0)

```c

ulonglong FUN_1800080d0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *unaff_RSI;
  ulonglong unaff_R12;
  undefined1 auStack_38 [40];
  undefined1 local_10 [16];
  
  lVar3 = -0x1cab4818cd3b7b5f;
  BVar1 = FileTimeToSystemTime((FILETIME *)0xe354b7e732c484a1,(LPSYSTEMTIME)&DAT_1800c2a9f);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if ((unaff_R12 & (ulonglong)auStack_38) == 0) {
    unaff_RSI = local_10;
    uVar2 = uVar2 & unaff_R12 + lVar3;
  }
  return uVar2 ^ (ulonglong)(unaff_RSI + 3);
}


```

---

## Function: FUN_180008150 (0x180008150)

```c

ulonglong FUN_180008150(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  return in_RAX ^ (unaff_RBX & 0x68c8a9625637701e) + 1;
}


```

---

## Function: FUN_1800081c8 (0x1800081c8)

```c

undefined8 FUN_1800081c8(void)

{
  PHKEY in_stack_ffffffffffffffb8;
  undefined1 auStack_3a [10];
  undefined8 local_30;
  
  RegOpenKeyExW((HKEY)&stack0xffffffffffffffb8,(LPCWSTR)0x0,(DWORD)auStack_3a,(REGSAM)&local_30,
                in_stack_ffffffffffffffb8);
  return local_30;
}


```

---

## Function: FUN_180008288 (0x180008288)

```c

undefined8 FUN_180008288(void)

{
  return 0x23bfc70e16d0e1d0;
}


```

---

## Function: FUN_180008330 (0x180008330)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180008330(void)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  char *name;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RDI;
  char *pcVar5;
  longlong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 auStack_48 [40];
  char local_20 [8];
  
  name = local_20;
  iVar1 = -0x7ff3a41c;
  pcVar5 = local_20;
  if (0 < (longlong)(unaff_R12 & (ulonglong)auStack_48)) {
    in_R11 = in_R11 ^ 0x1800c5be4;
    unaff_R13 = (unaff_R13 | in_RAX) - 0x1800c5be4;
    pcVar5 = (char *)((ulonglong)pcVar5 | in_RAX + in_R10);
    iVar1 = -0x7ff3a435;
    unaff_RBX = unaff_RBX + unaff_RDI;
  }
  uVar4 = unaff_RBX >> 0x14;
  iVar1 = gethostname(name,iVar1);
  if (CONCAT44(extraout_var,iVar1) == 0) {
    uVar4 = uVar4 | (ulonglong)local_20;
    name = (char *)((ulonglong)name & uVar4);
  }
  lVar3 = (longlong)name * unaff_RDI;
  uVar2 = 0xa4dc1c48;
  if ((longlong)(in_R11 - 0x13 & uVar4) < 0) {
    lVar3 = lVar3 + -0xb;
    uVar2 = 0xa4dc1c48 - uVar4;
  }
  if (lVar3 == 0) {
    uVar2 = (uVar2 ^ (ulonglong)(pcVar5 + unaff_R13)) + 0x19;
  }
  return uVar2;
}


```

---

## Function: FUN_180008438 (0x180008438)

```c

void FUN_180008438(undefined8 param_1,longlong param_2)

{
  FUN_18003f5c8(0xffffffffffffffed,param_2);
  return;
}


```

---

## Function: FUN_180008498 (0x180008498)

```c

void FUN_180008498(void)

{
  return;
}


```

---

## Function: FUN_1800085a0 (0x1800085a0)

```c

/* WARNING: Removing unreachable block (ram,0x000180008694) */
/* WARNING: Removing unreachable block (ram,0x0001800086b7) */

void FUN_1800085a0(void)

{
  int iVar1;
  PHKEY in_stack_ffffffffffffff98;
  WCHAR local_60 [4];
  undefined1 local_58 [80];
  
  iVar1 = -0x7ff30914;
  ControlService((SC_HANDLE)0xe17f0600b915ad3d,0x800cba65,(LPSERVICE_STATUS)&DAT_1800c1093);
  RegOpenKeyExW((HKEY)&stack0xffffffffffffff98,local_60,(DWORD)local_58,iVar1 + 0x12,
                in_stack_ffffffffffffff98);
  return;
}


```

---

## Function: FUN_180008710 (0x180008710)

```c

undefined8 FUN_180008710(void)

{
  undefined8 local_28;
  
  return local_28;
}


```

---

## Function: FUN_180008830 (0x180008830)

```c

/* WARNING: Removing unreachable block (ram,0x0001800088d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008830(void)

{
  FUN_180043700();
  return;
}


```

---

## Function: FUN_180008918 (0x180008918)

```c

undefined8 FUN_180008918(void)

{
  LPCWSTR in_R11;
  
  RegOpenKeyW((HKEY)0xe08ad6006e793a3d,in_R11,(PHKEY)&DAT_1800d2cb8);
  return 0x33374b2;
}


```

---

## Function: FUN_1800089b0 (0x1800089b0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800089ce) */

ulonglong FUN_1800089b0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_R13;
  undefined8 local_8;
  
  uVar1 = (in_RAX | unaff_RBX) ^ local_8;
  if ((unaff_R13 & 0xf4a6f673) == 0) {
    uVar1 = uVar1 + (unaff_R13 ^ 0xd6e9cf52);
  }
  return uVar1;
}


```

---

## Function: FUN_180008a58 (0x180008a58)

```c

void FUN_180008a58(void)

{
  return;
}


```

---

## Function: FUN_180008ad8 (0x180008ad8)

```c

void FUN_180008ad8(undefined8 param_1,undefined8 param_2,int param_3)

{
  UINT unaff_R13D;
  int unaff_R14D;
  int in_stack_ffffffffffffffc8;
  
  SetWindowPos((HWND)&DAT_1800cf89c,(HWND)0x76e219dd765f2354,param_3,-0x7ff308f3,
               in_stack_ffffffffffffffc8,unaff_R14D,unaff_R13D);
  FUN_180042350();
  FUN_1800325e8();
  return;
}


```

---

## Function: FUN_180008bf0 (0x180008bf0)

```c

ulonglong FUN_180008bf0(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  undefined *puVar3;
  ulonglong in_R11;
  
  puVar3 = &DAT_1800cb741;
  BVar1 = RemoveDirectoryA((LPCSTR)(param_1 + 0x13));
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (-1 < (longlong)(in_R11 & unaff_RBX)) {
    uVar2 = uVar2 & (ulonglong)puVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180008c68 (0x180008c68)

```c

longlong FUN_180008c68(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 + 0x25;
  puVar1 = FUN_18003f678(param_2 + 0x1f,uVar3,-9);
  uVar2 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = ((ulonglong)puVar1 ^ uVar3) >> 0xb;
  }
  return uVar2 + 0x14;
}


```

---

## Function: FUN_180008d10 (0x180008d10)

```c

void FUN_180008d10(void)

{
  longlong unaff_RBX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong unaff_R12;
  longlong lVar5;
  longlong unaff_R13;
  undefined1 auStack_48 [32];
  longlong local_28;
  
  puVar4 = (undefined1 *)&stack0xffffffffffffffd8;
  lVar1 = -0x23903bcc792d7e5a;
  if ((longlong)(unaff_R12 & (ulonglong)auStack_48) < 0) {
    unaff_R12 = (unaff_R12 + 0xf) * 0x100 - 5;
    lVar1 = -0x1c81de63c96bf298;
  }
  lVar5 = unaff_R12 * -0x3f6a32f9cc9c7600;
  uVar2 = lVar1 * (unaff_R13 >> 0xe);
  FindFirstFileA(s_Micha_1800cf2fe,(LPWIN32_FIND_DATAA)&stack0xffffffffffffffd8);
  uVar3 = (unaff_RBX - (longlong)puVar4 * lVar5 | uVar2) >> 4;
  if ((lVar5 + uVar2 & (ulonglong)auStack_48) != 0) {
    uVar3 = uVar3 | local_28 * lVar5;
  }
  RegOpenKeyW((HKEY)0x348fcb6401430cd0,(LPCWSTR)0x0,
              (PHKEY)(uVar3 & local_28 + (unaff_R13 >> 0xe) * (longlong)puVar4 * lVar5));
  return;
}


```

---

## Function: FUN_180008e80 (0x180008e80)

```c

/* WARNING: Removing unreachable block (ram,0x00018000904c) */

void FUN_180008e80(void)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  HKEY unaff_RBX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  DWORD ulOptions;
  REGSAM samDesired;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong in_R11;
  ulonglong unaff_R12;
  uint unaff_R13D;
  undefined1 auStackY_c8 [32];
  PHKEY in_stack_ffffffffffffff58;
  undefined1 local_88 [8];
  uint local_80;
  undefined1 local_78 [72];
  
  uVar4 = unaff_RDI * 4;
  puVar5 = local_78;
  if ((longlong)(unaff_R12 & (ulonglong)auStackY_c8) < 1) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 | in_R11);
    unaff_RSI = puVar5 + (longlong)unaff_RSI * 0x1000000;
  }
  lVar2 = FUN_180009f58();
  uVar7 = (uint)in_R11;
  if (lVar2 == 0) {
    uVar1 = (unaff_R13D ^ (uint)puVar5) + 1;
    unaff_RBX = (HKEY)((longlong)&unaff_RBX->unused + (longlong)unaff_RSI);
    puVar5 = puVar5 + 5;
    uVar7 = (uVar7 ^ unaff_R13D ^ uVar1) + 0x17;
    unaff_R13D = uVar1 | (uint)unaff_RBX;
  }
  uVar7 = (uint)unaff_R12 ^ uVar7;
  uVar6 = (ulonglong)puVar5 | uVar4;
  samDesired = local_80 & uVar7;
  puVar5 = local_88;
  ulOptions = 0x6a6cdb78;
  pvVar3 = memcpy((void *)0x32c51ff76a6cdb78,puVar5,0x32c51ff76a6cdb78);
  if (pvVar3 != (void *)0x0) {
    samDesired = (samDesired | uVar7) + 2;
    uVar6 = uVar6 & uVar4;
    unaff_R13D = unaff_R13D - 0x13;
    puVar5 = (undefined1 *)((ulonglong)puVar5 | uVar6);
  }
  if ((uVar6 & (ulonglong)puVar5) == 0) {
    samDesired = samDesired + (int)uVar4 + -0xc + unaff_R13D * 2;
  }
  RegOpenKeyExW(unaff_RBX,(LPCWSTR)(((ulonglong)puVar5 >> 0x1e) + 0x1e),ulOptions,samDesired,
                in_stack_ffffffffffffff58);
  return;
}


```

---

## Function: FUN_1800090d0 (0x1800090d0)

```c

undefined8 FUN_1800090d0(void)

{
  longlong unaff_R13;
  
  GetExitCodeProcess(&DAT_1800d3588,(LPDWORD)(0x1800cba72 - (ulonglong)(unaff_R13 << 2 < 0)));
  return 0x7530b6f1ed545183;
}


```

---

## Function: FUN_180009218 (0x180009218)

```c

void FUN_180009218(void)

{
  HKEY hKey;
  longlong lVar1;
  DWORD ulOptions;
  REGSAM samDesired;
  PHKEY in_stack_ffffffffffffff78;
  CHAR local_80 [8];
  
  hKey = (HKEY)0x18e0ee864daf0ce0;
  ulOptions = (DWORD)&stack0xffffffffffffff90;
  samDesired = 0;
  inet_addr((char *)0x18e0ee864daf0ce0);
  RegOpenKeyExW(hKey,(LPCWSTR)&DAT_1800cb311,ulOptions,samDesired,in_stack_ffffffffffffff78);
  lVar1 = 0x234574a50f37f0fd;
  FUN_180053cb8();
  FUN_18000c2a0(0,lVar1);
  FindFirstFileA(local_80,(LPWIN32_FIND_DATAA)&stack0xffffffffffffff88);
  WSACleanup();
  return;
}


```

---

## Function: FUN_1800093e8 (0x1800093e8)

```c

void FUN_1800093e8(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined4 extraout_var;
  HANDLE pvVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong lVar6;
  ulonglong uVar7;
  WPARAM wParam;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_80 [32];
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50 [5];
  longlong local_28;
  undefined1 local_20 [8];
  
  lVar3 = ((ulonglong)local_20 ^ unaff_RSI - param_3) - (param_4 + 0x31);
  uVar8 = 0;
  lVar6 = (unaff_RSI - param_3) + 0x18;
  uVar7 = (lVar3 + local_50[0] + -0x1f) *
          (local_50[0] - (lVar3 + param_4 + 0x31 | local_60)) * lVar6 * lVar6;
  uVar5 = 0xabfdf00c0f912342;
  iVar1 = listen((SOCKET)auStack_80,0xf912342);
  bVar9 = CONCAT44(extraout_var,iVar1) != 0;
  if (bVar9) {
    uVar5 = uVar5 ^ uVar7 ^ -uVar7;
  }
  uVar7 = uVar7 & uVar5 + 0x13 + (ulonglong)(bVar9 && (uVar8 >> 0x34 & 1) != 0);
  lVar3 = 0x482fa66f;
  puVar4 = &local_58;
  lVar6 = FUN_180034220();
  if (lVar6 != 0) {
    uVar7 = uVar7 + ((ulonglong)puVar4 ^ (ulonglong)&local_58);
    lVar3 = local_28;
  }
  wParam = uVar7 - 0xe;
  uVar7 = uVar7 + 0xc;
  pvVar2 = FindFirstFileA(&DAT_1800d2489,(LPWIN32_FIND_DATAA)(lVar3 + 0x14));
  if (pvVar2 == (HANDLE)0x0) {
    wParam = wParam >> 0x1d;
    uVar7 = local_58;
  }
  PostMessageA((HWND)&DAT_1800cfa10,(UINT)local_50,wParam,(uVar7 >> 0x16) + 8);
  return;
}


```

---

## Function: FUN_180009608 (0x180009608)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180009608(void)

{
  int in_EAX;
  ulonglong uVar1;
  int unaff_EBX;
  undefined1 *wParam;
  int in_R10D;
  HWND__ local_98 [6];
  undefined1 local_80 [104];
  
  wParam = local_80;
  uVar1 = FUN_18001fd18();
  if (uVar1 == 0) {
    in_R10D = (in_R10D - unaff_EBX) - in_EAX;
  }
  SendMessageA(local_98,in_R10D + 0x17,(WPARAM)wParam,(LPARAM)local_98);
  FUN_18001b920();
  FUN_180010be0();
  FUN_1800511d8();
  return 0;
}


```

---

## Function: FUN_1800097f8 (0x1800097f8)

```c

void FUN_1800097f8(void)

{
  FUN_180056460();
  return;
}


```

---

## Function: FUN_180009948 (0x180009948)

```c

ulonglong * FUN_180009948(void)

{
  ulonglong local_28 [3];
  
  return local_28;
}


```

---

## Function: FUN_180009a60 (0x180009a60)

```c

void FUN_180009a60(void)

{
  LPCWSTR lpValueName;
  ulonglong unaff_R13;
  WCHAR local_28 [8];
  undefined1 local_18 [8];
  
  lpValueName = local_28;
  if (lpValueName == (LPCWSTR)0x0) {
    lpValueName = (LPCWSTR)0x0;
  }
  if (-1 < (longlong)lpValueName) {
    lpValueName = (LPCWSTR)((ulonglong)lpValueName >> 0x18);
  }
  RegDeleteValueW((HKEY)(((ulonglong)local_18 ^ unaff_R13) - 0x1b),lpValueName);
  FUN_1800239c0();
  return;
}


```

---

## Function: FUN_180009bc0 (0x180009bc0)

```c

undefined8 FUN_180009bc0(void)

{
  return 0x792ec9ba;
}


```

---

## Function: FUN_180009c38 (0x180009c38)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180009ce2) */
/* WARNING: Removing unreachable block (ram,0x000180009d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180009c38(BCRYPT_KEY_HANDLE param_1)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined1 local_38 [32];
  
  _DAT_1c51a3ef3bc17ada = 0x180009c92;
  NVar1 = BCryptSecretAgreement(param_1,local_38,(BCRYPT_SECRET_HANDLE *)&DAT_1800ce4a2,0x800c12d5);
  lVar2 = CONCAT44(extraout_var,NVar1);
  if (lVar2 == 0) {
    lVar2 = -10;
  }
  return lVar2;
}


```

---

## Function: FUN_180009d28 (0x180009d28)

```c

/* WARNING: Removing unreachable block (ram,0x000180009d81) */

longlong FUN_180009d28(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1800353c8();
  if (lVar1 == 0) {
    lVar1 = -0xe;
  }
  return lVar1;
}


```

---

## Function: FUN_180009de8 (0x180009de8)

```c

undefined8 FUN_180009de8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1800c9256;
  FUN_180017430();
  RemoveDirectoryA(puVar1 + 0xd);
  return 0xb13833598e4c82eb;
}


```

---

## Function: FUN_180009ea0 (0x180009ea0)

```c

void FUN_180009ea0(void)

{
  FUN_180048dd8(&DAT_1800c585e,&stack0x00000000,0x1800d3698);
  return;
}


```

---

## Function: FUN_180009f58 (0x180009f58)

```c

undefined8 FUN_180009f58(void)

{
  HCRYPTKEY in_RAX;
  DWORD in_R9D;
  BYTE *in_stack_ffffffffffffffd8;
  DWORD *in_stack_ffffffffffffffe0;
  
  CryptDecrypt(in_RAX,0,0,in_R9D,in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
  return 0;
}


```

---

## Function: FUN_18000a008 (0x18000a008)

```c

void FUN_18000a008(void)

{
  FUN_180022800();
  return;
}


```

---

## Function: FUN_18000a090 (0x18000a090)

```c

longlong FUN_18000a090(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong unaff_RBX;
  DWORD dwFreeType;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  if (-1 < unaff_RBX) {
    unaff_R12 = unaff_R12 | unaff_R13;
  }
  dwFreeType = param_3 + 0x1b;
  BCryptDestroyKey((BCRYPT_KEY_HANDLE)(param_1 + 0x1c));
  VirtualFree((LPVOID)0xd8165882a4c7964b,(SIZE_T)&stack0xfffffffffffffff8,dwFreeType);
  lVar1 = FUN_18000b9e0();
  if (lVar1 != 0) {
    lVar1 = lVar1 - (unaff_R12 - 0x13);
  }
  return lVar1;
}


```

---

## Function: FUN_18000a188 (0x18000a188)

```c

void FUN_18000a188(void)

{
  GetSystemDirectoryW((LPWSTR)&DAT_1800c34c4,0xc74630e7);
  FUN_18004fdc0();
  return;
}


```

---

## Function: FUN_18000a210 (0x18000a210)

```c

ulonglong FUN_18000a210(void)

{
  ulonglong in_RAX;
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong in_R10;
  longlong lVar6;
  longlong unaff_R13;
  ulonglong uVar7;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  uVar7 = unaff_R13 - 0x18U | (ulonglong)local_20;
  uVar4 = (longlong)&DAT_1800c381b - in_RAX ^ in_RAX & (longlong)&DAT_1800c381b - in_RAX ^ in_R10;
  uVar2 = 0;
  FUN_180004628();
  uVar3 = (unaff_RSI >> 0x15) * 0x1000;
  if (unaff_RDI != 0) {
    uVar2 = uVar2 - 0x14;
    in_R10 = in_R10 & (ulonglong)&local_18 & local_18;
    uVar7 = (uVar7 & unaff_RDI) << 2 & uVar4;
  }
  if ((POPCOUNT(uVar7 & 0x39) & 1U) != 0) {
    in_R10 = in_R10 | uVar2 ^ uVar3;
    uVar3 = uVar3 - 0x1d;
  }
  uVar2 = in_R10 + (unaff_RDI - uVar2);
  puVar5 = &DAT_1800c9266;
  puVar1 = (ulonglong *)CreateToolhelp32Snapshot(0,&DAT_1800cbba5,&DAT_1800c9266,&DAT_1800c9266);
  if (puVar1 == (ulonglong *)0x0) {
    uVar3 = uVar3 << 0xc;
    uVar2 = uVar2 - (longlong)puVar5 | in_R10;
    puVar1 = &local_18;
  }
  uVar3 = uVar3 + uVar2 ^ (ulonglong)puVar1;
  lVar6 = ((longlong)uVar2 >> 8 ^ (ulonglong)puVar1) - 0x19;
  uVar2 = (longlong)puVar1 * lVar6;
  if (uVar3 != 0xf && -1 < (longlong)(uVar3 - 0xf)) {
    lVar6 = lVar6 + uVar2;
  }
  return uVar2 ^ lVar6 + 0x10U;
}


```

---

## Function: FUN_18000a3c0 (0x18000a3c0)

```c

longlong FUN_18000a3c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *unaff_RBX;
  longlong unaff_RSI;
  undefined1 local_30 [16];
  longlong local_20;
  
  if ((param_3 + 3U & in_RAX) != 0) {
    unaff_RSI = unaff_RSI + local_20;
    unaff_RBX = local_30;
  }
  uVar1 = FUN_180044720();
  lVar2 = (uVar1 ^ (ulonglong)unaff_RBX) + unaff_RSI + -0x1a;
  if (unaff_RSI + -0x1a != 0) {
    lVar2 = lVar2 + -0x2d;
  }
  return lVar2;
}


```

---

## Function: FUN_18000a488 (0x18000a488)

```c

undefined8 FUN_18000a488(void)

{
  return 0xffffffffffffffeb;
}


```

---

## Function: FUN_18000a528 (0x18000a528)

```c

/* WARNING: Removing unreachable block (ram,0x00018000a580) */
/* WARNING: Removing unreachable block (ram,0x00018000a64d) */

void FUN_18000a528(void)

{
  char local_40 [32];
  
  strcmp(local_40,&DAT_1800d36d3);
  FUN_18003cbd8();
  FUN_180007af8();
  FUN_180051468();
  return;
}


```

---

## Function: FUN_18000a770 (0x18000a770)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018000a884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000a770(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [24];
  
  puVar2 = local_30;
  uVar1 = FUN_18001ca88();
  _DAT_343018d7 = 0x18000a7fa;
  uVar1 = CreateToolhelp32Snapshot(uVar1,puVar2,puVar2);
  _DAT_343018d7 = 0x18000a816;
  NtOpenProcess(0x343018ff,puVar2 + 0x19,uVar1,uVar1);
  _DAT_343018d7 = 0x18000a907;
  FUN_18004ddc0();
  return 0;
}


```

---

## Function: FUN_18000a968 (0x18000a968)

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_18000a968(void)

{
  RemoveDirectoryA((LPCSTR)0xc5321e55a87e10ef);
  return 0;
}


```

---

## Function: FUN_18000aa40 (0x18000aa40)

```c

/* WARNING: Removing unreachable block (ram,0x00018000aa77) */

void FUN_18000aa40(void)

{
  FUN_1800329c0();
  return;
}


```

---

## Function: FUN_18000ab40 (0x18000ab40)

```c

longlong FUN_18000ab40(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined1 *puVar6;
  ulonglong in_R10;
  ulonglong uVar7;
  longlong unaff_R12;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_58;
  
  puVar6 = local_80;
  uVar2 = (ulonglong)((unaff_RDI >> 0x16 & 1U) != 0);
  uVar4 = ((ulonglong)local_88 & (ulonglong)puVar6) + (unaff_R12 >> 0x15 | unaff_RSI);
  uVar7 = (longlong)
          (((in_R10 - 0x16) - uVar2) + 0x14 + (ulonglong)(in_R10 < 0x16 || in_R10 - 0x16 < uVar2))
          >> 0x12;
  uVar2 = uVar4;
  uVar1 = FUN_18000bc68();
  uVar5 = (uVar2 + (unaff_RDI >> 0x17)) * local_58 + uVar1;
  puVar3 = (undefined1 *)((longlong)(uVar4 - 0x18) >> 0xf);
  if ((longlong)((ulonglong)puVar6 & (ulonglong)puVar3) < 0) {
    uVar7 = uVar7 & uVar1;
    puVar3 = local_98;
  }
  if ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) {
    puVar6 = puVar6 + uVar7;
  }
  puVar6 = puVar6 + 0xb;
  uVar5 = uVar5 | uVar2;
  uVar1 = FUN_18001c630();
  uVar2 = uVar1 * uVar2;
  if ((longlong)(uVar5 ^ uVar1) < 0) {
    uVar2 = uVar2 & (ulonglong)(puVar6 + (0x1e - (longlong)(puVar3 + local_78 * 0x80000 + 0xf)));
  }
  return uVar2 + 8;
}


```

---

## Function: FUN_18000ad20 (0x18000ad20)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000ad20(longlong param_1)

{
  RemoveDirectoryA((LPCSTR)(param_1 + 0x1d));
  FUN_180011930();
  return;
}


```

---

## Function: FUN_18000af90 (0x18000af90)

```c

/* WARNING: Removing unreachable block (ram,0x00018000b1d4) */

void FUN_18000af90(void)

{
  FindFirstFileA((LPCSTR)0x39b927471767ee8c,(LPWIN32_FIND_DATAA)0xa07f0c14f7502a4f);
  FUN_18001a110();
  FUN_180046340();
  return;
}


```

---

## Function: FUN_18000b218 (0x18000b218)

```c

undefined8 FUN_18000b218(void)

{
  undefined8 local_18;
  
  FUN_180012488();
  return local_18;
}


```

---

## Function: FUN_18000b288 (0x18000b288)

```c

longlong FUN_18000b288(void)

{
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = FUN_18000d358(&DAT_1800d51ff,0,unaff_R12,0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}


```

---

## Function: FUN_18000b330 (0x18000b330)

```c

ulonglong FUN_18000b330(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = CreateToolhelp32Snapshot(0xbf0904f035bc6619,0xbf0904f035bc6619,0,-(unaff_RBX >> 0x1e));
  return uVar1 | unaff_RDI << 0x18;
}


```

---

## Function: FUN_18000b3b8 (0x18000b3b8)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000b3b8(void)

{
  longlong in_R9;
  undefined1 local_a8 [24];
  undefined1 local_90 [104];
  
  getaddrinfo(local_a8,in_R9 + 0x15,0x1c,local_90);
  return 0xfffffffffffffff3;
}


```

---

## Function: FUN_18000b5d8 (0x18000b5d8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018000b67f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000b5d8(void)

{
  int iVar1;
  NTSTATUS NVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  PUCHAR pbOutput;
  ULONG cbOutput;
  longlong local_80;
  undefined1 local_68 [16];
  undefined1 local_58 [72];
  
  puVar4 = local_68;
  cbOutput = (ULONG)local_58;
  FUN_18003dd98();
  lVar6 = local_80 * (longlong)puVar4;
  puVar3 = &DAT_1800c3bd3;
  _DAT_5c55235d6892da6f = 0x18000b6ce;
  iVar1 = fclose((FILE *)&DAT_1800c3bd3);
  if (CONCAT44(extraout_var,iVar1) != 0) {
    lVar6 = (lVar6 + 7) - (longlong)puVar3;
  }
  lVar5 = 0;
  lVar7 = _DAT_5c55235d6892dae7 + 0x15;
  _DAT_5c55235d6892da6f = 0x18000b74d;
  FUN_1800085a0();
  pbOutput = (PUCHAR)(lVar7 + 0xf);
  _DAT_5c55235d6892da6f = 0x18000b764;
  NVar2 = BCryptGetProperty((BCRYPT_HANDLE)0x5c55235d6892daaf,(LPCWSTR)(lVar5 + 0x1b),pbOutput,
                            cbOutput,pURam5c55235d6892da97,URam5c55235d6892da9f);
  return CONCAT44(extraout_var_00,NVar2) - lVar6 ^ (ulonglong)pbOutput;
}


```

---

## Function: FUN_18000b790 (0x18000b790)

```c

void FUN_18000b790(void)

{
  FUN_18000f788();
  return;
}


```

---

## Function: FUN_18000b860 (0x18000b860)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b860(undefined8 param_1,int param_2)

{
  _DAT_e0bcdb4b952a1eb3 = 0x18000b8c8;
  listen(0xdd6060ddbd044dfc,param_2 + 0x19U | 0xbd044dfc);
  return;
}


```

---

## Function: FUN_18000b8f8 (0x18000b8f8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000b978) */

ulonglong FUN_18000b8f8(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  
  uVar1 = FUN_18004b968();
  if (uVar1 == 0) {
    unaff_RBX = unaff_RBX ^ unaff_RDI;
    uVar1 = 0;
  }
  return uVar1 & unaff_RBX;
}


```

---

## Function: FUN_18000b9e0 (0x18000b9e0)

```c

longlong FUN_18000b9e0(void)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  int in_R9D;
  ulonglong in_R11;
  undefined1 *unaff_R12;
  undefined1 local_28 [8];
  
  uVar3 = 0;
  NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)0x0,0x800c5d04,in_R9D + 2);
  uVar2 = CONCAT44(extraout_var,NVar1);
  if (uVar2 == 0) {
    unaff_R12 = local_28;
    uVar2 = in_R11 | uVar3;
  }
  return uVar2 * (longlong)unaff_R12 + 0xf;
}


```

---

## Function: FUN_18000baa0 (0x18000baa0)

```c

ulonglong FUN_18000baa0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong in_R9;
  longlong lVar5;
  undefined8 local_48 [6];
  longlong lVar2;
  
  lVar5 = in_R9 + 0x1c;
  uVar3 = 0;
  puVar4 = local_48;
  BVar1 = RemoveDirectoryA((LPCSTR)0x52595fc8e71005fb);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)((longlong)puVar4 - lVar5);
    uVar3 = uVar3 + lVar2;
  }
  uVar3 = (lVar2 + -7) - (ulonglong)((uVar3 >> 0xf & 1) != 0);
  if (((longlong)puVar4 + 0xbU & uVar3) == 0) {
    uVar3 = uVar3 ^ (longlong)puVar4 + 0xbU;
  }
  return uVar3;
}


```

---

## Function: FUN_18000bbb0 (0x18000bbb0)

```c

void FUN_18000bbb0(void)

{
  return;
}


```

---

## Function: FUN_18000bc68 (0x18000bc68)

```c

longlong FUN_18000bc68(void)

{
  ulonglong unaff_RBX;
  ulonglong in_R10;
  longlong unaff_R13;
  
  return ((0xc30024f6 - (unaff_RBX & in_R10)) - unaff_R13) * unaff_R13 + -0xb;
}


```

---

## Function: FUN_18000bce0 (0x18000bce0)

```c

/* WARNING: Removing unreachable block (ram,0x00018000bd30) */

void FUN_18000bce0(void)

{
  RemoveDirectoryA(&DAT_1800d38a3);
  return;
}


```

---

## Function: FUN_18000bdb0 (0x18000bdb0)

```c

LSTATUS FUN_18000bdb0(void)

{
  LSTATUS LVar1;
  WCHAR local_20 [8];
  
  LVar1 = RegDeleteValueW((HKEY)0xe4a6365eca54d147,local_20);
  return LVar1 + 0x17;
}


```

---

## Function: FUN_18000be88 (0x18000be88)

```c

/* WARNING: Removing unreachable block (ram,0x00018000bf07) */

void FUN_18000be88(void)

{
  FUN_180007ea0();
  return;
}


```

---

## Function: FUN_18000bf30 (0x18000bf30)

```c

undefined8 FUN_18000bf30(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  return 0xb4f36094;
}


```

---

## Function: FUN_18000bfc0 (0x18000bfc0)

```c

undefined8 FUN_18000bfc0(void)

{
  FUN_180031578();
  return 0x894ec64df0d9c2e5;
}


```

---

## Function: FUN_18000c040 (0x18000c040)

```c

/* WARNING: Removing unreachable block (ram,0x00018000c0dd) */
/* WARNING: Removing unreachable block (ram,0x00018000c1dd) */

undefined1 * FUN_18000c040(void)

{
  longlong lVar1;
  LPWIN32_FIND_DATAA lpFindFileData;
  ulonglong uVar2;
  ulonglong local_138;
  ulonglong local_a8;
  undefined1 auStack_99 [129];
  
  lpFindFileData = (LPWIN32_FIND_DATAA)0xeca864804764a9b0;
  FUN_1800043e0();
  FindNextFileA((HANDLE)0x0,lpFindFileData);
  lVar1 = 0x4e73d010434e47c3;
  uVar2 = local_138 + (0xffffffffffffffe2 < local_138) + 0x4f;
  if ((uVar2 & (ulonglong)&stack0xfffffffffffffff8) == 0) {
    lVar1 = 0x39cf40410d391f0c - (uVar2 & local_a8);
  }
  return auStack_99 + lVar1 * -0x80000000;
}


```

---

## Function: FUN_18000c2a0 (0x18000c2a0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000c2a0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = 0;
  _DAT_397371e6b0510ee4 = 0x18000c311;
  uVar1 = FUN_180055540(0,param_2 + 0x17);
  if (uVar1 != 0) {
    uVar4 = 0;
  }
  lVar2 = -0x36612c02cbf59b8e;
  _DAT_397371e6b0510ee4 = 0x18000c353;
  uVar1 = _DAT_397371e6b0510e84;
  FUN_180003618();
  lVar6 = (uVar1 ^ uVar4) * 8 + -0x11;
  lVar5 = -(ulonglong)(lVar6 * 0x4000000 < 0);
  uVar8 = lVar5 - 0x1c;
  uVar7 = lVar6 * 0x8000000 + 4;
  uVar1 = uVar8 + uVar7;
  uVar9 = uVar1 * 0x8000000;
  uVar4 = -uVar1 - 0x1b;
  if ((uVar9 & 0x397371e6b0510eec) == 0) {
    uVar9 = uVar9 + ((((lVar5 + -0x3b) - (ulonglong)CARRY8(uVar8,uVar7) & uVar1) - uVar1) +
                     0xa4b11d3b ^ -uVar1 - 10) ^ uVar4;
  }
  uVar4 = (longlong)uVar4 >> 0x18;
  if ((POPCOUNT(uVar9 & 3) & 1U) == 0) {
    uVar4 = uVar4 + 7;
    uVar9 = (_DAT_86d3d2eba622069b & (uVar4 ^ 0x12c0f59b)) - uVar4;
  }
  lVar5 = ((longlong)((uVar4 & uVar9) + _DAT_d9d3ce5abaac1976) >> 0x1d) - (uVar4 & uVar9);
  lVar2 = lVar2 + 3;
  puVar3 = &DAT_1800c925e;
  _DAT_d9d3ce5abaac18f6 = 0x18000c467;
  FUN_180022780();
  FUN_18004b448(lVar2,puVar3,lVar5);
  return;
}


```

---

## Function: FUN_18000c480 (0x18000c480)

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_18000c480(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int in_R10D;
  int iVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [48];
  
  uVar3 = 0;
  puVar2 = local_50;
  lVar1 = FUN_18004df88();
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)((ulonglong)puVar2 & uVar3 >> 2);
  }
  _aligned_free(puVar2 + 0x1f);
  iVar4 = in_R10D;
  FUN_18003de60();
  WaitForSingleObjectEx((HANDLE)0x0,(in_R10D * iVar4 + 1) * 8,(BOOL)local_40);
  RemoveDirectoryA((LPCSTR)0x81fe9bd6213e085e);
  FUN_180048818();
  return;
}


```

---

## Function: FUN_18000c750 (0x18000c750)

```c

longlong FUN_18000c750(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong in_R10;
  ulonglong uVar5;
  ulonglong unaff_R15;
  
  uVar5 = in_R10 + 0x89a30bd54580b49e;
  uVar3 = param_3 + 8;
  puVar4 = (undefined1 *)register0x00000020;
  uVar1 = FUN_1800021f0(param_1 + 0x20,-0xc1c25a2d0860e2f);
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar4 = &stack0xffffffffffffffe8;
    uVar5 = (unaff_R15 & uVar1) >> 3;
    uVar2 = unaff_R15;
    uVar3 = unaff_R15;
  }
  return (uVar2 - (longlong)puVar4) + 0x16 + (ulonglong)CARRY8(uVar3,(longlong)uVar5 >> 5);
}


```

---

## Function: FUN_18000c818 (0x18000c818)

```c

undefined1 * FUN_18000c818(void)

{
  undefined1 *puVar1;
  ulonglong unaff_RBX;
  undefined1 *unaff_R13;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  
  puVar1 = FUN_180040900();
  if (puVar1 == (undefined1 *)0x0) {
    unaff_RBX = unaff_RBX ^ (ulonglong)local_28;
    puVar1 = unaff_R13;
  }
  if (-1 < (longlong)((ulonglong)local_28 & (ulonglong)auStack_48)) {
    puVar1 = puVar1 + unaff_RBX;
  }
  return puVar1;
}


```

---

## Function: FUN_18000c8c8 (0x18000c8c8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000c98c) */

ulonglong FUN_18000c8c8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  if (-1 < (longlong)(in_R11 & unaff_RBX)) {
    unaff_R13 = unaff_R13 + 0x1e;
  }
  uVar1 = FUN_18001cea8();
  if (uVar1 != 0) {
    unaff_R12 = unaff_R12 ^ unaff_R13;
    param_3 = param_3 >> 0x14;
  }
  if ((longlong)((param_3 ^ unaff_R12 * unaff_R13) << 9 & uVar1) < 0) {
    uVar1 = uVar1 + 0x15;
  }
  return uVar1;
}


```

---

## Function: FUN_18000c9c0 (0x18000c9c0)

```c

void FUN_18000c9c0(void)

{
  FUN_180038218();
  return;
}


```

---

## Function: FUN_18000ca60 (0x18000ca60)

```c

/* WARNING: Removing unreachable block (ram,0x00018000cb34) */

longlong FUN_18000ca60(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  
  uVar2 = unaff_R13 ^ 0x1800c14f6;
  uVar1 = in_RAX + unaff_RBX;
  uVar3 = (longlong)local_58 * (longlong)local_58 | unaff_RSI;
  if ((longlong)(unaff_R13 * unaff_R12 & unaff_RBP) < 1) {
    uVar2 = uVar2 + unaff_R13 * unaff_R12;
    uVar1 = uVar1 | uVar2;
    uVar2 = uVar2 + 0xd;
    unaff_R12 = (local_30 + ((ulonglong)local_58 & unaff_RBX)) - uVar1;
  }
  uVar4 = uVar3 + uVar2;
  uVar2 = (uVar2 - 0x1b) - (ulonglong)CARRY8(uVar3,uVar2);
  uVar3 = unaff_R12 ^ uVar4;
  if ((longlong)uVar2 < 0) {
    uVar4 = uVar4 * 0x4000;
    uVar2 = uVar2 + uVar4;
    uVar3 = (longlong)local_48 * 0x10000000;
  }
  return (longlong)(uVar1 + in_R11 ^ uVar4 | (uVar3 & uVar2) + uVar4 >> 0x1c) >> 0x16;
}


```

---

## Function: FUN_18000cb90 (0x18000cb90)

```c

longlong FUN_18000cb90(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  uVar3 = 0;
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar3 = uVar3 | unaff_RBX | unaff_R12;
  }
  lVar2 = 0;
  if (((unaff_R13 | uVar3) >> 0xc & (ulonglong)&stack0xfffffffffffffff8) != 0) {
    lVar2 = -0x17;
  }
  return (lVar2 + -0x11) * 0x800 + 2;
}


```

---

## Function: FUN_18000cc98 (0x18000cc98)

```c

void FUN_18000cc98(int param_1,undefined8 param_2,LPCWSTR param_3)

{
  MessageBoxW((HWND)&DAT_1800d5082,(LPCWSTR)0x0,param_3,param_1 + 4);
  FUN_180011068();
  return;
}


```

---

## Function: FUN_18000cd30 (0x18000cd30)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18000cd30(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_var;
  undefined *puVar3;
  longlong lVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  lVar4 = (unaff_R12 ^ unaff_R13) + 0x10;
  lVar2 = FUN_180013a30();
  if (lVar2 != 0) {
    in_R11 = in_R11 + lVar4 + 0x1c >> 0x1f;
    unaff_RSI = unaff_RSI & in_R11;
  }
  uVar5 = unaff_RSI - 0x1a;
  puVar3 = &DAT_1800c0967;
  iVar1 = fclose((FILE *)&DAT_1800c0967);
  if (CONCAT44(extraout_var,iVar1) != 0) {
    in_R11 = in_R11 - uVar5;
    uVar5 = uVar5 ^ in_R11;
    in_R11 = in_R11 | (ulonglong)puVar3;
  }
  _DAT_9e3f09dd26c9bf91 = 0x18000ce39;
  lVar2 = FUN_1800397d0();
  return lVar2 + ((longlong)uVar5 >> 0x1e | in_R11 << 7);
}


```

---

## Function: FUN_18000ce78 (0x18000ce78)

```c

undefined8 FUN_18000ce78(void)

{
  return 0xffffffffffffffe5;
}


```

---

## Function: FUN_18000cf80 (0x18000cf80)

```c

void FUN_18000cf80(void)

{
  FUN_180011bb0();
  return;
}


```

---

## Function: FUN_18000d0e8 (0x18000d0e8)

```c

longlong FUN_18000d0e8(void)

{
  longlong lVar1;
  longlong unaff_R13;
  
  lVar1 = FUN_180010d90();
  return lVar1 * unaff_R13;
}


```

---

## Function: FUN_18000d178 (0x18000d178)

```c

longlong FUN_18000d178(void)

{
  undefined1 local_20 [8];
  
  return (longlong)(((ulonglong)local_20 & 0x85d93246) << 0xb) >> 3;
}


```

---

## Function: FUN_18000d258 (0x18000d258)

```c

void FUN_18000d258(void)

{
  return;
}


```

---

## Function: FUN_18000d358 (0x18000d358)

```c

longlong FUN_18000d358(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 local_18;
  
  lVar1 = NtProtectVirtualMemory(param_4 + 0x10,0x4b70175572182ff4,param_3 + 0x15,0);
  return lVar1 - local_18;
}


```

---

## Function: FUN_18000d3e0 (0x18000d3e0)

```c

longlong FUN_18000d3e0(void)

{
  longlong in_RAX;
  ulonglong in_R9;
  
  return (in_RAX + -0x11) - (ulonglong)(0xffffffffffffffe2 < in_R9);
}


```

---

## Function: FUN_18000d440 (0x18000d440)

```c

ulonglong FUN_18000d440(void)

{
  ulonglong unaff_R12;
  undefined8 local_28;
  
  return local_28 ^ unaff_R12;
}


```

---

## Function: FUN_18000d4a0 (0x18000d4a0)

```c

void FUN_18000d4a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  Process32NextW(0x558a0138110199b2,&DAT_1800cbc92,param_3 + 0xe,0);
  return;
}


```

---

## Function: FUN_18000d518 (0x18000d518)

```c

longlong FUN_18000d518(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_1800c9536;
  BVar1 = RemoveDirectoryA(&DAT_1800c9536);
  lVar2 = 0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    lVar2 = (CONCAT44(extraout_var,BVar1) + 0x11U >> 0x1f) - (longlong)puVar3;
  }
  return lVar2 << 9;
}


```

---

## Function: FUN_18000d5d0 (0x18000d5d0)

```c

undefined8 FUN_18000d5d0(void)

{
  undefined1 local_38 [24];
  
  FlushFileBuffers(local_38);
  return 0;
}


```

---

## Function: FUN_18000d698 (0x18000d698)

```c

/* WARNING: Removing unreachable block (ram,0x00018000d7b0) */

longlong FUN_18000d698(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong unaff_RBX;
  undefined *puVar4;
  CHAR *pCVar5;
  longlong lVar6;
  longlong unaff_R12;
  ulonglong uVar7;
  ulonglong unaff_R13;
  ulonglong uVar8;
  CHAR local_60 [32];
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  undefined1 local_28 [8];
  
  puVar4 = &DAT_1800cbb9d;
  pCVar5 = local_60;
  uVar7 = unaff_R12 << 9;
  puVar3 = &local_40;
  BVar1 = RemoveDirectoryA(local_60);
  uVar2 = 0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar2 = CONCAT44(extraout_var,BVar1) + 0x1eU | unaff_R13;
    unaff_R13 = unaff_R13 ^ (ulonglong)puVar4;
    unaff_RBX = unaff_RBX >> 0x10;
    uVar7 = uVar7 | (ulonglong)pCVar5;
  }
  uVar8 = unaff_R13 - (longlong)puVar4;
  uVar7 = (ulonglong)local_38 ^ uVar7;
  lVar6 = (longlong)puVar3 + uVar2;
  FUN_18001e108((longlong)local_60);
  puVar3 = (ulonglong *)FUN_18000f090();
  if (puVar3 == (ulonglong *)0x0) {
    uVar7 = uVar7 | lVar6 * 2 - 0x1cU;
    puVar3 = &local_40;
    unaff_RBX = local_40;
  }
  if (0 < (longlong)unaff_RBX) {
    uVar8 = (uVar8 | unaff_RBX) - 0x11;
    puVar3 = (ulonglong *)((ulonglong)puVar3 & uVar8);
  }
  uVar2 = uVar8 * ((longlong)puVar3 - uVar7) * 0x800;
  lVar6 = FUN_180001658();
  if (lVar6 != 0) {
    uVar7 = (uVar7 & 0x7fffffffff) << 0x13;
    uVar2 = (ulonglong)local_28 >> 2;
  }
  uVar7 = uVar7 & uVar2;
  uVar8 = uVar2 - uVar7;
  if ((longlong)(uVar7 & uVar2 - uVar7) < 0) {
    uVar7 = uVar7 + 7;
    uVar8 = local_30;
  }
  return (longlong)&local_40 * uVar7 + uVar8;
}


```

---

## Function: FUN_18000d8c8 (0x18000d8c8)

```c

undefined8 FUN_18000d8c8(void)

{
  undefined1 local_a0 [136];
  
  FUN_180012880(0xb7ed855a8d5aeba0,0xa25a9eccbcbbeb34,(ulonglong)local_a0);
  FUN_18000b9e0();
  return 0;
}


```

---

## Function: FUN_18000dae0 (0x18000dae0)

```c

longlong FUN_18000dae0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  
  lVar1 = FUN_1800498b8();
  GetClientRect((HWND)0x0,(LPRECT)&stack0xfffffffffffffff0);
  uVar2 = FUN_1800166a8();
  bVar3 = false;
  if (uVar2 != 0) {
    uVar2 = uVar2 + 5;
    bVar3 = CARRY8(lVar1 - 0x1a,uVar2);
  }
  return (uVar2 - 0x16) - (ulonglong)bVar3;
}


```

---

