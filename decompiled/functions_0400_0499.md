null

Logs:
# Decompiled Functions: index 400-499

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_18001c280 (0x18001c280)

```c

void FUN_18001c280(void)

{
  FUN_180007320();
  return;
}


```

---

## Function: FUN_18001c350 (0x18001c350)

```c

longlong FUN_18001c350(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong unaff_R12;
  longlong local_20;
  
  lVar1 = FUN_18004e1f0();
  if (lVar1 == 0) {
    unaff_R12 = (unaff_R12 ^ (ulonglong)&local_20) + (longlong)&local_20 & unaff_RSI;
  }
  return local_20 + unaff_R12 + lVar1;
}


```

---

## Function: FUN_18001c438 (0x18001c438)

```c

longlong FUN_18001c438(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined1 local_10 [8];
  
  lVar1 = NtFlushInstructionCache(param_1 + 5,0x53949312510a0dc7,param_3,local_10);
  return lVar1 + unaff_RBX * 0x40000000;
}


```

---

## Function: FUN_18001c630 (0x18001c630)

```c

undefined8 FUN_18001c630(void)

{
  FUN_180026b60();
  return 0x2a0d26d;
}


```

---

## Function: FUN_18001c788 (0x18001c788)

```c

longlong FUN_18001c788(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_4 + 3U >> 0x15;
  lVar1 = CreateToolhelp32Snapshot
                    (0x410844bf7e6a7c9c,0,param_3,
                     uVar2 + 0xe + (ulonglong)(SEXT816(0) != SEXT816(0) * SEXT816((longlong)uVar2)))
  ;
  return lVar1 + -10;
}


```

---

## Function: FUN_18001c7f0 (0x18001c7f0)

```c

void FUN_18001c7f0(void)

{
  FUN_18004a020();
  return;
}


```

---

## Function: FUN_18001c8f0 (0x18001c8f0)

```c

longlong FUN_18001c8f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  ulonglong unaff_R13;
  
  return in_RAX * 2 * (unaff_R13 ^ param_3 + 0x1fU) * 0x40000;
}


```

---

## Function: FUN_18001c9c0 (0x18001c9c0)

```c

void FUN_18001c9c0(void)

{
  FUN_180004200();
  FUN_1800159d8();
  FUN_18001fa68();
  FUN_180009d28();
  return;
}


```

---

## Function: FUN_18001ca88 (0x18001ca88)

```c

/* WARNING: Removing unreachable block (ram,0x00018001caad) */

void FUN_18001ca88(void)

{
  FUN_180014a98();
  return;
}


```

---

## Function: FUN_18001cb28 (0x18001cb28)

```c

/* WARNING: Removing unreachable block (ram,0x00018001cca7) */

longlong FUN_18001cb28(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  longlong in_R10;
  undefined1 local_98 [120];
  
  if (-1 < unaff_RBX) {
    in_RAX = in_RAX - unaff_RBX << 0x38;
  }
  lVar1 = in_RAX + -0xc;
  if ((in_R10 - 0x13U & 0x1fc03b9c1774ac) != 0) {
    lVar1 = 0;
  }
  FUN_18004ffe0(0,lVar1);
  return (longlong)local_98 >> 1;
}


```

---

## Function: FUN_18001cce8 (0x18001cce8)

```c

/* WARNING: Removing unreachable block (ram,0x00018001cdf6) */

longlong FUN_18001cce8(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong in_R9;
  longlong lVar1;
  longlong in_R11;
  ulonglong uVar2;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 local_148 [120];
  undefined8 uStack_d0;
  ulonglong local_a0;
  
  if (unaff_RBX < 0) {
    unaff_R13 = unaff_R13 + 4;
    unaff_RBX = unaff_RBX - in_R11;
  }
  lVar1 = (in_R9 + 6) * 8;
  uVar2 = (longlong)local_148 * 0x40000000;
  uStack_d0 = 0x18001cd72;
  FUN_180050aa0();
  return (local_a0 &
          (unaff_RBX * in_RAX - 0xbU ^
          ((longlong)
           (unaff_R12 - ((longlong)(-0xf - (ulonglong)(0xfffffffffffffff9 < in_R9)) >> 0x1c)) >> 2)
          - ((unaff_R13 ^ unaff_R12) + 5)) + lVar1 & uVar2) + 0x10;
}


```

---

## Function: FUN_18001cea8 (0x18001cea8)

```c

longlong FUN_18001cea8(void)

{
  LSTATUS LVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  undefined1 local_a0 [8];
  longlong local_98;
  
  lVar4 = 0;
  lVar6 = 0;
  LVar1 = RegOpenKeyW((HKEY)0x0,(LPCWSTR)0x0,(PHKEY)&DAT_1800c1b43);
  uVar2 = CONCAT44(extraout_var,LVar1);
  if (uVar2 == 0) {
    lVar6 = lVar6 + unaff_R13 + 10;
    uVar2 = -(longlong)local_c0 - 0x10;
    unaff_R12 = unaff_RSI;
  }
  uVar7 = unaff_RDI * lVar4;
  if (unaff_RSI + 0x19 < 0) {
    unaff_R12 = unaff_R12 << 0x15;
    uVar2 = uVar2 + lVar6;
    lVar6 = lVar6 + 0xf;
    uVar7 = local_a8;
  }
  puVar5 = local_c8;
  puVar8 = local_b8;
  uVar3 = FUN_180006d08();
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = (uVar3 ^ uVar7 & uVar3) + 1;
    puVar5 = (undefined1 *)
             (((ulonglong)puVar5 ^ uVar3 | (ulonglong)puVar8 ^ unaff_R12 + 0xdU) -
             (local_98 + ((uVar2 | uVar7) & lVar6 >> 0x18) + 0x1f));
  }
  lVar4 = lVar4 + -0xd;
  if ((longlong)local_a0 < 0) {
    lVar4 = lVar4 * 0x8000000;
  }
  if ((longlong)puVar5 >> 0xf != 0) {
    lVar4 = lVar4 << 0x19;
  }
  return lVar4;
}


```

---

## Function: FUN_18001d090 (0x18001d090)

```c

void FUN_18001d090(void)

{
  FUN_18001d1f0();
  return;
}


```

---

## Function: FUN_18001d178 (0x18001d178)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_18001d178(void)

{
  PHKEY in_stack_ffffffffffffffc8;
  undefined1 local_20 [16];
  
  RegOpenKeyExW((HKEY)0x0,(LPCWSTR)0xcd7fe4020f3d8708,0x800c35e5,0,in_stack_ffffffffffffffc8);
  return local_20;
}


```

---

## Function: FUN_18001d1f0 (0x18001d1f0)

```c

undefined8 FUN_18001d1f0(void)

{
  FUN_1800379e0();
  FUN_180045580();
  FindFirstFileA(&stack0xfffffffffffffff0,(LPWIN32_FIND_DATAA)&DAT_1800ba73b);
  return 0xbd9d2078;
}


```

---

## Function: FUN_18001d2d8 (0x18001d2d8)

```c

void FUN_18001d2d8(undefined8 param_1,undefined8 param_2,int param_3,REGSAM param_4)

{
  int unaff_EBX;
  int iVar1;
  PHKEY unaff_R15;
  
  iVar1 = param_3 + unaff_EBX;
  if ((longlong)unaff_R15 < 1) {
    iVar1 = iVar1 + 0x11;
  }
  RegOpenKeyExW((HKEY)&DAT_1800d3f66,(LPCWSTR)&stack0xffffffffffffffe8,iVar1 * (param_3 + 0x12),
                param_4,unaff_R15);
  FUN_18003f878();
  return;
}


```

---

## Function: FUN_18001d398 (0x18001d398)

```c

undefined8 FUN_18001d398(void)

{
  undefined8 local_38;
  CHAR local_30 [32];
  
  RemoveDirectoryA(local_30);
  return local_38;
}


```

---

## Function: FUN_18001d468 (0x18001d468)

```c

void FUN_18001d468(void)

{
  FUN_180025048();
  return;
}


```

---

## Function: FUN_18001d590 (0x18001d590)

```c

undefined1 * FUN_18001d590(void)

{
  undefined1 local_28 [24];
  
  FUN_180039ab0();
  FUN_18001fd18();
  return local_28;
}


```

---

## Function: FUN_18001d658 (0x18001d658)

```c

longlong FUN_18001d658(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180033d70(&stack0xfffffffffffffff0,(ulonglong)&stack0xfffffffffffffff8);
  return lVar1 << 0x12;
}


```

---

## Function: FUN_18001d6b0 (0x18001d6b0)

```c

void FUN_18001d6b0(void)

{
  FUN_180033180();
  return;
}


```

---

## Function: FUN_18001d7e0 (0x18001d7e0)

```c

void FUN_18001d7e0(void)

{
  FUN_180052d98();
  FUN_180011930();
  return;
}


```

---

## Function: FUN_18001d928 (0x18001d928)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001d928(void)

{
  FUN_18002db20();
  return;
}


```

---

## Function: FUN_18001da50 (0x18001da50)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001da50(void)

{
  return;
}


```

---

## Function: FUN_18001dac0 (0x18001dac0)

```c

ulonglong FUN_18001dac0(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  return (ulonglong)(in_RAX + unaff_RSI) >> 0xb;
}


```

---

## Function: FUN_18001dbb0 (0x18001dbb0)

```c

ulonglong FUN_18001dbb0(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  char *pcVar2;
  longlong in_R10;
  longlong unaff_R13;
  
  pcVar2 = s_Nichol_1800cc9b3;
  FUN_18001ea48();
  uVar1 = 0x152ae4e29c611a3a;
  if ((POPCOUNT((unaff_RBX + in_R10 + 0x20 | unaff_R13 - unaff_RDI) & 0xff) & 1U) == 0) {
    uVar1 = (ulonglong)pcVar2 | 0x152ae4e29c611a3a;
  }
  return uVar1;
}


```

---

## Function: FUN_18001dde0 (0x18001dde0)

```c

ulonglong FUN_18001dde0(void)

{
  ulonglong uVar1;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  
  uVar1 = FUN_18004c298();
  if (uVar1 == 0) {
    unaff_R12 = unaff_R12 & unaff_R13;
  }
  return (uVar1 + unaff_R12) * in_R9 - 0x13 | unaff_R12;
}


```

---

## Function: FUN_18001df48 (0x18001df48)

```c

/* WARNING: Removing unreachable block (ram,0x00018001dfd4) */
/* WARNING: Removing unreachable block (ram,0x00018001e04d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18001df48(void)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong in_R9;
  LPCSTR lpPathName;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong uVar6;
  ulonglong unaff_R12;
  undefined1 local_70 [56];
  
  lpPathName = (LPCSTR)(in_R9 + 0xb);
  uVar5 = unaff_RDI * unaff_R12;
  uVar6 = (in_R11 ^ (longlong)local_70 >> 0x1e) + ((longlong)local_70 >> 0x1e);
  lVar2 = FUN_1800378d0();
  if (lVar2 == 0) {
    uVar5 = uVar5 - 0xd;
    unaff_R12 = unaff_R12 | in_R10;
    in_R10 = in_R10 | (ulonglong)lpPathName;
    uVar6 = uVar6 - 0x19;
    lpPathName = (LPCSTR)((longlong)lpPathName - unaff_R12 >> 0x17 | uVar5);
    in_R10 = in_R10 | unaff_R12 - 0x19;
  }
  uVar5 = in_R10 - 0x16 & uVar5;
  uVar6 = (uVar6 | uVar5) + unaff_R12;
  BVar1 = RemoveDirectoryA(lpPathName);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    uVar5 = uVar5 - 0x16;
  }
  uVar4 = (ulonglong)lpPathName ^ uVar5;
  uVar3 = _DAT_88e459f7;
  if ((longlong)uVar4 < 0) {
    uVar6 = (uVar6 ^ uVar5) + (uVar4 - uVar5);
    uVar4 = 0x88e45ad7;
    uVar3 = _DAT_88e459f7 | uVar6;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0xd12fb5d750093903;
    uVar5 = uVar3 ^ uVar6 >> 0xe | uVar4;
  }
  return uVar5 & uVar4;
}


```

---

## Function: FUN_18001e108 (0x18001e108)

```c

/* WARNING: Removing unreachable block (ram,0x00018001e1a5) */

ulonglong FUN_18001e108(longlong param_1)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined1 *puVar2;
  undefined4 extraout_var;
  longlong lVar3;
  LPCSTR lpPathName;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  int iVar5;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar6;
  longlong local_58;
  undefined1 local_48 [8];
  undefined1 local_40 [4];
  CHAR aCStack_3c [44];
  
  if ((POPCOUNT(param_1 + 0x18U & 0xff) & 1U) != 0) {
    in_RAX = in_RAX << 0x15;
    unaff_RBX = unaff_RBX << 5;
    in_R11 = in_R11 - (param_1 + 0x18U);
  }
  lVar3 = -0x15a62a82d4a85edf;
  uVar4 = in_R11;
  puVar2 = FUN_18002f888();
  if (puVar2 == (undefined1 *)0x0) {
    uVar4 = unaff_RDI & in_RAX ^ uVar4;
    in_R11 = in_R11 ^ uVar4;
    unaff_R12 = (ulonglong)(local_48 + unaff_R12) | lVar3 + 0x12U | unaff_RBX + uVar4;
  }
  if (puVar2 == (undefined1 *)0x0) {
    local_58 = local_58 + -0x1f;
  }
  uVar4 = local_58 + 4 + (ulonglong)(0xffffffffffffffe5 < in_R11 - 8);
  uVar6 = unaff_R12 * 0x1000000;
  iVar5 = 0;
  FUN_180012738();
  lpPathName = (LPCSTR)0x9fb9df9bd95bb68b;
  lVar3 = FUN_18004def0(-0x26a44975,0x530a4cdeb4e2d32f,iVar5);
  if (lVar3 == 0) {
    uVar6 = uVar6 + 0x18;
    lpPathName = local_40 +
                 ((ulonglong)(lpPathName + -0x4cfc4541) & 0x4cfc4541 ^ (ulonglong)local_40) + uVar4;
  }
  BVar1 = RemoveDirectoryA(lpPathName);
  if (CONCAT44(extraout_var,BVar1) == 0) {
    lpPathName = (LPCSTR)((ulonglong)lpPathName & (uVar4 | uVar6 & (ulonglong)lpPathName));
  }
  return CONCAT44(extraout_var,BVar1) ^ (ulonglong)lpPathName;
}


```

---

## Function: FUN_18001e380 (0x18001e380)

```c

/* WARNING: Removing unreachable block (ram,0x00018001e45c) */

void FUN_18001e380(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong unaff_R12;
  undefined1 local_78 [104];
  
  RemoveDirectoryA((LPCSTR)((ulonglong)local_78 & param_3 + unaff_R12 + -0x1a));
  return;
}


```

---

## Function: FUN_18001e640 (0x18001e640)

```c

void FUN_18001e640(void)

{
  FUN_1800437b8();
  return;
}


```

---

## Function: FUN_18001e938 (0x18001e938)

```c

void FUN_18001e938(void)

{
  FUN_180003618();
  return;
}


```

---

## Function: FUN_18001ea48 (0x18001ea48)

```c

/* WARNING: Removing unreachable block (ram,0x00018001eab2) */

longlong FUN_18001ea48(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong lVar2;
  byte bVar3;
  
  bVar3 = 0;
  lVar2 = 0;
  lVar1 = FUN_180022378();
  return lVar1 + unaff_RDI + 0xb +
         (ulonglong)(((longlong)((lVar2 + -0xe) - (ulonglong)bVar3) >> 9 & 1U) != 0);
}


```

---

## Function: FUN_18001eb38 (0x18001eb38)

```c

longlong FUN_18001eb38(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R13;
  
  return (unaff_R13 & 0xe4749f214ce6099a) *
         ((((unaff_RBX ^ unaff_RBX - param_3) - 1 | unaff_R13 & 0xe4749f214ce6099a) >> 0x11) + 0x1c)
  ;
}


```

---

## Function: FUN_18001ecc8 (0x18001ecc8)

```c

/* WARNING: Removing unreachable block (ram,0x00018001ed27) */

void FUN_18001ecc8(void)

{
  FUN_1800265a8();
  GetCurrentThreadId();
  return;
}


```

---

## Function: FUN_18001ede8 (0x18001ede8)

```c

void FUN_18001ede8(void)

{
  FUN_18002a5d0();
  return;
}


```

---

## Function: FUN_18001efc0 (0x18001efc0)

```c

/* WARNING: Removing unreachable block (ram,0x00018001f15f) */

ulonglong FUN_18001efc0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong in_R10;
  ulonglong uVar10;
  ulonglong in_R11;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_R13;
  bool bVar13;
  ulonglong local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  undefined1 auStack_4a [2];
  ulonglong local_48;
  
  puVar8 = &local_58;
  uVar2 = 0;
  uVar10 = in_R10;
  uVar1 = FUN_180046930();
  if (uVar1 == 0) {
    uVar10 = uVar10 + 3;
    uVar2 = uVar2 + unaff_R13;
    puVar8 = (ulonglong *)(((ulonglong)puVar8 | in_R11) & in_R10);
  }
  uVar9 = (longlong)puVar8 + 0xf;
  uVar11 = local_58 - (unaff_RBX + -8) | uVar9;
  if (unaff_RBX + -8 < 0) {
    uVar9 = (longlong)puVar8 + 3;
    uVar11 = uVar11 - (uVar2 >> 0x17 | uVar1);
    unaff_R13 = unaff_R13 | uVar11;
  }
  uVar3 = (ulonglong)-(longlong)local_60 >> 8;
  uVar7 = (uVar10 >> 0x1d) - 8;
  uVar12 = uVar11 - 2 >> 0x18;
  uVar10 = (uVar10 >> 0x1d) + 0x2e97f380fca981fa | uVar12;
  uVar11 = uVar3 + uVar12 + 0x16;
  uVar5 = ((local_48 >> 10) - 8) - (ulonglong)((local_48 >> 0x22 & 1) != 0);
  uVar4 = uVar5 | 0x8734c5c160795343;
  uVar6 = uVar5 + unaff_R13 + uVar12 >> 0xd;
  uVar2 = 0x401fd0ce;
  bVar13 = false;
  if ((uVar10 & (ulonglong)&local_68) == 0) {
    uVar11 = uVar3 + uVar12 + 0x401fd0e4;
    uVar3 = uVar3 ^ uVar7;
    uVar2 = 0x401fd0cd;
    uVar6 = uVar6 + (uVar4 - 1);
    uVar10 = uVar4 - 1 ^ (ulonglong)&local_68;
    uVar4 = uVar10 >> 3;
    bVar13 = (uVar10 >> 2 & 1) != 0;
    uVar10 = local_58;
  }
  uVar1 = (uVar9 - 0x18 | uVar1) + 0x1e + (ulonglong)bVar13;
  uVar2 = uVar2 ^ uVar3;
  uVar7 = uVar7 + uVar3;
  if ((longlong)(uVar10 & (ulonglong)(auStack_4a + ((longlong)(uVar4 << 0xe) < 0))) < 1) {
    uVar5 = uVar5 ^ uVar1;
    uVar1 = uVar1 | uVar6;
    uVar7 = uVar7 + local_68;
    uVar2 = local_68 & (ulonglong)(auStack_4a + ((longlong)(uVar4 << 0xe) < 0));
    uVar11 = (uVar11 ^ uVar6) + uVar10;
  }
  if (uVar11 != 0) {
    uVar2 = uVar2 | uVar1 ^ uVar5 ^ uVar7;
  }
  return uVar2;
}


```

---

## Function: FUN_18001f250 (0x18001f250)

```c

void FUN_18001f250(void)

{
  FUN_18002c7c8();
  FUN_18000c040();
  return;
}


```

---

## Function: FUN_18001f3a0 (0x18001f3a0)

```c

void FUN_18001f3a0(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  return;
}


```

---

## Function: FUN_18001f430 (0x18001f430)

```c

ulonglong FUN_18001f430(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong in_R11;
  undefined1 auStack_48 [40];
  
  uVar3 = unaff_RBX >> 0x19;
  puVar2 = &DAT_1800d356b;
  lVar1 = FUN_18002c170();
  if (lVar1 == 0) {
    puVar2 = (undefined *)((ulonglong)puVar2 & in_R10);
    uVar3 = uVar3 ^ (ulonglong)puVar2;
  }
  uVar3 = (in_R11 ^ uVar3) >> 0x1d;
  if ((longlong)((ulonglong)puVar2 & (ulonglong)auStack_48) < 0) {
    uVar3 = uVar3 + 0x1b;
  }
  return uVar3;
}


```

---

## Function: FUN_18001f500 (0x18001f500)

```c

ulonglong FUN_18001f500(void)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  
  uVar1 = FUN_18001e108(-0x75d19bfed159f643);
  return uVar1 | unaff_RSI;
}


```

---

## Function: FUN_18001f580 (0x18001f580)

```c

void FUN_18001f580(void)

{
  RemoveDirectoryA(&stack0xfffffffffffffff0);
  return;
}


```

---

## Function: FUN_18001f600 (0x18001f600)

```c

ulonglong FUN_18001f600(void)

{
  ulonglong in_RAX;
  
  return in_RAX >> 0xf;
}


```

---

## Function: FUN_18001f790 (0x18001f790)

```c

void FUN_18001f790(void)

{
  FUN_180026a20();
  return;
}


```

---

## Function: FUN_18001f8f0 (0x18001f8f0)

```c

longlong FUN_18001f8f0(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 2;
  BVar1 = RemoveDirectoryA((LPCSTR)0x2);
  lVar2 = 0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    lVar2 = (CONCAT44(extraout_var,BVar1) ^ uVar3) - 0x10;
  }
  return lVar2;
}


```

---

## Function: FUN_18001f978 (0x18001f978)

```c

ulonglong FUN_18001f978(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_R12;
  
  lVar3 = 0;
  uVar1 = FUN_1800104c0();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 ^ lVar3 - unaff_R12;
  }
  return uVar2;
}


```

---

## Function: FUN_18001fa08 (0x18001fa08)

```c

longlong FUN_18001fa08(void)

{
  longlong in_RAX;
  
  return in_RAX >> 0x10;
}


```

---

## Function: FUN_18001fa68 (0x18001fa68)

```c

longlong FUN_18001fa68(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong in_R11;
  
  uVar1 = FUN_18003bba0();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = uVar1 + 0x1a + unaff_RSI + in_R11 * 0x800;
  }
  return lVar2;
}


```

---

## Function: FUN_18001fbb0 (0x18001fbb0)

```c

undefined1 * FUN_18001fbb0(void)

{
  FUN_18003e9c0();
  return &stack0xffffffffffffffe8;
}


```

---

## Function: FUN_18001fd18 (0x18001fd18)

```c

ulonglong FUN_18001fd18(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong unaff_RSI;
  longlong in_R10;
  longlong lVar4;
  ulonglong in_R11;
  undefined1 local_res8 [32];
  
  lVar4 = in_R10 + -9;
  puVar3 = local_res8;
  puVar1 = FUN_180011520();
  uVar2 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = (ulonglong)puVar1 >> 9;
    in_R11 = in_R11 | (ulonglong)puVar3;
  }
  return uVar2 * lVar4 & unaff_RSI + in_R11;
}


```

---

## Function: FUN_18001fda8 (0x18001fda8)

```c

ulonglong FUN_18001fda8(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  ulonglong unaff_R13;
  longlong local_10;
  
  uVar1 = local_10 * (longlong)&local_10 | unaff_R13;
  if ((longlong)((longlong)&local_10 >> 8 & unaff_RBX) < 0) {
    uVar1 = uVar1 + unaff_R13 * 0x4000000 + unaff_R12 * unaff_RBX;
  }
  return uVar1;
}


```

---

## Function: FUN_1800200c8 (0x1800200c8)

```c

longlong FUN_1800200c8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar3;
  undefined1 *unaff_R13;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  uVar3 = (unaff_R12 ^ in_R11) + (ulonglong)(local_38 == unaff_R13) + 2 ^ in_R11;
  uVar2 = 0;
  uVar1 = FUN_18004a2b0(0);
  if (uVar1 == 0) {
    uVar2 = (ulonglong)local_40 | (ulonglong)unaff_R13 ^ in_R11;
  }
  if (uVar2 != 0) {
    uVar1 = uVar1 + uVar3 ^ uVar2;
  }
  return uVar1 + 6;
}


```

---

## Function: FUN_1800205e8 (0x1800205e8)

```c

longlong FUN_1800205e8(void)

{
  ulonglong in_R10;
  undefined1 local_40 [32];
  
  return (((ulonglong)local_40 ^ in_R10) + 0xb2e63a8082c0e955) * in_R10;
}


```

---

## Function: FUN_180020660 (0x180020660)

```c

/* WARNING: Removing unreachable block (ram,0x0001800206e7) */

undefined8 FUN_180020660(void)

{
  FUN_1800034f8();
  FUN_180039658();
  return 0xeb183ddfdadc448a;
}


```

---

## Function: FUN_1800208c0 (0x1800208c0)

```c

/* WARNING: Removing unreachable block (ram,0x000180020901) */

ulonglong FUN_1800208c0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong in_R10;
  ulonglong *puVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  ulonglong unaff_R12;
  ulonglong local_20;
  
  lVar6 = ((unaff_RSI ^ 0x1800d54cf) + unaff_RSI) * 0x77efde0915faa955;
  uVar5 = unaff_RDI >> 2;
  uVar9 = in_R11 & 0x77efde0915faa955;
  uVar3 = 0x77efde0915faa955;
  uVar7 = lVar6 + 9;
  puVar8 = (ulonglong *)
           (in_R10 + ((unaff_R12 - 0xe) - (ulonglong)((in_R10 >> 0x3e & 1) != 0) &
                     0x77efde0915faa955));
  uVar1 = in_RAX ^ uVar5;
  uVar4 = unaff_RBX & unaff_R12 & uVar9 | uVar7;
  if ((uVar9 & uVar4) != 0) {
    uVar7 = lVar6 + 10;
    uVar5 = uVar5 - 0x1d;
    uVar9 = uVar9 & uVar1;
    puVar8 = &local_20;
    uVar3 = uVar4 ^ 0x77efde0915faa955;
    in_R10 = in_R10 + uVar9;
  }
  uVar7 = uVar7 + uVar3;
  if ((POPCOUNT((uVar5 ^ uVar7) & 0xff) & 1U) == 0) {
    uVar9 = uVar9 >> 3;
    puVar8 = (ulonglong *)((longlong)puVar8 + 0x11);
    uVar7 = uVar7 * 8;
    in_R10 = in_R10 ^ local_20;
  }
  puVar2 = &local_20;
  if ((uVar7 + 0x1c & (ulonglong)puVar2) == 0) {
    puVar2 = (ulonglong *)(((ulonglong)puVar2 ^ (longlong)puVar8 - uVar9) - 0x1b);
  }
  return (ulonglong)puVar2 | ((longlong)puVar8 - uVar9) * in_R10;
}


```

---

## Function: FUN_180020db0 (0x180020db0)

```c

void FUN_180020db0(void)

{
  return;
}


```

---

## Function: FUN_180020eb0 (0x180020eb0)

```c

longlong FUN_180020eb0(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  ulonglong in_R11;
  undefined8 local_10;
  
  uVar1 = 0xae6ebbaa8f378430;
  uVar2 = unaff_RBX | in_R11;
  if (unaff_RDI == 0) {
    uVar2 = uVar2 + unaff_RBX | in_R11;
    uVar1 = (local_10 - (unaff_RSI & unaff_RDI) ^ in_R11) >> 9;
    unaff_RBX = local_10;
  }
  uVar3 = 0x631a07f208806439;
  if ((longlong)(unaff_RDI | unaff_RBX) < 1) {
    uVar3 = unaff_RSI & unaff_RDI | uVar2 | 0x631a07f208806439;
  }
  return (0x18 - (uVar1 | unaff_RDI | unaff_RBX)) + (ulonglong)(0xffffffffffffffe5 < uVar3);
}


```

---

## Function: FUN_180020f80 (0x180020f80)

```c

ulonglong FUN_180020f80(void)

{
  longlong in_R11;
  
  return 0xffffffffffffffd1 - (ulonglong)((in_R11 >> 9 & 1U) != 0) >> 7;
}


```

---

## Function: FUN_180021078 (0x180021078)

```c

void FUN_180021078(void)

{
  return;
}


```

---

## Function: FUN_180021138 (0x180021138)

```c

ulonglong FUN_180021138(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  undefined1 local_40 [40];
  
  CreateToolhelp32Snapshot(0);
  uVar1 = FUN_18000af90();
  if (((ulonglong)(local_40 + (unaff_RBX & unaff_R13 << 0xc)) & unaff_RBP) == 0) {
    uVar1 = uVar1 | unaff_RDI;
  }
  return uVar1;
}


```

---

## Function: FUN_1800212e8 (0x1800212e8)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800212e8(longlong param_1)

{
  ulonglong uVar1;
  LPCSTR lpPathName;
  ulonglong unaff_RDI;
  
  lpPathName = (LPCSTR)(param_1 + 0x30);
  FUN_1800287a8();
  _DAT_3cda5e39 = 0x180021321;
  RemoveDirectoryA(lpPathName);
  _DAT_3cda5e39 = 0x18002133e;
  uVar1 = FUN_18001bc58();
  if (uVar1 == 0) {
    uVar1 = unaff_RDI;
  }
  return uVar1 + 0x19;
}


```

---

## Function: FUN_1800213d8 (0x1800213d8)

```c

/* WARNING: Removing unreachable block (ram,0x000180021475) */

ulonglong FUN_1800213d8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_18 [16];
  
  puVar3 = local_res8;
  puVar2 = (undefined1 *)0x94af6b183e4da768;
  uVar1 = FUN_180042978();
  if (uVar1 == 0) {
    param_3 = local_18;
    puVar2 = local_18;
    uVar1 = 0;
  }
  if (-1 < (longlong)((longlong)puVar3 - (longlong)param_3 & uVar1)) {
    puVar2 = puVar2 + 0x27;
  }
  return uVar1 | (ulonglong)puVar2;
}


```

---

## Function: FUN_1800214a8 (0x1800214a8)

```c

/* WARNING: Removing unreachable block (ram,0x000180021533) */
/* WARNING: Removing unreachable block (ram,0x0001800215e0) */

undefined8 FUN_1800214a8(void)

{
  longlong lVar1;
  LPSTR pCVar2;
  undefined1 *puVar3;
  longlong lVar4;
  PUCHAR pbInput;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  undefined *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined1 *pPaddingInfo;
  longlong in_R11;
  longlong lVar11;
  longlong unaff_R12;
  undefined8 local_140;
  undefined1 local_130 [8];
  ulonglong local_128;
  undefined8 uStackY_d0;
  PUCHAR in_stack_ffffffffffffff58;
  ULONG in_stack_ffffffffffffff60;
  PUCHAR in_stack_ffffffffffffff68;
  ULONG in_stack_ffffffffffffff70;
  ULONG *in_stack_ffffffffffffff78;
  ULONG in_stack_ffffffffffffff80;
  undefined1 auStack_6c [76];
  
  uVar9 = in_R11 * unaff_R12 & 0x80000a80;
  lVar11 = (in_R11 * unaff_R12 - (unaff_RSI & 0x8356e4c113600068)) + uVar9;
  lVar4 = (unaff_R12 >> 4 | unaff_RSI) + 0x14;
  puVar6 = &DAT_1800d092b;
  puVar10 = &DAT_1800d0a53;
  uStackY_d0 = 0x18002157f;
  FUN_180050348();
  uVar7 = (longlong)puVar6 << 0x11;
  uStackY_d0 = 0x18002159c;
  lVar1 = FUN_18000e190();
  uVar5 = 0x117c5a2874ebe;
  puVar6 = &DAT_1800d0a5c;
  puVar8 = auStack_6c + (uVar7 & (ulonglong)&stack0xffffffffffffff80 & lVar1 - (longlong)puVar10);
  uStackY_d0 = 0x18002161c;
  pCVar2 = GetCommandLineA();
  if (pCVar2 != (LPSTR)0x0) {
    uVar5 = lVar11 + 0x117c5a2874ebeU | (ulonglong)puVar6;
    puVar8 = puVar8 + -((unaff_RSI | uVar9) * 0x80000 * lVar4 + 0x10 ^ lVar11 + 0x117c5a2874ebeU |
                       (ulonglong)puVar6);
  }
  puVar3 = local_130;
  pbInput = (PUCHAR)0xa71097d7ab8c7851;
  uStackY_d0 = 0x18002166e;
  pPaddingInfo = puVar3;
  lVar1 = FUN_1800028f8();
  if (lVar1 == 0) {
    uVar5 = (ulonglong)puVar8 ^ uVar5;
    puVar8 = (undefined1 *)((ulonglong)puVar8 & (ulonglong)puVar3 | local_128);
    pbInput = (PUCHAR)((ulonglong)(pbInput + 0x16) ^ (ulonglong)puVar3);
    pPaddingInfo = pPaddingInfo + -uVar5;
  }
  uStackY_d0 = 0x1800216d0;
  BCryptDecrypt(&stack0xffffffffffffff60,pbInput,(ULONG)((longlong)puVar8 << 0xe),pPaddingInfo,
                in_stack_ffffffffffffff58,in_stack_ffffffffffffff60,in_stack_ffffffffffffff68,
                in_stack_ffffffffffffff70,in_stack_ffffffffffffff78,in_stack_ffffffffffffff80);
  return local_140;
}


```

---

## Function: FUN_180021758 (0x180021758)

```c

void FUN_180021758(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar5;
  ulonglong local_58;
  ulonglong local_30;
  
  uVar3 = 0;
  uVar2 = 0xe461040ee5044428;
  uVar4 = unaff_RDI ^ unaff_RSI;
  uVar1 = FUN_18004fdc0();
  if (uVar1 != 0) {
    uVar5 = unaff_R12 & uVar2;
    uVar2 = uVar2 - 3;
    unaff_R12 = uVar5 >> 0x17;
    uVar4 = uVar4 << 0xe | uVar1;
  }
  uVar4 = uVar2 + uVar4 | unaff_R12 | in_R11;
  uVar1 = param_3 | in_R11;
  if ((POPCOUNT(uVar4 & 0xff) & 1U) != 0) {
    uVar4 = uVar4 & local_30;
    uVar1 = local_30;
  }
  if (-1 < (longlong)(local_58 & uVar3)) {
    uVar1 = uVar1 - ((param_4 + uVar2 ^ uVar4) - 0x1a);
  }
  FUN_18000c8c8(0,uVar3,uVar1 >> 5);
  return;
}


```

---

## Function: FUN_180021890 (0x180021890)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180021890(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong in_R10;
  longlong unaff_R12;
  
  uVar1 = unaff_RDI >> 4;
  if (-1 < (longlong)(in_R10 & unaff_RSI + 0xeec054aca3a44ddcU)) {
    uVar1 = uVar1 << 0x18;
  }
  return (in_RAX + unaff_R12 + 0x10) * uVar1;
}


```

---

## Function: FUN_180021930 (0x180021930)

```c

/* WARNING: Removing unreachable block (ram,0x0001800219ea) */

ulonglong FUN_180021930(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R12;
  
  uVar2 = 0x7a10a448ff681c3;
  uVar1 = FUN_18004c350();
  if ((POPCOUNT((unaff_RDI | unaff_R12) & 0xff) & 1U) != 0) {
    uVar1 = uVar1 | uVar2;
  }
  if ((in_R10 & uVar2) == 0) {
    uVar1 = uVar1 - 3;
  }
  return uVar1;
}


```

---

## Function: FUN_180021de0 (0x180021de0)

```c

/* WARNING: Removing unreachable block (ram,0x000180021e43) */

ulonglong FUN_180021de0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_4 + 1;
  uVar1 = FUN_180003618();
  if (uVar1 == 0) {
    uVar1 = lVar2 * 0x400;
  }
  return uVar1;
}


```

---

## Function: FUN_180021e78 (0x180021e78)

```c

void FUN_180021e78(void)

{
  REGSAM unaff_EBX;
  PHKEY in_stack_ffffffffffffffc8;
  undefined1 local_20 [8];
  
  RegOpenKeyExW((HKEY)&stack0xffffffffffffffc8,(LPCWSTR)&stack0xffffffffffffffc8,(DWORD)local_20,
                unaff_EBX,in_stack_ffffffffffffffc8);
  return;
}


```

---

## Function: FUN_180021f98 (0x180021f98)

```c

ulonglong FUN_180021f98(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong in_R10;
  ulonglong uVar5;
  ulonglong in_R11;
  longlong unaff_R12;
  ulonglong uVar6;
  undefined1 auStack_58 [56];
  
  uVar3 = unaff_RBX + 0x1a + (ulonglong)(&stack0xffffffffffffffe0 < (undefined1 *)0x38);
  uVar5 = in_R10 + uVar3 >> 0x1c;
  uVar6 = unaff_R12 + 0x16;
  uVar4 = 0;
  lVar1 = FUN_180021758(in_R11,0,(longlong)&DAT_1800c8dfc - uVar5,0);
  if (lVar1 != 0) {
    uVar4 = uVar4 | uVar6;
    uVar6 = unaff_R12 - 7;
    uVar4 = uVar4 << 1;
    lVar1 = lVar1 + 0x13;
    uVar3 = uVar3 & in_R11;
  }
  uVar2 = lVar1 >> 0x18;
  if ((longlong)(in_R11 & uVar3 + lVar1) < 1) {
    uVar6 = uVar6 | uVar4;
    uVar2 = (uVar2 & uVar5 & uVar2) + in_R11 * 0x40;
  }
  if ((POPCOUNT(uVar6 & (ulonglong)auStack_58 & 0xff) & 1U) != 0) {
    uVar2 = uVar2 + 0xe;
  }
  return uVar2;
}


```

---

## Function: FUN_180022140 (0x180022140)

```c

/* WARNING: Removing unreachable block (ram,0x0001800221b1) */

longlong FUN_180022140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 *puVar2;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong uVar4;
  undefined1 local_38 [16];
  longlong local_28;
  
  puVar2 = (undefined1 *)(param_3 + 0x17);
  uVar1 = (longlong)(in_RAX + 2U) - (longlong)puVar2;
  uVar4 = unaff_R13 + 9 + (ulonglong)((undefined1 *)(in_RAX + 2U) < puVar2);
  if (((ulonglong)puVar2 & uVar1) == 0) {
    uVar4 = (uVar4 - 0xd) - (longlong)puVar2;
    puVar2 = local_38;
  }
  lVar3 = ((ulonglong)puVar2 & uVar4) + local_28 + -6 + 0x1b;
  if (-1 < (longlong)uVar1) {
    lVar3 = lVar3 + local_28 + -6;
  }
  return ((longlong)
          (unaff_RDI + unaff_RSI & ((uVar4 - 0x16) - (unaff_RDI + unaff_RSI) >> 0x31) - 0xf) >> 0x19
         ) + lVar3 >> 0xb;
}


```

---

## Function: FUN_180022288 (0x180022288)

```c

undefined1 * FUN_180022288(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined1 auStack_4f [47];
  undefined1 local_20 [32];
  
  uVar4 = param_3 + 6;
  uVar3 = unaff_RDI & unaff_R12;
  puVar5 = auStack_4f;
  lVar1 = FUN_18002fec8();
  if (lVar1 != 0) {
    in_R10 = in_R10 - uVar4;
    uVar3 = uVar3 - (lVar1 + -0xc);
    unaff_R13 = unaff_R13 | uVar4 | (ulonglong)puVar5;
    puVar5 = puVar5 + 1;
  }
  in_R10 = in_R10 ^ uVar3;
  puVar2 = FUN_18004d010();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0xfffffffffffffff5;
    in_R10 = ((ulonglong)local_20 ^ unaff_R13 ^ uVar3) >> 0xf & unaff_R12;
  }
  if (-1 < (longlong)((longlong)puVar2 - in_R10)) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 >> 0x11);
  }
  return puVar5;
}


```

---

## Function: FUN_180022378 (0x180022378)

```c

void FUN_180022378(void)

{
  FUN_18000e648();
  return;
}


```

---

## Function: FUN_180022498 (0x180022498)

```c

/* WARNING: Removing unreachable block (ram,0x0001800226c3) */

longlong FUN_180022498(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  LSTATUS LVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint extraout_var;
  undefined4 extraout_var_00;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong in_R10;
  undefined1 *in_R11;
  longlong lVar12;
  HKEY hKey;
  HKEY pHVar13;
  undefined1 *local_130;
  PHKEY in_stack_ffffffffffffff58;
  undefined1 local_a0 [8];
  undefined1 local_98 [24];
  undefined1 *local_80;
  undefined1 *local_58;
  undefined1 local_50 [16];
  undefined1 auStack_40 [32];
  
  puVar9 = local_130 + param_3;
  puVar5 = local_a0;
  uVar3 = FUN_18001fda8();
  if (uVar3 == 0) {
    local_130 = local_80;
    in_R11 = local_58;
  }
  uVar8 = unaff_RDI - 10;
  uVar3 = 0;
  puVar5 = puVar5 + 0x15;
  puVar4 = FUN_18004d010();
  if (puVar4 == (undefined1 *)0x0) {
    local_130 = local_98;
    puVar4 = (undefined1 *)-in_R10;
    uVar8 = uVar8 | (ulonglong)puVar9;
  }
  uVar3 = uVar8 + 0x18 + (ulonglong)(uVar3 < 0xb);
  if (-1 < (longlong)((ulonglong)local_130 & (ulonglong)puVar4)) {
    puVar5 = puVar5 + 0x19;
    in_R11 = local_80;
  }
  uVar7 = (ulonglong)puVar9 ^ in_R10;
  uVar11 = (ulonglong)auStack_40 & ((ulonglong)puVar5 | (ulonglong)in_R11) - 0x10;
  lVar6 = 0;
  uVar8 = 0x4e9b34ae2cd089d7;
  LVar1 = RegOpenKeyExW((HKEY)0x4e9b34ae2cd089d7,(LPCWSTR)0x0,0,(REGSAM)uVar11,
                        in_stack_ffffffffffffff58);
  uVar2 = 0;
  if (CONCAT44(extraout_var,LVar1) != 0) {
    uVar3 = uVar3 | uVar7;
    in_R10 = in_R10 & uVar8;
    uVar8 = uVar8 + uVar7;
    uVar11 = uVar11 << 4;
    uVar2 = extraout_var >> 9;
  }
  puVar5 = local_98;
  puVar9 = in_R11 + in_R10 + uVar3;
  in_R10 = in_R10 - 0x10;
  lVar12 = (longlong)in_R11 - uVar11;
  uVar3 = lVar6 + 9;
  if (uVar2 != 0) {
    in_R10 = in_R10 & uVar7;
    uVar7 = uVar7 - uVar3;
    puVar5 = (undefined1 *)((longlong)puVar5 * 4);
    uVar3 = uVar3 | (ulonglong)puVar9;
    puVar9 = (undefined1 *)((ulonglong)puVar9 | uVar3);
    lVar12 = lVar12 + uVar11;
    uVar8 = uVar8 << 0x1f;
  }
  lVar6 = uVar3 * lVar12;
  lVar10 = (longlong)puVar9 * in_R10;
  uVar8 = (ulonglong)puVar5 & uVar8;
  if ((longlong)uVar7 < 1) {
    lVar12 = lVar12 + uVar11;
    in_R10 = in_R10 ^ uVar7;
    uVar8 = uVar8 - lVar6 >> 0x16;
  }
  lVar6 = (longlong)in_R10 >> 0x19;
  hKey = (HKEY)(lVar12 << 0x11);
  uVar3 = 0;
  uVar8 = uVar8 + 0x1f;
  pHVar13 = hKey;
  LVar1 = RegOpenKeyExW(hKey,(LPCWSTR)0x0,(DWORD)uVar8,(REGSAM)hKey,in_stack_ffffffffffffff58);
  if (CONCAT44(extraout_var_00,LVar1) != 0) {
    lVar6 = lVar6 + 0x1b;
    hKey = (HKEY)(((ulonglong)hKey & (ulonglong)pHVar13) - ((lVar10 + 5) - uVar3));
  }
  uVar7 = lVar6 * uVar3;
  if ((longlong)((ulonglong)((longlong)&pHVar13[5].unused + 2) & unaff_RBX) < 0) {
    uVar7 = (uVar7 | (ulonglong)hKey) ^ uVar8;
  }
  puVar5 = local_50 + (uVar7 ^ 0xd203c3a1659a8000);
  puVar9 = puVar5;
  puVar4 = (undefined1 *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x128) {
    puVar9 = puVar5 + (longlong)local_58;
    puVar4 = local_58;
  }
  return (longlong)puVar9 *
         (longlong)
         (puVar4 + (((uVar3 >> 0x1d) + 9 +
                    (ulonglong)
                    (&stack0x00000000 != (undefined1 *)0x128 &&
                    CARRY8((ulonglong)puVar5,(ulonglong)local_58))) - (longlong)puVar9)) + -6;
}


```

---

## Function: FUN_180022780 (0x180022780)

```c

undefined8 FUN_180022780(void)

{
  return 0x79febfad50ba594d;
}


```

---

## Function: FUN_180022800 (0x180022800)

```c

/* WARNING: Removing unreachable block (ram,0x000180022825) */

void FUN_180022800(void)

{
  FUN_18002b0a0();
  return;
}


```

---

## Function: FUN_1800228c0 (0x1800228c0)

```c

longlong FUN_1800228c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_RDI;
  longlong lVar1;
  undefined1 *in_R10;
  undefined1 local_20 [16];
  
  lVar1 = param_3 + 8;
  if (-1 < unaff_RDI) {
    in_R10 = local_20;
    lVar1 = param_3 + -1;
    in_RAX = in_RAX << 0x1b;
  }
  return in_RAX + 0xf + (longlong)in_R10 * 0x7ffffff + lVar1 * 0x8000000;
}


```

---

## Function: FUN_180022938 (0x180022938)

```c

longlong FUN_180022938(void)

{
  ulonglong unaff_RBX;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 local_10 [8];
  
  return ((longlong)
          ((ulonglong)local_10 ^ ((longlong)(in_R10 | unaff_RBX) >> 0x14) << 1 ^
          (unaff_R12 + -0x12) -
          (ulonglong)
          (unaff_RBX < 0x18 ||
          unaff_RBX - 0x18 < (ulonglong)(((longlong)(in_R10 | unaff_RBX) >> 0x13 & 1U) != 0))) >> 8)
         << 0x19;
}


```

---

## Function: FUN_180022df0 (0x180022df0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022df0(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  ulonglong unaff_R13;
  undefined1 local_68 [72];
  
  uVar4 = unaff_RSI & unaff_RDI;
  if (in_RAX == -0x14) {
    uVar4 = uVar4 | unaff_R13;
    unaff_RDI = unaff_RDI | (ulonglong)local_68;
  }
  lVar2 = (unaff_RDI & 0xf10ea4c4e4457c7d) + 0x17;
  puVar3 = &DAT_1800c8664;
  uVar5 = 0;
  _DAT_8e0cf787 = 0x180022e86;
  lVar1 = FUN_180003958();
  if (lVar1 == 0) {
    lVar1 = uVar4 * 0x2000000 - lVar2;
    uVar5 = uVar5 | (ulonglong)(puVar3 + 0xd);
  }
  _DAT_8e0cf787 = 0x180022ecd;
  RtlCompareMemory(0xd42c1583723843,0x2a245a8c0c1c5dc0,lVar1,uVar5 + 0x1e);
  _DAT_8e0cf787 = 0x180022ef9;
  FUN_1800043e0();
  return;
}


```

---

## Function: FUN_180022f90 (0x180022f90)

```c

longlong FUN_180022f90(void)

{
  longlong in_RAX;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  longlong unaff_R12;
  
  return in_RAX * ((in_R11 | unaff_RSI) + unaff_R12 + unaff_RSI);
}


```

---

## Function: FUN_1800230e8 (0x1800230e8)

```c

void FUN_1800230e8(void)

{
  FUN_180012408();
  return;
}


```

---

## Function: FUN_180023230 (0x180023230)

```c

/* WARNING: Removing unreachable block (ram,0x00018002325a) */

longlong FUN_180023230(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180029bf8();
  return lVar1 >> 0x1a;
}


```

---

## Function: FUN_1800232d8 (0x1800232d8)

```c

ulonglong FUN_1800232d8(void)

{
  ulonglong in_RAX;
  
  return in_RAX & 0x1024c207;
}


```

---

## Function: FUN_180023358 (0x180023358)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180023358(void)

{
  FUN_18002e958();
  return 0;
}


```

---

## Function: FUN_180023468 (0x180023468)

```c

ulonglong FUN_180023468(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  undefined1 *in_R10;
  longlong unaff_R12;
  ulonglong uVar3;
  ulonglong unaff_R13;
  undefined1 auStack_c1 [9];
  WCHAR local_b8 [28];
  undefined1 local_80 [72];
  
  if ((unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) == 0) {
    unaff_R13 = unaff_R13 & unaff_RDI;
  }
  lVar1 = FUN_18003c2b8();
  if (lVar1 == 0) {
    in_R10 = local_80;
  }
  uVar3 = unaff_R12 * (longlong)in_R10;
  RemoveDirectoryA((LPCSTR)0xdc47ddde388701ca);
  uVar2 = 0;
  GetModuleHandleW(local_b8);
  return (ulonglong)in_R10 |
         (ulonglong)
         (in_R10 + ((ulonglong)auStack_c1 ^ (uVar3 | uVar2) |
                   ((longlong)local_b8 >> 6) + unaff_R13 * 0x1000) + 0xf) | 0xa31ca6c4b1ad5541;
}


```

---

## Function: FUN_180023630 (0x180023630)

```c

void FUN_180023630(void)

{
  FUN_1800199f0();
  return;
}


```

---

## Function: FUN_1800236e0 (0x1800236e0)

```c

undefined8 FUN_1800236e0(void)

{
  FUN_18003da10(&stack0xfffffffffffffff0,0);
  return 0;
}


```

---

## Function: FUN_180023858 (0x180023858)

```c

ulonglong FUN_180023858(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R11;
  
  uVar3 = param_3 + 0xb;
  uVar1 = FUN_180028cb0();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 | in_R11;
    uVar3 = uVar3 & uVar1 ^ param_4 - uVar1;
  }
  return uVar2 | uVar3;
}


```

---

## Function: FUN_180023938 (0x180023938)

```c

void FUN_180023938(void)

{
  RemoveDirectoryA(&stack0xfffffffffffffff8);
  return;
}


```

---

## Function: FUN_1800239c0 (0x1800239c0)

```c

/* WARNING: Removing unreachable block (ram,0x000180023a28) */

void FUN_1800239c0(void)

{
  DWORD in_stack_ffffffffffffffe8;
  
  VirtualAllocEx((HANDLE)0x4b9a37b548665f13,(LPVOID)0x3ba17ee71d97bc68,0,0,in_stack_ffffffffffffffe8
                );
  return;
}


```

---

## Function: FUN_180023b98 (0x180023b98)

```c

/* WARNING: Removing unreachable block (ram,0x000180023c65) */

longlong FUN_180023b98(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined1 **ppuVar5;
  ulonglong in_R10;
  ulonglong uVar6;
  ulonglong unaff_R13;
  undefined1 *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_28 [8];
  
  uVar2 = in_R10;
  lVar1 = FUN_18001e938();
  if (lVar1 == 0) {
    in_R10 = in_R10 + unaff_RDI ^ uVar2;
    unaff_R13 = unaff_R13 - 0x1e;
  }
  puVar3 = local_40;
  uVar2 = FUN_18002a488();
  if (uVar2 != 0) {
    unaff_RSI = unaff_RSI | uVar2 >> 0xd;
    puVar3 = (undefined1 *)((ulonglong)(puVar3 + in_R10) | in_R10);
  }
  uVar2 = unaff_R13 >> 0x1b;
  if (-1 < (longlong)in_R10) {
    uVar2 = uVar2 + 9;
    unaff_RSI = (unaff_RSI | (ulonglong)puVar3) + 1;
  }
  uVar6 = 0;
  FUN_180045018();
  pcVar4 = s_lwtwozttusondul_1800c4d44 + 0xf;
  ppuVar5 = (undefined1 **)0x0;
  FUN_1800277d8();
  if ((POPCOUNT(uVar6 & (ulonglong)pcVar4 & 0xff) & 1U) == 0) {
    ppuVar5 = &local_48;
    local_48 = local_38;
    local_30 = local_30 << 0xd;
    unaff_RSI = unaff_RSI ^ (ulonglong)local_48;
  }
  if (-1 < (longlong)unaff_RSI) {
    pcVar4 = (char *)((ulonglong)(pcVar4 + ((longlong)uVar2 >> 0x1e) * uVar6) & (ulonglong)local_48)
    ;
    unaff_RSI = unaff_RSI & (ulonglong)local_48;
  }
  uVar6 = ((ulonglong)&local_30 | (unaff_RSI + local_30) - 4) + 1 +
          (ulonglong)
          (((ulonglong)(local_28 + ((ulonglong)((unaff_RSI >> 0x1a & 1) != 0) - 3)) >> 3 & 1) != 0);
  puVar3 = local_40;
  uVar2 = ((((ulonglong)ppuVar5 ^ unaff_RSI) * (longlong)pcVar4 + -1) * (longlong)(local_48 + -4) &
           (ulonglong)(local_28 + ((ulonglong)((unaff_RSI >> 0x1a & 1) != 0) - 3)) &
          unaff_RSI >> 0x1b) + 0x16;
  lVar1 = FUN_1800475d0();
  if (lVar1 == 0) {
    uVar2 = (uVar2 | uVar6) + ((ulonglong)puVar3 >> 0x10) >> 9;
  }
  return (lVar1 + -0x18) - (ulonglong)(local_28 + uVar2 < (undefined1 *)0x15);
}


```

---

## Function: FUN_180023fd8 (0x180023fd8)

```c

/* WARNING: Removing unreachable block (ram,0x0001800241ba) */

longlong FUN_180023fd8(void)

{
  longlong lVar1;
  
  BCryptDestroyKey((BCRYPT_KEY_HANDLE)0x50855569dd2da6c9);
  lVar1 = 0;
  FUN_18001f3a0();
  FUN_180011068();
  FUN_180002fc8();
  lVar1 = FUN_18000ad20(lVar1);
  if (lVar1 == 0) {
    lVar1 = 0xe;
  }
  return lVar1;
}


```

---

## Function: FUN_1800241e0 (0x1800241e0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001800242d1) */
/* WARNING: Removing unreachable block (ram,0x00018002426c) */
/* WARNING: Removing unreachable block (ram,0x0001800243f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800241e0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong in_R10;
  ulonglong uVar5;
  longlong in_R11;
  ulonglong uVar6;
  longlong unaff_R12;
  bool bVar7;
  PHKEY in_stack_ffffffffffffff38;
  WCHAR local_a8 [60];
  
  uVar2 = param_3 + 0xd;
  uVar3 = param_4 + 0x14;
  uVar6 = in_R11 >> 0x19;
  uVar1 = FUN_18004ab00();
  uVar5 = in_R10;
  if (uVar1 != 0) {
    unaff_R12 = unaff_R12 - uVar2;
    unaff_RBX = unaff_RBX + 0xe;
    uVar6 = uVar6 | uVar2;
    uVar5 = in_R10 - uVar3;
  }
  bVar7 = uVar1 != 0 && in_R10 < uVar3;
  uVar2 = (ulonglong)(uVar6 < 3 || uVar6 - 3 < (ulonglong)bVar7);
  lVar4 = (uVar3 - 0x19) -
          (ulonglong)
          (0xffffffffffffffe8 < unaff_RBX ||
          CARRY8(unaff_RBX + 0x17,
                 (ulonglong)(0xffffffffffffffe5 < uVar1 || CARRY8(uVar1 + 0x1a,uVar2))));
  RegOpenKeyExW((HKEY)(uVar1 + 0x1a + uVar2 + 0x18 + uVar5 + unaff_R12),local_a8,
                (int)(uVar6 - 3) - (uint)bVar7,(int)lVar4 - 10,in_stack_ffffffffffffff38);
  _DAT_4c1dfc729cefce9f = 0x180024354;
  FUN_18002b1b0(0x4c1dfc729cefcedf,0x7c8f5228efd85b8e,
                (((ulonglong)(unaff_R12 * lVar4) >> 0x1a) - 8) * 0x1000000);
  return 0;
}


```

---

## Function: FUN_180024438 (0x180024438)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180024438(void)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  return unaff_RSI & unaff_R12 * unaff_RDI;
}


```

---

## Function: FUN_1800244c0 (0x1800244c0)

```c

void FUN_1800244c0(void)

{
  FUN_18002a150();
  return;
}


```

---

## Function: FUN_180024530 (0x180024530)

```c

void FUN_180024530(void)

{
  return;
}


```

---

## Function: FUN_1800245c0 (0x1800245c0)

```c

/* WARNING: Removing unreachable block (ram,0x000180024772) */

ulonglong FUN_1800245c0(void)

{
  ulonglong uVar1;
  FILE local_80 [2];
  
  FUN_180013730();
  fflush(local_80);
  FUN_180021890();
  RemoveDirectoryA((LPCSTR)0x0);
  uVar1 = FUN_1800329c0();
  return uVar1 >> 0xb;
}


```

---

## Function: FUN_180024888 (0x180024888)

```c

/* WARNING: Removing unreachable block (ram,0x0001800248b5) */
/* WARNING: Removing unreachable block (ram,0x00018002496c) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_180024888(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  longlong in_R9;
  undefined1 *puVar6;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar7;
  undefined1 *unaff_R12;
  ulonglong unaff_R13;
  longlong lVar8;
  undefined1 *puVar9;
  longlong local_50;
  undefined1 local_48 [48];
  
  puVar6 = (undefined1 *)(in_R9 + 0xe);
  uVar7 = in_R11 - (longlong)unaff_R12;
  uVar5 = 0x18012;
  uVar4 = 0x9f88139fa45992bd;
  uVar1 = FUN_180023230();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar4 = uVar4 ^ in_R10;
    unaff_R13 = unaff_R13 | uVar7;
    puVar6 = (undefined1 *)((ulonglong)puVar6 | uVar1);
    uVar2 = uVar1 ^ in_R10;
    uVar5 = (uVar5 + in_R10 ^ (ulonglong)puVar6) & (ulonglong)puVar6;
    in_R10 = in_R10 & unaff_R13 | (ulonglong)puVar6;
    unaff_RBX = local_50 + uVar4;
  }
  uVar2 = uVar2 | uVar5;
  uVar1 = (uVar7 - 4) - (ulonglong)(uVar4 < uVar5);
  if (-1 < (longlong)uVar2) {
    uVar1 = uVar1 ^ in_R10;
    puVar6 = (undefined1 *)((longlong)puVar6 * 0x20 + -0x1c);
    unaff_R13 = unaff_R13 | uVar1 | uVar2 | uVar5;
  }
  lVar8 = unaff_R13 + 0xb;
  lVar3 = FUN_1800290c8();
  if (lVar3 == 0) {
    unaff_R12 = unaff_R12 + (longlong)puVar6;
    puVar6 = local_48;
    lVar8 = lVar8 + in_R10;
  }
  puVar9 = puVar6 + lVar8;
  uVar2 = (unaff_RBX & uVar2) - (longlong)puVar9;
  if ((longlong)(uVar1 << 0x14 & uVar2) < 0) {
    puVar9 = puVar9 + (((ulonglong)puVar9 & 0x21afc418f594a0c5) - (longlong)puVar6);
  }
  return ((ulonglong)puVar9 | uVar2) & (ulonglong)(puVar6 + (longlong)unaff_R12);
}


```

---

## Function: FUN_180024ac8 (0x180024ac8)

```c

ulonglong FUN_180024ac8(void)

{
  LSTATUS LVar1;
  longlong lVar2;
  undefined4 extraout_var;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong unaff_RBX;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong in_R10;
  undefined1 *puVar7;
  PHKEY in_stack_ffffffffffffff48;
  WCHAR local_b0 [4];
  HKEY__ local_a8 [4];
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_70 [9];
  
  plVar3 = local_70;
  plVar4 = plVar3;
  lVar2 = CreateToolhelp32Snapshot();
  if (lVar2 == 0) {
    unaff_RBX = unaff_RBX - (longlong)plVar3 & (ulonglong)plVar3;
    in_R10 = in_R10 & (ulonglong)plVar4;
  }
  puVar5 = &DAT_1800bf415;
  FUN_18004f868();
  uVar6 = (ulonglong)puVar5 >> 0x15;
  lVar2 = in_R10 - 0x17;
  FUN_180012340();
  FUN_180023858(&DAT_1800c561e,0xd3a74743e85f47fb,lVar2,uVar6);
  puVar7 = (undefined1 *)0x0;
  LVar1 = RegOpenKeyExW(local_a8,local_b0,(DWORD)lVar2,(REGSAM)uVar6,in_stack_ffffffffffffff48);
  if (CONCAT44(extraout_var,LVar1) != 0) {
    unaff_RBX = 0;
  }
  if (local_78 != 0) {
    puVar7 = local_98;
  }
  return (local_70[0] + -0xe) * ((longlong)puVar7 << 0x19 & unaff_RBX) & unaff_RBX;
}


```

---

## Function: FUN_180024cf0 (0x180024cf0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180024cf0(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  PUCHAR pbOutput;
  ulonglong uVar3;
  longlong local_30;
  undefined1 auStack_1b [11];
  
  uVar3 = local_30 * 0x800000;
  puVar1 = auStack_1b;
  lVar2 = 0;
  FUN_180052560();
  if (puVar1 != (undefined1 *)0x0) {
    uVar3 = uVar3 - (longlong)puVar1;
  }
  pbOutput = (PUCHAR)(lVar2 + 0x1b);
  FUN_1800441f0();
  _DAT_9ed66a127a38329a = 0x180024e3e;
  BCryptExportKey((BCRYPT_KEY_HANDLE)0xc276be3ebda5ddc9,(BCRYPT_KEY_HANDLE)0x8b3803b979c27606,
                  (LPCWSTR)0x9ed66a127a3832ea,pbOutput,URam9ed66a127a3832c2,pURam9ed66a127a3832ca,
                  _DAT_9ed66a127a3832d2);
  lVar2 = CONCAT44(uRam9ed66a127a3832d6,_DAT_9ed66a127a3832d2);
  if ((uVar3 >> 0x12 & 0x9ed66a127a3832a2) != 0) {
    lVar2 = _DAT_9ed66a127a3832da + (_DAT_9ed66a127a3832da >> 0xe);
  }
  uVar3 = 0;
  _DAT_9ed66a127a38329a = 0x180024ea7;
  RemoveDirectoryA((LPCSTR)0x0);
  _DAT_9ed66a127a38329a = 0x180024eb2;
  lVar2 = FUN_1800448c0(lVar2,0,uVar3);
  if (lVar2 == 0) {
    lVar2 = 0x12;
  }
  return lVar2;
}


```

---

## Function: FUN_180024ef0 (0x180024ef0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180024ef0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  
  _DAT_e901fc78a3dcda2e = 0x180024f59;
  uVar1 = FUN_1800444c8(param_1 + 0x18,param_3 + 0x17);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 + 1 & unaff_RSI;
  }
  return uVar2;
}


```

---

