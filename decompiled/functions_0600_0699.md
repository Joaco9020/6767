null

Logs:
# Decompiled Functions: index 600-699

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_18002d0a8 (0x18002d0a8)

```c

/* WARNING: Removing unreachable block (ram,0x00018002d0e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002d0a8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_R13;
  
  lVar1 = 0x17;
  uVar4 = unaff_RBX;
  FUN_18001ede8();
  uVar3 = unaff_RBX | lVar1 + unaff_RBX + 0x13;
  uVar2 = uVar3;
  lVar1 = FUN_180035a28();
  if (lVar1 == 0) {
    uVar4 = uVar4 - uVar3 | unaff_R13;
    uVar2 = uVar2 + uVar4;
  }
  FUN_180001088(0x70da57a591e0a99f,uVar2,uVar4 - 3);
  return;
}


```

---

## Function: FUN_18002d1e8 (0x18002d1e8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18002d1e8(void)

{
  longlong lVar1;
  
  _DAT_3561d9ad93010d85 = 0x18002d22c;
  lVar1 = FUN_180018250();
  return lVar1 + -0x1f;
}


```

---

## Function: FUN_18002d268 (0x18002d268)

```c

void FUN_18002d268(void)

{
  FUN_18004a180();
  return;
}


```

---

## Function: FUN_18002d4f8 (0x18002d4f8)

```c

void FUN_18002d4f8(void)

{
  FUN_18004c000();
  return;
}


```

---

## Function: FUN_18002d618 (0x18002d618)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018002d683) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18002d618(void)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = 0;
  _DAT_d9161409 = 0x18002d668;
  FUN_18000ca60();
  return (in_R10 | uVar1 >> 5) ^ 0x1b22c28720000000;
}


```

---

## Function: FUN_18002d6d8 (0x18002d6d8)

```c

longlong FUN_18002d6d8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180034c30();
  return lVar1 + 0x1c;
}


```

---

## Function: FUN_18002d7a8 (0x18002d7a8)

```c

/* WARNING: Removing unreachable block (ram,0x00018002d80b) */
/* WARNING: Removing unreachable block (ram,0x00018002d843) */

ulonglong FUN_18002d7a8(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180042ff8();
  return uVar1;
}


```

---

## Function: FUN_18002d878 (0x18002d878)

```c

longlong FUN_18002d878(void)

{
  longlong in_RAX;
  
  return in_RAX + -3;
}


```

---

## Function: FUN_18002d8e8 (0x18002d8e8)

```c

void FUN_18002d8e8(void)

{
  FUN_18003fdc8();
  return;
}


```

---

## Function: FUN_18002d9c0 (0x18002d9c0)

```c

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18002d9c0(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RSI;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong in_R10;
  undefined1 *unaff_R12;
  ulonglong unaff_R13;
  undefined1 local_res8 [32];
  longlong local_18;
  
  lVar4 = (param_4 >> 0x1a) + 0xe;
  FUN_180015368((longlong)&stack0xfffffffffffffff8,param_4 >> 0x1a,param_3 + 0x34);
  uVar1 = 0;
  puVar3 = local_res8;
  uVar5 = lVar4 + 0x1b;
  lVar4 = FUN_18001bb60();
  if (lVar4 == 0) {
    unaff_RSI = unaff_RSI & unaff_R13;
    unaff_R12 = unaff_R12 + (longlong)puVar3;
    uVar1 = ((uVar1 & uVar5) + unaff_RSI) - uVar5;
  }
  lVar2 = (uVar1 & (ulonglong)unaff_R12) + 0x18;
  puVar3 = local_res8;
  lVar4 = FUN_180029580(0x3cb0a935bcb8773,lVar2,(longlong)puVar3);
  if (lVar4 == 0) {
    lVar2 = local_18 << 0x1b;
    unaff_RSI = (unaff_RSI - local_18) + 5;
    puVar3 = puVar3 + (in_R10 - uVar5);
  }
  return (lVar2 + -0x15) -
         (ulonglong)
         (SEXT816((longlong)unaff_R12 * (longlong)puVar3) !=
         SEXT816((longlong)unaff_R12) * SEXT816((longlong)puVar3)) & unaff_RSI;
}


```

---

## Function: FUN_18002db20 (0x18002db20)

```c

/* WARNING: Removing unreachable block (ram,0x00018002dc02) */

LSTATUS FUN_18002db20(void)

{
  LSTATUS LVar1;
  int in_R9D;
  int in_R11D;
  PHKEY in_stack_ffffffffffffff78;
  
  LVar1 = RegOpenKeyExW((HKEY)0x13e843503653cf0d,(LPCWSTR)0xd082c1f024971f9e,0x1e,in_R9D - in_R11D,
                        in_stack_ffffffffffffff78);
  return LVar1;
}


```

---

## Function: FUN_18002dc98 (0x18002dc98)

```c

void FUN_18002dc98(void)

{
  FUN_180027e88();
  return;
}


```

---

## Function: FUN_18002dd78 (0x18002dd78)

```c

void FUN_18002dd78(void)

{
  longlong lVar1;
  DWORD nBufferLength;
  LPSTR lpBuffer;
  longlong in_R9;
  LPSTR *lpFilePart;
  longlong in_R10;
  longlong unaff_R13;
  longlong lVar2;
  
  lpFilePart = (LPSTR *)(in_R9 + in_R10);
  lVar2 = unaff_R13 - (longlong)lpFilePart;
  nBufferLength = 0x28e239b9;
  lpBuffer = (LPSTR)0x0;
  lVar1 = FUN_1800333a8(&DAT_1800c4eb3,0xfc933fda28e239b9,0);
  if (lVar1 == 0) {
    lpFilePart = (LPSTR *)((longlong)lpFilePart + lVar2);
    nBufferLength = nBufferLength & (uint)lpFilePart;
  }
  GetFullPathNameA((LPCSTR)0xb9da4f5f33fc6b80,nBufferLength,lpBuffer,lpFilePart);
  FUN_180056370();
  FUN_180008710();
  return;
}


```

---

## Function: FUN_18002e060 (0x18002e060)

```c

/* WARNING: Removing unreachable block (ram,0x00018002e09d) */
/* WARNING: Removing unreachable block (ram,0x00018002e0b8) */

void FUN_18002e060(void)

{
  realloc((void *)0x9127f7296cacc187,0xed223c09);
  FUN_18003e180();
  return;
}


```

---

## Function: FUN_18002e160 (0x18002e160)

```c

undefined8 FUN_18002e160(void)

{
  undefined8 local_98;
  
  FUN_18001b378();
  FUN_180050620();
  return local_98;
}


```

---

## Function: FUN_18002e418 (0x18002e418)

```c

/* WARNING: Removing unreachable block (ram,0x00018002e44b) */

undefined1 * FUN_18002e418(void)

{
  BOOL BVar1;
  undefined1 *puVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined1 *unaff_RBX;
  ulonglong uVar6;
  ulonglong unaff_RSI;
  longlong lVar7;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong in_R10;
  longlong lVar10;
  ulonglong in_R11;
  undefined1 *unaff_R12;
  bool bVar11;
  undefined1 auStack_a8 [48];
  ulonglong local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  
  uVar3 = 0x9caa3f26c07b678 - unaff_RSI;
  uVar8 = in_R11;
  if ((POPCOUNT((ulonglong)unaff_RBX & 0xff) & 1U) != 0) {
    unaff_RBX = local_68;
    uVar3 = uVar3 >> 0x14 & unaff_RDI;
    uVar8 = in_R11 + 5;
    unaff_R12 = local_48 + ((longlong)unaff_R12 - uVar8);
    unaff_RDI = unaff_RDI + uVar3;
  }
  uVar3 = uVar3 + 0x10;
  puVar2 = FUN_1800562b8();
  if (puVar2 == (undefined1 *)0x0) {
    in_R10 = in_R10 ^ unaff_RDI;
    unaff_RSI = (unaff_RSI ^ uVar3) & uVar3;
    uVar8 = (uVar8 & uVar3) - 5 & unaff_RSI;
  }
  uVar6 = (ulonglong)unaff_RBX >> 0x1d;
  puVar4 = &DAT_1800d1236;
  uVar3 = 0x308e46ba2ceeec32;
  puVar2 = local_68;
  BVar1 = RemoveDirectoryA(&DAT_1800d1236);
  bVar11 = false;
  if ((longlong)((ulonglong)unaff_R12 & (ulonglong)auStack_a8) < 0) {
    uVar6 = (uVar6 | CONCAT44(extraout_var,BVar1)) ^ unaff_RSI;
    uVar8 = uVar8 + in_R10;
    bVar11 = CARRY8(uVar6,in_R10);
    uVar6 = uVar6 + in_R10;
  }
  if ((uVar8 & (ulonglong)puVar4) == 0) {
    uVar5 = ((ulonglong)puVar4 | uVar8) ^ uVar6;
    uVar8 = uVar8 | uVar3;
    uVar6 = uVar6 - unaff_RSI;
    puVar4 = (undefined *)
             (uVar5 - (local_78 & (ulonglong)puVar2) &
             (ulonglong)(unaff_R12 + (ulonglong)bVar11 + 0x1b));
    puVar2 = puVar2 + -6;
  }
  lVar7 = unaff_RSI - (longlong)(puVar4 + -0x1f);
  lVar10 = (longlong)local_70 * in_R11 - (longlong)(puVar2 + uVar8);
  uVar5 = lVar7 * lVar10;
  puVar9 = local_70;
  uVar8 = FUN_180029798(puVar4 + -0x1f,
                        -0x19 - (ulonglong)
                                (SEXT816((longlong)uVar5) != SEXT816(lVar7) * SEXT816(lVar10)),
                        puVar2);
  uVar5 = uVar5 | (ulonglong)puVar2;
  uVar3 = (uVar6 + 0x18) * 0x20000000 + 5 + (ulonglong)((longlong)(uVar5 << 4) < 0);
  uVar6 = in_R11 ^ uVar3;
  puVar9 = puVar9 + uVar6;
  if (0 < (longlong)(uVar5 << 5)) {
    puVar9 = (undefined1 *)((ulonglong)puVar9 | (uVar3 - 7) * uVar6);
    uVar8 = uVar8 - lVar10;
  }
  return puVar9 + uVar8;
}


```

---

## Function: FUN_18002e5e8 (0x18002e5e8)

```c

ulonglong FUN_18002e5e8(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  ulonglong unaff_RBX;
  undefined *puVar4;
  undefined *puVar5;
  LPCSTR lpPathName;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong in_R10;
  ulonglong uVar8;
  longlong in_R11;
  ulonglong uVar9;
  undefined *puVar10;
  longlong unaff_R13;
  ulonglong uVar11;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  undefined1 local_120 [96];
  undefined8 uStackY_c0;
  PHKEY in_stack_ffffffffffffff68;
  longlong local_70;
  
  puVar5 = &DAT_1800ce1b2;
  puVar6 = local_138;
  uVar9 = in_R11 - 0x1c;
  uVar11 = unaff_R13 * 0x1000;
  uStackY_c0 = 0x18002e62b;
  uVar8 = in_R10;
  uVar2 = FUN_180045ee8();
  if (uVar2 != 0) {
    in_R10 = in_R10 ^ uVar9;
    uVar11 = uVar11 - in_R10 | uVar2;
    unaff_RBX = unaff_RBX * 0x800000 - (longlong)puVar6;
    puVar5 = (undefined *)(((ulonglong)puVar5 ^ (ulonglong)puVar6) * 0x20000000 + unaff_RBX);
  }
  if ((uVar9 & unaff_RBX) != 0) {
    puVar5 = puVar5 + unaff_R13 + 0xd;
  }
  puVar5 = puVar5 + in_R10;
  uVar8 = uVar8 - 0xb;
  puVar4 = (undefined *)(unaff_RBX >> 3);
  uVar2 = uVar11 - 0x1a;
  puVar10 = puVar5 + ((ulonglong)local_128 ^ (ulonglong)local_120);
  uVar9 = 0;
  uStackY_c0 = 0x18002e6be;
  lVar3 = FUN_180009ea0();
  if (lVar3 == 0) {
    puVar10 = &stack0xffffffffffffff68;
    uVar2 = uVar11 + 4;
    puVar4 = puVar4 + uVar8 + 0x13;
  }
  lVar7 = 0;
  uStackY_c0 = 0x18002e70b;
  RegOpenKeyExW((HKEY)&stack0xffffffffffffff68,(LPCWSTR)((uVar9 | uVar8) + 0x14),(int)puVar5 + 0x10,
                0,in_stack_ffffffffffffff68);
  lpPathName = (LPCSTR)(local_70 + 0x1e + (ulonglong)(puVar4 < puVar10));
  uVar8 = ((longlong)puVar4 - (longlong)puVar10) * 0x20000;
  uStackY_c0 = 0x18002e72d;
  lVar3 = FUN_1800289b8();
  if (((ulonglong)puVar10 & uVar8) == 0) {
    uVar8 = uVar8 + lVar7;
    uVar2 = uVar2 ^ uVar8;
    lpPathName = (LPCSTR)(((ulonglong)lpPathName >> 0x1a) - lVar3 ^ (ulonglong)puVar10);
  }
  lVar3 = 0;
  uStackY_c0 = 0x18002e76d;
  BVar1 = RemoveDirectoryA(lpPathName);
  uStackY_c0 = 0x18002e7c5;
  uVar9 = FUN_180038430(lVar3 + ((ulonglong)lpPathName | CONCAT44(extraout_var,BVar1)),0,0,0);
  return uVar9 | (uVar2 & uVar8) - 0xd;
}


```

---

## Function: FUN_18002e820 (0x18002e820)

```c

undefined1 * FUN_18002e820(void)

{
  undefined1 local_30 [24];
  
  FUN_18002a400();
  return local_30;
}


```

---

## Function: FUN_18002e958 (0x18002e958)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002e958(void)

{
  longlong lVar1;
  LPCSTR in_R11;
  
  lVar1 = 0x24ed222d;
  RemoveDirectoryA(in_R11);
  _DAT_446afdf479fc2b79 = 0x18002eb0d;
  FUN_18001b818(0x7ba8ee97,lVar1);
  return;
}


```

---

## Function: FUN_18002eb88 (0x18002eb88)

```c

longlong FUN_18002eb88(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  HANDLE pvVar2;
  ulonglong uVar3;
  LPCWSTR lpSubKey;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_R11;
  ulonglong uVar8;
  longlong unaff_R13;
  undefined1 *puVar9;
  ulonglong local_158;
  PHKEY in_stack_ffffffffffffff38;
  undefined1 local_b8 [8];
  WCHAR local_b0 [4];
  undefined1 local_a8 [112];
  
  puVar9 = (undefined1 *)(unaff_R13 * unaff_RBX);
  uVar7 = 0;
  uVar3 = 0x88cdcbded1519b2a;
  lpSubKey = local_b0;
  puVar5 = local_a8;
  uVar8 = in_R11;
  LVar1 = RegOpenKeyExW((HKEY)0x88cdcbded1519b2a,lpSubKey,(DWORD)puVar5,0,in_stack_ffffffffffffff38)
  ;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar4 = (ulonglong)puVar5 | local_158;
    uVar3 = uVar3 & uVar8;
    local_158 = local_158 + 4;
    puVar5 = (undefined1 *)(uVar4 & uVar7);
    uVar8 = uVar8 ^ local_158;
    puVar9 = local_b8;
    uVar7 = uVar7 - (((ulonglong)lpSubKey >> 0x1d) + unaff_RSI * -2 + in_R11);
  }
  uVar4 = (longlong)(local_158 + ((ulonglong)puVar5 >> 9)) >> 0xc;
  uVar8 = uVar8 + 5 + (ulonglong)(unaff_RSI << 5 < 0);
  if (-1 < (longlong)(uVar7 & uVar3)) {
    uVar8 = uVar8 | uVar7;
    puVar9 = (undefined1 *)((ulonglong)puVar9 & unaff_RSI << 6);
    uVar4 = uVar4 ^ in_R11;
  }
  uVar7 = unaff_RBX >> 8;
  FUN_18004e988();
  puVar5 = local_a8;
  uVar3 = uVar7;
  FUN_18000f2e0();
  uVar8 = uVar7 + uVar8;
  uVar4 = (ulonglong)puVar9 ^ uVar4;
  uVar6 = (ulonglong)puVar5 >> 0x16;
  pvVar2 = FindFirstFileA(s_AuvJwitqlNTQ_1800cce21,(LPWIN32_FIND_DATAA)s_AuvJwitqlNTQ_1800cce21);
  uVar3 = uVar3 ^ uVar6;
  if ((POPCOUNT(uVar4 & uVar8 & 0xff) & 1U) == 0) {
    uVar3 = uVar3 | uVar4 + uVar7 + 7 + (ulonglong)CARRY8(uVar4,uVar7);
  }
  uVar3 = (ulonglong)pvVar2 & (uVar3 ^ uVar6);
  if ((uVar4 & uVar8) != 0) {
    uVar3 = uVar3 << 0x19;
  }
  return uVar3 + 0xb;
}


```

---

## Function: FUN_18002ed60 (0x18002ed60)

```c

longlong FUN_18002ed60(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong in_R10;
  longlong lVar5;
  longlong unaff_R12;
  longlong lVar6;
  longlong unaff_R13;
  ulonglong uVar7;
  undefined1 local_158 [120];
  undefined8 uStack_e0;
  ulonglong local_a8 [4];
  longlong local_88;
  
  puVar4 = local_a8;
  uVar7 = unaff_R13 << 0x1e;
  lVar5 = in_R10 + -0x29;
  lVar6 = unaff_R12 - lVar5;
  uVar2 = unaff_RBX | uVar7;
  uVar3 = 0x8efc009a93f3990b;
  uStack_e0 = 0x18002edce;
  uVar1 = FUN_1800135e0();
  if (uVar1 == 0) {
    uVar7 = 0;
    puVar4 = (ulonglong *)0x0;
    uVar2 = uVar2 << 0x10;
  }
  if ((longlong)(uVar7 - 0x19 & (ulonglong)&stack0xfffffffffffffff8) < 0) {
    uVar3 = 0x8efc009a93f39903;
    uVar2 = uVar2 & (ulonglong)puVar4 ^ lVar5 << 0x17 ^ lVar6 + 5U;
  }
  uVar1 = (local_88 * 0x4000000 + -0x12) -
          (ulonglong)((longlong)(((ulonglong)local_158 >> 0x1a) + local_a8[0]) < 0);
  if (-1 < (longlong)uVar1) {
    uVar1 = uVar1 ^ local_a8[0];
    local_a8[0] = local_a8[0] & uVar1;
  }
  return ((uVar2 & (ulonglong)puVar4 & uVar3) - 0x14) * -0x2b71de15 + (uVar1 >> 5) * -0x2b71de14 +
         local_a8[0] + -0x1b;
}


```

---

## Function: FUN_18002ef70 (0x18002ef70)

```c

longlong FUN_18002ef70(void)

{
  DWORD DVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong in_R9;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  uVar3 = 0x7660d580aa7a5318;
  uVar4 = in_R9 + 0x16;
  DVar1 = GetCurrentDirectoryW((DWORD)&stack0xffffffffffffffe8,(LPWSTR)0x7660d580aa7a5318);
  uVar2 = CONCAT44(extraout_var,DVar1);
  if ((POPCOUNT(in_R11 & unaff_RBX & 0xff) & 1U) == 0) {
    uVar4 = (uVar4 | unaff_RSI) + uVar2;
    uVar2 = uVar2 | in_R11 - 5 ^ unaff_R12 >> 10;
  }
  if ((longlong)uVar2 < 0) {
    unaff_RSI = unaff_RSI - (uVar3 ^ unaff_R13);
  }
  return (uVar4 - 0x1e) * unaff_RSI;
}


```

---

## Function: FUN_18002f050 (0x18002f050)

```c

void FUN_18002f050(void)

{
  FUN_18000e4b0();
  FUN_180032828();
  FUN_18003b5a0();
  return;
}


```

---

## Function: FUN_18002f158 (0x18002f158)

```c

void FUN_18002f158(void)

{
  CreateToolhelp32Snapshot(&DAT_1800bf6e5,0,0);
  return;
}


```

---

## Function: FUN_18002f648 (0x18002f648)

```c

/* WARNING: Removing unreachable block (ram,0x00018002f6b2) */

void FUN_18002f648(void)

{
  FUN_180010fb8();
  return;
}


```

---

## Function: FUN_18002f700 (0x18002f700)

```c

longlong FUN_18002f700(void)

{
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = FUN_180015de0();
  if (lVar1 == 0) {
    lVar1 = unaff_R12 + -0x14;
  }
  return lVar1;
}


```

---

## Function: FUN_18002f7a0 (0x18002f7a0)

```c

undefined1 * FUN_18002f7a0(void)

{
  undefined1 local_20 [8];
  
  FUN_18001d6b0();
  return local_20;
}


```

---

## Function: FUN_18002f888 (0x18002f888)

```c

/* WARNING: Removing unreachable block (ram,0x00018002f8f6) */

undefined1 * FUN_18002f888(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_180020eb0();
  return puVar1;
}


```

---

## Function: FUN_18002f930 (0x18002f930)

```c

void FUN_18002f930(void)

{
  BCryptDestroyKey((BCRYPT_KEY_HANDLE)0x0);
  return;
}


```

---

## Function: FUN_18002f9a8 (0x18002f9a8)

```c

void FUN_18002f9a8(void)

{
  return;
}


```

---

## Function: FUN_18002fa18 (0x18002fa18)

```c

/* WARNING: Removing unreachable block (ram,0x00018002fbbf) */

void FUN_18002fa18(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 extraout_var;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong in_R10;
  longlong lVar13;
  bool bVar14;
  BYTE *in_stack_ffffffffffffffc8;
  DWORD *in_stack_ffffffffffffffd0;
  DWORD in_stack_ffffffffffffffd8;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  lVar13 = in_R10 + 0x10 + (ulonglong)((in_R10 >> 0xb & 1) != 0);
  puVar4 = &DAT_1800c0a99;
  uVar5 = 0x11;
  uVar8 = 0;
  uVar11 = 0x11;
  lVar2 = FUN_180013ce0();
  if (lVar2 != 0) {
    lVar13 = lVar13 + -0xf;
    uVar5 = (uVar5 ^ uVar11) + (uVar8 ^ (ulonglong)puVar4);
  }
  puVar12 = (undefined1 *)(uVar11 & lVar13 + uVar5);
  uVar8 = (lVar13 + uVar5) - 3;
  uVar5 = (((ulonglong)in_stack_ffffffffffffffc8 ^ uVar5) & uVar5 - (longlong)puVar4) << 0x1f;
  puVar4 = puVar4 + 8;
  puVar9 = local_20;
  puVar3 = FUN_180054668();
  if (puVar3 != (undefined1 *)0x0) {
    uVar5 = (uVar5 & (ulonglong)puVar4 & (ulonglong)puVar9) + uVar8;
  }
  uVar11 = 0;
  iVar1 = WSACleanup();
  bVar14 = false;
  if (CONCAT44(extraout_var,iVar1) != 0) {
    puVar12 = local_18;
    uVar5 = (ulonglong)&stack0xffffffffffffffd8 | uVar11 & uVar8;
    uVar8 = uVar8 - 0x1c;
    bVar14 = uVar5 < uVar8;
    uVar5 = uVar5 - uVar8;
  }
  uVar10 = (uint)((longlong)(puVar12 + (ulonglong)bVar14 + 9) >> 2);
  uVar8 = uVar8 + 2;
  iVar7 = 0;
  iVar1 = (int)&stack0xffffffffffffffd0;
  uVar6 = 0xc;
  puVar9 = local_20;
  uVar11 = FUN_180025288();
  if (uVar11 != 0) {
    iVar7 = 4;
    uVar5 = uVar5 >> 10;
    uVar10 = (uVar10 & (uint)puVar9) + iVar1;
  }
  uVar6 = uVar6 | uVar8;
  uVar5 = (ulonglong)puVar9 & uVar5 - 6;
  CryptEncrypt(uVar11,uVar6,(BOOL)uVar5,uVar10 + iVar7,in_stack_ffffffffffffffc8,
               in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8);
  FUN_18004cbc0(uVar11 + 0xd,uVar6,uVar5 ^ uVar6);
  return;
}


```

---

## Function: FUN_18002fc10 (0x18002fc10)

```c

void FUN_18002fc10(void)

{
  longlong lVar1;
  longlong lVar2;
  char *_Source;
  undefined8 uVar3;
  CHAR local_68 [32];
  undefined1 local_48 [32];
  
  RemoveDirectoryA(local_68);
  RemoveDirectoryA((LPCSTR)0xe148d5be5e98917c);
  _Source = (char *)0x801f99983dda6d99;
  FUN_1800532c0();
  lVar2 = 0;
  lVar1 = FUN_18003d340();
  uVar3 = 0;
  strcpy((char *)(lVar2 + 0xd + (ulonglong)(lVar1 != 0 && local_48 < (undefined1 *)0x16)),_Source);
  FUN_180037bb8(uVar3,0xe5c26631);
  return;
}


```

---

## Function: FUN_18002fec8 (0x18002fec8)

```c

void FUN_18002fec8(void)

{
  FUN_18003d9b8();
  return;
}


```

---

## Function: FUN_18002ffe8 (0x18002ffe8)

```c

void FUN_18002ffe8(void)

{
  FUN_18003be38();
  return;
}


```

---

## Function: FUN_1800300c0 (0x1800300c0)

```c

void FUN_1800300c0(void)

{
  FUN_18002cf28();
  return;
}


```

---

## Function: FUN_180030158 (0x180030158)

```c

ulonglong FUN_180030158(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_1800cd211;
  FUN_1800024f8();
  RegDeleteValueW((HKEY)&stack0xffffffffffffffe0,(LPCWSTR)(puVar2 + 0x18));
  uVar1 = FUN_180035188();
  return uVar1 >> 0x15;
}


```

---

## Function: FUN_180030258 (0x180030258)

```c

undefined8 FUN_180030258(void)

{
  FUN_180041e08();
  return 0;
}


```

---

## Function: FUN_180030368 (0x180030368)

```c

void FUN_180030368(void)

{
  return;
}


```

---

## Function: FUN_1800303e0 (0x1800303e0)

```c

longlong FUN_1800303e0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong unaff_R13;
  PHKEY in_stack_ffffffffffffffd8;
  
  lVar2 = 0;
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0x0,(DWORD)&stack0xffffffffffffffd8,0,in_stack_ffffffffffffffd8);
  FUN_18002ffe8();
  BVar1 = FlushFileBuffers((HANDLE)(lVar2 + 10));
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar2 = -unaff_R13;
  }
  return lVar2;
}


```

---

## Function: FUN_1800304b8 (0x1800304b8)

```c

ulonglong FUN_1800304b8(void)

{
  undefined *puVar1;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  ulonglong unaff_R12;
  
  puVar1 = &DAT_1800c5ea4;
  if (0 < (longlong)(in_R11 & unaff_RBX)) {
    puVar1 = (undefined *)(unaff_R12 | 0x1800c5ea4);
  }
  return (ulonglong)puVar1 >> 0x1e;
}


```

---

## Function: FUN_180030548 (0x180030548)

```c

ulonglong FUN_180030548(void)

{
  LSTATUS LVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  HKEY hKey;
  LPCWSTR lpSubKey;
  LPWSTR in_R10;
  LPDWORD unaff_R13;
  DWORD in_stack_ffffffffffffffd8;
  undefined4 uStack_24;
  REGSAM in_stack_ffffffffffffffe0;
  LPSECURITY_ATTRIBUTES in_stack_ffffffffffffffe8;
  PHKEY in_stack_fffffffffffffff0;
  
  lVar2 = FUN_180010440();
  if (lVar2 != 0) {
    in_R10 = (LPWSTR)CONCAT44(uStack_24,in_stack_ffffffffffffffd8);
  }
  hKey = (HKEY)0x8a4602db7c06dc1;
  lVar2 = FUN_180019c78();
  if (lVar2 == 0) {
    in_R10 = (LPWSTR)((longlong)in_R10 << 1);
  }
  lpSubKey = (LPCWSTR)((longlong)&hKey->unused + 1);
  LVar1 = RegCreateKeyExW(hKey,lpSubKey,0x800bf80d,in_R10,in_stack_ffffffffffffffd8,
                          in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,
                          in_stack_fffffffffffffff0,unaff_R13);
  uVar3 = 0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar3 = (CONCAT44(extraout_var,LVar1) | (ulonglong)lpSubKey) >> 0xf;
  }
  return uVar3;
}


```

---

## Function: FUN_180030730 (0x180030730)

```c

void FUN_180030730(longlong param_1)

{
  HWND in_R10;
  UINT unaff_R14D;
  int in_stack_ffffffffffffffc8;
  int in_stack_ffffffffffffffd0;
  
  SetWindowPos((HWND)(param_1 + 0x34),in_R10,0,-0x7ff2d821,in_stack_ffffffffffffffc8,
               in_stack_ffffffffffffffd0,unaff_R14D);
  return;
}


```

---

## Function: FUN_180030798 (0x180030798)

```c

ulonglong FUN_180030798(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong local_28;
  
  FUN_18003d4e8(&stack0xffffffffffffffe0,&stack0xffffffffffffffe8,param_3 + 0xd);
  return local_28 ^ (ulonglong)&local_28;
}


```

---

## Function: FUN_180030838 (0x180030838)

```c

longlong FUN_180030838(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  
  uVar1 = FUN_1800043e0();
  return uVar1 * in_RAX;
}


```

---

## Function: FUN_1800308b0 (0x1800308b0)

```c

undefined1 * FUN_1800308b0(void)

{
  undefined1 local_8 [8];
  
  FUN_18003d340();
  return local_8;
}


```

---

## Function: FUN_180030948 (0x180030948)

```c

void FUN_180030948(void)

{
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [16];
  
  FUN_180044280(local_20,local_18,(longlong)local_10);
  return;
}


```

---

## Function: FUN_180030ac8 (0x180030ac8)

```c

void FUN_180030ac8(void)

{
  FUN_18003d340();
  return;
}


```

---

## Function: FUN_180030b80 (0x180030b80)

```c

longlong FUN_180030b80(void)

{
  errno_t eVar1;
  longlong in_RAX;
  undefined4 extraout_var;
  longlong lVar2;
  rsize_t _SizeInWords;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  wchar_t *_Src;
  ulonglong in_R10;
  undefined1 *in_R11;
  ulonglong unaff_R13;
  
  _SizeInWords = 0;
  if ((longlong)((ulonglong)in_R11 & unaff_RBX) < 1) {
    in_R11 = in_R11 + 0xe;
    unaff_R13 = (unaff_R13 & in_R10) - in_RAX;
  }
  if (-1 < (longlong)unaff_RBX) {
    in_R11 = (undefined1 *)((longlong)in_R11 << 0xf);
    _SizeInWords = 0xfffffffe7ff35b6d;
  }
  _Src = (wchar_t *)(in_R10 & 0x1800ca493);
  if (-1 < (((longlong)unaff_RBX >> 0xd) + -9) * unaff_RDI) {
    _Src = (wchar_t *)((longlong)_Src + ((longlong)unaff_R13 >> 0x18));
    in_R11 = &stack0xffffffffffffffe8;
  }
  eVar1 = wcsncpy_s((wchar_t *)0xffffffffffffffed,_SizeInWords,_Src,0);
  lVar2 = CONCAT44(extraout_var,eVar1);
  if (lVar2 == 0) {
    lVar2 = -(longlong)in_R11;
  }
  return lVar2;
}


```

---

## Function: FUN_180030c50 (0x180030c50)

```c

longlong FUN_180030c50(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0x406535b539529321;
  uVar1 = FUN_180031578();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (uVar1 | uVar3) - 0x13;
  }
  return lVar2 + -0x1b;
}


```

---

## Function: FUN_1800311e0 (0x1800311e0)

```c

ulonglong FUN_1800311e0(void)

{
  longlong in_RAX;
  undefined *unaff_RBX;
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong uVar4;
  longlong local_38;
  
  puVar2 = &DAT_1800d142e;
  uVar4 = in_R10 * (longlong)unaff_RBX;
  if (unaff_RBX == (undefined *)0x0) {
    in_RAX = in_RAX << 6;
    puVar2 = &DAT_1800d143a;
  }
  puVar1 = unaff_RBX;
  if ((longlong)(uVar4 & (ulonglong)((longlong)&local_38 + (longlong)unaff_RBX)) < 1) {
    puVar1 = puVar2 + ((longlong)unaff_RBX - local_38);
    uVar4 = uVar4 >> 0x1d & (in_RAX >> 0x1b) + local_38 & (ulonglong)unaff_RBX;
  }
  puVar1 = puVar1 + uVar4;
  uVar3 = (longlong)unaff_RBX * (longlong)puVar1;
  uVar4 = FUN_1800040b8();
  if (uVar4 != 0) {
    uVar3 = (uVar3 >> 0xb) * 2 + 0xd6299e5;
    uVar4 = uVar4 - (longlong)puVar1;
  }
  if (((longlong)puVar2 - (longlong)puVar1 & uVar4) != 0) {
    uVar4 = uVar4 ^ uVar3;
  }
  return uVar4;
}


```

---

## Function: FUN_1800314e0 (0x1800314e0)

```c

longlong FUN_1800314e0(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong in_R11;
  ulonglong unaff_R14;
  
  lVar1 = FUN_18004ffe0(s_ykuvww_1800c6d35,0);
  if (unaff_RSI >> 0x1f != 0x13) {
    lVar1 = (lVar1 + ((ulonglong)&stack0xffffffffffffffe8 & unaff_R14)) - in_R11;
  }
  return lVar1;
}


```

---

## Function: FUN_180031578 (0x180031578)

```c

void FUN_180031578(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  CHAR *lpFileName;
  ulonglong uVar5;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar6;
  longlong unaff_R12;
  ulonglong uVar7;
  ulonglong unaff_R13;
  ulonglong uVar8;
  longlong local_88;
  ulonglong local_80;
  CHAR local_78 [16];
  
  uVar7 = unaff_R12 - in_R11;
  uVar4 = 7;
  uVar6 = in_R11 << 0xc;
  uVar8 = unaff_R13 & (ulonglong)unaff_RSI;
  uVar2 = in_RAX * 0x1800ca357;
  uVar5 = 0;
  uVar1 = FUN_180046858();
  if (uVar1 != 0) {
    uVar7 = uVar7 & (ulonglong)unaff_RSI >> 5;
    uVar2 = (uVar2 ^ uVar4) * 0x20000 - uVar1;
    unaff_RSI = &stack0xffffffffffffffa0;
    uVar6 = uVar6 + 0x15 & (ulonglong)unaff_RSI;
    in_R10 = (in_R10 & uVar8 | uVar7) + 0x10;
  }
  uVar2 = uVar2 * 0x800000;
  if (-1 < (longlong)uVar2) {
    uVar8 = uVar8 + 0xb & (uVar1 | uVar5);
    unaff_RSI = unaff_RSI + 0x10;
    in_R10 = in_R10 * 0x8000 + 5;
  }
  if (-1 < (longlong)(in_R10 & uVar2)) {
    uVar6 = (uVar6 >> 0x15) + uVar2;
    in_R10 = in_R10 >> 7;
    unaff_RSI = (undefined1 *)((ulonglong)unaff_RSI & uVar8);
    uVar7 = uVar7 - (unaff_RDI + -0x14);
  }
  uVar7 = uVar7 ^ in_R10 & (ulonglong)unaff_RSI;
  uVar2 = uVar2 ^ uVar7;
  if ((longlong)(uVar6 & unaff_RBX) < 1) {
    uVar2 = uVar2 - 0x34;
    uVar7 = uVar7 | local_80;
  }
  uVar1 = (in_R10 & (ulonglong)unaff_RSI ^ uVar7) * uVar2;
  lVar3 = (unaff_RDI + -0x14) * 0x2000000 - uVar1;
  lpFileName = local_78;
  if (-1 < (longlong)
           (uVar1 & (uVar2 ^ lVar3 + (local_88 * (longlong)(unaff_RSI + 0x2772a35635ca6e38) * 0x10 +
                                      lVar3 | uVar2)))) {
    lpFileName = (CHAR *)((ulonglong)lpFileName ^ uVar1);
  }
  FindFirstFileA(lpFileName,(LPWIN32_FIND_DATAA)&stack0xffffffffffffff98);
  FUN_180045470();
  RtlCompareMemory();
  FUN_180008498();
  return;
}


```

---

## Function: FUN_180031830 (0x180031830)

```c

void FUN_180031830(void)

{
  FUN_180037278();
  FUN_180048818();
  return;
}


```

---

## Function: FUN_1800319f0 (0x1800319f0)

```c

/* WARNING: Removing unreachable block (ram,0x000180031a77) */

void FUN_1800319f0(void)

{
  FUN_180009ea0();
  return;
}


```

---

## Function: FUN_180031af0 (0x180031af0)

```c

void FUN_180031af0(void)

{
  FUN_18000a3c0(&stack0xfffffffffffffff0,s_bjqra_1800bf89f,(longlong)&stack0x00000000);
  return;
}


```

---

## Function: FUN_180031cd0 (0x180031cd0)

```c

longlong FUN_180031cd0(void)

{
  longlong in_R11;
  longlong unaff_R13;
  undefined8 local_18;
  
  return ((local_18 >> 0x18) - (in_R11 - unaff_R13)) + 0x526dcdcc3d31bb44;
}


```

---

## Function: FUN_180032098 (0x180032098)

```c

ulonglong FUN_180032098(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  undefined1 local_30 [32];
  
  uVar1 = CreateToolhelp32Snapshot(&DAT_1800d4321,&DAT_1800d145e,param_3 + 0x17,local_30);
  if (0 < (longlong)(unaff_R13 & unaff_RBP)) {
    uVar1 = uVar1 >> 0xe;
  }
  return uVar1;
}


```

---

## Function: FUN_180032150 (0x180032150)

```c

longlong FUN_180032150(void)

{
  longlong lVar1;
  undefined *puVar2;
  ulonglong unaff_RDI;
  
  puVar2 = &DAT_1800bf8bf;
  lVar1 = FUN_180019da8(&DAT_1800d4501,0x1800bf8bf,0x1800d14cd,0x1800c5bfc);
  return lVar1 * ((ulonglong)puVar2 & unaff_RDI);
}


```

---

## Function: FUN_1800325e8 (0x1800325e8)

```c

undefined8 FUN_1800325e8(void)

{
  FUN_180021e78();
  return 0x5e28b9f3;
}


```

---

## Function: FUN_180032738 (0x180032738)

```c

undefined8 FUN_180032738(void)

{
  FUN_1800205e8();
  return 0x9404de0f9cf482d1;
}


```

---

## Function: FUN_180032828 (0x180032828)

```c

void FUN_180032828(void)

{
  undefined1 local_30 [16];
  
  FUN_1800031c8();
  RtlZeroMemory(local_30,0,&stack0xfffffffffffffff0);
  return;
}


```

---

## Function: FUN_1800329c0 (0x1800329c0)

```c

/* WARNING: Removing unreachable block (ram,0x000180032a95) */

void FUN_1800329c0(void)

{
  return;
}


```

---

## Function: FUN_180032ba0 (0x180032ba0)

```c

void FUN_180032ba0(void)

{
  FUN_180005c28();
  return;
}


```

---

## Function: FUN_180032c20 (0x180032c20)

```c

/* WARNING: Removing unreachable block (ram,0x000180032c6b) */

void FUN_180032c20(void)

{
  longlong unaff_RBX;
  ulonglong unaff_R12;
  
  FUN_180052230(&DAT_1800ba256,0x215157c4,(unaff_RBX >> 0xf ^ unaff_R12) * -2 + 0xb);
  FUN_18000a968();
  return;
}


```

---

## Function: FUN_180032cf8 (0x180032cf8)

```c

/* WARNING: Removing unreachable block (ram,0x000180032d35) */

void FUN_180032cf8(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong in_R10;
  ulonglong uVar12;
  ulonglong in_R11;
  ulonglong uVar13;
  longlong unaff_R12;
  longlong lVar14;
  ulonglong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  
  uVar13 = in_R11 & (ulonglong)local_58;
  uVar1 = (ulonglong)local_58 | unaff_RSI;
  uVar6 = unaff_RSI + in_R10 + uVar1;
  uVar12 = unaff_RSI + in_RAX;
  uVar10 = uVar13 + 0x1800c2a8b;
  uVar8 = local_68 ^ (ulonglong)(&DAT_1800c2a97 + uVar13) ^ uVar6;
  puVar4 = (undefined1 *)0x31e70d2f;
  uVar1 = FUN_180024ef0(0,uVar1 << 0x19,uVar8);
  if (uVar1 != 0) {
    puVar4 = local_38;
    uVar6 = uVar6 | uVar10;
    uVar13 = (uVar13 | unaff_R12 + 0x31e70d4aU) + 7;
  }
  uVar13 = (longlong)uVar13 >> 0x11;
  uVar12 = uVar12 >> 9;
  lVar5 = (longlong)puVar4 - uVar13;
  lVar7 = (uVar6 ^ uVar13) * uVar13;
  lVar14 = (uVar8 - 0xf) - (ulonglong)(0xffffffffffffffee < uVar10);
  lVar11 = (uVar10 + 0x11) - lVar14;
  FUN_1800287a8();
  uVar6 = lVar5 * uVar13;
  puVar2 = (undefined *)0x0;
  puVar9 = &DAT_1800d2594;
  uVar1 = 0xba933e5e5d6ef7f9;
  lVar5 = FUN_180016590();
  if (lVar5 != 0) {
    uVar1 = (uVar1 + 0x10) - lVar11;
    uVar13 = uVar13 & (ulonglong)puVar9;
    puVar2 = (undefined *)((ulonglong)(puVar2 + uVar12 + lVar14) & lVar7 * 2 - 4U);
    puVar9 = puVar9 + -uVar13;
  }
  puVar3 = puVar2;
  lVar5 = FUN_18003bff0();
  if (lVar5 == 0) {
    puVar3 = puVar3 + 0x19;
    puVar2 = puVar9 + ((ulonglong)(puVar2 + (ulonglong)CARRY8(uVar6,uVar1) + 0x24) & uVar13);
  }
  FUN_180012138(puVar2,puVar3 + -4,(int)puVar9,(int)lVar11);
  return;
}


```

---

## Function: FUN_180032f68 (0x180032f68)

```c

/* WARNING: Removing unreachable block (ram,0x000180033029) */

longlong FUN_180032f68(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong local_28;
  
  uVar1 = FUN_180027420();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 >> 8;
  }
  RemoveDirectoryA((LPCSTR)(uVar2 << 0x1c));
  return local_28 + 0xb;
}


```

---

## Function: FUN_180033180 (0x180033180)

```c

longlong FUN_180033180(void)

{
  longlong lVar1;
  
  FUN_180038998();
  RemoveDirectoryA((LPCSTR)0x0);
  lVar1 = FUN_180027330();
  return lVar1 + 0x5a981341;
}


```

---

## Function: FUN_180033280 (0x180033280)

```c

/* WARNING: Removing unreachable block (ram,0x0001800332bb) */

ulonglong FUN_180033280(void)

{
  longlong in_RAX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  
  return in_RAX - 0x12U | unaff_RDI ^ in_R10;
}


```

---

## Function: FUN_1800333a8 (0x1800333a8)

```c

longlong FUN_1800333a8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ULONGLONG UVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong in_R10;
  longlong lVar4;
  ulonglong in_R11;
  
  lVar3 = param_3 + in_R10;
  lVar4 = (param_3 & in_R11) - 0x14;
  puVar2 = &stack0xffffffffffffffe8;
  UVar1 = GetTickCount64();
  if (UVar1 != 0) {
    puVar2 = (undefined1 *)(((ulonglong)puVar2 & 0x1ffffffffffffff) << 5);
  }
  if ((longlong)(puVar2 + -4) < 0) {
    UVar1 = (UVar1 | lVar3 - lVar4) - 0x1f;
  }
  return (longlong)UVar1 >> 0xd;
}


```

---

## Function: FUN_180033468 (0x180033468)

```c

undefined8 FUN_180033468(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  
  lVar1 = FUN_180033d70(0x139a9fd719e4de53,0x1800bfa07);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = unaff_RDI;
  }
  return uVar2;
}


```

---

## Function: FUN_1800335b8 (0x1800335b8)

```c

/* WARNING: Removing unreachable block (ram,0x000180033609) */

ulonglong FUN_1800335b8(void)

{
  longlong in_RAX;
  ulonglong unaff_RSI;
  ulonglong uVar1;
  longlong in_R9;
  longlong in_R10;
  
  uVar1 = unaff_RSI | in_R9 + 0x19U;
  return (in_RAX + -0x15) -
         (ulonglong)
         (SEXT816((longlong)(in_R10 * uVar1)) != SEXT816(in_R10) * SEXT816((longlong)uVar1));
}


```

---

## Function: FUN_180033638 (0x180033638)

```c

/* WARNING: Removing unreachable block (ram,0x00018003376a) */

void FUN_180033638(void)

{
  longlong lVar1;
  SIZE_T dwLength;
  
  FUN_18001a1c8();
  dwLength = 0;
  lVar1 = FUN_180006a80();
  FUN_18000a770();
  VirtualQuery((LPCVOID)(lVar1 + 0xd),(PMEMORY_BASIC_INFORMATION)0x4cba29c3c7326cf6,dwLength);
  return;
}


```

---

## Function: FUN_180033870 (0x180033870)

```c

/* WARNING: Removing unreachable block (ram,0x000180033981) */

longlong FUN_180033870(void)

{
  errno_t eVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  rsize_t in_R9;
  ulonglong in_R10;
  ulonglong unaff_R13;
  ulonglong uVar4;
  char local_c8 [56];
  undefined1 local_90 [104];
  
  uVar4 = (unaff_R13 | in_R10) + 0x1b;
  uVar3 = 0xd2d1712b;
  FUN_180041d58(&DAT_1800c6dd5,0xd66d0f8208787561,&DAT_1800c1b0d);
  if ((uVar4 & (ulonglong)&stack0xfffffffffffffff8) != 0) {
    uVar3 = uVar4 ^ 0xd2d1712b;
  }
  eVar1 = strncpy_s(local_c8,(rsize_t)local_c8,(char *)0x0,in_R9);
  lVar2 = CONCAT44(extraout_var,eVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  return lVar2 + (uVar3 & (ulonglong)local_90);
}


```

---

## Function: FUN_180033a68 (0x180033a68)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180033b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180033a68(void)

{
  undefined *puVar1;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong in_R10;
  
  if ((longlong)(in_R10 - 10U & unaff_RSI) < 0) {
    unaff_RBX = unaff_RBX + unaff_RSI;
  }
  puVar1 = &DAT_1800d4509;
  FUN_180008830();
  _DAT_35dda7ca = 0x180033bc7;
  MessageBoxW((HWND)(puVar1 + 0xb),(LPCWSTR)0xdb3305ccd6380d26,(LPCWSTR)0x0,
              (UINT)(unaff_RBX << 0x16));
  _DAT_35dda7ca = 0x180033c0f;
  gethostname(&DAT_1800c1f7b,0);
  return 0x3fe3a12;
}


```

---

## Function: FUN_180033d70 (0x180033d70)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180033d70(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  
  RtlGetVersion(&DAT_1800d4511,local_48,
                unaff_RDI + 0x1e +
                (ulonglong)
                (0xffffffffffffffea < unaff_RSI ||
                CARRY8(unaff_RSI + 0x15,(ulonglong)(0xffffffffffffffe4 < param_2))),local_50);
  return;
}


```

---

## Function: FUN_180033ee0 (0x180033ee0)

```c

void FUN_180033ee0(void)

{
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  FUN_180028df8(local_68,0xc81d7394502f39b7,(int)local_58);
  return;
}


```

---

## Function: FUN_1800340f8 (0x1800340f8)

```c

longlong FUN_1800340f8(longlong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 local_48;
  
  if (local_48 < 0) {
    unaff_RDI = unaff_RDI + unaff_R13;
  }
  lVar1 = FUN_180010748(param_1 + 0x1f);
  if (lVar1 == 0) {
    unaff_RDI = unaff_RDI << 0x1c;
  }
  return unaff_RDI;
}


```

---

## Function: FUN_180034220 (0x180034220)

```c

/* WARNING: Removing unreachable block (ram,0x000180034245) */
/* WARNING: Removing unreachable block (ram,0x000180034276) */

void FUN_180034220(void)

{
  return;
}


```

---

## Function: FUN_1800342b0 (0x1800342b0)

```c

undefined8 FUN_1800342b0(void)

{
  FUN_180050aa0();
  return 0x5b695dee60966467;
}


```

---

## Function: FUN_180034328 (0x180034328)

```c

/* WARNING: Removing unreachable block (ram,0x000180034361) */

void FUN_180034328(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  FUN_18004c720(0x6fa5f4848df90486,param_4,param_3);
  FUN_180048418();
  return;
}


```

---

## Function: FUN_1800343b0 (0x1800343b0)

```c

void FUN_1800343b0(void)

{
  FUN_18002aa88();
  FUN_180016278();
  malloc(0x1800c3823);
  return;
}


```

---

## Function: FUN_180034550 (0x180034550)

```c

undefined8 FUN_180034550(void)

{
  FUN_18003e1e0();
  return 0x34b0079b25ad83ce;
}


```

---

## Function: FUN_1800346d0 (0x1800346d0)

```c

longlong FUN_1800346d0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0x12ab101c312f9bd4;
  uVar1 = FUN_180038a30();
  return (uVar1 ^ uVar2) * ((longlong)&stack0xfffffffffffffff8 >> 0x19);
}


```

---

## Function: FUN_1800347e0 (0x1800347e0)

```c

ulonglong FUN_1800347e0(void)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined *_Memory;
  longlong lVar3;
  size_t _NewSize;
  longlong local_18;
  
  lVar3 = 0;
  FUN_180005c28();
  _Memory = &DAT_1800c6de5;
  _NewSize = lVar3 + 0x1c;
  FUN_180019f10();
  pvVar1 = realloc(_Memory,_NewSize);
  uVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = (ulonglong)pvVar1 & local_18 + (longlong)pvVar1;
  }
  return uVar2;
}


```

---

## Function: FUN_1800348b8 (0x1800348b8)

```c

longlong FUN_1800348b8(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 auStack_38 [32];
  
  uVar1 = in_RAX ^ unaff_R12;
  if ((unaff_R12 & (ulonglong)auStack_38) != 0) {
    uVar1 = uVar1 + (unaff_R12 + unaff_R13 & 0x1800ca6e1) & unaff_R13;
    unaff_R13 = unaff_R13 & 0x1800ca6e1;
  }
  return uVar1 * 2 - unaff_R13;
}


```

---

## Function: FUN_1800349d0 (0x1800349d0)

```c

void FUN_1800349d0(void)

{
  longlong unaff_R12;
  PHKEY in_stack_ffffffffffffffc8;
  WCHAR local_30 [12];
  
  RegOpenKeyExW((HKEY)(unaff_R12 + 0xc),local_30,0x800d3c6a,0x800ce842,in_stack_ffffffffffffffc8);
  FUN_18002d878();
  return;
}


```

---

## Function: FUN_180034b60 (0x180034b60)

```c

void FUN_180034b60(void)

{
  DWORD in_stack_ffffffffffffffc8;
  undefined1 local_18 [8];
  
  VirtualAllocEx(&DAT_1800c505b,(LPVOID)0xf1569a4c0bd5d8fc,0x1800ca6e9,(DWORD)local_18,
                 in_stack_ffffffffffffffc8);
  return;
}


```

---

## Function: FUN_180034c30 (0x180034c30)

```c

void FUN_180034c30(void)

{
  FUN_18003e2f8();
  return;
}


```

---

## Function: FUN_180034ca8 (0x180034ca8)

```c

ulonglong FUN_180034ca8(void)

{
  ulonglong in_R11;
  
  return in_R11 >> 1 & (in_R11 >> 1 ^ 0xe1a0159);
}


```

---

## Function: FUN_180034d10 (0x180034d10)

```c

longlong FUN_180034d10(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *unaff_RBX;
  undefined1 *puVar3;
  ulonglong in_R10;
  ulonglong unaff_R12;
  undefined1 local_30 [16];
  
  uVar2 = 0;
  puVar3 = &stack0xfffffffffffffff8;
  lVar1 = NtClose();
  if (lVar1 == 0) {
    unaff_RBX = local_30;
    puVar3 = (undefined1 *)((ulonglong)puVar3 & uVar2);
    in_R10 = in_R10 ^ unaff_R12;
  }
  if (-1 < (longlong)unaff_RBX) {
    uVar2 = (ulonglong)(puVar3 + uVar2) & in_R10;
  }
  return lVar1 - uVar2;
}


```

---

## Function: FUN_180034eb8 (0x180034eb8)

```c

longlong FUN_180034eb8(void)

{
  longlong lVar1;
  
  FUN_180004b38();
  FUN_180042350();
  lVar1 = FUN_180050288();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 9;
  }
  return lVar1;
}


```

---

## Function: FUN_180034fc0 (0x180034fc0)

```c

void FUN_180034fc0(void)

{
  GetFullPathNameA((LPCSTR)0x0,0,&stack0x00000000,(LPSTR *)&DAT_1800bfbbe);
  FUN_180042168();
  return;
}


```

---

## Function: entry (0x180035058)

```c

void entry(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = DAT_1800bfbc6 + 0xecb5a99351e4a523U ^ 0x134a566cfa8a772d;
  uVar2 = ((uVar1 >> 0x26 | uVar1 << 0x1a) ^ 0x134a566cfa8a772d) + 0xecb5a993057588d3;
  uVar1 = uVar2 >> 0x13;
  uVar2 = (uVar2 << 0x2d | uVar1) >> 0x17;
  uVar1 = (((uVar2 | uVar1 << 0x29) >> 0x19 | uVar2 << 0x27) ^ 0x134a566cfa8a772d) +
          0x3f691167592ef16d ^ 0xdcb44d2959b3ea29;
  uVar2 = ((uVar1 << 0x24 | uVar1 >> 0x1c) + 0xdcb44d2959b3ea29 ^ 0xea29dcb44d2959b3) +
          0x15d6234bb2d6a64d;
  uVar1 = uVar2 >> 0x1e;
                    /* WARNING: Could not recover jumptable at 0x0001800350ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(((uVar1 << 0x3e | (uVar2 << 0x22 | uVar1) >> 2) ^ 0x6a988d92723bcbb4) + 0x1800350e8))()
  ;
  return;
}


```

---

## Function: FUN_1800350f0 (0x1800350f0)

```c

void FUN_1800350f0(void)

{
  FUN_180038688();
  return;
}


```

---

## Function: FUN_180035188 (0x180035188)

```c

longlong FUN_180035188(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong in_R10;
  ulonglong uVar5;
  longlong in_R11;
  longlong lVar6;
  longlong unaff_R12;
  undefined1 auStack_98 [64];
  ulonglong local_58 [2];
  undefined1 auStack_43 [35];
  
  uVar5 = in_R10 + 0xf +
          (ulonglong)
          (-1 < (longlong)(unaff_R12 + in_R11 & (ulonglong)auStack_98) &&
          0xffffffffffffffe8 < (ulonglong)(unaff_R12 + in_R11));
  lVar6 = (in_R11 >> 0x10) + -9;
  lVar3 = 0;
  puVar4 = (ulonglong *)0x0;
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  uVar2 = CONCAT44(extraout_var,BVar1) - lVar3 & uVar5;
  if (((uVar5 * ((uVar5 | 0xffffffffffffffe5) >> 0x13) * lVar6 | local_58[0]) & 0x389d58cdc37dfa97)
      != 0) {
    puVar4 = local_58;
    uVar2 = (ulonglong)auStack_43 >> 0x1a;
  }
  return (uVar2 + (longlong)puVar4) * local_58[0] * (longlong)puVar4;
}


```

---

## Function: FUN_1800352a8 (0x1800352a8)

```c

/* WARNING: Removing unreachable block (ram,0x0001800352d1) */

void FUN_1800352a8(void)

{
  FUN_180020db0();
  FUN_180055c18();
  FUN_18000d698();
  return;
}


```

---

## Function: FUN_1800353c8 (0x1800353c8)

```c

void FUN_1800353c8(void)

{
  FUN_180044e28();
  FUN_180043700();
  return;
}


```

---

## Function: FUN_1800354a0 (0x1800354a0)

```c

void FUN_1800354a0(void)

{
  FUN_18000d178();
  return;
}


```

---

## Function: FUN_180035580 (0x180035580)

```c

void FUN_180035580(void)

{
  longlong unaff_R12;
  
  FUN_180042d90(unaff_R12);
  RemoveDirectoryA(&DAT_1800c4979);
  FUN_180014350();
  FUN_18000bf30();
  return;
}


```

---

## Function: FUN_180035668 (0x180035668)

```c

undefined1 * FUN_180035668(void)

{
  undefined1 local_18 [8];
  
  RemoveDirectoryA(s_PXikJ_1800c527b);
  return local_18;
}


```

---

