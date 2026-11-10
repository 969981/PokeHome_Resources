/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311f80; name: FUN_.text__00311f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00311f80(long param_1,uint param_2,int param_3,byte param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  
  if (param_2 == 0) {
    return;
  }
  if (0x329 < (int)param_2) {
    return;
  }
  uVar5 = param_5 & 0xffff;
  if (param_2 == 0x292) {
    uVar4 = 0;
    if (uVar5 != 1) {
      uVar4 = param_5;
    }
  }
  else if (param_2 == 0x2ce) {
    if (uVar5 == 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_5;
      if (uVar5 == 2) {
        uVar4 = 1;
      }
    }
  }
  else if (param_2 == 0x306) {
    uVar4 = 0;
    if (6 < uVar5) {
      uVar4 = param_5;
    }
  }
  else {
    lVar6 = 1;
    puVar11 = (ushort *)&DAT_00734670;
    uVar2 = _DAT_0073466c;
    while (uVar2 != param_2) {
      if (lVar6 == 0x73) goto LAB__text__00312024;
      if (*puVar11 == param_2) goto LAB__text__0031201c;
      lVar6 = lVar6 + 2;
      uVar2 = puVar11[2];
      puVar11 = puVar11 + 4;
    }
    lVar6 = lVar6 + -1;
LAB__text__0031201c:
    if ((int)lVar6 == -1) {
LAB__text__00312024:
      uVar4 = 1;
    }
    else {
      uVar4 = (uint)*(ushort *)(&DAT_0073466e + ((lVar6 << 0x20) >> 0x1e));
    }
    if (uVar4 <= uVar5) {
      param_5 = 0;
    }
    uVar4 = param_5;
  }
  lVar6 = 1;
  param_4 = ((uVar4 & 0xffff) == 0 || param_2 != 0x15f) & param_4;
  puVar11 = (ushort *)&DAT_00734670;
  uVar2 = _DAT_0073466c;
  while (uVar2 != param_2) {
    if (lVar6 == 0x73) goto LAB__text__003120b4;
    if (*puVar11 == param_2) goto LAB__text__003120ac;
    lVar6 = lVar6 + 2;
    uVar2 = puVar11[2];
    puVar11 = puVar11 + 4;
  }
  lVar6 = lVar6 + -1;
LAB__text__003120ac:
  if ((int)lVar6 == -1) {
LAB__text__003120b4:
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)*(ushort *)(&DAT_0073466e + ((lVar6 << 0x20) >> 0x1e));
  }
  if (param_2 - 1 < 0x329) {
    uVar8 = 0;
    do {
      uVar10 = param_2 - 1;
      if ((uVar8 & 0xffff) == 0) {
LAB__text__00312180:
        if ((uVar10 & 0xffff) < 0x460) {
          lVar6 = param_1 + (ulong)(uVar10 >> 3 & 0x1fff);
          bVar3 = (byte)(1 << (ulong)(uVar10 & 7));
          *(byte *)(lVar6 + 0x374) = *(byte *)(lVar6 + 0x374) & (bVar3 ^ 0xff);
          *(byte *)(lVar6 + 0x400) = *(byte *)(lVar6 + 0x400) & (bVar3 ^ 0xff);
          *(byte *)(lVar6 + 0x48c) = *(byte *)(lVar6 + 0x48c) & (bVar3 ^ 0xff);
          *(byte *)(lVar6 + 0x518) = *(byte *)(lVar6 + 0x518) & (bVar3 ^ 0xff);
        }
      }
      else {
        iVar9 = 0x328;
        puVar11 = (ushort *)&DAT_0073466c;
        lVar6 = 0;
        uVar1 = _DAT_0073466e;
        uVar2 = _DAT_0073466c;
        while (uVar10 = (uint)uVar1, uVar2 != param_2) {
          if (lVar6 == 0x1c8) goto LAB__text__00312100;
          iVar9 = iVar9 + uVar10 + -1;
          uVar10 = (uint)puVar11[3];
          if (puVar11[2] == param_2) break;
          iVar9 = iVar9 + uVar10 + -1;
          puVar11 = (ushort *)(&DAT_00734674 + lVar6);
          uVar1 = *(ushort *)(&DAT_00734676 + lVar6);
          lVar6 = lVar6 + 8;
          uVar2 = *puVar11;
        }
        if ((uVar8 & 0xffff) < uVar10) {
          uVar10 = iVar9 + uVar8;
          goto LAB__text__00312180;
        }
      }
LAB__text__00312100:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
    if ((param_2 - 1 < 0x329) && ((uVar4 & 0xffff) != 0)) {
      lVar6 = 0;
      iVar9 = 0x328;
      do {
        puVar11 = (ushort *)(&DAT_0073466e + lVar6);
        if (*(ushort *)(&DAT_0073466c + lVar6) == param_2) {
          uVar5 = iVar9 + uVar4;
          if ((((uVar5 ^ 0xffffffff) & 0xffff) != 0) && ((uVar4 & 0xffff) < (uint)*puVar11))
          goto LAB__text__0031221c;
          break;
        }
        lVar6 = lVar6 + 4;
        iVar9 = iVar9 + (uint)*puVar11 + -1;
      } while (lVar6 != 0x1cc);
    }
  }
  uVar5 = param_2 - 1;
LAB__text__0031221c:
  if (param_3 == 1) {
    if (param_4 == 0) {
      if (0x45f < (uVar5 & 0xffff)) {
        return;
      }
      param_1 = param_1 + 0x400;
    }
    else {
      if (0x45f < (uVar5 & 0xffff)) {
        return;
      }
      param_1 = param_1 + 0x518;
    }
  }
  else if (param_4 == 0) {
    if (0x45f < (uVar5 & 0xffff)) {
      return;
    }
    param_1 = param_1 + 0x374;
  }
  else {
    if (0x45f < (uVar5 & 0xffff)) {
      return;
    }
    param_1 = param_1 + 0x48c;
  }
  uVar7 = (ulong)(uVar5 >> 3) & 0x1fff;
  *(byte *)(param_1 + uVar7) = *(byte *)(param_1 + uVar7) | (byte)(1 << ((ulong)uVar5 & 7));
  return;
}


