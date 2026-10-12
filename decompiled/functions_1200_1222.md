null

Logs:
# Decompiled Functions: index 1200-1222

Total requested: 23, succeeded: 23, failed: 0

## Function: FUN_180055638 (0x180055638)

```c

longlong FUN_180055638(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  ulonglong in_R10;
  longlong unaff_R13;
  undefined1 local_40 [32];
  
  puVar2 = &DAT_1800d506a;
  uVar3 = 0;
  uVar1 = FUN_180014dc0();
  if ((POPCOUNT(uVar1 & 0xff) & 1U) != 0) {
    uVar1 = uVar1 - (unaff_R13 * unaff_RBX * (longlong)puVar2 * uVar1 ^
                    (longlong)local_40 * uVar1 - (in_R10 ^ uVar3));
  }
  return uVar1 - 3;
}


```

---

## Function: FUN_1800556d8 (0x1800556d8)

```c

ulonglong FUN_1800556d8(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x7bd180468289093a;
  puVar1 = (undefined1 *)FUN_180043220();
  if (lVar2 != 0) {
    puVar1 = &stack0xffffffffffffffe8;
  }
  return lVar2 >> 2 ^ (ulonglong)puVar1;
}


```

---

## Function: FUN_180055778 (0x180055778)

```c

void FUN_180055778(void)

{
  FUN_18002a640();
  return;
}


```

---

## Function: FUN_1800557d8 (0x1800557d8)

```c

undefined * FUN_1800557d8(void)

{
  undefined *puVar1;
  longlong in_R10;
  undefined local_20 [16];
  
  puVar1 = &DAT_1800c29f7;
  FUN_18003fee0();
  return local_20 + (longlong)(puVar1 + in_R10);
}


```

---

## Function: FUN_180055850 (0x180055850)

```c

ulonglong FUN_180055850(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong in_R10;
  longlong lVar2;
  ulonglong unaff_R13;
  byte bVar3;
  
  lVar2 = in_R10 + -0x12;
  bVar3 = 0;
  uVar1 = FUN_180050878();
  if (-1 < (longlong)(unaff_R13 & unaff_RBP)) {
    uVar1 = uVar1 ^ lVar2 + 0x1b + (ulonglong)bVar3;
  }
  return uVar1;
}


```

---

## Function: FUN_1800558f0 (0x1800558f0)

```c

void FUN_1800558f0(void)

{
  uint unaff_ESI;
  uint unaff_EDI;
  uint in_R10D;
  undefined1 local_38 [8];
  HWND__ local_30 [4];
  undefined1 local_20 [16];
  
  PostMessageA(local_30,((int)local_38 * (unaff_EDI ^ unaff_ESI) ^ in_R10D) + 5,(WPARAM)local_20,
               0x1800d4c2a);
  return;
}


```

---

## Function: FUN_180055980 (0x180055980)

```c

undefined8 FUN_180055980(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong in_R11;
  ulonglong uVar3;
  
  puVar2 = &DAT_1800c55b1;
  uVar3 = in_R11 * 0x1800c55b1;
  lVar1 = _ftelli64((FILE *)&stack0xfffffffffffffff0);
  if (lVar1 == 0) {
    puVar2 = (undefined *)((ulonglong)puVar2 ^ uVar3);
  }
  RemoveDirectoryA(puVar2 + -0x13);
  return 0x8b58197c;
}


```

---

## Function: FUN_180055a20 (0x180055a20)

```c

/* WARNING: Removing unreachable block (ram,0x000180055abd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180055a20(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  
  uVar2 = 0;
  uVar1 = FUN_18004fb58();
  if (uVar1 != 0) {
    uVar2 = uVar2 | uVar1;
    in_R11 = in_R11 - unaff_R12;
    unaff_R12 = unaff_R12 + 6;
    unaff_R13 = unaff_R13 - in_R11;
  }
  if ((POPCOUNT(unaff_R12 + 0x15 + (ulonglong)((unaff_R13 >> 4 & 1U) != 0) & 0xa8) & 1U) == 0) {
    uVar2 = uVar2 + 0x75f2c887 & in_R11;
  }
  return uVar2;
}


```

---

## Function: FUN_180055b20 (0x180055b20)

```c

void FUN_180055b20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  RemoveDirectoryA((LPCSTR)(param_3 + 0x1c));
  return;
}


```

---

## Function: FUN_180055bc0 (0x180055bc0)

```c

longlong FUN_180055bc0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  return ((param_1 + 0x1bU | 0xf9fccce8d8d6b260) - 0xb) - (ulonglong)CARRY8(param_3,param_1 + 0x1bU)
  ;
}


```

---

## Function: FUN_180055c18 (0x180055c18)

```c

void FUN_180055c18(void)

{
  FUN_18004fd58();
  return;
}


```

---

## Function: FUN_180055c88 (0x180055c88)

```c

/* WARNING: Removing unreachable block (ram,0x000180055ce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180055c88(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar5;
  
  puVar3 = &DAT_1800c5589;
  puVar2 = &DAT_1800cb11f;
  RegisterClassExA((WNDCLASSEXA *)0xe858a3fed2b20e28);
  uVar5 = unaff_R12 * in_R10;
  uVar1 = 0;
  uVar4 = (ulonglong)puVar3 >> 0x19;
  if (uVar5 == 0) {
    uVar1 = 0x2ad0ba628f4484b5;
    uVar4 = uVar4 - ((ulonglong)(puVar2 + 0x19) & in_R10);
    uVar5 = 0x2ad0ba628f448496;
  }
  if (-1 < (longlong)uVar5) {
    uVar1 = (uVar1 ^ uVar5) & uVar4 >> 0x18;
  }
  return uVar1;
}


```

---

## Function: FUN_180055d80 (0x180055d80)

```c

void FUN_180055d80(void)

{
  FUN_180016490();
  return;
}


```

---

## Function: FUN_180055e38 (0x180055e38)

```c

undefined8 FUN_180055e38(void)

{
  undefined8 local_18;
  
  return local_18;
}


```

---

## Function: FUN_180055ed8 (0x180055ed8)

```c

undefined8 FUN_180055ed8(void)

{
  FUN_18003a788();
  return 0x427e5b6f;
}


```

---

## Function: FUN_180055f80 (0x180055f80)

```c

undefined8 FUN_180055f80(void)

{
  return 0xc683af478b1e7b41;
}


```

---

## Function: FUN_180055ff8 (0x180055ff8)

```c

/* WARNING: Removing unreachable block (ram,0x00018005605f) */

ulonglong FUN_180055ff8(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  longlong unaff_R13;
  bool bVar2;
  
  puVar1 = FUN_180044fa0();
  bVar2 = false;
  if (puVar1 != (undefined8 *)0x0) {
    bVar2 = (unaff_R13 - (unaff_RSI + -0x19)) * 0x40 < 0;
  }
  return (longlong)puVar1 + (ulonglong)bVar2 + 0x16;
}


```

---

## Function: FUN_1800560a8 (0x1800560a8)

```c

undefined1 * FUN_1800560a8(void)

{
  undefined1 local_38 [16];
  
  GetCurrentProcessId();
  return local_38;
}


```

---

## Function: FUN_180056178 (0x180056178)

```c

void FUN_180056178(void)

{
  BCryptHashData((BCRYPT_HASH_HANDLE)0xbd78fb2c9bc3ad8a,&DAT_1800c085f,0,0);
  return;
}


```

---

## Function: FUN_180056230 (0x180056230)

```c

longlong FUN_180056230(longlong param_1)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R11;
  
  if ((POPCOUNT(unaff_RDI & 0xff) & 1U) == 0) {
    unaff_RBX = unaff_RBX | 0xc0U - in_R11 * (param_1 + 0xc) * in_RAX;
  }
  return (in_RAX + unaff_RSI) * unaff_RBX;
}


```

---

## Function: FUN_1800562b8 (0x1800562b8)

```c

undefined1 * FUN_1800562b8(void)

{
  undefined1 *puVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  
  puVar1 = FUN_180029310();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0xfffffffffffffff2;
  }
  if ((POPCOUNT(unaff_R13 & unaff_RBP & 0xff) & 1U) != 0) {
    puVar1 = puVar1 + -8;
  }
  return puVar1;
}


```

---

## Function: FUN_180056370 (0x180056370)

```c

/* WARNING: Removing unreachable block (ram,0x0001800563b7) */

longlong FUN_180056370(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong unaff_R13;
  longlong local_38;
  undefined1 local_30 [24];
  
  puVar3 = local_30;
  BVar1 = RemoveDirectoryA((LPCSTR)0x3);
  if (CONCAT44(extraout_var,BVar1) != 0) {
    unaff_R13 = unaff_R13 + 5;
  }
  lVar2 = FUN_18000a090(0x1800ce042,puVar3 + 4,0);
  lVar2 = lVar2 + 0x13;
  if ((longlong)(unaff_R13 & (ulonglong)&stack0xfffffffffffffff8) < 1) {
    lVar2 = local_38;
  }
  return lVar2;
}


```

---

## Function: FUN_180056460 (0x180056460)

```c

undefined1 * FUN_180056460(void)

{
  undefined1 auStack_1e [6];
  
  return auStack_1e;
}


```

---


