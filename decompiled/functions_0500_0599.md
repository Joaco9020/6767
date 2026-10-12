null

Logs:
# Decompiled Functions: index 500-599

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180024fa0 (0x180024fa0)

```c

void FUN_180024fa0(void)

{
  FUN_18001fda8();
  return;
}


```

---

## Function: FUN_180025048 (0x180025048)

```c

longlong FUN_180025048(void)

{
  longlong in_RAX;
  
  return in_RAX + 3;
}


```

---

## Function: FUN_1800250d0 (0x1800250d0)

```c

void FUN_1800250d0(void)

{
  WSAGetLastError();
  return;
}


```

---

## Function: FUN_1800251b0 (0x1800251b0)

```c

undefined8 FUN_1800251b0(void)

{
  RemoveDirectoryA((LPCSTR)0xde45073e858346f);
  return 0;
}


```

---

## Function: FUN_180025288 (0x180025288)

```c

ulonglong FUN_180025288(void)

{
  undefined1 *puVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong local_28;
  ulonglong local_20;
  
  puVar1 = FUN_18003a238();
  if (puVar1 == (undefined1 *)0x0) {
    unaff_RDI = unaff_RDI << 0x10;
    unaff_R12 = (unaff_R12 | unaff_R13) - 0x1d;
  }
  if (unaff_RBX < 0) {
    puVar1 = (undefined1 *)
             ((ulonglong)puVar1 | local_20 |
             (ulonglong)&local_28 | unaff_RDI + (unaff_R12 | local_20 | local_20));
  }
  return ((ulonglong)(puVar1 + -0xf) | local_28) >> 7;
}


```

---

## Function: FUN_180025350 (0x180025350)

```c

void FUN_180025350(void)

{
  return;
}


```

---

## Function: FUN_1800253d8 (0x1800253d8)

```c

ulonglong FUN_1800253d8(void)

{
  longlong in_RAX;
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_50 [2];
  longlong local_40 [2];
  
  uVar7 = local_40[0] - in_RAX;
  uVar5 = unaff_RSI ^ (ulonglong)local_40;
  plVar1 = local_40;
  if ((longlong)uVar5 < 0) {
    uVar7 = uVar7 & uVar5 + 0xf;
    plVar1 = (longlong *)((ulonglong)plVar1 & (in_R11 ^ uVar7));
    uVar5 = uVar5 + 0xf >> 0xb;
  }
  lVar2 = (longlong)plVar1 + (-0x14 - (ulonglong)CARRY8(uVar5,uVar7 - 0x1b));
  uVar7 = 0;
  lVar2 = ((ulonglong)local_50 ^ uVar5) + 0x1a +
          (ulonglong)
          (SEXT816((longlong)(lVar2 * uVar5)) != SEXT816(lVar2) * SEXT816((longlong)uVar5));
  plVar1 = local_40;
  puVar4 = &DAT_1800cbb95;
  plVar6 = local_40;
  uVar5 = FUN_180004c38();
  if ((POPCOUNT(local_50[0] & (ulonglong)puVar4 & 0xff) & 1U) != 0) {
    uVar7 = 10;
    local_50[0] = local_50[0] - 10 & (longlong)plVar1 + lVar2;
    plVar1 = (longlong *)(((longlong)plVar1 + lVar2 & uVar5 | uVar5 | local_50[0]) << 0x1d);
  }
  uVar10 = (longlong)plVar1 - 0x12;
  uVar8 = (local_50[0] + uVar7 & (ulonglong)plVar1) - 2;
  uVar9 = (lVar2 + uVar8 | uVar7) + uVar8;
  uVar3 = FUN_18001a5d8(&DAT_1800c4469,0,(longlong)plVar6);
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar8 = uVar8 + uVar10;
    uVar5 = uVar3 ^ (uVar7 | uVar10);
    uVar10 = (uVar10 | uVar8) + (uVar7 | uVar10);
    uVar9 = uVar9 + uVar8;
  }
  if ((longlong)(uVar10 & (ulonglong)&stack0xfffffffffffffff8) < 0) {
    uVar5 = uVar5 * 0x400000 + ((uVar8 | uVar9) + 0x19) * 0x400;
  }
  return uVar5;
}


```

---

## Function: FUN_1800255f8 (0x1800255f8)

```c

LPSTR FUN_1800255f8(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  LPCWSTR lpSubKey;
  LPSTR pCVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  DWORD ulOptions;
  ulonglong in_R9;
  ulonglong uVar5;
  longlong in_R10;
  ulonglong uVar6;
  ulonglong in_R11;
  undefined1 *puVar7;
  ulonglong unaff_R13;
  undefined1 local_138 [104];
  undefined8 uStackY_d0;
  PHKEY in_stack_ffffffffffffff58;
  
  uVar1 = in_RAX - 0xe;
  lVar3 = 0;
  if (unaff_RSI != 0) {
    lVar3 = (unaff_RSI & in_R11) + 0x19;
    unaff_RBX = unaff_RBX + 0x320288e5;
    in_R9 = in_R9 + 10;
    in_R11 = in_R11 + unaff_R13 & in_R9;
    uVar1 = uVar1 + unaff_R13;
  }
  uVar4 = lVar3 + unaff_R13;
  lpSubKey = (LPCWSTR)(uVar1 + 0x320288e5 & uVar1);
  uVar5 = in_R9 ^ in_R11;
  uVar6 = in_R10 + -0x12 + (longlong)lpSubKey;
  if ((unaff_R13 & 0x7a66284d81b89f13) != 0) {
    unaff_R13 = unaff_R13 ^ uVar4 + 10;
    uVar1 = (longlong)lpSubKey + ((longlong)uVar1 >> 0x1f) + -0x19;
    lpSubKey = (LPCWSTR)((longlong)lpSubKey - in_R11);
    uVar5 = uVar5 + 2 | ((unaff_RBX | uVar4 | uVar1) >> 1) - (uVar5 + 2);
  }
  puVar7 = local_138;
  ulOptions = 0x16;
  uVar5 = uVar5 + 0x14;
  uStackY_d0 = 0x1800256ed;
  lVar3 = FUN_1800268e0();
  if (lVar3 == 0) {
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 & unaff_R13;
    lpSubKey = (LPCWSTR)(((ulonglong)lpSubKey & uVar5) + uVar5);
  }
  if ((uVar6 & (ulonglong)lpSubKey) != 0) {
    uVar5 = (uVar5 ^ (ulonglong)(puVar7 + 0x15)) - 0x19;
  }
  uStackY_d0 = 0x180025775;
  RegOpenKeyExW((HKEY)&DAT_1800d00a3,lpSubKey,ulOptions,(REGSAM)uVar5,in_stack_ffffffffffffff58);
  uStackY_d0 = 0x1800257ad;
  pCVar2 = GetCommandLineA();
  return pCVar2 + 10;
}


```

---

## Function: FUN_180025808 (0x180025808)

```c

void FUN_180025808(undefined8 param_1,longlong param_2,int param_3,REGSAM param_4)

{
  PHKEY in_stack_ffffffffffffff98;
  
  RegOpenKeyExW((HKEY)0x649f56dca65da000,(LPCWSTR)(param_2 + 0x11),(param_3 + 6) * -0x59a26000 + 7,
                param_4,in_stack_ffffffffffffff98);
  FUN_18003dd98();
  FindClose((HANDLE)0x0);
  return;
}


```

---

## Function: FUN_1800259f8 (0x1800259f8)

```c

/* WARNING: Type propagation algorithm not settling */

char * FUN_1800259f8(void)

{
  BOOL BVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  char *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  longlong unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R9;
  ulonglong uVar9;
  ulonglong in_R11;
  longlong unaff_R13;
  char *pcVar10;
  ulonglong local_158;
  longlong local_150 [14];
  undefined8 uStack_e0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [120];
  
  uVar9 = in_R9 & unaff_R13 - 0xdU;
  uVar7 = unaff_RBX - uVar9;
  uVar8 = (uVar7 + in_R11 + -0x10) - (ulonglong)CARRY8(uVar7,in_R11);
  puVar5 = local_a8;
  uStack_e0 = 0x180025a71;
  lVar2 = FUN_18001d398();
  if (lVar2 == 0) {
    lVar2 = -uVar7;
    uVar7 = uVar7 | (unaff_R13 - 0xdU) * 0x800000;
    uVar8 = uVar8 ^ unaff_RSI ^ (ulonglong)puVar5;
  }
  uVar8 = uVar8 + 0x1a;
  lVar2 = lVar2 >> 0xe;
  uVar3 = lVar2 + 0x15 +
          (ulonglong)
          (SEXT816((longlong)puVar5 * lVar2) != SEXT816((longlong)puVar5) * SEXT816(lVar2));
  puVar5 = local_a0;
  uStack_e0 = 0x180025ac1;
  BVar1 = RemoveDirectoryA((LPCSTR)0xcc60611eda5f265f);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar8 = uVar8 + (uVar7 & uVar9);
    local_150[0] = local_150[0] * 0x40000000;
  }
  lVar2 = 0;
  uStack_e0 = 0x180025b03;
  uVar7 = FUN_1800448c0(0,(longlong)puVar5,uVar3);
  uVar3 = lVar2 << 0xb;
  uVar9 = local_150[0] >> 0x1c;
  if ((longlong)(uVar3 & unaff_RBP) < 1) {
    uVar9 = uVar9 & uVar7;
    uVar3 = uVar3 | (longlong)puVar5 << 0x12 | uVar8;
  }
  puVar6 = &DAT_1800d5587;
  uStack_e0 = 0x180025b52;
  pcVar4 = FUN_180042168();
  pcVar10 = (char *)((longlong)local_150 + uVar3);
  if (uVar9 == 0) {
    pcVar10 = pcVar10 + (longlong)pcVar4;
    puVar6 = (undefined *)((ulonglong)puVar6 ^ local_158);
  }
  if ((longlong)uVar9 < 1) {
    pcVar10 = (char *)((ulonglong)pcVar10 | (ulonglong)puVar6);
  }
  return pcVar4 + (longlong)pcVar10;
}


```

---

## Function: FUN_180025c00 (0x180025c00)

```c

/* WARNING: Removing unreachable block (ram,0x000180025c4c) */
/* WARNING: Removing unreachable block (ram,0x000180025d24) */

void FUN_180025c00(void)

{
  ulonglong unaff_RBP;
  longlong in_R9;
  ulonglong in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  undefined1 local_80 [96];
  
  if (-1 < (longlong)(unaff_R13 - 0x19U & unaff_RBP)) {
    in_R11 = in_R11 | unaff_R12 >> 10 | 0xffffffffffffffee;
  }
  FUN_180036988(local_80,in_R9 - 0x10U >> 0xc,in_R11);
  FUN_18004cc68();
  FUN_18004f4c0();
  return;
}


```

---

## Function: FUN_180025e48 (0x180025e48)

```c

/* WARNING: Removing unreachable block (ram,0x000180025fab) */

longlong FUN_180025e48(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_98;
  ulonglong local_88;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60 [4];
  ulonglong local_40 [2];
  
  uVar4 = unaff_RSI >> 0x13;
  uVar5 = unaff_RDI | 0x3001;
  puVar6 = local_40 + uVar5 * -0x10000000;
  uVar2 = uVar5 * -0x80000000 + 0x3001;
  lVar1 = FUN_180052d98();
  uVar3 = uVar5 * 0x80000000;
  if (lVar1 != 0) {
    uVar4 = uVar4 + (unaff_RBX ^ uVar5 * 0x80000000);
    uVar2 = uVar2 + 9 + lVar1;
    uVar3 = local_78;
  }
  uVar8 = (unaff_R13 + param_3 + 0x10) - uVar4;
  uVar5 = uVar3 + 0x1a + (ulonglong)((uVar2 >> 0x28 & 1) != 0);
  uVar7 = (longlong)puVar6 + local_60[0] | uVar5;
  uVar2 = uVar2 ^ uVar8;
  uVar3 = 0xd79b3927;
  uVar9 = (uVar7 >> 0x14) << 0xf;
  if (((uVar7 + uVar8) - 0x18 & (ulonglong)&local_78) != 0) {
    uVar9 = local_98 | uVar5;
    uVar2 = uVar2 << 0x1c;
    uVar3 = 0x14db6e9f9;
  }
  uVar3 = ((uVar9 - 0x1f) * local_88 - uVar4 | uVar3 + local_88) + 0x1c +
          (ulonglong)
          CARRY8((local_40[0] & (ulonglong)local_60) * 0x800000 * uVar2,
                 ((uVar5 + local_98) - (ulonglong)CARRY8(uVar3,local_88)) - 0x3a);
  if ((longlong)local_70 < 1) {
    local_70 = local_70 & uVar2 * uVar3;
    uVar3 = uVar3 - 0xd | local_68 | uVar2 * uVar3 - (uVar3 - 0xd);
  }
  return (local_70 | uVar3) + uVar3;
}


```

---

## Function: FUN_180026060 (0x180026060)

```c

undefined1 * FUN_180026060(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong in_R9;
  ulonglong uVar3;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 auStack_3b [51];
  
  uVar2 = 0xa3f62fe27e22b1c3;
  uVar3 = in_R9 + unaff_R12 + 0x19;
  lVar1 = FUN_18001a9c8();
  if (lVar1 == 0) {
    uVar3 = uVar3 & uVar2;
  }
  return auStack_3b + -(uVar3 | in_R10);
}


```

---

## Function: FUN_180026150 (0x180026150)

```c

/* WARNING: Removing unreachable block (ram,0x0001800261aa) */

longlong FUN_180026150(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBX;
  undefined1 *puVar3;
  ulonglong in_R10;
  undefined1 local_28 [24];
  
  lVar2 = 0;
  puVar3 = local_28;
  uVar1 = FUN_1800371c8();
  return (uVar1 + 0x11 + (ulonglong)((ulonglong)((longlong)puVar3 << 0x16) < in_R10)) *
         (unaff_RBX >> 0x1f) * lVar2 * in_R10 * 0x200;
}


```

---

## Function: FUN_1800262d0 (0x1800262d0)

```c

longlong FUN_1800262d0(void)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  longlong in_R10;
  ulonglong uVar2;
  longlong unaff_R13;
  
  uVar2 = in_R10 * -0x1a;
  lVar1 = FUN_18003e1e0();
  if (lVar1 == 0) {
    lVar1 = (unaff_R13 + 0x1e) - (unaff_RBX ^ uVar2);
  }
  return lVar1;
}


```

---

## Function: FUN_180026438 (0x180026438)

```c

void FUN_180026438(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  RegOpenKeyW((HKEY)0xadc745facca9e4c8,(LPCWSTR)&DAT_1800cc2a3,(PHKEY)(param_3 + 1));
  FUN_180024530();
  return;
}


```

---

## Function: FUN_1800264e8 (0x1800264e8)

```c

void FUN_1800264e8(void)

{
  FUN_18003d640();
  return;
}


```

---

## Function: FUN_1800265a8 (0x1800265a8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800265a8(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0xfffffffffffffff8;
  puVar2 = &DAT_a7443e9cdfbdb3f1;
  _DAT_a7443e9cdfbdb3c1 = 0x1800265f3;
  lVar1 = FUN_180056230(-0x355749b2e9c364ee);
  if (lVar1 == 0) {
    lVar1 = (longlong)puVar3 - (longlong)puVar2;
  }
  return lVar1;
}


```

---

## Function: FUN_180026648 (0x180026648)

```c

/* WARNING: Removing unreachable block (ram,0x00018002669b) */
/* WARNING: Removing unreachable block (ram,0x0001800266d9) */

undefined8 FUN_180026648(void)

{
  FUN_18004a548();
  return 0x690794a36e16d95b;
}


```

---

## Function: FUN_180026810 (0x180026810)

```c

void FUN_180026810(void)

{
  HKEY__ local_18 [2];
  
  RegOpenKeyW(local_18,(LPCWSTR)0x0,(PHKEY)0x0);
  return;
}


```

---

## Function: FUN_1800268e0 (0x1800268e0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800269b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800268e0(void)

{
  FUN_18004c350();
  return;
}


```

---

## Function: FUN_180026a20 (0x180026a20)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180026a20(void)

{
  FUN_180022288(0,&DAT_1800c65c5,0x1800d1006);
  return;
}


```

---

## Function: FUN_180026b60 (0x180026b60)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180026c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180026b60(void)

{
  NTSTATUS NVar1;
  longlong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  undefined *puVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong lVar5;
  ulonglong unaff_RDI;
  undefined1 *puVar6;
  longlong in_R10;
  ulonglong uVar7;
  ulonglong unaff_R12;
  ulonglong uVar8;
  undefined1 local_148 [120];
  undefined8 uStackY_d0;
  PUCHAR in_stack_ffffffffffffff58;
  ULONG in_stack_ffffffffffffff60;
  PUCHAR in_stack_ffffffffffffff68;
  ULONG in_stack_ffffffffffffff70;
  ULONG *in_stack_ffffffffffffff78;
  ULONG in_stack_ffffffffffffff80;
  longlong local_70;
  
  puVar6 = local_148;
  lVar5 = (unaff_RSI + -3 >> 0xd | unaff_RDI & unaff_RBX ^ in_R10 * unaff_R12) - unaff_R12;
  puVar3 = &DAT_1800ccb1a;
  uStackY_d0 = 0x180026bc5;
  NVar1 = BCryptDecrypt(&DAT_1800ccb1a,(PUCHAR)0x1,(ULONG)puVar6,(void *)0x0,
                        in_stack_ffffffffffffff58,in_stack_ffffffffffffff60,
                        in_stack_ffffffffffffff68,in_stack_ffffffffffffff70,
                        in_stack_ffffffffffffff78,in_stack_ffffffffffffff80);
  if (CONCAT44(extraout_var,NVar1) != 0) {
    lVar5 = lVar5 * 0x20000000;
    unaff_R12 = unaff_R12 | unaff_RBX & in_RAX << 0x11;
  }
  uVar4 = local_70 + ((ulonglong)puVar6 >> 0x11);
  uVar7 = uVar4 & unaff_R12 - 0x19;
  uStackY_d0 = 0x180026c59;
  uVar2 = FUN_180009c38(puVar3);
  uVar2 = uVar2 & (ulonglong)&stack0xffffffffffffff60 ^ local_70 >> 0x18;
  uVar7 = (uVar7 * (lVar5 + uVar4) >> 0x19 ^ 0x24d4aa827453da1d) * 0x20000 + 0xdb2b557d8bac25db;
  uVar4 = 0x24d4aa827453da06;
  uVar8 = (longlong)(unaff_R12 + 0x24d4aa827453da04 >> 1 & uVar2) >> 4;
  puVar3 = &DAT_1800c1506;
  _DAT_24d4aa827453d9cd = 0x180026d39;
  NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x24d4aa827453da05,&DAT_1800c1506,0x7453da05,0x800c4d6b
                         );
  uVar2 = (uVar2 & uVar2 << 0x13) << 0xf;
  if ((longlong)puVar3 < 0) {
    uVar4 = (uVar7 & 0x24d4aa827453da06) + uVar7;
    uVar2 = uVar2 & uVar4;
    uVar4 = uVar4 + uVar7;
  }
  return CONCAT44(extraout_var_00,NVar1) - uVar7 & uVar4 & uVar8 & (longlong)puVar3 * uVar2 * uVar8;
}


```

---

## Function: FUN_180027010 (0x180027010)

```c

/* WARNING: Removing unreachable block (ram,0x0001800270e9) */

undefined8 FUN_180027010(void)

{
  FUN_18000dc58();
  return 0xf4fa01bb;
}


```

---

## Function: FUN_180027130 (0x180027130)

```c

/* WARNING: Removing unreachable block (ram,0x000180027176) */

undefined8 FUN_180027130(void)

{
  return 0xa55da979;
}


```

---

## Function: FUN_180027330 (0x180027330)

```c

void FUN_180027330(void)

{
  undefined1 local_30 [32];
  
  malloc((size_t)local_30);
  return;
}


```

---

## Function: FUN_180027420 (0x180027420)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180027420(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  LPCSTR lpPathName;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  CHAR local_50 [32];
  
  lpPathName = local_50;
  uVar2 = 0x8a10cdeb7663c32c;
  BVar1 = RemoveDirectoryA(lpPathName);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar2 = uVar2 & unaff_RDI;
    lpPathName = (LPCSTR)(((ulonglong)lpPathName ^ in_R11) - 0x13);
  }
  FUN_1800501e8(lpPathName,uVar2);
  FUN_18001d1f0();
  FUN_18000b9e0();
  FUN_180009ea0();
  return;
}


```

---

## Function: FUN_1800276c0 (0x1800276c0)

```c

undefined8 FUN_1800276c0(void)

{
  FUN_180019fb0();
  return 0x7acfee61560c9138;
}


```

---

## Function: FUN_1800277d8 (0x1800277d8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180027a03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800277d8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RDI;
  uint uVar5;
  REGSAM samDesired;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R13;
  undefined1 local_80 [16];
  undefined1 local_70 [80];
  
  uVar4 = (unaff_RBX + -0xf) - (ulonglong)(((unaff_RDI << 8) >> 0xb & 1U) != 0);
  if (0 < (longlong)local_70) {
    uVar4 = uVar4 >> 0x1d;
  }
  uVar2 = 0x2ade637ad146ca78;
  uVar3 = unaff_R12 + 0x98f51070a0000007;
  lVar1 = FUN_18000dfc0();
  if (lVar1 == 0) {
    uVar2 = uVar2 ^ uVar3 | uVar4;
    uVar3 = (uVar3 ^ in_R10) & 0x98f51070a0000000 ^ unaff_R13;
    in_R10 = in_R10 >> 0xc;
  }
  uVar5 = (uint)in_R10 & (int)((longlong)unaff_R13 >> 0xc) + 0x15U;
  samDesired = 0x800c865c;
  FUN_180012138(local_80,(uVar3 - (uVar2 >> 0xf)) + 0x22,uVar5,-0x7ff379a4);
  _DAT_380ecf36 = 0x180027a38;
  RegOpenKeyExW((HKEY)0x3cc2a172c4894006,(LPCWSTR)0x3cc2a172c4894006,uVar5 + 0x1e,samDesired,
                _DAT_380ecf5e);
  _DAT_380ecf36 = 0x180027a52;
  FUN_180032f68();
  FUN_18002a7c8();
  return;
}


```

---

## Function: FUN_180027b38 (0x180027b38)

```c

longlong FUN_180027b38(void)

{
  ulonglong in_R10;
  undefined1 local_28 [8];
  
  return (longlong)((longlong)local_28 * 0x2000000 | 0x71dd18171a706959U | in_R10) >> 6;
}


```

---

## Function: FUN_180027bb8 (0x180027bb8)

```c

/* WARNING: Removing unreachable block (ram,0x000180027c85) */

ulonglong FUN_180027bb8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_180019148();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 0x1cU & 0x59b4a2be;
  }
  return uVar2;
}


```

---

## Function: FUN_180027cb0 (0x180027cb0)

```c

void FUN_180027cb0(void)

{
  FUN_180014350();
  return;
}


```

---

## Function: FUN_180027d38 (0x180027d38)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180027d38(longlong param_1)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong unaff_RSI;
  undefined1 *puVar4;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 local_48 [48];
  undefined1 local_18 [8];
  
  uVar2 = param_1 + 1;
  puVar4 = local_18;
  if (-1 < (longlong)((ulonglong)puVar4 & uVar2)) {
    unaff_R12 = unaff_R12 << 0xc;
    puVar4 = (undefined1 *)((ulonglong)puVar4 | unaff_R13);
    unaff_RSI = (unaff_RSI - unaff_R13) - 0x14;
    uVar2 = (uVar2 - in_RAX) + 0x14;
  }
  puVar3 = &DAT_1800d5597;
  lVar1 = NtSuspendThread(&DAT_1800d5597,uVar2,0);
  if (lVar1 == 0) {
    uVar2 = uVar2 & unaff_RSI;
    puVar4 = (undefined1 *)0x0;
  }
  uVar2 = (ulonglong)puVar3 | uVar2;
  if ((longlong)((ulonglong)puVar4 & uVar2) < 1) {
    unaff_R12 = unaff_R12 & (uVar2 ^ (ulonglong)local_48) ^ (ulonglong)(puVar4 + uVar2);
  }
  return (lVar1 + unaff_R12) * 0x1000000 ^ unaff_R12;
}


```

---

## Function: FUN_180027e88 (0x180027e88)

```c

void FUN_180027e88(void)

{
  RemoveDirectoryA((LPCSTR)0xd);
  return;
}


```

---

## Function: FUN_180027f28 (0x180027f28)

```c

ulonglong FUN_180027f28(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong in_R11;
  
  puVar2 = &DAT_1800c4981;
  uVar1 = FUN_18002fec8();
  if (uVar1 == 0) {
    uVar1 = ((ulonglong)(puVar2 + -7) | in_R11 + 0x17U) & in_R11 + 0x17U;
  }
  return uVar1;
}


```

---

## Function: FUN_180027fd0 (0x180027fd0)

```c

undefined8 FUN_180027fd0(void)

{
  FUN_180053d78(0,0x1800c6b51);
  return 0xa0f043069a583da0;
}


```

---

## Function: FUN_180028068 (0x180028068)

```c

ulonglong FUN_180028068(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong in_R11;
  ulonglong uVar5;
  ulonglong local_28;
  
  puVar3 = &stack0xffffffffffffffe0;
  uVar5 = (in_R11 - (ulonglong)((ulonglong *)0xffffffffffffffe5 < &local_28)) + 0x16;
  puVar4 = &stack0xffffffffffffffe8;
  uVar1 = FUN_18003c2b8();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & uVar5;
    uVar5 = uVar5 + uVar2 ^ (ulonglong)puVar3;
    puVar4 = (undefined1 *)((ulonglong)puVar4 ^ local_28);
  }
  if ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) {
    uVar2 = uVar2 ^ (ulonglong)(puVar4 + (0x18 - uVar5));
  }
  return uVar2;
}


```

---

## Function: FUN_1800285e8 (0x1800285e8)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800285e8(void)

{
  FUN_18000f6d0();
  return;
}


```

---

## Function: FUN_1800287a8 (0x1800287a8)

```c

ulonglong FUN_1800287a8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_180047c00();
  return lVar1 - 0x11U & uVar2;
}


```

---

## Function: FUN_180028820 (0x180028820)

```c

void FUN_180028820(void)

{
  FUN_180051e08();
  return;
}


```

---

## Function: FUN_180028890 (0x180028890)

```c

undefined1 * FUN_180028890(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  undefined1 local_30 [24];
  
  puVar2 = local_30;
  lVar3 = -0x7a5d1dc5e8d5c027;
  lVar1 = FUN_18000a188();
  puVar2 = puVar2 + lVar1;
  if (-1 < unaff_RBX) {
    puVar2 = puVar2 + lVar1 + lVar3;
  }
  return puVar2;
}


```

---

## Function: FUN_180028948 (0x180028948)

```c

ulonglong FUN_180028948(void)

{
  ulonglong in_RAX;
  
  return in_RAX >> 10;
}


```

---

## Function: FUN_1800289b8 (0x1800289b8)

```c

undefined8 FUN_1800289b8(void)

{
  return 0xf3c36f9c8463c;
}


```

---

## Function: FUN_180028aa0 (0x180028aa0)

```c

undefined1 * FUN_180028aa0(void)

{
  undefined1 local_30 [16];
  
  RemoveDirectoryA((LPCSTR)0x5a43b43c08a76470);
  FUN_180049ef8();
  return local_30;
}


```

---

## Function: FUN_180028b98 (0x180028b98)

```c

undefined8 FUN_180028b98(void)

{
  return 0;
}


```

---

## Function: FUN_180028cb0 (0x180028cb0)

```c

longlong FUN_180028cb0(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  longlong unaff_R13;
  undefined1 local_48 [40];
  
  uVar3 = 0x93a5b0800585e6df;
  uVar1 = in_RAX * 8 + unaff_R13;
  if (-1 < (longlong)local_48) {
    in_R11 = (ulonglong)(local_48 + (in_R11 - (unaff_RBX | 0x93a5b0800585e6df))) ^ uVar1;
    uVar3 = unaff_RBX | 0x93a5b0800585e6df | (ulonglong)local_48 & in_R11;
  }
  RemoveDirectoryA((LPCSTR)((uVar3 - (uVar1 + 0x17 + unaff_RBX) & in_R11 << 8) + 0x1c));
  lVar2 = FUN_18002ab88();
  return lVar2 << 10;
}


```

---

## Function: FUN_180028df8 (0x180028df8)

```c

void FUN_180028df8(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  DWORD ulOptions;
  REGSAM samDesired;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 auStackY_68 [32];
  PHKEY in_stack_ffffffffffffffb8;
  undefined1 local_30 [24];
  
  ulOptions = param_3 + 0x11;
  puVar2 = (undefined1 *)0x0;
  if (-1 < (longlong)(unaff_R12 & (ulonglong)auStackY_68)) {
    puVar2 = local_30;
  }
  uVar3 = 0;
  if ((longlong)(in_R11 & unaff_RBX) < 0) {
    unaff_RBX = unaff_RBX + unaff_R13 ^ unaff_R13;
  }
  FUN_180052408();
  samDesired = (int)(puVar2 + unaff_R13) + 0xb;
  lVar1 = FUN_180008710();
  RegOpenKeyExW((HKEY)(((unaff_RBX ^ uVar3) * (longlong)(puVar2 + unaff_R13) + uVar3) - lVar1),
                (LPCWSTR)&DAT_1800d11e6,ulOptions,samDesired,in_stack_ffffffffffffffb8);
  return;
}


```

---

## Function: FUN_180028f88 (0x180028f88)

```c

ulonglong FUN_180028f88(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong unaff_RSI;
  
  puVar3 = &DAT_1800d27ff;
  FUN_180052350();
  uVar1 = FUN_18003c368();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uVar1 | (ulonglong)puVar3) & unaff_RSI - 0xfU;
  }
  return uVar2;
}


```

---

## Function: FUN_1800290c8 (0x1800290c8)

```c

void FUN_1800290c8(void)

{
  FUN_180031830();
  return;
}


```

---

## Function: FUN_180029158 (0x180029158)

```c

undefined8 FUN_180029158(void)

{
  FUN_180016490();
  return 0;
}


```

---

## Function: FUN_180029230 (0x180029230)

```c

/* WARNING: Removing unreachable block (ram,0x00018002926a) */

longlong FUN_180029230(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = NtProtectVirtualMemory(0x198ce26f1e603805,&DAT_1800d29a7,param_3 >> 0x15);
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  return lVar1;
}


```

---

## Function: FUN_180029310 (0x180029310)

```c

/* WARNING: Removing unreachable block (ram,0x0001800293b8) */
/* WARNING: Removing unreachable block (ram,0x000180029377) */
/* WARNING: Removing unreachable block (ram,0x000180029394) */
/* WARNING: Removing unreachable block (ram,0x000180029483) */

undefined1 * FUN_180029310(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RSI;
  longlong in_R10;
  undefined1 *puVar2;
  undefined1 local_50 [64];
  
  puVar2 = local_50 + (unaff_RSI + in_RAX | in_R10 + 2U);
  lVar1 = FUN_18002c070();
  return puVar2 + (lVar1 >> 3) + (-0x31 - (ulonglong)(puVar2 + (lVar1 >> 3) < (undefined1 *)0x18));
}


```

---

## Function: FUN_180029580 (0x180029580)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180029580(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong unaff_R13;
  
  FUN_180012880(0,(param_3 + 1U) * 0x1800d11ee,param_3 + 1U ^ unaff_R13);
  FUN_18000de70();
  FUN_18004b700();
  lVar1 = FUN_18004d478();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}


```

---

## Function: FUN_180029798 (0x180029798)

```c

ulonglong FUN_180029798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  SOCKET SVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [24];
  
  uVar5 = (unaff_R13 + -0x14) * 0x4000;
  puVar3 = &local_60;
  lVar1 = Thread32Next(puVar3,local_58,param_3,local_38);
  if (lVar1 != 0) {
    in_R10 = (in_R10 ^ in_R11 ^ (ulonglong)puVar3) & uVar5;
    unaff_R12 = (unaff_R12 - in_R11) + 0x1e;
    in_R11 = in_R11 | uVar5;
  }
  uVar4 = (ulonglong)&local_60 >> 0xb;
  SVar2 = accept(((((ulonglong)puVar3 >> 0xb | in_R11) & local_60) -
                 (((in_R10 * (longlong)&local_60 | (ulonglong)&local_60 | uVar5) & unaff_R12) +
                  uVar4 | uVar5 + uVar4 * -0x400)) + 0x1f,(sockaddr *)0x72affacccff0e5d2,
                 (int *)(uVar4 * 0x400 + 7 ^ (ulonglong)local_38));
  return SVar2 >> 0x10;
}


```

---

## Function: FUN_180029998 (0x180029998)

```c

void FUN_180029998(void)

{
  RtlCompareMemory(0x603e87cac0abf05);
  return;
}


```

---

## Function: FUN_180029a20 (0x180029a20)

```c

void FUN_180029a20(void)

{
  FUN_180007ea0();
  SetEnvironmentVariableW((LPCWSTR)0x0,(LPCWSTR)0x0);
  FUN_180043538();
  return;
}


```

---

## Function: FUN_180029ae8 (0x180029ae8)

```c

undefined8 FUN_180029ae8(void)

{
  FUN_18001da50();
  return 0xb91f2165f7b67f98;
}


```

---

## Function: FUN_180029bf8 (0x180029bf8)

```c

/* WARNING: Removing unreachable block (ram,0x000180029d80) */

longlong FUN_180029bf8(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *in_R11;
  ulonglong unaff_R12;
  ulonglong uVar5;
  undefined1 auStack_58 [48];
  undefined1 local_28 [5];
  undefined1 auStack_23 [11];
  
  FUN_18001b5a8();
  if ((unaff_R12 & (ulonglong)auStack_58) == 0) {
    in_R11 = local_28;
  }
  if (unaff_RBX < 0) {
    in_R11 = in_R11 + -unaff_RDI;
  }
  FUN_18000e240();
  lVar2 = 0x37ff3a37cf1790a2;
  puVar3 = local_28;
  puVar4 = auStack_23 + 3;
  uVar1 = FUN_180055d80();
  if (uVar1 == 0) {
    in_R11 = local_28;
    lVar2 = (lVar2 - (((ulonglong)(puVar4 + 0xd) >> 0x15 & (ulonglong)puVar3) >> 6)) * 4;
  }
  uVar1 = uVar1 | (ulonglong)in_R11;
  uVar5 = (longlong)(auStack_23 + lVar2) * 0x4000;
  if ((uVar5 & (ulonglong)auStack_58) == 0) {
    uVar5 = uVar5 ^ uVar1;
    uVar1 = uVar1 | unaff_RBX + 0x16U;
  }
  return (uVar1 + uVar5) * 4;
}


```

---

## Function: FUN_180029e30 (0x180029e30)

```c

/* WARNING: Removing unreachable block (ram,0x000180029e95) */

undefined8 FUN_180029e30(void)

{
  return 0xf9d533a5;
}


```

---

## Function: FUN_180029ef8 (0x180029ef8)

```c

/* WARNING: Removing unreachable block (ram,0x000180029f1b) */
/* WARNING: Removing unreachable block (ram,0x000180029f76) */

void FUN_180029ef8(void)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong in_R9;
  ulonglong uVar1;
  longlong in_R10;
  size_t _Size;
  ulonglong in_R11;
  ulonglong unaff_R12;
  undefined1 auStack_48 [48];
  longlong local_18;
  
  uVar1 = in_R9 + 0x18;
  if (-1 < (longlong)(unaff_R12 & (ulonglong)auStack_48)) {
    unaff_R12 = (unaff_R12 + unaff_RDI + in_R10) - 0x1c;
    uVar1 = in_R9 + 0xfU | in_R11;
    in_RAX = in_RAX | unaff_RBX - 6U;
  }
  _Size = in_R10 + 0x19U & unaff_R12 & in_RAX;
  if ((POPCOUNT(uVar1 & -local_18 & 0xff) & 1U) != 0) {
    _Size = _Size - 0xe;
  }
  _aligned_malloc(_Size,0x110d47fa6b1961e8);
  return;
}


```

---

## Function: FUN_18002a048 (0x18002a048)

```c

void FUN_18002a048(void)

{
  PHKEY in_stack_ffffffffffffffe8;
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0xa54e12fba2989618,(DWORD)&stack0xffffffffffffffe8,
                (REGSAM)&stack0xffffffffffffffe8,in_stack_ffffffffffffffe8);
  return;
}


```

---

## Function: FUN_18002a150 (0x18002a150)

```c

undefined8 FUN_18002a150(void)

{
  FUN_180007048();
  return 0;
}


```

---

## Function: FUN_18002a220 (0x18002a220)

```c

/* WARNING: Removing unreachable block (ram,0x00018002a24c) */
/* WARNING: Removing unreachable block (ram,0x00018002a273) */

ulonglong FUN_18002a220(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  
  uVar2 = 0;
  uVar4 = (param_3 + 0xdU >> 0x1f) + 7;
  lVar1 = FUN_180016590();
  if (lVar1 != 0) {
    uVar4 = uVar4 ^ unaff_R12 + 0xeU;
  }
  uVar4 = uVar4 ^ unaff_R13 * in_R11 + 0xe +
                  (ulonglong)(lVar1 != 0 && ((param_3 + 0xdU & uVar2) >> 3 & 1) != 0);
  lVar3 = 0;
  lVar1 = FUN_18002cf28();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 + uVar4 ^ lVar3 + 0x15U;
  }
  return uVar2;
}


```

---

## Function: FUN_18002a3a0 (0x18002a3a0)

```c

void FUN_18002a3a0(void)

{
  FUN_1800276c0();
  return;
}


```

---

## Function: FUN_18002a400 (0x18002a400)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18002a400(void)

{
  longlong in_RAX;
  
  return in_RAX >> 5;
}


```

---

## Function: FUN_18002a488 (0x18002a488)

```c

void FUN_18002a488(void)

{
  FUN_1800550d8();
  FUN_180010fb8();
  FUN_180055980();
  return;
}


```

---

## Function: FUN_18002a5d0 (0x18002a5d0)

```c

longlong FUN_18002a5d0(void)

{
  longlong in_R11;
  
  return -0x526d5c4512e69ba - (ulonglong)(in_R11 + 0x11U < 9);
}


```

---

## Function: FUN_18002a640 (0x18002a640)

```c

void FUN_18002a640(void)

{
  FUN_180012408();
  return;
}


```

---

## Function: FUN_18002a728 (0x18002a728)

```c

void FUN_18002a728(void)

{
  return;
}


```

---

## Function: FUN_18002a7c8 (0x18002a7c8)

```c

undefined1 * FUN_18002a7c8(void)

{
  undefined1 local_28 [8];
  
  FUN_18001ba58();
  return local_28;
}


```

---

## Function: FUN_18002a8d0 (0x18002a8d0)

```c

void FUN_18002a8d0(void)

{
  FUN_18001df48();
  return;
}


```

---

## Function: FUN_18002a980 (0x18002a980)

```c

ulonglong FUN_18002a980(longlong param_1)

{
  undefined1 local_38 [16];
  
  return (ulonglong)local_38 & param_1 + 0x23U;
}


```

---

## Function: FUN_18002aa00 (0x18002aa00)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002aa00(void)

{
  return;
}


```

---

## Function: FUN_18002aa88 (0x18002aa88)

```c

void FUN_18002aa88(void)

{
  FUN_1800171b8();
  return;
}


```

---

## Function: FUN_18002ab88 (0x18002ab88)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018002ad72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002ab88(void)

{
  _DAT_2842d8cff9d05f67 = 0x18002ac4f;
  RtlGetVersion(0,0,0);
  _DAT_2842d8cff9d05f67 = 0x18002acc6;
  FUN_18001fbb0();
  return 0x2842d8cff9d05f8f;
}


```

---

## Function: FUN_18002ad88 (0x18002ad88)

```c

void FUN_18002ad88(void)

{
  FUN_18002e958();
  return;
}


```

---

## Function: FUN_18002ae10 (0x18002ae10)

```c

longlong FUN_18002ae10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  
  lVar1 = FUN_180014958();
  lVar2 = FUN_180032c20();
  return lVar2 + (unaff_RSI + lVar1) * -2;
}


```

---

## Function: FUN_18002af78 (0x18002af78)

```c

/* WARNING: Removing unreachable block (ram,0x00018002affc) */

undefined8 FUN_18002af78(void)

{
  FUN_180010be0();
  return 0xa12aab02;
}


```

---

## Function: FUN_18002b0a0 (0x18002b0a0)

```c

void FUN_18002b0a0(void)

{
  CreateToolhelp32Snapshot(&stack0xffffffffffffffe8,0);
  return;
}


```

---

## Function: FUN_18002b120 (0x18002b120)

```c

void FUN_18002b120(void)

{
  return;
}


```

---

## Function: FUN_18002b1b0 (0x18002b1b0)

```c

longlong FUN_18002b1b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  BOOL BVar1;
  longlong in_RAX;
  undefined4 extraout_var;
  undefined1 *s;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong lVar3;
  undefined1 *puVar4;
  longlong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  ulonglong uVar5;
  undefined1 local_128 [120];
  undefined8 uStack_b0;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  ulonglong local_50;
  
  puVar4 = local_58;
  if ((POPCOUNT(in_R11 & unaff_RBX & 0xff) & 1U) == 0) {
    puVar4 = (undefined1 *)((longlong)puVar4 * 0x80000);
    unaff_R13 = unaff_R13 ^ in_R10 + param_3 + 0x15U ^ unaff_RSI;
  }
  uVar2 = 0x29ac1b1;
  if ((local_50 & unaff_RBX) == 0) {
    uVar2 = 0xa6b0;
  }
  uVar5 = unaff_R13 - in_RAX | (ulonglong)puVar4;
  lVar3 = ((longlong)(param_3 + 0x15U ^ uVar2) >> 0x11) + 0x25;
  uStack_b0 = 0x18002b27f;
  RegFlushKey((HKEY)0xd657f8f37f3dc9a8);
  lVar3 = lVar3 - (longlong)puVar4;
  s = local_128;
  uStack_b0 = 0x18002b2b4;
  closesocket((SOCKET)s);
  uStack_b0 = 0x18002b2d2;
  FUN_180022498(s + 0x1d,local_78,lVar3);
  uStack_b0 = 0x18002b2eb;
  BVar1 = RemoveDirectoryA((LPCSTR)&local_80);
  return ((CONCAT44(extraout_var,BVar1) & local_80) >> 0x1e) +
         ((longlong)local_68 * uVar5 ^ (ulonglong)puVar4) + 0x1a +
         (ulonglong)
         (SEXT816((longlong)(uVar5 * (longlong)s)) !=
         SEXT816((longlong)uVar5) * SEXT816((longlong)s));
}


```

---

## Function: FUN_18002b3a8 (0x18002b3a8)

```c

/* WARNING: Removing unreachable block (ram,0x00018002b438) */
/* WARNING: Removing unreachable block (ram,0x00018002b5cf) */

void FUN_18002b3a8(void)

{
  FUN_180008438(0,0x1800bf4c5);
  FUN_180039240();
  return;
}


```

---

## Function: FUN_18002b600 (0x18002b600)

```c

/* WARNING: Removing unreachable block (ram,0x00018002b79a) */
/* WARNING: Removing unreachable block (ram,0x00018002b659) */
/* WARNING: Removing unreachable block (ram,0x00018002b86a) */
/* WARNING: Removing unreachable block (ram,0x00018002b8f1) */

ulonglong FUN_18002b600(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong unaff_RDI;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong in_R9;
  LPSTR *lpFilePart;
  ulonglong uVar9;
  ulonglong in_R10;
  longlong lVar10;
  ulonglong unaff_R12;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong unaff_R13;
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  
  lpFilePart = (LPSTR *)(in_R9 | unaff_R13);
  lVar5 = 0;
  GetFullPathNameA((LPCSTR)0x0,0x2786e103,(LPSTR)0x0,lpFilePart);
  uVar3 = 0xca35a5ea18a8c832;
  puVar6 = (undefined1 *)(lVar5 + 3);
  lVar2 = -0x3c6298d1881bcae;
  lVar5 = FUN_180045ee8();
  uVar1 = 0;
  if (lVar5 != 0) {
    uVar1 = (lVar5 + lVar2) - unaff_R13 | (ulonglong)lpFilePart;
  }
  lVar5 = (unaff_R13 ^ in_R10) * in_R10;
  puVar4 = local_30;
  uVar9 = ((ulonglong)lpFilePart >> 0x1b) * in_R10;
  if ((longlong)(uVar9 & uVar3) < 0) {
    unaff_R12 = unaff_R12 + (uVar9 ^ unaff_R12);
    puVar4 = puVar4 + (unaff_RDI & in_R10);
    puVar6 = local_28 + uVar3 + lVar2;
  }
  uVar11 = unaff_R12 & unaff_RDI & in_R10;
  uVar9 = (longlong)puVar4 >> 0x1b;
  in_R10 = in_R10 >> 2;
  if ((POPCOUNT(uVar9 & 0xff) & 1U) == 0) {
    uVar9 = uVar9 ^ (ulonglong)puVar6;
    uVar11 = uVar11 << 8;
    uVar1 = uVar1 & uVar3;
  }
  if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) {
    lVar5 = lVar5 + in_R10;
    in_R10 = in_R10 & uVar9 ^ uVar1 | (ulonglong)puVar6;
  }
  if (uVar3 == 0) {
    in_R10 = in_R10 & in_R10 + lVar5;
    uVar9 = uVar9 + 0xc;
  }
  lVar2 = 0;
  uVar3 = 0;
  lVar5 = FUN_180014298();
  lVar10 = 0;
  lVar7 = lVar2 * (longlong)local_30 +
          lVar5 + 0xf +
          (ulonglong)
          (SEXT816((longlong)(uVar9 * uVar11)) !=
          SEXT816((longlong)uVar9) * SEXT816((longlong)uVar11));
  lVar12 = (longlong)uVar11 >> 0x11;
  uVar1 = ((longlong)in_R10 >> 0x1b) + 3;
  lVar5 = uVar1 * -0x5dbea16c;
  lVar2 = FUN_180036688();
  if (lVar2 == 0) {
    uVar3 = uVar3 + 7 & 0xbae11d27 & lVar7 + 8U;
    uVar1 = ((longlong)in_R10 >> 0x1b) + 7;
  }
  uVar9 = lVar10 + 0x1b;
  uVar3 = (uVar3 & (ulonglong)(local_30 + lVar5)) - 0xf;
  lVar5 = FUN_18003e488();
  if (lVar5 == 0) {
    uVar3 = uVar3 + 0xbae11d27;
    lVar12 = lVar12 + 0x1e;
  }
  lVar2 = -uVar9;
  uVar8 = 0;
  uVar11 = FUN_180015de0();
  if (uVar11 == 0) {
    uVar11 = -((ulonglong)(local_30 + lVar2) & (lVar12 + lVar5) - 0xcU) ^ uVar3;
    uVar9 = uVar1;
  }
  return uVar11 - (longlong)(local_30 + (uVar9 & uVar8));
}


```

---

## Function: FUN_18002b9a0 (0x18002b9a0)

```c

/* WARNING: Removing unreachable block (ram,0x00018002baef) */

undefined8 FUN_18002b9a0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined1 local_98 [16];
  ulonglong local_88;
  
  puVar3 = &DAT_1800bf3a5;
  puVar2 = &DAT_1800cce11;
  lVar1 = FUN_180022800();
  if (lVar1 == 0) {
    puVar3 = puVar3 + -(longlong)puVar2;
  }
  uVar4 = (ulonglong)((longlong)puVar3 - (longlong)local_98) >> 0x1c;
  RemoveDirectoryA((LPCSTR)(((local_88 & uVar4) - (ulonglong)(uVar4 < 0xfffffffffffffff6)) - 0x2c &
                           uVar4 + 10));
  return 0x90eb85ec;
}


```

---

## Function: FUN_18002bc78 (0x18002bc78)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018002bcaa) */
/* WARNING: Removing unreachable block (ram,0x00018002bec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002bc78(void)

{
  _DAT_7e0005de = 0x18002bd97;
  FUN_18002dc98();
  _DAT_7e0005de = 0x18002bdad;
  RemoveDirectoryA(&DAT_1800d121e);
  _DAT_7e0005de = 0x18002be2b;
  CreateToolhelp32Snapshot(0x42fd26d656ff669a);
  _DAT_7e0005de = 0x18002be34;
  FUN_18003b008();
  _DAT_7e0005de = 0x18002be47;
  FUN_18002b9a0();
  return;
}


```

---

## Function: FUN_18002bfa0 (0x18002bfa0)

```c

ulonglong FUN_18002bfa0(void)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_R13;
  
  if (unaff_RBX >> 2 < 1) {
    in_RAX = in_RAX + 0xe;
  }
  return in_RAX ^ unaff_R13;
}


```

---

## Function: FUN_18002c008 (0x18002c008)

```c

void FUN_18002c008(void)

{
  return;
}


```

---

## Function: FUN_18002c070 (0x18002c070)

```c

void FUN_18002c070(void)

{
  SetWindowTextA((HWND)0xe008c3fd32e09139,(LPCSTR)0x0);
  return;
}


```

---

## Function: FUN_18002c0e0 (0x18002c0e0)

```c

/* WARNING: Removing unreachable block (ram,0x00018002c10d) */

void FUN_18002c0e0(void)

{
  RemoveDirectoryA((LPCSTR)0xfdd38146d9312206);
  return;
}


```

---

## Function: FUN_18002c170 (0x18002c170)

```c

longlong FUN_18002c170(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  PHKEY in_stack_ffffffffffffffd8;
  undefined1 auStack_1f [15];
  
  RegOpenKeyExW((HKEY)&DAT_1800c6495,(LPCWSTR)&DAT_1800c1d63,0,0x800c42b7,in_stack_ffffffffffffffd8)
  ;
  puVar2 = auStack_1f;
  lVar1 = FUN_180056178();
  if (lVar1 != 0) {
    lVar1 = lVar1 - (longlong)(puVar2 + -0x19);
  }
  return lVar1;
}


```

---

## Function: FUN_18002c480 (0x18002c480)

```c

void FUN_18002c480(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  WCHAR local_20 [12];
  
  RegOpenKeyW((HKEY)0x50ead3d62a555e57,local_20,(PHKEY)(param_3 + 1));
  return;
}


```

---

## Function: FUN_18002c518 (0x18002c518)

```c

undefined8 FUN_18002c518(void)

{
  ulonglong local_40 [4];
  
  _get_errno((int *)local_40);
  RtlFreeAnsiString(local_40,0,local_40[0]);
  FUN_18004d710();
  return 0xd2a6a861;
}


```

---

## Function: FUN_18002c6d8 (0x18002c6d8)

```c

void FUN_18002c6d8(void)

{
  FUN_180051468();
  return;
}


```

---

## Function: FUN_18002c7c8 (0x18002c7c8)

```c

ulonglong FUN_18002c7c8(void)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  ulonglong uVar1;
  longlong in_R9;
  ulonglong uVar2;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  undefined1 local_8 [8];
  
  uVar1 = (unaff_RSI >> 0x15) - 0x1c;
  uVar2 = (in_R9 + 0x14U &
          in_R10 + 0x12 +
          (ulonglong)((in_R10 & (ulonglong)local_8) != 0 && CARRY8(in_R11,unaff_R13))) + 0x1b +
          (ulonglong)((ulonglong)(unaff_RSI >> 0x15) < 0x1c);
  if ((POPCOUNT(uVar2 & 0x8d) & 1U) == 0) {
    uVar1 = uVar1 ^ uVar2;
  }
  return in_RAX & uVar1;
}


```

---

## Function: FUN_18002c8c8 (0x18002c8c8)

```c

longlong FUN_18002c8c8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180017b90();
  return lVar1 + -0xc;
}


```

---

## Function: FUN_18002c988 (0x18002c988)

```c

longlong FUN_18002c988(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  longlong lVar2;
  uint uVar3;
  ulonglong unaff_RSI;
  uint ulOptions;
  ulonglong in_R11;
  HANDLE hHandle;
  REGSAM unaff_R12D;
  PHKEY in_stack_ffffffffffffff68;
  WCHAR local_90 [4];
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  
  uVar3 = (int)(unaff_RSI >> 0x12) - (int)local_80;
  ulOptions = (uint)local_88;
  LVar1 = RegOpenKeyExW((HKEY)0x5f0c9d5ec4a3ccc3,local_90,ulOptions,unaff_R12D,
                        in_stack_ffffffffffffff68);
  if (CONCAT44(extraout_var,LVar1) == 0) {
    uVar3 = (uVar3 | ulOptions) + unaff_R12D * -0x80000000;
  }
  hHandle = (HANDLE)(in_R11 >> 0xd);
  lVar2 = FUN_18004e0e8();
  WaitForSingleObjectEx
            (hHandle,(DWORD)local_90,((uint)lVar2 | (uint)local_80) * uVar3 * (int)local_80 * uVar3)
  ;
  return ((longlong)local_60 * (longlong)hHandle - (longlong)local_88 ^ (ulonglong)local_88) << 0x1b
  ;
}


```

---

## Function: FUN_18002cb40 (0x18002cb40)

```c

void FUN_18002cb40(void)

{
  HCRYPTHASH *unaff_R15;
  
  CryptCreateHash(0x7fcec5f3785f775f,(ALG_ID)&stack0xffffffffffffffe1,0,
                  (DWORD)&stack0xfffffffffffffff0,unaff_R15);
  return;
}


```

---

## Function: FUN_18002cbf0 (0x18002cbf0)

```c

/* WARNING: Removing unreachable block (ram,0x00018002cc6f) */

void FUN_18002cbf0(void)

{
  FUN_18004a548();
  FUN_180031cd0();
  return;
}


```

---

## Function: FUN_18002cdd8 (0x18002cdd8)

```c

/* WARNING: Removing unreachable block (ram,0x00018002ce62) */

undefined1 * FUN_18002cdd8(void)

{
  undefined1 local_30 [24];
  
  return local_30;
}


```

---

## Function: FUN_18002cf28 (0x18002cf28)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018002d004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002cf28(void)

{
  RemoveDirectoryA((LPCSTR)0xcd188665);
  FUN_1800208c0();
  _DAT_f1bfcb03 = 0x18002d07b;
  FUN_180006f90();
  return;
}


```

---

