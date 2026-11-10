/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312880; name: FUN_.text__00312880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00312880(long param_1,uint param_2,int param_3,byte param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_2 == 0) {
    return;
  }
  if (0x329 < (int)param_2) {
    return;
  }
  if ((int)param_2 < 0x2a9) {
    uVar8 = 0;
    uVar9 = 3;
    if ((int)param_2 < 0x22b) {
      if (param_2 == 0x15f) goto LAB__text__0031293c;
      if (param_2 != 0x1a5) goto LAB__text__00312a98;
    }
    else {
      if (param_2 == 0x22b) goto LAB__text__0031293c;
      if (param_2 != 0x288) {
        if (param_2 == 0x292) {
          uVar8 = 0;
          if ((param_5 & 0xffff) != 1) {
            uVar8 = param_5;
          }
          uVar9 = uVar8;
          goto LAB__text__0031293c;
        }
LAB__text__00312a98:
        lVar10 = 1;
        puVar7 = (ushort *)&DAT_00734670;
        uVar2 = _DAT_0073466c;
        while (uVar2 != param_2) {
          if (lVar10 == 0x73) goto LAB__text__00312ae8;
          if (*puVar7 == param_2) goto LAB__text__00312ae0;
          lVar10 = lVar10 + 2;
          uVar2 = puVar7[2];
          puVar7 = puVar7 + 4;
        }
        lVar10 = lVar10 + -1;
LAB__text__00312ae0:
        if ((int)lVar10 == -1) {
LAB__text__00312ae8:
          uVar8 = 1;
        }
        else {
          uVar8 = (uint)*(ushort *)(&DAT_0073466e + ((lVar10 << 0x20) >> 0x1e));
        }
        if (uVar8 <= (param_5 & 0xffff)) {
          param_5 = 0;
        }
        uVar8 = param_5;
        uVar9 = param_5;
        goto LAB__text__0031293c;
      }
    }
LAB__text__00312934:
    uVar8 = 0;
  }
  else {
    if (0x2e9 < (int)param_2) {
      if (param_2 != 0x2ea) {
        if (param_2 == 0x306) {
          uVar8 = 0;
          if (6 < (param_5 & 0xffff)) {
            uVar8 = param_5;
          }
          uVar9 = uVar8;
          goto LAB__text__0031293c;
        }
        if (param_2 != 0x30a) goto LAB__text__00312a98;
      }
      goto LAB__text__00312934;
    }
    if (param_2 == 0x2a9) goto LAB__text__00312934;
    if (param_2 != 0x2ce) goto LAB__text__00312a98;
    if ((param_5 & 0xffff) == 3) {
      uVar8 = 0;
      uVar9 = 0;
      goto LAB__text__0031293c;
    }
    if ((param_5 & 0xffff) != 2) {
      uVar8 = param_5;
      uVar9 = param_5;
      goto LAB__text__0031293c;
    }
    uVar8 = 1;
  }
  uVar9 = 1;
LAB__text__0031293c:
  if (param_2 - 1 < 0x329) {
    do {
      param_4 = ((uVar8 & 0xffff) == 0 || param_2 != 0x15f) & param_4;
      uVar1 = param_2 - 1;
      if ((uVar8 & 0xffff) == 0) {
LAB__text__00312a38:
        lVar10 = param_1 + 0x25c;
        if (param_3 == 0) {
          if (param_4 == 0) {
            lVar10 = param_1 + 0x144;
          }
        }
        else if (param_3 == 1) {
          lVar10 = param_1 + 0x2e8;
          if (param_4 == 0) {
            lVar10 = param_1 + 0x1d0;
          }
        }
        else if (param_4 == 0) {
          lVar10 = param_1 + 0x144;
        }
        if ((uVar1 & 0xffff) < 0x460) {
          uVar6 = (ulong)(uVar1 >> 3) & 0x1fff;
          *(byte *)(lVar10 + uVar6) = *(byte *)(lVar10 + uVar6) | (byte)(1 << ((ulong)uVar1 & 7));
        }
      }
      else {
        iVar4 = 0x328;
        puVar7 = (ushort *)&DAT_0073466c;
        lVar10 = 0;
        uVar3 = _DAT_0073466e;
        uVar2 = _DAT_0073466c;
        while (uVar5 = (uint)uVar3, uVar2 != param_2) {
          if (lVar10 == 0x1c8) goto LAB__text__0031299c;
          iVar4 = iVar4 + uVar5 + -1;
          uVar5 = (uint)puVar7[3];
          if (puVar7[2] == param_2) break;
          iVar4 = iVar4 + uVar5 + -1;
          puVar7 = (ushort *)(&DAT_00734674 + lVar10);
          uVar3 = *(ushort *)(&DAT_00734676 + lVar10);
          lVar10 = lVar10 + 8;
          uVar2 = *puVar7;
        }
        uVar1 = iVar4 + uVar8;
        if ((uVar8 & 0xffff) < uVar5 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0)
        goto LAB__text__00312a38;
      }
LAB__text__0031299c:
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffff) <= (uVar9 & 0xffff));
  }
  else {
    do {
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffff) <= (uVar9 & 0xffff));
  }
  return;
}


