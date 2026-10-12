null

Logs:
# Decompiled Functions: index 200-299

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_18000db80 (0x18000db80)

```c

undefined1 * FUN_18000db80(void)

{
  longlong lVar1;
  longlong in_R11;
  undefined1 auStack_35 [45];
  
  FUN_18003ebc0();
  FUN_1800011a0();
  lVar1 = FUN_18002b1b0(0,0,in_R11);
  return auStack_35 + lVar1;
}


```

---

## Function: FUN_18000dc58 (0x18000dc58)

```c

longlong FUN_18000dc58(void)

{
  ulong uVar1;
  undefined4 extraout_var;
  char *unaff_RBX;
  
  uVar1 = inet_addr(unaff_RBX);
  return CONCAT44(extraout_var,uVar1) << 0xd;
}


```

---

## Function: FUN_18000dcf8 (0x18000dcf8)

```c

void FUN_18000dcf8(void)

{
  longlong in_R9;
  
  realloc((void *)(in_R9 + 2),(size_t)&stack0xffffffffffffffe5);
  FUN_180005928();
  return;
}


```

---

## Function: FUN_18000dda8 (0x18000dda8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000de36) */

void FUN_18000dda8(void)

{
  FUN_1800411a0();
  return;
}


```

---

## Function: FUN_18000de70 (0x18000de70)

```c

void FUN_18000de70(void)

{
  ulonglong in_R9;
  undefined1 local_30 [16];
  
  Toolhelp32ReadProcessMemory
            (0x3fe4ceadb5b73dc9,0x3ed93aa9966c6e83,local_30,in_R9 | (ulonglong)local_30);
  return;
}


```

---

## Function: FUN_18000df20 (0x18000df20)

```c

undefined8 FUN_18000df20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  FUN_18004fad8(param_1 + 0x14,0x27222a4f8c85e7de,param_3,(LPCWSTR)0xbf2b07a7fc8ac34f);
  return local_18;
}


```

---

## Function: FUN_18000dfc0 (0x18000dfc0)

```c

void FUN_18000dfc0(void)

{
  FUN_18003d008();
  return;
}


```

---

## Function: FUN_18000e098 (0x18000e098)

```c

void FUN_18000e098(void)

{
  FUN_18004cc68();
  return;
}


```

---

## Function: FUN_18000e130 (0x18000e130)

```c

void FUN_18000e130(void)

{
  RemoveDirectoryA((LPCSTR)0x8ff78c6608fe6fed);
  return;
}


```

---

## Function: FUN_18000e190 (0x18000e190)

```c

void FUN_18000e190(void)

{
  FUN_18003f808();
  FUN_180045760();
  return;
}


```

---

## Function: FUN_18000e240 (0x18000e240)

```c

/* WARNING: Removing unreachable block (ram,0x00018000e2b2) */

void FUN_18000e240(void)

{
  LPCSTR lpPathName;
  
  lpPathName = (LPCSTR)0x0;
  FUN_180042218();
  FUN_18001f600();
  RemoveDirectoryA(lpPathName);
  return;
}


```

---

## Function: FUN_18000e340 (0x18000e340)

```c

void FUN_18000e340(void)

{
  FUN_18003f798();
  return;
}


```

---

## Function: FUN_18000e3e0 (0x18000e3e0)

```c

/* WARNING: Removing unreachable block (ram,0x00018000e42c) */

void FUN_18000e3e0(void)

{
  FUN_1800543f0();
  return;
}


```

---

## Function: FUN_18000e4b0 (0x18000e4b0)

```c

longlong FUN_18000e4b0(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong in_R9;
  longlong in_R10;
  ulonglong uVar1;
  
  uVar1 = in_R10 + 0x1b + (ulonglong)(&stack0xffffffffffffffe0 < (undefined1 *)0x68) | in_RAX;
  return (longlong)
         (in_RAX - ((in_R9 - (ulonglong)
                             (SEXT816((longlong)((unaff_RSI ^ in_RAX) * uVar1)) !=
                             SEXT816((longlong)(unaff_RSI ^ in_RAX)) * SEXT816((longlong)uVar1))) +
                   -0xc)) >> 0x11;
}


```

---

## Function: FUN_18000e578 (0x18000e578)

```c

longlong FUN_18000e578(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  undefined8 local_20;
  
  uVar1 = ((longlong)(in_RAX + unaff_RBX) >> 10) * unaff_RSI;
  uVar3 = (unaff_RBX ^ in_R10) & unaff_RSI;
  uVar2 = uVar1 ^ uVar3 | local_20;
  return uVar2 + 0xc +
         (((unaff_RDI + in_R10) * 0x400000 ^
          (((uVar1 & 0x1800c190e) + uVar3) - (unaff_RDI - uVar1) & unaff_RDI - uVar1 >> 0x19 | uVar2
          ) + unaff_RSI * 0x200) - 3) * -0x800000;
}


```

---

## Function: FUN_18000e648 (0x18000e648)

```c

/* WARNING: Removing unreachable block (ram,0x00018000e797) */

void FUN_18000e648(void)

{
  FUN_180047af0();
  FUN_1800329c0();
  FUN_180053940();
  FUN_180021890();
  return;
}


```

---

## Function: FUN_18000e838 (0x18000e838)

```c

/* WARNING: Removing unreachable block (ram,0x00018000e86b) */
/* WARNING: Removing unreachable block (ram,0x00018000e91b) */

void FUN_18000e838(void)

{
  return;
}


```

---

## Function: FUN_18000e940 (0x18000e940)

```c

/* WARNING: Removing unreachable block (ram,0x00018000e9e6) */

void FUN_18000e940(void)

{
  return;
}


```

---

## Function: FUN_18000eab0 (0x18000eab0)

```c

void FUN_18000eab0(undefined8 param_1,longlong param_2)

{
  CreateToolhelp32Snapshot(&DAT_1800c9746,param_2 + 4,0,0);
  FUN_18004cc68();
  return;
}


```

---

## Function: FUN_18000ebe8 (0x18000ebe8)

```c

ulonglong FUN_18000ebe8(void)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  undefined local_58 [56];
  
  puVar2 = &DAT_1800cf3dc;
  lVar1 = FUN_180050070(&DAT_1800cf3dc,0);
  if (lVar1 != 0) {
    puVar2 = local_58;
  }
  bVar3 = (undefined *)0xffffffffffffffe2 < puVar2;
  lVar1 = FUN_18004f0f0();
  return (lVar1 + -0x14) - (ulonglong)bVar3 >> 0x14;
}


```

---

## Function: FUN_18000ed00 (0x18000ed00)

```c

void FUN_18000ed00(void)

{
  FUN_1800011a0();
  FUN_18004d710();
  return;
}


```

---

## Function: FUN_18000edf0 (0x18000edf0)

```c

/* WARNING: Removing unreachable block (ram,0x00018000ee4d) */

undefined8 FUN_18000edf0(void)

{
  return 0xb30b4093d3f71d0f;
}


```

---

## Function: FUN_18000eef0 (0x18000eef0)

```c

ulonglong FUN_18000eef0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  longlong unaff_R13;
  undefined1 local_40 [16];
  ulonglong local_30;
  undefined1 local_28 [16];
  
  uVar2 = ((local_30 & (ulonglong)local_28) + 0x12) * 0x4000000 ^ unaff_R13 + 0x12U;
  uVar1 = (longlong)((longlong)&stack0xfffff6699e36c370 * (in_R11 ^ unaff_R13 - 2U)) >> 0x10 &
          (ulonglong)local_40 & 0x8123db61;
  if ((POPCOUNT(uVar2 & 0x61) & 1U) != 0) {
    uVar1 = uVar1 - 0xc ^ uVar2 >> 0x10;
  }
  return uVar1;
}


```

---

## Function: FUN_18000f028 (0x18000f028)

```c

void FUN_18000f028(void)

{
  return;
}


```

---

## Function: FUN_18000f090 (0x18000f090)

```c

/* WARNING: Removing unreachable block (ram,0x00018000f154) */

undefined1 * FUN_18000f090(void)

{
  undefined1 local_28 [24];
  
  FUN_180002b50();
  FUN_18001efc0();
  FUN_180052be8();
  return local_28;
}


```

---

## Function: FUN_18000f2e0 (0x18000f2e0)

```c

undefined8 FUN_18000f2e0(void)

{
  longlong unaff_R13;
  undefined1 local_res8 [32];
  PHKEY in_stack_ffffffffffffffd8;
  
  RegOpenKeyExW((HKEY)s_Leona_1800c8f8e,(LPCWSTR)(unaff_R13 + 0x16),0x800c56ee,(REGSAM)local_res8,
                in_stack_ffffffffffffffd8);
  return 0x8af923135;
}


```

---

## Function: FUN_18000f380 (0x18000f380)

```c

longlong FUN_18000f380(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  
  lVar2 = 1;
  lVar1 = CreateToolhelp32Snapshot(&DAT_1800c2f7b,1,&stack0x00000000,0);
  return (lVar1 - lVar2) * unaff_RBX;
}


```

---

## Function: FUN_18000f3e8 (0x18000f3e8)

```c

longlong FUN_18000f3e8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  longlong in_R10;
  longlong local_18;
  
  lVar1 = CreateToolhelp32Snapshot
                    (0xb,&DAT_1800c34a7 + (local_18 - in_R10),param_3 * -0x1cc5f569b115c484,
                     unaff_RSI);
  return lVar1 + local_18;
}


```

---

## Function: FUN_18000f470 (0x18000f470)

```c

void FUN_18000f470(void)

{
  FUN_180010be0();
  FUN_180009a60();
  FUN_180044bf0();
  return;
}


```

---

## Function: FUN_18000f510 (0x18000f510)

```c

undefined8 FUN_18000f510(void)

{
  return 0xef6ab88b0e7b3107;
}


```

---

## Function: FUN_18000f598 (0x18000f598)

```c

longlong FUN_18000f598(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  
  lVar1 = 0x5a7db8203454231c;
  if ((longlong)(unaff_R12 * unaff_RDI & (ulonglong)auStack_48) < 0) {
    lVar1 = 0x5a7db8203454231c - ((ulonglong)local_28 | unaff_R12 * unaff_RDI);
  }
  return lVar1 - (longlong)local_28;
}


```

---

## Function: FUN_18000f620 (0x18000f620)

```c

longlong FUN_18000f620(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_R11;
  ulonglong unaff_R13;
  
  lVar1 = FUN_18002c6d8();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 << 4;
    unaff_R13 = unaff_R13 | in_R11;
  }
  return lVar2 + unaff_R13 + 0xe;
}


```

---

## Function: FUN_18000f6d0 (0x18000f6d0)

```c

longlong FUN_18000f6d0(void)

{
  longlong lVar1;
  undefined *puVar2;
  ulonglong unaff_RBX;
  longlong in_R9;
  ulonglong uVar3;
  longlong unaff_R13;
  
  uVar3 = in_R9 + 6;
  puVar2 = &DAT_1800c899c;
  lVar1 = FUN_180037a98();
  if (lVar1 != 0) {
    unaff_R13 = unaff_R13 - lVar1;
    uVar3 = uVar3 - 0x11;
  }
  return (lVar1 - unaff_R13) + ((ulonglong)puVar2 ^ unaff_RBX | uVar3 >> 7);
}


```

---

## Function: FUN_18000f788 (0x18000f788)

```c

undefined8 FUN_18000f788(void)

{
  UINT uSize;
  CHAR local_40 [32];
  
  uSize = 0x800c13cd;
  FUN_1800230e8();
  RemoveDirectoryA(local_40);
  GetSystemDirectoryW((LPWSTR)0x0,uSize);
  return 0x90271ac9e241bfb0;
}


```

---

## Function: FUN_18000f8a8 (0x18000f8a8)

```c

ulonglong FUN_18000f8a8(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong unaff_RBX;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  longlong in_R11;
  LPSTR unaff_R12;
  longlong lVar2;
  BOOL in_stack_ffffffffffffff98;
  DWORD in_stack_ffffffffffffffa0;
  LPVOID in_stack_ffffffffffffffa8;
  LPCSTR in_stack_ffffffffffffffb0;
  LPSTARTUPINFOA in_stack_ffffffffffffffb8;
  LPPROCESS_INFORMATION in_stack_ffffffffffffffc0;
  
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lVar2 = (longlong)unaff_R12 * in_R11;
  FUN_180034328(param_1,unaff_R12,0,0);
  if (unaff_RBX != 0) {
    param_1 = (LPCSTR)((longlong)param_1 << 0x1a);
    lpProcessAttributes = (LPSECURITY_ATTRIBUTES)&lpProcessAttributes->field_0x7;
    unaff_R12 = unaff_R12 + unaff_RBX;
    lpThreadAttributes =
         (LPSECURITY_ATTRIBUTES)(&lpThreadAttributes->field_0x6 + (longlong)lpProcessAttributes);
  }
  BVar1 = CreateProcessA(param_1,unaff_R12,lpProcessAttributes,lpThreadAttributes,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,
                         in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,
                         in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
  return CONCAT44(extraout_var,BVar1) + lVar2 + ((ulonglong)(in_R11 >> 0xe) >> 0x14);
}


```

---

## Function: FUN_18000f9b0 (0x18000f9b0)

```c

undefined8 FUN_18000f9b0(void)

{
  undefined1 local_48 [46];
  undefined1 auStack_1a [10];
  
  CreateToolhelp32Snapshot(0x65ab8975132847ab,local_48,auStack_1a,&DAT_1800c906e);
  return 0xdfdbb792;
}


```

---

## Function: FUN_18000fad8 (0x18000fad8)

```c

/* WARNING: Removing unreachable block (ram,0x00018000fb2b) */

ulonglong FUN_18000fad8(void)

{
  longlong in_RAX;
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong local_28 [3];
  undefined1 local_10 [8];
  
  uVar3 = 0xa967cbe97ad30b;
  if (0 < (longlong)(((unaff_R13 >> 0xb) - in_RAX | 0xa1674e87U) & unaff_RBP)) {
    uVar3 = (((ulonglong)local_28 ^ local_28[0]) & 0x167cbe97ad) * 0x2000000 -
            ((local_28[0] - 0x1d) - (longlong)local_10);
  }
  FUN_180034b60();
  puVar1 = FUN_18004d010();
  uVar2 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = (ulonglong)puVar1 | uVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_18000fc50 (0x18000fc50)

```c

/* WARNING: Removing unreachable block (ram,0x00018000fd0c) */

void FUN_18000fc50(void)

{
  undefined1 local_70 [96];
  
  Sleep((DWORD)local_70);
  return;
}


```

---

## Function: FUN_18000fd50 (0x18000fd50)

```c

longlong FUN_18000fd50(void)

{
  LSTATUS LVar1;
  longlong in_RAX;
  undefined4 extraout_var;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong in_R10;
  longlong lVar8;
  HKEY in_R11;
  ulonglong uVar9;
  PHKEY in_stack_ffffffffffffff98;
  undefined1 local_48 [32];
  longlong local_28;
  undefined1 local_10 [8];
  
  uVar5 = ((ulonglong)local_48 >> 0x16) + 0x1f;
  lVar7 = (in_RAX + 0x18U & unaff_RDI ^ 0xffffffffffffffe6) - (longlong)in_R11;
  uVar9 = (longlong)in_R11 + (9 - lVar7);
  lVar8 = uVar5 * 0xc4eeef34;
  uVar6 = uVar5 ^ uVar9;
  uVar4 = unaff_RDI >> 6;
  LVar1 = RegOpenKeyExW(in_R11,(LPCWSTR)((in_R10 >> 0x10) + 0xc4eeef31U | uVar5),(DWORD)uVar6,
                        (REGSAM)lVar7,in_stack_ffffffffffffff98);
  if (CONCAT44(extraout_var,LVar1) == 0) {
    uVar4 = uVar4 ^ uVar6;
    lVar8 = (lVar8 - uVar9 ^ lVar8 * -0x20000) << 0x16;
  }
  uVar5 = local_28 >> 0xf;
  uVar4 = uVar4 ^ (ulonglong)local_10;
  lVar2 = -0x4f881cd7a6e86bf3;
  lVar7 = FUN_180046340();
  if (lVar7 != 0) {
    uVar4 = uVar4 & uVar5;
    lVar8 = lVar8 << 7;
  }
  puVar3 = (undefined1 *)(lVar2 + 7);
  lVar7 = FUN_1800264e8();
  if (lVar7 != 0) {
    puVar3 = &stack0xffffffffffffff98;
  }
  return (lVar8 + -0x19) - (ulonglong)CARRY8((ulonglong)puVar3,uVar4);
}


```

---

## Function: FUN_18000ff18 (0x18000ff18)

```c

void FUN_18000ff18(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong unaff_R13;
  
  uVar3 = in_R10 * unaff_R13 + 0x1d;
  BVar1 = RemoveDirectoryA(&DAT_1800cb4e1);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar2 = unaff_R13;
  }
  Toolhelp32ReadProcessMemory(0xb60c582fbc664c7e,(uVar3 | uVar2) + 0x11);
  return;
}


```

---

## Function: FUN_180010000 (0x180010000)

```c

/* WARNING: Removing unreachable block (ram,0x00018001005c) */

undefined1 * FUN_180010000(void)

{
  undefined1 local_18 [24];
  
  FUN_180038998();
  return local_18;
}


```

---

## Function: FUN_180010088 (0x180010088)

```c

void FUN_180010088(void)

{
  FUN_18000d3e0();
  return;
}


```

---

## Function: FUN_180010130 (0x180010130)

```c

void FUN_180010130(void)

{
  FUN_18004a088();
  return;
}


```

---

## Function: FUN_180010200 (0x180010200)

```c

void FUN_180010200(void)

{
  return;
}


```

---

## Function: FUN_180010278 (0x180010278)

```c

/* WARNING: Removing unreachable block (ram,0x0001800102a9) */

void FUN_180010278(void)

{
  return;
}


```

---

## Function: FUN_1800102e8 (0x1800102e8)

```c

longlong FUN_1800102e8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180005aa8();
  if (lVar1 == 0) {
    lVar1 = 2;
  }
  return lVar1;
}


```

---

## Function: FUN_1800103b0 (0x1800103b0)

```c

longlong FUN_1800103b0(void)

{
  ulonglong uVar1;
  ulonglong unaff_R13;
  
  uVar1 = FUN_180005250();
  return (uVar1 | unaff_R13) << 0x13;
}


```

---

## Function: FUN_180010440 (0x180010440)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180010440(void)

{
  return 0xa5b1ad12cde854bd;
}


```

---

## Function: FUN_1800104c0 (0x1800104c0)

```c

void FUN_1800104c0(void)

{
  return;
}


```

---

## Function: FUN_180010548 (0x180010548)

```c

/* WARNING: Removing unreachable block (ram,0x0001800106a9) */

longlong FUN_180010548(void)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong unaff_R13;
  ulonglong uVar4;
  undefined1 auStack_154 [132];
  undefined8 uStack_d0;
  undefined1 auStack_77 [7];
  undefined1 local_70 [8];
  longlong local_68;
  
  uVar4 = (unaff_R13 ^ unaff_RBX) >> 0x1e;
  uStack_d0 = 0x18001058a;
  iVar1 = GetWindowTextA((HWND)s_t0jt2q2celdrt10fdr9m1rl_1800c13dd,(LPSTR)0x461ae613c2922d44,
                         -0x7ff2d3c8);
  uVar2 = CONCAT44(extraout_var,iVar1);
  uVar3 = unaff_RSI;
  if (CONCAT44(extraout_var,iVar1) == 0) {
    uVar3 = (unaff_RSI & uVar4) * 0x200 - in_R10;
    uVar2 = unaff_RSI;
  }
  if (-1 < (longlong)
           ((longlong)auStack_154 - (uVar2 + 4) &
           (uVar2 + 4) - ((uVar4 - uVar3 | (ulonglong)auStack_154) ^ local_68 >> 0x34))) {
    uVar3 = uVar3 ^ (ulonglong)local_70 & (ulonglong)auStack_77;
  }
  return ((longlong)(uVar3 - 10) >> 0x1a) * 0xc2ecdd90d7d4c61;
}


```

---

## Function: FUN_180010748 (0x180010748)

```c

/* WARNING: Removing unreachable block (ram,0x0001800107af) */

void FUN_180010748(longlong param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 local_70 [16];
  undefined1 local_60 [72];
  
  uVar1 = 0x5f119c19fa2937a5;
  pcVar2 = &DAT_1800cc103;
  if ((in_R10 & 0x5f119c19fa2937a5) == 0) {
    pcVar2 = s_jsegment_1800cc112 + 4;
    uVar1 = in_R10 & 0x5f119c19fa2937a5;
    in_R10 = in_R10 & (ulonglong)&stack0xa0ee63e605d6c7e3;
  }
  lVar3 = (longlong)pcVar2 * (unaff_R12 + in_R10 * (param_1 + 0x18)) * uVar1;
  lVar4 = 0;
  FUN_18002a150();
  uVar5 = (lVar4 - lVar3) + 7U + (ulonglong)(uVar1 < (ulonglong)(lVar4 - lVar3));
  uVar1 = (ulonglong)local_70 ^ uVar5;
  if ((longlong)local_60 < 0) {
    uVar1 = uVar1 + uVar5;
  }
  FUN_180047858(0x8f38de8af33a6404,0x24d92d5827ce0a00,uVar1);
  return;
}


```

---

## Function: FUN_180010920 (0x180010920)

```c

/* WARNING: Removing unreachable block (ram,0x000180010ad9) */
/* WARNING: Removing unreachable block (ram,0x0001800109ce) */
/* WARNING: Removing unreachable block (ram,0x000180010b4d) */

undefined8 FUN_180010920(void)

{
  undefined1 local_48 [32];
  
  FUN_1800114b0();
  FUN_180042eb8((longlong)local_48);
  FUN_1800329c0();
  FUN_1800300c0();
  return 0xb8c1ffbab7ee203a;
}


```

---

## Function: FUN_180010be0 (0x180010be0)

```c

longlong FUN_180010be0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong unaff_RBX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong in_R10;
  longlong in_R11;
  ulonglong uVar4;
  ulonglong unaff_R13;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  CHAR local_28 [16];
  
  uVar4 = in_R11 + 0x690cc3d65151d78c;
  RemoveDirectoryA((LPCSTR)0xe831680e9e3ee6b0);
  FUN_18001b528();
  puVar2 = local_40;
  if ((POPCOUNT(uVar4 & unaff_RBX & 0xff) & 1U) != 0) {
    puVar2 = (undefined1 *)(((ulonglong)puVar2 & unaff_RBX) >> 0x13);
    uVar4 = uVar4 - 0x17;
  }
  uVar4 = uVar4 - (longlong)(local_28 + unaff_R13);
  puVar3 = local_48;
  BVar1 = RemoveDirectoryA(local_28 + 2);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    unaff_R13 = (ulonglong)(puVar3 + unaff_R13) ^ uVar4;
  }
  puVar3 = local_40;
  RemoveDirectoryA((LPCSTR)0x0);
  if (in_R10 != 0x1b) {
    unaff_R13 = unaff_R13 - (longlong)puVar3;
    puVar2 = (undefined1 *)((ulonglong)puVar2 >> 0x1d);
  }
  if (puVar2 != (undefined1 *)0x0) {
    unaff_R13 = unaff_R13 + 0x1e;
    puVar2 = puVar2 + 0x17;
  }
  return unaff_R13 * (longlong)puVar2;
}


```

---

## Function: FUN_180010d90 (0x180010d90)

```c

/* WARNING: Removing unreachable block (ram,0x000180010dab) */
/* WARNING: Removing unreachable block (ram,0x000180010e0f) */

void FUN_180010d90(void)

{
  return;
}


```

---

## Function: FUN_180010e38 (0x180010e38)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180010e38(void)

{
  return 0xcbeb60ed;
}


```

---

## Function: FUN_180010f40 (0x180010f40)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010f40(void)

{
  return;
}


```

---

## Function: FUN_180010fb8 (0x180010fb8)

```c

void FUN_180010fb8(void)

{
  FUN_180054050();
  return;
}


```

---

## Function: FUN_180011068 (0x180011068)

```c

longlong FUN_180011068(void)

{
  longlong in_RAX;
  ulonglong unaff_RSI;
  ulonglong unaff_R12;
  
  return (in_RAX + -0xb) - (ulonglong)(unaff_RSI < unaff_R12);
}


```

---

## Function: FUN_1800110c0 (0x1800110c0)

```c

void FUN_1800110c0(void)

{
  FUN_180043298();
  FUN_18003ba30();
  FUN_1800475d0();
  return;
}


```

---

## Function: FUN_180011328 (0x180011328)

```c

undefined8 FUN_180011328(void)

{
  return 0x40364af7e0fddda4;
}


```

---

## Function: FUN_180011398 (0x180011398)

```c

longlong FUN_180011398(void)

{
  ulonglong in_RAX;
  undefined1 *puVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  ulonglong in_R10;
  longlong unaff_R13;
  undefined1 auStackX_14 [20];
  
  if ((POPCOUNT(in_RAX & 0xff) & 1U) != 0) {
    unaff_R13 = unaff_R13 + 0x19;
    in_R10 = (in_R10 | unaff_RSI * 8 - in_RAX) ^ (in_R9 >> 10) + in_RAX;
  }
  puVar1 = (undefined1 *)(in_RAX << 9);
  if ((unaff_R13 + 3 + (ulonglong)((in_R10 >> 10 & 1) != 0) + (in_R10 >> 0xb) & unaff_RBP) != 0) {
    puVar1 = auStackX_14;
  }
  return (longlong)puVar1 << 0x17;
}


```

---

## Function: FUN_1800114b0 (0x1800114b0)

```c

longlong FUN_1800114b0(void)

{
  ulonglong in_R11;
  
  return (in_R11 | 0xa9b4fa86db07eead) - in_R11;
}


```

---

## Function: FUN_180011520 (0x180011520)

```c

/* WARNING: Removing unreachable block (ram,0x000180011544) */

undefined1 * FUN_180011520(void)

{
  undefined1 local_98 [136];
  
  FUN_180021138();
  GetCurrentThreadId();
  FUN_180004c38();
  return local_98;
}


```

---

## Function: FUN_1800116e8 (0x1800116e8)

```c

ulonglong FUN_1800116e8(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  uVar1 = (ulonglong)local_20 ^ (ulonglong)local_28;
  if ((longlong)in_RAX < 1) {
    uVar1 = uVar1 + 0xc;
    in_RAX = in_RAX + 3;
  }
  return in_RAX | uVar1;
}


```

---

## Function: FUN_180011768 (0x180011768)

```c

/* WARNING: Removing unreachable block (ram,0x00018001181f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180011768(void)

{
  RemoveDirectoryA(&DAT_1800cb739);
  return 0x643984f2c6021005;
}


```

---

## Function: FUN_1800118b0 (0x1800118b0)

```c

ulonglong FUN_1800118b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180025350();
  return (ulonglong)(lVar1 >> 0x1b) >> 0xf;
}


```

---

## Function: FUN_180011930 (0x180011930)

```c

longlong FUN_180011930(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  
  lVar1 = FUN_1800039e8();
  return (lVar1 >> 1) * unaff_RSI;
}


```

---

## Function: FUN_1800119d0 (0x1800119d0)

```c

void FUN_1800119d0(void)

{
  FUN_180027cb0();
  return;
}


```

---

## Function: FUN_180011a58 (0x180011a58)

```c

longlong FUN_180011a58(void)

{
  longlong in_RAX;
  longlong lVar1;
  PHKEY in_stack_ffffffffffffffc8;
  longlong local_30 [4];
  
  RegOpenKeyExW((HKEY)&DAT_1800c98ce,(LPCWSTR)((in_RAX + 0x11) * -0x4645164b51c3eb2b + 0x18),
                (DWORD)local_30,0x800bae70,in_stack_ffffffffffffffc8);
  lVar1 = FUN_1800475d0();
  if (lVar1 == 0) {
    lVar1 = -local_30[0];
  }
  return lVar1;
}


```

---

## Function: FUN_180011ae8 (0x180011ae8)

```c

ulonglong FUN_180011ae8(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  
  puVar1 = FUN_18000c040();
  uVar2 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = (ulonglong)puVar1 | unaff_R13;
  }
  return uVar2;
}


```

---

## Function: FUN_180011bb0 (0x180011bb0)

```c

/* WARNING: Removing unreachable block (ram,0x000180011c91) */

undefined1 * FUN_180011bb0(void)

{
  ulonglong in_RAX;
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong in_R11;
  ulonglong unaff_R12;
  longlong lVar10;
  undefined1 auStack_173 [27];
  ulonglong local_158;
  ulonglong local_150 [2];
  undefined1 local_140 [64];
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined1 local_d0 [72];
  undefined1 local_88 [104];
  
  uVar7 = in_R11 * 0x1800c5bf4;
  uVar3 = unaff_RSI & unaff_RDI >> 5;
  puVar6 = local_150;
  uVar4 = (uVar3 << 3 & unaff_R12) + unaff_R12;
  if ((in_R11 & unaff_RBX) != 0) {
    uVar7 = uVar7 & (ulonglong)puVar6;
    in_R11 = in_R11 ^ uVar4;
    puVar6 = (ulonglong *)((ulonglong)puVar6 | uVar7);
    uVar4 = uVar4 * 0x200;
  }
  uVar5 = uVar4;
  if ((uVar7 & (in_RAX | unaff_RSI)) != 0) {
    uVar7 = uVar7 + uVar4;
    uVar5 = uVar4 * 0x1000000;
    uVar3 = (uVar3 ^ in_R11) >> 0x1d;
    unaff_R12 = unaff_R12 + uVar4 * -0x1000000;
    in_R11 = in_R11 << 0x15;
  }
  uVar7 = (in_R11 ^ uVar7) * uVar3 + 0x1e;
  uVar4 = uVar3 ^ (ulonglong)puVar6;
  lVar2 = -0x631624fc0c7784f2;
  if (-1 < (longlong)((unaff_R12 | uVar3) & (ulonglong)auStack_f8)) {
    lVar2 = ((ulonglong)puVar6 & 0x9ce9db03f3887b0e) << 0x1e;
    puVar6 = (ulonglong *)((ulonglong)((longlong)puVar6 + (longlong)auStack_173) >> 6);
    uVar7 = uVar7 ^ uVar5;
  }
  uVar3 = (ulonglong)auStack_173 >> 1;
  uVar7 = uVar7 | (ulonglong)puVar6;
  puVar8 = local_140;
  lVar9 = (uVar4 - 0xf) -
          (ulonglong)
          (SEXT816((longlong)(uVar3 * (longlong)puVar8)) !=
          SEXT816((longlong)uVar3) * SEXT816((longlong)puVar8));
  lVar10 = (longlong)local_d8 * lVar2;
  uVar3 = (lVar2 + -0xd) -
          (ulonglong)(SEXT816(lVar10) != SEXT816((longlong)local_d8) * SEXT816(lVar2));
  uStack_100 = 0x180011d0a;
  lVar2 = FUN_18000d258();
  puVar1 = (undefined1 *)((lVar2 - (lVar10 >> 0x1d)) + (local_158 & uVar3));
  uVar4 = uVar3 & (uVar7 - lVar9 | (ulonglong)puVar8) + (local_150[0] >> 6);
  if ((local_158 & uVar3 & uVar4) == 0) {
    puVar1 = local_88;
    uVar4 = uVar4 | (ulonglong)puVar1;
  }
  if ((longlong)uVar4 < 1) {
    puVar1 = local_d0;
  }
  return puVar1;
}


```

---

## Function: FUN_180011dc0 (0x180011dc0)

```c

undefined8 FUN_180011dc0(void)

{
  FUN_1800394b0();
  return 0xcea8382;
}


```

---

## Function: FUN_180011e28 (0x180011e28)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180011e28(void)

{
  return 0;
}


```

---

## Function: FUN_180011e90 (0x180011e90)

```c

void FUN_180011e90(void)

{
  FUN_180030368();
  return;
}


```

---

## Function: FUN_180011f10 (0x180011f10)

```c

void FUN_180011f10(void)

{
  LPSTARTUPINFOW unaff_R14;
  LPPROCESS_INFORMATION unaff_retaddr;
  BOOL in_stack_ffffffffffffffd8;
  DWORD in_stack_ffffffffffffffe0;
  LPVOID in_stack_ffffffffffffffe8;
  LPCWSTR in_stack_fffffffffffffff0;
  
  CreateProcessW((LPCWSTR)&stack0xffffffffffffffd8,(LPWSTR)&DAT_1800c16f6,(LPSECURITY_ATTRIBUTES)0x0
                 ,(LPSECURITY_ATTRIBUTES)0x0,in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0,
                 in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,unaff_R14,unaff_retaddr);
  return;
}


```

---

## Function: FUN_180011f78 (0x180011f78)

```c

longlong FUN_180011f78(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong local_38;
  
  if (param_2 + 0x1d < 0) {
    unaff_RDI = unaff_RDI - unaff_R12;
    unaff_RBX = ((unaff_RBX & in_R10) - 0xd) + unaff_R12;
  }
  lVar2 = 0;
  puVar3 = &DAT_1800d009b;
  lVar1 = FUN_1800285e8();
  if (lVar1 == 0) {
    in_R11 = in_R11 + 0xc;
    puVar3 = (undefined *)((ulonglong)puVar3 ^ in_R11);
    lVar1 = unaff_RDI;
    lVar2 = local_38;
  }
  if ((in_R11 & unaff_RBX) != 0) {
    puVar3 = (undefined *)(((longlong)puVar3 * 2 - lVar2) + in_R11);
  }
  if ((longlong)puVar3 < 1) {
    lVar1 = lVar1 + 0xe6cc6c3a9f4699e;
  }
  return lVar1;
}


```

---

## Function: FUN_1800120a0 (0x1800120a0)

```c

longlong FUN_1800120a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000e130();
  return lVar1 + -0xc;
}


```

---

## Function: FUN_180012138 (0x180012138)

```c

void FUN_180012138(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  LPCWSTR lpSubKey;
  DWORD ulOptions;
  REGSAM samDesired;
  PHKEY in_stack_ffffffffffffff48;
  
  ulOptions = param_3 + 5;
  samDesired = param_4 + 0x1c;
  lpSubKey = (LPCWSTR)0xb38a94e41661bf22;
  FUN_180016490();
  FUN_18002e820();
  FUN_1800350f0();
  RegOpenKeyExW((HKEY)0x53aab160f5ce3cd8,lpSubKey,ulOptions,samDesired,in_stack_ffffffffffffff48);
  return;
}


```

---

## Function: FUN_180012340 (0x180012340)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012340(void)

{
  FUN_180033d70(0x9637b55418ad5e4b,0x1800cbf8b);
  return;
}


```

---

## Function: FUN_180012408 (0x180012408)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180012408(void)

{
  return 0xbd3d599be288c7ee;
}


```

---

## Function: FUN_180012488 (0x180012488)

```c

void FUN_180012488(void)

{
  FUN_180055a20();
  return;
}


```

---

## Function: FUN_180012578 (0x180012578)

```c

undefined8 FUN_180012578(void)

{
  undefined8 local_18;
  
  return local_18;
}


```

---

## Function: FUN_1800125e0 (0x1800125e0)

```c

ulonglong FUN_1800125e0(void)

{
  ulonglong uVar1;
  ulonglong in_R9;
  ulonglong unaff_R12;
  longlong unaff_R13;
  undefined1 auStack_38 [40];
  
  if ((longlong)(unaff_R12 & (ulonglong)auStack_38) < 0) {
    in_R9 = in_R9 + unaff_R13 >> 0x16;
  }
  uVar1 = FUN_1800051a0();
  if (uVar1 == 0) {
    uVar1 = in_R9;
  }
  return uVar1;
}


```

---

## Function: FUN_180012690 (0x180012690)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180012690(void)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  undefined1 auStack_1d [13];
  
  return ((((ulonglong)auStack_1d & unaff_R12) * (0x39 - unaff_RDI) & (unaff_R12 ^ unaff_RDI)) >>
         0x1b) - 0xb9ac0f66;
}


```

---

## Function: FUN_180012738 (0x180012738)

```c

/* WARNING: Removing unreachable block (ram,0x0001800127c9) */

undefined8 FUN_180012738(void)

{
  ULONG unaff_R15D;
  PUCHAR in_stack_ffffffffffffffb8;
  ULONG in_stack_ffffffffffffffc0;
  PUCHAR in_stack_ffffffffffffffc8;
  ULONG in_stack_ffffffffffffffd0;
  void *in_stack_ffffffffffffffd8;
  
  RemoveDirectoryA((LPCSTR)0x0);
  BCryptDecrypt((BCRYPT_KEY_HANDLE)0x0,&stack0xffffffffffffffc8,0,in_stack_ffffffffffffffd8,
                in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,in_stack_ffffffffffffffc8,
                in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8,unaff_R15D);
  return 0x7caab4c78c6c3841;
}


```

---

## Function: FUN_180012880 (0x180012880)

```c

/* WARNING: Removing unreachable block (ram,0x0001800128b3) */

ulonglong FUN_180012880(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  LSTATUS LVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined *puVar4;
  LPCWSTR lpSubKey;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong in_R10;
  ulonglong uVar9;
  ulonglong in_R11;
  ulonglong unaff_R13;
  PHKEY in_stack_ffffffffffffffa8;
  ulonglong local_28;
  
  lVar8 = 0;
  uVar6 = (longlong)unaff_RSI >> 0x17;
  uVar9 = in_R10 + -0x10 + in_R11;
  if ((param_3 & 0x574c4c2802d840d4 - (ulonglong)CARRY8(unaff_RSI,unaff_RDI)) == 0) {
    uVar9 = uVar9 * 2 + (unaff_RSI ^ unaff_RBX) + unaff_RBX;
    unaff_R13 = unaff_R13 - (in_R11 ^ unaff_R13);
  }
  puVar4 = &DAT_1800c8674;
  lVar2 = FUN_180056370();
  uVar7 = (uint)param_3;
  if (lVar2 == 0) {
    uVar6 = uVar6 + lVar8;
    uVar9 = uVar9 - (longlong)puVar4 & unaff_R13;
    unaff_R13 = unaff_R13 & uVar9;
    uVar7 = uVar7 | (REGSAM)lVar8;
  }
  lpSubKey = (LPCWSTR)(puVar4 + 10);
  LVar1 = RegOpenKeyExW((HKEY)0x0,lpSubKey,uVar7 + 0x1c,(REGSAM)lVar8,in_stack_ffffffffffffffa8);
  uVar3 = 0;
  uVar5 = 0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar3 = CONCAT44(extraout_var,LVar1) & (ulonglong)lpSubKey;
    lpSubKey = (LPCWSTR)((longlong)lpSubKey - uVar9);
    uVar6 = (ulonglong)in_stack_ffffffffffffffa8 & unaff_R13 - 9 & local_28;
    uVar5 = local_28;
  }
  uVar3 = (longlong)uVar3 >> 3;
  if ((longlong)(uVar5 & uVar6 * (longlong)lpSubKey) < 0) {
    uVar3 = uVar3 ^ (ulonglong)lpSubKey >> 9;
  }
  return uVar3;
}


```

---

## Function: FUN_180012a00 (0x180012a00)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180012a00(void)

{
  FUN_1800102e8();
  FUN_1800026f8();
  return 0;
}


```

---

## Function: FUN_180012ba8 (0x180012ba8)

```c

/* WARNING: Removing unreachable block (ram,0x000180012cd6) */

void FUN_180012ba8(void)

{
  RemoveDirectoryA(&DAT_1800c0ad3);
  CreateToolhelp32Snapshot();
  return;
}


```

---

## Function: FUN_180012d30 (0x180012d30)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012d30(void)

{
  FUN_180002420(0x1800c5619);
  FUN_18003d9b8();
  return;
}


```

---

## Function: FUN_180012f08 (0x180012f08)

```c

/* WARNING: Removing unreachable block (ram,0x000180012f5d) */

void FUN_180012f08(void)

{
  FUN_180046858();
  return;
}


```

---

## Function: FUN_180013030 (0x180013030)

```c

void FUN_180013030(void)

{
  longlong unaff_RSI;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  longlong in_R10;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  BOOL in_stack_ffffffffffffff88;
  DWORD in_stack_ffffffffffffff90;
  LPVOID in_stack_ffffffffffffff98;
  LPCWSTR in_stack_ffffffffffffffa0;
  LPSTARTUPINFOW in_stack_ffffffffffffffa8;
  LPPROCESS_INFORMATION in_stack_ffffffffffffffb0;
  
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)&DAT_1800d5225;
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)((in_R10 >> 0x1d) - unaff_RSI);
  FUN_1800265a8();
  FUN_1800014a8();
  CreateProcessW((LPCWSTR)0xafaf97fd639c8448,(LPWSTR)&stack0xffffffffffffff90,lpProcessAttributes,
                 lpThreadAttributes,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90,
                 in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa8,
                 in_stack_ffffffffffffffb0);
  FUN_180051ce0();
  FUN_18000b790();
  return;
}


```

---

## Function: FUN_1800132a0 (0x1800132a0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800132a0(void)

{
  _DAT_14aa42d9 = 0x180013316;
  WSASocketW(0x14aa4301,0x2d341a9f71c54939,&DAT_1800cfef5);
  return;
}


```

---

## Function: FUN_180013358 (0x180013358)

```c

undefined8 FUN_180013358(void)

{
  undefined8 local_30;
  
  FUN_180004868();
  return local_30;
}


```

---

## Function: FUN_180013400 (0x180013400)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180013400(void)

{
  undefined1 local_168 [120];
  undefined8 uStack_f0;
  
  uStack_f0 = 0x18001344a;
  FUN_180013030();
  return (longlong)local_168 * -0xc ^ 0x691be812;
}


```

---

## Function: FUN_1800135e0 (0x1800135e0)

```c

ulonglong FUN_1800135e0(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  undefined1 local_28 [8];
  
  uVar2 = (longlong)local_28 >> 8;
  uVar1 = FUN_180015368(0,in_RAX + 2,(int)((ulonglong)local_28 >> 8));
  if (uVar1 != 0) {
    uVar1 = uVar1 - (unaff_R13 & uVar2);
  }
  return uVar1 | (ulonglong)local_28;
}


```

---

## Function: FUN_180013670 (0x180013670)

```c

ulonglong FUN_180013670(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  return in_RAX | param_2 + 0x14 + unaff_R12;
}


```

---

## Function: FUN_1800136d0 (0x1800136d0)

```c

longlong FUN_1800136d0(void)

{
  longlong unaff_R15;
  
  return (unaff_R15 + -0xd) * 0x2000000;
}


```

---

## Function: FUN_180013730 (0x180013730)

```c

/* WARNING: Removing unreachable block (ram,0x0001800138aa) */
/* WARNING: Removing unreachable block (ram,0x0001800137d6) */
/* WARNING: Removing unreachable block (ram,0x000180013936) */

void FUN_180013730(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined1 *puVar2;
  LPCSTR lpPathName;
  undefined1 *puVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  longlong in_R9;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong in_R10;
  ulonglong uVar7;
  ulonglong in_R11;
  undefined1 *puVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auStack_75 [13];
  CHAR local_68 [16];
  undefined1 local_58 [40];
  undefined1 local_30;
  undefined1 auStack_2f [7];
  
  puVar2 = (undefined1 *)0xc31671c38a6b3cb8;
  lVar4 = in_R9 + 0x18;
  uVar5 = unaff_RDI;
  BVar1 = RemoveDirectoryA((LPCSTR)0xc31671c38a6b3cb8);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    unaff_RDI = unaff_RDI + 2;
    in_R11 = in_R11 | uVar5;
    puVar2 = puVar2 + -lVar4;
    in_R10 = (in_R10 | in_R11) & (ulonglong)puVar2;
  }
  uVar7 = (in_R10 + 0x19) * (longlong)&local_30;
  uVar5 = (longlong)&local_30 * 0x10000000;
  if ((longlong)(uVar5 & (ulonglong)puVar2) < 1) {
    uVar5 = in_R11 - 8 & (ulonglong)puVar2;
    puVar2 = &local_30;
    uVar7 = uVar7 & (uVar5 - 3) - (longlong)puVar2 ^ 0x8000000000000000;
    uVar5 = 0;
  }
  puVar3 = local_58;
  puVar8 = &stack0xffffffffffffffec + -(longlong)puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    uVar5 = uVar5 + (uVar7 - unaff_RDI);
    puVar8 = (undefined1 *)((ulonglong)auStack_2f | (ulonglong)puVar2);
    uVar7 = uVar7 - unaff_RDI ^ uVar5;
  }
  uVar5 = uVar5 * 0x20;
  if ((POPCOUNT((ulonglong)puVar8 & unaff_RBX & 0xff) & 1U) != 0) {
    uVar5 = uVar5 - (longlong)(puVar8 + 0x18);
    puVar3 = auStack_75;
    puVar8 = puVar8 + 1;
  }
  lVar4 = (longlong)puVar8 << 0xe;
  uVar5 = uVar7 + 2 ^ uVar5 ^ (ulonglong)&local_30;
  bVar10 = 0xffffffffffffffe3 < ((ulonglong)puVar3 & (ulonglong)puVar8);
  FUN_180010440();
  lVar9 = lVar4 + 0xb + (ulonglong)bVar10;
  lVar6 = 0;
  uVar5 = (longlong)(uVar5 - 0x1d) >> 0x13;
  lpPathName = (LPCSTR)0x1a;
  lVar4 = 0;
  FUN_1800120a0();
  if ((uVar5 & lVar4 * lVar6) != 0) {
    lpPathName = lpPathName + lVar6 + lVar9 + 0xe;
  }
  RemoveDirectoryA(lpPathName);
  RemoveDirectoryA(local_68);
  return;
}


```

---

## Function: FUN_180013978 (0x180013978)

```c

longlong FUN_180013978(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180044720();
  return (uVar1 & 0x7ffffffff) << 5;
}


```

---

## Function: FUN_180013a30 (0x180013a30)

```c

longlong FUN_180013a30(void)

{
  longlong lVar1;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong unaff_R12;
  
  lVar1 = FUN_18002a8d0();
  if (lVar1 != 0) {
    lVar1 = lVar1 - in_R11;
    unaff_R12 = unaff_R12 ^ in_R10;
  }
  return (lVar1 + -0x14) -
         (ulonglong)
         (SEXT816((longlong)(unaff_R12 * 0x4000000 * lVar1)) !=
         SEXT816((longlong)(unaff_R12 * 0x4000000)) * SEXT816(lVar1));
}


```

---

