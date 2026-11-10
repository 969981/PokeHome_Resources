/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312550; name: FUN_.text__00312550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00312550(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if ((param_2 != 0) && ((int)param_2 < 0x32a)) {
    lVar7 = 1;
    puVar5 = (ushort *)&DAT_00734670;
    uVar3 = _DAT_0073466c;
    while (uVar3 != param_2) {
      if (lVar7 == 0x73) goto LAB__text__003125b4;
      if (*puVar5 == param_2) goto LAB__text__003125ac;
      lVar7 = lVar7 + 2;
      uVar3 = puVar5[2];
      puVar5 = puVar5 + 4;
    }
    lVar7 = lVar7 + -1;
LAB__text__003125ac:
    if ((int)lVar7 == -1) {
LAB__text__003125b4:
      uVar6 = 1;
    }
    else {
      uVar6 = (uint)*(ushort *)(&DAT_0073466e + ((lVar7 << 0x20) >> 0x1e));
    }
    if (param_2 - 1 < 0x329) {
      uVar8 = param_2 - 1;
      uVar9 = 0;
      do {
        uVar1 = uVar8;
        if ((uVar9 & 0xffff) == 0) {
LAB__text__003126b4:
          if ((*(byte *)(param_1 + 0x144 + ((ulong)(uVar1 >> 3) & 0x1fff)) >> (ulong)(uVar1 & 7) & 1
              ) != 0) {
            return 1;
          }
        }
        else {
          iVar10 = 0x328;
          puVar5 = (ushort *)&DAT_0073466c;
          lVar7 = 0;
          uVar2 = _DAT_0073466e;
          uVar3 = _DAT_0073466c;
          while (uVar4 = (uint)uVar2, uVar3 != param_2) {
            if (lVar7 == 0x1c8) goto LAB__text__003126c8;
            iVar10 = iVar10 + uVar4 + -1;
            uVar4 = (uint)puVar5[3];
            if (puVar5[2] == param_2) break;
            iVar10 = iVar10 + uVar4 + -1;
            puVar5 = (ushort *)(&DAT_00734674 + lVar7);
            uVar2 = *(ushort *)(&DAT_00734676 + lVar7);
            lVar7 = lVar7 + 8;
            uVar3 = *puVar5;
          }
          uVar1 = iVar10 + uVar9;
          if ((uVar9 & 0xffff) < uVar4 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0)
          goto LAB__text__003126b4;
        }
LAB__text__003126c8:
        uVar1 = uVar8;
        if ((uVar9 & 0xffff) == 0) {
LAB__text__00312744:
          if ((*(byte *)(param_1 + 0x1d0 + ((ulong)(uVar1 >> 3) & 0x1fff)) >> (ulong)(uVar1 & 7) & 1
              ) != 0) {
            return 1;
          }
        }
        else {
          iVar10 = 0x328;
          puVar5 = (ushort *)&DAT_0073466c;
          lVar7 = 0;
          uVar2 = _DAT_0073466e;
          uVar3 = _DAT_0073466c;
          while (uVar4 = (uint)uVar2, uVar3 != param_2) {
            if (lVar7 == 0x1c8) goto LAB__text__00312758;
            iVar10 = iVar10 + uVar4 + -1;
            uVar4 = (uint)puVar5[3];
            if (puVar5[2] == param_2) break;
            iVar10 = iVar10 + uVar4 + -1;
            puVar5 = (ushort *)(&DAT_00734674 + lVar7);
            uVar2 = *(ushort *)(&DAT_00734676 + lVar7);
            lVar7 = lVar7 + 8;
            uVar3 = *puVar5;
          }
          uVar1 = iVar10 + uVar9;
          if ((uVar9 & 0xffff) < uVar4 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0)
          goto LAB__text__00312744;
        }
LAB__text__00312758:
        uVar1 = uVar8;
        if ((uVar9 & 0xffff) == 0) {
LAB__text__003127d4:
          if ((*(byte *)(param_1 + 0x25c + ((ulong)(uVar1 >> 3) & 0x1fff)) >> (ulong)(uVar1 & 7) & 1
              ) != 0) {
            return 1;
          }
        }
        else {
          iVar10 = 0x328;
          puVar5 = (ushort *)&DAT_0073466c;
          lVar7 = 0;
          uVar2 = _DAT_0073466e;
          uVar3 = _DAT_0073466c;
          while (uVar4 = (uint)uVar2, uVar3 != param_2) {
            if (lVar7 == 0x1c8) goto LAB__text__003127e8;
            iVar10 = iVar10 + uVar4 + -1;
            uVar4 = (uint)puVar5[3];
            if (puVar5[2] == param_2) break;
            iVar10 = iVar10 + uVar4 + -1;
            puVar5 = (ushort *)(&DAT_00734674 + lVar7);
            uVar2 = *(ushort *)(&DAT_00734676 + lVar7);
            lVar7 = lVar7 + 8;
            uVar3 = *puVar5;
          }
          uVar1 = iVar10 + uVar9;
          if ((uVar9 & 0xffff) < uVar4 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0)
          goto LAB__text__003127d4;
        }
LAB__text__003127e8:
        uVar1 = uVar8;
        if ((uVar9 & 0xffff) == 0) {
LAB__text__00312610:
          if ((*(byte *)(param_1 + 0x2e8 + ((ulong)(uVar1 >> 3) & 0x1fff)) >> (ulong)(uVar1 & 7) & 1
              ) != 0) {
            return 1;
          }
        }
        else {
          iVar10 = 0x328;
          puVar5 = (ushort *)&DAT_0073466c;
          lVar7 = 0;
          uVar2 = _DAT_0073466e;
          uVar3 = _DAT_0073466c;
          while (uVar4 = (uint)uVar2, uVar3 != param_2) {
            if (lVar7 == 0x1c8) goto LAB__text__00312624;
            iVar10 = iVar10 + uVar4 + -1;
            uVar4 = (uint)puVar5[3];
            if (puVar5[2] == param_2) break;
            iVar10 = iVar10 + uVar4 + -1;
            puVar5 = (ushort *)(&DAT_00734674 + lVar7);
            uVar2 = *(ushort *)(&DAT_00734676 + lVar7);
            lVar7 = lVar7 + 8;
            uVar3 = *puVar5;
          }
          uVar1 = iVar10 + uVar9;
          if ((uVar9 & 0xffff) < uVar4 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0)
          goto LAB__text__00312610;
        }
LAB__text__00312624:
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
  }
  return 0;
}


