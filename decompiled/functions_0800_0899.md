null

Logs:
# Decompiled Functions: index 800-899

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_18003ce78 (0x18003ce78)

```c

/* WARNING: Removing unreachable block (ram,0x00018003cf13) */
/* WARNING: Removing unreachable block (ram,0x00018003cf44) */

undefined8 FUN_18003ce78(void)

{
  return 0;
}


```

---

## Function: FUN_18003cf98 (0x18003cf98)

```c

undefined8 FUN_18003cf98(void)

{
  return 0xf;
}


```

---

## Function: FUN_18003d008 (0x18003d008)

```c

undefined8 FUN_18003d008(void)

{
  return 0;
}


```

---

## Function: FUN_18003d090 (0x18003d090)

```c

void FUN_18003d090(void)

{
  FUN_180042ca0();
  FUN_180046858();
  FUN_180020eb0();
  return;
}


```

---

## Function: FUN_18003d200 (0x18003d200)

```c

void FUN_18003d200(void)

{
  FUN_180055a20();
  FUN_180012d30();
  FUN_180012340();
  return;
}


```

---

## Function: FUN_18003d340 (0x18003d340)

```c

/* WARNING: Removing unreachable block (ram,0x00018003d370) */
/* WARNING: Removing unreachable block (ram,0x00018003d3f4) */

void FUN_18003d340(void)

{
  FUN_18003a730();
  FUN_180046b00();
  return;
}


```

---

## Function: FUN_18003d4e8 (0x18003d4e8)

```c

ulonglong FUN_18003d4e8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RDI;
  undefined *puVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  undefined1 local_30 [8];
  
  if ((unaff_R12 & (ulonglong)auStack_68) == 0) {
    unaff_R12 = unaff_R12 << 0x11;
    unaff_RDI = (unaff_RDI ^ param_3 + unaff_RDI) + 0xf9775482c19cbb7d;
  }
  lVar2 = -0x3f69d026da67105d;
  uVar1 = FUN_18000b218();
  uVar4 = ((longlong)(in_R10 + unaff_R12) >> 4) + 0x18;
  puVar3 = &DAT_1800c2162;
  lVar2 = CreateToolhelp32Snapshot(lVar2 + 0xb,&DAT_1800c1cfb,&DAT_1800c2162,&DAT_1800c673e);
  uVar1 = unaff_RDI ^ uVar1;
  if (lVar2 != 0) {
    uVar4 = uVar4 >> 5;
    in_R11 = in_R11 & (ulonglong)puVar3 & uVar4;
    uVar1 = local_38;
  }
  lVar2 = FUN_18002c008();
  if (lVar2 == 0) {
    uVar4 = uVar4 + 0x14 + in_R11;
    in_R10 = in_R10 ^ uVar1 * 0x100 - 5;
  }
  lVar2 = (in_R10 | uVar4) * (uVar4 & ((in_R11 >> 0x12) - 0x12) + uVar4);
  uVar1 = lVar2 + 0x13;
  if ((longlong)((in_R10 | uVar4) + 0x10 & (ulonglong)auStack_68) < 0) {
    uVar1 = lVar2 + 4U ^ (ulonglong)local_30;
  }
  return uVar1;
}


```

---

## Function: FUN_18003d640 (0x18003d640)

```c

/* WARNING: Removing unreachable block (ram,0x00018003d686) */

undefined8 FUN_18003d640(void)

{
  FUN_18000bf30();
  return 0;
}


```

---

## Function: FUN_18003d710 (0x18003d710)

```c

/* WARNING: Removing unreachable block (ram,0x00018003d7bb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18003d710(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar4;
  longlong unaff_R12;
  undefined1 local_60 [64];
  
  uVar4 = (ulonglong)local_60 | param_3 - in_R11;
  uVar3 = 0;
  uVar1 = FUN_180019da8(param_3 - in_R11,0,0x1800c58a6,param_4 + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uVar1 >> 0x19) - (unaff_RSI + (uVar3 & in_R10));
    unaff_R12 = unaff_R12 - uVar2;
  }
  return uVar2 + 4 + (((ulonglong)(uVar2 < 0x14) + 5 | unaff_R12 - 4U) - 0x14 | uVar4);
}


```

---

## Function: FUN_18003d830 (0x18003d830)

```c

longlong FUN_18003d830(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  LPCSTR unaff_RDI;
  
  BVar1 = RemoveDirectoryA(unaff_RDI);
  return CONCAT44(extraout_var,BVar1) >> 0x16;
}


```

---

## Function: FUN_18003d8a8 (0x18003d8a8)

```c

undefined1 * FUN_18003d8a8(void)

{
  undefined1 local_20 [8];
  
  return local_20;
}


```

---

## Function: FUN_18003d940 (0x18003d940)

```c

void FUN_18003d940(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  LPDWORD unaff_RDI;
  longlong unaff_R13;
  LPDWORD in_stack_ffffffffffffffd8;
  LPDWORD in_stack_ffffffffffffffe0;
  LPBYTE in_stack_ffffffffffffffe8;
  
  RegEnumValueA((HKEY)(-0xb - (ulonglong)((unaff_R13 >> 9) << 0x1c < 0)),0x800c4d73,
                (LPSTR)(param_3 + 0x18),(LPDWORD)((unaff_R13 >> 9) * 0x20000000),
                in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,
                unaff_RDI);
  return;
}


```

---

## Function: FUN_18003d9b8 (0x18003d9b8)

```c

void FUN_18003d9b8(void)

{
  FUN_18000dc58();
  return;
}


```

---

## Function: FUN_18003da10 (0x18003da10)

```c

undefined1 * FUN_18003da10(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  LPCWSTR lpSubKey;
  DWORD unaff_R13D;
  PHKEY in_stack_ffffffffffffffc8;
  undefined1 local_30 [24];
  
  lpSubKey = (LPCWSTR)(param_2 + 0x16);
  lVar3 = 0x216f66931a26d45f;
  RegOpenKeyExW((HKEY)0x216f66931a26d45f,lpSubKey,unaff_R13D,(REGSAM)&stack0xffffffffffffffc8,
                in_stack_ffffffffffffffc8);
  FUN_18004ffe0(lVar3 + 0xd,(longlong)lpSubKey);
  FUN_180007af8();
  FileTimeToSystemTime((FILETIME *)0x447c8c2f6d206db,(LPSYSTEMTIME)((longlong)lpSubKey + 0x1f));
  FUN_18004d808();
  uVar1 = FUN_18000eef0();
  puVar2 = (undefined1 *)0x0;
  if (uVar1 != 0) {
    puVar2 = (undefined1 *)((longlong)in_stack_ffffffffffffffc8 + (longlong)local_30);
  }
  return puVar2;
}


```

---

## Function: FUN_18003dc60 (0x18003dc60)

```c

longlong FUN_18003dc60(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong in_R11;
  undefined1 local_30 [16];
  
  return (in_RAX ^ (ulonglong)local_30) + 0x14 +
         (ulonglong)CARRY8(in_R11 * (in_RAX ^ (ulonglong)local_30),unaff_RDI);
}


```

---

## Function: FUN_18003dd00 (0x18003dd00)

```c

void FUN_18003dd00(void)

{
  FUN_18004b190();
  return;
}


```

---

## Function: FUN_18003dd98 (0x18003dd98)

```c

/* WARNING: Removing unreachable block (ram,0x00018003de3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003dd98(void)

{
  FUN_18003dc60();
  return;
}


```

---

## Function: FUN_18003de60 (0x18003de60)

```c

undefined8 FUN_18003de60(void)

{
  return 0xe111c8df;
}


```

---

## Function: FUN_18003dee8 (0x18003dee8)

```c

/* WARNING: Removing unreachable block (ram,0x00018003e11b) */

longlong FUN_18003dee8(longlong param_1)

{
  LSTATUS LVar1;
  longlong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  LPCSTR lpPathName;
  undefined1 *puVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong lVar8;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68 [7];
  ulonglong local_30 [3];
  
  uVar9 = unaff_R13 | param_1 + 7U;
  uVar6 = unaff_RDI * unaff_RBX;
  if (in_RAX < 0) {
    uVar9 = local_68[0] << 10;
    in_R10 = in_R10 - 0x17;
    uVar6 = uVar6 * 0x8000000;
  }
  uVar2 = FUN_18001cea8();
  uVar5 = unaff_RBX << 0x19;
  if (unaff_RDI + unaff_RSI >> 7 < 0) {
    uVar5 = uVar5 ^ uVar6 ^ uVar2;
  }
  lpPathName = (LPCSTR)0x8cdff2e49199394;
  lVar8 = 0x8cdff2e49199394;
  lVar3 = FUN_180040a50(0x8cdff2e49199394,0x6b182be80d1995a5,local_68,0x8cdff2e49199394);
  if (lVar3 != 0) {
    lpPathName = lpPathName + -lVar8;
    uVar6 = (uVar9 ^ uVar5) + (in_R10 - 0x1c);
    in_R10 = in_R10 - 0x1c & uVar6 & uVar6;
    uVar5 = uVar5 >> 2 | in_R10;
  }
  RemoveDirectoryA(lpPathName);
  uVar2 = (longlong)local_30 * ((longlong)uVar5 >> 0x1a);
  uVar9 = ((longlong)uVar5 >> 0x1a) + local_30[0];
  uVar5 = in_R10 ^ local_30[0] & 0x49e0cffeb9d7b2ef;
  uVar10 = (local_30[0] & 0x49e0cffeb9d7b2ef) >> 0x1b;
  puVar4 = local_78;
  plVar7 = local_68;
  uVar6 = FUN_180023230();
  if (uVar6 == 0) {
    uVar9 = uVar9 - (longlong)plVar7;
    uVar6 = -(longlong)(puVar4 + 0x12);
    in_R11 = uVar10;
  }
  LVar1 = RegOpenKeyW((HKEY)0x0,(LPCWSTR)&DAT_1800c16fe,(PHKEY)0x0);
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar2 = local_70 + 0x16;
    uVar5 = uVar5 - ((uVar10 - uVar9) - (((uVar6 >> 0xf) - 3) - (ulonglong)(uVar10 < uVar9)));
  }
  return (CONCAT44(extraout_var,LVar1) + -0x1c) * 0x800 + (in_R11 | uVar5 + in_R11 | uVar2) + -0x17;
}


```

---

## Function: FUN_18003e180 (0x18003e180)

```c

void FUN_18003e180(void)

{
  return;
}


```

---

## Function: FUN_18003e1e0 (0x18003e1e0)

```c

void FUN_18003e1e0(void)

{
  return;
}


```

---

## Function: FUN_18003e260 (0x18003e260)

```c

void FUN_18003e260(void)

{
  return;
}


```

---

## Function: FUN_18003e2f8 (0x18003e2f8)

```c

void FUN_18003e2f8(void)

{
  BOOL local_28;
  
  CreateEventA((LPSECURITY_ATTRIBUTES)&DAT_1800cfc75,0,local_28,(LPCSTR)0x0);
  RemoveDirectoryA((LPCSTR)0x31bba4a37cdf24dd);
  FUN_18002ed60();
  return;
}


```

---

## Function: FUN_18003e488 (0x18003e488)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003e488(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined1 *unaff_RBX;
  undefined1 local_88 [96];
  
  BVar1 = CloseServiceHandle((SC_HANDLE)&DAT_1800d4a8a);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    unaff_RBX = local_88;
  }
  _aligned_malloc(0,(size_t)unaff_RBX);
  _DAT_98cdc5f3 = 0x18003e5d4;
  FUN_1800120a0();
  _DAT_98cdc5f3 = 0x18003e60f;
  FUN_180039240();
  _DAT_98cdc5f3 = 0x18003e660;
  FUN_180038688();
  return;
}


```

---

## Function: FUN_18003e688 (0x18003e688)

```c

longlong FUN_18003e688(void)

{
  longlong in_RAX;
  
  return in_RAX + 0x1d;
}


```

---

## Function: FUN_18003e718 (0x18003e718)

```c

/* WARNING: Removing unreachable block (ram,0x00018003e928) */

void FUN_18003e718(void)

{
  longlong lVar1;
  undefined1 *in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  undefined1 local_90 [48];
  longlong local_60;
  undefined1 local_50 [32];
  
  lVar1 = FUN_18000d698();
  if (lVar1 == 0) {
    unaff_R13 = unaff_R13 | in_R11;
  }
  if (local_60 != 0) {
    in_R10 = local_50;
  }
  lVar1 = FUN_180010200();
  if (lVar1 == 0) {
    unaff_R13 = unaff_R13 & (ulonglong)in_R10;
  }
  CreateToolhelp32Snapshot(0x5c93ca608441f3e5,0,&DAT_1800ca5db,unaff_R13 + 0xd);
  FUN_18003a6d0();
  FUN_18004a6e8();
  _endthreadex((uint)local_90);
  FUN_18001bff0();
  return;
}


```

---

## Function: FUN_18003e9c0 (0x18003e9c0)

```c

/* WARNING: Removing unreachable block (ram,0x00018003eb32) */
/* WARNING: Removing unreachable block (ram,0x00018003eb8f) */

void FUN_18003e9c0(void)

{
  SetWindowTextA((HWND)0x3c52d9994882ad12,(LPCSTR)0x63aa37f310630c87);
  return;
}


```

---

## Function: FUN_18003ebc0 (0x18003ebc0)

```c

void FUN_18003ebc0(void)

{
  return;
}


```

---

## Function: FUN_18003ec38 (0x18003ec38)

```c

longlong FUN_18003ec38(void)

{
  longlong lVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  undefined1 auStack_6c [20];
  undefined8 local_58;
  undefined1 local_50 [8];
  ulonglong local_48 [5];
  
  lVar4 = -0x1a7be2f5c9425159;
  uVar5 = 0xd067ad1259cf8fdf;
  puVar7 = local_70;
  puVar9 = local_48;
  lVar1 = FUN_180054558(0xe5841d0a36bdaea7,0xd067ad1259cf8fdf,(ulonglong)puVar7,(longlong)puVar9);
  if (lVar1 != 0) {
    puVar7 = puVar7 + 0x1e;
    puVar9 = (ulonglong *)(auStack_6c + in_R10);
    uVar5 = uVar5 | (ulonglong)puVar9;
    unaff_R12 = unaff_R12 + lVar4 * 0x2000000 + 0xf;
  }
  uVar6 = unaff_RSI | unaff_R13 + 9U;
  uVar2 = auStack_6c._4_8_ + 4;
  if ((longlong)(uVar5 ^ unaff_R13 + 9U) < 0) {
    uVar2 = uVar2 + uVar6;
    puVar9 = (ulonglong *)((ulonglong)puVar9 ^ (longlong)(puVar7 + 0x1f) * 0x10);
    in_R10 = in_R10 & uVar6;
  }
  lVar1 = (longlong)puVar9 + -0x15;
  uVar5 = (in_R10 - 5) - (ulonglong)(puVar9 < (ulonglong *)0x15);
  if ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) {
    uVar5 = (longlong)&local_58 + 5;
  }
  puVar7 = local_78;
  LVar3 = SendMessageA((HWND)&DAT_1800c5e9c,(UINT)puVar7,(WPARAM)puVar7,lVar1);
  if (LVar3 == 0) {
    puVar7 = (undefined1 *)(((ulonglong)puVar7 | uVar6) << 1);
    uVar5 = -(unaff_R12 >> 0x1e & (lVar1 - local_58 ^ uVar6));
  }
  uVar8 = (ulonglong)puVar7 & uVar5;
  uVar10 = (longlong)local_50 >> 0x11;
  uVar2 = 0x85da5efdaf9233d0;
  lVar1 = CreateToolhelp32Snapshot(0x85da5efdaf9233d0,0xd041795874e8e731);
  if (lVar1 == 0) {
    uVar2 = uVar2 & uVar5;
    uVar6 = (uVar6 & local_48[0]) + (uVar8 >> 1 & uVar5);
    local_48[0] = local_48[0] & (ulonglong)local_50;
  }
  uVar10 = uVar10 | (ulonglong)local_50;
  uVar8 = (local_48[0] & (longlong)uVar2 >> 0xd) - 0x547fdf3c;
  uVar5 = (ulonglong)local_50 >> 3;
  uVar2 = uVar5 | uVar10;
  if (uVar5 == 0x547fdf24) {
    uVar2 = uVar2 + ((longlong)uVar6 >> 0x17 & uVar8) + 0xf2be6838918c81f2;
  }
  if ((longlong)(uVar10 + 0x15) < 0) {
    uVar2 = uVar2 + local_80 * 0x400000 * uVar8 * 4;
  }
  return uVar2 - 0x10;
}


```

---

## Function: FUN_18003eed8 (0x18003eed8)

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_18003eed8(void)

{
  FUN_18000b218();
  FindFirstFileA(&DAT_1800d1d16,(LPWIN32_FIND_DATAA)0x1882df8bb7e94f72);
  FUN_180022f90();
  FUN_180016490();
  FUN_1800329c0();
  FUN_18000b330();
  return 0;
}


```

---

## Function: FUN_18003f190 (0x18003f190)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18003f190(void)

{
  longlong in_R10;
  undefined1 local_80 [88];
  
  RemoveDirectoryA((LPCSTR)0x0);
  in_R10 = in_R10 << 5;
  FUN_1800198d0(0,(longlong)local_80);
  FUN_180027bb8();
  return in_R10;
}


```

---

## Function: FUN_18003f2f0 (0x18003f2f0)

```c

/* WARNING: Removing unreachable block (ram,0x00018003f330) */

undefined8 FUN_18003f2f0(void)

{
  return 0x4636831c752808dd;
}


```

---

## Function: FUN_18003f378 (0x18003f378)

```c

void FUN_18003f378(void)

{
  FUN_180001438();
  return;
}


```

---

## Function: FUN_18003f400 (0x18003f400)

```c

void FUN_18003f400(void)

{
  FUN_1800245c0();
  return;
}


```

---

## Function: FUN_18003f470 (0x18003f470)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003f470(void)

{
  FUN_1800104c0();
  return;
}


```

---

## Function: FUN_18003f520 (0x18003f520)

```c

longlong FUN_18003f520(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  
  puVar2 = (undefined1 *)0xcdbf94cd1fbb5b4;
  uVar3 = unaff_R13 + 9;
  uVar1 = _ftelli64((FILE *)0xcdbf94cd1fbb5b4);
  if (uVar1 == 0) {
    in_R10 = in_R10 - unaff_R13;
    puVar2 = &stack0xffffffffffffffd8;
    uVar1 = unaff_RDI | uVar3;
  }
  return ((uVar1 - 0x1f) -
         (ulonglong)(0xfffffffffffffff4 < ((ulonglong)puVar2 & unaff_R13 ^ in_R10))) * 0x8000;
}


```

---

## Function: FUN_18003f5c8 (0x18003f5c8)

```c

/* WARNING: Removing unreachable block (ram,0x00018003f658) */

void FUN_18003f5c8(undefined8 param_1,longlong param_2)

{
  FindFirstFileA((LPCSTR)0xe06878b2c37718b6,(LPWIN32_FIND_DATAA)(param_2 + 10));
  return;
}


```

---

## Function: FUN_18003f678 (0x18003f678)

```c

undefined1 * FUN_18003f678(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  undefined1 *puVar2;
  ulonglong unaff_RBX;
  int unaff_EDI;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong uVar4;
  ulonglong unaff_R12;
  ulonglong uVar5;
  PHKEY in_stack_ffffffffffffffd8;
  
  uVar4 = in_R10 + 0xad2a578be6cbdcc3;
  uVar5 = unaff_R12 ^ unaff_RBX;
  uVar3 = (ulonglong)&stack0xffffffffffffffd8 |
          (ulonglong)&stack0xffffffffffffffd8 ^ 0x88d53bd376e53771;
  LVar1 = RegOpenKeyExW((HKEY)&DAT_1800d4b62,(LPCWSTR)0x52d5a8741934233d,
                        ((int)(param_3 >> 0x1d) * 0x1934233d - unaff_EDI) - (int)uVar4,(REGSAM)uVar3
                        ,in_stack_ffffffffffffffd8);
  if (CONCAT44(extraout_var,LVar1) == 0) {
    uVar3 = uVar3 & uVar5;
    uVar5 = uVar5 ^ uVar4;
  }
  FUN_180010be0();
  puVar2 = (undefined1 *)FUN_18003b3e0();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(uVar5 + uVar3);
  }
  return puVar2;
}


```

---

## Function: FUN_18003f798 (0x18003f798)

```c

longlong FUN_18003f798(void)

{
  longlong lVar1;
  longlong in_R10;
  
  lVar1 = FUN_180030948();
  return lVar1 - in_R10;
}


```

---

## Function: FUN_18003f808 (0x18003f808)

```c

longlong FUN_18003f808(void)

{
  longlong in_RAX;
  
  return in_RAX + 0x16;
}


```

---

## Function: FUN_18003f878 (0x18003f878)

```c

longlong FUN_18003f878(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180025c00();
  return (uVar1 >> 0xe) << 10;
}


```

---

## Function: FUN_18003f8d8 (0x18003f8d8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18003f8d8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  _DAT_c9a81ec2 = 0x18003f937;
  uVar1 = FUN_18003d200();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 >> 2;
  }
  return uVar2;
}


```

---

## Function: FUN_18003f998 (0x18003f998)

```c

undefined1 * FUN_18003f998(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 local_48 [40];
  
  RemoveDirectoryA((LPCSTR)0x497dc77c99cd1b8b);
  FUN_18003d9b8();
  RemoveDirectoryA((LPCSTR)0xff36a67feac4d796);
  puVar2 = &DAT_1800c52bb;
  FUN_180012ba8();
  puVar1 = FUN_1800420a0();
  return puVar1 + -(longlong)(local_48 + -(longlong)puVar2);
}


```

---

## Function: FUN_18003fc80 (0x18003fc80)

```c

longlong FUN_18003fc80(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong unaff_R13;
  
  lVar1 = -0x5c2e6743e1a10ead;
  puVar2 = &stack0xfffffffffffffff8;
  FUN_18003ce78();
  return (((ulonglong)puVar2 | 0xe2caffde) - 0xc) -
         (ulonglong)(((ulonglong)(unaff_R13 * (lVar1 + -0xf)) >> 0x23 & 1) != 0);
}


```

---

## Function: FUN_18003fd28 (0x18003fd28)

```c

undefined8 FUN_18003fd28(void)

{
  undefined8 local_18;
  
  RemoveDirectoryA((LPCSTR)0x7c624436c6626d4b);
  return local_18;
}


```

---

## Function: FUN_18003fdc8 (0x18003fdc8)

```c

/* WARNING: Removing unreachable block (ram,0x00018003fecb) */

void FUN_18003fdc8(void)

{
  FUN_18001b920();
  return;
}


```

---

## Function: FUN_18003fee0 (0x18003fee0)

```c

undefined1 * FUN_18003fee0(void)

{
  undefined1 auStack_6d [69];
  
  FUN_180047c00();
  return auStack_6d;
}


```

---

## Function: FUN_18003fff8 (0x18003fff8)

```c

void FUN_18003fff8(void)

{
  longlong lVar1;
  undefined *puVar2;
  ulonglong in_R11;
  longlong local_58;
  
  puVar2 = &DAT_1800ca59b;
  FUN_18000c480();
  in_R11 = (ulonglong)puVar2 | in_R11;
  lVar1 = FUN_180013a30();
  if (lVar1 != 0) {
    in_R11 = in_R11 - local_58;
  }
  FUN_18004d0d8(in_R11 + 0xe);
  return;
}


```

---

## Function: FUN_180040140 (0x180040140)

```c

longlong FUN_180040140(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  LPCSTR in_R10;
  longlong in_R11;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong local_40;
  longlong local_28;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  puVar5 = local_18;
  uVar3 = local_40 ^ (ulonglong)puVar5;
  uVar6 = in_R11 - 2U & unaff_R13 - 0xdU;
  uVar4 = (longlong)((local_10 | in_R11 - 2U) << 8) >> 0x19;
  BVar1 = SetWindowTextA((HWND)0x0,in_R10);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar6 = (uVar6 ^ (ulonglong)puVar5) & uVar3 & unaff_R13 - 0xdU;
    uVar4 = ((uVar4 & (ulonglong)puVar5) - uVar3) + 0x19;
  }
  lVar2 = FUN_1800495c0();
  return lVar2 + uVar4 + -2 + ((local_28 + -0xd) * lVar2 * 0x10 ^ (uVar6 >> 0x24) - local_28);
}


```

---

## Function: FUN_180040258 (0x180040258)

```c

/* WARNING: Removing unreachable block (ram,0x00018004033f) */

void FUN_180040258(void)

{
  return;
}


```

---

## Function: FUN_180040398 (0x180040398)

```c

void FUN_180040398(void)

{
  FUN_180052be8();
  FUN_1800460c0();
  FUN_180026810();
  return;
}


```

---

## Function: FUN_1800404c0 (0x1800404c0)

```c

undefined8 FUN_1800404c0(void)

{
  _aligned_free((void *)0xe9ca07c8ccd09625);
  return 0x84d;
}


```

---

## Function: FUN_1800405a0 (0x1800405a0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800405f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800405a0(void)

{
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_R9;
  LPCSTR lpPathName;
  undefined1 *puVar4;
  ulonglong in_R11;
  longlong lVar5;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar6;
  ulonglong local_58;
  longlong local_40;
  undefined1 local_38 [16];
  longlong local_28;
  
  lVar3 = 0;
  lpPathName = (LPCSTR)(in_R9 + 0x16);
  lVar5 = (in_R11 - 0x10) - (ulonglong)(0xffffffffffffffe9 < in_R9);
  uVar2 = unaff_RDI + 0x15;
  lVar1 = (unaff_RSI >> 0x13) * local_40;
  if (lVar1 < 0) {
    uVar6 = ((unaff_R13 | unaff_RBX) -
            (ulonglong)(in_R11 < 0x10 || in_R11 - 0x10 < (ulonglong)(0xffffffffffffffe9 < in_R9))) -
            0x1f;
    lVar1 = lVar1 + uVar6;
    uVar2 = uVar2 ^ uVar6 ^
            unaff_R12 + ((ulonglong)(local_28 * (longlong)lpPathName) >> 0x1d ^ 0x183a322140784a40);
    lVar5 = lVar5 - uVar2;
  }
  if ((POPCOUNT(uVar2 & 0xff) & 1U) != 0) {
    lpPathName = (LPCSTR)(local_58 ^ lVar5 - lVar1);
  }
  puVar4 = local_38;
  RemoveDirectoryA(lpPathName);
  _DAT_cd61d71e = 0x1800406e0;
  FUN_180029230(0,puVar4,lVar3);
  FUN_18000f9b0();
  return;
}


```

---

## Function: FUN_180040718 (0x180040718)

```c

/* WARNING: Removing unreachable block (ram,0x0001800407ce) */

void FUN_180040718(void)

{
  FUN_1800558f0();
  RemoveDirectoryA((LPCSTR)0x3e12d1f0d6d75a67);
  FUN_18003a620();
  return;
}


```

---

## Function: FUN_180040868 (0x180040868)

```c

undefined1 * FUN_180040868(void)

{
  undefined *puVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  
  puVar1 = &DAT_1800d51fa;
  if ((longlong)(unaff_R13 & unaff_RBP) < 0) {
    puVar1 = &DAT_1800d51fa + -(unaff_R13 | 0xcf01ca0318ef8325);
  }
  CreateToolhelp32Snapshot(local_40,puVar1);
  return local_38;
}


```

---

## Function: FUN_180040900 (0x180040900)

```c

undefined1 * FUN_180040900(void)

{
  undefined1 auStack_41 [33];
  
  FUN_180012488();
  return auStack_41;
}


```

---

## Function: FUN_180040998 (0x180040998)

```c

/* WARNING: Removing unreachable block (ram,0x0001800409c4) */

undefined8 FUN_180040998(void)

{
  return 0x6f7b8f55403e1637;
}


```

---

## Function: FUN_180040a50 (0x180040a50)

```c

/* WARNING: Removing unreachable block (ram,0x000180040ac1) */

void FUN_180040a50(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong in_R10;
  
  uVar2 = (-(ulonglong)(0x3fbee1ff9c814a1e < (ulonglong)(0xfffffffffffffff4 < param_2)) -
          (ulonglong)(0xfffffffffffffff4 < param_2)) + 0x3fbee1ff9c814a2b;
  puVar3 = &DAT_1800c52c3;
  lVar4 = param_4 + 0x15;
  lVar1 = FUN_18002fec8();
  if (lVar1 == 0) {
    uVar2 = uVar2 & in_R10;
    puVar3 = puVar3 + -uVar2;
  }
  FUN_180014400(uVar2 + 0x13,(longlong)&stack0x00000000,puVar3 + 8,lVar4);
  RemoveDirectoryA(&DAT_1800d4c22);
  return;
}


```

---

## Function: FUN_180040b28 (0x180040b28)

```c

ulonglong FUN_180040b28(void)

{
  BOOL BVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong in_R9;
  
  uVar2 = (in_RAX >> 0x1b) + in_R9;
  if (&stack0x00000000 == (undefined1 *)0x28) {
    uVar2 = uVar2 | unaff_RSI;
    unaff_RSI = unaff_RSI - 8;
  }
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  uVar3 = CONCAT44(extraout_var,BVar1);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    uVar3 = unaff_RSI | uVar2;
  }
  return uVar3;
}


```

---

## Function: FUN_180040bf0 (0x180040bf0)

```c

void FUN_180040bf0(void)

{
  undefined1 local_28 [24];
  
  WSACleanup();
  EnumWindows((WNDENUMPROC)&DAT_1800c2202,(LPARAM)local_28);
  FUN_180001720();
  return;
}


```

---

## Function: FUN_180040d68 (0x180040d68)

```c

void FUN_180040d68(undefined8 param_1,undefined8 param_2,longlong param_3,void *param_4)

{
  ulonglong uVar1;
  HKEY hKey;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  void *_StartAddress;
  ulonglong uVar5;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar6;
  uint in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  uint *in_stack_ffffffffffffff90;
  ulonglong local_48;
  
  uVar4 = param_3 + 5;
  if (unaff_RDI != 0xbc9ac728b39e3d30) {
    unaff_R12 = unaff_R12 + 0x1d;
  }
  uVar1 = 0;
  uVar2 = unaff_RSI;
  FUN_180016490();
  uVar6 = unaff_R13 - 0xb;
  uVar2 = uVar2 & uVar1;
  uVar3 = unaff_RSI + 0xf + (ulonglong)CARRY8(uVar2,unaff_RSI);
  if ((uVar6 & (ulonglong)&stack0xfffffffffffffff8) != 0) {
    unaff_RDI = unaff_RDI + CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88);
    uVar3 = uVar3 & uVar4 & unaff_R12;
    uVar1 = uVar1 & unaff_RDI;
  }
  uVar4 = (uVar4 & unaff_R12) + 0xb;
  uVar3 = ((longlong)((uVar3 ^ unaff_RDI) << 0xc) >> 7 & uVar6) - unaff_RDI;
  uVar5 = uVar4 & local_48;
  hKey = (HKEY)((uVar1 >> 0x1e) - uVar5);
  uVar4 = (uVar2 + unaff_RSI & uVar6 + uVar4) + 0x18 >> 6;
  if ((uVar5 & uVar4) != 0) {
    local_48 = local_48 - 8;
    uVar3 = uVar3 - (longlong)hKey;
    uVar4 = uVar4 + 0x1a;
  }
  _StartAddress = (void *)(local_48 - uVar5 * uVar3);
  RegOpenKeyExW(hKey,(LPCWSTR)(uVar4 & uVar3),(DWORD)_StartAddress,(REGSAM)param_4,
                (PHKEY)CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88));
  _beginthreadex(_StartAddress,(uint)hKey,_StartAddress,param_4,in_stack_ffffffffffffff88,
                 in_stack_ffffffffffffff90);
  FUN_180044a38();
  FUN_180019148();
  return;
}


```

---

## Function: FUN_180040f40 (0x180040f40)

```c

longlong FUN_180040f40(void)

{
  longlong in_RAX;
  ulonglong in_R11;
  
  return (in_RAX + -0x13) - (ulonglong)((in_R11 >> 0x31 & 1) != 0);
}


```

---

## Function: FUN_180040fa0 (0x180040fa0)

```c

ulonglong FUN_180040fa0(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  LPBYTE unaff_R12;
  LPDWORD unaff_R13;
  LPDWORD unaff_retaddr;
  LPDWORD in_stack_ffffffffffffffe8;
  
  LVar1 = RegEnumValueA((HKEY)0x35f598032bdb2ae0,(DWORD)&stack0xfffffffffffffff8,&DAT_1800ca126,
                        (LPDWORD)&DAT_1800cd98e,in_stack_ffffffffffffffe8,unaff_R13,unaff_R12,
                        unaff_retaddr);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (uVar2 == 0) {
    uVar2 = -(longlong)&stack0xffffffffffffffe8;
  }
  return uVar2 >> 5;
}


```

---

## Function: FUN_180041050 (0x180041050)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180041050(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  longlong in_R10;
  WCHAR aWStack_37 [3];
  undefined1 local_30 [16];
  
  _DAT_a196f8cc20b563d7 = 0x1800410b8;
  CreateProcessW((LPCWSTR)(local_30 + (unaff_RDI - 7U)),
                 (LPWSTR)((in_R10 + 0x5670520dfdcf3456) -
                         (ulonglong)CARRY8((ulonglong)local_30,unaff_RDI - 7U)),
                 (LPSECURITY_ATTRIBUTES)(param_3 + 0x12),(LPSECURITY_ATTRIBUTES)&DAT_1800cac7d,
                 BRama196f8cc20b563ff,DRama196f8cc20b56407,pvRama196f8cc20b5640f,
                 _DAT_a196f8cc20b56417,_DAT_a196f8cc20b5641f,_DAT_a196f8cc20b56427);
  return 0;
}


```

---

## Function: FUN_1800410d8 (0x1800410d8)

```c

longlong FUN_1800410d8(void)

{
  longlong lVar1;
  
  FUN_180035770();
  lVar1 = FUN_180028cb0();
  return lVar1 + -9;
}


```

---

## Function: FUN_1800411a0 (0x1800411a0)

```c

undefined8 FUN_1800411a0(void)

{
  return 0x3e32799d08c414f1;
}


```

---

## Function: FUN_180041210 (0x180041210)

```c

void FUN_180041210(void)

{
  return;
}


```

---

## Function: FUN_180041298 (0x180041298)

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_180041298(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined4 extraout_var;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  uint uVar8;
  int iVar9;
  DWORD ulOptions;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong in_R11;
  uint unaff_R12D;
  uint uVar14;
  longlong unaff_R13;
  undefined1 *puVar15;
  undefined1 local_150 [112];
  undefined8 uStackY_e0;
  PHKEY in_stack_ffffffffffffff48;
  ulonglong local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [104];
  
  puVar10 = local_80;
  puVar12 = local_70;
  puVar15 = (undefined1 *)(unaff_R13 << 3 ^ unaff_RBX);
  uVar7 = param_2 + 9U >> 0x1a;
  uVar14 = unaff_R12D ^ (uint)unaff_RDI;
  if (0 < (longlong)((ulonglong)puVar15 & unaff_RBP)) {
    puVar12 = (undefined1 *)((ulonglong)puVar12 | unaff_RBX);
    puVar15 = puVar15 + (longlong)puVar12;
    unaff_RDI = unaff_RDI - uVar7;
  }
  puVar5 = &DAT_1800c220a;
  uStackY_e0 = 0x1800412fc;
  puVar3 = (undefined1 *)FUN_18000f8a8(&DAT_1800c220a);
  if (puVar3 == (undefined1 *)0x0) {
    unaff_RDI = unaff_RDI + 0xe;
    puVar3 = (undefined1 *)((ulonglong)puVar15 ^ unaff_RDI);
    unaff_RBX = unaff_RBX + 0x19;
    uVar14 = uVar14 - 3;
    puVar10 = (undefined1 *)((ulonglong)puVar10 >> 0x13);
    uVar7 = (uVar7 | (ulonglong)puVar12) + 7;
    puVar15 = puVar3;
  }
  uVar13 = (ulonglong)puVar12 | unaff_RBX;
  uVar8 = (int)puVar10 + (int)uVar13;
  if ((longlong)(uVar13 & ((ulonglong)puVar5 ^ (ulonglong)(puVar3 + uVar13) ^ uVar7)) < 0) {
    in_R11 = (in_R11 | unaff_RDI) + unaff_RBX;
    uVar8 = uVar8 + 0x19;
  }
  iVar9 = (uVar8 ^ (uint)((ulonglong)(puVar3 + uVar13) ^ uVar7)) + 3;
  puVar10 = local_150;
  uVar4 = 0;
  uVar8 = 0xe5e87241;
  uStackY_e0 = 0x1800413cd;
  BVar2 = RemoveDirectoryA((LPCSTR)0x3ac7ed6e5e87241);
  if (CONCAT44(extraout_var,BVar2) != 0) {
    iVar9 = iVar9 + 0x17;
    local_a0 = local_a0 - (longlong)puVar10;
    uVar8 = uVar8 & uVar4;
  }
  uVar11 = (int)((ulonglong)puVar10 >> 9) - 0x18;
  uVar4 = 0;
  iVar6 = 0;
  iVar9 = iVar9 + 0x13;
  uStackY_e0 = 0x180041413;
  puVar10 = FUN_180011520();
  if (puVar10 == (undefined1 *)0x0) {
    uVar1 = uVar8 - uVar14;
    uVar8 = uVar1 | uVar11;
    uVar4 = uVar4 - 10 & uVar8;
    local_a0 = local_a0 | (ulonglong)(puVar15 + 5) ^ in_R11;
    uVar14 = uVar14 ^ uVar1 | (uint)local_80;
  }
  uVar8 = uVar8 ^ iVar6 + iVar9;
  uVar14 = uVar14 ^ uVar8;
  if (0 < (longlong)local_80) {
    uVar8 = uVar8 ^ (uint)local_a0;
    uVar14 = uVar14 - uVar4;
  }
  puVar5 = &DAT_1800d4196;
  ulOptions = 0x800c2372;
  uVar4 = (uint)local_90;
  uStackY_e0 = 0x180041499;
  FindFirstFileA(&DAT_1800c2372,(LPWIN32_FIND_DATAA)&DAT_1800d4196);
  uStackY_e0 = 0x1800414d2;
  RegOpenKeyExW((HKEY)&DAT_1800c8fe8,(LPCWSTR)((longlong)puVar5 * local_a0),ulOptions,
                (uVar4 & uVar14) - uVar8,in_stack_ffffffffffffff48);
  return;
}


```

---

## Function: FUN_180041508 (0x180041508)

```c

undefined8 FUN_180041508(void)

{
  return 0x334559bf7c9c2630;
}


```

---

## Function: FUN_180041640 (0x180041640)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800417a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180041640(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int unaff_EBX;
  undefined *puVar3;
  PHKEY in_stack_ffffffffffffffa8;
  
  RegOpenKeyExW((HKEY)(param_1 + 0x16),(LPCWSTR)0x0,0x800d41c6,unaff_EBX + 0xe,
                in_stack_ffffffffffffffa8);
  FUN_1800118b0();
  puVar3 = &DAT_1800cd3f1;
  _DAT_9abc2683ce026432 = 0x180041815;
  uVar1 = FUN_180042ab8();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 ^ (ulonglong)puVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180041860 (0x180041860)

```c

longlong FUN_180041860(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_R15;
  
  lVar1 = FUN_180033ee0();
  return (lVar1 - unaff_RSI) + unaff_R15;
}


```

---

## Function: FUN_180041920 (0x180041920)

```c

void FUN_180041920(void)

{
  FUN_18001cb28();
  return;
}


```

---

## Function: FUN_1800419c0 (0x1800419c0)

```c

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1800419c0(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong in_R10;
  undefined1 *puVar13;
  longlong in_R11;
  ulonglong uVar14;
  undefined1 local_188 [16];
  ulonglong local_178;
  ulonglong local_168;
  undefined8 uStack_110;
  undefined1 local_d0 [16];
  ulonglong local_c0 [18];
  
  uVar14 = in_R11 + 9;
  lVar8 = unaff_RSI + -6;
  uVar5 = 0x446d6466833ec1d7;
  uVar7 = 0x71a7093825009c92;
  pcVar3 = s__Z_GBeatri_1800c098d + 5;
  uStack_110 = 0x180041a26;
  BVar1 = RemoveDirectoryA(s__Z_GBeatri_1800c098d + 5);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    pcVar3 = (char *)((longlong)pcVar3 << 8);
    uVar7 = 0x940272480000000;
    lVar8 = unaff_RSI + 0x10;
    uVar14 = uVar14 ^ uVar5;
    in_R10 = local_168;
  }
  uVar5 = (lVar8 + (param_1 + 0x1b) * 0x43fbf7c2) * 0x200 ^ uVar14;
  puVar13 = (undefined1 *)((longlong)(in_R10 - 0x11) >> 0x1e & (ulonglong)pcVar3);
  uStack_110 = 0x180041a85;
  uVar2 = FUN_18004a2b0((longlong)local_d0);
  if (uVar2 == 0) {
    puVar13 = local_188;
    uVar14 = uVar14 - 1;
    uVar5 = local_c0[0];
  }
  uStack_110 = 0x180041acc;
  FUN_180045ee8();
  puVar4 = local_d0;
  lVar10 = 0;
  uStack_110 = 0x180041ae0;
  FUN_18004e3b8();
  uVar11 = lVar10 - uVar7 | uVar14;
  uVar9 = (lVar8 >> 7) - 0x1c;
  uVar2 = ((ulonglong)puVar4 & uVar11 ^ uVar9) + 0x1e;
  puVar6 = &DAT_1800d3080;
  uStack_110 = 0x180041b1d;
  lVar8 = CreateToolhelp32Snapshot();
  if (lVar8 == 0) {
    puVar13 = puVar13 + -uVar5;
    puVar6 = (undefined *)((ulonglong)puVar6 & uVar7);
    uVar9 = uVar9 - uVar14;
  }
  puVar13 = puVar13 + uVar9;
  uVar12 = (uVar11 ^ (ulonglong)puVar13) - 0xc;
  uVar11 = 0xc39a6e6d;
  uVar7 = uVar2 & uVar14 | uVar12;
  uVar5 = (local_168 ^ (ulonglong)puVar6) * (longlong)puVar13;
  uVar2 = (uVar9 - 0x1c) -
          (ulonglong)
          (SEXT816((longlong)uVar5) !=
          SEXT816((longlong)(local_168 ^ (ulonglong)puVar6)) * SEXT816((longlong)puVar13));
  if ((uVar14 + 0x15 & 0xc39a6e6d) != 0) {
    uVar2 = uVar2 ^ uVar14 + 0x15;
    uVar11 = 0xc39a6e6d - uVar7 | uVar12;
  }
  if ((uVar12 & uVar7) == 0) {
    uVar2 = uVar2 + (longlong)(puVar6 + 6);
    puVar13 = (undefined1 *)((ulonglong)puVar13 & uVar11 - uVar7);
    uVar11 = (uVar11 - uVar7 | uVar7) - (longlong)(puVar6 + 6);
    uVar5 = (local_178 & 0x1fffffffffffff) << 10;
  }
  if ((POPCOUNT((ulonglong)puVar13 & uVar11 - 6 & 0xff) & 1U) == 0) {
    uVar5 = uVar5 & uVar2;
  }
  return uVar5 | (ulonglong)local_c0;
}


```

---

## Function: FUN_180041c20 (0x180041c20)

```c

ulonglong FUN_180041c20(void)

{
  int in_EAX;
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined *puVar3;
  DWORD in_R10D;
  ulonglong in_R11;
  PHKEY in_stack_ffffffffffffffd8;
  WCHAR local_20 [12];
  
  puVar3 = &DAT_1800c3d74;
  LVar1 = RegOpenKeyExW((HKEY)&DAT_1800c3d74,local_20,in_R10D,in_EAX + 6,in_stack_ffffffffffffffd8);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (puVar3 != (undefined *)0xffffffffffffffe4 && -1 < (longlong)(puVar3 + 0x1c)) {
    uVar2 = uVar2 << 0xb & in_R11;
  }
  return uVar2;
}


```

---

## Function: FUN_180041ca8 (0x180041ca8)

```c

void FUN_180041ca8(void)

{
  FUN_180010000();
  return;
}


```

---

## Function: FUN_180041d58 (0x180041d58)

```c

void FUN_180041d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  ulonglong in_R10;
  
  CreateToolhelp32Snapshot
            (0x821608270b188d66,(longlong)&DAT_1800c8ff0 - unaff_RSI | in_R10,param_3,&DAT_1800d1e73
            );
  return;
}


```

---

## Function: FUN_180041e08 (0x180041e08)

```c

ulonglong FUN_180041e08(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong unaff_R12;
  
  lVar1 = FUN_180032f68();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (lVar1 + (unaff_RBX >> 0xe)) * 0x10000000;
  }
  return uVar2 & unaff_R12;
}


```

---

## Function: FUN_180041e98 (0x180041e98)

```c

/* WARNING: Removing unreachable block (ram,0x000180041f43) */

void FUN_180041e98(void)

{
  FUN_18002c6d8();
  FUN_18001b5a8();
  FUN_18004cc68();
  FUN_1800080d0();
  FUN_180007c80();
  return;
}


```

---

## Function: FUN_1800420a0 (0x1800420a0)

```c

undefined1 * FUN_1800420a0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong in_R9;
  longlong lVar3;
  ulonglong unaff_R13;
  undefined1 auStack_48 [56];
  
  lVar3 = in_R9 + 0x17;
  lVar2 = 0;
  lVar1 = FUN_1800511d8();
  if (lVar1 != 0) {
    unaff_R13 = unaff_R13 + lVar2 | unaff_RDI + lVar3;
  }
  return (undefined1 *)((ulonglong)auStack_48 | (longlong)unaff_R13 >> 0x1e);
}


```

---

## Function: FUN_180042168 (0x180042168)

```c

char * FUN_180042168(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = s_oeKoTASeQPtARmpWNnycYDPFVxQbtX_1800d569f;
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  pcVar2 = (char *)CONCAT44(extraout_var,BVar1);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = pcVar3 + 5;
  }
  return pcVar2;
}


```

---

## Function: FUN_180042218 (0x180042218)

```c

undefined8 FUN_180042218(void)

{
  longlong unaff_R13;
  
  GetWindowTextA((HWND)(unaff_R13 + 8),(LPSTR)0x9efb471a83a71a21,0);
  return 0;
}


```

---

## Function: FUN_1800422c8 (0x1800422c8)

```c

void FUN_1800422c8(void)

{
  FUN_18000d8c8();
  return;
}


```

---

## Function: FUN_180042350 (0x180042350)

```c

/* WARNING: Removing unreachable block (ram,0x000180042401) */

void FUN_180042350(void)

{
  return;
}


```

---

## Function: FUN_180042438 (0x180042438)

```c

/* WARNING: Removing unreachable block (ram,0x00018004257a) */
/* WARNING: Removing unreachable block (ram,0x0001800424b2) */
/* WARNING: Removing unreachable block (ram,0x0001800425b2) */

undefined8 FUN_180042438(void)

{
  undefined8 local_140;
  
  FUN_18004f868();
  FUN_180055778();
  return local_140;
}


```

---

## Function: FUN_180042618 (0x180042618)

```c

void FUN_180042618(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  if (-1 < param_1 + 3) {
    unaff_R12 = unaff_R12 & unaff_R13 & in_R11;
  }
  CreateToolhelp32Snapshot
            (0,((in_R11 & unaff_RSI + unaff_R12) - 4) - (ulonglong)(0xfffffffffffffff0 < unaff_RBP),
             param_4,&stack0xfffffffffffffff8);
  FUN_180045580();
  return;
}


```

---

## Function: FUN_180042708 (0x180042708)

```c

ulonglong FUN_180042708(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  
  uVar1 = FUN_180042880(-0x7ff2e185);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 ^ unaff_R13;
  }
  return uVar2;
}


```

---

## Function: FUN_180042798 (0x180042798)

```c

undefined1 * FUN_180042798(void)

{
  undefined1 *puVar1;
  undefined1 local_28 [32];
  
  puVar1 = local_28;
  FUN_18001ea48();
  return puVar1;
}


```

---

## Function: FUN_180042818 (0x180042818)

```c

void FUN_180042818(void)

{
  FUN_180011bb0();
  return;
}


```

---

## Function: FUN_180042880 (0x180042880)

```c

void FUN_180042880(int param_1)

{
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  undefined1 local_28 [24];
  
  FUN_180025808((unaff_RBX + -1) - (ulonglong)(unaff_RDI < 0x16),(longlong)local_28,param_1 + 0xe,0)
  ;
  return;
}


```

---

## Function: FUN_180042910 (0x180042910)

```c

ulonglong FUN_180042910(void)

{
  ulonglong unaff_RBX;
  
  return unaff_RBX | 0x3eec89973b049ffd;
}


```

---

## Function: FUN_180042978 (0x180042978)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180042978(void)

{
  _DAT_da7e9555db4bbd7d = 0x1800429e3;
  FUN_18004ffe0(&DAT_da7e9555db4bbdad,0x525a354b536e788e);
  return;
}


```

---

## Function: FUN_180042a18 (0x180042a18)

```c

undefined8 FUN_180042a18(undefined8 param_1,undefined8 param_2,int param_3)

{
  UINT unaff_EDI;
  int in_stack_ffffffffffffffd8;
  int in_stack_ffffffffffffffe0;
  undefined4 uStack_1c;
  
  SetWindowPos((HWND)0xc0f2e5278947428c,(HWND)&stack0xfffffffffffffff0,param_3,0,
               in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0,unaff_EDI);
  return CONCAT44(uStack_1c,in_stack_ffffffffffffffe0);
}


```

---

## Function: FUN_180042ab8 (0x180042ab8)

```c

void FUN_180042ab8(void)

{
  undefined1 *puVar1;
  ULONG *in_stack_ffffffffffffffc8;
  ULONG in_stack_ffffffffffffffd0;
  undefined1 local_20 [16];
  
  freeaddrinfo(0xe01c21ae45f2b0b,0x3b51ec623445d294);
  puVar1 = local_20;
  FUN_18003f520();
  BCryptGetProperty((BCRYPT_HANDLE)0x2b7f5af650acc2bf,(LPCWSTR)0x0,puVar1 + 0xc,
                    (ULONG)&stack0xffffffffffffffc8,in_stack_ffffffffffffffc8,
                    in_stack_ffffffffffffffd0);
  return;
}


```

---

## Function: FUN_180042b48 (0x180042b48)

```c

/* WARNING: Removing unreachable block (ram,0x000180042b9b) */
/* WARNING: Removing unreachable block (ram,0x000180042c54) */

ulonglong FUN_180042b48(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  undefined1 local_res8 [32];
  PHKEY in_stack_ffffffffffffffd8;
  ulonglong local_20;
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)(unaff_RBX + 3),0,(REGSAM)local_res8,in_stack_ffffffffffffffd8);
  FUN_18000d698();
  uVar1 = FUN_18004ad38();
  if (uVar1 == 0) {
    uVar1 = local_20;
  }
  return uVar1;
}


```

---

## Function: FUN_180042ca0 (0x180042ca0)

```c

undefined8 FUN_180042ca0(void)

{
  undefined8 local_18;
  
  FUN_18002a048();
  FUN_180006a80();
  return local_18;
}


```

---

## Function: FUN_180042d90 (0x180042d90)

```c

longlong FUN_180042d90(longlong param_1)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  PHKEY unaff_RBX;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_R11;
  ulonglong uVar7;
  ulonglong local_18;
  
  uVar5 = 0;
  puVar3 = &local_18;
  LVar1 = RegOpenKeyW((HKEY)(param_1 + 0xf),(LPCWSTR)0x0,unaff_RBX);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (uVar2 == 0) {
    uVar5 = 0;
    uVar7 = in_R11 & (ulonglong)unaff_RBX;
    in_R11 = uVar7 + 0x16;
    uVar2 = 0;
    puVar3 = (ulonglong *)((longlong)puVar3 - uVar7 & (ulonglong)unaff_RBX);
  }
  uVar6 = uVar5 & in_R11 & uVar5;
  uVar2 = (uVar2 | (ulonglong)puVar3) & (ulonglong)puVar3;
  uVar7 = ((ulonglong)puVar3 & uVar6) - 6;
  lVar4 = (((longlong)unaff_RBX - in_R11) * 0x80 | (ulonglong)puVar3) + 3;
  uVar5 = in_R11 & uVar5 & uVar6;
  if ((POPCOUNT(uVar5 & uVar7 & 0xff) & 1U) != 0) {
    lVar4 = lVar4 - (uVar5 + 10);
    uVar2 = (uVar2 - 9) * 0x100;
    uVar5 = uVar5 + 0x24 & uVar7 + uVar6;
  }
  uVar5 = uVar5 & uVar2;
  uVar7 = lVar4 + 0x16;
  uVar2 = FUN_18001b378();
  if (uVar2 != 0) {
    uVar7 = uVar7 | uVar2;
  }
  if ((uVar5 & 0xdfcf6cd35) != 0) {
    local_18 = local_18 << 0x1f;
  }
  return (local_18 | uVar7) << 9;
}


```

---

## Function: FUN_180042eb8 (0x180042eb8)

```c

longlong FUN_180042eb8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_40;
  
  lVar6 = 0;
  uVar5 = unaff_RSI >> 0x13;
  uVar4 = param_1 + 0x26;
  uVar7 = 0;
  lVar1 = FUN_180035a28();
  if (lVar1 != 0) {
    uVar7 = uVar7 - 0x17;
    uVar4 = uVar4 | unaff_RDI;
    uVar5 = uVar5 << 0x12;
  }
  uVar2 = FUN_18002cbf0();
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 ^ uVar7;
    uVar4 = uVar4 * 0x10 - 0x1a;
    uVar5 = local_40;
  }
  uVar3 = uVar3 >> 0x1a;
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar3 - lVar6 & uVar4;
  }
  return (longlong)uVar3 >> 8;
}


```

---

## Function: FUN_180042ff8 (0x180042ff8)

```c

undefined8 FUN_180042ff8(void)

{
  return 0x89c750e643ffdc9e;
}


```

---

## Function: FUN_180043080 (0x180043080)

```c

undefined1 * FUN_180043080(void)

{
  undefined1 *puVar1;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar2;
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  
  if (-1 < (longlong)((ulonglong)&stack0xffffffffffffffe8 & unaff_RBX)) {
    unaff_RDI = unaff_RDI | unaff_R12;
    unaff_RBX = unaff_RBX ^ 0xa3b738784eceb4a;
    unaff_RSI = unaff_RSI << 0x12;
  }
  lVar2 = unaff_RSI + (unaff_RBX >> 0x16);
  puVar1 = (undefined1 *)
           FUN_180029580(unaff_RDI + 0x1800d3db5,0xa3b738784eceb5b,
                         (longlong)&stack0xffffffffffffffe8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &stack0xffffffffffffffe8;
    lVar2 = lVar2 * 0x80;
  }
  return puVar1 + lVar2;
}


```

---

## Function: FUN_180043178 (0x180043178)

```c

longlong FUN_180043178(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong lVar3;
  undefined *puVar4;
  
  lVar3 = 0;
  puVar4 = &DAT_1800c6ef8;
  uVar1 = FUN_1800214a8();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (uVar1 ^ (ulonglong)puVar4) - (unaff_RSI + -0x10 + lVar3);
  }
  return lVar2 + -0x1c;
}


```

---

