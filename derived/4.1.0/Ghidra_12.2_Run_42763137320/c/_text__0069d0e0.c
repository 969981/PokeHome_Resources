/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d0e0; name: FUN_.text__0069d0e0
 */


ulong FUN__text__0069d0e0(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  
  iVar5 = *(int *)(param_1 + 0x30);
  uVar8 = *(uint *)(*(long *)(param_1 + 8) + 8);
  uVar12 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  if (iVar5 != 0) {
    uVar12 = uVar8;
  }
  uVar8 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    pbVar10 = param_2;
    do {
      pbVar10 = pbVar10 + 1;
      uVar16 = uVar8 + uVar16 * uVar12;
      uVar8 = (uint)*pbVar10;
    } while (uVar8 != 0);
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar12 = uVar8;
  if ((int)uVar8 < 0) {
    uVar12 = uVar8 + 1;
  }
  uVar11 = (ulong)(uint)((int)uVar12 >> 1);
  uVar14 = *(uint *)(lVar7 + (-(ulong)((uint)((int)uVar12 >> 1) >> 0x1f) & 0xfffffff000000000 |
                             uVar11 << 4));
  uVar12 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar13 = uVar12 >> 0x10 | uVar12 << 0x10;
  uVar12 = uVar13;
  if (iVar5 != 0) {
    uVar12 = uVar14;
  }
  if (uVar12 != uVar16) {
    uVar12 = 0;
    if (iVar5 == 0) {
      uVar14 = uVar8;
      do {
        uVar9 = (uint)uVar11;
        uVar3 = uVar12;
        uVar4 = uVar9;
        uVar2 = uVar14;
        if (uVar13 < uVar16) {
          uVar3 = uVar9;
          uVar4 = uVar14;
          uVar2 = uVar12;
        }
        uVar14 = uVar4;
        uVar12 = uVar3;
        if (uVar2 == uVar9) {
          return 0xffffffff;
        }
        iVar15 = uVar14 + uVar12;
        if (iVar15 < 0 != SCARRY4(uVar14,uVar12)) {
          iVar15 = iVar15 + 1;
        }
        uVar11 = (ulong)(uint)(iVar15 >> 1);
        uVar13 = *(uint *)(lVar7 + (-(ulong)((uint)(iVar15 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar11 << 4));
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      } while (uVar13 != uVar16);
    }
    else {
      uVar13 = uVar8;
      do {
        uVar9 = (uint)uVar11;
        uVar3 = uVar12;
        uVar4 = uVar9;
        uVar2 = uVar13;
        if (uVar14 < uVar16) {
          uVar3 = uVar9;
          uVar4 = uVar13;
          uVar2 = uVar12;
        }
        uVar13 = uVar4;
        uVar12 = uVar3;
        if (uVar2 == uVar9) {
          return 0xffffffff;
        }
        iVar15 = uVar13 + uVar12;
        if (iVar15 < 0 != SCARRY4(uVar13,uVar12)) {
          iVar15 = iVar15 + 1;
        }
        uVar11 = (ulong)(uint)(iVar15 >> 1);
        uVar14 = *(uint *)(lVar7 + (-(ulong)((uint)(iVar15 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar11 << 4));
      } while (uVar14 != uVar16);
    }
  }
  iVar15 = (int)uVar11;
  if (iVar15 == -1) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar14 = *(uint *)(lVar7 + (long)iVar15 * 0x10 + 4);
    uVar12 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if (iVar5 != 0) {
      uVar12 = uVar14;
    }
    if (uVar12 != 0) {
      iVar1 = iVar15 - (uVar12 >> 0x18);
      lVar18 = *(long *)(param_1 + 0x10);
      uVar19 = *(ulong *)(param_1 + 0x28);
      lVar17 = (long)(int)uVar8;
      if ((int)uVar8 <= iVar1 + 1) {
        uVar8 = iVar1 + 1;
      }
      if (iVar5 == 0) {
        uVar12 = uVar12 >> 0x18;
        uVar11 = (ulong)(iVar15 - uVar12);
        lVar6 = (long)iVar15 - (ulong)uVar12;
        puVar20 = (uint *)(lVar7 + (ulong)uVar12 * -0x10 + (long)iVar15 * 0x10 + 0x14);
        do {
          lVar6 = lVar6 + 1;
          if (lVar17 <= lVar6) goto LAB__text__0069d370;
          uVar12 = (puVar20[-1] & 0xff00ff00) >> 8 | (puVar20[-1] & 0xff00ff) << 8;
          if ((uVar12 >> 0x10 | uVar12 << 0x10) != uVar16) {
            return 0xffffffff;
          }
          uVar12 = (*puVar20 & 0xff00ff00) >> 8;
          uVar12 = (uVar12 | (*puVar20 & 0xff0000) << 8) >> 0x10 | uVar12 << 0x10;
          if (uVar19 < lVar18 + (ulong)uVar12) {
            return 0xffffffff;
          }
          iVar5 = strcmp((char *)param_2,(char *)(lVar18 + (ulong)(uVar12 << 2)));
          uVar11 = (ulong)((int)uVar11 + 1);
          puVar20 = puVar20 + 4;
        } while (iVar5 != 0);
      }
      else {
        uVar12 = uVar12 >> 0x18;
        uVar11 = (ulong)(iVar15 - uVar12);
        lVar6 = (long)iVar15 - (ulong)uVar12;
        puVar20 = (uint *)(lVar7 + (ulong)uVar12 * -0x10 + (long)iVar15 * 0x10 + 0x14);
        do {
          lVar6 = lVar6 + 1;
          if (lVar17 <= lVar6) {
LAB__text__0069d370:
            return (ulong)uVar8;
          }
          if ((puVar20[-1] != uVar16) || (uVar19 < lVar18 + ((ulong)*puVar20 & 0xffffff))) {
            return 0xffffffff;
          }
          iVar5 = strcmp((char *)param_2,
                         (char *)(lVar18 + (ulong)(uint)((int)((ulong)*puVar20 & 0xffffff) << 2)));
          uVar11 = (ulong)((int)uVar11 + 1);
          puVar20 = puVar20 + 4;
        } while (iVar5 != 0);
      }
    }
  }
  return uVar11;
}


