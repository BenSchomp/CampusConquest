// ===== FUN_00401000 @ 00401000

undefined4 __cdecl
FUN_00401000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_8c;
  int local_7c [26];
  uint local_14;
  
  param_1[2] = param_7;
  param_1[0x2f] = param_6;
  param_1[3] = param_2;
  puVar3 = param_1 + 0x44;
  param_1[4] = param_3;
  param_1[8] = param_5;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_4;
  puVar4 = puVar3;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_1 + 0x34;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = param_4 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 8 - uVar1;
  }
  param_1[9] = iVar2;
  FUN_004018c0((byte *)s_Create_BOB__d_00412044);
  local_8c = 0;
  if (0 < (int)param_1[0x2f]) {
    do {
      piVar5 = local_7c;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_7c[3] = param_1[9] + param_1[7];
      local_7c[2] = param_1[8];
      local_7c[0] = 0x7c;
      local_7c[1] = 7;
      local_14 = param_8 | 0x40;
      iVar2 = (**(code **)(*DAT_004174cc + 0x18))(DAT_004174cc,local_7c,puVar3,0);
      if (iVar2 < 0) {
        return 0;
      }
      (**(code **)(*(int *)*puVar3 + 0x74))((int *)*puVar3,8,&stack0xffffff6c);
      local_8c = local_8c + 1;
      puVar3 = puVar3 + 1;
    } while (local_8c < (int)param_1[0x2f]);
  }
  return 1;
}


// ===== FUN_00401190 @ 00401190

undefined4 __cdecl FUN_00401190(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    piVar2 = (int *)(param_1 + 0x110);
    iVar3 = 0x40;
    do {
      if (*piVar2 != 0) {
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 1;
  }
  piVar2 = (int *)(param_1 + 0x110);
  iVar3 = 0x40;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined4 *)(param_1 + 0xd0);
  iVar3 = 0x10;
  do {
    if ((LPVOID)*puVar4 != (LPVOID)0x0) {
      FUN_004082bc((LPVOID)*puVar4);
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
}


// ===== FUN_00401210 @ 00401210

uint __cdecl FUN_00401210(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return param_1;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    return 1;
  }
  local_10 = *(int *)(param_1 + 0xc);
  local_c = *(int *)(param_1 + 0x10);
  local_18 = *(int *)(param_1 + 0x1c);
  local_8 = local_10 + local_18;
  local_14 = *(int *)(param_1 + 0x20);
  local_4 = local_c + local_14;
  local_20 = 0;
  local_1c = 0;
  iVar1 = (**(code **)(*param_2 + 0x14))
                    (param_2,&local_10,
                     *(undefined4 *)(param_1 + 0x110 + *(int *)(param_1 + 0xb8) * 4),&local_20,
                     0x1008000,0);
  return (uint)(-1 < iVar1);
}


// ===== FUN_004012a0 @ 004012a0

undefined4 __cdecl
FUN_004012a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_7c [4];
  undefined4 *puStack_6c;
  int iStack_c;
  int iStack_8;
  
  if (param_1 != 0) {
    if (param_6 == 0) {
      param_4 = (*(int *)(param_1 + 0x1c) + 1) * param_4 + 1;
      param_5 = (*(int *)(param_1 + 0x20) + 1) * param_5 + 1;
    }
    local_7c[0] = 0x7c;
    puVar4 = (undefined4 *)
             (*(int *)(param_2 + 0x14) * param_5 + *(int *)(param_2 + 0x438) + param_4);
    piVar1 = *(int **)(param_1 + 0x110 + param_3 * 4);
    (**(code **)(*piVar1 + 100))(piVar1,0,local_7c,1,0);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar3 = *(uint *)(param_1 + 0x1c);
      do {
        puVar5 = puVar4;
        puVar6 = puStack_6c;
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar3 = *(uint *)(param_1 + 0x1c);
        puStack_6c = (undefined4 *)((int)puStack_6c + *(int *)(param_1 + 0x24) + uVar3);
        puVar4 = (undefined4 *)((int)puVar4 + *(int *)(iStack_c + 0x14));
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x20));
    }
    piVar1 = *(int **)(param_1 + 0x110 + iStack_8 * 4);
    (**(code **)(*piVar1 + 0x80))(piVar1,0);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80;
    return 1;
  }
  return 0;
}


// ===== FUN_004013c0 @ 004013c0

int __cdecl FUN_004013c0(int param_1)

{
  if (param_1 == 0) {
    return param_1;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffef;
  return 1;
}


// ===== FUN_004013e0 @ 004013e0

int __cdecl FUN_004013e0(int param_1)

{
  if (param_1 == 0) {
    return param_1;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  return 1;
}


// ===== FUN_00401400 @ 00401400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401400(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *unaff_EDI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  puVar5 = &local_4;
  uVar6 = 0;
  local_4 = 0;
  iVar1 = DirectDrawCreate(0,puVar5,0);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = (**(code **)*unaff_EDI)(unaff_EDI,&DAT_004101c0);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_004174cc + 0x50))(DAT_004174cc,DAT_0041a528,0x53);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_004174cc + 0x54))(DAT_004174cc,&DAT_004174cc,uVar6,puVar5,0,0);
  if (iVar1 < 0) {
    return 0;
  }
  puVar4 = &DAT_004168f8;
  DAT_0041203c = uVar6;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_00412038 = &DAT_004174cc;
  DAT_004168f8 = 0x7c;
  DAT_004168fc = 0x21;
  _DAT_00416960 = 0x218;
  _DAT_0041690c = 1;
  _DAT_00412040 = puVar5;
  (**(code **)(*DAT_004174cc + 0x18))(DAT_004174cc,&DAT_004168f8,&DAT_004174d0,0);
  _DAT_004174b8 = 4;
  iVar1 = (**(code **)(*DAT_004174d0 + 0x30))(DAT_004174d0,&DAT_004174b8,&DAT_004174d4);
  if (iVar1 < 0) {
    return 0;
  }
  cVar3 = '\0';
  puVar5 = &DAT_004137d0;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pcVar2 = (char *)((int)&DAT_004137d0 + 1);
  do {
    if ((int)pcVar2 < 0x4138d1) {
LAB_0040156a:
      pcVar2[-1] = cVar3 << 2;
    }
    else if ((int)pcVar2 < 0x4139d1) {
      *pcVar2 = cVar3 << 2;
    }
    else if ((int)pcVar2 < 0x413ad1) {
      pcVar2[1] = cVar3 << 2;
    }
    else if ((int)pcVar2 < 0x413bd1) {
      pcVar2[1] = cVar3 << 2;
      *pcVar2 = cVar3 << 2;
      goto LAB_0040156a;
    }
    pcVar2[2] = '\x04';
    pcVar2 = pcVar2 + 4;
    cVar3 = cVar3 + '\x01';
    if (0x413bd0 < (int)pcVar2) {
      iVar1 = (**(code **)(*DAT_004174cc + 0x14))(DAT_004174cc,0x4c,&DAT_004137d0,&DAT_004174d8,0);
      if (iVar1 < 0) {
        return 0;
      }
      iVar1 = (**(code **)(*DAT_004174d0 + 0x7c))(DAT_004174d0,DAT_004174d8);
      if (-1 < iVar1) {
        FUN_004016a0(DAT_004174d0,0);
        FUN_004016a0(DAT_004174d4,0);
        return 1;
      }
      return 0;
    }
  } while( true );
}


// ===== FUN_004015f0 @ 004015f0

undefined4 FUN_004015f0(void)

{
  if (DAT_004174dc != (int *)0x0) {
    (**(code **)(*DAT_004174dc + 8))(DAT_004174dc);
  }
  if (DAT_004174d8 != (int *)0x0) {
    (**(code **)(*DAT_004174d8 + 8))(DAT_004174d8);
  }
  if (DAT_004174d4 != (int *)0x0) {
    (**(code **)(*DAT_004174d4 + 8))(DAT_004174d4);
  }
  if (DAT_004174d0 != (int *)0x0) {
    (**(code **)(*DAT_004174d0 + 8))(DAT_004174d0);
  }
  if (DAT_004174cc != (int *)0x0) {
    (**(code **)(*DAT_004174cc + 8))(DAT_004174cc);
  }
  return 1;
}


// ===== FUN_00401650 @ 00401650

undefined4 FUN_00401650(void)

{
  int iVar1;
  
  if ((DAT_004174e0 == 0) && (DAT_004174e4 == 0)) {
    iVar1 = (**(code **)(*DAT_004174d0 + 0x2c))(DAT_004174d0,0,1);
    while (iVar1 < 0) {
      iVar1 = (**(code **)(*DAT_004174d0 + 0x2c))(DAT_004174d0,0,1);
    }
    return 1;
  }
  return 0;
}


// ===== FUN_004016a0 @ 004016a0

undefined4 __cdecl FUN_004016a0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  puVar1 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_14 = param_2;
  local_64[0] = 100;
  (**(code **)(*param_1 + 0x14))(param_1,0,0,0,0x1000400,local_64);
  return 1;
}


// ===== FUN_004016f0 @ 004016f0

void FUN_004016f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004174e4 == 0) {
    puVar2 = &DAT_004168f8;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_004168f8 = 0x7c;
    (**(code **)(*DAT_004174d4 + 100))(DAT_004174d4,0,&DAT_004168f8,1,0);
    DAT_004174e4 = DAT_0041691c;
    DAT_004174ec = DAT_00416908;
  }
  return;
}


// ===== FUN_00401740 @ 00401740

undefined4 FUN_00401740(void)

{
  if (DAT_004174e4 == 0) {
    return 0;
  }
  (**(code **)(*DAT_004174d4 + 0x80))(DAT_004174d4,0);
  DAT_004174e4 = 0;
  DAT_004174ec = 0;
  return 1;
}


// ===== GetTickCount @ 00401780

DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


// ===== FUN_00401790 @ 00401790

void FUN_00401790(void)

{
  DAT_004174f0 = GetTickCount();
  return;
}


// ===== FUN_004017a0 @ 004017a0

void __cdecl FUN_004017a0(uint param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetTickCount();
  uVar2 = DVar1 - DAT_004174f0;
  while (uVar2 < param_1) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 - DAT_004174f0;
  }
  GetTickCount();
  return;
}


// ===== FUN_004017d0 @ 004017d0

undefined4 __cdecl FUN_004017d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004137d0;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}


// ===== FUN_004017f0 @ 004017f0

undefined4 __cdecl FUN_004017f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_004174d8;
  puVar3 = &DAT_004137d0;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0x100,&DAT_004137d0);
  return 1;
}


// ===== FUN_00401830 @ 00401830

undefined4 __cdecl FUN_00401830(int param_1,int param_2,HDC param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  LPCSTR unaff_ESI;
  LPCSTR pCVar5;
  int unaff_retaddr;
  
  piVar2 = param_5;
  iVar3 = (**(code **)(*param_5 + 0x44))(param_5,&param_5);
  if (iVar3 < 0) {
    return 0;
  }
  SetTextColor(param_3,(uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_004137d0 + param_2 * 4 + 2)
                                               ,*(undefined1 *)
                                                 ((int)&DAT_004137d0 + param_2 * 4 + 1)),
                                      *(undefined1 *)(&DAT_004137d0 + param_2)));
  SetBkMode(param_3,1);
  uVar4 = 0xffffffff;
  pCVar5 = unaff_ESI;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
  } while (cVar1 != '\0');
  TextOutA(param_3,unaff_retaddr,param_1,unaff_ESI,~uVar4 - 1);
  (**(code **)(*piVar2 + 0x68))(piVar2,param_3);
  return 1;
}


// ===== FUN_004018c0 @ 004018c0

undefined4 __cdecl FUN_004018c0(byte *param_1)

{
  byte local_50 [80];
  
  if ((param_1 != (byte *)0x0) && (DAT_004174c8 != (int *)0x0)) {
    FUN_004084a8(local_50,param_1,(undefined4 *)&stack0x00000008);
    FUN_00408476(DAT_004174c8,local_50);
    return 1;
  }
  return 0;
}


// ===== FUN_00401910 @ 00401910

undefined4 __cdecl
FUN_00401910(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4 * param_5;
  puVar1 = (undefined4 *)_malloc(uVar3);
  param_1[7] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = uVar3;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return 1;
}


// ===== FUN_00401980 @ 00401980

undefined4 __cdecl FUN_00401980(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && ((LPVOID)param_1[7] != (LPVOID)0x0)) {
    FUN_004082bc((LPVOID)param_1[7]);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}


// ===== FUN_004019b0 @ 004019b0

undefined4 __cdecl FUN_004019b0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar2 = param_1;
  if ((*(byte *)(param_1 + 4) & 0x80) == 0) {
    return 0;
  }
  pcVar6 = *(char **)(param_1 + 0x1c);
  pcVar5 = (char *)(*(int *)(param_1 + 0xc) * param_3 + *(int *)(param_1 + 8) + param_2);
  piVar1 = (int *)(param_1 + 0x14);
  param_1 = 0;
  if (param_4 == 0) {
    if (0 < *piVar1) {
      uVar4 = *(uint *)(iVar2 + 0x10);
      do {
        pcVar8 = pcVar6;
        pcVar9 = pcVar5;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar4 = *(uint *)(iVar2 + 0x10);
        pcVar5 = pcVar5 + param_3;
        pcVar6 = pcVar6 + uVar4;
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(iVar2 + 0x14));
    }
  }
  else if (0 < *piVar1) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x10)) {
        pcVar8 = pcVar5;
        do {
          if (pcVar8[(int)pcVar6 - (int)pcVar5] != '\0') {
            *pcVar8 = pcVar8[(int)pcVar6 - (int)pcVar5];
          }
          iVar7 = iVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar7 < *(int *)(iVar2 + 0x10));
      }
      pcVar5 = pcVar5 + param_3;
      pcVar6 = pcVar6 + *(int *)(iVar2 + 0x10);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x14));
    return 1;
  }
  return 1;
}


// ===== FUN_00401a80 @ 00401a80

undefined4 __cdecl FUN_00401a80(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1 != 0) {
    iVar2 = param_4;
    if (param_5 == 0) {
      param_3 = (*(int *)(param_1 + 0x10) + 1) * param_3 + 1;
      iVar2 = (*(int *)(param_1 + 0x14) + 1) * param_4 + 1;
    }
    param_4 = 0;
    puVar5 = *(undefined4 **)(param_1 + 0x1c);
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x14) * iVar2 + *(int *)(param_2 + 0x438) + param_3);
    if (0 < *(int *)(param_1 + 0x14)) {
      uVar4 = *(uint *)(param_1 + 0x10);
      do {
        puVar6 = puVar1;
        puVar7 = puVar5;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        uVar4 = *(uint *)(param_1 + 0x10);
        puVar5 = (undefined4 *)((int)puVar5 + uVar4);
        puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_2 + 0x14));
        param_4 = param_4 + 1;
      } while (param_4 < *(int *)(param_1 + 0x14));
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    return 1;
  }
  return 0;
}


// ===== FUN_00401b20 @ 00401b20

undefined4 __cdecl FUN_00401b20(short *param_1,LPCSTR param_2)

{
  short sVar1;
  uint hFile;
  short *psVar2;
  void *lpBuffer;
  int iVar3;
  _OFSTRUCT local_88;
  
  hFile = OpenFile(param_2,&local_88,0);
  if (hFile == 0xffffffff) {
    return 0;
  }
  _lread(hFile,param_1,0xe);
  if (*param_1 == 0x4d42) {
    _lread(hFile,param_1 + 8,0x28);
    if (param_1[0xf] == 8) {
      _lread(hFile,param_1 + 0x1c,0x400);
      psVar2 = param_1 + 0x1d;
      iVar3 = 0x100;
      do {
        sVar1 = psVar2[-1];
        *(char *)(psVar2 + -1) = (char)*psVar2;
        *(char *)psVar2 = (char)sVar1;
        *(undefined1 *)((int)psVar2 + 1) = 4;
        psVar2 = psVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004084f9(hFile,-*(int *)(param_1 + 0x12),2);
    sVar1 = param_1[0xf];
    if (((sVar1 != 8) && (sVar1 != 0x10)) && (sVar1 != 0x18)) {
      return 0;
    }
    if (*(LPVOID *)(param_1 + 0x21c) != (LPVOID)0x0) {
      FUN_004082bc(*(LPVOID *)(param_1 + 0x21c));
    }
    lpBuffer = _malloc(*(size_t *)(param_1 + 0x12));
    *(void **)(param_1 + 0x21c) = lpBuffer;
    if (lpBuffer != (void *)0x0) {
      _lread(hFile,lpBuffer,*(UINT *)(param_1 + 0x12));
      _lclose(hFile);
      FUN_00401ca0(*(undefined4 **)(param_1 + 0x21c),
                   (uint)((ushort)param_1[0xf] >> 3) * *(int *)(param_1 + 10),
                   *(int *)(param_1 + 0xc));
      return 1;
    }
    _lclose(hFile);
    return 0;
  }
  _lclose(hFile);
  return 0;
}


// ===== FUN_00401c70 @ 00401c70

undefined4 __cdecl FUN_00401c70(int param_1)

{
  if (*(LPVOID *)(param_1 + 0x438) != (LPVOID)0x0) {
    FUN_004082bc(*(LPVOID *)(param_1 + 0x438));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return 1;
}


// ===== FUN_00401ca0 @ 00401ca0

undefined4 __cdecl FUN_00401ca0(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar4 = param_2 * param_3;
  puVar1 = (undefined4 *)_malloc(uVar4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = param_1;
    puVar6 = puVar1;
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (0 < param_3) {
      puVar3 = (undefined4 *)((param_3 + -1) * param_2 + (int)param_1);
      param_1 = (undefined4 *)param_3;
      puVar6 = puVar1;
      do {
        puVar5 = puVar6;
        puVar7 = puVar3;
        for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        puVar6 = (undefined4 *)((int)puVar6 + param_2);
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar3 = (undefined4 *)((int)puVar3 - param_2);
      } while (param_1 != (undefined4 *)0x0);
    }
    FUN_004082bc(puVar1);
    return 1;
  }
  return 0;
}


// ===== FUN_00401d40 @ 00401d40

void __cdecl
FUN_00401d40(int param_1,int param_2,int param_3,undefined1 param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((param_3 <= DAT_00412034) && (DAT_004174fc <= param_3)) {
    iVar1 = param_2;
    if (param_2 < param_1) {
      iVar1 = param_1;
      param_1 = param_2;
    }
    if ((param_1 <= DAT_00412030) && (DAT_004174f8 <= iVar1)) {
      if (param_1 < DAT_004174f8) {
        param_1 = DAT_004174f8;
      }
      if (DAT_00412030 < iVar1) {
        iVar1 = DAT_00412030;
      }
      uVar2 = (iVar1 - param_1) + 1;
      puVar4 = (undefined4 *)(param_3 * param_6 + param_1 + param_5);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = param_4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  return;
}


// ===== FUN_00401dc0 @ 00401dc0

void __cdecl
FUN_00401dc0(int param_1,int param_2,int param_3,undefined1 param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((param_3 <= DAT_00412030) && (DAT_004174f8 <= param_3)) {
    iVar2 = param_1;
    if (param_2 < param_1) {
      iVar2 = param_2;
      param_2 = param_1;
    }
    if ((iVar2 <= DAT_00412034) && (DAT_004174fc <= param_2)) {
      if (iVar2 < DAT_004174fc) {
        iVar2 = DAT_004174fc;
      }
      if (DAT_00412034 < param_2) {
        param_2 = DAT_00412034;
      }
      puVar1 = (undefined1 *)(iVar2 * param_6 + param_3 + param_5);
      if (-1 < param_2 - iVar2) {
        iVar2 = (param_2 - iVar2) + 1;
        do {
          *puVar1 = param_4;
          puVar1 = puVar1 + param_6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}


// ===== FUN_00401e30 @ 00401e30

void __cdecl FUN_00401e30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  char local_408;
  byte bStack_407;
  byte bStack_406;
  undefined1 uStack_405;
  uint local_400 [256];
  
  switch(param_1) {
  case 0:
    iVar7 = 0x50;
    do {
      FUN_004017d0(local_400);
      puVar8 = local_400;
      iVar9 = 0xff;
      do {
        puVar8 = puVar8 + 1;
        uVar2 = *puVar8;
        bStack_407 = (byte)(uVar2 >> 8);
        bStack_406 = (byte)(uVar2 >> 0x10);
        uStack_405 = (undefined1)(uVar2 >> 0x18);
        if ((byte)uVar2 < 5) {
          local_408 = '\0';
        }
        else {
          local_408 = (byte)uVar2 - 3;
        }
        if (bStack_407 < 5) {
          bStack_407 = '\0';
        }
        else {
          bStack_407 = bStack_407 - 3;
        }
        if (bStack_406 < 5) {
          bStack_406 = '\0';
        }
        else {
          bStack_406 = bStack_406 - 3;
        }
        *puVar8 = CONCAT13(uStack_405,CONCAT12(bStack_406,CONCAT11(bStack_407,local_408)));
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_004017f0(local_400);
      FUN_00401790();
      FUN_004017a0(0xc);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  case 1:
    iVar7 = 0x40;
    do {
      FUN_004017d0(local_400);
      puVar8 = local_400;
      iVar9 = 0x100;
      do {
        uVar2 = *puVar8;
        uStack_405 = (undefined1)(uVar2 >> 0x18);
        uVar4 = (uVar2 & 0xff) + 4;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        uVar5 = (uVar2 >> 8 & 0xff) + 4;
        if (0xfe < uVar5) {
          uVar5 = 0xff;
        }
        uVar3 = ((ushort)(uVar2 >> 0x10) & 0xff) + 4;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        *puVar8 = CONCAT13(uStack_405,CONCAT12((char)uVar3,CONCAT11((char)uVar5,(char)uVar4)));
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_004017f0(local_400);
      FUN_00401790();
      FUN_004017a0(0xc);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  case 2:
    iVar7 = 0;
    if (0 < DAT_00412038 / 2) {
      do {
        FUN_00401790();
        FUN_004017a0(0xc);
        FUN_00401dc0(0,DAT_0041203c + -1,(DAT_00412038 - iVar7) + -1,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,iVar7,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,(DAT_00412038 - iVar7) + -2,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,iVar7 + 1,0,param_2,param_3);
        iVar7 = iVar7 + 2;
      } while (iVar7 < DAT_00412038 / 2);
      return;
    }
    break;
  case 3:
    iVar7 = 0;
    if (0 < DAT_0041203c / 2) {
      do {
        FUN_00401790();
        FUN_004017a0(0xc);
        FUN_00401d40(0,DAT_00412038 + -1,(DAT_0041203c - iVar7) + -1,0,param_2,param_3);
        FUN_00401d40(0,DAT_00412038 + -1,iVar7,0,param_2,param_3);
        FUN_00401d40(0,DAT_00412038 + -1,(DAT_0041203c - iVar7) + -2,0,param_2,param_3);
        FUN_00401d40(0,DAT_00412038 + -1,iVar7 + 1,0,param_2,param_3);
        iVar7 = iVar7 + 2;
      } while (iVar7 < DAT_0041203c / 2);
      return;
    }
    break;
  case 4:
    iVar7 = 0;
    if (-1 < DAT_0041203c * DAT_00412038 * 4) {
      do {
        uVar2 = FUN_00408593();
        iVar9 = (int)uVar2 % DAT_0041203c;
        uVar2 = FUN_00408593();
        iVar7 = iVar7 + 1;
        *(undefined1 *)(iVar9 * param_3 + param_2 + (int)uVar2 % DAT_00412038) = 0;
      } while (iVar7 <= DAT_0041203c * DAT_00412038 * 4);
    }
    break;
  case 5:
    iVar7 = 0;
    if (0 < DAT_00412038 / 2) {
      do {
        FUN_00401790();
        FUN_004017a0(0xc);
        FUN_00401d40(0,DAT_00412038 + -1,(DAT_0041203c - iVar7 % (DAT_0041203c / 2)) + -1,0,param_2,
                     param_3);
        FUN_00401d40(0,DAT_00412038 + -1,iVar7 % (DAT_0041203c / 2),0,param_2,param_3);
        FUN_00401d40(0,DAT_00412038 + -1,(DAT_0041203c - iVar7 % (DAT_0041203c / 2)) + -2,0,param_2,
                     param_3);
        FUN_00401d40(0,DAT_00412038 + -1,iVar7 % (DAT_0041203c / 2) + 1,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,(DAT_00412038 - iVar7) + -1,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,iVar7,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,(DAT_00412038 - iVar7) + -2,0,param_2,param_3);
        FUN_00401dc0(0,DAT_0041203c + -1,iVar7 + 1,0,param_2,param_3);
        iVar7 = iVar7 + 2;
      } while (iVar7 < DAT_00412038 / 2);
      return;
    }
    break;
  case 6:
    iVar7 = 0x40;
    do {
      FUN_004017d0(local_400);
      puVar8 = local_400;
      iVar9 = 0x100;
      do {
        uVar2 = *puVar8;
        uStack_405 = (undefined1)(uVar2 >> 0x18);
        iVar1 = (uVar2 & 0xff) - 4;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        iVar6 = (uVar2 >> 8 & 0xff) - 4;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        uVar3 = ((ushort)(uVar2 >> 0x10) & 0xff) + 6;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        *puVar8 = CONCAT13(uStack_405,CONCAT12((char)uVar3,CONCAT11((char)iVar6,(char)iVar1)));
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_004017f0(local_400);
      FUN_00401790();
      FUN_004017a0(0xc);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  case 7:
    iVar7 = 0x40;
    do {
      FUN_004017d0(local_400);
      puVar8 = local_400;
      iVar9 = 0x100;
      do {
        uVar2 = *puVar8;
        uStack_405 = (undefined1)(uVar2 >> 0x18);
        uVar4 = (uVar2 & 0xff) + 6;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        iVar1 = (uVar2 >> 8 & 0xff) - 4;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        iVar6 = (uVar2 >> 0x10 & 0xff) - 4;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        *puVar8 = CONCAT13(uStack_405,CONCAT12((char)iVar6,CONCAT11((char)iVar1,(char)uVar4)));
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_004017f0(local_400);
      FUN_00401790();
      FUN_004017a0(0xc);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  case 8:
    iVar7 = 0x40;
    do {
      FUN_004017d0(local_400);
      puVar8 = local_400;
      iVar9 = 0x100;
      do {
        uVar2 = *puVar8;
        uStack_405 = (undefined1)(uVar2 >> 0x18);
        iVar1 = (uVar2 & 0xff) - 4;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        uVar4 = (uVar2 >> 8 & 0xff) + 6;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        iVar6 = (uVar2 >> 0x10 & 0xff) - 4;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        *puVar8 = CONCAT13(uStack_405,CONCAT12((char)iVar6,CONCAT11((char)uVar4,(char)iVar1)));
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_004017f0(local_400);
      FUN_00401790();
      FUN_004017a0(0xc);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  }
  return;
}


// ===== FUN_004024c0 @ 004024c0

void __fastcall FUN_004024c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00410170;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== FUN_004024d0 @ 004024d0

void __thiscall FUN_004024d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00402730(param_2);
  iVar2 = FUN_00402770(param_3);
  if ((((param_4 != 0x201) || (*(char *)(param_1 + 4) != '\0')) || (*(char *)(param_1 + 8) != '\0'))
     || ((iVar1 < 0 || (iVar2 < 0)))) {
    if (((0x1a9 < param_2) && ((param_2 < 0x1c0 && (0x175 < param_3)))) && (param_3 < 0x187)) {
      if (param_4 == 0x201) {
        *(undefined1 *)(param_1 + 5) = 1;
        return;
      }
      SetCursor(DAT_00419f8c);
    }
    return;
  }
  uVar3 = FUN_004025f0(iVar1,iVar2);
  iVar4 = DAT_00419660;
  if ((char)uVar3 != '\0') {
    FUN_004026e0(iVar1,iVar2);
    FUN_00407760(DAT_00417514);
    uVar3 = FUN_00402670(param_1);
    iVar4 = DAT_00417510;
    if ((char)uVar3 == '\0') goto LAB_0040257e;
  }
  FUN_00407760(iVar4);
LAB_0040257e:
  FUN_004027a0();
  FUN_00403540((byte *)s_boxBkgd_dib_0041205c);
  return;
}


// ===== FUN_004025f0 @ 004025f0

undefined4 FUN_004025f0(int param_1,int param_2)

{
  undefined3 uVar1;
  
  uVar1 = (undefined3)((uint)param_1 >> 8);
  if ((-1 < param_1 + -1) && (*(int *)(&DAT_00417508 + (param_2 + param_1 * 4) * 4) == -1)) {
    return CONCAT31(uVar1,1);
  }
  if ((-1 < param_2 + -1) && ((&DAT_00417514)[param_2 + param_1 * 4] == -1)) {
    return CONCAT31(uVar1,1);
  }
  if ((param_1 + 1 < 4) && ((&DAT_00417528)[param_2 + param_1 * 4] == -1)) {
    return CONCAT31(uVar1,1);
  }
  if ((param_2 + 1 < 4) && (param_1 = param_2 + param_1 * 4, (&DAT_0041751c)[param_1] == -1)) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}


// ===== FUN_00402670 @ 00402670

undefined4 __fastcall FUN_00402670(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 4) = 1;
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      if (iVar2 == 3) {
        if (iVar1 == 3) {
          if (DAT_00417554 == -1) goto LAB_004026ad;
        }
        else {
          if (iVar1 != 2) goto LAB_0040269b;
LAB_004026c5:
          if (((&DAT_00417518)[iVar1 + iVar2 * 4] == 6) ||
             ((&DAT_00417518)[iVar1 + iVar2 * 4] == 0xb)) goto LAB_004026ad;
        }
LAB_004026aa:
        *(undefined1 *)(param_1 + 4) = 0;
      }
      else {
        if ((iVar2 == 2) && (iVar1 == 1)) goto LAB_004026c5;
LAB_0040269b:
        if ((&DAT_00417518)[iVar1 + iVar2 * 4] != iVar2 + iVar1 * 4) goto LAB_004026aa;
      }
LAB_004026ad:
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(param_1 + 4));
    }
  } while( true );
}


// ===== FUN_004026e0 @ 004026e0

void FUN_004026e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_2 + param_1 * 4;
  piVar3 = &DAT_00417518;
  iVar2 = (&DAT_00417518)[iVar1];
  do {
    iVar4 = 4;
    do {
      if (*piVar3 == -1) {
        *piVar3 = iVar2;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while ((int)piVar3 < 0x417558);
  (&DAT_00417518)[iVar1] = 0xffffffff;
  return;
}


// ===== FUN_00402720 @ 00402720

void FUN_00402720(void)

{
  return;
}


// ===== FUN_00402730 @ 00402730

int FUN_00402730(int param_1)

{
  if ((0xd5 < param_1) && (param_1 < 0x19f)) {
    return (param_1 + -0xd6) / 0x32;
  }
  return -1;
}


// ===== FUN_00402770 @ 00402770

int FUN_00402770(int param_1)

{
  if ((0x6e < param_1) && (param_1 < 0x138)) {
    return (param_1 + -0x6f) / 0x32;
  }
  return -1;
}


// ===== FUN_004027a0 @ 004027a0

void FUN_004027a0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0x6f;
  piVar3 = &DAT_00417518;
  do {
    iVar2 = 0xd6;
    piVar4 = piVar3;
    do {
      if (-1 < *piVar4) {
        iVar1 = *piVar4 * 0x210;
        *(int *)(&DAT_0041756c + iVar1) = iVar2;
        *(int *)(&DAT_00417570 + iVar1) = iVar5;
      }
      iVar2 = iVar2 + 0x32;
      piVar4 = piVar4 + 4;
    } while (iVar2 < 0x19e);
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + 0x32;
  } while ((int)piVar3 < 0x417528);
  return;
}


// ===== FUN_00402800 @ 00402800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00402800(int param_1)

{
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    DAT_00417518 = 0xd;
    DAT_0041751c = 9;
    DAT_00417520 = 4;
    _DAT_00417524 = 0xe;
    DAT_00417528 = 0xc;
    _DAT_0041752c = 3;
    _DAT_00417530 = 0xb;
    _DAT_00417534 = 5;
    _DAT_00417538 = 8;
    _DAT_0041753c = 7;
    _DAT_00417540 = 0;
    _DAT_00417544 = 1;
    _DAT_00417548 = 10;
    _DAT_0041754c = 2;
    _DAT_00417550 = 6;
    DAT_00417554 = 0xffffffff;
    FUN_004027a0();
  }
  DAT_004120e4 = DAT_00417558;
  FUN_00407b00(DAT_00417558);
  FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_00417558 * 4));
  FUN_00403540((byte *)s_boxBkgd_dib_0041205c);
  return;
}


// ===== FUN_004028e0 @ 004028e0

undefined4 __fastcall FUN_004028e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  *(undefined1 *)(param_1 + 4) = 0;
  puVar3 = (undefined4 *)&DAT_00417560;
  do {
    iVar1 = FUN_00401000(puVar3,0,0,0x32,0x32,1,0x11,0x800);
    if (iVar1 == 0) {
      return 0;
    }
    puVar3 = puVar3 + 0x84;
  } while ((int)puVar3 < 0x419450);
  iVar1 = FUN_00401b20((short *)&DAT_00413c38,s___images_boxTemplate_dib_004120c4);
  if (iVar1 == 0) {
    FUN_004060d0((byte *)s____Error_loading_image__boxTempl_00412098);
    return 0;
  }
  uVar4 = 0;
  puVar5 = &DAT_00417560;
  do {
    uVar2 = uVar4 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    FUN_004012a0((int)puVar5,0x413c38,0,uVar2 * 0x32,
                 ((int)(uVar4 + ((int)uVar4 >> 0x1f & 3U)) >> 2) * 0x32,1);
    puVar5 = puVar5 + 0x210;
    uVar4 = uVar4 + 1;
  } while ((int)puVar5 < 0x419450);
  FUN_00401c70(0x413c38);
  DAT_00417514 = FUN_004038d0((byte *)s_click_wav_0041208c);
  DAT_00417510 = FUN_004038d0((byte *)s_win_wav_00412084);
  DAT_00419660 = FUN_004038d0((byte *)s_buzzer_wav_00412078);
  DAT_00417558 = FUN_00403a30((byte *)s_midifile7_mid_00412068);
  return 1;
}


// ===== thunk_FUN_00402a00 @ 004029f0

undefined * thunk_FUN_00402a00(void)

{
  FUN_00406c70((undefined4 *)0x419fb4);
  FUN_004064a0((undefined4 *)0x41a2c0);
  FUN_00403cc0((undefined4 *)0x41a2c8);
  FUN_00407d00((undefined4 *)0x41a310);
  FUN_004024c0((undefined4 *)0x41a31c);
  DAT_00419fb0 = 0;
  return &DAT_00419fb0;
}


// ===== FUN_00402a00 @ 00402a00

undefined * FUN_00402a00(void)

{
  FUN_00406c70((undefined4 *)0x419fb4);
  FUN_004064a0((undefined4 *)0x41a2c0);
  FUN_00403cc0((undefined4 *)0x41a2c8);
  FUN_00407d00((undefined4 *)0x41a310);
  FUN_004024c0((undefined4 *)0x41a31c);
  DAT_00419fb0 = 0;
  return &DAT_00419fb0;
}


// ===== FUN_00402a10 @ 00402a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_00402a10(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  char cVar1;
  LRESULT LVar2;
  tagPAINTSTRUCT tStack_40;
  
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      BeginPaint(param_1,&tStack_40);
      EndPaint(param_1,&tStack_40);
      return 0;
    }
    if (param_2 == 1) {
      DAT_00419f8c = LoadCursorA(DAT_0041a530,&DAT_00000069);
      DAT_00419f90 = LoadCursorA(DAT_0041a530,&DAT_00000068);
      _DAT_00419f94 = LoadCursorA(DAT_0041a530,&DAT_00000083);
      _DAT_00419f98 = LoadCursorA(DAT_0041a530,&DAT_00000084);
      DAT_00419f9c = LoadCursorA(DAT_0041a530,&DAT_00000087);
      return 0;
    }
    if (param_2 == 2) {
      PostQuitMessage(0);
      return 0;
    }
  }
  else if ((0x1ff < param_2) && (param_2 < 0x202)) {
    DAT_004120ec = param_4 & 0xffff;
    DAT_004120f0 = param_4 >> 0x10;
    if ((DAT_00419e82 != '\0') && (param_2 == 0x201)) {
      FUN_004085b1(&DAT_00419d9c,(byte *)s_mouse_click_at___d___d__00412100);
      FUN_004060d0(&DAT_00419d9c);
    }
    switch(DAT_004120e0) {
    case 0:
    case 5:
      FUN_00405a90(DAT_004120ec,DAT_004120f0,param_2);
      break;
    case 1:
      FUN_004068c0(&DAT_00419fb0,DAT_004120ec,DAT_004120f0,param_2);
      cVar1 = FUN_00406a30(&DAT_00419fb0);
      if (cVar1 != '\0') {
        cVar1 = FUN_00406ac0(&DAT_00419fb0);
        if (cVar1 != '\0') {
          FUN_00406b60(&DAT_00419fb0);
        }
        FUN_00403b90(&DAT_004120f8);
        FUN_00406140();
      }
      break;
    case 2:
      FUN_00402c30(DAT_004120ec,DAT_004120f0,param_2);
      break;
    case 3:
      FUN_00402e60(DAT_004120ec,DAT_004120f0,param_2);
    }
  }
  if (DAT_004120e0 == 0) {
    FUN_00405a90(DAT_004120ec,DAT_004120f0,0x200);
  }
  else if (DAT_004120e0 == 1) {
    FUN_004068c0(&DAT_00419fb0,DAT_004120ec,DAT_004120f0,0x200);
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}


// ===== FUN_00402c30 @ 00402c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00402c30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x201) {
    if (0x10e < param_1) {
      if (((0x11e < param_2) && (param_1 < 0x160)) && (param_2 < 0x137)) {
        PostMessageA(DAT_0041a528,2,0,0);
        _DAT_0041a52c = 1;
        return;
      }
      if (((0xaf < param_2) && (param_1 < 0x160)) && (param_2 < 200)) {
        FUN_004047e0(s_campus_sav_0041211c);
        iVar1 = FUN_004038d0((byte *)s_click_wav_0041208c);
        FUN_00407760(*(int *)(&DAT_0041a328 + iVar1 * 4));
        return;
      }
      if (((200 < param_2) && (param_1 < 0x160)) && (param_2 < 0xe4)) {
        FUN_00403b90(&DAT_004120f8);
        FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
        FUN_00407850();
        FUN_004044e0();
        FUN_004045a0(s_campus_sav_0041211c);
        FUN_00406140();
        return;
      }
      if (((0xe4 < param_2) && (param_1 < 0x160)) && (param_2 < 0xfd)) {
        FUN_00403b90(&DAT_004120f8);
        FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
        FUN_00407850();
        FUN_004044e0();
        FUN_00406140();
        return;
      }
    }
    if (((0xc3 < param_1) && (0x15f < param_2)) && ((param_1 < 0x1af && (param_2 < 0x192)))) {
      FUN_00403b90(&DAT_004120f8);
      FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
      FUN_00407850();
      FUN_00406140();
      return;
    }
    if (((0x61 < param_1) && (0x13a < param_2)) && ((param_1 < 0xdf && (param_2 < 0x15a)))) {
      DAT_00419e85 = DAT_00419e85 == '\0';
      iVar1 = FUN_004038d0((byte *)s_click_wav_0041208c);
      FUN_00407760(*(int *)(&DAT_0041a328 + iVar1 * 4));
      return;
    }
    if ((((0x198 < param_1) && (0x13d < param_2)) && (param_1 < 0x21c)) && (param_2 < 0x158)) {
      DAT_00419e86 = DAT_00419e86 == '\0';
      iVar1 = FUN_004038d0((byte *)s_click_wav_0041208c);
      FUN_00407760(*(int *)(&DAT_0041a328 + iVar1 * 4));
    }
  }
  return;
}


// ===== FUN_00402e60 @ 00402e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00402e60(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  if (param_3 != 0x200) {
    if (param_3 != 0x201) {
      return;
    }
    if ((((0x1ea < param_1) && (0x1c2 < param_2)) && (param_1 < 0x244)) && (param_2 < 0x1d6)) {
      PostMessageA(DAT_0041a528,2,0,0);
      _DAT_0041a52c = 1;
      return;
    }
    if (((0x17c < param_1) && (0x1c2 < param_2)) && ((param_1 < 0x1cc && (param_2 < 0x1d6)))) {
      FUN_00403b90(&DAT_004120f8);
      FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
      FUN_00407850();
      FUN_004013c0(0x419978);
      FUN_004045a0(s_campus_sav_0041211c);
      FUN_00406140();
      return;
    }
    if (param_1 < 0x10f) {
      return;
    }
    if (param_2 < 0x1c3) {
      return;
    }
    if (0x15d < param_1) {
      return;
    }
    if (0x1d5 < param_2) {
      return;
    }
    FUN_00407850();
    FUN_00403b90(&DAT_004120f8);
    FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
    FUN_004013c0(0x419768);
    FUN_00406140();
    return;
  }
  if (((param_1 < 0x10f) || (param_2 < 0x1c3)) || ((0x15d < param_1 || (0x1d5 < param_2)))) {
    if ((((param_1 < 0x17d) || (param_2 < 0x1c3)) || (0x1cb < param_1)) || (0x1d5 < param_2)) {
      if (((param_1 < 0x1f5) || (param_2 < 0x1c3)) || ((0x243 < param_1 || (0x1d5 < param_2)))) {
        FUN_004013c0(0x419768);
        FUN_004013c0(0x419978);
        FUN_004013c0(0x419b88);
        bVar1 = DAT_0041a534 == 0;
        DAT_0041a534 = 0;
        goto LAB_00403050;
      }
      puVar2 = &DAT_00419b88;
    }
    else {
      puVar2 = &DAT_00419978;
    }
  }
  else {
    puVar2 = &DAT_00419768;
  }
  FUN_004013e0((int)puVar2);
  bVar1 = DAT_0041a534 != 0;
  DAT_0041a534 = 1;
LAB_00403050:
  if (!bVar1) {
    FUN_00403540((byte *)s_titleScreen_dib_00412128);
  }
  return;
}


// ===== FUN_00403070 @ 00403070

undefined4 FUN_00403070(HINSTANCE param_1)

{
  ATOM AVar1;
  HWND pHVar2;
  BOOL BVar3;
  tagMSG tStack_4c;
  WNDCLASSEXA local_30;
  
  local_30.cbSize = 0x30;
  local_30.style = 0x2b;
  local_30.lpfnWndProc = FUN_00402a10;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hInstance = param_1;
  local_30.hIcon = LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  local_30.hCursor = LoadCursorA(param_1,&DAT_00000085);
  local_30.hbrBackground = (HBRUSH)GetStockObject(4);
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpszClassName = s_WINCLASS1_00412148;
  local_30.hIconSm = LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  DAT_0041a530 = param_1;
  AVar1 = RegisterClassExA(&local_30);
  if (AVar1 == 0) {
    return 0;
  }
  pHVar2 = CreateWindowExA(0,s_WINCLASS1_00412148,s_Campus_Conquest_00412138,0x90000000,0,0,0x280,
                           0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (pHVar2 == (HWND)0x0) {
    return 0;
  }
  DAT_0041a528 = pHVar2;
  if ((DAT_00419d98 & 1) == 0) {
    DAT_00419d98 = DAT_00419d98 | 1;
    DAT_00419e88 = FUN_004031f0();
  }
  while (DAT_00419e88 != 0) {
    BVar3 = PeekMessageA(&tStack_4c,(HWND)0x0,0,0,1);
    if (BVar3 != 0) {
      if (tStack_4c.message == 0x12) break;
      TranslateMessage(&tStack_4c);
      DispatchMessageA(&tStack_4c);
    }
    FUN_00403470();
  }
  FUN_00403420();
  return tStack_4c.wParam;
}


// ===== FUN_004031f0 @ 004031f0

undefined4 FUN_004031f0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  
  FUN_00407680();
  FUN_00407be0();
  FUN_00401400();
  iVar3 = FUN_00404430();
  if (iVar3 != 0) {
    iVar3 = FUN_004038d0((byte *)s_intro_wav_004121ac);
    FUN_00407760(*(int *)(&DAT_0041a328 + iVar3 * 4));
    ShowCursor(0);
    if (DAT_00419e83 != '\0') {
      FUN_00401790();
      FUN_004017a0(0xe10);
      FUN_00403540((byte *)s_ram_dib_004121a4);
    }
    iVar3 = FUN_00401000((undefined4 *)&DAT_00419768,0x10e,0x1c2,0x50,0x14,1,1,0x800);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00401000((undefined4 *)&DAT_00419978,0x17c,0x1c2,0x50,0x14,1,1,0x800);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00401000((undefined4 *)&DAT_00419b88,500,0x1c2,0x50,0x14,1,1,0x800);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_00401b20((short *)&DAT_00413c38,s___images_imageTemplates_dib_00412188);
    puVar8 = &DAT_00419768;
    iVar3 = 10;
    do {
      FUN_004012a0((int)puVar8,0x413c38,0,10,iVar3,1);
      iVar3 = iVar3 + 0x1e;
      puVar8 = puVar8 + 0x210;
    } while (iVar3 < 100);
    FUN_00401c70(0x413c38);
    bVar2 = FUN_00406860(0x419fb0);
    if (!bVar2) {
      FUN_004060d0((byte *)s___Error_initializing_puzzle_engi_00412160);
      return 0;
    }
    if (DAT_00419e83 != '\0') {
      FUN_00401790();
      FUN_004017a0(0x12c0);
      FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
      FUN_00401e30(1,DAT_004174e0,DAT_004174e8);
      FUN_00403540(&DAT_00412154);
      FUN_00401790();
      FUN_004017a0(0x12c0);
      FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
    }
    FUN_00403540((byte *)s_titleScreen_dib_00412128);
    ShowCursor(1);
    DAT_004120e0 = 3;
    return 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_Error_building_map__004121b8;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_00419e8c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}


// ===== FUN_00403420 @ 00403420

undefined4 FUN_00403420(void)

{
  undefined *puVar1;
  
  FUN_00401980((undefined4 *)&DAT_00419de0);
  puVar1 = &DAT_00419b88;
  do {
    FUN_00401190((int)puVar1);
    puVar1 = puVar1 + -0x210;
  } while (0x419767 < (int)puVar1);
  FUN_004015f0();
  FUN_00407850();
  FUN_004077f0();
  FUN_00407720();
  FUN_00407b50();
  FUN_00407ca0();
  return 1;
}


// ===== FUN_00403470 @ 00403470

undefined4 FUN_00403470(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((((DAT_004120e0 != 2) && (DAT_004120e0 != 3)) && (DAT_004120e0 != 5)) &&
      ((DAT_004120f4 = DAT_004120f4 + 1, DAT_004120f4 % 1000000 == 0 && (-1 < DAT_004120e4)))) &&
     (iVar1 = FUN_00407ba0(*(int *)(&DAT_00419e00 + DAT_004120e4 * 4)), iVar1 == 3)) {
    FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_004120e4 * 4));
  }
  if ((DAT_004120e0 == 6) && (puVar2 = FUN_00407870(DAT_004120e8), puVar2 != (undefined4 *)0x1)) {
    FUN_00403b90(&DAT_004120f8);
    SetCursorPos(300,0xf0);
    ShowCursor(1);
    FUN_00405a90(300,0xf0,0x200);
  }
  return 1;
}


// ===== FUN_00403540 @ 00403540

void __cdecl FUN_00403540(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((DAT_004120e0 != 3) && (DAT_004120e0 != 1)) {
    pbVar4 = &DAT_00412154;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00403589:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0040358e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00403589;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0040358e:
    if (iVar3 != 0) {
      pcVar5 = s_winner_dib_004121d8;
      do {
        bVar1 = *param_1;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_004035c1:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_004035c6;
        }
        if (bVar1 == 0) break;
        bVar1 = param_1[1];
        bVar6 = bVar1 < ((byte *)pcVar5)[1];
        if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004035c1;
        param_1 = param_1 + 2;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004035c6:
      if (iVar3 != 0) {
        FUN_004035f0();
      }
    }
  }
  FUN_004035f0();
  return;
}


// ===== FUN_004035f0 @ 004035f0

void FUN_004035f0(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CHAR local_80 [128];
  
  FUN_004016a0(DAT_004174d4,0);
  FUN_004085b1(local_80,(byte *)s___images__s_00412238);
  iVar2 = FUN_00401b20((short *)&DAT_00413c38,local_80);
  if (iVar2 == 0) {
    FUN_004085b1(&DAT_00419d9c,(byte *)s____Error_loading_image___s____00412214);
    FUN_004060d0(&DAT_00419d9c);
  }
  else {
    if (((DAT_004120e0 == 3) || (DAT_004120e0 == 4)) || (DAT_004120e0 == 5)) {
      iVar7 = 0x1e0;
      iVar2 = 0x280;
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      iVar7 = 0x177;
      iVar2 = 500;
      uVar6 = 0x32;
      uVar5 = 0x46;
    }
    FUN_00401910((undefined4 *)&DAT_00419de0,uVar5,uVar6,iVar2,iVar7);
    FUN_00401a80(0x419de0,0x413c38,0,0,1);
    FUN_00401c70(0x413c38);
    FUN_004017f0((undefined4 *)&DAT_00413c70);
    FUN_004016f0();
    FUN_004019b0(0x419de0,DAT_004174e4,DAT_004174ec,1);
    FUN_00401740();
  }
  if (DAT_004120e0 == 3) {
    puVar3 = &DAT_00419768;
    do {
      FUN_00401210((uint)puVar3,DAT_004174d4);
      puVar3 = puVar3 + 0x210;
    } while ((int)puVar3 < 0x419d98);
  }
  else if (DAT_004120e0 == 1) {
    uVar1 = FUN_00406b50(&DAT_00419fb0);
    switch(uVar1) {
    case 0x41:
      puVar3 = &DAT_0041a548;
      do {
        FUN_00401210((uint)puVar3,DAT_004174d4);
        puVar3 = puVar3 + 0x210;
      } while ((int)puVar3 < 0x41b9e8);
      puVar3 = &DAT_0041b9f8;
      do {
        FUN_00401210((uint)puVar3,DAT_004174d4);
        puVar3 = puVar3 + 0x210;
      } while ((int)puVar3 < 0x41c238);
      break;
    case 0x42:
      puVar3 = &DAT_00417560;
      do {
        FUN_00401210((uint)puVar3,DAT_004174d4);
        puVar3 = puVar3 + 0x210;
      } while ((int)puVar3 < 0x419450);
      break;
    default:
      FUN_00406b50(&DAT_00419fb0);
      FUN_004085b1(&DAT_00419d9c,(byte *)s_Unknown_puzzle_request_in_displa_004121e4);
      FUN_004060d0(&DAT_00419d9c);
      break;
    case 0x45:
      puVar4 = &DAT_005c4e08;
      do {
        FUN_00401210((uint)puVar4,DAT_004174d4);
        puVar4 = puVar4 + 0x84;
      } while ((int)puVar4 < 0x5c5e88);
      break;
    case 0x50:
      puVar3 = &DAT_005c4390;
      do {
        FUN_00401210((uint)puVar3,DAT_004174d4);
        puVar3 = puVar3 + 0x210;
      } while ((int)puVar3 < 0x5c4de0);
      break;
    case 0x54:
      puVar3 = &DAT_005c79e0;
      do {
        FUN_00401210((uint)puVar3,DAT_004174d4);
        puVar3 = puVar3 + 0x210;
      } while ((int)puVar3 < 0x5c8430);
      FUN_00401210(0x5c7758,DAT_004174d4);
    }
  }
  if (DAT_00419e84 != '\0') {
    FUN_00401830(0x419e8c,0,(HDC)0x0,200,DAT_004174d4);
  }
  FUN_00401650();
  return;
}


// ===== FUN_004038d0 @ 004038d0

int __cdecl FUN_004038d0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int local_84;
  CHAR local_80 [128];
  
  bVar2 = false;
  iVar10 = 0;
  if (0 < DAT_0041a538) {
    puVar3 = &DAT_0041a428;
    do {
      if (bVar2) {
        return local_84;
      }
      pbVar5 = (byte *)*puVar3;
      pbVar9 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0040392a:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0040392f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0040392a;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0040392f:
      if (iVar6 == 0) {
        bVar2 = true;
        local_84 = iVar10;
      }
      iVar10 = iVar10 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar10 < DAT_0041a538);
    if (bVar2) {
      return local_84;
    }
  }
  FUN_004085b1(local_80,(byte *)s___sounds__s_00412268);
  puVar4 = FUN_00407340(local_80,0xe0);
  *(undefined1 **)(&DAT_0041a328 + DAT_0041a538 * 4) = puVar4;
  if (puVar4 == (undefined1 *)0xffffffff) {
    FUN_004085b1(&DAT_00419d9c,(byte *)s____Error_loading_sound___s____00412244);
    FUN_004060d0(&DAT_00419d9c);
    return -1;
  }
  uVar7 = 0xffffffff;
  pbVar5 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  pbVar5 = (byte *)_malloc(~uVar7);
  (&DAT_0041a428)[DAT_0041a538] = pbVar5;
  uVar7 = 0xffffffff;
  do {
    pbVar9 = param_1;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pbVar9 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar9;
  } while (bVar1 != 0);
  uVar7 = ~uVar7;
  pbVar9 = pbVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar5 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar10 = DAT_0041a538;
  DAT_0041a538 = DAT_0041a538 + 1;
  return iVar10;
}


// ===== FUN_00403a30 @ 00403a30

int __cdecl FUN_00403a30(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  int local_84;
  undefined1 local_80 [128];
  
  bVar2 = false;
  iVar9 = 0;
  if (0 < DAT_0041a53c) {
    puVar3 = &DAT_00419668;
    do {
      if (bVar2) {
        return local_84;
      }
      pbVar4 = (byte *)*puVar3;
      pbVar8 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00403a8a:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00403a8f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00403a8a;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00403a8f:
      if (iVar5 == 0) {
        bVar2 = true;
        local_84 = iVar9;
      }
      iVar9 = iVar9 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar9 < DAT_0041a53c);
    if (bVar2) {
      return local_84;
    }
  }
  FUN_004085b1(local_80,(byte *)s___sounds__s_00412268);
  iVar9 = FUN_004078a0();
  *(int *)(&DAT_00419e00 + DAT_0041a53c * 4) = iVar9;
  if (iVar9 == -1) {
    FUN_004085b1(&DAT_00419d9c,(byte *)s____Error_loading_music_file___s___00412274);
    FUN_004060d0(&DAT_00419d9c);
    return -1;
  }
  uVar6 = 0xffffffff;
  pbVar4 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  pbVar4 = (byte *)_malloc(~uVar6);
  (&DAT_00419668)[DAT_0041a53c] = pbVar4;
  uVar6 = 0xffffffff;
  do {
    pbVar8 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar8 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar8;
  } while (bVar1 != 0);
  uVar6 = ~uVar6;
  pbVar8 = pbVar8 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar4 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
  }
  iVar9 = DAT_0041a53c;
  DAT_0041a53c = DAT_0041a53c + 1;
  return iVar9;
}


// ===== FUN_00403b90 @ 00403b90

void __cdecl FUN_00403b90(undefined1 *param_1)

{
  switch(*param_1) {
  case 0x45:
    DAT_004120e0 = 5;
    FUN_00401e30(1,DAT_004174e0,DAT_004174e8);
    return;
  case 0x47:
    DAT_004120e0 = 0;
    return;
  case 0x4d:
    DAT_004120e0 = 2;
    FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
    FUN_00407850();
    FUN_00407b00(DAT_004120e4);
    FUN_00403540((byte *)s_menu_dib_0041229c);
    return;
  case 0x50:
    DAT_004120e0 = 1;
    return;
  case 0x54:
    DAT_004120e0 = 3;
    return;
  case 0x57:
    DAT_004120e0 = 6;
    ShowCursor(0);
  }
  return;
}


// ===== FUN_00403c80 @ 00403c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c80(void)

{
  FUN_00401e30(0,DAT_004174e0,DAT_004174e8);
  FUN_004035f0();
  PostMessageA(DAT_0041a528,2,0,0);
  _DAT_0041a52c = 1;
  return;
}


// ===== FUN_00403cc0 @ 00403cc0

void __fastcall FUN_00403cc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004108f0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 9;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


// ===== FUN_00403cf0 @ 00403cf0

void __thiscall FUN_00403cf0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = param_1[4];
  }
  else {
    iVar1 = param_1[5];
  }
  FUN_004013c0((int)(&DAT_0041a548 + iVar1 * 0x210));
  FUN_00403fb0(param_1,1,iVar1);
  FUN_00403eb0((int)param_1);
  FUN_00403540((byte *)s_arrayBkgd_dib_004122a8);
  FUN_00407760(DAT_0041c238);
  FUN_00401790();
  iVar1 = FUN_00404040(param_1,param_1[4],param_1[5]);
  FUN_004013c0((int)(&DAT_0041a548 + iVar1 * 0x210));
  FUN_00403fb0(param_1,-1,iVar1);
  FUN_00403eb0((int)param_1);
  FUN_004017a0(1000);
  FUN_00407760(DAT_0041c238);
  FUN_00403540((byte *)s_arrayBkgd_dib_004122a8);
  if ((char)param_1[1] != '\0') {
    FUN_004017a0(2000);
    FUN_00407760(DAT_0041a540);
    return;
  }
  if ((char)param_1[2] != '\0') {
    FUN_004017a0(2000);
    FUN_00407760(DAT_0041b9ec);
    FUN_004017a0(3000);
    (**(code **)(*param_1 + 4))();
  }
  return;
}


// ===== FUN_00403e30 @ 00403e30

void __thiscall FUN_00403e30(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00403f10(this,param_1,param_2,param_3);
  if (((param_3 == 0x201) && (*(char *)((int)this + 4) == '\0')) && (iVar1 != 0)) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x10))(iVar1 + -1);
    return;
  }
  if (((0x78 < param_1) && (param_1 < 0x208)) && (0x195 < param_2)) {
    if (param_3 == 0x201) {
      *(undefined1 *)((int)this + 5) = 1;
      return;
    }
    SetCursor(DAT_00419f90);
  }
  return;
}


// ===== FUN_00403eb0 @ 00403eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403eb0(int param_1)

{
  DAT_0041bab0 = *(int *)(param_1 + 0x18) / 10;
  _DAT_0041bcc0 = *(int *)(param_1 + 0x18) % 10;
  _DAT_0041bed0 = *(int *)(param_1 + 0x1c) / 10;
  _DAT_0041c0e0 = *(int *)(param_1 + 0x1c) % 10;
  return *(int *)(param_1 + 0x1c) / 10;
}


// ===== FUN_00403f10 @ 00403f10

int __thiscall FUN_00403f10(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((199 < param_2) && (param_2 < 0xf1)) && (0x4a < param_1)) {
    iVar1 = (param_1 + -0x4b) / 0x32;
    if (iVar1 == *(int *)((int)this + 0x10)) {
      iVar2 = 2;
    }
    else if (iVar1 == *(int *)((int)this + 0x14)) {
      iVar2 = 1;
    }
    if (0x27 < (param_1 + -0x4b) % 0x32) {
      return 0;
    }
    if (((param_3 == 0x201) && (iVar2 == 0)) &&
       ((*(int *)((int)this + 0x10) < iVar1 && (iVar1 < *(int *)((int)this + 0x14))))) {
      FUN_00407760(DAT_0041b9ec);
    }
  }
  return iVar2;
}


// ===== FUN_00403fb0 @ 00403fb0

void __thiscall FUN_00403fb0(void *this,int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == -1) {
    *(int *)((int)this + 0x1c) =
         *(int *)((int)this + 0x1c) + *(int *)((int)this + param_2 * 4 + 0x20);
    if (param_2 == *(int *)((int)this + 0x10)) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      goto LAB_00403ffc;
    }
  }
  else {
    if (param_1 != 1) goto LAB_00403ffc;
    *(int *)((int)this + 0x18) =
         *(int *)((int)this + 0x18) + *(int *)((int)this + param_2 * 4 + 0x20);
    if (param_2 == *(int *)((int)this + 0x10)) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      goto LAB_00403ffc;
    }
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
LAB_00403ffc:
  if (*(int *)((int)this + 0x14) < *(int *)((int)this + 0x10)) {
    *(undefined1 *)((int)this + 8) = 1;
    bVar1 = *(int *)((int)this + 0x1c) < *(int *)((int)this + 0x18);
    *(bool *)((int)this + 4) = bVar1;
    if (bVar1) {
      FUN_00407760(DAT_0041b9f0);
    }
  }
  return;
}


// ===== FUN_00404040 @ 00404040

int __thiscall FUN_00404040(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0x14);
  if (iVar5 != *(int *)((int)this + 0x10)) {
    if (param_2 == param_1) {
      return *(int *)((int)this + param_2 * 4 + 0x20);
    }
    iVar1 = FUN_00404040(this,param_1 + 1,param_2 + -1);
    iVar2 = FUN_00404040(this,param_1 + 2,param_2);
    iVar3 = FUN_00404040(this,param_1,param_2 + -2);
    iVar5 = *(int *)((int)this + param_1 * 4 + 0x20);
    iVar4 = *(int *)((int)this + param_2 * 4 + 0x20);
    iVar2 = FUN_004041f0(iVar5 + iVar2,iVar5 + iVar1);
    iVar1 = FUN_004041f0(iVar4 + iVar1,iVar4 + iVar3);
    iVar3 = FUN_004041d0(iVar2,iVar1);
    if (iVar2 == iVar3) {
      if (iVar1 == iVar3) {
        iVar4 = FUN_004041d0(iVar5,iVar4);
        if (iVar4 != iVar5) goto LAB_00404102;
      }
      return *(int *)((int)this + 0x10);
    }
    if (iVar1 == iVar3) {
LAB_00404102:
      return *(int *)((int)this + 0x14);
    }
    iVar5 = 0;
  }
  return iVar5;
}


// ===== FUN_00404120 @ 00404120

void __fastcall FUN_00404120(int param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 9;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_00403eb0(param_1);
    puVar1 = &DAT_0041a548;
    do {
      FUN_004013e0((int)puVar1);
      puVar1 = puVar1 + 0x210;
    } while ((int)puVar1 < 0x41b9e8);
  }
  if (DAT_004120e4 != DAT_0041b9e8) {
    DAT_004120e4 = DAT_0041b9e8;
    FUN_00407b00(DAT_0041b9e8);
    FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_0041b9e8 * 4));
  }
  FUN_00403540((byte *)s_arrayBkgd_dib_004122a8);
  return;
}


// ===== FUN_004041b0 @ 004041b0

void __fastcall FUN_004041b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar1 == iVar2 || iVar1 < iVar2) && (iVar1 != iVar2)) && (*(char *)(param_1 + 8) != '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


// ===== FUN_004041d0 @ 004041d0

int FUN_004041d0(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}


// ===== FUN_004041f0 @ 004041f0

int FUN_004041f0(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}


// ===== FUN_00404210 @ 00404210

undefined4 __fastcall FUN_00404210(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_28 [10];
  
  local_28[1] = 6;
  local_28[4] = 6;
  local_28[0] = 4;
  local_28[2] = 5;
  local_28[3] = 4;
  local_28[5] = 5;
  local_28[6] = 7;
  local_28[7] = 7;
  local_28[8] = 5;
  local_28[9] = 3;
  puVar5 = (undefined4 *)&DAT_0041a548;
  iVar3 = 0x4b;
  do {
    iVar1 = FUN_00401000(puVar5,iVar3,200,0x28,0x28,1,0x11,0x800);
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = iVar3 + 0x32;
    puVar5 = puVar5 + 0x84;
  } while (iVar3 < 0x23f);
  iVar3 = 0;
  do {
    iVar1 = FUN_00401000((undefined4 *)(&DAT_0041b9f8 + iVar3 * 0x210),0,0x55,0x28,0x28,10,0x12,
                         0x800);
    if (iVar1 == 0) {
      return 0;
    }
    (&DAT_0041bab0)[iVar3 * 0x84] = 0;
    switch(iVar3) {
    case 0:
      (&DAT_0041ba04)[iVar3 * 0x84] = 0x82;
      break;
    case 1:
      (&DAT_0041ba04)[iVar3 * 0x84] = 0xaa;
      break;
    case 2:
      (&DAT_0041ba04)[iVar3 * 0x84] = 0x1ae;
      break;
    case 3:
      (&DAT_0041ba04)[iVar3 * 0x84] = 0x1d6;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = FUN_00401b20((short *)&DAT_00413c38,s___images_arrayTemplate_dib_004122f8);
  if (iVar3 == 0) {
    FUN_004060d0((byte *)s____Error_loading_image__arrrayTe_004122c8);
    return 0;
  }
  puVar4 = &DAT_0041a548;
  piVar6 = local_28;
  piVar2 = (int *)(param_1 + 0x20);
  do {
    iVar3 = *piVar6;
    *piVar2 = iVar3;
    FUN_004012a0((int)puVar4,0x413c38,0,iVar3 * 0x32,0x69,1);
    puVar4 = puVar4 + 0x210;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)puVar4 < 0x41b9e8);
  puVar4 = &DAT_0041b9f8;
  do {
    iVar1 = 0;
    iVar3 = 0;
    do {
      FUN_004012a0((int)puVar4,0x413c38,iVar1,iVar3,5,1);
      iVar3 = iVar3 + 0x32;
      iVar1 = iVar1 + 1;
    } while (iVar3 < 500);
    puVar4 = puVar4 + 0x210;
  } while ((int)puVar4 < 0x41c238);
  FUN_00401c70(0x413c38);
  DAT_0041c238 = FUN_004038d0((byte *)s_click_wav_0041208c);
  DAT_0041a540 = FUN_004038d0((byte *)s_win_wav_00412084);
  DAT_0041b9ec = FUN_004038d0((byte *)s_buzzer_wav_00412078);
  DAT_0041b9f0 = FUN_004038d0((byte *)s_dconnect_wav_004122b8);
  DAT_0041b9e8 = FUN_00403a30((byte *)s_midifile7_mid_00412068);
  return 1;
}


// ===== FUN_00404430 @ 00404430

undefined4 FUN_00404430(void)

{
  bool bVar1;
  FILE *pFVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if (DAT_00419e80 != '\0') {
    pFVar2 = (FILE *)FUN_00408463(s_c__log_txt_0041236c,&DAT_00412058);
    FUN_004083d7(pFVar2);
  }
  pFVar2 = (FILE *)FUN_00408463(s_tmp_sav_00412364,&DAT_00412058);
  FUN_004083d7(pFVar2);
  bVar1 = FUN_00404890();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_004060d0((byte *)s_createMap_unsuccessful__00412348);
    return 0;
  }
  iVar3 = FUN_00405190();
  if (iVar3 == 0) {
    FUN_004060d0((byte *)s_linkMap_unsuccessful__00412330);
    return 0;
  }
  FUN_004060d0((byte *)s_Map_built_successfully__00412314);
  DAT_0041c280 = FUN_004044d0();
  if (DAT_00419e81 != '\0') {
    FUN_00405910();
  }
  return 1;
}


// ===== FUN_004044d0 @ 004044d0

void FUN_004044d0(void)

{
  FUN_004053a0((byte *)&DAT_0041c240);
  return;
}


// ===== FUN_004044e0 @ 004044e0

void FUN_004044e0(void)

{
  DAT_005c4388 = 0;
  FUN_00404430();
  DAT_0041c280 = FUN_004053a0((byte *)&DAT_0041c240);
  return;
}


// ===== FUN_00404510 @ 00404510

void __cdecl FUN_00404510(LPCSTR param_1,int param_2)

{
  char cVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  uint uVar4;
  
  pFVar2 = (FILE *)FUN_00408463(param_1,&DAT_00412054);
  pFVar3 = (FILE *)FUN_00408463(s_temp_scr_00412378,&DAT_00412058);
  uVar4 = FUN_00408655((undefined4 *)pFVar2);
  cVar1 = (char)uVar4;
  while (cVar1 != -1) {
    cVar1 = (char)uVar4;
    if (param_2 == 1) {
      cVar1 = cVar1 + -1;
    }
    else if (param_2 == 0) {
      cVar1 = cVar1 + '\x01';
    }
    FUN_00408631((int)cVar1,(int *)pFVar3);
    uVar4 = FUN_00408655((undefined4 *)pFVar2);
    cVar1 = (char)uVar4;
  }
  FUN_004083d7(pFVar2);
  FUN_004083d7(pFVar3);
  FUN_0040f220(param_1);
  FUN_00408603(s_temp_scr_00412378,param_1);
  return;
}


// ===== FUN_004045a0 @ 004045a0

void __cdecl FUN_004045a0(LPCSTR param_1)

{
  char cVar1;
  byte bVar2;
  FILE *pFVar3;
  byte *pbVar4;
  int iVar5;
  void *this;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  uint uVar6;
  uint uVar7;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  byte local_80 [64];
  byte local_40 [64];
  undefined3 uVar8;
  
  FUN_00404510(param_1,0);
  pFVar3 = (FILE *)FUN_00408463(param_1,&DAT_00412054);
  if (pFVar3 != (FILE *)0x0) {
    FUN_00405420(this,(char *)local_80,(int *)pFVar3);
    pcVar9 = s_campus_save_file_004123c0;
    pbVar4 = local_80;
    this_00 = extraout_ECX;
    do {
      bVar2 = *pbVar4;
      uVar8 = (undefined3)((uint)this_00 >> 8);
      this_00 = (void *)CONCAT31(uVar8,bVar2);
      bVar12 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_0040460b:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00404610;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      this_00 = (void *)CONCAT31(uVar8,bVar2);
      bVar12 = bVar2 < ((byte *)pcVar9)[1];
      if (bVar2 != ((byte *)pcVar9)[1]) goto LAB_0040460b;
      pbVar4 = pbVar4 + 2;
      pcVar9 = (char *)((byte *)pcVar9 + 2);
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00404610:
    if (iVar5 == 0) {
      pbVar10 = &DAT_004123bc;
      pbVar4 = local_80;
      do {
        bVar2 = *pbVar4;
        uVar8 = (undefined3)((uint)this_00 >> 8);
        this_00 = (void *)CONCAT31(uVar8,bVar2);
        bVar12 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_00404645:
          iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto joined_r0x0040464c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        this_00 = (void *)CONCAT31(uVar8,bVar2);
        bVar12 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_00404645;
        pbVar4 = pbVar4 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
joined_r0x0040464c:
      if (iVar5 != 0) {
        FUN_00405420(this_00,(char *)local_80,(int *)pFVar3);
        FUN_00405420(local_40,(char *)local_40,(int *)pFVar3);
        pcVar9 = s_curMidiId__004123b0;
        pbVar4 = local_80;
        this_00 = extraout_ECX_00;
        do {
          bVar2 = *pbVar4;
          uVar8 = (undefined3)((uint)this_00 >> 8);
          this_00 = (void *)CONCAT31(uVar8,bVar2);
          bVar12 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_00404698:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_0040469d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          this_00 = (void *)CONCAT31(uVar8,bVar2);
          bVar12 = bVar2 < ((byte *)pcVar9)[1];
          if (bVar2 != ((byte *)pcVar9)[1]) goto LAB_00404698;
          pbVar4 = pbVar4 + 2;
          pcVar9 = (char *)((byte *)pcVar9 + 2);
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_0040469d:
        if (iVar5 == 0) {
          DAT_004120e4 = FUN_004086fa(this_00,local_40);
          this_00 = extraout_ECX_01;
        }
        else {
          pcVar9 = s_curNode__004123a4;
          pbVar4 = local_80;
          do {
            bVar2 = *pbVar4;
            uVar8 = (undefined3)((uint)this_00 >> 8);
            this_00 = (void *)CONCAT31(uVar8,bVar2);
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_004046e5:
              iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_004046ea;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            this_00 = (void *)CONCAT31(uVar8,bVar2);
            bVar12 = bVar2 < ((byte *)pcVar9)[1];
            if (bVar2 != ((byte *)pcVar9)[1]) goto LAB_004046e5;
            pbVar4 = pbVar4 + 2;
            pcVar9 = (char *)((byte *)pcVar9 + 2);
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_004046ea:
          if (iVar5 == 0) {
            DAT_0041c280 = FUN_004053a0(local_40);
            this_00 = extraout_ECX_02;
          }
          else {
            pbVar10 = &DAT_004123bc;
            pbVar4 = local_80;
            do {
              bVar2 = *pbVar4;
              uVar8 = (undefined3)((uint)this_00 >> 8);
              this_00 = (void *)CONCAT31(uVar8,bVar2);
              bVar12 = bVar2 < *pbVar10;
              if (bVar2 != *pbVar10) {
LAB_0040472f:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00404734;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              this_00 = (void *)CONCAT31(uVar8,bVar2);
              bVar12 = bVar2 < pbVar10[1];
              if (bVar2 != pbVar10[1]) goto LAB_0040472f;
              pbVar4 = pbVar4 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_00404734:
            if (iVar5 != 0) {
              pbVar4 = FUN_004053a0(local_40);
              pbVar10 = FUN_004053a0(local_80);
              FUN_004057d0((int)pbVar10,(int)pbVar4);
              this_00 = extraout_ECX_03;
            }
          }
        }
        pbVar10 = &DAT_004123bc;
        pbVar4 = local_80;
        do {
          bVar2 = *pbVar4;
          uVar8 = (undefined3)((uint)this_00 >> 8);
          this_00 = (void *)CONCAT31(uVar8,bVar2);
          bVar12 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_00404789:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto joined_r0x0040464c;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          this_00 = (void *)CONCAT31(uVar8,bVar2);
          bVar12 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_00404789;
          pbVar4 = pbVar4 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
        goto joined_r0x0040464c;
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = s_Not_a_valid_campus_save_file__00412384;
      do {
        pcVar11 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar11 + -uVar6;
      pcVar11 = (char *)&DAT_00419e8c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    FUN_004083d7(pFVar3);
  }
  FUN_00404510(param_1,1);
  return;
}


// ===== FUN_004047e0 @ 004047e0

void __cdecl FUN_004047e0(LPCSTR param_1)

{
  FILE *pFVar1;
  FILE *pFVar2;
  uint uVar3;
  
  pFVar1 = (FILE *)FUN_00408463(param_1,&DAT_00412058);
  pFVar2 = (FILE *)FUN_00408463(s_tmp_sav_00412364,&DAT_00412054);
  FUN_00408476((int *)pFVar1,(byte *)s_campus_save_file_00412400);
  uVar3 = FUN_00408655((undefined4 *)pFVar2);
  while (uVar3 != 0xffffffff) {
    FUN_00408631(uVar3,(int *)pFVar1);
    uVar3 = FUN_00408655((undefined4 *)pFVar2);
  }
  FUN_00408476((int *)pFVar1,(byte *)s_curMidiId___d_004123f0);
  FUN_00408476((int *)pFVar1,(byte *)s_curNode___s_004123e0);
  FUN_00408476((int *)pFVar1,(byte *)s_end_file_004123d4);
  FUN_004083d7(pFVar2);
  FUN_004083d7(pFVar1);
  FUN_00404510(param_1,1);
  return;
}


// ===== FUN_00404890 @ 00404890

bool FUN_00404890(void)

{
  byte bVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  void *extraout_ECX_01;
  void *pvVar8;
  void *extraout_ECX_02;
  uint uVar9;
  uint uVar10;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *this_04;
  void *extraout_ECX_11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  int local_788;
  byte local_784 [64];
  undefined4 *local_744;
  int local_740;
  int local_73c;
  int local_738;
  int local_734;
  int local_730;
  undefined4 local_72c;
  int local_728;
  byte local_724 [64];
  byte local_6e4 [64];
  undefined4 local_6a4;
  byte local_6a0 [64];
  byte local_660 [64];
  int local_620;
  int local_61c;
  undefined4 local_618 [390];
  undefined3 uVar11;
  
  pFVar3 = (FILE *)FUN_00408463(s_mapData_txt_00412638,&DAT_00412054);
  pvVar8 = extraout_ECX;
  if (pFVar3 == (FILE *)0x0) {
    FUN_004060d0((byte *)s_Error_opening_file__mapData_txt__00412614);
    pvVar8 = extraout_ECX_00;
  }
  iVar4 = FUN_004061b0(pvVar8,(int *)pFVar3);
  FUN_00405420(this,(char *)local_784,(int *)pFVar3);
  pcVar12 = s_start_0041260c;
  pbVar5 = local_784;
  pvVar8 = extraout_ECX_01;
  do {
    bVar1 = *pbVar5;
    uVar11 = (undefined3)((uint)pvVar8 >> 8);
    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
    bVar13 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_00404919:
      iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0040491e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
    bVar13 = bVar1 < ((byte *)pcVar12)[1];
    if (bVar1 != ((byte *)pcVar12)[1]) goto LAB_00404919;
    pbVar5 = pbVar5 + 2;
    pcVar12 = (char *)((byte *)pcVar12 + 2);
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0040491e:
  if (iVar6 != 0) {
    FUN_004060d0((byte *)s_Starting_node_not_set_correctly__004125e8);
    pvVar8 = extraout_ECX_02;
  }
  bVar13 = iVar6 == 0 && (iVar4 != 0 && pFVar3 != (FILE *)0x0);
  FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
  uVar9 = 0xffffffff;
  pbVar5 = local_784;
  do {
    pbVar7 = pbVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar5 + 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar7;
  } while (bVar1 != 0);
  uVar9 = ~uVar9;
  pbVar5 = pbVar7 + -uVar9;
  pbVar7 = (byte *)&DAT_0041c240;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar7 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar7 = pbVar7 + 1;
  }
  FUN_00405420((void *)0x0,(char *)local_784,(int *)pFVar3);
  pbVar5 = local_784;
  pbVar7 = &DAT_004123bc;
  pvVar8 = extraout_ECX_03;
  do {
    bVar1 = *pbVar7;
    uVar11 = (undefined3)((uint)pvVar8 >> 8);
    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
    bVar14 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0040499d:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto joined_r0x004049a4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
    bVar14 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0040499d;
    pbVar7 = pbVar7 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
joined_r0x004049a4:
  do {
    if ((iVar4 == 0) || (!bVar13)) goto LAB_00405171;
    pbVar5 = local_784;
    pbVar7 = &DAT_004125e0;
    do {
      bVar1 = *pbVar7;
      uVar11 = (undefined3)((uint)pvVar8 >> 8);
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004049e1:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_004049e6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004049e1;
      pbVar7 = pbVar7 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004049e6:
    if (iVar4 != 0) {
      pcVar12 = s_Missing_a__scrn__after_creating___00412438;
LAB_0040515a:
      bVar13 = false;
      FUN_004085b1(&DAT_005c4288,(byte *)pcVar12);
      FUN_004060d0(&DAT_005c4288);
LAB_00405171:
      FUN_004083d7(pFVar3);
      return bVar13;
    }
    FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
    uVar9 = 0xffffffff;
    pbVar5 = local_784;
    do {
      pbVar7 = pbVar5;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pbVar7 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar7;
    } while (bVar1 != 0);
    uVar9 = ~uVar9;
    pbVar5 = pbVar7 + -uVar9;
    pbVar7 = local_6a0;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar7 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    }
    FUN_00405420(local_784,(char *)local_784,(int *)pFVar3);
    pbVar5 = local_784;
    pbVar7 = &DAT_004125dc;
    pvVar8 = extraout_ECX_04;
    do {
      bVar1 = *pbVar7;
      uVar11 = (undefined3)((uint)pvVar8 >> 8);
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00404a5c:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_00404a61;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00404a5c;
      pbVar7 = pbVar7 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00404a61:
    if (iVar4 != 0) {
      pcVar12 = s_Missing_a_____following_scrn__s__00412414;
      goto LAB_0040515a;
    }
    local_788 = 0;
    local_660[0] = 0;
    local_620 = -1;
    FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
    pbVar5 = local_784;
    pbVar7 = &DAT_004125d8;
    do {
      bVar1 = *pbVar7;
      bVar14 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00404aba:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_00404abf;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar14 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00404aba;
      pbVar7 = pbVar7 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00404abf:
    if (iVar4 != 0) {
      local_744 = local_618;
      do {
        if (!bVar13) break;
        iVar4 = FUN_00405480(local_784);
        local_740 = iVar4;
        pbVar7 = &DAT_004125d4;
        pbVar5 = local_784;
        pvVar8 = extraout_ECX_05;
        do {
          bVar1 = *pbVar5;
          uVar11 = (undefined3)((uint)pvVar8 >> 8);
          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
          bVar14 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00404b1c:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_00404b21;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
          bVar14 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00404b1c;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00404b21:
        if (iVar6 == 0) {
          FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
          uVar9 = 0xffffffff;
          pbVar5 = local_784;
          do {
            pbVar7 = pbVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pbVar7 = pbVar5 + 1;
            bVar1 = *pbVar5;
            pbVar5 = pbVar7;
          } while (bVar1 != 0);
          uVar9 = ~uVar9;
          pbVar5 = pbVar7 + -uVar9;
          pbVar7 = local_660;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
            pbVar5 = pbVar5 + 4;
            pbVar7 = pbVar7 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pbVar7 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar7 + 1;
          }
          pvVar8 = (void *)0x0;
        }
        else {
          pcVar12 = s_music_004125cc;
          pbVar5 = local_784;
          do {
            bVar1 = *pbVar5;
            uVar11 = (undefined3)((uint)pvVar8 >> 8);
            pvVar8 = (void *)CONCAT31(uVar11,bVar1);
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_00404b8d:
              iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_00404b92;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            pvVar8 = (void *)CONCAT31(uVar11,bVar1);
            bVar14 = bVar1 < ((byte *)pcVar12)[1];
            if (bVar1 != ((byte *)pcVar12)[1]) goto LAB_00404b8d;
            pbVar5 = pbVar5 + 2;
            pcVar12 = (char *)((byte *)pcVar12 + 2);
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00404b92:
          if (iVar6 == 0) {
            FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
            local_620 = FUN_00403a30(local_784);
            pvVar8 = extraout_ECX_06;
          }
          else {
            if (iVar4 < 1) {
              FUN_004085b1(&DAT_005c4288,(byte *)s_Unknown_or_misplaced_token___s__i_00412464);
              FUN_004060d0(&DAT_005c4288);
              bVar13 = false;
              break;
            }
            local_72c = 0;
            local_728 = -1;
            local_724[0] = 0;
            local_6e4[0] = 0;
            local_6a4 = 0;
            if (iVar4 == 1) {
              FUN_00405610(local_784,&local_73c);
            }
            FUN_00405420(local_784,(char *)local_784,(int *)pFVar3);
            pbVar7 = &DAT_004125c8;
            pbVar5 = local_784;
            pvVar8 = extraout_ECX_07;
            do {
              bVar1 = *pbVar5;
              uVar11 = (undefined3)((uint)pvVar8 >> 8);
              pvVar8 = (void *)CONCAT31(uVar11,bVar1);
              bVar14 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00404c32:
                iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_00404c37;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              pvVar8 = (void *)CONCAT31(uVar11,bVar1);
              bVar14 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00404c32;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00404c37:
            if (iVar6 != 0) {
              bVar13 = false;
              FUN_004085b1(&DAT_005c4288,(byte *)s_Missing__<__at_scrn__s,_hotzone[_004124b8);
              FUN_004060d0(&DAT_005c4288);
              break;
            }
            FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
            pbVar7 = &DAT_004125c4;
            pbVar5 = local_784;
            pvVar8 = extraout_ECX_08;
            do {
              bVar1 = *pbVar5;
              uVar11 = (undefined3)((uint)pvVar8 >> 8);
              pvVar8 = (void *)CONCAT31(uVar11,bVar1);
              bVar14 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00404c7a:
                iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_00404c7f;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              pvVar8 = (void *)CONCAT31(uVar11,bVar1);
              bVar14 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00404c7a;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00404c7f:
            if (iVar6 != 0) {
LAB_00404c87:
              pbVar7 = &DAT_004125bc;
              pbVar5 = local_784;
              do {
                bVar1 = *pbVar5;
                uVar11 = (undefined3)((uint)pvVar8 >> 8);
                pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                bVar14 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00404cb4:
                  iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_00404cb9;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                bVar14 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00404cb4;
                pbVar5 = pbVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00404cb9:
              if (iVar6 == 0) {
                if (iVar4 == 1) {
                  bVar13 = false;
                  FUN_004085b1(&DAT_005c4288,(byte *)s_Redefinition_of_predefined_hotzo_00412544);
                  FUN_004060d0(&DAT_005c4288);
                  goto LAB_00404fe9;
                }
                FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
                local_73c = FUN_004086fa(local_784,local_784);
                local_73c = local_73c + 0x46;
                FUN_00405420(this_00,(char *)local_784,(int *)pFVar3);
                local_738 = FUN_004086fa(this_01,local_784);
                local_738 = local_738 + 0x32;
                FUN_00405420(local_784,(char *)local_784,(int *)pFVar3);
                local_734 = FUN_004086fa(this_02,local_784);
                local_734 = local_734 + 0x46;
                FUN_00405420(this_03,(char *)local_784,(int *)pFVar3);
                local_730 = FUN_004086fa(local_784,local_784);
                local_730 = local_730 + 0x32;
              }
              else {
                pbVar7 = &DAT_004125b4;
                pbVar5 = local_784;
                do {
                  bVar1 = *pbVar5;
                  uVar11 = (undefined3)((uint)pvVar8 >> 8);
                  pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                  bVar14 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_00404d75:
                    iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                    goto LAB_00404d7a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                  bVar14 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_00404d75;
                  pbVar5 = pbVar5 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00404d7a:
                if (iVar6 != 0) {
                  pbVar7 = &DAT_004125ac;
                  pbVar5 = local_784;
                  do {
                    bVar1 = *pbVar5;
                    uVar11 = (undefined3)((uint)pvVar8 >> 8);
                    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                    bVar14 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_00404daf:
                      iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                      goto LAB_00404db4;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar5[1];
                    pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                    bVar14 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_00404daf;
                    pbVar5 = pbVar5 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_00404db4:
                  if (iVar6 != 0) {
                    pbVar7 = &DAT_004125a8;
                    pbVar5 = local_784;
                    do {
                      bVar1 = *pbVar5;
                      uVar11 = (undefined3)((uint)pvVar8 >> 8);
                      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                      bVar14 = bVar1 < *pbVar7;
                      if (bVar1 != *pbVar7) {
LAB_00404de9:
                        iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                        goto LAB_00404dee;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar5[1];
                      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                      bVar14 = bVar1 < pbVar7[1];
                      if (bVar1 != pbVar7[1]) goto LAB_00404de9;
                      pbVar5 = pbVar5 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_00404dee:
                    if (iVar6 != 0) {
                      pbVar7 = &DAT_004125a0;
                      pbVar5 = local_784;
                      do {
                        bVar1 = *pbVar5;
                        uVar11 = (undefined3)((uint)pvVar8 >> 8);
                        pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                        bVar14 = bVar1 < *pbVar7;
                        if (bVar1 != *pbVar7) {
LAB_00404e23:
                          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                          goto LAB_00404e28;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar5[1];
                        pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                        bVar14 = bVar1 < pbVar7[1];
                        if (bVar1 != pbVar7[1]) goto LAB_00404e23;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar1 != 0);
                      iVar6 = 0;
LAB_00404e28:
                      if (iVar6 != 0) {
                        pcVar12 = s_sound_00412598;
                        pbVar5 = local_784;
                        do {
                          bVar1 = *pbVar5;
                          uVar11 = (undefined3)((uint)pvVar8 >> 8);
                          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                          bVar14 = bVar1 < (byte)*pcVar12;
                          if (bVar1 != *pcVar12) {
LAB_00404e5d:
                            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                            goto LAB_00404e62;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar5[1];
                          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                          bVar14 = bVar1 < ((byte *)pcVar12)[1];
                          if (bVar1 != ((byte *)pcVar12)[1]) goto LAB_00404e5d;
                          pbVar5 = pbVar5 + 2;
                          pcVar12 = (char *)((byte *)pcVar12 + 2);
                        } while (bVar1 != 0);
                        iVar6 = 0;
LAB_00404e62:
                        if (iVar6 == 0) {
                          FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
                          local_728 = FUN_004038d0(local_784);
                          goto LAB_00404f3e;
                        }
                        pcVar12 = s_cursor_00412590;
                        pbVar5 = local_784;
                        do {
                          bVar1 = *pbVar5;
                          uVar11 = (undefined3)((uint)pvVar8 >> 8);
                          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                          bVar14 = bVar1 < (byte)*pcVar12;
                          if (bVar1 != *pcVar12) {
LAB_00404eb4:
                            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                            goto LAB_00404eb9;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar5[1];
                          pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                          bVar14 = bVar1 < ((byte *)pcVar12)[1];
                          if (bVar1 != ((byte *)pcVar12)[1]) goto LAB_00404eb4;
                          pbVar5 = pbVar5 + 2;
                          pcVar12 = (char *)((byte *)pcVar12 + 2);
                        } while (bVar1 != 0);
                        iVar6 = 0;
LAB_00404eb9:
                        if (iVar6 != 0) {
                          FUN_004085b1(&DAT_005c4288,
                                       (byte *)s_Unknown_or_misplaced_token___s__a_004124e0);
                          FUN_004060d0(&DAT_005c4288);
                          bVar13 = false;
                          goto LAB_00404fe9;
                        }
                        FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
                        local_72c = FUN_004086fa(local_784,local_784);
                        goto LAB_00404f3e;
                      }
                    }
                  }
                }
                uVar9 = 0xffffffff;
                pbVar5 = local_784;
                do {
                  pbVar7 = pbVar5;
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  pbVar7 = pbVar5 + 1;
                  bVar1 = *pbVar5;
                  pbVar5 = pbVar7;
                } while (bVar1 != 0);
                uVar9 = ~uVar9;
                pbVar5 = pbVar7 + -uVar9;
                pbVar7 = local_724;
                for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
                  pbVar5 = pbVar5 + 4;
                  pbVar7 = pbVar7 + 4;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar7 = *pbVar5;
                  pbVar5 = pbVar5 + 1;
                  pbVar7 = pbVar7 + 1;
                }
                FUN_00405420(local_784,(char *)local_784,(int *)pFVar3);
                uVar9 = 0xffffffff;
                pbVar5 = local_784;
                do {
                  pbVar7 = pbVar5;
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  pbVar7 = pbVar5 + 1;
                  bVar1 = *pbVar5;
                  pbVar5 = pbVar7;
                } while (bVar1 != 0);
                uVar9 = ~uVar9;
                pbVar5 = pbVar7 + -uVar9;
                pbVar7 = local_6e4;
                for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
                  pbVar5 = pbVar5 + 4;
                  pbVar7 = pbVar7 + 4;
                }
                for (uVar9 = uVar9 & 3; iVar4 = local_740, uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar7 = *pbVar5;
                  pbVar5 = pbVar5 + 1;
                  pbVar7 = pbVar7 + 1;
                }
              }
LAB_00404f3e:
              FUN_00405420(local_784,(char *)local_784,(int *)pFVar3);
              pbVar7 = &DAT_004125c4;
              pbVar5 = local_784;
              pvVar8 = extraout_ECX_09;
              do {
                bVar1 = *pbVar5;
                uVar11 = (undefined3)((uint)pvVar8 >> 8);
                pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                bVar14 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00404f79:
                  iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_00404f7e;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                pvVar8 = (void *)CONCAT31(uVar11,bVar1);
                bVar14 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00404f79;
                pbVar5 = pbVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00404f7e:
              if (iVar6 == 0) goto LAB_00404fe9;
              goto LAB_00404c87;
            }
LAB_00404fe9:
            puVar2 = local_744;
            FUN_00405880(local_744,&local_73c);
            local_788 = local_788 + 1;
            local_744 = puVar2 + 0x27;
            pvVar8 = extraout_ECX_10;
            local_61c = local_788;
          }
        }
        FUN_00405420(pvVar8,(char *)local_784,(int *)pFVar3);
        pbVar5 = local_784;
        pbVar7 = &DAT_004125d8;
        do {
          bVar1 = *pbVar7;
          bVar14 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00405050:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_00405055;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar14 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00405050;
          pbVar7 = pbVar7 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00405055:
      } while (iVar4 != 0);
    }
    FUN_00405730(&DAT_0041c288 + DAT_005c4388 * 0x6a0,(char *)local_6a0);
    DAT_005c4388 = DAT_005c4388 + 1;
    FUN_00405420(this_04,(char *)local_784,(int *)pFVar3);
    pbVar5 = local_784;
    pbVar7 = &DAT_004123bc;
    pvVar8 = extraout_ECX_11;
    do {
      bVar1 = *pbVar7;
      uVar11 = (undefined3)((uint)pvVar8 >> 8);
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00405129:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto joined_r0x004049a4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      pvVar8 = (void *)CONCAT31(uVar11,bVar1);
      bVar14 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00405129;
      pbVar7 = pbVar7 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
  } while( true );
}


// ===== FUN_00405190 @ 00405190

undefined4 FUN_00405190(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  char *pcVar13;
  undefined1 *local_90;
  undefined4 local_8c;
  int local_88;
  byte local_80 [64];
  byte local_40 [64];
  
  uVar3 = 1;
  local_8c = 1;
  local_88 = 0;
  if (0 < DAT_005c4388) {
    local_90 = &DAT_0041c288;
    do {
      iVar10 = 0;
      if (0 < *(int *)(local_90 + 0x84)) {
        pbVar9 = local_90 + 0xe0;
        do {
          pbVar6 = pbVar9 + -0x40;
          pbVar11 = &DAT_004125b4;
          pbVar4 = pbVar6;
          do {
            bVar1 = *pbVar4;
            bVar12 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_00405206:
              iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0040520b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar12 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_00405206;
            pbVar4 = pbVar4 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_0040520b:
          if (iVar5 == 0) {
            pbVar6 = FUN_004053a0(pbVar9);
            *(byte **)(pbVar9 + 0x40) = pbVar6;
            if (pbVar6 == (byte *)0x0) {
              pcVar13 = s_Unknown_link___s__at_scrn__s__ho_00412680;
LAB_0040533c:
              local_8c = 0;
              FUN_004085b1(&DAT_005c4288,(byte *)pcVar13);
              FUN_004060d0(&DAT_005c4288);
            }
          }
          else {
            pbVar4 = &DAT_004125a8;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < *pbVar4;
              if (bVar1 != *pbVar4) {
LAB_00405266:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_0040526b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < pbVar4[1];
              if (bVar1 != pbVar4[1]) goto LAB_00405266;
              pbVar6 = pbVar6 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_0040526b:
            if (iVar5 == 0) {
              uVar7 = 0xffffffff;
              pbVar6 = pbVar9;
              do {
                pbVar4 = pbVar6;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pbVar4 = pbVar6 + 1;
                bVar1 = *pbVar6;
                pbVar6 = pbVar4;
              } while (bVar1 != 0);
              uVar7 = ~uVar7;
              iVar5 = 0;
              pbVar6 = pbVar4 + -uVar7;
              pbVar4 = local_80;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pbVar4 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar4 = pbVar4 + 4;
              }
              for (uVar7 = uVar7 & 3; bVar1 = local_80[0], uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar4 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
              }
              while ((bVar1 != 0 && (bVar1 != 0x3d))) {
                iVar2 = iVar5 + 1;
                iVar5 = iVar5 + 1;
                bVar1 = local_80[iVar2];
              }
              uVar7 = 0xffffffff;
              pbVar6 = local_80 + iVar5 + 1;
              do {
                pbVar4 = pbVar6;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pbVar4 = pbVar6 + 1;
                bVar1 = *pbVar6;
                pbVar6 = pbVar4;
              } while (bVar1 != 0);
              uVar7 = ~uVar7;
              pbVar6 = pbVar4 + -uVar7;
              pbVar4 = local_40;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pbVar4 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar4 = pbVar4 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar4 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
              }
              local_80[iVar5] = 0;
              pbVar6 = FUN_004053a0(local_80);
              if (pbVar6 == (byte *)0x0) {
                FUN_004085b1(&DAT_005c4288,(byte *)s_Unknown_node___s__in_set_action_a_00412644);
                FUN_004060d0(&DAT_005c4288);
                local_8c = 0;
              }
              pbVar6 = FUN_004053a0(local_40);
              if (pbVar6 == (byte *)0x0) {
                pcVar13 = s_Unknown_node___s__in_set_action_a_00412644;
                goto LAB_0040533c;
              }
            }
          }
          iVar10 = iVar10 + 1;
          pbVar9 = pbVar9 + 0x9c;
          uVar3 = local_8c;
        } while (iVar10 < *(int *)(local_90 + 0x84));
      }
      local_88 = local_88 + 1;
      local_90 = local_90 + 0x6a0;
    } while (local_88 < DAT_005c4388);
  }
  return uVar3;
}


// ===== FUN_004053a0 @ 004053a0

byte * __cdecl FUN_004053a0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_4;
  
  iVar5 = 0;
  bVar2 = false;
  local_4 = (byte *)0x0;
  pbVar3 = (byte *)0x0;
  if (0 < DAT_005c4388) {
    pbVar7 = &DAT_0041c288;
    do {
      pbVar3 = pbVar7;
      pbVar6 = param_1;
      if (bVar2) {
        return local_4;
      }
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004053ec:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004053f1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004053ec;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004053f1:
      if (iVar4 == 0) {
        bVar2 = true;
        local_4 = pbVar7;
      }
      iVar5 = iVar5 + 1;
      pbVar7 = pbVar7 + 0x6a0;
      pbVar3 = local_4;
    } while (iVar5 < DAT_005c4388);
  }
  return pbVar3;
}


// ===== FUN_00405420 @ 00405420

void __thiscall FUN_00405420(void *this,char *param_1,int *param_2)

{
  char cVar1;
  void *this_00;
  char local_100 [256];
  
  FUN_0040842d(this,param_2,&DAT_004126ac);
  cVar1 = *param_1;
  while (cVar1 == '#') {
    FUN_00408705(local_100,0x100,param_2);
    FUN_0040842d(this_00,param_2,&DAT_004126ac);
    cVar1 = *param_1;
  }
  return;
}


// ===== FUN_00405480 @ 00405480

undefined4 __cdecl FUN_00405480(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = &DAT_004126d4;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004054b9:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004054be;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004054b9;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004054be:
  if (iVar3 != 0) {
    pcVar5 = s_right_004126cc;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_004054f5:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004054fa;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004054f5;
      pbVar2 = pbVar2 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004054fa:
    if (iVar3 != 0) {
      pbVar4 = &DAT_004126c8;
      pbVar2 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00405531:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00405536;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00405531;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00405536:
      if (iVar3 != 0) {
        pbVar4 = &DAT_004126c0;
        pbVar2 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_0040556d:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00405572;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_0040556d;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00405572:
        if (iVar3 != 0) {
          pcVar5 = s_forward_004126b8;
          pbVar2 = param_1;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < (byte)*pcVar5;
            if (bVar1 != *pcVar5) {
LAB_004055a5:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_004055aa;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < ((byte *)pcVar5)[1];
            if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004055a5;
            pbVar2 = pbVar2 + 2;
            pcVar5 = (char *)((byte *)pcVar5 + 2);
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_004055aa:
          if (iVar3 != 0) {
            pcVar5 = s_hotzone_004126b0;
            do {
              bVar1 = *param_1;
              bVar6 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_004055dd:
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_004055e2;
              }
              if (bVar1 == 0) break;
              bVar1 = param_1[1];
              bVar6 = bVar1 < ((byte *)pcVar5)[1];
              if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004055dd;
              param_1 = param_1 + 2;
              pcVar5 = (char *)((byte *)pcVar5 + 2);
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_004055e2:
            if (iVar3 == 0) {
              return 2;
            }
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


// ===== FUN_00405610 @ 00405610

void __cdecl FUN_00405610(undefined1 *param_1,undefined4 *param_2)

{
  switch(*param_1) {
  case 100:
    *param_2 = 0x78;
    param_2[1] = 0x181;
    param_2[2] = 0x208;
    param_2[3] = 0x1a9;
    param_2[4] = 1;
    return;
  default:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  case 0x66:
    *param_2 = 0xaa;
    param_2[1] = 0x82;
    param_2[2] = 0x1d6;
    param_2[3] = 0x159;
    param_2[4] = 0;
    return;
  case 0x6c:
    *param_2 = 0x46;
    param_2[1] = 0x5a;
    param_2[2] = 0x78;
    param_2[3] = 0x181;
    param_2[4] = 2;
    return;
  case 0x72:
    *param_2 = 0x208;
    param_2[1] = 0x5a;
    param_2[2] = 0x23a;
    param_2[3] = 0x181;
    param_2[4] = 3;
    return;
  case 0x75:
    *param_2 = 0x78;
    param_2[1] = 0x32;
    param_2[2] = 0x208;
    param_2[3] = 0x5a;
    return;
  }
}


// ===== FUN_00405730 @ 00405730

void __cdecl FUN_00405730(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = param_2 + 0x40;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x40;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  if (0 < *(int *)(param_2 + 0x84)) {
    pcVar4 = param_1 + 0x88;
    do {
      FUN_00405880((undefined4 *)pcVar4,(undefined4 *)(pcVar4 + ((int)param_2 - (int)param_1)));
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 0x9c;
    } while (iVar6 < *(int *)(param_2 + 0x84));
  }
  return;
}


// ===== FUN_004057d0 @ 004057d0

void __cdecl FUN_004057d0(int param_1,int param_2)

{
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(param_2 + 0x40);
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x40);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  if (0 < *(int *)(param_2 + 0x84)) {
    puVar6 = (undefined4 *)(param_1 + 0x88);
    do {
      FUN_00405880(puVar6,(undefined4 *)((int)puVar6 + (param_2 - param_1)));
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 0x27;
    } while (iVar8 < *(int *)(param_2 + 0x84));
  }
  pFVar2 = (FILE *)FUN_00408463(s_tmp_sav_00412364,&DAT_004126e4);
  FUN_00408476((int *)pFVar2,(byte *)s__s__s_004126dc);
  FUN_004083d7(pFVar2);
  return;
}


// ===== FUN_00405880 @ 00405880

void __cdecl FUN_00405880(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(param_2 + 6);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 6);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(param_2 + 0x16);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x16);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x26] = param_2[0x26];
  return;
}


// ===== FUN_00405910 @ 00405910

void FUN_00405910(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004085b1(&DAT_005c4288,(byte *)s_nodeCount____d_00412700);
  FUN_004060d0(&DAT_005c4288);
  iVar1 = 0;
  if (0 < DAT_005c4388) {
    puVar2 = &DAT_0041c288;
    do {
      FUN_004085b1(&DAT_005c4288,(byte *)s_nodeArray__d___004126f0);
      FUN_004060d0(&DAT_005c4288);
      FUN_00405990((int)puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x6a0;
    } while (iVar1 < DAT_005c4388);
  }
  FUN_004060d0((byte *)s_end_004126e8);
  return;
}


// ===== FUN_00405990 @ 00405990

void __cdecl FUN_00405990(int param_1)

{
  int iVar1;
  
  FUN_004085b1(&DAT_005c4288,(byte *)s_nodeName____s__imgFile____s__num_00412728);
  FUN_004060d0(&DAT_005c4288);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      FUN_004085b1(&DAT_005c4288,(byte *)s_hotzone__d___00412710);
      FUN_004060d0(&DAT_005c4288);
      FUN_00405a10();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x84));
  }
  return;
}


// ===== FUN_00405a10 @ 00405a10

void FUN_00405a10(void)

{
  FUN_004085b1(&DAT_005c4288,(byte *)s_rect____d__d__d__d_004127b8);
  FUN_004060d0(&DAT_005c4288);
  FUN_004085b1(&DAT_005c4288,(byte *)s_action____s__data____s__link_____00412780);
  FUN_004060d0(&DAT_005c4288);
  FUN_004085b1(&DAT_005c4288,(byte *)s_cursorId____d_00412758);
  FUN_004060d0(&DAT_005c4288);
  return;
}


// ===== FUN_00405a90 @ 00405a90

void __cdecl FUN_00405a90(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  int local_90;
  int local_8c;
  byte local_80 [64];
  byte local_40 [64];
  
  bVar2 = false;
  if (param_2 < 0x32) {
    if (param_3 != 0x201) {
      SetCursor(DAT_00419f9c);
      return;
    }
    FUN_00403b90(&DAT_00412918);
    return;
  }
  local_8c = 0;
  if (0 < *(int *)(DAT_0041c280 + 0x84)) {
    local_90 = 0;
    do {
      if (bVar2) {
        return;
      }
      iVar4 = FUN_004060a0((int *)(DAT_0041c280 + local_90 + 0x88),param_1,param_2);
      if (iVar4 != 0) {
        bVar2 = true;
        if (param_3 == 0x201) {
          if (-1 < *(int *)(DAT_0041c280 + local_90 + 0x9c)) {
            DAT_004120e8 = *(int *)(&DAT_0041a328 + *(int *)(DAT_0041c280 + local_90 + 0x9c) * 4);
            FUN_00407760(DAT_004120e8);
            iVar4 = FUN_004038d0((byte *)s_elevatorRun_wav_00412908);
            if (((DAT_004120e8 == iVar4) ||
                (iVar4 = FUN_004038d0((byte *)s_elevatorOpen_wav_004128f4), DAT_004120e8 == iVar4))
               || (iVar4 = FUN_004038d0((byte *)s_elevatorRun2_wav_004128e0), DAT_004120e8 == iVar4)
               ) {
              FUN_00403b90(s_WAIT_SOUND_004128d4);
            }
          }
          pbVar10 = &DAT_004125b4;
          pbVar6 = DAT_0041c280 + local_90 + 0xa0;
          pbVar5 = pbVar6;
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00405c0a:
              iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00405c0f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00405c0a;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00405c0f:
          if ((iVar4 == 0) && (*(int *)(DAT_0041c280 + local_90 + 0x120) != 0)) {
            if (DAT_00419e82 != '\0') {
              FUN_004085b1(&DAT_005c4288,(byte *)s_hotzone__d__clicked__moved_from___004128ac);
              FUN_004060d0(&DAT_005c4288);
            }
            DAT_0041c280 = *(byte **)(DAT_0041c280 + local_90 + 0x120);
            if ((-1 < *(int *)(DAT_0041c280 + 0x80)) &&
               (iVar4 = FUN_00407ba0(*(int *)(DAT_0041c280 + 0x80)), iVar4 != 2)) {
              FUN_00407b00(DAT_004120e4);
              FUN_00406110(500);
              FUN_00407a80(*(int *)(&DAT_00419e00 + *(int *)(DAT_0041c280 + 0x80) * 4));
              DAT_004120e4 = *(int *)(DAT_0041c280 + 0x80);
            }
            pcVar11 = s_winner_004128a4;
            pbVar6 = DAT_0041c280;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < (byte)*pcVar11;
              if (bVar1 != *pcVar11) {
LAB_00405cf8:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00405cfd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < ((byte *)pcVar11)[1];
              if (bVar1 != ((byte *)pcVar11)[1]) goto LAB_00405cf8;
              pbVar6 = pbVar6 + 2;
              pcVar11 = (char *)((byte *)pcVar11 + 2);
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00405cfd:
            if (iVar4 == 0) {
              FUN_00403b90(s_ENDING_0041289c);
            }
            uVar8 = 0xffffffff;
            pbVar5 = DAT_0041c280 + 0x40;
            pbVar6 = DAT_0041c280;
            do {
              pbVar10 = pbVar6;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pbVar10 = pbVar6 + 1;
              bVar1 = *pbVar6;
              pbVar6 = pbVar10;
            } while (bVar1 != 0);
            uVar8 = ~uVar8;
            pbVar6 = pbVar10 + -uVar8;
            pbVar10 = (byte *)&DAT_00419e8c;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar10 = pbVar10 + 1;
            }
            FUN_00403540(pbVar5);
            if (DAT_00419e82 != '\0') {
              FUN_004085b1(&DAT_005c4288,(byte *)s_to__s__00412894);
              FUN_004060d0(&DAT_005c4288);
            }
            pcVar11 = s_letter_0041288c;
            pbVar6 = DAT_0041c280;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < (byte)*pcVar11;
              if (bVar1 != *pcVar11) {
LAB_00405d9f:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00405da4;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < ((byte *)pcVar11)[1];
              if (bVar1 != ((byte *)pcVar11)[1]) goto LAB_00405d9f;
              pbVar6 = pbVar6 + 2;
              pcVar11 = (char *)((byte *)pcVar11 + 2);
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00405da4:
            if (iVar4 == 0) {
              pbVar6 = FUN_004053a0((byte *)s_unionExitUnlocked_00412878);
              pcVar11 = s_unionExitClosed_00412868;
            }
            else {
              pbVar5 = &DAT_00412860;
              pbVar6 = DAT_0041c280;
              do {
                bVar1 = *pbVar6;
                bVar12 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00405deb:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00405df0;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar12 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00405deb;
                pbVar6 = pbVar6 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00405df0:
              if (iVar4 == 0) {
                pbVar6 = FUN_004053a0((byte *)s_boxWithKey_00412854);
                pcVar11 = &DAT_00412850;
              }
              else {
                pcVar11 = s_boxWithoutKey_00412840;
                pbVar6 = DAT_0041c280;
                do {
                  bVar1 = *pbVar6;
                  bVar12 = bVar1 < (byte)*pcVar11;
                  if (bVar1 != *pcVar11) {
LAB_00405e34:
                    iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00405e39;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar12 = bVar1 < ((byte *)pcVar11)[1];
                  if (bVar1 != ((byte *)pcVar11)[1]) goto LAB_00405e34;
                  pbVar6 = pbVar6 + 2;
                  pcVar11 = (char *)((byte *)pcVar11 + 2);
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00405e39:
                if (iVar4 != 0) goto LAB_0040605d;
                pbVar6 = FUN_004053a0((byte *)s_gotKey_00412838);
                pcVar11 = s_unionHallClose_00412828;
              }
            }
            pbVar5 = FUN_004053a0((byte *)pcVar11);
            FUN_004057d0((int)pbVar5,(int)pbVar6);
          }
          else {
            pbVar10 = &DAT_004125a8;
            pbVar5 = pbVar6;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00405e95:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00405e9a;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00405e95;
              pbVar5 = pbVar5 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00405e9a:
            if (iVar4 == 0) {
              uVar8 = 0xffffffff;
              pbVar6 = DAT_0041c280 + local_90 + 0xe0;
              do {
                pbVar5 = pbVar6;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pbVar5 = pbVar6 + 1;
                bVar1 = *pbVar6;
                pbVar6 = pbVar5;
              } while (bVar1 != 0);
              uVar8 = ~uVar8;
              iVar4 = 0;
              pbVar6 = pbVar5 + -uVar8;
              pbVar5 = local_80;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pbVar5 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar5 = pbVar5 + 4;
              }
              for (uVar8 = uVar8 & 3; bVar1 = local_80[0], uVar8 != 0; uVar8 = uVar8 - 1) {
                *pbVar5 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                pbVar5 = pbVar5 + 1;
              }
              while ((bVar1 != 0 && (bVar1 != 0x3d))) {
                iVar3 = iVar4 + 1;
                iVar4 = iVar4 + 1;
                bVar1 = local_80[iVar3];
              }
              uVar8 = 0xffffffff;
              pbVar6 = local_80 + iVar4 + 1;
              do {
                pbVar5 = pbVar6;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pbVar5 = pbVar6 + 1;
                bVar1 = *pbVar6;
                pbVar6 = pbVar5;
              } while (bVar1 != 0);
              uVar8 = ~uVar8;
              pbVar6 = pbVar5 + -uVar8;
              pbVar5 = local_40;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pbVar5 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
                pbVar5 = pbVar5 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pbVar5 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                pbVar5 = pbVar5 + 1;
              }
              local_80[iVar4] = 0;
              pbVar6 = FUN_004053a0(local_40);
              pbVar5 = FUN_004053a0(local_80);
              FUN_004057d0((int)pbVar5,(int)pbVar6);
              if (DAT_00419e82 != '\0') {
                FUN_004085b1(&DAT_005c4288,(byte *)s_hotzone__d__clicked__set__s__00412804);
                FUN_004060d0(&DAT_005c4288);
              }
            }
            else {
              pbVar10 = &DAT_004125ac;
              pbVar5 = pbVar6;
              do {
                bVar1 = *pbVar5;
                bVar12 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00405fa8:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00405fad;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar12 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00405fa8;
                pbVar5 = pbVar5 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00405fad:
              if (iVar4 == 0) {
                uVar7 = FUN_00406960(&DAT_00419fb0,DAT_0041c280 + local_90 + 0xe0);
                if ((char)uVar7 == '\0') {
                  FUN_004085b1(&DAT_005c4288,(byte *)s_Unknown_puzzle___s_at_hotzone__d_004127d0);
                  FUN_004060d0(&DAT_005c4288);
                }
              }
              else {
                pbVar5 = &DAT_004125a0;
                do {
                  bVar1 = *pbVar6;
                  bVar12 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_0040602b:
                    iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00406030;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar12 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_0040602b;
                  pbVar6 = pbVar6 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00406030:
                if (iVar4 == 0) {
                  FUN_00403c80();
                }
              }
            }
          }
        }
        else if (param_3 == 0x200) {
          SetCursor((HCURSOR)(&DAT_00419f8c)[*(int *)(DAT_0041c280 + local_90 + 0x98)]);
        }
      }
LAB_0040605d:
      local_8c = local_8c + 1;
      local_90 = local_90 + 0x9c;
    } while (local_8c < *(int *)(DAT_0041c280 + 0x84));
  }
  return;
}


// ===== FUN_004060a0 @ 004060a0

undefined4 __cdecl FUN_004060a0(int *param_1,int param_2,int param_3)

{
  if ((((*param_1 <= param_2) && (param_1[1] <= param_3)) && (param_2 <= param_1[2])) &&
     (param_3 <= param_1[3])) {
    return 1;
  }
  return 0;
}


// ===== FUN_004060d0 @ 004060d0

void __cdecl FUN_004060d0(byte *param_1)

{
  FILE *pFVar1;
  
  if (DAT_00419e80 != '\0') {
    pFVar1 = (FILE *)FUN_00408463(s_log_txt_00412920,&DAT_004126e4);
    FUN_00408476((int *)pFVar1,param_1);
    FUN_004083d7(pFVar1);
  }
  return;
}


// ===== FUN_00406110 @ 00406110

void __cdecl FUN_00406110(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = GetTickCount();
  DVar2 = GetTickCount();
  iVar3 = DVar2 - DVar1;
  while (iVar3 < param_1) {
    DVar2 = GetTickCount();
    iVar3 = DVar2 - DVar1;
  }
  return;
}


// ===== FUN_00406140 @ 00406140

void FUN_00406140(void)

{
  int iVar1;
  
  FUN_00403540((byte *)(DAT_0041c280 + 0x40));
  if (-1 < *(int *)(DAT_0041c280 + 0x80)) {
    iVar1 = FUN_00407ba0(*(int *)(DAT_0041c280 + 0x80));
    if (iVar1 != 2) {
      FUN_00407b00(DAT_004120e4);
      FUN_00407a80(*(int *)(&DAT_00419e00 + *(int *)(DAT_0041c280 + 0x80) * 4));
      DAT_004120e4 = *(int *)(DAT_0041c280 + 0x80);
    }
  }
  return;
}


// ===== FUN_004061b0 @ 004061b0

undefined4 __thiscall FUN_004061b0(void *this,int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 local_48;
  int local_44;
  byte local_40 [64];
  undefined3 uVar5;
  
  local_48 = 1;
  local_44 = 0;
  do {
    FUN_00405420(this,(char *)local_40,param_1);
    pbVar6 = &DAT_00412a48;
    pbVar2 = local_40;
    this_00 = extraout_ECX;
    do {
      bVar1 = *pbVar2;
      uVar5 = (undefined3)((uint)this_00 >> 8);
      this_00 = (void *)CONCAT31(uVar5,bVar1);
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00406204:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00406209;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (void *)CONCAT31(uVar5,bVar1);
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00406204;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00406209:
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      pcVar7 = s_LOG_MAP_BUILD_00412a38;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        uVar5 = (undefined3)((uint)this_00 >> 8);
        this_00 = (void *)CONCAT31(uVar5,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00406241:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00406246;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this_00 = (void *)CONCAT31(uVar5,bVar1);
        bVar8 = bVar1 < ((byte *)pcVar7)[1];
        if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00406241;
        pbVar2 = pbVar2 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00406246:
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      else {
        pcVar7 = s_LOG_MOUSE_CLICKS_00412a24;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          uVar5 = (undefined3)((uint)this_00 >> 8);
          this_00 = (void *)CONCAT31(uVar5,bVar1);
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00406281:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00406286;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          this_00 = (void *)CONCAT31(uVar5,bVar1);
          bVar8 = bVar1 < ((byte *)pcVar7)[1];
          if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00406281;
          pbVar2 = pbVar2 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00406286:
        if (iVar3 == 0) {
          iVar3 = 2;
        }
        else {
          pcVar7 = s_SHOW_INTRO_00412a18;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            uVar5 = (undefined3)((uint)this_00 >> 8);
            this_00 = (void *)CONCAT31(uVar5,bVar1);
            bVar8 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_004062c1:
              iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_004062c6;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            this_00 = (void *)CONCAT31(uVar5,bVar1);
            bVar8 = bVar1 < ((byte *)pcVar7)[1];
            if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_004062c1;
            pbVar2 = pbVar2 + 2;
            pcVar7 = (char *)((byte *)pcVar7 + 2);
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_004062c6:
          if (iVar3 == 0) {
            iVar3 = 3;
          }
          else {
            pcVar7 = s_SCREEN_OUTPUT_00412a08;
            pbVar2 = local_40;
            do {
              bVar1 = *pbVar2;
              uVar5 = (undefined3)((uint)this_00 >> 8);
              this_00 = (void *)CONCAT31(uVar5,bVar1);
              bVar8 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00406301:
                iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_00406306;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              this_00 = (void *)CONCAT31(uVar5,bVar1);
              bVar8 = bVar1 < ((byte *)pcVar7)[1];
              if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00406301;
              pbVar2 = pbVar2 + 2;
              pcVar7 = (char *)((byte *)pcVar7 + 2);
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00406306:
            if (iVar3 == 0) {
              iVar3 = 4;
            }
            else {
              pcVar7 = s_MUSIC_00412a00;
              pbVar2 = local_40;
              do {
                bVar1 = *pbVar2;
                uVar5 = (undefined3)((uint)this_00 >> 8);
                this_00 = (void *)CONCAT31(uVar5,bVar1);
                bVar8 = bVar1 < (byte)*pcVar7;
                if (bVar1 != *pcVar7) {
LAB_0040633e:
                  iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                  goto LAB_00406343;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar2[1];
                this_00 = (void *)CONCAT31(uVar5,bVar1);
                bVar8 = bVar1 < ((byte *)pcVar7)[1];
                if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_0040633e;
                pbVar2 = pbVar2 + 2;
                pcVar7 = (char *)((byte *)pcVar7 + 2);
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00406343:
              if (iVar3 == 0) {
                iVar3 = 5;
              }
              else {
                pcVar7 = s_SOUND_004129f8;
                pbVar2 = local_40;
                do {
                  bVar1 = *pbVar2;
                  uVar5 = (undefined3)((uint)this_00 >> 8);
                  this_00 = (void *)CONCAT31(uVar5,bVar1);
                  bVar8 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_0040637b:
                    iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_00406380;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  this_00 = (void *)CONCAT31(uVar5,bVar1);
                  bVar8 = bVar1 < ((byte *)pcVar7)[1];
                  if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_0040637b;
                  pbVar2 = pbVar2 + 2;
                  pcVar7 = (char *)((byte *)pcVar7 + 2);
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00406380:
                if (iVar3 != 0) {
                  FUN_004085b1(&DAT_005c4288,(byte *)s___Unknown_environment_variable____00412928);
                  FUN_004060d0(&DAT_005c4288);
                  local_48 = 0;
                  break;
                }
                iVar3 = 6;
              }
            }
          }
        }
      }
    }
    FUN_00405420(this_00,(char *)local_40,param_1);
    pbVar6 = &DAT_004129f4;
    pbVar2 = local_40;
    this = extraout_ECX_00;
    do {
      bVar1 = *pbVar2;
      uVar5 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar5,bVar1);
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_004063c8:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_004063cd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar5,bVar1);
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_004063c8;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004063cd:
    if (iVar4 == 0) {
      (&DAT_00419e80)[iVar3] = 1;
    }
    else {
      pbVar6 = &DAT_004129f0;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        uVar5 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar5,bVar1);
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00406407:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0040640c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar5,bVar1);
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00406407;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0040640c:
      if (iVar4 != 0) {
        FUN_004085b1(&DAT_005c4288,(byte *)s___Unknown_environment_variable_s_00412988);
        FUN_004060d0(&DAT_005c4288);
        local_48 = 0;
        break;
      }
      (&DAT_00419e80)[iVar3] = 0;
    }
    local_44 = local_44 + 1;
  } while (local_44 < 7);
  if (DAT_00419e80 == '\0') {
    FUN_0040f220(s_log_txt_00412920);
  }
  return local_48;
}


// ===== FUN_004064a0 @ 004064a0

void __fastcall FUN_004064a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00410904;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== FUN_004064b0 @ 004064b0

void __thiscall FUN_004064b0(void *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < 4)) {
    uVar1 = (&DAT_005c4de8)[param_1];
    (&DAT_005c4de8)[param_1] = (&DAT_005c4dec)[param_1];
    (&DAT_005c4dec)[param_1] = uVar1;
  }
  bVar2 = false;
  iVar4 = 0;
  piVar3 = &DAT_005c4de8;
  do {
    if (bVar2) goto LAB_0040650b;
    if (*piVar3 != iVar4) {
      bVar2 = true;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x5c4dfc);
  if (!bVar2) {
    FUN_00406590((int)this);
  }
LAB_0040650b:
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 8))();
  return;
}


// ===== FUN_00406520 @ 00406520

undefined1 __fastcall FUN_00406520(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// ===== FUN_00406530 @ 00406530

undefined1 __fastcall FUN_00406530(int param_1)

{
  return *(undefined1 *)(param_1 + 5);
}


// ===== FUN_00406540 @ 00406540

void FUN_00406540(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = &DAT_005c4de8;
  do {
    iVar2 = FUN_00406580(iVar4);
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    *(int *)(&DAT_005c439c + iVar1 * 0x210) = iVar2;
  } while ((int)piVar3 < 0x5c4dfc);
  return;
}


// ===== FUN_00406580 @ 00406580

int FUN_00406580(int param_1)

{
  return param_1 * 0x50 + 0x7a;
}


// ===== FUN_00406590 @ 00406590

void __fastcall FUN_00406590(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_00407760(DAT_005c4dfc);
  return;
}


// ===== FUN_004065b0 @ 004065b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004065b0(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    DAT_005c4de8 = 3;
    DAT_005c4dec = 4;
    _DAT_005c4df0 = 0;
    _DAT_005c4df4 = 2;
    _DAT_005c4df8 = 1;
    (**(code **)(*param_1 + 8))();
  }
  *(undefined1 *)((int)param_1 + 5) = 0;
  DAT_004120e4 = DAT_005c4de0;
  FUN_00407b00(DAT_005c4de0);
  FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_005c4de0 * 4));
  FUN_00403540((byte *)s_presPuzzleBkgd_dib_00412a4c);
  return;
}


// ===== FUN_00406630 @ 00406630

undefined4 FUN_00406630(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined4 *)&DAT_005c4390;
  iVar2 = 0x7a;
  do {
    iVar1 = FUN_00401000(puVar3,iVar2,200,0x4b,100,1,0x11,0x800);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 0x50;
    puVar3 = puVar3 + 0x84;
  } while (iVar2 < 0x20a);
  iVar2 = FUN_00401b20((short *)&DAT_00413c38,s___images_presTemplate_dib_00412a90);
  if (iVar2 == 0) {
    FUN_004060d0((byte *)s____Error_loading_image__presTemp_00412a60);
    return 0;
  }
  puVar4 = &DAT_005c4390;
  iVar2 = 10;
  do {
    FUN_004012a0((int)puVar4,0x413c38,0,iVar2,10,1);
    iVar2 = iVar2 + 100;
    puVar4 = puVar4 + 0x210;
  } while (iVar2 < 0x1fe);
  FUN_00401c70(0x413c38);
  DAT_005c4de4 = FUN_004038d0((byte *)s_click_wav_0041208c);
  DAT_005c4dfc = FUN_004038d0((byte *)s_win_wav_00412084);
  DAT_005c4de0 = FUN_00403a30((byte *)s_midifile7_mid_00412068);
  return 1;
}


// ===== FUN_00406710 @ 00406710

void __thiscall FUN_00406710(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004067b0(param_1,param_2);
  if (((param_3 == 0x201) && (*(char *)((int)this + 4) == '\0')) && (-1 < iVar1)) {
    FUN_004064b0(this,iVar1);
    FUN_00403540((byte *)s_presPuzzleBkgd_dib_00412a4c);
    FUN_00407760(DAT_005c4de4);
    return;
  }
  if (((0x78 < param_1) && (param_1 < 0x208)) && ((0x177 < param_2 && (param_2 < 0x1a9)))) {
    if (param_3 == 0x201) {
      *(undefined1 *)((int)this + 5) = 1;
      return;
    }
    SetCursor(DAT_00419f90);
  }
  return;
}


// ===== FUN_004067b0 @ 004067b0

undefined4 FUN_004067b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((199 < param_2) && (param_2 < 0x12d)) {
    if (param_1 < 0xc6) {
      return 0;
    }
    if ((0xc9 < param_1) && (param_1 < 0x116)) {
      return 1;
    }
    if ((0x119 < param_1) && (param_1 < 0x166)) {
      return 2;
    }
    if ((0x169 < param_1) && (param_1 < 0x1b6)) {
      uVar1 = 3;
    }
  }
  return uVar1;
}


// ===== FUN_00406820 @ 00406820

undefined1 * __fastcall FUN_00406820(undefined1 *param_1)

{
  FUN_00406c70((undefined4 *)(param_1 + 4));
  FUN_004064a0((undefined4 *)(param_1 + 0x310));
  FUN_00403cc0((undefined4 *)(param_1 + 0x318));
  FUN_00407d00((undefined4 *)(param_1 + 0x360));
  FUN_004024c0((undefined4 *)(param_1 + 0x36c));
  *param_1 = 0;
  return param_1;
}


// ===== FUN_00406860 @ 00406860

bool __fastcall FUN_00406860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_004070a0();
  iVar2 = FUN_00406630();
  iVar3 = FUN_00404210(param_1 + 0x318);
  iVar4 = FUN_00408100(param_1 + 0x360);
  iVar5 = FUN_004028e0(param_1 + 0x36c);
  if (iVar5 == 0) {
    return false;
  }
  return iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0));
}


// ===== FUN_004068c0 @ 004068c0

void __thiscall FUN_004068c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  switch(*this) {
  case 0x41:
    puVar1 = (undefined4 *)((int)this + 0x318);
    break;
  case 0x42:
    puVar1 = (undefined4 *)((int)this + 0x36c);
    break;
  default:
    goto switchD_004068d3_caseD_43;
  case 0x45:
    puVar1 = (undefined4 *)((int)this + 4);
    break;
  case 0x50:
    (**(code **)(*(int *)((int)this + 0x310) + 4))(param_1,param_2,param_3);
    return;
  case 0x54:
    puVar1 = (undefined4 *)((int)this + 0x360);
  }
  (**(code **)*puVar1)(param_1,param_2,param_3);
switchD_004068d3_caseD_43:
  return;
}


// ===== FUN_00406960 @ 00406960

uint __thiscall FUN_00406960(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)this = *param_1;
  FUN_00403b90(s_PUZZLE_00412aac);
  switch(*param_1) {
  case 0x41:
    uVar1 = (**(code **)(*(int *)((int)this + 0x318) + 4))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  case 0x42:
    uVar1 = (**(code **)(*(int *)((int)this + 0x36c) + 4))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  default:
    return (int)(char)*param_1 - 0x41U & 0xffffff00;
  case 0x45:
    uVar1 = (**(code **)(*(int *)((int)this + 4) + 4))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  case 0x50:
    uVar1 = (*(code *)**(undefined4 **)((int)this + 0x310))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  case 0x54:
    uVar1 = (**(code **)(*(int *)((int)this + 0x360) + 4))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
}


// ===== FUN_00406a30 @ 00406a30

undefined1 __fastcall FUN_00406a30(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 local_1;
  
  switch(*param_1) {
  case 0x41:
    uVar1 = FUN_00406530((int)(param_1 + 0x318));
    return uVar1;
  case 0x42:
    uVar1 = FUN_00406530((int)(param_1 + 0x36c));
    return uVar1;
  default:
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    return local_1;
  case 0x45:
    uVar1 = FUN_00406530((int)(param_1 + 4));
    return uVar1;
  case 0x50:
    uVar1 = FUN_00406530((int)(param_1 + 0x310));
    return uVar1;
  case 0x54:
    uVar1 = FUN_00406530((int)(param_1 + 0x360));
    return uVar1;
  }
}


// ===== FUN_00406ac0 @ 00406ac0

undefined1 __fastcall FUN_00406ac0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 local_1;
  
  switch(*param_1) {
  case 0x41:
    uVar1 = FUN_00406520((int)(param_1 + 0x318));
    return uVar1;
  case 0x42:
    uVar1 = FUN_00406520((int)(param_1 + 0x36c));
    return uVar1;
  default:
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    return local_1;
  case 0x45:
    uVar1 = FUN_00406520((int)(param_1 + 4));
    return uVar1;
  case 0x50:
    uVar1 = FUN_00406520((int)(param_1 + 0x310));
    return uVar1;
  case 0x54:
    uVar1 = FUN_00406520((int)(param_1 + 0x360));
    return uVar1;
  }
}


// ===== FUN_00406b50 @ 00406b50

undefined1 __fastcall FUN_00406b50(undefined1 *param_1)

{
  return *param_1;
}


// ===== FUN_00406b60 @ 00406b60

void __fastcall FUN_00406b60(undefined1 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  switch(*param_1) {
  case 0x41:
    pbVar1 = FUN_004053a0((byte *)s_ArrayGame_solved_00412b08);
    pbVar2 = FUN_004053a0((byte *)s_ArrayGame_result_00412af4);
    FUN_004057d0((int)pbVar2,(int)pbVar1);
    return;
  case 0x42:
    pbVar1 = FUN_004053a0((byte *)s_BoxGame_solved_00412ac4);
    pbVar2 = FUN_004053a0((byte *)s_BoxGame_result_00412ab4);
    FUN_004057d0((int)pbVar2,(int)pbVar1);
    break;
  case 0x45:
    pbVar1 = FUN_004053a0((byte *)s_EightQueens_solved_00412b58);
    pbVar2 = FUN_004053a0((byte *)s_EightQueens_result_00412b44);
    FUN_004057d0((int)pbVar2,(int)pbVar1);
    return;
  case 0x50:
    pbVar1 = FUN_004053a0((byte *)s_PresPuzzle_solved_00412b30);
    pbVar2 = FUN_004053a0((byte *)s_PresPuzzle_result_00412b1c);
    FUN_004057d0((int)pbVar2,(int)pbVar1);
    return;
  case 0x54:
    pbVar1 = FUN_004053a0((byte *)s_Towers_solved_00412ae4);
    pbVar2 = FUN_004053a0((byte *)s_Towers_result_00412ad4);
    FUN_004057d0((int)pbVar2,(int)pbVar1);
    return;
  }
  return;
}


// ===== FUN_00406c70 @ 00406c70

void __fastcall FUN_00406c70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00410910;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== FUN_00406c80 @ 00406c80

void __thiscall FUN_00406c80(void *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (((((param_4 == 0x201) && (0x82 < param_2)) && (param_2 < 0x1bd)) &&
      ((0x4b < param_3 && (param_3 < 0x18c)))) && (*(char *)((int)param_1 + 4) == '\0')) {
    iVar2 = FUN_004071b0(param_2);
    iVar3 = FUN_004071d0(param_3);
    if (*(int *)((int)param_1 + (iVar3 + iVar2 * 8) * 4 + 0x108) == 1) {
      FUN_00406ec0(param_1,iVar2,iVar3);
    }
    else {
      bVar1 = FUN_00407190(param_1,iVar2,iVar3);
      if (bVar1) {
        FUN_00406dd0(param_1,iVar2,iVar3);
      }
      else {
        FUN_00407760(DAT_005c5e90);
      }
    }
    if (*(int *)((int)param_1 + 0x308) == 8) {
      iVar2 = FUN_00403a30((byte *)s_midifile8_mid_00412b7c);
      DAT_004120e4 = *(int *)(&DAT_0041a328 + iVar2 * 4);
      *(undefined1 *)((int)param_1 + 4) = 1;
      FUN_00407760(DAT_005c5e88);
      FUN_00407a80(DAT_004120e4);
    }
    FUN_00403540((byte *)s_queensBkgd_dib_00412b6c);
    return;
  }
  if (((0x78 < param_2) && (param_2 < 0x208)) && (400 < param_3)) {
    if (param_4 == 0x201) {
      *(undefined1 *)((int)param_1 + 5) = 1;
      return;
    }
    SetCursor(DAT_00419f90);
  }
  return;
}


// ===== FUN_00406dd0 @ 00406dd0

undefined1 __thiscall FUN_00406dd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_9;
  
  iVar2 = param_1;
  local_9 = 0;
  FUN_004071f0(param_1,param_2);
  iVar6 = param_1 * 8;
  *(undefined4 *)((int)this + (iVar6 + param_2) * 4 + 0x108) = 1;
  *(int *)((int)this + 0x308) = *(int *)((int)this + 0x308) + 1;
  param_1 = -1;
  do {
    iVar5 = -1;
    do {
      if ((param_1 == 0) && (iVar5 == 0)) {
        uVar3 = FUN_00406fc0(iVar2,param_2);
        if ((char)uVar3 != '\0') {
          local_9 = 1;
          iVar4 = iVar6 + param_2;
          *(int *)((int)this + iVar4 * 4 + 8) = *(int *)((int)this + iVar4 * 4 + 8) + 1;
        }
      }
      else {
        iVar7 = param_2 + iVar5;
        iVar4 = param_1 + iVar2;
        uVar3 = FUN_00406fc0(iVar4,iVar7);
        if ((char)uVar3 != '\0') {
          local_9 = 1;
          do {
            iVar1 = iVar7 + iVar4 * 8;
            iVar7 = iVar7 + iVar5;
            iVar4 = iVar4 + param_1;
            *(int *)((int)this + iVar1 * 4 + 8) = *(int *)((int)this + iVar1 * 4 + 8) + 1;
            uVar3 = FUN_00406fc0(iVar4,iVar7);
          } while ((char)uVar3 != '\0');
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    param_1 = param_1 + 1;
  } while (param_1 < 2);
  return local_9;
}


// ===== FUN_00406ec0 @ 00406ec0

undefined1 __thiscall FUN_00406ec0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_9;
  
  iVar3 = param_1;
  local_9 = 0;
  FUN_00407290(this,param_1);
  iVar7 = param_1 * 8;
  *(undefined4 *)((int)this + (iVar7 + param_2) * 4 + 0x108) = 0;
  *(int *)((int)this + 0x308) = *(int *)((int)this + 0x308) + -1;
  param_1 = -1;
  do {
    iVar6 = -1;
    do {
      if ((param_1 == 0) && (iVar6 == 0)) {
        uVar4 = FUN_00406fc0(iVar3,param_2);
        if ((char)uVar4 != '\0') {
          iVar5 = iVar7 + param_2;
          iVar8 = *(int *)((int)this + iVar5 * 4 + 8);
          if (0 < iVar8) {
            local_9 = 1;
            *(int *)((int)this + iVar5 * 4 + 8) = iVar8 + -1;
          }
        }
      }
      else {
        iVar5 = param_2 + iVar6;
        iVar8 = param_1 + iVar3;
        uVar4 = FUN_00406fc0(iVar8,iVar5);
        if ((char)uVar4 != '\0') {
          local_9 = 1;
          do {
            iVar1 = iVar5 + iVar8 * 8;
            iVar2 = *(int *)((int)this + iVar1 * 4 + 8);
            if (0 < iVar2) {
              *(int *)((int)this + iVar1 * 4 + 8) = iVar2 + -1;
            }
            iVar5 = iVar5 + iVar6;
            iVar8 = iVar8 + param_1;
            uVar4 = FUN_00406fc0(iVar8,iVar5);
          } while ((char)uVar4 != '\0');
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    param_1 = param_1 + 1;
  } while (param_1 < 2);
  return local_9;
}


// ===== FUN_00406fc0 @ 00406fc0

undefined4 FUN_00406fc0(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (param_1 = param_2, -1 < param_2)) && (param_2 < 8)) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return param_1 & 0xffffff00;
}


// ===== FUN_00406ff0 @ 00406ff0

void __fastcall FUN_00406ff0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 0;
    piVar5 = &DAT_005c4e18;
    iVar6 = 0x47;
    puVar1 = (undefined4 *)(param_1 + 0x108);
    do {
      uVar2 = uVar4 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      piVar5[-1] = uVar2 * 0x28 + 0x1e5;
      *piVar5 = iVar6;
      piVar5[-4] = 0;
      iVar3 = 8;
      do {
        puVar1[-0x40] = 0;
        *puVar1 = 0;
        puVar1[0x40] = 0;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar6 = iVar6 + 0x27;
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x84;
    } while (iVar6 < 0x17f);
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  DAT_004120e4 = DAT_005c5e8c;
  FUN_00407b00(DAT_005c5e8c);
  FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_005c5e8c * 4));
  FUN_00403540((byte *)s_queensBkgd_dib_00412b6c);
  return;
}


// ===== FUN_004070a0 @ 004070a0

undefined4 FUN_004070a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005c4e08;
  do {
    iVar1 = FUN_00401000(puVar2,0,0,0x28,0x46,1,0x11,0x800);
    if (iVar1 == 0) {
      return 0;
    }
    *puVar2 = 0;
    puVar2 = puVar2 + 0x84;
  } while ((int)puVar2 < 0x5c5e88);
  iVar1 = FUN_00401b20((short *)&DAT_00413c38,s___images_queensTemplate_dib_00412bc8);
  if (iVar1 == 0) {
    FUN_004060d0((byte *)s____Error_loading_image__queensTe_00412b98);
    return 0;
  }
  puVar2 = &DAT_005c4e08;
  do {
    FUN_004012a0((int)puVar2,0x413c38,0,10,10,1);
    puVar2 = puVar2 + 0x84;
  } while ((int)puVar2 < 0x5c5e88);
  FUN_00401c70(0x413c38);
  DAT_005c4e00 = FUN_004038d0((byte *)s_click_wav_0041208c);
  DAT_005c5e90 = FUN_004038d0((byte *)s_buzzer_wav_00412078);
  DAT_005c5e94 = FUN_004038d0((byte *)s_Drip_wav_00412b8c);
  DAT_005c5e88 = FUN_004038d0((byte *)s_win_wav_00412084);
  DAT_005c5e8c = FUN_00403a30((byte *)s_midifile7_mid_00412068);
  return 1;
}


// ===== FUN_00407190 @ 00407190

bool __thiscall FUN_00407190(void *this,int param_1,int param_2)

{
  return *(int *)((int)this + (param_2 + param_1 * 8) * 4 + 8) < 1;
}


// ===== FUN_004071b0 @ 004071b0

int FUN_004071b0(int param_1)

{
  return (param_1 + -0x83) / 0x28;
}


// ===== FUN_004071d0 @ 004071d0

int FUN_004071d0(int param_1)

{
  return (param_1 + -0x4c) / 0x27;
}


// ===== FUN_004071f0 @ 004071f0

void FUN_004071f0(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = false;
  iVar5 = 0x47;
  iVar4 = param_1;
  do {
    if (bVar1) break;
    iVar3 = 0;
    piVar2 = &DAT_005c4e18;
    do {
      if (bVar1) break;
      if ((piVar2[-4] == 0) && (*piVar2 == iVar5)) {
        bVar1 = true;
        iVar4 = iVar3;
      }
      piVar2 = piVar2 + 0x84;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x5c5e98);
    iVar5 = iVar5 + 0x27;
  } while (iVar5 < 0x17f);
  (&DAT_005c4e14)[iVar4 * 0x84] = param_1 * 0x28 + 0x83;
  (&DAT_005c4e18)[iVar4 * 0x84] = param_2 * 0x27 + 0x2e;
  (&DAT_005c4e08)[iVar4 * 0x84] = 1;
  FUN_00407760(DAT_005c4e00);
  return;
}


// ===== FUN_00407290 @ 00407290

void __thiscall FUN_00407290(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = false;
  iVar1 = param_1 * 0x28;
  iVar4 = 0;
  piVar3 = &DAT_005c4e14;
  do {
    if (bVar2) break;
    if ((piVar3[-3] == 1) && (*piVar3 == iVar1 + 0x83)) {
      bVar2 = true;
      param_1 = iVar4;
    }
    piVar3 = piVar3 + 0x84;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x5c5e94);
  uVar5 = *(int *)((int)this + 0x308) + 1U & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  (&DAT_005c4e14)[param_1 * 0x84] = uVar5 * 0x28 + 0x1e5;
  (&DAT_005c4e18)[param_1 * 0x84] = *(int *)((int)this + 0x308) * 0x27 + 0x20;
  (&DAT_005c4e08)[param_1 * 0x84] = 0;
  FUN_00407760(DAT_005c5e94);
  return;
}


// ===== FUN_00407340 @ 00407340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl FUN_00407340(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  HMMIO hmmio;
  MMRESULT MVar3;
  LONG LVar4;
  HPSTR pch;
  int iVar5;
  uint uVar6;
  int iVar7;
  _MMCKINFO *p_Var8;
  HPSTR pcVar9;
  _MMCKINFO *p_Var10;
  char *pcVar11;
  char *pcVar12;
  short asStack_3c [2];
  undefined4 uStack_38;
  _MMCKINFO local_28;
  _MMCKINFO local_14;
  
  iVar7 = 0;
  piVar2 = &DAT_005c6304;
  while (*piVar2 != 0) {
    piVar2 = piVar2 + 5;
    iVar7 = iVar7 + 1;
    if (0x5c7703 < (int)piVar2) {
      return (undefined1 *)0xffffffff;
    }
  }
  if (iVar7 == -1) {
    return (undefined1 *)0xffffffff;
  }
  local_28.ckid = 0;
  local_28.cksize = 0;
  local_28.fccType = 0;
  local_28.dwDataOffset = 0;
  local_28.dwFlags = 0;
  p_Var8 = &local_28;
  p_Var10 = &local_14;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    p_Var10->ckid = p_Var8->ckid;
    p_Var8 = (_MMCKINFO *)&p_Var8->cksize;
    p_Var10 = (_MMCKINFO *)&p_Var10->cksize;
  }
  hmmio = mmioOpenA(param_1,(LPMMIOINFO)0x0,0x10000);
  if (hmmio == (HMMIO)0x0) {
    return (undefined1 *)0xffffffff;
  }
  local_28.fccType = 0x45564157;
  MVar3 = mmioDescend(hmmio,&local_28,(MMCKINFO *)0x0,0x20);
  if (MVar3 != 0) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  local_14.ckid = 0x20746d66;
  MVar3 = mmioDescend(hmmio,&local_14,&local_28,0);
  if (MVar3 != 0) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  LVar4 = mmioRead(hmmio,(HPSTR)asStack_3c,0x12);
  if (LVar4 != 0x12) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  if (asStack_3c[0] != 1) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  MVar3 = mmioAscend(hmmio,&local_14,0);
  if (MVar3 != 0) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  local_14.ckid = 0x61746164;
  MVar3 = mmioDescend(hmmio,&local_14,&local_28,0x10);
  if (MVar3 != 0) {
    mmioClose(hmmio,0);
    return (undefined1 *)0xffffffff;
  }
  pch = (HPSTR)_malloc(local_14.cksize);
  mmioRead(hmmio,pch,local_14.cksize);
  mmioClose(hmmio,0);
  _DAT_005c7718 = 0x10001;
  (&DAT_005c6308)[iVar7 * 5] = uStack_38;
  _DAT_005c771c = 0x2b11;
  _DAT_005c7720 = 0x2b11;
  (&DAT_005c630c)[iVar7 * 5] = local_14.cksize;
  (&DAT_005c6304)[iVar7 * 5] = 1;
  puVar1 = &DAT_005c6300 + iVar7 * 5;
  _DAT_005c7734 = param_2 | 10;
  _DAT_005c7724 = 0x80001;
  _DAT_005c7728 = 0;
  _DAT_005c7730 = 0x14;
  _DAT_005c7738 = local_14.cksize;
  _DAT_005c7740 = &DAT_005c7718;
  iVar7 = (**(code **)(*DAT_005c7744 + 0xc))(DAT_005c7744,&DAT_005c7730,puVar1,0);
  if (iVar7 < 0) {
    FUN_004082bc(pch);
    return (undefined1 *)0xffffffff;
  }
  pcVar12 = (char *)0x1;
  iVar7 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1,0,local_28.fccType);
  if (iVar7 < 0) {
    return (undefined1 *)0x0;
  }
  pcVar9 = pch;
  pcVar11 = pcVar12;
  for (uVar6 = (uint)&stack0xffffffa0 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pcVar9 = pch + (int)&stack0xffffffa0;
  pcVar11 = &stack0xffffffa4;
  for (uVar6 = (uint)&stack0xffffffa8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar7 = (**(code **)(*(int *)*puVar1 + 0x4c))
                    ((int *)*puVar1,pcVar12,&stack0xffffffa0,&stack0xffffffa4,&stack0xffffffa8);
  if (iVar7 < 0) {
    return (undefined1 *)0x0;
  }
  FUN_004082bc(pch);
  return &stack0xffffffac;
}


// ===== FUN_00407680 @ 00407680

undefined4 FUN_00407680(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (DAT_00412be8 != 0) {
    puVar4 = &DAT_005c6300;
    for (iVar1 = 0x500; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_00412be8 = 0;
    iVar1 = Ordinal_1(0,&DAT_005c7744,0);
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = (**(code **)(*DAT_005c7744 + 0x18))(DAT_005c7744,DAT_0041a528,1);
    if (iVar1 < 0) {
      return 0;
    }
  }
  iVar1 = 0;
  piVar2 = &DAT_005c6300;
  do {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x48))(piVar3);
      (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
    }
    piVar3 = piVar2 + 5;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[1] = 0;
    piVar2[4] = iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar3;
  } while ((int)piVar3 < 0x5c7700);
  return 1;
}


// ===== FUN_00407720 @ 00407720

undefined4 FUN_00407720(void)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00407850();
  piVar2 = &DAT_005c6300;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar2 = piVar2 + 5;
  } while ((int)piVar2 < 0x5c7700);
  (**(code **)(*DAT_005c7744 + 8))(DAT_005c7744);
  return 1;
}


// ===== FUN_00407760 @ 00407760

undefined4 __cdecl FUN_00407760(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  if (DAT_00419e86 != '\0') {
    piVar1 = (int *)(&DAT_005c6300)[param_1 * 5];
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
      if (iVar2 < 0) {
        return 0;
      }
      iVar2 = (**(code **)(*(int *)(&DAT_005c6300)[param_1 * 5] + 0x30))
                        ((int *)(&DAT_005c6300)[param_1 * 5],0,0,unaff_retaddr);
      if (iVar2 < 0) {
        return 0;
      }
    }
  }
  return 1;
}


// ===== FUN_004077c0 @ 004077c0

undefined4 __cdecl FUN_004077c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(&DAT_005c6300)[param_1 * 5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
    (**(code **)(*(int *)(&DAT_005c6300)[param_1 * 5] + 0x34))
              ((int *)(&DAT_005c6300)[param_1 * 5],0);
  }
  return 1;
}


// ===== FUN_004077f0 @ 004077f0

undefined4 FUN_004077f0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00407810(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return 1;
}


// ===== FUN_00407810 @ 00407810

undefined4 __cdecl FUN_00407810(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_004077c0(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(&DAT_005c6300)[param_1 * 5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    (&DAT_005c6300)[param_1 * 5] = 0;
  }
  return 1;
}


// ===== FUN_00407850 @ 00407850

undefined4 FUN_00407850(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_004077c0(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return 1;
}


// ===== FUN_00407870 @ 00407870

undefined4 * __cdecl FUN_00407870(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(&DAT_005c6300)[param_1 * 5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
    return &param_1;
  }
  return (undefined4 *)0xffffffff;
}


// ===== FUN_004078a0 @ 004078a0

int FUN_004078a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  short asStack_73c [276];
  uint local_514 [65];
  WCHAR local_410 [252];
  WCHAR aWStack_218 [262];
  LPCSTR pCStack_c;
  
  iVar3 = 0;
  piVar1 = &DAT_005c5ea4;
  while (*piVar1 != 0) {
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 1;
    if (0x5c62a3 < (int)piVar1) {
      return -1;
    }
  }
  if (iVar3 == -1) {
    return -1;
  }
  iVar2 = FUN_00408781(local_514,0x104);
  if (iVar2 == 0) {
    return -1;
  }
  MultiByteToWideChar(0,1,(LPCSTR)local_514,-1,local_410,0x104);
  iVar2 = (**(code **)(*DAT_005c7750 + 0x14))(DAT_005c7750,&DAT_00410630);
  if (iVar2 < 0) {
    return -1;
  }
  MultiByteToWideChar(0,1,pCStack_c,-1,aWStack_218,0x104);
  puVar4 = (undefined4 *)&stack0xfffff78c;
  for (iVar2 = 0xd4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_0040875c(asStack_73c,aWStack_218);
  piVar1 = (int *)&stack0xfffff788;
  iVar2 = (**(code **)(*DAT_005c7750 + 0xc))(DAT_005c7750,&stack0xfffff78c,&DAT_00410850);
  if (iVar2 < 0) {
    return -1;
  }
  piVar6 = (int *)0xffffffff;
  iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,&DAT_00410780,0xffffffff,0,0,DAT_005c774c);
  if (iVar2 < 0) {
    return -1;
  }
  uVar5 = 0xffffffff;
  iVar2 = (**(code **)(*piVar6 + 0x4c))(piVar6,&DAT_00410720,0xffffffff,0,0,DAT_005c774c);
  if (iVar2 < 0) {
    return -1;
  }
  (&DAT_005c5e98)[iVar3 * 4] = uVar5;
  (&DAT_005c5e9c)[iVar3 * 4] = 0;
  (&DAT_005c5ea4)[iVar3 * 4] = 1;
  return iVar3;
}


// ===== FUN_00407a80 @ 00407a80

undefined4 __cdecl FUN_00407a80(int param_1)

{
  if (DAT_00419e85 != '\0') {
    if (((&DAT_005c5e98)[param_1 * 4] != 0) && ((&DAT_005c5ea4)[param_1 * 4] != 0)) {
      if (DAT_00412be4 != -1) {
        FUN_00407b00(DAT_00412be4);
      }
      (**(code **)(*DAT_005c774c + 0x10))
                (DAT_005c774c,(&DAT_005c5e98)[param_1 * 4],0,0,0,&DAT_005c5e9c + param_1 * 4);
      DAT_00412be4 = param_1;
      (&DAT_005c5ea4)[param_1 * 4] = 2;
      return 1;
    }
  }
  return 0;
}


// ===== FUN_00407b00 @ 00407b00

undefined4 __cdecl FUN_00407b00(int param_1)

{
  if (((&DAT_005c5e98)[param_1 * 4] != 0) && ((&DAT_005c5ea4)[param_1 * 4] != 0)) {
    (**(code **)(*DAT_005c774c + 0x14))(DAT_005c774c,(&DAT_005c5e98)[param_1 * 4],0,0,0);
    (&DAT_005c5ea4)[param_1 * 4] = 3;
    DAT_00412be4 = 0xffffffff;
    return 1;
  }
  return 0;
}


// ===== FUN_00407b50 @ 00407b50

undefined4 FUN_00407b50(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_005c5e98;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,&DAT_00410730,0xffffffff,0,0,DAT_005c774c);
      (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[3] = 0;
    }
    piVar2 = piVar2 + 4;
  } while ((int)piVar2 < 0x5c6298);
  return 1;
}


// ===== FUN_00407ba0 @ 00407ba0

int __cdecl FUN_00407ba0(int param_1)

{
  int iVar1;
  
  if (((&DAT_005c5e98)[param_1 * 4] != 0) && ((&DAT_005c5ea4)[param_1 * 4] != 0)) {
    iVar1 = (**(code **)(*DAT_005c774c + 0x38))(DAT_005c774c,(&DAT_005c5e98)[param_1 * 4],0);
    iVar1 = (iVar1 != 0) + 2;
    (&DAT_005c5ea4)[param_1 * 4] = iVar1;
    return iVar1;
  }
  return 0;
}


// ===== FUN_00407be0 @ 00407be0

undefined4 FUN_00407be0(void)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 *puVar3;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    return 0;
  }
  HVar1 = CoCreateInstance((IID *)&DAT_004104e0,(LPUNKNOWN)0x0,3,(IID *)&DAT_00410880,&DAT_005c774c)
  ;
  if (HVar1 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_005c774c + 0xc))(DAT_005c774c,0,DAT_005c7744,DAT_0041a528);
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_005c774c + 0x60))(DAT_005c774c,0);
  if (iVar2 < 0) {
    return 0;
  }
  HVar1 = CoCreateInstance((IID *)&DAT_004105e0,(LPUNKNOWN)0x0,3,(IID *)&DAT_00410820,
                           (LPVOID *)&DAT_005c7750);
  if (HVar1 < 0) {
    return 0;
  }
  iVar2 = 0;
  puVar3 = &DAT_005c5e9c;
  do {
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[1] = iVar2;
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)puVar3 < 0x5c629c);
  DAT_00412be4 = 0xffffffff;
  return 1;
}


// ===== FUN_00407ca0 @ 00407ca0

undefined4 FUN_00407ca0(void)

{
  if (DAT_005c774c != (int *)0x0) {
    (**(code **)(*DAT_005c774c + 0x14))(DAT_005c774c,0,0,0,0);
  }
  FUN_00407b50();
  if (DAT_005c774c != (int *)0x0) {
    (**(code **)(*DAT_005c774c + 0x98))(DAT_005c774c);
    (**(code **)(*DAT_005c774c + 8))(DAT_005c774c);
  }
  if (DAT_005c7750 != (int *)0x0) {
    (**(code **)(*DAT_005c7750 + 8))(DAT_005c7750);
  }
  CoUninitialize();
  return 1;
}


// ===== FUN_00407d00 @ 00407d00

void __fastcall FUN_00407d00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00410920;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== FUN_00407d10 @ 00407d10

void __thiscall FUN_00407d10(void *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00407f80(param_1,param_2);
  if ((((param_3 != 0x201) || (*(char *)((int)this + 4) != '\0')) ||
      (*(char *)((int)this + 8) != '\0')) || (iVar3 == 0)) {
    if (((0x78 < param_1) && (param_1 < 0x208)) && ((0x177 < param_2 && (param_2 < 0x1a9)))) {
      if (param_3 == 0x201) {
        *(undefined1 *)((int)this + 5) = 1;
        return;
      }
      SetCursor(DAT_00419f90);
    }
    return;
  }
  if (DAT_005c8434 == 0) {
    if ((&DAT_005c7968)[iVar3] < 0) {
      FUN_00407760(DAT_005c7968);
    }
    else {
      DAT_005c8434 = iVar3;
      FUN_00407760(DAT_005c79b8);
    }
    goto LAB_00407e11;
  }
  bVar1 = FUN_00407e70(DAT_005c8434,iVar3);
  iVar4 = DAT_005c7968;
  if (bVar1) {
    FUN_00407ef0(DAT_005c8434,iVar3);
    FUN_00407760(DAT_005c8430);
    cVar2 = FUN_00407ec0((int)this);
    iVar4 = DAT_005c79bc;
    if (cVar2 != '\0') goto LAB_00407dff;
  }
  else {
LAB_00407dff:
    FUN_00407760(iVar4);
  }
  DAT_005c8434 = 0;
LAB_00407e11:
  FUN_00407fe0();
  FUN_00403540((byte *)s_towersBkgd_dib_00412bec);
  return;
}


// ===== FUN_00407e70 @ 00407e70

bool FUN_00407e70(int param_1,int param_2)

{
  if ((int)(&DAT_005c7968)[param_2] < 0) {
    return true;
  }
  return (int)(&DAT_005c797c)[(&DAT_005c7968)[param_1] + -5 + param_1 * 5] <
         (int)(&DAT_005c7968)[param_2 * 5 + (&DAT_005c7968)[param_2]];
}


// ===== FUN_00407ec0 @ 00407ec0

void __fastcall FUN_00407ec0(int param_1)

{
  if ((DAT_005c79a0 < 1) && (DAT_005c79b4 < 1)) {
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ===== FUN_00407ef0 @ 00407ef0

void FUN_00407ef0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00407f40(param_1);
  FUN_00407f10(uVar1,param_2);
  return;
}


// ===== FUN_00407f10 @ 00407f10

void FUN_00407f10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (&DAT_005c7968)[param_2];
  (&DAT_005c7968)[param_2] = iVar1 + 1;
  (&DAT_005c7968)[iVar1 + 1 + param_2 * 5] = param_1;
  return;
}


// ===== FUN_00407f40 @ 00407f40

undefined4 FUN_00407f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_005c7968)[param_1] + param_1 * 5;
  uVar2 = (&DAT_005c7968)[iVar1];
  (&DAT_005c7968)[param_1] = (&DAT_005c7968)[param_1] + -1;
  (&DAT_005c7968)[iVar1] = 0;
  return uVar2;
}


// ===== FUN_00407f80 @ 00407f80

undefined4 FUN_00407f80(int param_1,int param_2)

{
  if ((0xb7 < param_2) && (param_2 < 0x130)) {
    if ((0x8b < param_1) && (param_1 < 0xe7)) {
      return 1;
    }
    if ((0xef < param_1) && (param_1 < 0x14b)) {
      return 2;
    }
    if ((0x153 < param_1) && (param_1 < 0x1af)) {
      return 3;
    }
  }
  return 0;
}


// ===== FUN_00407fe0 @ 00407fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407fe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_005c79d4;
  piVar3 = &DAT_005c797c;
  do {
    puVar2 = &DAT_005c79c0;
    do {
      if (*piVar3 != 0) {
        iVar1 = *piVar3 * 0x210;
        *(undefined4 *)(&DAT_005c77dc + iVar1) = *puVar4;
        *(undefined4 *)(&DAT_005c77e0 + iVar1) = *puVar2;
      }
      puVar2 = puVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)puVar2 < 0x5c79d4);
    puVar4 = puVar4 + 1;
  } while ((int)piVar3 < 0x5c79b8);
  if (DAT_005c8434 != 0) {
    _DAT_005c7764 = *(int *)(&DAT_005c79d0 + DAT_005c8434 * 4) + 0x2d;
    FUN_004013e0(0x5c7758);
    return;
  }
  FUN_004013c0(0x5c7758);
  return;
}


// ===== FUN_00408060 @ 00408060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408060(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    DAT_005c8434 = 0;
    puVar2 = &DAT_005c797c;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_005c7980 = 4;
    _DAT_005c796c = 4;
    DAT_005c797c = 5;
    DAT_005c7984 = 3;
    _DAT_005c7988 = 2;
    _DAT_005c798c = 1;
    _DAT_005c7970 = 0xffffffff;
    _DAT_005c7974 = 0xffffffff;
    FUN_00407fe0();
  }
  DAT_004120e4 = DAT_005c7978;
  FUN_00407b00(DAT_005c7978);
  FUN_00407a80(*(int *)(&DAT_00419e00 + DAT_005c7978 * 4));
  FUN_00403540((byte *)s_towersBkgd_dib_00412bec);
  return;
}


// ===== FUN_00408100 @ 00408100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00408100(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar2 = (undefined4 *)&DAT_005c79e0;
  puVar3 = &DAT_005c797c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  _DAT_005c7970 = 0;
  _DAT_005c7974 = 0;
  _DAT_005c796c = 4;
  DAT_005c79d4 = 0x87;
  DAT_005c79d8 = 0xeb;
  _DAT_005c79dc = 0x14f;
  _DAT_005c79d0 = 0xc3;
  _DAT_005c79cc = 0xd7;
  _DAT_005c79c8 = 0xeb;
  DAT_005c79c4 = 0xff;
  DAT_005c79c0 = 0x113;
  do {
    iVar1 = FUN_00401000(puVar2,0,0,100,10,1,0x11,0x800);
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = puVar2 + 0x84;
  } while ((int)puVar2 < 0x5c8430);
  FUN_00407fe0();
  iVar1 = FUN_00401000((undefined4 *)&DAT_005c7758,DAT_005c79d4,0x133,10,10,1,1,0x800);
  if (iVar1 != 0) {
    iVar1 = FUN_00401b20((short *)&DAT_00413c38,s___images_towersTemplate_dib_00412c38);
    if (iVar1 == 0) {
      FUN_004060d0((byte *)s____Error_loading_image__towersTe_00412c08);
      return 0;
    }
    puVar4 = &DAT_005c79e0;
    iVar1 = 0x46;
    do {
      FUN_004012a0((int)puVar4,0x413c38,0,10,iVar1,1);
      iVar1 = iVar1 + 0x14;
      puVar4 = puVar4 + 0x210;
    } while (iVar1 < 0xaa);
    FUN_004012a0(0x5c7758,0x413c38,0,10,10,1);
    FUN_00401c70(0x413c38);
    DAT_005c8430 = FUN_004038d0((byte *)s_click_wav_0041208c);
    DAT_005c79b8 = FUN_004038d0((byte *)s_select_wav_00412bfc);
    DAT_005c79bc = FUN_004038d0((byte *)s_win_wav_00412084);
    DAT_005c7968 = FUN_004038d0((byte *)s_buzzer_wav_00412078);
    DAT_005c7978 = FUN_00403a30((byte *)s_midifile7_mid_00412068);
    return 1;
  }
  return 0;
}


// ===== DirectDrawCreate @ 004082b0

void DirectDrawCreate(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectDrawCreate();
  return;
}


// ===== Ordinal_1 @ 004082b6

void Ordinal_1(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1();
  return;
}


// ===== FUN_004082bc @ 004082bc

void __cdecl FUN_004082bc(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00408a55((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00408a80(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_005c99cc,0,param_1);
  }
  return;
}


// ===== _malloc @ 004082eb

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_005c844c);
  return pvVar1;
}


// ===== __nh_malloc @ 004082fd

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_00408329((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_00409260(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


// ===== FUN_00408329 @ 00408329

void __cdecl FUN_00408329(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_00412c78) && (piVar1 = FUN_00408dab(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_005c99cc,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


// ===== FUN_0040835f @ 0040835f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040835f(void)

{
  void *extraout_ECX;
  
  FUN_00408377();
  _DAT_005c843c = FUN_004092cb();
  FUN_0040927b(extraout_ECX);
  return;
}


// ===== FUN_00408376 @ 00408376

void FUN_00408376(void)

{
  return;
}


// ===== FUN_00408377 @ 00408377

void FUN_00408377(void)

{
  PTR_FUN_00412c80 = &LAB_0040934e;
  PTR_FUN_00412c7c = __cfltcvt;
  PTR_FUN_00412c84 = __fassign;
  PTR_FUN_00412c88 = FUN_004092f4;
  PTR_FUN_00412c8c = &LAB_0040939c;
  PTR_FUN_00412c90 = __cfltcvt;
  return;
}


// ===== __ftol @ 004083b0

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


// ===== FUN_004083d7 @ 004083d7

undefined4 __cdecl FUN_004083d7(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_00409848((int *)param_1);
      __freebuf(param_1);
      iVar1 = FUN_0040972f(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_004082bc(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1->_flag = 0;
  return uVar2;
}


// ===== FUN_0040842d @ 0040842d

void __thiscall FUN_0040842d(void *this,int *param_1,byte *param_2)

{
  FUN_0040991a(this,param_1,param_2,(undefined4 *)&stack0x0000000c);
  return;
}


// ===== FUN_00408443 @ 00408443

void __cdecl FUN_00408443(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0040a53b();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  FUN_0040a3cb(param_1,param_2,param_3,puVar1);
  return;
}


// ===== FUN_00408463 @ 00408463

void __cdecl FUN_00408463(LPCSTR param_1,char *param_2)

{
  FUN_00408443(param_1,param_2,0x40);
  return;
}


// ===== FUN_00408476 @ 00408476

int __cdecl FUN_00408476(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040a5b3(param_1);
  iVar2 = FUN_0040a67d(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_0040a640(iVar1,param_1);
  return iVar2;
}


// ===== FUN_004084a8 @ 004084a8

int __cdecl FUN_004084a8(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_0040a67d((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0040ae87(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}


// ===== FUN_004084f9 @ 004084f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_004084f9(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_005c99a0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0040b28b(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_005c846c = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_0040b09e(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return 0xffffffff;
}


// ===== FUN_00408593 @ 00408593

uint FUN_00408593(void)

{
  DAT_00412c68 = DAT_00412c68 * 0x343fd + 0x269ec3;
  return DAT_00412c68 >> 0x10 & 0x7fff;
}


// ===== FUN_004085b1 @ 004085b1

int __cdecl FUN_004085b1(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_0040a67d((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0040ae87(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}


// ===== FUN_00408603 @ 00408603

undefined4 __cdecl FUN_00408603(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040b09e(uVar2);
    return 0xffffffff;
  }
  return 0;
}


// ===== FUN_00408631 @ 00408631

uint __cdecl FUN_00408631(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    return param_1 & 0xff;
  }
  uVar2 = FUN_0040ae87(param_1,param_2);
  return uVar2;
}


// ===== FUN_00408655 @ 00408655

uint __cdecl FUN_00408655(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0040b473(param_1);
  return uVar3;
}


// ===== FUN_0040866f @ 0040866f

int __thiscall FUN_0040866f(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_00413024 < 2) {
      uVar1 = (byte)PTR_DAT_00412e18[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_00412e18;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_0040b54c(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_00413024 < 2) {
      uVar2 = (byte)PTR_DAT_00412e18[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_0040b54c(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


// ===== FUN_004086fa @ 004086fa

void __thiscall FUN_004086fa(void *this,byte *param_1)

{
  FUN_0040866f(this,param_1);
  return;
}


// ===== FUN_00408705 @ 00408705

char * __cdecl FUN_00408705(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    param_2 = param_2 + -1;
    pcVar3 = param_1;
    if (param_2 != 0) {
      while( true ) {
        piVar1 = param_3 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar2 = FUN_0040b473(param_3);
        }
        else {
          uVar2 = (uint)*(byte *)*param_3;
          *param_3 = (byte *)*param_3 + 1;
        }
        if (uVar2 == 0xffffffff) break;
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        if (((char)uVar2 == '\n') || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_00408749;
      }
      if (pcVar3 == param_1) {
        return (char *)0x0;
      }
    }
LAB_00408749:
    *pcVar3 = '\0';
  }
  return param_1;
}


// ===== FUN_0040875c @ 0040875c

void __cdecl FUN_0040875c(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  *param_1 = sVar1;
  while( true ) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (sVar1 == 0) break;
    sVar1 = *param_2;
    *param_1 = sVar1;
  }
  return;
}


// ===== FUN_00408781 @ 00408781

void __cdecl FUN_00408781(uint *param_1,size_t param_2)

{
  FUN_00408794(0,param_1,param_2);
  return;
}


// ===== FUN_00408794 @ 00408794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_00408794(uint param_1,uint *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  uint local_10c [65];
  LPSTR local_8;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,(LPSTR)local_10c);
  }
  else {
    iVar1 = FUN_00408865(param_1);
    if (iVar1 == 0) {
      _DAT_005c846c = 0xd;
      DAT_005c8470 = 0xf;
      return (uint *)0x0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,(LPSTR)local_10c,&local_8);
  }
  if ((DVar2 != 0) && (uVar3 = DVar2 + 1, uVar3 < 0x105)) {
    if (param_2 == (uint *)0x0) {
      if ((int)uVar3 <= (int)param_3) {
        uVar3 = param_3;
      }
      puVar4 = (uint *)_malloc(uVar3);
      if (puVar4 != (uint *)0x0) {
LAB_00408851:
        puVar4 = FUN_0040b610(puVar4,local_10c);
        return puVar4;
      }
      _DAT_005c846c = 0xc;
    }
    else {
      puVar4 = param_2;
      if ((int)uVar3 <= (int)param_3) goto LAB_00408851;
      _DAT_005c846c = 0x22;
    }
  }
  return (uint *)0x0;
}


// ===== FUN_00408865 @ 00408865

undefined4 __cdecl FUN_00408865(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


// ===== entry @ 0040889c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  HMODULE pHVar3;
  UINT UVar4;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00410930;
  puStack_10 = &LAB_0040be0c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_005c8484 = DVar1 >> 8 & 0xff;
  _DAT_005c8480 = DVar1 & 0xff;
  _DAT_005c847c = _DAT_005c8480 * 0x100 + _DAT_005c8484;
  _DAT_005c8478 = DVar1 >> 0x10;
  iVar2 = FUN_004089db(0);
  if (iVar2 == 0) {
    FUN_004089b7(0x1c);
  }
  local_8 = 0;
  FUN_0040b2c8();
  DAT_005c99d0 = GetCommandLineA();
  DAT_005c8440 = FUN_0040bbe2();
  FUN_0040b995();
  FUN_0040b8dc();
  FUN_0040af9c();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  FUN_0040b884();
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  UVar4 = FUN_00403070(pHVar3);
  FUN_0040afc9(UVar4);
  FUN_0040b700(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


// ===== FUN_00408987 @ 00408987

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00408987(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  *(code **)(iVar1 + -8) = __amsg_exit;
  __exit(*(int *)(iVar1 + -4));
}


// ===== __amsg_exit @ 00408992

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_005c8448 == 1) {
    FUN_0040bee4();
  }
  FUN_0040bf1d(param_1);
  (*(code *)PTR___exit_00412c6c)(0xff);
  return;
}


// ===== FUN_004089b7 @ 004089b7

void __cdecl FUN_004089b7(DWORD param_1)

{
  if (DAT_005c8448 == 1) {
    FUN_0040bee4();
  }
  FUN_0040bf1d(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


// ===== FUN_004089db @ 004089db

undefined4 __cdecl FUN_004089db(int param_1)

{
  int iVar1;
  
  DAT_005c99cc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_005c99cc != (HANDLE)0x0) {
    iVar1 = FUN_00408a17();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_005c99cc);
  }
  return 0;
}


// ===== FUN_00408a17 @ 00408a17

undefined4 FUN_00408a17(void)

{
  DAT_005c99c8 = HeapAlloc(DAT_005c99cc,0,0x140);
  if (DAT_005c99c8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_005c99c0 = 0;
  DAT_005c99c4 = 0;
  DAT_005c99bc = DAT_005c99c8;
  DAT_005c99b4 = 0x10;
  return 1;
}


// ===== FUN_00408a55 @ 00408a55

uint __cdecl FUN_00408a55(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_005c99c8;
  while( true ) {
    if (DAT_005c99c8 + DAT_005c99c4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


// ===== FUN_00408a80 @ 00408a80

void __cdecl FUN_00408a80(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_005c99b8;
  puVar2 = DAT_005c99c0;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_005c99c0 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_005c99b8 * 0x8000 + DAT_005c99c0[3]),0x8000,0x4000);
    DAT_005c99c0[2] = DAT_005c99c0[2] | 0x80000000U >> ((byte)DAT_005c99b8 & 0x1f);
    *(undefined4 *)(DAT_005c99c0[4] + 0xc4 + DAT_005c99b8 * 4) = 0;
    *(char *)(DAT_005c99c0[4] + 0x43) = *(char *)(DAT_005c99c0[4] + 0x43) + -1;
    if (*(char *)(DAT_005c99c0[4] + 0x43) == '\0') {
      DAT_005c99c0[1] = DAT_005c99c0[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_005c99c0[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_005c99c0[3],0,0x8000);
      HeapFree(DAT_005c99cc,0,(LPVOID)DAT_005c99c0[4]);
      FUN_0040c070(DAT_005c99c0,DAT_005c99c0 + 5,
                   (DAT_005c99c4 * 0x14 - (int)DAT_005c99c0) + -0x14 + DAT_005c99c8);
      DAT_005c99c4 = DAT_005c99c4 + -1;
      if (DAT_005c99c0 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_005c99bc = DAT_005c99c8;
      puVar2 = param_1;
    }
  }
  DAT_005c99c0 = puVar2;
  DAT_005c99b8 = uVar5;
  return;
}


// ===== FUN_00408dab @ 00408dab

int * __cdecl FUN_00408dab(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_005c99c8 + DAT_005c99c4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  param_1 = DAT_005c99bc;
  if (DAT_005c99bc < puVar8) {
    do {
      if ((param_1[1] & local_c) != 0 || (*param_1 & local_10) != 0) break;
      param_1 = param_1 + 5;
    } while (param_1 < puVar8);
  }
  puVar11 = DAT_005c99c8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_005c99bc && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_005c99bc) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_005c99c8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_005c99bc && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_005c99bc) && (param_1 = FUN_004090b4(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_00409165((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_005c99bc = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_00409071;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_00409071:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_005c99c0)) && (local_8 == DAT_005c99b8)) {
    DAT_005c99c0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}


// ===== FUN_004090b4 @ 004090b4

undefined4 * FUN_004090b4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_005c99c4 == DAT_005c99b4) {
    pvVar2 = HeapReAlloc(DAT_005c99cc,0,DAT_005c99c8,(DAT_005c99b4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_005c99b4 = DAT_005c99b4 + 0x10;
    DAT_005c99c8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_005c99c8 + DAT_005c99c4 * 0x14);
  pvVar2 = HeapAlloc(DAT_005c99cc,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_005c99c4 = DAT_005c99c4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_005c99cc,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


// ===== FUN_00409165 @ 00409165

int __cdecl FUN_00409165(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


// ===== FUN_00409260 @ 00409260

undefined4 __cdecl FUN_00409260(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_005c8450 != (code *)0x0) {
    iVar1 = (*DAT_005c8450)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ===== FUN_0040927b @ 0040927b

void __fastcall FUN_0040927b(void *param_1)

{
  FUN_0040c3da(param_1,0x10000,0x30000);
  return;
}


// ===== FUN_0040928d @ 0040928d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040928d(void)

{
  if (_DAT_00410940 < _DAT_00410948 - (_DAT_00410948 / _DAT_00410950) * _DAT_00410950) {
    return 1;
  }
  return 0;
}


// ===== FUN_004092cb @ 004092cb

void FUN_004092cb(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_0040928d();
  return;
}


// ===== FUN_004092f4 @ 004092f4

void __thiscall FUN_004092f4(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this_00;
  uint uVar3;
  undefined *puVar4;
  
  this_00 = (undefined *)(int)*param_1;
  uVar3 = FUN_0040c50b(this,(uint)this_00);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_00413024 < 2) {
        uVar3 = (byte)PTR_DAT_00412e18[*param_1 * 2] & 4;
        this_00 = PTR_DAT_00412e18;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_0040b54c(this_00,(int)*param_1,4);
        this_00 = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_00413028;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


// ===== __fassign @ 004093b4

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_0040c968(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_0040c995(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}


// ===== FUN_004093f2 @ 004093f2

undefined1 * __cdecl FUN_004093f2(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  
  piVar1 = DAT_005c8454;
  if (DAT_005c8458 == '\0') {
    piVar1 = (int *)FUN_0040ca39();
    FUN_0040c9c2(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,(int)piVar1);
  }
  else {
    FUN_0040970a(param_2 + (*DAT_005c8454 == 0x2d),(uint)(0 < param_3));
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  puVar3 = puVar2;
  if (0 < param_3) {
    puVar3 = puVar2 + 1;
    *puVar2 = puVar2[1];
    *puVar3 = DAT_00413028;
  }
  puVar4 = FUN_0040b610((uint *)(puVar3 + param_3 + (uint)(DAT_005c8458 == '\0')),(uint *)"e+000");
  if (param_4 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar5 = piVar1[1] + -1;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar5) {
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar4 + 2) + (char)(iVar5 / 100);
      iVar5 = iVar5 % 100;
    }
    if (9 < iVar5) {
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar4 + 3) + (char)(iVar5 / 10);
      iVar5 = iVar5 % 10;
    }
    *(char *)(puVar4 + 1) = (char)puVar4[1] + (char)iVar5;
  }
  return param_2;
}


// ===== FUN_004094f6 @ 004094f6

char * __cdecl FUN_004094f6(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_005c8454;
  if (DAT_005c8458 == '\0') {
    piVar1 = (int *)FUN_0040ca39();
    FUN_0040c9c2(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_005c845c == param_3) {
    iVar2 = (*DAT_005c8454 == 0x2d) + DAT_005c845c;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_0040970a(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_0040970a(pcVar3,1);
    *pcVar3 = DAT_00413028;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_005c8458 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_0040970a(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}


// ===== FUN_004095d4 @ 004095d4

void __cdecl FUN_004095d4(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_005c8454 = (int *)FUN_0040ca39();
  DAT_005c845c = DAT_005c8454[1] + -1;
  iVar1 = *DAT_005c8454;
  FUN_0040c9c2(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_005c8454);
  DAT_005c8460 = DAT_005c845c < DAT_005c8454[1] + -1;
  DAT_005c845c = DAT_005c8454[1] + -1;
  if ((DAT_005c845c < -4) || ((int)param_3 <= DAT_005c845c)) {
    FUN_0040966f(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_005c8460) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_00409696(param_1,param_2,param_3);
  }
  return;
}


// ===== FUN_0040966f @ 0040966f

void __cdecl FUN_0040966f(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  DAT_005c8458 = 1;
  FUN_004093f2(param_1,param_2,param_3,param_4);
  DAT_005c8458 = 0;
  return;
}


// ===== FUN_00409696 @ 00409696

void __cdecl FUN_00409696(undefined4 param_1,char *param_2,size_t param_3)

{
  DAT_005c8458 = 1;
  FUN_004094f6(param_1,param_2,param_3);
  DAT_005c8458 = 0;
  return;
}


// ===== __cfltcvt @ 004096b9

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_004093f2(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_004094f6(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_004095d4(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}


// ===== FUN_0040970a @ 0040970a

void __cdecl FUN_0040970a(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_0040c070((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


// ===== FUN_0040972f @ 0040972f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040972f(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_005c99a0 <= param_1) {
    DAT_005c8470 = 0;
    _DAT_005c846c = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_005c846c = 9;
    DAT_005c8470 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0040b28b(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0040b28b(2);
      iVar2 = FUN_0040b28b(1);
      if (iVar2 == iVar1) goto LAB_004097a8;
    }
    hObject = (HANDLE)FUN_0040b28b(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004097aa;
    }
  }
LAB_004097a8:
  DVar4 = 0;
LAB_004097aa:
  FUN_0040b211(param_1);
  *(undefined1 *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0040b09e(DVar4);
  return 0xffffffff;
}


// ===== __freebuf @ 004097e2

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_004082bc(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


// ===== FUN_0040980d @ 0040980d

int __cdecl FUN_0040980d(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_00409848(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_0040cc44(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


// ===== FUN_00409848 @ 00409848

undefined4 __cdecl FUN_00409848(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_0040cc9b(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}


// ===== flsall @ 004098ad

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar5 = 0;
  if (0 < DAT_005c9880) {
    do {
      piVar1 = *(int **)(DAT_005c8868 + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && ((piVar1[3] & 0x83U) != 0)) {
        if (param_1 == 1) {
          iVar2 = FUN_0040980d(piVar1);
          if (iVar2 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
          iVar2 = FUN_0040980d(piVar1);
          if (iVar2 == -1) {
            iVar5 = -1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_005c9880);
  }
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


// ===== FUN_0040991a @ 0040991a

int __thiscall FUN_0040991a(void *this,int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *this_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  WCHAR *pWVar13;
  undefined *puVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  WCHAR local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  WCHAR *local_34;
  WCHAR *local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  char local_9;
  undefined *local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = (undefined *)0x0;
  local_38 = 0;
  pbVar9 = param_2;
  piVar7 = (int *)PTR_DAT_00412e18;
  do {
    PTR_DAT_00412e18 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_0040a320:
      if (local_18 == (int *)0xffffffff) {
LAB_0040a326:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_00413024 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)0x8;
      uVar5 = FUN_0040b54c(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_0040a3a7((int *)&local_8,param_1);
      FUN_0040a390(uVar5,piVar7);
      uVar5 = FUN_0040cfc9(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_0040cfc9(piVar7,(int)(uint)pbVar10[2]);
        piVar7 = piVar17;
        pbVar10 = pbVar9;
      }
    }
    if (*pbVar9 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      local_12 = '\0';
      local_13 = '\0';
      local_1a = '\0';
      puVar14 = (undefined *)0x0;
      local_9 = '\0';
      local_20 = 0;
      local_24 = 0;
      local_10 = 0;
      local_11 = '\x01';
      local_34 = (WCHAR *)0x0;
      do {
        uVar5 = (uint)pbVar9[1];
        param_2 = pbVar9 + 1;
        if ((int)DAT_00413024 < 2) {
          uVar6 = (byte)PTR_DAT_00412e18[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_00412e18;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_0040b54c(piVar7,uVar5,4);
          piVar7 = piVar17;
        }
        if (uVar6 == 0) {
          if (uVar5 < 0x4f) {
            if (uVar5 != 0x4e) {
              if (uVar5 == 0x2a) {
                local_12 = local_12 + '\x01';
              }
              else if (uVar5 != 0x46) {
                if (uVar5 == 0x49) {
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_00409a75;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_00409a75:
                  local_13 = local_13 + '\x01';
                }
              }
            }
          }
          else if (uVar5 == 0x68) {
            local_11 = local_11 + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar5 == 0x6c) {
              local_11 = local_11 + '\x01';
            }
            else if (uVar5 != 0x77) goto LAB_00409a75;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          local_24 = local_24 + 1;
          local_10 = (uVar5 - 0x30) + local_10 * 10;
        }
        pbVar9 = param_2;
      } while (local_13 == '\0');
      puVar2 = param_3;
      if (local_12 == '\0') {
        local_30 = (WCHAR *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      local_13 = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar5 = *param_2 | 0x20;
      local_40 = uVar5;
      if (uVar5 != 0x6e) {
        if ((uVar5 == 99) || (uVar5 == 0x7b)) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_0040a376(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_0040a3a7((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_0040a300:
        local_8 = local_8 + -1;
        FUN_0040a390((uint)local_18,param_1);
        goto LAB_0040a320;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_0040a02d:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_0040a062;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_0040a376(param_1);
          }
          goto LAB_0040a062;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_0040a02d;
          if (uVar5 < 0x65) {
LAB_00409da5:
            if ((int *)(uint)*param_2 != local_18) goto LAB_0040a300;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_0040a281;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_00409b63;
            }
            if (uVar5 != 0x6e) goto LAB_00409da5;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_0040a281;
            goto LAB_0040a25b;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_00409b99:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_0040a376(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_00409b99;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_00413024 < 2) {
              uVar5 = (byte)PTR_DAT_00412e18[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_0040b54c(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) ||
               (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_0040a376(param_1);
          }
          if ((DAT_00413028 == (char)piVar17) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_0040a376(param_1);
            *pcVar11 = DAT_00413028;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_00413024 < 2) {
                uVar5 = (byte)PTR_DAT_00412e18[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_0040b54c(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_0040a376(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((local_20 != 0) &&
             (((piVar17 == (int *)0x65 || (piVar17 == (int *)0x45)) &&
              (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_0040a376(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_00409cc0:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_00409ccf;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_00409cc0;
            while( true ) {
              if ((int)DAT_00413024 < 2) {
                uVar5 = (byte)PTR_DAT_00412e18[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_0040b54c(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_00409ccf:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_0040a376(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_0040a390((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR_FUN_00412c84)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_0040a281;
          }
          goto LAB_0040a320;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_00412c9c;
LAB_00409e86:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_00409e8a:
        param_2 = pbVar10;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar9 == 0x5d)) {
          uVar5 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)local_39;
        }
        while (pWVar13 = local_30, bVar1 = *pbVar9, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar8 = (byte)uVar5, bVar8 != 0)) &&
             (bVar4 = pbVar9[1], bVar4 != 0x5d)) {
            if (bVar4 <= bVar8) {
              uVar5 = (uint)bVar4;
              bVar4 = bVar8;
            }
            if ((byte)uVar5 <= bVar4) {
              iVar15 = (bVar4 - uVar5) + 1;
              do {
                local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | '\x01' << ((byte)uVar5 & 7);
                uVar5 = uVar5 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            uVar5 = 0;
            pbVar9 = pbVar9 + 2;
          }
          else {
            uVar5 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar9 = pbVar9 + 1;
          }
        }
        if (*pbVar9 == 0) goto LAB_0040a320;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_0040a390((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16))
          goto LAB_00409fef;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_0040a376(param_1);
          if (local_18 == (int *)0xffffffff) break;
          bVar1 = (byte)local_18;
          piVar7 = (int *)(int)(char)(local_68[(int)local_18 >> 3] ^ local_1c);
          if (((uint)piVar7 & 1 << (bVar1 & 7)) == 0) break;
          if (local_12 == '\0') {
            if (local_1a == '\0') {
              *(byte *)pWVar13 = bVar1;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              local_30 = pWVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_DAT_00412e18[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_0040a376(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_0040cf01(&local_42,&local_3c,DAT_00413024);
              *pWVar13 = local_42;
              pWVar13 = pWVar13 + 1;
              piVar7 = extraout_ECX_01;
              local_30 = pWVar13;
            }
          }
          else {
            local_34 = (WCHAR *)((int)local_34 + 1);
          }
        }
        local_8 = local_8 + -1;
        piVar7 = param_1;
        FUN_0040a390((uint)local_18,param_1);
LAB_00409fef:
        if (local_34 == pWVar13) goto LAB_0040a320;
        if ((local_12 == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *(byte *)local_30 = 0;
          }
          else {
            *local_30 = L'\0';
          }
        }
      }
      else {
        if (uVar5 == 0x70) {
          local_11 = '\x01';
          goto LAB_0040a02d;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____00412c94;
          goto LAB_00409e86;
        }
        if (uVar5 == 0x75) goto LAB_0040a02d;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_00409da5;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_00409e86;
          }
          goto LAB_00409e8a;
        }
LAB_00409b63:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_00409df2:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_0040a376(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_00409df2;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_0040a376(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_0040a376(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_0040a390((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_0040a062:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_00413024 < 2) {
                uVar6 = (byte)PTR_DAT_00412e18[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_0040b54c(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_0040a229;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_0040a229;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_0040a201:
              local_20 = local_20 + 1;
              puVar14 = (undefined *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_0040a237;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_0040a376(param_1);
            }
            if ((int)DAT_00413024 < 2) {
              uVar6 = (byte)PTR_DAT_00412e18[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_0040b54c(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_0040a33f(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_0040a201;
            }
LAB_0040a229:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_0040a390((uint)piVar17,param_1);
          }
LAB_0040a237:
          if (local_1b != '\0') {
            puVar14 = (undefined *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_00413024 < 2) {
                uVar6 = (byte)PTR_DAT_00412e18[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_0040b54c(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_0040a14b;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_0040a14b;
                local_2c = __allshl(3,(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_0040a11d:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) +
                                  (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_0040a159;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_0040a376(param_1);
            }
            if ((int)DAT_00413024 < 2) {
              uVar6 = (byte)PTR_DAT_00412e18[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_0040b54c(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl(4,(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_0040a33f(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_0040a11d;
            }
LAB_0040a14b:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_0040a390((uint)piVar17,param_1);
          }
LAB_0040a159:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_0040a320;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_0040a25b:
          if (local_34 == (WCHAR *)0x0) {
            if (local_11 == '\0') {
              *local_30 = (WCHAR)puVar14;
            }
            else {
              *(undefined **)local_30 = puVar14;
            }
          }
          else {
            *(uint *)local_30 = (uint)local_2c;
            *(int **)(local_30 + 2) = local_2c._4_4_;
            piVar7 = local_2c._4_4_;
          }
        }
      }
LAB_0040a281:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_0040a376(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_0040a300;
      this = PTR_DAT_00412e18;
      if ((PTR_DAT_00412e18[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_0040a376(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if ((int *)this != piVar17) {
          local_8 = local_8 + -1;
          FUN_0040a390((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_0040a390((uint)piVar7,param_1);
          goto LAB_0040a320;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
    goto LAB_0040a326;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_00412e18;
  } while( true );
}


// ===== FUN_0040a33f @ 0040a33f

uint __thiscall FUN_0040a33f(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_00413024 < 2) {
    uVar1 = (byte)PTR_DAT_00412e18[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0040b54c(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


// ===== FUN_0040a376 @ 0040a376

uint __cdecl FUN_0040a376(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0040b473(param_1);
  return uVar3;
}


// ===== FUN_0040a390 @ 0040a390

void __cdecl FUN_0040a390(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_0040d01f(param_1,param_2);
  }
  return;
}


// ===== FUN_0040a3a7 @ 0040a3a7

uint __cdecl FUN_0040a3a7(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_0040a376(param_2);
    uVar2 = FUN_0040cfc9(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}


// ===== FUN_0040a3cb @ 0040a3cb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_0040a3cb(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_005c85fc | 1;
      goto LAB_0040a40c;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_005c85fc | 2;
LAB_0040a40c:
  bVar2 = true;
LAB_0040a40f:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_0040d08d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_005c85f8 = _DAT_005c85f8 + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_0040a40f;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_0040a40f;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_0040a40f;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_0040a40f;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_0040a40f;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_0040a4ef;
      uVar5 = uVar5 | 0x8000;
      goto LAB_0040a40f;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_0040a40f;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_0040a4ef;
        uVar5 = uVar5 | 0x4000;
        goto LAB_0040a40f;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_0040a40f;
      }
    }
  }
LAB_0040a4ef:
  bVar2 = false;
  goto LAB_0040a40f;
}


// ===== FUN_0040a53b @ 0040a53b

undefined4 * FUN_0040a53b(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = 0;
  piVar4 = DAT_005c8868;
  if (0 < DAT_005c9880) {
    do {
      if (*piVar4 == 0) {
        pvVar2 = _malloc(0x20);
        DAT_005c8868[iVar1] = (int)pvVar2;
        puVar3 = (undefined4 *)DAT_005c8868[iVar1];
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
LAB_0040a596:
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar3[4] = 0xffffffff;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3[7] = 0;
        return puVar3;
      }
      if ((*(byte *)(*piVar4 + 0xc) & 0x83) == 0) {
        puVar3 = (undefined4 *)DAT_005c8868[iVar1];
        goto LAB_0040a596;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < DAT_005c9880);
  }
  return (undefined4 *)0x0;
}


// ===== FUN_0040a5b3 @ 0040a5b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040a5b3(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  
  bVar2 = FUN_0040d346(param_1[4]);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_004131b0) {
    iVar3 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_004131d0) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_005c85f8 = _DAT_005c85f8 + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_005c8464)[iVar3] == 0) {
    pvVar4 = _malloc(0x1000);
    (&DAT_005c8464)[iVar3] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_0040a62f;
    }
  }
  uVar1 = (&DAT_005c8464)[iVar3];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_0040a62f:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}


// ===== FUN_0040a640 @ 0040a640

void __cdecl FUN_0040a640(int param_1,int *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      FUN_00409848(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    FUN_00409848(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}


// ===== FUN_0040a67d @ 0040a67d

int __cdecl FUN_0040a67d(int *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  LPSTR pCVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  LPSTR pCVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  LPSTR local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  param_2 = param_2 + 1;
  local_10 = (LPSTR)0x0;
  local_18 = 0;
  do {
    if ((bVar9 == 0) || (local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"GAIsProcessorFeaturePresent"[(char)bVar9 + 0x1a] & 0xf;
    }
    local_34 = (int)(char)(&DAT_00410990)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_0040a6eb_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_00412e18[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_0040adbe((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = param_2 + 1;
      }
      FUN_0040adbe((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_0040ae5c((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_0040ae5c((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (param_2[1] != 0x34)) {
          local_34 = 0;
          goto switchD_0040a6eb_caseD_0;
        }
        param_2 = param_2 + 2;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_0040aafc:
              local_30 = 7;
LAB_0040ab03:
              local_10 = (LPSTR)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_0040ab6d;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_0040a8aa;
                }
                goto LAB_0040ac87;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_0040a90b;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_0040a938:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_0040ae5c((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (LPSTR)0x1;
            }
            else {
              uVar5 = FUN_0040ae79((int *)&param_3);
              local_10 = FUN_0040d36c(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_0040ae5c((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = DAT_00412ca0;
              pWVar4 = DAT_00412ca0;
              goto LAB_0040aa7d;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (LPSTR)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (LPSTR)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_0040a938;
            if (bVar9 == 100) goto LAB_0040ab62;
          }
        }
        else {
LAB_0040a90b:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR_FUN_00412c7c)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR_FUN_00412c88)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR_FUN_00412c80)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_0040aa7d:
          local_10 = (LPSTR)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_0040ab62:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_0040ae5c((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (LPSTR)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_0040ab6d;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_0040aafc;
          }
          if (bVar9 == 0x73) {
LAB_0040a8aa:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_0040ae5c((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = DAT_00412ca0;
                pWVar4 = DAT_00412ca0;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (LPSTR)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_00412ca4;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (LPSTR)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_0040ac87;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_0040ac87;
            local_30 = 0x27;
            goto LAB_0040ab03;
          }
        }
        local_10 = (LPSTR)0xa;
LAB_0040ab6d:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_0040ae5c((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_0040abc0;
            }
            uVar2 = FUN_0040ae5c((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_0040ae5c((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_0040ae5c((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_0040ae69((int *)&param_3);
        }
LAB_0040abc0:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar1 = -(int)local_c;
        local_10 = &local_4d + iVar1;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) && ((*(char *)pWVar4 != '0' || (local_10 == (LPSTR)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (LPSTR)((int)&local_4c + iVar1);
          pWVar4 = local_c;
        }
      }
LAB_0040ac87:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_0040acbf;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_0040acbf:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_0040adf3(0x20,iVar10,param_1,&local_18);
        }
        FUN_0040ae24(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_0040adf3(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (pCVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_0040ae24((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            pCVar12 = pCVar12 + -1;
            pCVar8 = FUN_0040d36c(local_3c,*pWVar4);
            if ((int)pCVar8 < 1) break;
            FUN_0040ae24(local_3c,(int)pCVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (pCVar12 != (LPSTR)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_0040adf3(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    param_2 = param_2 + 1;
  } while( true );
}


// ===== FUN_0040adbe @ 0040adbe

void __cdecl FUN_0040adbe(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_0040ae87(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


// ===== FUN_0040adf3 @ 0040adf3

void __cdecl FUN_0040adf3(uint param_1,int param_2,int *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_0040adbe(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}


// ===== FUN_0040ae24 @ 0040ae24

void __cdecl FUN_0040ae24(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_0040adbe((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}


// ===== FUN_0040ae5c @ 0040ae5c

undefined4 __cdecl FUN_0040ae5c(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


// ===== FUN_0040ae69 @ 0040ae69

undefined8 __cdecl FUN_0040ae69(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


// ===== FUN_0040ae79 @ 0040ae79

undefined4 __cdecl FUN_0040ae79(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


// ===== FUN_0040ae87 @ 0040ae87

uint __cdecl FUN_0040ae87(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_0040af90:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_0040af90;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_004131b0 && (piVar4 != (int *)&DAT_004131d0)) ||
        (bVar5 = FUN_0040d346(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_0040d4c5(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_0040cc9b(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_00412e10;
        }
        else {
          puVar6 = (undefined *)((&DAT_005c98a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_004084f9(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_0040cc9b(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}


// ===== FUN_0040af9c @ 0040af9c

void FUN_0040af9c(void)

{
  if (PTR_FUN_00412c5c != (undefined *)0x0) {
    (*(code *)PTR_FUN_00412c5c)();
  }
  FUN_0040b084((undefined4 *)&DAT_0041200c,(undefined4 *)&DAT_00412018);
  FUN_0040b084((undefined4 *)&DAT_00412000,(undefined4 *)&DAT_00412008);
  return;
}


// ===== FUN_0040afc9 @ 0040afc9

void __cdecl FUN_0040afc9(UINT param_1)

{
  FUN_0040afeb(param_1,0,0);
  return;
}


// ===== __exit @ 0040afda

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_0040afeb(_Code,1,0);
  return;
}


// ===== FUN_0040afeb @ 0040afeb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040afeb(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_005c84b4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_005c84b0 = 1;
  DAT_005c84ac = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_005c99b0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_005c99ac - 4), DAT_005c99b0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_005c99b0 <= puVar1);
    }
    FUN_0040b084((undefined4 *)&DAT_0041201c,(undefined4 *)&DAT_00412024);
  }
  FUN_0040b084((undefined4 *)&DAT_00412028,(undefined4 *)&DAT_0041202c);
  if (param_3 != 0) {
    return;
  }
  DAT_005c84b4 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ===== FUN_0040b084 @ 0040b084

void __cdecl FUN_0040b084(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


// ===== FUN_0040b09e @ 0040b09e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b09e(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_005c8470 = param_1;
  puVar1 = &DAT_00412ca8;
  do {
    if (param_1 == *puVar1) {
      _DAT_005c846c = *(undefined4 *)(iVar2 * 8 + 0x412cac);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x412e10);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_005c846c = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_005c846c = 8, 0xca < param_1)) {
    _DAT_005c846c = 0x16;
  }
  return;
}


// ===== FUN_0040b105 @ 0040b105

int FUN_0040b105(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar6 = 0;
  iVar5 = 0;
  piVar3 = &DAT_005c98a0;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)_malloc(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_005c99a0 = DAT_005c99a0 + 0x20;
        (&DAT_005c98a0)[iVar6] = puVar2;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x40; puVar2 = puVar2 + 2) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar1 = (undefined4 *)(&DAT_005c98a0)[iVar6];
        }
        iVar4 = iVar6 << 5;
      }
      return iVar4;
    }
    puVar1 = puVar2 + 0x40;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar4 = ((int)puVar2 - *piVar3 >> 3) + iVar5;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
    }
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x20;
    if (0x5c999f < (int)piVar3) {
      return iVar4;
    }
  } while( true );
}


// ===== FUN_0040b19a @ 0040b19a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b19a(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_005c99a0) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_00412c70 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040b1f0;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0040b1f0:
      *(HANDLE *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return 0xffffffff;
}


// ===== FUN_0040b211 @ 0040b211

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b211(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_005c99a0) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00412c70 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040b26a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040b26a:
      *(undefined4 *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return 0xffffffff;
}


// ===== FUN_0040b28b @ 0040b28b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b28b(uint param_1)

{
  if ((param_1 < DAT_005c99a0) &&
     ((*(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_005c98a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return 0xffffffff;
}


// ===== FUN_0040b2c8 @ 0040b2c8

void FUN_0040b2c8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  byte *pbVar5;
  int iVar6;
  UINT *pUVar7;
  UINT UVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)_malloc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_005c99a0 = 0x20;
  DAT_005c98a0 = puVar2;
  for (; puVar2 < DAT_005c98a0 + 0x40; puVar2 = puVar2 + 2) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_44.lpReserved2;
    pUVar7 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)(UVar8 + (int)pUVar7);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_005c99a0 < (int)UVar8) {
      puVar2 = &DAT_005c98a4;
      do {
        puVar3 = (undefined4 *)_malloc(0x100);
        UVar9 = DAT_005c99a0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_005c99a0 = DAT_005c99a0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x40; puVar3 = puVar3 + 2) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_005c99a0 < (int)UVar8);
    }
    uVar10 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar7 & 1) != 0)) &&
           (((*pUVar7 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)pbVar5), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_005c98a0)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
          *puVar2 = *(undefined4 *)pbVar5;
          *(byte *)(puVar2 + 1) = (byte)*pUVar7;
        }
        uVar10 = uVar10 + 1;
        pUVar7 = (UINT *)((int)pUVar7 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar10 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_005c98a0 + iVar6 * 2;
    if (DAT_005c98a0[iVar6 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_0040b459;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_0040b459:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_005c99a0);
      return;
    }
  } while( true );
}


// ===== FUN_0040b473 @ 0040b473

uint __cdecl FUN_0040b473(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_0040d4c5(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_0040d509(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_00412e10;
          }
          else {
            puVar4 = (undefined *)((&DAT_005c98a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}


// ===== FUN_0040b54c @ 0040b54c

uint __thiscall FUN_0040b54c(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_00412e18 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_00412e18[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_0040d6ff(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}


// ===== __allmul @ 0040b5d0

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// ===== FUN_0040b610 @ 0040b610

uint * __cdecl FUN_0040b610(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)param_2 & 3;
  puVar4 = param_1;
  while (uVar3 != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0040b6f8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar3 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_0040b6f8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


// ===== FUN_0040b620 @ 0040b620

uint * __cdecl FUN_0040b620(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if ((byte)uVar4 == 0) goto LAB_0040b66f;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_0040b681;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_0040b681;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_0040b681;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_0040b66f:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_0040b681:
  uVar4 = (uint)param_2 & 3;
  while (uVar4 != 0) {
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0040b6f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar4 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_0040b6f8:
        *(byte *)puVar5 = (byte)uVar4;
        return param_1;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return param_1;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return param_1;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return param_1;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}


// ===== FUN_0040b700 @ 0040b700

LONG __cdecl FUN_0040b700(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = FUN_0040b841(param_1);
  uVar3 = DAT_005c84b8;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_005c84b8 = param_2;
      if (piVar4[1] == 8) {
        if (DAT_004130a8 < DAT_004130ac + DAT_004130a8) {
          iVar6 = (DAT_004130ac + DAT_004130a8) - DAT_004130a8;
          puVar7 = (undefined4 *)(DAT_004130a8 * 0xc + 0x413038);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_004130b4;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_004130b4 = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_004130b4 = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_004130b4 = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_004130b4 = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_004130b4 = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_004130b4 = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_004130b4 = 0x8a;
        }
        (*pcVar1)(8,DAT_004130b4);
        DAT_004130b4 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_005c84b8 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}


// ===== FUN_0040b841 @ 0040b841

int * __cdecl FUN_0040b841(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00413030;
  if (DAT_00413030 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_00413030 + DAT_004130b0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_00413030 + DAT_004130b0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


// ===== FUN_0040b884 @ 0040b884

byte * FUN_0040b884(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_005c99a8 == 0) {
    FUN_0040dc4e();
  }
  bVar1 = *DAT_005c99d0;
  pbVar4 = DAT_005c99d0;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_0040d848(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0040b8c1;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0040b8c1:
  }
  return pbVar4;
}


// ===== FUN_0040b8dc @ 0040b8dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b8dc(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_005c99a8 == 0) {
    FUN_0040dc4e();
  }
  iVar5 = 0;
  for (puVar6 = DAT_005c8440; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = (undefined4 *)_malloc(iVar5 * 4 + 4);
  _DAT_005c8494 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_005c8440;
  puVar6 = DAT_005c8440;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_0040b610((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_004082bc(DAT_005c8440);
  DAT_005c8440 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_005c99a4 = 1;
  return;
}


// ===== FUN_0040b995 @ 0040b995

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b995(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_005c99a8 == 0) {
    FUN_0040dc4e();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_005c84bc,0x104);
  _DAT_005c84a4 = &DAT_005c84bc;
  pbVar2 = &DAT_005c84bc;
  if (*DAT_005c99d0 != 0) {
    pbVar2 = DAT_005c99d0;
  }
  FUN_0040ba2e(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = (undefined4 *)_malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0040ba2e(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_005c848c = puVar1;
  _DAT_005c8488 = local_8 + -1;
  return;
}


// ===== FUN_0040ba2e @ 0040ba2e

void __cdecl FUN_0040ba2e(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_005c8760 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_005c8760 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_0040bad9;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_0040bad9:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_005c8760 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_005c8760 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// ===== FUN_0040bbe2 @ 0040bbe2

LPSTR FUN_0040bbe2(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_005c85c0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_005c85c0 = 1;
LAB_0040bc39:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = (LPSTR)_malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_004082bc(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_005c85c0 = 2;
  }
  else {
    if (DAT_005c85c0 == 1) goto LAB_0040bc39;
    if (DAT_005c85c0 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = (LPSTR)_malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_0040dc70((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


// ===== __global_unwind2 @ 0040bd14

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x40bd2c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ===== __local_unwind2 @ 0040bd56

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_0040bd34;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_0040bdea();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


// ===== FUN_0040bdea @ 0040bdea

void FUN_0040bdea(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_004130c0 = *(undefined4 *)(unaff_EBP + 8);
  DAT_004130bc = in_EAX;
  DAT_004130c4 = unaff_EBP;
  return;
}


// ===== __seh_longjmp_unwind@4 @ 0040bec9

/* Library Function - Single Match
    __seh_longjmp_unwind@4
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __seh_longjmp_unwind_4(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


// ===== FUN_0040bee4 @ 0040bee4

void FUN_0040bee4(void)

{
  if ((DAT_005c8448 == 1) || ((DAT_005c8448 == 0 && (DAT_00412c70 == 1)))) {
    FUN_0040bf1d(0xfc);
    if (DAT_005c85c4 != (code *)0x0) {
      (*DAT_005c85c4)();
    }
    FUN_0040bf1d(0xff);
  }
  return;
}


// ===== FUN_0040bf1d @ 0040bf1d

void __cdecl FUN_0040bf1d(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_004130c8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x413158);
  if (param_1 == (&DAT_004130c8)[iVar5 * 2]) {
    if ((DAT_005c8448 == 1) || ((DAT_005c8448 == 0 && (DAT_00412c70 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x4130cc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_0040b610(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_0040b610(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_0040b620(local_a4,_Dest);
      FUN_0040b620(local_a4,(uint *)&DAT_00410cb8);
      FUN_0040b620(local_a4,*(uint **)(iVar5 * 8 + 0x4130cc));
      auStackY_1e3._3_4_ = 0x40c041;
      FUN_0040dfa5(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ===== FUN_0040c070 @ 0040c070

undefined4 * __cdecl FUN_0040c070(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0040c227_caseD_2;
        case 3:
          goto switchD_0040c227_caseD_3;
        }
        goto switchD_0040c227_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0040c227_caseD_0;
      case 1:
        goto switchD_0040c227_caseD_1;
      case 2:
        goto switchD_0040c227_caseD_2;
      case 3:
        goto switchD_0040c227_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040c227_caseD_2;
            case 3:
              goto switchD_0040c227_caseD_3;
            }
            goto switchD_0040c227_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040c227_caseD_2;
            case 3:
              goto switchD_0040c227_caseD_3;
            }
            goto switchD_0040c227_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040c227_caseD_2;
            case 3:
              goto switchD_0040c227_caseD_3;
            }
            goto switchD_0040c227_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0040c227_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_0040c227_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_0040c227_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_0040c227_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0040c0a5_caseD_2;
      case 3:
        goto switchD_0040c0a5_caseD_3;
      }
      goto switchD_0040c0a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0040c0a5_caseD_0;
    case 1:
      goto switchD_0040c0a5_caseD_1;
    case 2:
      goto switchD_0040c0a5_caseD_2;
    case 3:
      goto switchD_0040c0a5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040c0a5_caseD_2;
          case 3:
            goto switchD_0040c0a5_caseD_3;
          }
          goto switchD_0040c0a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040c0a5_caseD_2;
          case 3:
            goto switchD_0040c0a5_caseD_3;
          }
          goto switchD_0040c0a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040c0a5_caseD_2;
          case 3:
            goto switchD_0040c0a5_caseD_3;
          }
          goto switchD_0040c0a5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0040c0a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0040c0a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0040c0a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0040c0a5_caseD_0:
  return param_1;
}


// ===== FUN_0040c3a5 @ 0040c3a5

uint __thiscall FUN_0040c3a5(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_0040c3f0(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_0040c482(uVar1);
  return uVar1;
}


// ===== FUN_0040c3da @ 0040c3da

void __thiscall FUN_0040c3da(void *this,uint param_1,uint param_2)

{
  FUN_0040c3a5(this,param_1,param_2 & 0xfff7ffff);
  return;
}


// ===== FUN_0040c3f0 @ 0040c3f0

uint __cdecl FUN_0040c3f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


// ===== FUN_0040c482 @ 0040c482

uint __cdecl FUN_0040c482(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


// ===== FUN_0040c50b @ 0040c50b

uint __thiscall FUN_0040c50b(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_005c8620 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_00413024 < 2) {
        uVar2 = (byte)PTR_DAT_00412e18[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0040b54c(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_00412e18[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_0040e12e(DAT_005c8620,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


// ===== FUN_0040c5d6 @ 0040c5d6

undefined4 __cdecl FUN_0040c5d6(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}


// ===== FUN_0040c61f @ 0040c61f

void __cdecl FUN_0040c61f(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_0040e37d(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_0040e37d(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}


// ===== FUN_0040c675 @ 0040c675

undefined4 __cdecl FUN_0040c675(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_0040c5d6(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_0040c61f(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}


// ===== FUN_0040c701 @ 0040c701

void __cdecl FUN_0040c701(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ===== FUN_0040c71c @ 0040c71c

void __cdecl FUN_0040c71c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== FUN_0040c728 @ 0040c728

undefined4 __cdecl FUN_0040c728(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}


// ===== FUN_0040c743 @ 0040c743

void __cdecl FUN_0040c743(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}


// ===== FUN_0040c7d0 @ 0040c7d0

undefined4 __cdecl FUN_0040c7d0(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_0040c728((int *)&local_10);
    if (iVar2 != 0) {
LAB_0040c8fc:
      uVar5 = 0;
      goto LAB_0040c8fe;
    }
    FUN_0040c71c(&local_10);
  }
  else {
    FUN_0040c701((int)local_1c,&local_10);
    iVar2 = FUN_0040c675((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_0040c71c(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_0040c71c(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_0040c743(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_0040c8fe;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_0040c743(&local_10,param_3[3]);
        goto LAB_0040c8fc;
      }
      FUN_0040c701((int)&local_10,local_1c);
      FUN_0040c743(&local_10,iVar2 - iVar4);
      FUN_0040c675((int)&local_10,param_3[2]);
      FUN_0040c743(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_0040c8fe:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}


// ===== FUN_0040c93c @ 0040c93c

void __cdecl FUN_0040c93c(ushort *param_1,uint *param_2)

{
  FUN_0040c7d0(param_1,param_2,(int *)&DAT_00413160);
  return;
}


// ===== FUN_0040c952 @ 0040c952

void __cdecl FUN_0040c952(ushort *param_1,uint *param_2)

{
  FUN_0040c7d0(param_1,param_2,(int *)&DAT_00413178);
  return;
}


// ===== FUN_0040c968 @ 0040c968

void __thiscall FUN_0040c968(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_0040e51e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_0040c93c(local_10,param_1);
  return;
}


// ===== FUN_0040c995 @ 0040c995

void __thiscall FUN_0040c995(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_0040e51e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_0040c952(local_10,param_1);
  return;
}


// ===== FUN_0040c9c2 @ 0040c9c2

void __cdecl FUN_0040c9c2(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_0040c070((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}


// ===== FUN_0040ca39 @ 0040ca39

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040ca39(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_0040ca9d(&local_10,(uint *)&stack0x00000004);
  _DAT_005c85f0 = FUN_0040e9ef(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_005c85c8);
  _DAT_005c85e8 = (int)DAT_005c85ca;
  _DAT_005c85ec = (int)DAT_005c85c8;
  _DAT_005c85f4 = &DAT_005c85cc;
  return &DAT_005c85e8;
}


// ===== FUN_0040ca9d @ 0040ca9d

void __cdecl FUN_0040ca9d(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}


// ===== _memset @ 0040cb60

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = (uint *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ===== _strlen @ 0040cbc0

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = (uint)_Str & 3;
  puVar2 = (uint *)_Str;
  while (uVar1 != 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    if ((char)uVar1 == '\0') goto LAB_0040cc13;
    uVar1 = (uint)puVar2 & 3;
  }
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_0040cc13:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}


// ===== FUN_0040cc3b @ 0040cc3b

void FUN_0040cc3b(void)

{
  __amsg_exit(2);
  return;
}


// ===== FUN_0040cc44 @ 0040cc44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040cc44(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = DAT_005c8470;
  if ((param_1 < DAT_005c99a0) &&
     ((*(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_0040b28b(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  DAT_005c8470 = DVar2;
  _DAT_005c846c = 9;
  return 0xffffffff;
}


// ===== FUN_0040cc9b @ 0040cc9b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040cc9b(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  int iVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  if (param_1 < DAT_005c99a0) {
    piVar1 = &DAT_005c98a0 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar3 = *(byte *)(*piVar1 + 4 + iVar7);
    if ((bVar3 & 1) != 0) {
      local_c = 0;
      local_14 = 0;
      if (param_3 == 0) {
        return 0;
      }
      if ((bVar3 & 0x20) != 0) {
        FUN_004084f9(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar7) + 1) & 0x80) == 0) {
        BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
        if (BVar6 == 0) {
          param_1 = GetLastError();
        }
        else {
          local_c = local_10;
          param_1 = 0;
        }
LAB_0040cd94:
        if (local_c != 0) {
          return local_c - local_14;
        }
        if (param_1 != 0) {
          if (param_1 == 5) {
            _DAT_005c846c = 9;
            DAT_005c8470 = 5;
            return -1;
          }
          FUN_0040b09e(param_1);
          return -1;
        }
      }
      else {
        local_8 = param_2;
        param_1 = 0;
        if (param_3 != 0) {
          do {
            pcVar5 = local_418;
            do {
              if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
              pcVar2 = local_8 + 1;
              cVar4 = *local_8;
              local_8 = pcVar2;
              if (cVar4 == '\n') {
                local_14 = local_14 + 1;
                *pcVar5 = '\r';
                pcVar5 = pcVar5 + 1;
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
            } while ((int)pcVar5 - (int)local_418 < 0x400);
            BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),local_418,(int)pcVar5 - (int)local_418,
                              &local_10,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              param_1 = GetLastError();
              goto LAB_0040cd94;
            }
            local_c = local_c + local_10;
            if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
               (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_0040cd94;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar1 + 4 + iVar7) & 0x40) != 0) && (*param_2 == '\x1a')) {
        return 0;
      }
      _DAT_005c846c = 0x1c;
      DAT_005c8470 = 0;
      return -1;
    }
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return -1;
}


// ===== FUN_0040ce48 @ 0040ce48

void FUN_0040ce48(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = 0x14;
  if (DAT_005c9880 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_005c9880) goto LAB_0040ce67;
  DAT_005c9880 = iVar1;
LAB_0040ce67:
  DAT_005c8868 = func_0x0040ec82(DAT_005c9880,4);
  if (DAT_005c8868 == 0) {
    DAT_005c9880 = 0x14;
    DAT_005c8868 = func_0x0040ec82(0x14,4);
    if (DAT_005c8868 == 0) {
      __amsg_exit(0x1a);
    }
  }
  iVar2 = 0;
  iVar1 = 0x413190;
  do {
    *(int *)(iVar2 + DAT_005c8868) = iVar1;
    iVar1 = iVar1 + 0x20;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x413410);
  uVar4 = 0;
  puVar3 = (undefined4 *)0x4131a0;
  do {
    iVar1 = *(int *)((&DAT_005c98a0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 8);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 8;
    uVar4 = uVar4 + 1;
  } while ((int)puVar3 < 0x413200);
  return;
}


// ===== FUN_0040ceed @ 0040ceed

int FUN_0040ceed(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = func_0x004098a4();
  if (DAT_005c84ac != '\0') {
    iVar4 = 0;
    iVar2 = 3;
    if (3 < DAT_005c9880) {
      do {
        pFVar1 = *(FILE **)(DAT_005c8868 + iVar2 * 4);
        if (pFVar1 != (FILE *)0x0) {
          if ((pFVar1->_flag & 0x83) != 0) {
            iVar3 = FUN_004083d7(pFVar1);
            if (iVar3 != -1) {
              iVar4 = iVar4 + 1;
            }
          }
          if (0x13 < iVar2) {
            FUN_004082bc(*(LPVOID *)(DAT_005c8868 + iVar2 * 4));
            *(undefined4 *)(DAT_005c8868 + iVar2 * 4) = 0;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_005c9880);
    }
    return iVar4;
  }
  return iVar2;
}


// ===== FUN_0040cf01 @ 0040cf01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040cf01(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_005c8620 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_00412e18[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_005c8630,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_00413024) {
          if ((int)param_3 < (int)DAT_00413024) {
            _DAT_005c846c = 0x2a;
            return 0xffffffff;
          }
          iVar2 = MultiByteToWideChar(DAT_005c8630,9,(LPCSTR)param_2,DAT_00413024,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_00413024;
          }
        }
        if ((DAT_00413024 <= param_3) && (param_2[1] != 0)) {
          return DAT_00413024;
        }
      }
      _DAT_005c846c = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


// ===== FUN_0040cfc9 @ 0040cfc9

uint __thiscall FUN_0040cfc9(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_00413024) {
    uVar1 = FUN_0040b54c(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_00412e18[param_1 * 2] & 8;
}


// ===== __allshl @ 0040d000

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}


// ===== FUN_0040d01f @ 0040d01f

uint __cdecl FUN_0040d01f(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_0040d4c5(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}


// ===== FUN_0040d08d @ 0040d08d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040d08d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar7 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_005c8638 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      _DAT_005c846c = 0x16;
      DAT_005c8470 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) {
      _DAT_005c846c = 0x16;
      DAT_005c8470 = 0;
      return 0xffffffff;
    }
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_0040d1ab;
      if (uVar2 != 0x300) {
        _DAT_005c846c = 0x16;
        DAT_005c8470 = 0;
        return 0xffffffff;
      }
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_0040d1ab:
        local_c = 5;
        goto LAB_0040d1bb;
      }
      if (uVar2 != 0x700) {
        _DAT_005c846c = 0x16;
        DAT_005c8470 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_0040d1bb:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_005c8474 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_0040b105();
  if (uVar3 == 0xffffffff) {
    DAT_005c8470 = 0;
    _DAT_005c846c = 0x18;
  }
  else {
    hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar4 = GetFileType(hFile);
      if (DVar4 != 0) {
        if (DVar4 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar4 == 3) {
          local_5 = local_5 | 8;
        }
        FUN_0040b19a(uVar3,hFile);
        iVar6 = (uVar3 & 0x1f) * 8;
        param_1._3_1_ = local_5 & 0x48;
        *(byte *)((&DAT_005c98a0)[(int)uVar3 >> 5] + 4 + iVar6) = local_5 | 1;
        if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
          local_14 = FUN_004084f9(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            if (DAT_005c8470 != 0x83) {
LAB_0040d31c:
              FUN_0040972f(uVar3);
              return 0xffffffff;
            }
          }
          else {
            param_3 = param_3 & 0xffffff;
            iVar5 = FUN_0040d509(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
            if ((((iVar5 == 0) && (param_3._3_1_ == '\x1a')) &&
                (iVar5 = FUN_0040ed57(uVar3,local_14), iVar5 == -1)) ||
               (DVar4 = FUN_004084f9(uVar3,0,0), DVar4 == 0xffffffff)) goto LAB_0040d31c;
          }
        }
        if (param_1._3_1_ != 0) {
          return uVar3;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_005c98a0)[(int)uVar3 >> 5] + 4 + iVar6);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar4 = GetLastError();
    FUN_0040b09e(DVar4);
  }
  return 0xffffffff;
}


// ===== FUN_0040d346 @ 0040d346

byte __cdecl FUN_0040d346(uint param_1)

{
  if (DAT_005c99a0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


// ===== FUN_0040d36c @ 0040d36c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPSTR __cdecl FUN_0040d36c(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  
  pCVar1 = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_005c8620 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    pCVar1 = (LPSTR)WideCharToMultiByte(DAT_005c8630,0x220,&param_2,1,pCVar1,DAT_00413024,
                                        (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((pCVar1 != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return pCVar1;
    }
  }
  _DAT_005c846c = 0x2a;
  return (LPSTR)0xffffffff;
}


// ===== __aulldiv @ 0040d3e0

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


// ===== __aullrem @ 0040d450

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


// ===== FUN_0040d4c5 @ 0040d4c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040d4c5(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_005c85f8 = _DAT_005c85f8 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


// ===== FUN_0040d509 @ 0040d509

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040d509(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  if (param_1 < DAT_005c99a0) {
    iVar7 = (param_1 & 0x1f) * 8;
    piVar1 = &DAT_005c98a0 + ((int)param_1 >> 5);
    bVar4 = *(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar7 + 4);
    if ((bVar4 & 1) != 0) {
      local_c = (char *)0x0;
      if ((param_3 == (char *)0x0) || ((bVar4 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_005c98a0)[(int)param_1 >> 5] + iVar7 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar7) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          _DAT_005c846c = 9;
          DAT_005c8470 = 5;
          return -1;
        }
        if (DVar6 != 0x6d) {
          FUN_0040b09e(DVar6);
          return -1;
        }
        return 0;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar7);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar7) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar7);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_0040d69f;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_0040d6b9:
                *pcVar8 = '\r';
LAB_0040d6bc:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar7) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_0040d69f:
                  *pcVar8 = '\n';
                  goto LAB_0040d6bc;
                }
                FUN_004084f9(param_1,-1,1);
                if (local_5 != '\n') goto LAB_0040d6b9;
              }
              else {
                if (local_5 == '\n') goto LAB_0040d69f;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar7) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  DAT_005c8470 = 0;
  _DAT_005c846c = 9;
  return -1;
}


// ===== FUN_0040d6ff @ 0040d6ff

BOOL __cdecl
FUN_0040d6ff(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00410d00;
  puStack_10 = &LAB_0040be0c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_005c8600;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_005c8600 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_005c8600 = iVar3;
  if (DAT_005c8600 != 2) {
    if (DAT_005c8600 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_005c8630;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_0040eea0();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_005c8620;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


// ===== FUN_0040d7f8 @ 0040d7f8

undefined4 FUN_0040d7f8(void)

{
  return 1;
}


// ===== FUN_0040d7fc @ 0040d7fc

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x0040d80b) */
/* WARNING: Removing unreachable block (ram,0x0040d824) */

undefined4 FUN_0040d7fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}


// ===== FUN_0040d848 @ 0040d848

void __cdecl FUN_0040d848(byte param_1)

{
  FUN_0040d859(param_1,0,4);
  return;
}


// ===== FUN_0040d859 @ 0040d859

undefined4 __cdecl FUN_0040d859(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_005c8760 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00412e22 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// ===== FUN_0040d88a @ 0040d88a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d88a(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_0040da23(param_1);
  if (CodePage == DAT_005c863c) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_00413418;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_005c8760;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x413428);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_00413410)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_005c8760 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        _DAT_005c864c = 1;
        DAT_005c863c = CodePage;
        DAT_005c8864 = FUN_0040da6d(CodePage);
        DAT_005c8640 = *(undefined4 *)(iVar11 + 0x41341c);
        DAT_005c8644 = *(undefined4 *)(iVar11 + 0x413420);
        DAT_005c8648 = *(undefined4 *)(iVar11 + 0x413424);
        goto LAB_0040da12;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x413508);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_005c8760;
      DAT_005c863c = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_005c8864 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_005c864c = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_005c8760 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_005c8760 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_005c8864 = FUN_0040da6d(CodePage);
        _DAT_005c864c = 1;
      }
      DAT_005c8640 = 0;
      DAT_005c8644 = 0;
      DAT_005c8648 = 0;
      goto LAB_0040da12;
    }
    if (DAT_005c8604 == 0) {
      return 0xffffffff;
    }
  }
  FUN_0040daa0();
LAB_0040da12:
  FUN_0040dac9();
  return 0;
}


// ===== FUN_0040da23 @ 0040da23

int __cdecl FUN_0040da23(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_005c8604 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040da3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_005c8604 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040da52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_005c8630;
  }
  DAT_005c8604 = (uint)bVar2;
  return param_1;
}


// ===== FUN_0040da6d @ 0040da6d

undefined4 __cdecl FUN_0040da6d(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ===== FUN_0040daa0 @ 0040daa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040daa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005c8760;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_005c863c = 0;
  _DAT_005c864c = 0;
  DAT_005c8864 = 0;
  DAT_005c8640 = 0;
  DAT_005c8644 = 0;
  DAT_005c8648 = 0;
  return;
}


// ===== FUN_0040dac9 @ 0040dac9

void FUN_0040dac9(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_005c863c,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0040d6ff(1,local_118,0x100,local_518,DAT_005c863c,DAT_005c8864,0);
    FUN_0040e12e(DAT_005c8864,0x100,local_118,0x100,local_218,0x100,DAT_005c863c,0);
    FUN_0040e12e(DAT_005c8864,0x200,local_118,0x100,local_318,0x100,DAT_005c863c,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_005c8760 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_0040dbd5;
        }
        (&DAT_005c8660)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_005c8760 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_0040dbd5:
        (&DAT_005c8660)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_005c8760 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_0040dc1f;
        }
        (&DAT_005c8660)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_005c8760 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_0040dc1f:
        (&DAT_005c8660)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


// ===== FUN_0040dc4e @ 0040dc4e

void FUN_0040dc4e(void)

{
  if (DAT_005c99a8 == 0) {
    FUN_0040d88a(-3);
    DAT_005c99a8 = 1;
  }
  return;
}


// ===== FUN_0040dc70 @ 0040dc70

undefined4 * __cdecl FUN_0040dc70(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0040de27_caseD_2;
        case 3:
          goto switchD_0040de27_caseD_3;
        }
        goto switchD_0040de27_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0040de27_caseD_0;
      case 1:
        goto switchD_0040de27_caseD_1;
      case 2:
        goto switchD_0040de27_caseD_2;
      case 3:
        goto switchD_0040de27_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040de27_caseD_2;
            case 3:
              goto switchD_0040de27_caseD_3;
            }
            goto switchD_0040de27_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040de27_caseD_2;
            case 3:
              goto switchD_0040de27_caseD_3;
            }
            goto switchD_0040de27_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040de27_caseD_2;
            case 3:
              goto switchD_0040de27_caseD_3;
            }
            goto switchD_0040de27_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0040de27_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_0040de27_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_0040de27_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_0040de27_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0040dca5_caseD_2;
      case 3:
        goto switchD_0040dca5_caseD_3;
      }
      goto switchD_0040dca5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0040dca5_caseD_0;
    case 1:
      goto switchD_0040dca5_caseD_1;
    case 2:
      goto switchD_0040dca5_caseD_2;
    case 3:
      goto switchD_0040dca5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040dca5_caseD_2;
          case 3:
            goto switchD_0040dca5_caseD_3;
          }
          goto switchD_0040dca5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040dca5_caseD_2;
          case 3:
            goto switchD_0040dca5_caseD_3;
          }
          goto switchD_0040dca5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040dca5_caseD_2;
          case 3:
            goto switchD_0040dca5_caseD_3;
          }
          goto switchD_0040dca5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0040dca5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0040dca5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0040dca5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0040dca5_caseD_0:
  return param_1;
}


// ===== FUN_0040dfa5 @ 0040dfa5

int __cdecl FUN_0040dfa5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005c8608 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_005c8608 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_005c8608 != (FARPROC)0x0) {
        DAT_005c860c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_005c8610 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0040dff4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0040dff4:
    if (DAT_005c860c != (FARPROC)0x0) {
      iVar1 = (*DAT_005c860c)();
      if ((iVar1 != 0) && (DAT_005c8610 != (FARPROC)0x0)) {
        iVar1 = (*DAT_005c8610)(iVar1);
      }
    }
    iVar1 = (*DAT_005c8608)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


// ===== _strncpy @ 0040e030

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040e06e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_0040e0ab;
        goto LAB_0040e119;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0040e115:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0040e119:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0040e0ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0040e115;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0040e115;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0040e115;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040e06e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_0040e0ab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


// ===== FUN_0040e12e @ 0040e12e

int __cdecl
FUN_0040e12e(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00410d48;
  puStack_10 = &LAB_0040be0c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_005c8614 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_005c8614 = 2;
    }
    else {
      DAT_005c8614 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_0040e352(param_3,param_4);
  }
  if (DAT_005c8614 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_005c8614 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_005c8630;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_0040eea0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_0040eea0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ===== FUN_0040e23e @ 0040e23e

undefined4 FUN_0040e23e(void)

{
  return 1;
}


// ===== FUN_0040e242 @ 0040e242

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

int FUN_0040e242(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(undefined4 *)(iVar2 + -4) = uVar1;
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x14) = 1;
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar4 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x40e26b;
    iVar2 = MultiByteToWideChar(*(UINT *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                                *(LPCSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPWSTR *)(iVar2 + -8),*(int *)(iVar2 + -4));
    if (iVar2 != 0) {
      *(undefined4 *)(puVar4 + -4) = 0;
      *(undefined4 *)(puVar4 + -8) = 0;
      *(undefined4 *)(puVar4 + -0xc) = uVar1;
      *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      puVar5 = puVar4 + -0x1c;
      *(undefined4 *)(puVar4 + -0x1c) = 0x40e281;
      iVar2 = LCMapStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                           *(LPCWSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                           *(LPWSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (iVar2 != 0) {
        if ((*(byte *)(unaff_EBP + 0xd) & 4) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 1;
          *(undefined4 *)(puVar5 + -4) = 0x40e2e4;
          FUN_0040eea0();
          *(undefined1 **)(unaff_EBP + -0x18) = puVar5;
          *(undefined1 **)(unaff_EBP + -0x20) = puVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (puVar5 != (undefined1 *)0x0) {
            *(int *)(puVar5 + -4) = iVar2;
            *(undefined1 **)(puVar5 + -8) = puVar5;
            *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            puVar6 = puVar5 + -0x1c;
            *(undefined4 *)(puVar5 + -0x1c) = 0x40e31c;
            iVar3 = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                 *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                 *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
            if (iVar3 != 0) {
              iVar3 = *(int *)(unaff_EBP + 0x1c);
              *(undefined4 *)(puVar6 + -4) = 0;
              *(undefined4 *)(puVar6 + -8) = 0;
              if (iVar3 == 0) {
                *(undefined4 *)(puVar6 + -0xc) = 0;
                *(undefined4 *)(puVar6 + -0x10) = 0;
              }
              else {
                *(undefined4 *)(puVar6 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
                *(undefined4 *)(puVar6 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
              }
              *(int *)(puVar6 + -0x14) = iVar2;
              *(undefined1 **)(puVar6 + -0x18) = puVar5;
              *(undefined4 *)(puVar6 + -0x1c) = 0x220;
              *(undefined4 *)(puVar6 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
              *(undefined4 *)(puVar6 + -0x24) = 0x40e341;
              iVar2 = WideCharToMultiByte(*(UINT *)(puVar6 + -0x20),*(DWORD *)(puVar6 + -0x1c),
                                          *(LPCWSTR *)(puVar6 + -0x18),*(int *)(puVar6 + -0x14),
                                          *(LPSTR *)(puVar6 + -0x10),*(int *)(puVar6 + -0xc),
                                          *(LPCSTR *)(puVar6 + -8),*(LPBOOL *)(puVar6 + -4));
              iVar3 = iVar2;
              goto joined_r0x0040e345;
            }
          }
        }
        else {
          if (*(int *)(unaff_EBP + 0x1c) == 0) goto LAB_0040e2be;
          if (iVar2 <= *(int *)(unaff_EBP + 0x1c)) {
            *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(unaff_EBP + 0x1c);
            *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(unaff_EBP + 0x18);
            *(undefined4 *)(puVar5 + -0xc) = uVar1;
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(puVar5 + -0x1c) = 0x40e2b4;
            iVar3 = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                 *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                 *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
joined_r0x0040e345:
            if (iVar3 != 0) goto LAB_0040e2be;
          }
        }
      }
    }
  }
  iVar2 = 0;
LAB_0040e2be:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar2;
}


// ===== FUN_0040e2f2 @ 0040e2f2

undefined4 FUN_0040e2f2(void)

{
  return 1;
}


// ===== FUN_0040e2f6 @ 0040e2f6

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x0040e308) */
/* WARNING: Removing unreachable block (ram,0x0040e320) */
/* WARNING: Removing unreachable block (ram,0x0040e32b) */
/* WARNING: Removing unreachable block (ram,0x0040e327) */
/* WARNING: Removing unreachable block (ram,0x0040e331) */
/* WARNING: Removing unreachable block (ram,0x0040e34b) */

undefined4 FUN_0040e2f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}


// ===== FUN_0040e352 @ 0040e352

int __cdecl FUN_0040e352(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      if (*pcVar1 == '\0') break;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 != 0);
  }
  if (*pcVar1 == '\0') {
    return (int)pcVar1 - (int)param_1;
  }
  return param_2;
}


// ===== FUN_0040e37d @ 0040e37d

undefined4 __cdecl FUN_0040e37d(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


// ===== ___add_12 @ 0040e39e

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040e37d(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0040e37d(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_0040e37d(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_0040e37d(param_1[2],param_2[2],param_1 + 2);
  return;
}


// ===== FUN_0040e3fc @ 0040e3fc

void __cdecl FUN_0040e3fc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


// ===== FUN_0040e42a @ 0040e42a

void __cdecl FUN_0040e42a(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


// ===== FUN_0040e457 @ 0040e457

void __cdecl FUN_0040e457(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_0040e3fc(puVar1);
      FUN_0040e3fc(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_0040e3fc(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_0040e3fc(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}


// ===== FUN_0040e51e @ 0040e51e

undefined4 __thiscall
FUN_0040e51e(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_0040e575:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_0040e592:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_0040e7b7;
    }
    if (bVar6 == DAT_00413028) goto LAB_0040e5a1;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_0040e891;
    }
    goto LAB_0040e575;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_0040e592;
    iVar9 = iVar1;
    if (bVar6 != DAT_00413028) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_0040e626;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_0040e5ff;
    }
    goto LAB_0040e575;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_0040e592;
    if (bVar6 == DAT_00413028) {
LAB_0040e5a1:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_0040e896;
    }
    goto LAB_0040e575;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_00413024 < 2) {
        uVar3 = (byte)PTR_DAT_00412e18[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_00412e18;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_0040b54c(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_00413028) goto LAB_0040e713;
    goto LAB_0040e575;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_00413024 < 2) {
        uVar3 = (byte)PTR_DAT_00412e18[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_00412e18;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_0040b54c(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_0040e713:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_0040e626:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_0040e5ff:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_0040e891;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_0040e575;
  case 5:
    local_28 = iVar5;
    if (DAT_00413024 < 2) {
      uVar3 = (byte)PTR_DAT_00412e18[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_00412e18;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_0040b54c(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_0040e7b7;
    goto LAB_0040e896;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_0040e7ec;
      if (bVar6 == 0x2d) goto LAB_0040e7e0;
      if (bVar6 != 0x30) goto LAB_0040e896;
LAB_0040e785:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_0040e575;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_0040e785;
      goto LAB_0040e896;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_0040e891;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_0040e817;
  default:
    goto switchD_0040e581_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_0040e7ec:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_0040e896;
LAB_0040e7e0:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_0040e575;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_0040e581_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_0040e575;
    goto LAB_0040e896;
  }
  iVar9 = 9;
LAB_0040e7b7:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_0040e575;
LAB_0040e817:
  if (DAT_00413024 < 2) {
    uVar3 = (byte)PTR_DAT_00412e18[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_00412e18;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_0040b54c(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_0040e861;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_0040e859;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_0040e817;
LAB_0040e859:
  pbVar7 = (byte *)0x1451;
LAB_0040e861:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_00413024 < 2) {
      uVar3 = (byte)PTR_DAT_00412e18[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_00412e18;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_0040b54c(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_0040e891:
  pbVar7 = pbVar8 + -1;
LAB_0040e896:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_0040e9a4;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_0040e457(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_0040f0ef((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_0040e929;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_0040e929:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_0040e9a4:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}


// ===== FUN_0040e9ef @ 0040e9ef

undefined4 __cdecl
FUN_0040e9ef(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_0040eae4;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_0040eae4:
            pcVar11 = "1#QNAN";
            goto LAB_0040eae9;
          }
          pcVar11 = "1#IND";
        }
        FUN_0040b610((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_0040eae9:
        FUN_0040b610((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_0040f0ef((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_0040eecf((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_0040e3fc((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_0040e42a((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_0040e3fc((uint *)&local_14);
          FUN_0040e3fc((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_0040e3fc((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_0040ec41;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_0040ec41:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_0040ec43:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_0040ec43;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_0040ec79;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_0040ec79:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}


// ===== FUN_0040ed57 @ 0040ed57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040ed57(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  char local_1004 [4060];
  undefined4 uStackY_28;
  
  FUN_0040eea0();
  iVar7 = 0;
  if ((param_1 < DAT_005c99a0) &&
     ((*(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    DVar1 = FUN_004084f9(param_1,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_004084f9(param_1,0,2), DVar2 != 0xffffffff)) {
      uVar8 = param_2 - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_004084f9(param_1,param_2,0);
          hFile = (HANDLE)FUN_0040b28b(param_1);
          BVar6 = SetEndOfFile(hFile);
          iVar7 = (BVar6 != 0) - 1;
          if (iVar7 == -1) {
            _DAT_005c846c = 0xd;
            DAT_005c8470 = GetLastError();
          }
        }
      }
      else {
        _memset(local_1004,0,0x1000);
        uStackY_28 = 0x40ede7;
        iVar3 = FUN_0040f16b(param_1,0x8000);
        do {
          uVar4 = 0x1000;
          if ((int)uVar8 < 0x1000) {
            uVar4 = uVar8;
          }
          iVar5 = FUN_0040cc9b(param_1,local_1004,uVar4);
          if (iVar5 == -1) {
            if (DAT_005c8470 == 5) {
              _DAT_005c846c = 0xd;
            }
            iVar7 = -1;
            break;
          }
          uVar8 = uVar8 - iVar5;
        } while (0 < (int)uVar8);
        FUN_0040f16b(param_1,iVar3);
      }
      FUN_004084f9(param_1,DVar1,0);
      return iVar7;
    }
  }
  else {
    _DAT_005c846c = 9;
  }
  return -1;
}


// ===== FUN_0040eea0 @ 0040eea0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040eea0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  if (0xfff < in_EAX) {
    do {
      puVar1 = puVar1 + -0x1000;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


// ===== FUN_0040eecf @ 0040eecf

void __cdecl FUN_0040eecf(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_0040ef72:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_0040ef72;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_0040e37d(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_0040f026:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_0040e42a((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_0040e3fc((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_0040f026;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_0040f0cf;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_0040f0cf:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


// ===== FUN_0040f0ef @ 0040f0ef

void __cdecl FUN_0040f0ef(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  int iStack_8;
  
  iVar3 = 0x4134b0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x413610;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*piVar4;
          local_e._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_e._2_2_ = (undefined2)piVar4[1];
          uStack_a = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_8 = piVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          piVar4 = (int *)&local_10;
        }
        FUN_0040eecf(param_1,piVar4);
      }
    }
  }
  return;
}


// ===== FUN_0040f16b @ 0040f16b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040f16b(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_005c99a0) {
    bVar1 = *(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          _DAT_005c846c = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_005c98a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  _DAT_005c846c = 9;
  return -1;
}


// ===== RtlUnwind @ 0040f1f0

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x0040f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


// ===== FUN_0040f1f6 @ 0040f1f6

undefined4 __cdecl FUN_0040f1f6(LPCSTR param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040b09e(uVar2);
    return 0xffffffff;
  }
  return 0;
}


// ===== FUN_0040f220 @ 0040f220

void __cdecl FUN_0040f220(LPCSTR param_1)

{
  FUN_0040f1f6(param_1);
  return;
}


