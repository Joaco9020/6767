null

Logs:
# Decompiled Functions: index 300-399

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180013ab8 (0x180013ab8)

```c

void FUN_180013ab8(void)

{
  int iVar1;
  PUCHAR pbInput;
  ULONG cbInput;
  ULONG in_stack_ffffffffffffff58;
  WCHAR local_a0 [8];
  undefined1 local_90 [104];
  
  iVar1 = 0x1c;
  FUN_1800340f8(0x1800c8e39);
  FUN_180015368(-0x5f66b031a2520ce7,local_a0,iVar1);
  pbInput = (PUCHAR)0x0;
  cbInput = (ULONG)local_90;
  FUN_18003bca8();
  BCryptSetProperty((BCRYPT_HANDLE)0x0,local_a0,pbInput,cbInput,in_stack_ffffffffffffff58);
  FUN_18001d090();
  return;
}


```

---

## Function: FUN_180013ce0 (0x180013ce0)

```c

longlong FUN_180013ce0(void)

{
  LPCSTR local_60;
  longlong local_20;
  
  CreateEventA((LPSECURITY_ATTRIBUTES)&DAT_1800bae1a,-0x7ff3e53a,-0x7ff3a14c,local_60);
  return local_20 << 9;
}


```

---

## Function: FUN_180013e20 (0x180013e20)

```c

longlong FUN_180013e20(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  PUCHAR pbOutput;
  undefined1 local_130 [64];
  undefined8 uStackY_f0;
  ULONG in_stack_ffffffffffffff38;
  ULONG *in_stack_ffffffffffffff40;
  ULONG in_stack_ffffffffffffff48;
  UCHAR local_a8 [24];
  undefined1 local_90 [5];
  undefined1 auStack_8b [107];
  
  pbOutput = local_a8;
  uStackY_f0 = 0x180013e9e;
  BCryptExportKey((BCRYPT_KEY_HANDLE)0x0,&DAT_1800c9267,(LPCWSTR)&DAT_1800c1acb,pbOutput,
                  in_stack_ffffffffffffff38,in_stack_ffffffffffffff40,in_stack_ffffffffffffff48);
  uStackY_f0 = 0x180013ed2;
  uVar1 = FUN_1800304b8();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = uVar1 << 0x19;
  }
  puVar3 = local_90;
  if (((longlong)pbOutput * 0x100 + 0x19U & (ulonglong)local_130) == 0) {
    puVar3 = auStack_8b;
    lVar2 = lVar2 + 0x468105933119d0da;
  }
  return (lVar2 + -0x10) * (longlong)puVar3;
}


```

---

## Function: FUN_180013fc8 (0x180013fc8)

```c

longlong FUN_180013fc8(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  CHAR local_38 [32];
  
  BVar1 = RemoveDirectoryA(local_38);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}


```

---

## Function: FUN_180014040 (0x180014040)

```c

/* WARNING: Removing unreachable block (ram,0x0001800140b0) */

longlong FUN_180014040(void)

{
  ulonglong unaff_RBP;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  undefined1 local_28 [8];
  
  if (0 < (longlong)(unaff_R13 & unaff_RBP)) {
    in_R11 = in_R11 | in_R10;
  }
  return 0x981bbbe5 -
         (ulonglong)
         (SEXT816((longlong)((longlong)local_28 * 8 * in_R11)) !=
         SEXT816((longlong)local_28 * 8) * SEXT816((longlong)in_R11));
}


```

---

## Function: FUN_180014108 (0x180014108)

```c

void FUN_180014108(void)

{
  CreateToolhelp32Snapshot(0x58fba6f275f8fdc5,0x181041ca183538e5,0,&stack0xfffffffffffffff8);
  return;
}


```

---

## Function: FUN_1800141b8 (0x1800141b8)

```c

undefined8 FUN_1800141b8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  longlong in_R10;
  ulonglong unaff_R13;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  puVar4 = &DAT_1800c1ad3;
  puVar3 = local_38;
  puVar1 = FUN_180015e60(puVar3,param_2 + 0x34);
  if (puVar1 == (undefined1 *)0x0) {
    unaff_R13 = (longlong)(puVar4 + in_R10 + 0xc) * 0x20000;
  }
  if ((unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) == 0) {
    unaff_R13 = (unaff_R13 | local_20) - (local_20 + in_R10);
  }
  uVar2 = 0;
  if ((longlong)((ulonglong)puVar3 & unaff_R13) < 1) {
    uVar2 = 0x1a;
  }
  return uVar2;
}


```

---

## Function: FUN_180014298 (0x180014298)

```c

void FUN_180014298(void)

{
  longlong in_R11;
  
  WSASocketA(0,in_R11 + 1,&DAT_1800cfc65,&DAT_1800c624e);
  return;
}


```

---

## Function: FUN_180014350 (0x180014350)

```c

void FUN_180014350(void)

{
  SetCurrentDirectoryA(&DAT_1800c580e);
  return;
}


```

---

## Function: FUN_180014400 (0x180014400)

```c

/* WARNING: Removing unreachable block (ram,0x0001800145c1) */
/* WARNING: Removing unreachable block (ram,0x000180014619) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180014400(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar6;
  
  uVar2 = 0x624c1e72ba1127ce;
  uVar5 = param_4 + 0x1b;
  if ((unaff_R12 & 0xeeb3b32f) == 0) {
    uVar5 = uVar5 | unaff_RBX | unaff_R13;
    in_R10 = in_R10 + uVar5;
    uVar2 = uVar5 + 0x624c1e72ba1127bc;
    unaff_R13 = (unaff_R13 << 9 | unaff_RBX | unaff_R13) & uVar5;
  }
  uVar6 = unaff_R13 + (uVar5 - in_R10);
  uVar3 = 0xcee522f789be93d3;
  uVar1 = in_RAX + uVar5 & in_R10;
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar2 | 0xcee522f789be93d3;
    uVar6 = uVar6 >> 0x14;
    in_R10 = in_R10 + 0x1f & unaff_R12;
    uVar5 = (uVar1 - unaff_R13) * 0x800 & 0xcee522f789be93d3;
    uVar3 = 0xcee522f789be93f0;
  }
  if (-1 < (longlong)(in_R10 & param_2 + 6U)) {
    unaff_R13 = unaff_R13 ^ uVar5;
    uVar2 = uVar2 & unaff_R13;
    uVar3 = uVar3 & (in_R10 | unaff_R13) | uVar5 | uVar2;
  }
  uVar1 = ((unaff_R13 ^ uVar2) - 0x1c | uVar3 + 6) + uVar3 + 6;
  puVar4 = &DAT_eeb3b367;
  uVar2 = 0;
  if (uVar5 != 0) {
    puVar4 = (undefined1 *)0x0;
    uVar2 = uVar1;
  }
  uVar3 = (longlong)uVar5 >> 7;
  if (uVar3 == 0) {
    uVar3 = -(uVar2 | uVar5) & ((ulonglong)puVar4 >> 0x1f) - _DAT_eeb3b367;
  }
  return (uVar3 * ((longlong)
                   ((uVar6 + 0xc + (ulonglong)(SEXT816(0) != SEXT816(0) * SEXT816(0)) >> 3) + uVar1
                   & uVar5) >> 0x11) + 0xb ^ 0x5a3b61cbbfa301e1) + 0xee6ad0ff94ec9d86;
}


```

---

## Function: FUN_180014660 (0x180014660)

```c

/* WARNING: Removing unreachable block (ram,0x000180014761) */

undefined8 FUN_180014660(void)

{
  FUN_180019f10();
  return 0xf3c0189f;
}


```

---

## Function: FUN_180014810 (0x180014810)

```c

void FUN_180014810(void)

{
  PSID *unaff_RBX;
  int unaff_ESI;
  PSID *in_stack_ffffffffffffffa8;
  PACL *in_stack_ffffffffffffffb0;
  PACL *in_stack_ffffffffffffffb8;
  PSECURITY_DESCRIPTOR *in_stack_ffffffffffffffc0;
  undefined1 local_38 [8];
  
  GetNamedSecurityInfoW
            ((LPCWSTR)0xb0e33c0cd88d9e74,
             (int)local_38 - ((int)&stack0xffffffffffffffb8 - unaff_ESI ^ 0xd88d9e74U),0xd88d9e74,
             unaff_RBX,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8
             ,in_stack_ffffffffffffffc0);
  return;
}


```

---

## Function: FUN_180014958 (0x180014958)

```c

void FUN_180014958(void)

{
  CHAR local_88 [8];
  CHAR local_80 [31];
  CHAR aCStack_61 [57];
  
  RemoveDirectoryA(aCStack_61);
  FUN_18003b218();
  FUN_180047370();
  SetEnvironmentVariableA(local_88,local_80);
  return;
}


```

---

## Function: FUN_180014a98 (0x180014a98)

```c

undefined1 * FUN_180014a98(void)

{
  undefined1 local_58 [48];
  
  FUN_180027420();
  return local_58;
}


```

---

## Function: FUN_180014c88 (0x180014c88)

```c

/* WARNING: Removing unreachable block (ram,0x000180014cf4) */

longlong FUN_180014c88(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong in_R11;
  ulonglong unaff_R13;
  
  FUN_180052618();
  lVar1 = FUN_180045ee8();
  if (lVar1 != 0) {
    lVar1 = lVar1 + (((unaff_RDI - (ulonglong)(unaff_R13 < 0x8f995cd18dd985f7)) + in_RAX + -0x3d) -
                    (ulonglong)((in_R11 >> 0x10 & 1) != 0));
  }
  return lVar1;
}


```

---

## Function: FUN_180014d68 (0x180014d68)

```c

void FUN_180014d68(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  if (DAT_1800bb185 == (code *)0x0) {
    FUN_180035df8();
    FUN_180036940();
    FUN_180036a70();
    FUN_1800381e0();
  }
  (*DAT_1800bb185)(DAT_1800bb18d,0x947424cb3a18cd6e,param_2,param_3);
  return;
}


```

---

## Function: FUN_180014dc0 (0x180014dc0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180014ec6) */
/* WARNING: Removing unreachable block (ram,0x000180014de2) */
/* WARNING: Removing unreachable block (ram,0x000180014f15) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180014dc0(void)

{
  _DAT_c197f66863447899 = 0x180014e0f;
  FUN_18003a8f8();
  _DAT_f83c8fd6484379f = 0x180014f97;
  FUN_180034d10();
  return;
}


```

---

## Function: FUN_180014fa8 (0x180014fa8)

```c

void FUN_180014fa8(void)

{
  FUN_1800104c0();
  return;
}


```

---

## Function: FUN_1800150b0 (0x1800150b0)

```c

undefined8 FUN_1800150b0(void)

{
  FUN_180039240();
  return 0;
}


```

---

## Function: FUN_180015300 (0x180015300)

```c

undefined1 * FUN_180015300(void)

{
  HCRYPTPROV unaff_RBX;
  undefined1 local_28 [8];
  
  CryptReleaseContext(unaff_RBX,0x5098339a067b3bce);
  return local_28;
}


```

---

## Function: FUN_180015368 (0x180015368)

```c

longlong FUN_180015368(longlong param_1,undefined8 param_2,int param_3)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  PHKEY in_stack_ffffffffffffffe8;
  undefined8 local_10;
  
  LVar1 = RegOpenKeyExW((HKEY)(param_1 + 0x21),(LPCWSTR)&stack0x00000000,param_3 - 0x16,
                        (REGSAM)local_10,in_stack_ffffffffffffffe8);
  if (CONCAT44(extraout_var,LVar1) == 0) {
    local_10 = local_10 + 0x16;
  }
  return CONCAT44(extraout_var,LVar1) + local_10;
}


```

---

## Function: FUN_180015908 (0x180015908)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015908(undefined8 param_1,undefined8 param_2,PHKEY param_3)

{
  _DAT_8126b3c0 = 0x180015986;
  RegOpenKeyW((HKEY)0xd8f7ebe78dbf31df,(LPCWSTR)0xbb6bd0daa4a8a8d7,param_3);
  return;
}


```

---

## Function: FUN_1800159d8 (0x1800159d8)

```c

undefined8 FUN_1800159d8(void)

{
  return 0x281170fd4e0dbc3b;
}


```

---

## Function: FUN_180015af0 (0x180015af0)

```c

void FUN_180015af0(void)

{
  RemoveDirectoryA((LPCSTR)0x8f5e0e67f49808e9);
  return;
}


```

---

## Function: FUN_180015be0 (0x180015be0)

```c

void FUN_180015be0(void)

{
  return;
}


```

---

## Function: FUN_180015c58 (0x180015c58)

```c

/* WARNING: Removing unreachable block (ram,0x000180015cc9) */

ulonglong FUN_180015c58(void)

{
  WCHAR local_28 [3];
  undefined1 auStack_22 [2];
  
  FUN_18000cc98(0x13,&DAT_1800cc14b,local_28);
  return (ulonglong)auStack_22 >> 0x15;
}


```

---

## Function: FUN_180015de0 (0x180015de0)

```c

void FUN_180015de0(void)

{
  WSACleanup();
  return;
}


```

---

## Function: FUN_180015e60 (0x180015e60)

```c

/* WARNING: Removing unreachable block (ram,0x000180015edf) */

undefined1 * FUN_180015e60(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  PHKEY unaff_R12;
  
  RegOpenKeyW((HKEY)&DAT_1800c625e,(LPCWSTR)(param_2 + 9),unaff_R12);
  puVar1 = &stack0xffffffffffffffe8;
  if (-1 < (longlong)&stack0xffffffffffffffe8) {
    puVar1 = puVar1 + (longlong)unaff_R12 + 3;
  }
  return puVar1;
}


```

---

## Function: FUN_180015f70 (0x180015f70)

```c

undefined1 * FUN_180015f70(void)

{
  undefined1 local_20 [8];
  
  return local_20;
}


```

---

## Function: FUN_180016000 (0x180016000)

```c

undefined8 FUN_180016000(void)

{
  return 0x14b2d57bd2e8b04c;
}


```

---

## Function: FUN_180016078 (0x180016078)

```c

longlong FUN_180016078(void)

{
  longlong local_18;
  
  RemoveDirectoryA(&DAT_1800d0373);
  FUN_180038218();
  return local_18 + -0x1c;
}


```

---

## Function: FUN_180016278 (0x180016278)

```c

void FUN_180016278(void)

{
  longlong in_R10;
  longlong unaff_R13;
  
  RemoveDirectoryA(&DAT_1800c1b00 +
                   (SEXT816(in_R10 * unaff_R13) != SEXT816(in_R10) * SEXT816(unaff_R13)));
  FUN_180010d90();
  return;
}


```

---

## Function: FUN_180016370 (0x180016370)

```c

void FUN_180016370(void)

{
  FUN_180026438(0,0xb65f893872c3ffbf,0xd);
  return;
}


```

---

## Function: FUN_1800163e8 (0x1800163e8)

```c

/* WARNING: Removing unreachable block (ram,0x000180016467) */

void FUN_1800163e8(void)

{
  FUN_180001820();
  return;
}


```

---

## Function: FUN_180016490 (0x180016490)

```c

void FUN_180016490(void)

{
  malloc(0);
  FUN_18004db58();
  return;
}


```

---

## Function: FUN_180016590 (0x180016590)

```c

void FUN_180016590(void)

{
  GetUserNameA((LPSTR)0x0,(LPDWORD)&DAT_1800d3d62);
  FUN_1800120a0();
  return;
}


```

---

## Function: FUN_1800166a8 (0x1800166a8)

```c

/* WARNING: Removing unreachable block (ram,0x00018001674a) */

undefined8 FUN_1800166a8(void)

{
  FUN_1800475d0();
  return 0x38a2820d539e1981;
}


```

---

## Function: FUN_180016770 (0x180016770)

```c

longlong FUN_180016770(void)

{
  undefined1 local_28 [8];
  
  return (ulonglong)((undefined1 *)0x2e7637120557ed4a < local_28) + 0x44b5655d;
}


```

---

## Function: FUN_180016ac0 (0x180016ac0)

```c

longlong FUN_180016ac0(void)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  ulonglong unaff_R12;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong uVar3;
  undefined1 local_88 [80];
  longlong local_38;
  
  FindClose(local_88);
  uVar3 = unaff_R13 >> 7;
  local_38 = local_38 + -0x69a8b2668169b78c;
  lVar2 = (unaff_R12 & unaff_RBX) * 0x10;
  uVar1 = lVar2 + 0xbdf8f96e9d0c9c13;
  if (local_38 < 0) {
    uVar1 = lVar2 + 0xbdf8f96e9d0c9c1fU & uVar3;
    uVar3 = uVar3 - 1;
    local_38 = local_38 - uVar1;
  }
  lVar2 = FUN_180006ee0();
  if (lVar2 == 0) {
    lVar2 = -(uVar3 * local_38 - uVar1);
  }
  return lVar2;
}


```

---

## Function: FUN_1800170d8 (0x1800170d8)

```c

longlong FUN_1800170d8(void)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar2;
  
  iVar1 = WSAGetLastError();
  lVar2 = CONCAT44(extraout_var,iVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}


```

---

## Function: FUN_1800171b8 (0x1800171b8)

```c

undefined1 * FUN_1800171b8(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong in_R10;
  longlong in_R11;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong unaff_R12;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong local_160;
  undefined1 local_140 [8];
  longlong local_138 [9];
  undefined8 uStack_f0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [48];
  undefined1 local_78 [30];
  undefined1 auStack_5a [58];
  
  lVar9 = in_R11 >> 8;
  uVar11 = unaff_R12 >> 2;
  uVar4 = 0;
  puVar10 = local_a8;
  uStack_f0 = 0x180017219;
  BVar1 = PostMessageA((HWND)&DAT_1800c6266,0,(WPARAM)local_b0,(LPARAM)puVar10);
  bVar13 = false;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar11 = uVar11 + 0xd;
    lVar9 = lVar9 + uVar4 + 0xf;
    bVar13 = uVar4 < uVar11;
    uVar4 = uVar4 - uVar11;
  }
  lVar5 = uVar4 - 0x10;
  uStack_f0 = 0x180017240;
  FUN_18002c0e0();
  uVar12 = uVar11 + 0x11 + (ulonglong)bVar13 + lVar5;
  puVar8 = auStack_5a;
  puVar10 = puVar8 + ((lVar9 << 10) >> 0x17 ^ (ulonglong)puVar10);
  uVar4 = (longlong)local_140 * 0x80000000;
  uVar3 = 0;
  uStack_f0 = 0x180017293;
  uVar2 = FUN_180022378();
  uVar11 = 0;
  if (uVar2 != 0) {
    puVar8 = puVar8 + (longlong)puVar10;
    uVar3 = (uVar3 & uVar12) + uVar4;
    uVar11 = uVar2 | uVar4;
    uVar4 = (longlong)local_140 << 0x20;
    uVar12 = uVar12 ^ uVar11;
    in_R10 = in_R10 | uVar3;
  }
  puVar7 = puVar8 + uVar4;
  uVar2 = (uVar3 - 0xf) - (ulonglong)CARRY8(uVar4,(ulonglong)puVar8);
  lVar9 = ((ulonglong)puVar8 ^ uVar12) * (longlong)puVar7;
  uVar11 = (uVar11 + 0x15 +
           (ulonglong)(uVar3 < 0xf || uVar3 - 0xf < (ulonglong)CARRY8(uVar4,(ulonglong)puVar8))) -
           uVar2;
  uVar4 = lVar9 + (uVar2 | uVar11);
  uVar12 = uVar12 & in_R10;
  uVar2 = lVar9 - uVar12;
  if ((POPCOUNT(uVar11 & 0xff) & 1U) != 0) {
    uVar4 = uVar4 | uVar2;
    uVar12 = uVar12 ^ (ulonglong)puVar10;
    puVar7 = (undefined1 *)((ulonglong)puVar7 ^ uVar2);
  }
  puVar10 = puVar10 + 0x15;
  puVar8 = (undefined1 *)0x91f81a4524437826;
  pcVar6 = s_8ekzlowlate_1800cc28f + 4;
  uStack_f0 = 0x180017306;
  lVar9 = FUN_18003ebc0();
  if (lVar9 == 0) {
    puVar10 = (undefined1 *)((ulonglong)puVar10 | uVar4);
    uVar4 = uVar4 >> 0x21;
    puVar7 = (undefined1 *)((ulonglong)puVar7 ^ (ulonglong)puVar10);
    pcVar6 = pcVar6 + 2;
    uVar12 = uVar12 & (ulonglong)puVar7;
  }
  lVar9 = uVar12 * 8;
  if ((longlong)pcVar6 < 1) {
    puVar8 = local_78;
  }
  if ((POPCOUNT((ulonglong)puVar10 & (ulonglong)puVar7 & 0xff) & 1U) != 0) {
    lVar9 = lVar9 + -0x11;
    uVar4 = local_138[0] + -8 + lVar9;
    pcVar6 = (char *)((ulonglong)pcVar6 >> 3 ^ (ulonglong)puVar7);
  }
  lVar5 = (longlong)local_138 *
          uVar4 * (longlong)(puVar10 + (-0x1c - (ulonglong)(((longlong)puVar7 >> 10 & 1U) != 0)));
  uVar4 = ((lVar9 - 0x1bU & 0xeb5093ff) - 0xeb5093ff &
          (ulonglong)CARRY8((ulonglong)puVar8,(ulonglong)pcVar6) + 6) -
          (uVar4 * (longlong)(puVar10 + (-0x1c - (ulonglong)(((longlong)puVar7 >> 10 & 1U) != 0))) -
          (longlong)(puVar8 + (longlong)(pcVar6 + -0xeb509401)));
  lVar9 = local_160 + -0x14;
  if ((POPCOUNT((uVar4 | 0xeb5093ff) & 0xff) & 1U) != 0) {
    lVar5 = ((ulonglong)local_138 ^ uVar4 - 3) + lVar9;
  }
  puVar10 = (undefined1 *)(lVar5 * 0x2000000);
  if (-1 < lVar9) {
    puVar10 = puVar10 + lVar9;
  }
  return puVar10;
}


```

---

## Function: FUN_180017430 (0x180017430)

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_180017430(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  HANDLE pvVar2;
  LPCSTR lpFileName;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  ulonglong in_R10;
  ulonglong uVar10;
  longlong unaff_R13;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_138 [120];
  undefined8 uStack_c0;
  ulonglong local_90;
  CHAR local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  undefined *local_40 [3];
  
  ppuVar9 = local_40;
  uVar10 = 0;
  uVar6 = 0xc2c211c2;
  lVar11 = unaff_R13 * in_R10 * 0x100000;
  uVar5 = ((unaff_RBX | unaff_RDI) + 0x1f +
           (ulonglong)
           (SEXT816((longlong)(unaff_R13 * in_R10)) !=
           SEXT816(unaff_R13) * SEXT816((longlong)in_R10)) ^ 0xc2c211c2 ^ in_RAX) >> 0x1e;
  lVar1 = -(longlong)ppuVar9;
  lpFileName = local_88;
  puVar4 = &DAT_1800bade2;
  lVar7 = (in_RAX & 0x1800cba53) + 0xb;
  uStack_c0 = 0x1800174b3;
  pvVar2 = FindFirstFileA(lpFileName,(LPWIN32_FIND_DATAA)&DAT_1800bade2);
  if (pvVar2 == (HANDLE)0x0) {
    lVar11 = lVar11 + -0xf;
    uVar6 = uVar5 | 0xc2c211c2;
    uVar10 = uVar10 >> 0x19;
    lVar7 = lVar7 + (longlong)(local_78 + lVar1);
    pvVar2 = (HANDLE)0x0;
  }
  puVar4 = puVar4 + -0x10;
  uVar3 = (longlong)lpFileName * 0x400;
  uVar12 = lVar11 - in_R10 ^ (longlong)pvVar2 - 7U;
  uVar8 = lVar7 + 0x16;
  uVar5 = ((uVar5 ^ uVar3) - ((longlong)pvVar2 - 7U) | uVar12) &
          ((ulonglong)(local_78 + lVar1) | uVar5) + (uVar6 ^ (ulonglong)puVar4 | uVar8);
  if ((uVar8 & (ulonglong)local_68) == 0) {
    uVar10 = uVar10 >> 4;
    uVar3 = uVar3 + in_R10;
    ppuVar9 = (undefined **)((longlong)ppuVar9 + 9U ^ in_R10);
    puVar4 = (undefined *)(((ulonglong)puVar4 ^ in_R10) - (longlong)local_70);
    uVar5 = local_90;
  }
  if ((uVar8 & (ulonglong)local_68) != 0) {
    uVar5 = uVar5 | uVar10;
    uVar8 = lVar7 + 0x12;
    puVar4 = (undefined *)((ulonglong)puVar4 & uVar3 - in_R10);
    uVar12 = uVar12 + 0x17;
    in_R10 = (in_R10 & (ulonglong)ppuVar9) + 0x13;
    ppuVar9 = (undefined **)((longlong)ppuVar9 - 0x1eU ^ uVar10);
  }
  uVar5 = in_R10 & uVar5;
  uVar3 = (uVar8 >> 0x17) + 0xf;
  uVar6 = (ulonglong)((uVar5 >> 0x3b & 1) != 0);
  if (((uVar12 | (ulonglong)ppuVar9) & (ulonglong)&stack0xfffffffffffffff8) == 0) {
    puVar4 = local_40[0];
  }
  uVar8 = 0x858676a8ec6a797e;
  if (-1 < (longlong)
           (((uVar5 - 2) - uVar6) + uVar3 +
            (uVar3 | ((longlong)local_138 * uVar10 + -0x17) -
                     (ulonglong)(((longlong)local_50 >> 0xc & 1U) != 0)) &
           ((longlong)puVar4 * uVar3 ^
           ((ulonglong)(local_78 + (-4 - (ulonglong)(uVar5 < 2 || uVar5 - 2 < uVar6))) >> 0x1c) + 8)
           )) {
    uVar8 = local_58 & (longlong)local_50 >> 0xd | 0x858676a8ec6a797e;
  }
  if (-1 < (longlong)uVar8) {
    local_80 = &local_80;
  }
  return local_80;
}


```

---

## Function: FUN_180017940 (0x180017940)

```c

undefined8 FUN_180017940(void)

{
  FUN_180050d20();
  FUN_18003bba0();
  return 0x7b04a8318b810cb0;
}


```

---

## Function: FUN_180017b90 (0x180017b90)

```c

undefined8 FUN_180017b90(void)

{
  undefined8 unaff_RBP;
  
  FUN_18002d618();
  return unaff_RBP;
}


```

---

## Function: FUN_180017c40 (0x180017c40)

```c

void FUN_180017c40(void)

{
  FUN_1800150b0();
  return;
}


```

---

## Function: FUN_180017d40 (0x180017d40)

```c

undefined8 FUN_180017d40(void)

{
  return 0;
}


```

---

## Function: FUN_180017eb0 (0x180017eb0)

```c

longlong FUN_180017eb0(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar5;
  undefined1 auStack_78 [48];
  undefined1 local_48 [56];
  
  puVar3 = &DAT_1800d50a2;
  uVar4 = param_2 + 0xd;
  uVar5 = unaff_R12 & in_R11;
  BVar1 = RemoveDirectoryA(&DAT_1800d50a2);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar2 = -0x15;
  }
  if ((POPCOUNT(uVar5 & (ulonglong)auStack_78 & 0xff) & 1U) != 0) {
    in_R11 = in_R11 - (uVar4 & (ulonglong)puVar3);
  }
  return (lVar2 - in_R11) + 0x12 +
         (ulonglong)(local_48 < (undefined1 *)0x8 || &stack0x00000000 == (undefined1 *)0x50);
}


```

---

## Function: FUN_1800181d0 (0x1800181d0)

```c

ulonglong FUN_1800181d0(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  undefined8 ***pppuVar1;
  undefined8 **local_8;
  
  pppuVar1 = &local_8;
  if ((longlong)(in_RAX ^ unaff_RBX) < 0) {
    pppuVar1 = (undefined8 ***)local_8;
  }
  return in_RAX ^ unaff_RBX ^ (ulonglong)pppuVar1;
}


```

---

## Function: FUN_180018250 (0x180018250)

```c

void FUN_180018250(void)

{
  FUN_180050288();
  return;
}


```

---

## Function: FUN_1800182d0 (0x1800182d0)

```c

longlong FUN_1800182d0(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  lVar1 = 0;
  if (unaff_RSI == 0) {
    lVar1 = unaff_R12;
  }
  lVar1 = NtOpenFile(lVar1 + 0x10,0,0,0);
  return lVar1 >> 0x10;
}


```

---

## Function: FUN_180018370 (0x180018370)

```c

ulonglong FUN_180018370(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_180004250(0x1a013e2c9d877082,&DAT_1800c63d6,0x1800d3ae3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & (uVar3 | (unaff_RDI >> 4) - 5U);
  }
  return uVar2;
}


```

---

## Function: FUN_180018498 (0x180018498)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180018498(void)

{
  memcpy((void *)0xd1674c859ae275d,&DAT_1800c42af,0x1800d3acb);
  return;
}


```

---

## Function: FUN_180018578 (0x180018578)

```c

void FUN_180018578(void)

{
  return;
}


```

---

## Function: FUN_1800185d8 (0x1800185d8)

```c

/* WARNING: Removing unreachable block (ram,0x000180018611) */

void FUN_1800185d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  ULONG *in_stack_ffffffffffffffe8;
  ULONG in_stack_fffffffffffffff0;
  
  NtSuspendThread(0xa6ea3f2eb91630a3,0xae5456e321b4e553,param_3,unaff_RBX);
  BCryptGetProperty((BCRYPT_HANDLE)0x5,(LPCWSTR)0x0,(PUCHAR)0x0,0,in_stack_ffffffffffffffe8,
                    in_stack_fffffffffffffff0);
  FUN_180005010();
  return;
}


```

---

## Function: FUN_1800186a0 (0x1800186a0)

```c

/* WARNING: Removing unreachable block (ram,0x00018001880f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800186a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  longlong unaff_R12;
  undefined1 local_78 [88];
  
  puVar2 = &DAT_1800bab67;
  puVar3 = local_78;
  uVar4 = param_3 + 0x18;
  lVar1 = FUN_1800034f8();
  if (lVar1 == 0) {
    puVar3 = (undefined1 *)((ulonglong)puVar3 >> 0x15);
    puVar2 = (undefined *)(((ulonglong)puVar2 | unaff_RSI) & unaff_R12 >> 5);
  }
  FUN_180047858(puVar2,puVar3,uVar4);
  return;
}


```

---

## Function: FUN_180018890 (0x180018890)

```c

void FUN_180018890(void)

{
  FUN_18003be38();
  return;
}


```

---

## Function: FUN_180018998 (0x180018998)

```c

ulonglong FUN_180018998(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar1 = in_RAX - unaff_RDI;
  uVar3 = unaff_RBX >> 8;
  uVar2 = FUN_180005dd0();
  if (uVar2 == 0) {
    uVar3 = uVar3 + 9;
  }
  return (uVar2 | unaff_RDI + 0x18 +
                  (ulonglong)
                  (0xffffffffffffffed < uVar1 ||
                  CARRY8(uVar1 + 0x12,(ulonglong)((uVar1 >> 0x30 & 1) != 0)))) & uVar3;
}


```

---

## Function: FUN_180018a70 (0x180018a70)

```c

undefined1 * FUN_180018a70(void)

{
  undefined1 local_18 [16];
  
  FUN_1800159d8();
  return local_18;
}


```

---

## Function: FUN_180018ad8 (0x180018ad8)

```c

void FUN_180018ad8(void)

{
  FUN_180038b88();
  return;
}


```

---

## Function: FUN_180018c40 (0x180018c40)

```c

undefined8 FUN_180018c40(void)

{
  return 0xf720f6f4a4dd45bd;
}


```

---

## Function: FUN_180018cd0 (0x180018cd0)

```c

undefined8 FUN_180018cd0(void)

{
  FUN_180005eb8();
  FUN_18000bce0();
  FUN_1800489f0();
  return 0x7d4bc2e7f64ed86b;
}


```

---

## Function: FUN_180018ee8 (0x180018ee8)

```c

/* WARNING: Removing unreachable block (ram,0x000180018f7a) */

undefined8 FUN_180018ee8(void)

{
  closesocket(0);
  FUN_18002a488();
  return 0x31242957ec9720d6;
}


```

---

## Function: FUN_180019148 (0x180019148)

```c

/* WARNING: Removing unreachable block (ram,0x000180019241) */
/* WARNING: Removing unreachable block (ram,0x00018001929c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_180019148(void)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong local_80;
  ulonglong local_78 [2];
  FILE FStack_62;
  
  puVar2 = local_78;
  uVar3 = 0x1b;
  uVar1 = 0x4dbc6fcab682f449;
  if (local_80 != 0) {
    uVar3 = local_80 | 0x38;
    puVar2 = (ulonglong *)((ulonglong)puVar2 ^ in_R10);
    uVar1 = local_78[0];
  }
  FUN_180021de0(0x73658a86cdc8ea2f,
                (uVar1 - 2) - (ulonglong)(local_80 != 0 && CARRY8(in_R10,unaff_RSI)),
                (longlong)puVar2,uVar3 | (ulonglong)puVar2);
  FUN_18002d1e8();
  _ftelli64(&FStack_62);
  return 0xc5907c23b574ab19;
}


```

---

## Function: FUN_180019440 (0x180019440)

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_180019440(void)

{
  FUN_18002cb40();
  FUN_18003c450();
  return;
}


```

---

## Function: FUN_1800195f8 (0x1800195f8)

```c

void FUN_1800195f8(void)

{
  FUN_180006d08();
  GetTempPathW(0xaa69da48,(LPWSTR)0x5a7c0232aa69da48);
  FUN_18004ff38();
  return;
}


```

---

## Function: FUN_1800197a8 (0x1800197a8)

```c

longlong FUN_1800197a8(void)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong in_R9;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar3;
  ulonglong unaff_R13;
  undefined1 auStack_58 [56];
  
  uVar2 = unaff_RSI + in_R11;
  if ((longlong)(unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) < 1) {
    unaff_RBX = unaff_RBX - 2;
    uVar2 = (uVar2 ^ in_R9) - 1;
  }
  uVar3 = ((unaff_R12 | unaff_RBX) >> 0xd) - 3;
  lVar1 = uVar3 * 0xc0060d87800000;
  lVar1 = (unaff_RSI * uVar2 ^ -(unaff_RSI * uVar2)) + lVar1 * lVar1;
  if (-1 < (longlong)(uVar3 & (ulonglong)auStack_58)) {
    lVar1 = lVar1 + 8;
  }
  return lVar1 + -0x48409eead64c7c9c;
}


```

---

## Function: FUN_1800198d0 (0x1800198d0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800199b6) */

ulonglong FUN_1800198d0(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  longlong in_R11;
  ulonglong uVar6;
  ulonglong local_50;
  
  lVar5 = 0;
  uVar3 = 0xaff333c457524435 - in_R11 * (param_2 + 0x1f);
  puVar4 = &DAT_1800ca10e;
  lVar1 = FUN_180002420(uVar3);
  if (lVar1 == 0) {
    in_RAX = in_RAX & (ulonglong)puVar4 & (ulonglong)puVar4 | uVar3;
    unaff_RBX = unaff_RBX << 0x11;
    local_50 = local_50 ^ (ulonglong)puVar4;
  }
  uVar6 = 0;
  uVar2 = FUN_18000eef0();
  if (-1 < (longlong)uVar3) {
    uVar3 = uVar3 >> 0x12;
    unaff_RBX = unaff_RBX - lVar5;
    uVar2 = uVar2 + 1;
  }
  uVar2 = (uVar2 >> 0x15 | unaff_RBX & in_RAX) * local_50;
  if ((longlong)((in_RAX | uVar6) & (uVar3 >> 2) - 0xc) < 0) {
    uVar2 = uVar2 | local_50;
  }
  return uVar2;
}


```

---

## Function: FUN_1800199f0 (0x1800199f0)

```c

ulonglong FUN_1800199f0(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  REGSAM in_R10D;
  PHKEY unaff_R14;
  
  lVar3 = 0;
  LVar1 = RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0xed2f22c5b3d6e49a,0xb3d6e49a,in_R10D,unaff_R14);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (uVar2 != 0) {
    uVar2 = uVar2 - 0x12;
  }
  if (lVar3 == 0) {
    uVar2 = uVar2 >> 0x17;
  }
  return uVar2;
}


```

---

## Function: FUN_180019ac0 (0x180019ac0)

```c

ulonglong FUN_180019ac0(void)

{
  undefined1 *puVar1;
  ulonglong unaff_R12;
  undefined1 local_38 [2];
  undefined1 auStack_36 [22];
  
  puVar1 = &stack0xffffffffffffffe8;
  CreateToolhelp32Snapshot(0x9dd89ecbcc03e8aa,puVar1,auStack_36,local_38);
  return unaff_R12 | (ulonglong)puVar1;
}


```

---

## Function: FUN_180019b80 (0x180019b80)

```c

longlong FUN_180019b80(void)

{
  longlong in_RAX;
  longlong in_R10;
  
  return (in_RAX - in_R10) + -0x10;
}


```

---

## Function: FUN_180019c78 (0x180019c78)

```c

void FUN_180019c78(void)

{
  FindFirstFileA((LPCSTR)0x267059a61ab659e,(LPWIN32_FIND_DATAA)0x0);
  return;
}


```

---

## Function: FUN_180019da8 (0x180019da8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019da8(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong unaff_RSI;
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong local_20 [2];
  
  uVar2 = param_4 + unaff_RSI;
  puVar1 = local_20;
  uVar3 = (uVar2 + unaff_R12) * ((param_3 + 0xe) - uVar2 & (ulonglong)local_20) | unaff_R12;
  if ((longlong)((ulonglong)puVar1 & local_20[0]) < 0) {
    unaff_R12 = unaff_R12 ^ in_R10 ^ uVar2;
    puVar1 = (ulonglong *)((ulonglong)puVar1 >> 0x1d);
  }
  FUN_180034328(0x94177d0785ec1e0b,((param_2 + 0x1f >> 0x11 ^ (ulonglong)local_20) - 10) + unaff_R12
                ,(ulonglong)puVar1,uVar3);
  return;
}


```

---

## Function: FUN_180019f10 (0x180019f10)

```c

void FUN_180019f10(void)

{
  return;
}


```

---

## Function: FUN_180019fb0 (0x180019fb0)

```c

longlong FUN_180019fb0(void)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  uVar3 = 0xe0a1c65976479844;
  if ((longlong)(in_R11 & unaff_RBX) < 0) {
    unaff_RSI = unaff_RSI + 0x10 | in_RAX;
  }
  BVar1 = SetEnvironmentVariableW((LPCWSTR)0xe0a1c65976479844,(LPCWSTR)0xd19e1bdc0b16e32b);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    unaff_RBX = 0xffffffffffffffe8;
    in_R11 = unaff_R13 ^ unaff_R12 | 0xffffffffffffffe8;
    uVar2 = unaff_RSI;
  }
  if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) {
    in_R11 = in_R11 + 0x12;
  }
  if ((POPCOUNT(in_R11 & unaff_RBX & 0xff) & 1U) == 0) {
    uVar2 = uVar2 + 0x14;
  }
  return (longlong)uVar2 >> 0x17;
}


```

---

## Function: FUN_18001a110 (0x18001a110)

```c

void FUN_18001a110(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_18004c350();
  return;
}


```

---

## Function: FUN_18001a1c8 (0x18001a1c8)

```c

undefined8 FUN_18001a1c8(void)

{
  FUN_180029e30();
  RemoveDirectoryA(&DAT_1800cc2bb);
  RemoveDirectoryA(&DAT_1800c4791);
  return 0;
}


```

---

## Function: FUN_18001a2e0 (0x18001a2e0)

```c

void FUN_18001a2e0(undefined8 param_1,longlong param_2,int param_3)

{
  BCRYPT_ALG_HANDLE in_RAX;
  ULONG unaff_R12D;
  
  BCryptGenRandom(in_RAX,(PUCHAR)(param_2 + 0x19),param_3 + 0x18,unaff_R12D);
  CreateToolhelp32Snapshot(0);
  FUN_18001bae8();
  return;
}


```

---

## Function: FUN_18001a4d0 (0x18001a4d0)

```c

/* WARNING: Removing unreachable block (ram,0x00018001a55f) */

ulonglong FUN_18001a4d0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong in_R10;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  if ((POPCOUNT(in_R10 - 0x1800c0ee3U & (ulonglong)local_20 & 0xff) & 1U) != 0) {
    unaff_RBX = unaff_RBX + -0xb;
  }
  uVar1 = FUN_180038218();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & (ulonglong)local_20 |
            (unaff_RBX - (longlong)local_20) + (longlong)local_20 * (longlong)local_18;
  }
  return uVar2;
}


```

---

## Function: FUN_18001a5d8 (0x18001a5d8)

```c

void FUN_18001a5d8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R11;
  longlong unaff_R13;
  CHAR aCStack_25 [29];
  
  RemoveDirectoryA(aCStack_25 +
                   (-(ulonglong)((ulonglong)((param_3 >> 2) * -0xb7ade13e3f0f5d4) < in_R11) -
                   unaff_R13));
  FUN_18004d798();
  return;
}


```

---

## Function: FUN_18001a6b8 (0x18001a6b8)

```c

longlong FUN_18001a6b8(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  return in_RAX * (unaff_RSI + -0x14);
}


```

---

## Function: FUN_18001a710 (0x18001a710)

```c

ulonglong FUN_18001a710(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong unaff_RBX;
  LPCSTR lpPathName;
  longlong in_R9;
  ulonglong in_R11;
  
  lpPathName = (LPCSTR)((unaff_RBX >> 0x18) + (in_R11 & in_R9 + 0xbU));
  BVar1 = RemoveDirectoryA(lpPathName);
  return CONCAT44(extraout_var,BVar1) & (ulonglong)lpPathName;
}


```

---

## Function: FUN_18001a818 (0x18001a818)

```c

longlong FUN_18001a818(void)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong in_R10;
  undefined1 *puVar9;
  ulonglong in_R11;
  undefined1 *puVar10;
  ulonglong unaff_R12;
  ulonglong uVar11;
  undefined1 local_50 [16];
  longlong local_40;
  longlong lStack_33;
  undefined1 local_28 [16];
  
  lVar8 = 0;
  puVar9 = (undefined1 *)(in_R10 ^ in_R11 & unaff_R12 & unaff_R12);
  uVar7 = 0xca215ffc0aa7b823;
  puVar10 = local_28;
  uVar11 = unaff_R12 + 0x1b;
  uVar4 = 0x92744355769c12d9;
  uVar3 = 0x74694820b31793d1;
  lVar2 = FUN_18001e640();
  if (lVar2 == 0) {
    puVar9 = puVar10 + (longlong)(puVar9 + -1);
    uVar7 = lVar8 + 0xca215ffc0aa7b823;
    puVar10 = puVar10 + (uVar3 ^ uVar11);
    uVar11 = (uVar11 - (unaff_RBX + unaff_R12) ^ uVar4) + lVar8 >> 2;
  }
  uVar3 = (longlong)puVar10 * lVar8;
  lVar2 = 0;
  lVar8 = uVar4 + 5;
  puVar10 = puVar9;
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar3 = uVar3 - (longlong)puVar9;
    puVar9 = (undefined1 *)((ulonglong)puVar9 & uVar7);
    uVar11 = uVar11 - lVar2 | unaff_RBX + unaff_R12;
  }
  plVar5 = &local_40;
  puVar6 = local_50;
  uVar4 = 0x1448726185758f7f;
  if (lVar8 == 0) {
    plVar5 = &lStack_33;
    uVar4 = (ulonglong)puVar9 ^ 0x1448726185758f7f;
    uVar3 = (uVar3 | (ulonglong)plVar5) ^ uVar11 - 0x18 >> 0x16;
  }
  if ((POPCOUNT((ulonglong)plVar5 & 0xff) & 1U) != 0) {
    puVar6 = (undefined1 *)((ulonglong)puVar6 | uVar3 | uVar4);
    plVar5 = (longlong *)((ulonglong)plVar5 ^ (ulonglong)puVar6);
    uVar4 = uVar4 - (longlong)puVar10;
  }
  if (plVar5 != (longlong *)0x0) {
    local_40 = local_40 - uVar4;
    puVar10 = (undefined1 *)((ulonglong)puVar10 | (ulonglong)puVar6);
  }
  return local_40 * ((longlong)puVar10 >> 0x1f);
}


```

---

## Function: FUN_18001a9c8 (0x18001a9c8)

```c

/* WARNING: Removing unreachable block (ram,0x00018001ab87) */

longlong FUN_18001a9c8(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  int _Val;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  ulonglong unaff_R12;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong unaff_R13;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68 [25];
  undefined1 auStack_4f [7];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  longlong local_28;
  
  uVar7 = local_30 ^ unaff_R12;
  puVar11 = local_40 + in_R11;
  uVar9 = (ulonglong)(local_48 + local_28 + in_R11) & uVar7;
  uVar8 = (longlong)(local_48 + local_28) * uVar7;
  lVar10 = ((longlong)puVar11 >> 5) * (longlong)puVar11;
  bVar14 = 0;
  FUN_180051e08();
  lVar12 = (longlong)(auStack_4f + (in_R11 - bVar14)) * uVar9;
  FUN_180027b38();
  lVar12 = lVar12 + lVar10;
  uVar5 = ((unaff_RBX & (ulonglong)local_68 ^ unaff_R13 & in_R11) +
          (ulonglong)
          (SEXT816(lVar10) != SEXT816((longlong)puVar11 >> 5) * SEXT816((longlong)puVar11))) - 0x10
          ^ uVar9;
  uVar6 = uVar5 * 4;
  puVar11 = (undefined1 *)(lVar10 * lVar12);
  uVar13 = lVar12 * uVar9;
  puVar1 = FUN_18004a910();
  if (puVar1 != (undefined1 *)0x0) {
    uVar9 = uVar9 + uVar5 * -4 | (ulonglong)puVar11;
    uVar8 = (uVar8 | (ulonglong)puVar1) + 0x19;
    uVar6 = uVar6 ^ uVar7;
    uVar13 = uVar13 - uVar6;
  }
  uVar9 = uVar9 >> 6;
  uVar2 = FUN_1800253d8();
  uVar5 = 0;
  if (uVar2 != 0) {
    puVar11 = (undefined1 *)(((ulonglong)puVar11 & uVar13) << 0xe);
    uVar13 = uVar13 & uVar9;
    uVar5 = uVar2 | (ulonglong)puVar11;
  }
  uVar5 = uVar7 ^ (ulonglong)puVar1 | uVar5;
  uVar8 = uVar8 & uVar6 >> 4;
  _Val = -0x7ff40c6b;
  lVar10 = FUN_180050940();
  bVar15 = false;
  if (lVar10 != 0) {
    uVar8 = uVar8 - 0x1f;
    uVar9 = uVar9 + (longlong)puVar11 * 0x100000 >> 10;
    lVar10 = lVar10 + -0xd;
    puVar11 = local_68;
    bVar15 = uVar5 >> 0x17 < 0x14;
    uVar5 = (uVar5 >> 0x17) - 0x14;
  }
  uVar5 = uVar5 + 0x1f + (ulonglong)bVar15;
  puVar11 = puVar11 + -10;
  uVar9 = uVar9 + lVar10 + -0x23 + uVar13;
  if ((POPCOUNT(uVar6 >> 0x1c & 0xff) & 1U) == 0) {
    uVar5 = uVar5 | uVar9;
  }
  lVar10 = uVar9 * 8;
  pcVar4 = s_qbrcvypriucscbyjwxkmuvjhm_1800cc41b;
  pcVar3 = strchr(s_qbrcvypriucscbyjwxkmuvjhm_1800cc41b,_Val);
  if (pcVar3 == (char *)0x0) {
    uVar7 = ((ulonglong)puVar11 ^ uVar8) * 0x40;
    uVar5 = uVar5 - lVar10 & uVar7;
    pcVar3 = (char *)(((ulonglong)puVar11 ^ uVar8) * -0x40 | (ulonglong)pcVar4);
    puVar11 = (undefined1 *)
              (uVar7 - (((uVar6 >> 0x1c) + 1 + (ulonglong)((longlong)(uVar9 * 4) < 0)) - uVar8));
  }
  uVar6 = 0;
  if ((longlong)((ulonglong)puVar11 & (ulonglong)auStack_88) < 0) {
    uVar6 = uVar5;
  }
  return ((ulonglong)(pcVar3 + -0x10) ^ uVar6) + 0x15;
}


```

---

## Function: FUN_18001ac60 (0x18001ac60)

```c

/* WARNING: Removing unreachable block (ram,0x00018001ad35) */

void FUN_18001ac60(undefined8 param_1,undefined8 param_2,DWORD param_3)

{
  PHKEY in_stack_ffffffffffffffc8;
  undefined1 local_18 [8];
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0x0,param_3,(REGSAM)local_18,in_stack_ffffffffffffffc8);
  return;
}


```

---

## Function: FUN_18001ad68 (0x18001ad68)

```c

/* WARNING: Removing unreachable block (ram,0x00018001adde) */

undefined8 **** FUN_18001ad68(void)

{
  undefined8 ***local_30 [3];
  
  return local_30;
}


```

---

## Function: FUN_18001b228 (0x18001b228)

```c

undefined8 FUN_18001b228(void)

{
  return 0xb7429ee0e3477d19;
}


```

---

## Function: FUN_18001b2a8 (0x18001b2a8)

```c

void FUN_18001b2a8(void)

{
  FUN_18004b700();
  return;
}


```

---

## Function: FUN_18001b378 (0x18001b378)

```c

void FUN_18001b378(void)

{
  FindFirstFileA((LPCSTR)0xfe0a63378d1467cf,(LPWIN32_FIND_DATAA)0x0);
  return;
}


```

---

## Function: FUN_18001b430 (0x18001b430)

```c

void FUN_18001b430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  ulonglong in_R11;
  ulonglong uVar4;
  bool bVar5;
  
  puVar2 = &DAT_1800bb49d;
  uVar3 = param_3 + 0x16;
  lVar1 = FUN_180034328(&DAT_1800bb49d,&DAT_1800c99e6,uVar3,&DAT_1800ca137);
  bVar5 = false;
  if (lVar1 != 0) {
    uVar4 = in_R11 + 0xb;
    in_R11 = uVar4 - unaff_RBX;
    bVar5 = 0xfffffffffffffff1 < (uVar3 ^ uVar4);
  }
  RemoveDirectoryA((LPCSTR)((longlong)(puVar2 + (-0xf - (ulonglong)bVar5)) * in_R11 >> 4 & in_R11));
  FUN_18002aa00();
  return;
}


```

---

## Function: FUN_18001b528 (0x18001b528)

```c

ulonglong FUN_18001b528(void)

{
  ulonglong unaff_RDI;
  undefined1 local_28 [8];
  
  FUN_18003bd40();
  return unaff_RDI ^ (ulonglong)local_28;
}


```

---

## Function: FUN_18001b5a8 (0x18001b5a8)

```c

void FUN_18001b5a8(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  PUCHAR pbHashObject;
  undefined *puVar3;
  ulonglong in_R10;
  PUCHAR in_stack_ffffffffffffffc8;
  ULONG in_stack_ffffffffffffffd0;
  ULONG in_stack_ffffffffffffffd8;
  
  puVar2 = &stack0xffffffffffffffd0;
  pbHashObject = &DAT_1800cc50b;
  puVar3 = &DAT_1800d0803;
  lVar1 = FUN_180051ff8();
  if (lVar1 != 0) {
    pbHashObject = (PUCHAR)((ulonglong)pbHashObject >> 0x18 | (ulonglong)puVar3);
    puVar2 = puVar2 + (longlong)pbHashObject;
  }
  BCryptCreateHash(&DAT_1800cc513,(BCRYPT_HASH_HANDLE *)((ulonglong)puVar2 ^ in_R10),pbHashObject,
                   (ULONG)puVar3,in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,
                   in_stack_ffffffffffffffd8);
  return;
}


```

---

## Function: FUN_18001b710 (0x18001b710)

```c

void FUN_18001b710(void)

{
  longlong in_R9;
  
  RegisterClassExA((WNDCLASSEXA *)(in_R9 * 0x4f7446066b84190c));
  return;
}


```

---

## Function: FUN_18001b818 (0x18001b818)

```c

longlong FUN_18001b818(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong in_R10;
  
  uVar2 = param_2 + 0x13;
  RemoveDirectoryA((LPCSTR)0x16fc2e18ab7368cf);
  if ((longlong)(in_R10 & uVar2) < 0) {
    unaff_RBX = unaff_RBX - uVar2;
  }
  lVar1 = FUN_1800342b0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  return lVar1 + unaff_RBX;
}


```

---

## Function: FUN_18001b920 (0x18001b920)

```c

void FUN_18001b920(void)

{
  PHKEY unaff_RBP;
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)&DAT_1800c8ffb,(DWORD)&stack0xfffffffffffffff8,
                (REGSAM)&stack0xfffffffffffffff8,unaff_RBP);
  return;
}


```

---

## Function: FUN_18001ba58 (0x18001ba58)

```c

void FUN_18001ba58(void)

{
  FUN_180046d40();
  return;
}


```

---

## Function: FUN_18001bae8 (0x18001bae8)

```c

void FUN_18001bae8(void)

{
  FUN_18002d1e8();
  return;
}


```

---

## Function: FUN_18001bb60 (0x18001bb60)

```c

void FUN_18001bb60(void)

{
  FUN_1800542a8();
  FUN_180026810();
  return;
}


```

---

## Function: FUN_18001bc58 (0x18001bc58)

```c

ulonglong FUN_18001bc58(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  FUN_1800232d8();
  FUN_180045820();
  uVar1 = FUN_18002d268();
  return uVar1 | unaff_RBX * unaff_R12;
}


```

---

## Function: FUN_18001bff0 (0x18001bff0)

```c

/* WARNING: Removing unreachable block (ram,0x00018001c15f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001bff0(void)

{
  undefined1 local_90 [128];
  
  NtClose(local_90,&DAT_1800d080b);
  FUN_180005dd0();
  FUN_180040398();
  return 0xd500303f1f8e19f0;
}


```

---

## Function: FUN_18001c208 (0x18001c208)

```c

undefined8 FUN_18001c208(void)

{
  return 0x149933ad1455c53e;
}


```

---

