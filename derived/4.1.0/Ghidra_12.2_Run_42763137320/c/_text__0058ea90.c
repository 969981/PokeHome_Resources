/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058ea90; name: FUN_.text__0058ea90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0058ea90(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong local_70;
  undefined1 local_68;
  int local_64;
  
  lVar6 = _DAT_008a3f58;
  bVar4 = *(byte *)(param_3 + 1);
  uVar13 = (ulong)bVar4 + 8;
  uVar12 = *(ulong *)*param_3;
  uVar3 = *(uint *)(_DAT_008a3f58 + 0x20);
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  uVar13 = uVar13 >> 5;
  *param_3 = *param_3 + uVar13 * 4;
  iVar7 = (uVar3 & (uint)(uVar12 >> ((ulong)bVar4 & 0x3f))) + 1;
  iVar5 = iVar7 * 0x20;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(int *)(param_1 + 0x90) = iVar7;
  pvVar8 = (void *)FUN__text__00400f80(5,iVar5);
  *(void **)(param_1 + 0xb8) = pvVar8;
  if (pvVar8 == (void *)0x0) {
    return -0x85;
  }
  lVar11 = param_1 + 0x10;
  memset(pvVar8,0,(long)iVar5);
  iVar7 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48;
  *(int *)(param_1 + 0x68) = iVar7;
  lVar9 = _DAT_008a3f60;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar15 = 0;
    lVar16 = 0;
    uVar10 = 1;
    if (param_2 == 2) {
      uVar10 = 2;
    }
    do {
      bVar4 = *(byte *)(param_3 + 1);
      uVar13 = (ulong)bVar4 + 10;
      uVar14 = uVar13 >> 5;
      uVar12 = *(ulong *)*param_3;
      uVar3 = *(uint *)(lVar6 + 0x28);
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
      *param_3 = *param_3 + uVar14 * 4;
      uVar13 = *(ulong *)(lVar9 + (uVar12 >> ((ulong)bVar4 & 0x3f) & (ulong)uVar3) * 8);
      local_70 = uVar13 & 0xfffffffffffffffc;
      uVar3 = (uint)uVar13 & 3;
      local_64 = uVar3 + 0x36a;
      local_68 = (undefined1)(uVar3 << 3);
      iVar7 = FUN__text__00588000(&local_70,*(long *)(param_1 + 0xb8) + lVar15,lVar11,uVar10);
      if (iVar7 != 0) {
        return iVar7;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar16 < *(int *)(param_1 + 0x90));
    iVar7 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - iVar7;
  lVar9 = FUN__text__00400f80(5);
  *(long *)(param_1 + 0x50) = lVar9;
  *(long *)(param_1 + 0x58) = lVar9;
  if (lVar9 == 0) {
    return -0x8b;
  }
  lVar9 = param_1 + 0x78;
  bVar4 = *(byte *)(param_3 + 1);
  uVar3 = *(uint *)(lVar6 + 0x18);
  uVar14 = *(ulong *)*param_3;
  uVar13 = (ulong)bVar4 + 6;
  uVar12 = uVar13 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = (uVar3 & (uint)(uVar14 >> ((ulong)bVar4 & 0x3f))) + 1;
  uVar3 = iVar7 * 0x40;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x88) = iVar7;
  if ((uVar3 == 0) || (uVar1 = *(int *)(param_1 + 0x60) + uVar3, *(uint *)(param_1 + 100) < uVar1))
  {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = *(void **)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar1;
    *(ulong *)(param_1 + 0x58) = (long)pvVar8 + (ulong)uVar3;
    if (pvVar8 != (void *)0x0) {
      memset(pvVar8,0,(ulong)uVar3);
      iVar7 = *(int *)(param_1 + 0x88);
    }
  }
  *(void **)(param_1 + 0xa8) = pvVar8;
  if (0 < iVar7) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      iVar7 = FUN__text__00586490(*(long *)(param_1 + 0xa8) + lVar15,lVar9,param_3,lVar11);
      if (iVar7 != 0) {
        return -0x85;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x40;
    } while (lVar16 < *(int *)(param_1 + 0x88));
  }
  uVar3 = *(uint *)(lVar6 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar12 = uVar13 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x8c) = iVar7;
  uVar1 = iVar7 * 0x28;
  if ((uVar1 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar1, *(uint *)(param_1 + 100) < uVar2))
  {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar2;
    *(ulong *)(param_1 + 0x58) = lVar16 + (ulong)uVar1;
    *(long *)(param_1 + 0xb0) = lVar16;
  }
  if (-1 < (int)uVar3) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      iVar7 = FUN__text__0058d170(*(long *)(param_1 + 0xb0) + lVar15,lVar9,param_3,lVar11);
      if (iVar7 != 0) {
        return -0x85;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x28;
    } while (lVar16 < *(int *)(param_1 + 0x8c));
  }
  uVar3 = *(uint *)(lVar6 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar12 = uVar13 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x84) = iVar7;
  uVar1 = iVar7 * 0x28;
  if ((uVar1 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar1, *(uint *)(param_1 + 100) < uVar2))
  {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar2;
    *(ulong *)(param_1 + 0x58) = lVar16 + (ulong)uVar1;
    *(long *)(param_1 + 0xa0) = lVar16;
  }
  if (-1 < (int)uVar3) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      iVar7 = FUN__text__0058c680(*(long *)(param_1 + 0xa0) + lVar15,lVar9,param_2,param_3,lVar11);
      if (iVar7 != 0) {
        return -0x85;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x28;
    } while (lVar16 < *(int *)(param_1 + 0x84));
  }
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar3 = *(uint *)(lVar6 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar12 = uVar13 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x80) = iVar7;
  iVar7 = iVar7 * 2;
  if (iVar7 != 0) {
    uVar2 = iVar7 + 3U & 0xfffffffc;
    uVar1 = *(int *)(param_1 + 0x60) + uVar2;
    if (uVar1 <= *(uint *)(param_1 + 100)) {
      lVar11 = *(long *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar1;
      *(ulong *)(param_1 + 0x58) = lVar11 + (ulong)uVar2;
      *(long *)(param_1 + 0x98) = lVar11;
      goto joined_r0x0058f010;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
joined_r0x0058f010:
  if (-1 < (int)uVar3) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      bVar4 = *(byte *)(param_3 + 1);
      uVar3 = *(uint *)*param_3;
      uVar13 = (ulong)bVar4 + 1;
      uVar12 = uVar13 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *param_3 = (long)((uint *)*param_3 + uVar12);
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
      *(byte *)(*(long *)(param_1 + 0x98) + lVar9) = (byte)(uVar3 >> (ulong)(bVar4 & 0x1f)) & 1;
      bVar4 = *(byte *)(param_3 + 1);
      uVar10 = *(undefined4 *)(lVar6 + 0x20);
      uVar12 = *(ulong *)*param_3;
      uVar13 = (ulong)bVar4 + 8;
      uVar14 = uVar13 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *param_3 = *param_3 + uVar14 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
      *(byte *)(*(long *)(param_1 + 0x98) + lVar9 + 1) =
           (byte)uVar10 & (byte)(uVar12 >> ((ulong)bVar4 & 0x3f));
      if (*(int *)(param_1 + 0x84) <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x98) + lVar9 + 1)) {
        return -0x85;
      }
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 2;
    } while (lVar11 < *(int *)(param_1 + 0x80));
  }
  return 0;
}


