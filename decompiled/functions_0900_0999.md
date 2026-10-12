null

Logs:
# Decompiled Functions: index 900-999

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180043220 (0x180043220)

```c

void FUN_180043220(void)

{
  FUN_18003c778();
  return;
}


```

---

## Function: FUN_180043298 (0x180043298)

```c

void FUN_180043298(void)

{
  return;
}


```

---

## Function: FUN_1800432f8 (0x1800432f8)

```c

void FUN_1800432f8(void)

{
  return;
}


```

---

## Function: FUN_180043358 (0x180043358)

```c

longlong FUN_180043358(void)

{
  longlong in_RAX;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  longlong unaff_R13;
  
  if (in_RAX != 0) {
    unaff_RDI = unaff_RDI - (unaff_R13 + 0xcU | unaff_R12);
  }
  return in_RAX - unaff_RDI;
}


```

---

## Function: FUN_1800433f8 (0x1800433f8)

```c

BOOL FUN_1800433f8(void)

{
  BOOL BVar1;
  longlong in_RAX;
  longlong unaff_RSI;
  
  BVar1 = GetExitCodeProcess(&DAT_1800c1aa6,(LPDWORD)(in_RAX + unaff_RSI));
  return BVar1;
}


```

---

## Function: FUN_1800434a8 (0x1800434a8)

```c

void FUN_1800434a8(void)

{
  FUN_18001f250();
  return;
}


```

---

## Function: FUN_180043538 (0x180043538)

```c

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_180043538(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong unaff_RBX;
  CHAR *pCVar3;
  ulonglong uVar4;
  CHAR *pCVar5;
  ulonglong in_R11;
  ulonglong uVar6;
  ulonglong unaff_R12;
  ulonglong uVar7;
  ulonglong uVar8;
  CHAR *pCVar9;
  bool bVar10;
  CHAR local_48 [8];
  CHAR local_40 [24];
  undefined1 local_28 [8];
  
  uVar7 = unaff_R12 | (longlong)&DAT_1800c2f83 - unaff_RBX;
  uVar2 = (ulonglong)local_28 & 0x4885b17f5d157f1a;
  uVar8 = uVar7 + in_R11;
  uVar6 = in_R11 & uVar2;
  pCVar3 = (CHAR *)(unaff_RBX - 8);
  uVar7 = ((longlong)&DAT_1800c2f83 - unaff_RBX & uVar7) * in_R11 + uVar8;
  BVar1 = RemoveDirectoryA((LPCSTR)0xd9d719710bb75bd2);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar4 = (((((ulonglong)local_28 ^ uVar2) - 8 & 0xfffffffffffff) >> 1) + uVar6) - 0x11;
    uVar7 = uVar7 & uVar6;
    uVar2 = (longlong)pCVar3 - uVar4;
    pCVar3 = (CHAR *)(uVar2 | (uVar4 & uVar2) + (uVar8 ^ uVar6));
  }
  pCVar9 = (CHAR *)0x11;
  pCVar5 = (CHAR *)(uVar7 - 0x18);
  uVar2 = FUN_18000ce78();
  bVar10 = false;
  if (uVar2 == 0) {
    uVar2 = (ulonglong)pCVar3 & 0x11;
    pCVar9 = (CHAR *)(uVar2 * 4);
    pCVar3 = pCVar3 + (longlong)pCVar9;
    uVar6 = uVar6 + uVar2 * -4;
    uVar2 = 0;
    bVar10 = pCVar5 < pCVar3;
    pCVar5 = pCVar5 + -(longlong)pCVar3;
  }
  pCVar5 = pCVar5 + (ulonglong)bVar10 + 0x12;
  uVar2 = uVar2 | (ulonglong)pCVar9;
  if ((uVar6 & (ulonglong)pCVar3) != 0) {
    uVar2 = uVar2 | uVar6;
    pCVar5 = local_48;
    pCVar9 = local_40;
  }
  pCVar3 = pCVar3 + 0xffffffffffffffe3;
  uVar7 = (ulonglong)pCVar5 ^ (ulonglong)pCVar3;
  if ((uVar2 + 0x12 & (longlong)pCVar9 * (uVar2 + 0x12)) != 0x11) {
    pCVar3 = pCVar3 + uVar7;
  }
  uVar2 = (uVar7 & (ulonglong)pCVar3) - 0x1c;
  BVar1 = RemoveDirectoryA(local_40);
  uVar7 = 0;
  if (CONCAT44(extraout_var_00,BVar1) != 0) {
    uVar6 = uVar2 | uVar6;
    uVar7 = ((CONCAT44(extraout_var_00,BVar1) + 1) - uVar2) + uVar6 & uVar6 | uVar6;
  }
  return uVar7;
}


```

---

## Function: FUN_180043700 (0x180043700)

```c

/* WARNING: Removing unreachable block (ram,0x000180043750) */

undefined1 * FUN_180043700(void)

{
  undefined1 local_30 [16];
  
  FUN_180008330();
  return local_30;
}


```

---

## Function: FUN_1800437b8 (0x1800437b8)

```c

void FUN_1800437b8(void)

{
  return;
}


```

---

## Function: FUN_180043828 (0x180043828)

```c

/* WARNING: Removing unreachable block (ram,0x000180043862) */

void FUN_180043828(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  DWORD ulOptions;
  undefined *puVar7;
  longlong in_R10;
  ulonglong uVar8;
  longlong unaff_R13;
  undefined1 auStackY_1f8 [160];
  longlong local_158 [15];
  undefined8 uStackY_e0;
  PHKEY in_stack_ffffffffffffff48;
  undefined1 *local_a8;
  ulonglong local_a0;
  undefined1 local_88 [24];
  undefined1 local_70 [64];
  
  uVar8 = in_R10 - 0x1a;
  puVar7 = &DAT_1800d27d4;
  uStackY_e0 = 0x1800438b4;
  lVar1 = FUN_180052a60();
  if (lVar1 != 0) {
    uVar8 = local_a0;
  }
  puVar3 = local_70;
  plVar6 = local_158 + (uVar8 | (ulonglong)puVar7) * -0x80000;
  uVar8 = ((longlong)&local_a0 + (longlong)plVar6 | (ulonglong)plVar6) * (longlong)local_a8;
  if ((longlong)puVar3 < 0) {
    puVar3 = (undefined1 *)(((ulonglong)puVar3 ^ unaff_R13 - 0x1cU) & uVar8);
    uVar8 = 0;
    local_a8 = local_88;
  }
  ulOptions = (int)local_a8 + 0x14 +
              (uint)((longlong)
                     (((ulonglong)plVar6 ^
                      (ulonglong)(puVar3 + (ulonglong)((longlong)(uVar8 << 0x1b) < 0) + 0xf)) << 3)
                    < 0);
  uVar5 = (ulonglong)in_stack_ffffffffffffff48 >> 4;
  uVar4 = 0x800000019;
  uStackY_e0 = 0x1800439e7;
  uVar2 = FUN_18000b330();
  if (uVar2 == 0) {
    uVar4 = uVar4 ^ ((uVar8 << 0x1c ^ uVar5) - 0x11) - (ulonglong)(unaff_R13 - 0x1cU < 0x13);
    ulOptions = ulOptions - (int)local_158;
  }
  uStackY_e0 = 0x180043a3d;
  RegOpenKeyExW((HKEY)(uVar4 + 9),(LPCWSTR)(local_158[0] + 5),ulOptions,(REGSAM)local_a0,
                in_stack_ffffffffffffff48);
  return;
}


```

---

## Function: FUN_180043a90 (0x180043a90)

```c

void FUN_180043a90(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong unaff_RBX;
  int iVar3;
  ulonglong unaff_RSI;
  undefined *puVar4;
  ulonglong in_R10;
  ulonglong unaff_R12;
  undefined1 local_148 [8];
  char local_140 [24];
  int local_128;
  undefined8 uStackY_e0;
  sockaddr *in_stack_ffffffffffffff48;
  int *in_stack_ffffffffffffff50;
  
  puVar4 = &DAT_1800c1706;
  uStackY_e0 = 0x180043ac5;
  iVar1 = recvfrom(0x85da307c4a0fa0e2,local_140,-0x7ff3e8fa,-0xc,in_stack_ffffffffffffff48,
                   in_stack_ffffffffffffff50);
  if (CONCAT44(extraout_var,iVar1) == 0) {
    unaff_RSI = unaff_RSI ^ in_R10;
    puVar4 = (undefined *)((ulonglong)puVar4 >> 0x19);
    unaff_R12 = (unaff_R12 | unaff_RBX) - unaff_RSI;
  }
  iVar1 = (int)in_R10 + -0x11;
  uStackY_e0 = 0x180043b12;
  BVar2 = FindClose((HANDLE)0x0);
  if (CONCAT44(extraout_var_00,BVar2) == 0) {
    unaff_RSI = unaff_RSI & (ulonglong)(puVar4 + unaff_R12);
  }
  iVar3 = 0;
  if (unaff_RSI != 0) {
    iVar3 = local_128;
  }
  uStackY_e0 = 0x180043bcf;
  RegOpenKeyExW((HKEY)&DAT_1800d520f,(LPCWSTR)0x439bd0,-(iVar3 * iVar1),(REGSAM)local_148,
                (PHKEY)in_stack_ffffffffffffff48);
  FUN_18003c368();
  return;
}


```

---

## Function: FUN_180043c90 (0x180043c90)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180043c90(void)

{
  ulonglong local_60;
  
  FUN_18003c6b0();
  return local_60 >> 8;
}


```

---

## Function: FUN_180043e50 (0x180043e50)

```c

/* WARNING: Removing unreachable block (ram,0x000180043e88) */

undefined1 * FUN_180043e50(void)

{
  longlong unaff_RBX;
  undefined1 local_80 [80];
  
  FUN_180039240();
  return local_80 + unaff_RBX * 0x400000;
}


```

---

## Function: FUN_180043fa0 (0x180043fa0)

```c

void FUN_180043fa0(void)

{
  return;
}


```

---

## Function: FUN_180044030 (0x180044030)

```c

/* WARNING: Removing unreachable block (ram,0x0001800440bc) */
/* WARNING: Removing unreachable block (ram,0x0001800440e5) */

void FUN_180044030(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar4;
  LPCWSTR in_R11;
  LPDWORD unaff_R14;
  PHKEY unaff_R15;
  DWORD in_stack_ffffffffffffffb8;
  REGSAM in_stack_ffffffffffffffc0;
  LPSECURITY_ATTRIBUTES in_stack_ffffffffffffffc8;
  
  uVar3 = 0xa09ab8d82e620d98;
  uVar4 = unaff_RSI + 0x15;
  LVar1 = RegCreateKeyExW((HKEY)0xa09ab8d82e620d98,in_R11,(DWORD)uVar4,(LPWSTR)0x0,
                          in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,
                          in_stack_ffffffffffffffc8,unaff_R15,unaff_R14);
  uVar2 = 0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar2 = CONCAT44(extraout_var,LVar1) - uVar4 & unaff_RBX & (ulonglong)&stack0xffffffffffffffc8;
    uVar4 = uVar4 + 0x1b;
  }
  FUN_180047858(uVar3,&stack0xffffffffffffffc8,uVar4 ^ uVar2);
  return;
}


```

---

## Function: FUN_180044118 (0x180044118)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180044118(void)

{
  FUN_180046b78();
  return _DAT_d368bc7709232a2d >> 0x18;
}


```

---

## Function: FUN_1800441f0 (0x1800441f0)

```c

/* WARNING: Removing unreachable block (ram,0x000180044227) */

ulonglong FUN_1800441f0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong in_R11;
  longlong unaff_R12;
  ulonglong unaff_R13;
  
  lVar1 = FUN_180035188();
  uVar2 = lVar1 - in_R11;
  if ((unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) != 0) {
    uVar2 = uVar2 - (unaff_R12 + 3);
  }
  return uVar2;
}


```

---

## Function: FUN_180044280 (0x180044280)

```c

undefined1 * FUN_180044280(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R13;
  undefined1 auStack_27 [23];
  
  uVar2 = (ulonglong)(&DAT_1800c5886 + unaff_RBX) ^ unaff_R13;
  uVar1 = FUN_180042b48();
  if (uVar1 != 0) {
    uVar2 = uVar2 & unaff_R12 * param_3 - in_R10;
  }
  return (undefined1 *)((ulonglong)auStack_27 | uVar2);
}


```

---

## Function: FUN_180044338 (0x180044338)

```c

/* WARNING: Removing unreachable block (ram,0x0001800443cf) */

void FUN_180044338(void)

{
  FUN_1800265a8();
  return;
}


```

---

## Function: FUN_180044428 (0x180044428)

```c

/* WARNING: Removing unreachable block (ram,0x000180044490) */

longlong FUN_180044428(void)

{
  longlong in_RAX;
  ulonglong in_R10;
  ulonglong unaff_R13;
  undefined1 auStack_12 [10];
  
  return (in_RAX + 8 +
          (ulonglong)
          (&stack0xfffffffffffffff8 + in_R10 < (undefined1 *)0xa ||
          auStack_12 + in_R10 <
          (undefined1 *)(ulonglong)CARRY8((ulonglong)&stack0xfffffffffffffff8,in_R10)) ^
         (ulonglong)&stack0xfffffffffffffff8) + (unaff_R13 >> 0xe);
}


```

---

## Function: FUN_1800444c8 (0x1800444c8)

```c

ulonglong FUN_1800444c8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R14;
  
  uVar1 = CreateToolhelp32Snapshot(0,param_2 + 0x10,&stack0xffffffffffffffe8,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 ^ unaff_R14;
  }
  return uVar2;
}


```

---

## Function: FUN_180044558 (0x180044558)

```c

undefined8 FUN_180044558(void)

{
  FUN_180006298();
  return 0x770ea345;
}


```

---

## Function: FUN_1800445d8 (0x1800445d8)

```c

ulonglong FUN_1800445d8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong in_R11;
  longlong lVar3;
  
  lVar3 = in_R11 << 0x11;
  uVar1 = FUN_180003c70();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & unaff_RBX - lVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180044680 (0x180044680)

```c

/* WARNING: Removing unreachable block (ram,0x0001800446b2) */

ulonglong FUN_180044680(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong in_R11;
  longlong lVar2;
  
  lVar2 = in_R11 << 0x13;
  uVar1 = FUN_180054220();
  if ((lVar2 + 6U & unaff_RBX) != 0) {
    uVar1 = uVar1 | unaff_RBP;
  }
  return uVar1;
}


```

---

## Function: FUN_180044720 (0x180044720)

```c

void FUN_180044720(void)

{
  FUN_180039240();
  return;
}


```

---

## Function: FUN_1800447c0 (0x1800447c0)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800447c0(void)

{
  return;
}


```

---

## Function: FUN_1800448c0 (0x1800448c0)

```c

void FUN_1800448c0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong unaff_RSI;
  undefined1 *puVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  ulonglong unaff_R12;
  undefined1 local_150 [10];
  undefined1 auStack_146 [102];
  undefined8 uStack_e0;
  undefined1 local_80 [88];
  
  puVar2 = local_80;
  puVar3 = local_150;
  if ((POPCOUNT(param_3 & 0xa5) & 1U) == 0) {
    in_R10 = in_R10 & unaff_R12;
    lVar1 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = auStack_146;
    puVar2 = (undefined1 *)(lVar1 * 0x1000000);
    unaff_R12 = unaff_R12 - 0x13 & param_3;
  }
  uVar4 = in_R10 * (param_2 + 4);
  uStack_e0 = 0x180044918;
  lVar1 = FUN_18001c630();
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)((ulonglong)puVar2 ^ uVar4);
    puVar3 = (undefined1 *)(((ulonglong)puVar3 >> 0xc) - (unaff_RSI + uVar4));
  }
  uStack_e0 = 0x18004496e;
  RemoveDirectoryA(puVar2 + (longlong)(puVar3 + (10 - unaff_R12)));
  uStack_e0 = 0x180044a23;
  FUN_18003f190();
  return;
}


```

---

## Function: FUN_180044a38 (0x180044a38)

```c

ulonglong FUN_180044a38(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong in_R10;
  ulonglong uVar3;
  
  uVar3 = in_R10 + 9;
  lVar1 = FUN_180023630();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 - (unaff_RSI + 4) & uVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180044ad8 (0x180044ad8)

```c

ulonglong FUN_180044ad8(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong in_R10;
  longlong unaff_R13;
  undefined1 local_28 [32];
  
  _aligned_malloc((size_t)local_28,in_R10 * unaff_R13);
  FUN_18000c040();
  puVar2 = &DAT_1800c56fe;
  lVar1 = FUN_18003eed8();
  if (lVar1 != 0) {
    puVar2 = puVar2 + 4;
  }
  return (ulonglong)puVar2 ^ 0x65ec18e1;
}


```

---

## Function: FUN_180044bf0 (0x180044bf0)

```c

undefined8 FUN_180044bf0(void)

{
  return 0;
}


```

---

## Function: FUN_180044c80 (0x180044c80)

```c

longlong FUN_180044c80(void)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar3;
  longlong unaff_R13;
  
  uVar2 = 0xcd069283236a8540;
  uVar3 = in_R11 + unaff_R13;
  iVar1 = fflush((FILE *)0xcd069283236a8540);
  if (CONCAT44(extraout_var,iVar1) != 0) {
    in_R10 = in_R10 | uVar2 | uVar3;
  }
  return ((longlong)in_R10 >> 0x19) + 0x14 >> 0x18;
}


```

---

## Function: FUN_180044e28 (0x180044e28)

```c

longlong FUN_180044e28(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong *puVar3;
  longlong in_R10;
  longlong lVar4;
  ulonglong unaff_R13;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_78;
  ulonglong local_30 [3];
  
  uVar5 = unaff_R13 + 0xf;
  puVar3 = (ulonglong *)((unaff_RSI + -4) - (ulonglong)(0xfffffffffffffff0 < unaff_R13));
  uVar6 = uVar5 + unaff_RBX;
  if ((longlong)(uVar6 & (ulonglong)&stack0xfffffffffffffff8) < 0) {
    uVar5 = uVar5 - in_R10;
    puVar3 = local_30;
  }
  uVar5 = uVar5 >> 3 | (ulonglong)puVar3;
  if ((longlong)puVar3 < 1) {
    uVar6 = uVar6 | local_78;
    local_78 = local_78 & (ulonglong)puVar3;
  }
  uVar2 = local_30[0] >> 0x1d;
  lVar4 = (longlong)local_78 >> 5;
  lVar1 = FUN_180012690();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  return lVar1 * (uVar2 & uVar5) - (lVar4 - uVar6 * 0x20000000 * uVar6 * 0x20000000);
}


```

---

## Function: FUN_180044fa0 (0x180044fa0)

```c

undefined8 * FUN_180044fa0(void)

{
  undefined8 local_28;
  
  return &local_28;
}


```

---

## Function: FUN_180045018 (0x180045018)

```c

undefined8 FUN_180045018(void)

{
  FUN_1800537a8();
  return 0x9c77927b50535be7;
}


```

---

## Function: FUN_1800450d0 (0x1800450d0)

```c

longlong FUN_1800450d0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  puVar3 = &stack0xffffffffffffffe8;
  BVar1 = RemoveDirectoryA(s_chips_1800cd9ba);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (-1 < (longlong)puVar3) {
    uVar4 = (in_R11 ^ unaff_R13 ^ unaff_RSI) + unaff_RBX;
    uVar2 = (uVar2 & uVar4) - (unaff_RDI & unaff_R12) & (unaff_R13 + 4 | uVar4);
  }
  return uVar2 - 0x1b;
}


```

---

## Function: FUN_1800451a8 (0x1800451a8)

```c

longlong FUN_1800451a8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  
  uVar1 = FUN_180041c20();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 | unaff_RSI & in_R10;
  }
  return uVar2 << 0xc;
}


```

---

## Function: FUN_180045260 (0x180045260)

```c

void FUN_180045260(void)

{
  FUN_18000e4b0();
  return;
}


```

---

## Function: FUN_180045328 (0x180045328)

```c

ulonglong FUN_180045328(void)

{
  ulonglong uVar1;
  longlong in_R9;
  ulonglong uVar2;
  
  uVar2 = in_R9 + 0x1e;
  uVar1 = FUN_180021890();
  return uVar1 & uVar2;
}


```

---

## Function: FUN_180045390 (0x180045390)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180045390(void)

{
  ulonglong in_RAX;
  longlong in_R9;
  longlong unaff_R12;
  
  _DAT_c5f0d693 = 0x180045446;
  CreateToolhelp32Snapshot(&DAT_c5f0d6c3,0,0,(in_R9 + unaff_R12 | in_RAX) + 0x62f86b5d);
  return;
}


```

---

## Function: FUN_180045470 (0x180045470)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800454b6) */
/* WARNING: Removing unreachable block (ram,0x0001800454e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180045470(void)

{
  _DAT_3636a285 = 0x180045510;
  FUN_180052d98();
  FUN_18004c000();
  return;
}


```

---

## Function: FUN_180045580 (0x180045580)

```c

/* WARNING: Removing unreachable block (ram,0x0001800455b8) */
/* WARNING: Removing unreachable block (ram,0x0001800455f8) */

void FUN_180045580(void)

{
  FUN_18000bfc0();
  return;
}


```

---

## Function: FUN_180045650 (0x180045650)

```c

/* WARNING: Removing unreachable block (ram,0x000180045675) */

void FUN_180045650(longlong param_1,longlong param_2)

{
  FindNextFileA((HANDLE)(param_1 + 0x20),(LPWIN32_FIND_DATAA)(param_2 + 0x1a));
  FUN_18004f340();
  return;
}


```

---

## Function: FUN_180045760 (0x180045760)

```c

undefined8 FUN_180045760(void)

{
  FUN_18004a6e8();
  return 0xe268e741d229ccbc;
}


```

---

## Function: FUN_180045820 (0x180045820)

```c

void FUN_180045820(void)

{
  FUN_1800262d0();
  FUN_18001f600();
  FUN_180007c80();
  return;
}


```

---

## Function: FUN_180045a00 (0x180045a00)

```c

/* WARNING: Removing unreachable block (ram,0x000180045adc) */

undefined1 * FUN_180045a00(void)

{
  LPCSTR lpPathName;
  
  lpPathName = (LPCSTR)register0x00000020;
  RemoveDirectoryA(&stack0xffffffffffffffe8);
  FUN_180053940();
  RemoveDirectoryA(lpPathName);
  return &stack0xffffffffffffffe8;
}


```

---

## Function: FUN_180045b00 (0x180045b00)

```c

longlong FUN_180045b00(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  
  lVar3 = 0;
  uVar4 = 0;
  uVar1 = FUN_1800543f0();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 << 7 & unaff_R12;
    lVar3 = (lVar3 + -0x1a) - (((unaff_R12 | uVar4) ^ in_R11) + unaff_R13);
  }
  return uVar2 + lVar3;
}


```

---

## Function: FUN_180045b98 (0x180045b98)

```c

undefined8 FUN_180045b98(void)

{
  FUN_1800214a8();
  return 0xfffb4b24;
}


```

---

## Function: FUN_180045c40 (0x180045c40)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180045c40(void)

{
  FUN_180027b38();
  return;
}


```

---

## Function: FUN_180045d08 (0x180045d08)

```c

void FUN_180045d08(void)

{
  FUN_18000d3e0();
  return;
}


```

---

## Function: FUN_180045d90 (0x180045d90)

```c

ulonglong FUN_180045d90(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong in_R10;
  longlong in_R11;
  ulonglong unaff_R12;
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  
  uVar1 = FUN_1800367c8();
  if (uVar1 == 0) {
    unaff_R12 = (ulonglong)local_18 ^
                unaff_RBX +
                in_R10 + (unaff_RSI - (ulonglong)(SEXT816(0) != SEXT816(0) * SEXT816(in_R11))) + 6;
  }
  if ((unaff_R12 & (ulonglong)auStack_38) != 0) {
    uVar1 = uVar1 + unaff_R12;
  }
  return uVar1;
}


```

---

## Function: FUN_180045e28 (0x180045e28)

```c

void FUN_180045e28(void)

{
  FUN_180030ac8();
  return;
}


```

---

## Function: FUN_180045ee8 (0x180045ee8)

```c

longlong FUN_180045ee8(void)

{
  ulonglong in_RAX;
  
  return ((longlong)(in_RAX ^ 0x63585d7db87bafc3) >> 7) + -0x6e47d3f5a6ca70da;
}


```

---

## Function: FUN_180045f78 (0x180045f78)

```c

void FUN_180045f78(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPCWSTR lpSubKey;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong lVar2;
  PHKEY in_stack_ffffffffffffffd8;
  
  uVar1 = (ulonglong)(SEXT816(unaff_RDI * unaff_RDI) != SEXT816(unaff_RDI) * SEXT816(unaff_RDI));
  lpSubKey = (LPCWSTR)((param_2 + 0x14U + uVar1 + -0x17) -
                      (ulonglong)
                      (0xfffffffffffffff1 < param_2 + 6U || CARRY8(param_2 + 0x14U,uVar1)));
  lVar2 = param_3 + -0x15;
  if (unaff_RBX < 0) {
    lVar2 = lVar2 - unaff_RDI * unaff_RDI;
    lpSubKey = lpSubKey + 8;
  }
  RegOpenKeyExW((HKEY)(lVar2 + 0x12),lpSubKey,(DWORD)&stack0xfffffffffffffff8,0x800d1e8e,
                in_stack_ffffffffffffffd8);
  FUN_18000bf30();
  return;
}


```

---

## Function: FUN_180046028 (0x180046028)

```c

undefined8 FUN_180046028(void)

{
  return 0;
}


```

---

## Function: FUN_1800460c0 (0x1800460c0)

```c

longlong FUN_1800460c0(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  ulonglong unaff_R12;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  
  lVar2 = (unaff_R12 * 0xa78cc50356107ca + in_RAX * 0xa78cc50356107c9) * (longlong)local_18;
  if ((longlong)((ulonglong)local_18 & (ulonglong)auStack_38) < 0) {
    lVar2 = lVar2 + -0xd;
  }
  lVar2 = lVar2 + 0x19;
  lVar1 = FUN_18002f700();
  return (lVar1 - (longlong)local_18) +
         lVar2 + unaff_RSI + (ulonglong)CARRY8(unaff_R12,in_RAX) + -0x23;
}


```

---

## Function: FUN_180046168 (0x180046168)

```c

void FUN_180046168(void)

{
  FUN_180004b38();
  return;
}


```

---

## Function: FUN_180046200 (0x180046200)

```c

void FUN_180046200(void)

{
  return;
}


```

---

## Function: FUN_180046280 (0x180046280)

```c

void FUN_180046280(void)

{
  FUN_180010be0();
  return;
}


```

---

## Function: FUN_180046340 (0x180046340)

```c

undefined8 FUN_180046340(void)

{
  longlong unaff_RDI;
  longlong in_R9;
  ULONG unaff_R13D;
  PUCHAR in_stack_ffffffffffffffb8;
  ULONG in_stack_ffffffffffffffc0;
  PUCHAR in_stack_ffffffffffffffc8;
  ULONG in_stack_ffffffffffffffd0;
  ULONG *in_stack_ffffffffffffffd8;
  
  BCryptDecrypt((BCRYPT_KEY_HANDLE)(unaff_RDI + 0x18),(PUCHAR)0x1b942d58348182e,0,
                (void *)(in_R9 + 0x12),in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,
                in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8,
                unaff_R13D);
  return 0;
}


```

---

## Function: FUN_1800463b8 (0x1800463b8)

```c

/* WARNING: Removing unreachable block (ram,0x000180046457) */

undefined1 * FUN_1800463b8(longlong param_1)

{
  errno_t eVar1;
  longlong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  longlong lVar8;
  longlong in_R10;
  ulonglong uVar9;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  uVar5 = param_1 + 0x1c;
  lVar2 = in_RAX + 0xd + (ulonglong)CARRY8((uVar5 + in_R11 + 0x1e) * (longlong)local_50,uVar5);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = lVar2 * 0x80 + 0xbU | uVar5;
    unaff_RDI = unaff_RDI | uVar3;
  }
  lVar6 = unaff_R13 + uVar3 + unaff_R12;
  uVar9 = in_R10 * -0x2c038c029ccafdc8;
  lVar2 = 0;
  lVar8 = 0;
  eVar1 = _set_errno(0);
  uVar5 = CONCAT44(extraout_var,eVar1);
  uVar7 = (uVar3 + unaff_R12 | 0xd3fc73fd63350238) * 0x40000000;
  uVar3 = lVar2 * lVar6;
  if (-1 < lVar6) {
    lVar8 = lVar8 - uVar3;
    uVar9 = uVar9 | uVar7;
    uVar5 = uVar5 & uVar3;
  }
  if ((longlong)(lVar8 + 0x1cU & uVar5) < 1) {
    unaff_RDI = unaff_RDI ^ uVar7;
  }
  puVar4 = local_60;
  if (uVar7 + 2 +
      (ulonglong)
      (SEXT816((longlong)(unaff_RDI * uVar9)) !=
      SEXT816((longlong)unaff_RDI) * SEXT816((longlong)uVar9)) == 0) {
    puVar4 = (undefined1 *)((ulonglong)puVar4 ^ local_28);
  }
  return puVar4;
}


```

---

## Function: FUN_180046540 (0x180046540)

```c

/* WARNING: Removing unreachable block (ram,0x000180046579) */

longlong FUN_180046540(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *hProcess;
  LPDWORD lpExitCode;
  ulonglong uVar3;
  ulonglong in_R9;
  ulonglong uVar4;
  longlong in_R11;
  ulonglong unaff_R13;
  ulonglong uVar5;
  undefined1 local_158 [104];
  undefined8 uStack_f0;
  undefined1 local_b8 [160];
  
  uVar3 = ((longlong)local_158 >> 0x19) *
          ((in_R11 - (ulonglong)(0xffffffffffffffee < in_R9)) + (in_R9 - 0xd)) | unaff_R13;
  uVar2 = 0;
  uVar4 = 0;
  uStack_f0 = 0x1800465bd;
  lVar1 = FUN_1800349d0();
  if (lVar1 == 0) {
    uVar3 = uVar3 << 0xd & uVar2;
  }
  uStack_f0 = 0x1800465e9;
  uVar2 = FUN_18000fc50();
  if (uVar2 == 0) {
    uVar4 = uVar4 & uVar3;
    uVar2 = uVar3;
  }
  uVar3 = ((longlong)unaff_R13 >> 0x19) * uVar2 & 0xdbeb7eb1;
  uVar5 = (longlong)(uVar4 + 0xf) >> 0x1d;
  uVar2 = -uVar3 & 0xdbeb7eb1 & uVar5;
  lpExitCode = (LPDWORD)((longlong)(uVar4 + 0xf + uVar3) >> 9);
  hProcess = local_b8;
  uStack_f0 = 0x18004666c;
  GetExitCodeProcess(hProcess,lpExitCode);
  uStack_f0 = 0x180046671;
  lVar1 = FUN_180016370();
  if (lVar1 == 0) {
    lVar1 = (uVar2 | (ulonglong)lpExitCode) - (longlong)lpExitCode;
  }
  if (-1 < (longlong)
           ((longlong)(hProcess + (uVar5 ^ 0xdbeb7eb1)) * 0x100000 &
           (ulonglong)&stack0xfffffffffffffff8)) {
    lVar1 = lVar1 + 0x13;
  }
  return lVar1;
}


```

---

## Function: FUN_1800466f8 (0x1800466f8)

```c

ulonglong FUN_1800466f8(void)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  undefined1 local_38 [24];
  
  lVar1 = FUN_18003dee8(0x1800d1aae);
  return (lVar1 >> 0x11) + 0x13U ^ (ulonglong)local_38 ^ (ulonglong)local_38 ^ unaff_RBX;
}


```

---

## Function: FUN_180046778 (0x180046778)

```c

void FUN_180046778(void)

{
  ULONG in_EAX;
  ULONG *in_stack_ffffffffffffffd8;
  ULONG in_stack_ffffffffffffffe0;
  
  BCryptGetProperty(&DAT_1800cad12,(LPCWSTR)0x880e3dbc31026610,&DAT_1800cad12,in_EAX,
                    in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
  FUN_18001efc0();
  FUN_18003d340();
  FUN_18002af78();
  return;
}


```

---

## Function: FUN_180046858 (0x180046858)

```c

/* WARNING: Removing unreachable block (ram,0x000180046890) */

void FUN_180046858(void)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  
  Toolhelp32ReadProcessMemory
            (&DAT_1800c7cd5,&stack0xfffffffffffffff0,(unaff_R13 - (unaff_RDI + 6)) + 0x17,
             &stack0xffffffffffffffe8);
  return;
}


```

---

## Function: FUN_180046930 (0x180046930)

```c

undefined8 FUN_180046930(void)

{
  undefined8 local_28;
  
  return local_28;
}


```

---

## Function: FUN_1800469c8 (0x1800469c8)

```c

/* WARNING: Removing unreachable block (ram,0x000180046a33) */

void FUN_1800469c8(void)

{
  FUN_18000c480();
  return;
}


```

---

## Function: FUN_180046a70 (0x180046a70)

```c

longlong FUN_180046a70(void)

{
  HANDLE pvVar1;
  ulonglong unaff_RSI;
  
  pvVar1 = FindFirstFileA(&stack0xffffffffffffffe8,(LPWIN32_FIND_DATAA)0x88f9759ab2c653b3);
  return (longlong)pvVar1 + (ulonglong)(unaff_RSI < 6) + 0xd;
}


```

---

## Function: FUN_180046b00 (0x180046b00)

```c

ulonglong FUN_180046b00(void)

{
  longlong unaff_RBX;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  return unaff_R12 * unaff_RBX & unaff_R13 & unaff_R12;
}


```

---

## Function: FUN_180046b78 (0x180046b78)

```c

ulonglong FUN_180046b78(void)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = FUN_180044ad8();
  if (uVar1 == 0) {
    in_R10 = 0;
  }
  return in_R10 | 0xfcc21708b3c0a433;
}


```

---

## Function: FUN_180046c28 (0x180046c28)

```c

longlong FUN_180046c28(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180010fb8();
  return lVar1 + -0x15;
}


```

---

## Function: FUN_180046cd8 (0x180046cd8)

```c

longlong FUN_180046cd8(void)

{
  longlong unaff_R13;
  
  return unaff_R13 + -0x375a769886923c78;
}


```

---

## Function: FUN_180046d40 (0x180046d40)

```c

/* WARNING: Removing unreachable block (ram,0x000180046f56) */

ulonglong FUN_180046d40(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong in_R9;
  longlong lVar3;
  undefined1 *puVar4;
  longlong in_R10;
  ulonglong uVar5;
  longlong in_R11;
  undefined1 *puVar6;
  longlong unaff_R12;
  ulonglong unaff_R13;
  undefined1 *puVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [5];
  undefined1 auStack_4b [3];
  ulonglong local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar5 = 0;
  puVar2 = &DAT_1800badda;
  lVar3 = (in_R9 + 0x2f + (ulonglong)(in_R10 << 0x10 < 0)) * 0x40000000 + 2;
  RemoveDirectoryA((LPCSTR)0x80e1bcd21961e1e1);
  lVar3 = lVar3 >> 4;
  puVar7 = local_50;
  RemoveDirectoryA((LPCSTR)0xd7c2a3b73923687a);
  puVar6 = local_28;
  puVar4 = local_38;
  lVar1 = FUN_180001720();
  if (lVar1 != 0) {
    puVar4 = puVar4 + (longlong)puVar7;
    puVar7 = auStack_4b;
    puVar6 = (undefined1 *)
             ((longlong)puVar6 << 0x1a ^
             (uVar5 | ((unaff_R12 + -0xe) - (ulonglong)CARRY8(in_R11 << 6,unaff_R13)) *
                      (longlong)puVar2 >> 0xf));
  }
  puVar6 = puVar6 + lVar3 + 2;
  if ((longlong)((lVar3 + 10 >> 0x18 ^ (longlong)puVar7 * (longlong)puVar4) & 0xcf75b9aaa86871edU) <
      1) {
    puVar6 = (undefined1 *)((longlong)puVar6 * 0x4000);
  }
  uVar5 = 0x29991004eb0f7e39;
  if ((local_48 & (ulonglong)auStack_78) == 0) {
    uVar5 = (longlong)(puVar6 + local_20) * 0x800000;
  }
  return uVar5;
}


```

---

## Function: FUN_180046f80 (0x180046f80)

```c

PHKEY FUN_180046f80(void)

{
  REGSAM in_R9D;
  PHKEY in_stack_ffffffffffffffc8;
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)&stack0xffffffffffffffee,0,in_R9D,in_stack_ffffffffffffffc8);
  return in_stack_ffffffffffffffc8;
}


```

---

## Function: FUN_180047008 (0x180047008)

```c

/* WARNING: Removing unreachable block (ram,0x0001800471c4) */

undefined8 FUN_180047008(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  undefined1 *puVar3;
  HANDLE hMutex;
  HANDLE pvVar4;
  undefined8 *puVar5;
  longlong local_148;
  ulonglong local_140;
  undefined1 local_138 [104];
  undefined8 uStack_d0;
  undefined1 local_88 [48];
  undefined8 local_58 [5];
  
  puVar3 = local_138;
  if (-1 < (longlong)((ulonglong)puVar3 & in_RAX)) {
    puVar3 = (undefined1 *)((ulonglong)puVar3 ^ unaff_RSI);
  }
  hMutex = (HANDLE)(((ulonglong)puVar3 ^ unaff_RBX) & local_140);
  puVar5 = local_58;
  uVar2 = local_148 + 5;
  uStack_d0 = 0x1800470ee;
  pvVar4 = hMutex;
  ReleaseMutex(hMutex);
  lVar1 = ((longlong)hMutex + uVar2 + (longlong)puVar5 + (longlong)pvVar4 & uVar2) + 0x1b;
  uStack_d0 = 0x180047133;
  FUN_18002b600();
  lVar1 = lVar1 + 0x1c;
  uStack_d0 = 0x180047145;
  FUN_1800264e8();
  uStack_d0 = 0x180047209;
  RtlEqualUnicodeString(lVar1 + 4,local_88,&local_148,0);
  return 0xd5643542;
}


```

---

## Function: FUN_180047290 (0x180047290)

```c

void FUN_180047290(void)

{
  RemoveDirectoryA(&DAT_1800c866c);
  return;
}


```

---

## Function: FUN_180047370 (0x180047370)

```c

undefined8 FUN_180047370(void)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  
  FUN_180049a60();
  FUN_18001cce8();
  uVar1 = 0x88dbac06ef828de0;
  if ((POPCOUNT(unaff_RSI + 0x15U & 0xff) & 1U) == 0) {
    uVar1 = 0x88dbac06ef828df1;
  }
  return uVar1;
}


```

---

## Function: FUN_180047430 (0x180047430)

```c

/* WARNING: Removing unreachable block (ram,0x000180047490) */

void FUN_180047430(void)

{
  return;
}


```

---

## Function: FUN_1800474c8 (0x1800474c8)

```c

void FUN_1800474c8(void)

{
  FUN_180043080();
  return;
}


```

---

## Function: FUN_1800475d0 (0x1800475d0)

```c

void FUN_1800475d0(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong in_R11;
  ulonglong uVar6;
  ulonglong local_90;
  undefined1 local_80 [40];
  ulonglong local_58;
  
  uVar6 = in_R11 << 0xe;
  puVar3 = &DAT_1800c7ddd;
  lVar1 = FUN_18004af08();
  if (lVar1 == 0) {
    uVar6 = uVar6 ^ (ulonglong)puVar3;
  }
  uVar6 = local_58 + in_RAX + 0x13 + (ulonglong)(0xfffffffffffffff4 < (uVar6 | in_RAX));
  uVar5 = local_58;
  if ((POPCOUNT(uVar6 & local_90 & 0xff) & 1U) == 0) {
    uVar5 = local_58 + (local_90 - 8);
    uVar6 = 0;
  }
  iVar2 = -0x7ff3ac15;
  puVar4 = local_80;
  FUN_180042ab8();
  OpenFileMappingW(0x800c73e0,(iVar2 + -0x18) - (uint)(((uVar5 | uVar6) >> 3 & 1) != 0),
                   (LPCWSTR)(puVar4 + -0xb));
  return;
}


```

---

## Function: FUN_1800477d0 (0x1800477d0)

```c

void FUN_1800477d0(void)

{
  return;
}


```

---

## Function: FUN_180047858 (0x180047858)

```c

ulonglong FUN_180047858(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  undefined *puVar9;
  ulonglong unaff_R13;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 local_48 [16];
  longlong local_38 [2];
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  
  uVar10 = unaff_R13 ^ param_3 + 7;
  uVar8 = unaff_RDI + 0x17;
  lVar4 = (param_3 ^ (unaff_R13 | unaff_RDI)) + 0xe;
  lVar3 = 0;
  lVar1 = FUN_180012f08();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    uVar8 = uVar8 * 0x1000;
    puVar7 = local_28;
  }
  if ((longlong)uVar8 < 0) {
    uVar8 = uVar8 - (longlong)(puVar7 + 0x16) ^ (lVar4 + uVar10) - unaff_RSI;
  }
  fflush((FILE *)(lVar3 + 0x15));
  puVar7 = local_18;
  FUN_1800378d0();
  FUN_18004a1f8();
  uVar10 = (uVar10 >> 0xe) - 0x15;
  if (puVar7 != (undefined1 *)0x0) {
    uVar8 = uVar8 - (longlong)local_48;
    uVar10 = 0;
  }
  uVar10 = uVar10 >> 0xd;
  puVar5 = &DAT_1800c267a;
  puVar9 = &DAT_1800c7f1d;
  lVar1 = FUN_180022f90();
  if (lVar1 == 0) {
    puVar7 = (undefined1 *)((ulonglong)local_28 ^ uVar8);
    uVar10 = (uVar10 | (ulonglong)(puVar5 + 0x1c) | (ulonglong)(puVar9 + -0xf)) + 0x25;
  }
  puVar5 = &DAT_1800cd271;
  puVar6 = local_48;
  FUN_18000d698();
  if ((POPCOUNT(uVar10 & unaff_RBP & 0xff) & 1U) == 0) {
    puVar5 = puVar5 + (longlong)puVar7;
    puVar6 = (undefined1 *)(local_38[0] << 0x12);
  }
  plVar2 = local_38;
  puVar11 = puVar6;
  if (puVar7 != (undefined1 *)0x0) {
    plVar2 = (longlong *)((longlong)plVar2 - (longlong)puVar5);
    puVar11 = puVar6 + 0x12;
  }
  uVar8 = (longlong)plVar2 + (-10 - (ulonglong)((undefined1 *)0xfffffffffffffff5 < puVar11));
  return uVar8 + 9 | (ulonglong)(puVar6 + (0xfffffffffffffff6 < uVar8) + uVar10 + 0xe);
}


```

---

## Function: FUN_180047af0 (0x180047af0)

```c

undefined8 FUN_180047af0(void)

{
  longlong unaff_RSI;
  PHKEY in_stack_ffffffffffffffa8;
  
  RegOpenKeyExW((HKEY)(unaff_RSI + 0xc),(LPCWSTR)0xc90a119c50f283fe,0x800c5063,0,
                in_stack_ffffffffffffffa8);
  return 0xfcab7cd8744a5a35;
}


```

---

## Function: FUN_180047c00 (0x180047c00)

```c

/* WARNING: Removing unreachable block (ram,0x000180047d1c) */

void FUN_180047c00(void)

{
  FUN_18004ecd0();
  return;
}


```

---

## Function: FUN_180047da0 (0x180047da0)

```c

/* WARNING: Removing unreachable block (ram,0x000180047f2e) */

void FUN_180047da0(void)

{
  undefined1 local_98 [120];
  
  FUN_18002f930();
  FUN_18002cb40();
  FUN_180041050(0xc1043ad94c3a501c,local_98,0);
  return;
}


```

---

## Function: FUN_180047ff8 (0x180047ff8)

```c

void FUN_180047ff8(void)

{
  return;
}


```

---

## Function: FUN_180048060 (0x180048060)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180048060(void)

{
  FUN_18003b008();
  return;
}


```

---

## Function: FUN_1800480f8 (0x1800480f8)

```c

undefined1 * FUN_1800480f8(void)

{
  undefined1 local_28 [16];
  
  return local_28;
}


```

---

## Function: FUN_180048170 (0x180048170)

```c

void FUN_180048170(void)

{
  FUN_180034c30();
  return;
}


```

---

## Function: FUN_1800481e8 (0x1800481e8)

```c

void FUN_1800481e8(void)

{
  FUN_180048818();
  FUN_18000f2e0();
  return;
}


```

---

## Function: FUN_1800482c0 (0x1800482c0)

```c

void FUN_1800482c0(void)

{
  FUN_18004f458();
  return;
}


```

---

## Function: FUN_180048338 (0x180048338)

```c

ulonglong FUN_180048338(void)

{
  LPCSTR in_RAX;
  HWND pHVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong local_18;
  
  pHVar1 = FindWindowA(in_RAX,in_RAX);
  if (unaff_RSI == 0) {
    in_RAX = in_RAX + local_18;
  }
  uVar2 = ((longlong)&pHVar1->unused + unaff_RBX >> 0x12) +
          ((ulonglong)in_RAX ^ local_18 + 0x1fU) + 7;
  if ((POPCOUNT(unaff_RBX & 0xb8) & 1U) != 0) {
    uVar2 = uVar2 & unaff_RBX;
  }
  return uVar2;
}


```

---

## Function: FUN_180048418 (0x180048418)

```c

/* WARNING: Removing unreachable block (ram,0x00018004844f) */
/* WARNING: Removing unreachable block (ram,0x000180048473) */

undefined8 FUN_180048418(void)

{
  FUN_180051c68();
  return 0;
}


```

---

## Function: FUN_180048528 (0x180048528)

```c

LSTATUS FUN_180048528(undefined8 param_1,undefined8 param_2,int param_3)

{
  LSTATUS LVar1;
  longlong lVar2;
  PHKEY in_stack_fffffffffffffff8;
  
  lVar2 = 0;
  LVar1 = RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0x0,param_3 + 0x1a,(REGSAM)&stack0xfffffffffffffff8,
                        in_stack_fffffffffffffff8);
  if (lVar2 == 0) {
    LVar1 = 0;
  }
  return LVar1;
}


```

---

## Function: FUN_180048598 (0x180048598)

```c

undefined8 FUN_180048598(void)

{
  return 0x3dc1ada828bc040b;
}


```

---

## Function: FUN_180048618 (0x180048618)

```c

undefined8 FUN_180048618(void)

{
  FUN_18000b3b8();
  return 0x84b22fe7;
}


```

---

## Function: FUN_1800486e0 (0x1800486e0)

```c

void FUN_1800486e0(void)

{
  FUN_180014958();
  return;
}


```

---

## Function: FUN_180048758 (0x180048758)

```c

void FUN_180048758(void)

{
  ulonglong in_RAX;
  undefined *puVar1;
  ulonglong unaff_RSI;
  longlong lVar2;
  longlong in_R9;
  ulonglong uVar3;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar4;
  undefined1 auStack_28 [32];
  
  uVar3 = (in_R9 + 0x10U) * 0x20000;
  uVar4 = unaff_R13;
  if ((unaff_R12 & (ulonglong)auStack_28) == 0) {
    lVar2 = unaff_RSI + in_RAX + uVar3;
    in_RAX = in_RAX + uVar3 | unaff_R12;
    uVar3 = (in_R9 + 0x10U & 0x7fffffffffff) << 9;
    uVar4 = (unaff_R13 + lVar2) - 5;
    unaff_RSI = lVar2 * 0x800 ^ unaff_R13;
  }
  if (unaff_RSI == 0) {
    in_RAX = in_RAX >> 0x14;
    uVar4 = uVar4 - unaff_R13;
    uVar3 = unaff_R13;
  }
  uVar3 = uVar3 - uVar4 & in_RAX;
  puVar1 = &DAT_1800c5413;
  lVar2 = unaff_R12 + 0x19;
  FUN_180013978();
  FUN_1800241e0(0x742a086a6d7ae9b1,puVar1,lVar2,uVar3);
  return;
}


```

---

## Function: FUN_180048818 (0x180048818)

```c

/* WARNING: Removing unreachable block (ram,0x0001800488fc) */

undefined8 FUN_180048818(void)

{
  undefined1 *puVar1;
  undefined8 unaff_RBX;
  
  puVar1 = (undefined1 *)register0x00000020;
  FUN_18000b288();
  puVar1 = puVar1 + 10;
  FUN_180008bf0((longlong)&stack0xfffffffffffffff8);
  FUN_18004ffe0(unaff_RBX,(longlong)puVar1);
  return 0;
}


```

---

## Function: FUN_180048928 (0x180048928)

```c

/* WARNING: Removing unreachable block (ram,0x000180048961) */

void FUN_180048928(void)

{
  longlong lVar1;
  undefined8 in_R10;
  
  lVar1 = 0;
  FUN_180030b80();
  CreateToolhelp32Snapshot(lVar1 + 6,&DAT_1800c35cd,0,in_R10);
  return;
}


```

---

## Function: FUN_1800489f0 (0x1800489f0)

```c

longlong FUN_1800489f0(void)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong lVar3;
  ULONG unaff_ESI;
  ULONG *unaff_R13;
  
  lVar3 = -0x5e504ffd95754fcf;
  NVar1 = BCryptGetProperty((BCRYPT_HANDLE)0x0,(LPCWSTR)0xa1afb0026a8ab031,&DAT_1800c2682,0x800cda4a
                            ,unaff_R13,unaff_ESI);
  lVar2 = CONCAT44(extraout_var,NVar1);
  if (lVar2 == 0) {
    lVar2 = 7;
  }
  return lVar2 + lVar3;
}


```

---

