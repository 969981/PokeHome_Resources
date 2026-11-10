/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036d8b0; name: FUN_.text__0036d8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0036d8b0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  uVar3 = FUN__text__00206710(0);
  uVar1 = (uint)uVar3;
  if (uVar1 == 0) {
    uVar3 = FUN__text__00206710(1,param_2);
    uVar1 = (uint)uVar3;
    if (uVar1 == 0) {
      uVar3 = FUN__text__00206710(2,param_2);
      uVar1 = (uint)uVar3;
      if (uVar1 == 0) {
        return;
      }
      iVar5 = 2;
      uVar11 = 0;
      if (uVar1 < 0xd3) {
        uVar11 = uVar1;
      }
      uVar11 = uVar11 - 1;
      if (0xd1 < uVar11) {
        return;
      }
    }
    else {
      iVar5 = 1;
      uVar11 = 0;
      if (uVar1 < 0xd4) {
        uVar11 = uVar1;
      }
      uVar11 = uVar11 - 1;
      if (0xd2 < uVar11) {
        return;
      }
    }
  }
  else {
    iVar5 = 0;
    uVar11 = 0;
    if (uVar1 < 0x191) {
      uVar11 = uVar1;
    }
    uVar11 = uVar11 - 1;
    if (399 < uVar11) {
      return;
    }
  }
  if (iVar5 == 2) {
    lVar10 = param_1 + 0x72f0;
    if (param_6 != 2) goto LAB__text__0036d9e4;
LAB__text__0036d9a8:
    uVar2 = FUN__text__0036dbe0(uVar3,param_2);
    uVar1 = uVar2 ^ 1;
    if ((param_2 != 0x37c) && ((uVar2 & 1) != 0)) {
      uVar2 = *(uint *)(lVar10 + (ulong)uVar11 * 0x30 + 0x20) & 0xf0007fff;
      goto LAB__text__0036db94;
    }
  }
  else {
    lVar10 = param_1 + 0x60;
    if (iVar5 == 1) {
      lVar10 = param_1 + 0x4b60;
    }
    if (param_6 == 2) goto LAB__text__0036d9a8;
LAB__text__0036d9e4:
    uVar1 = 1;
  }
  if (param_2 == 0x292) {
    uVar2 = 0;
    if ((param_5 & 0xffff) != 1) {
      uVar2 = param_5;
    }
LAB__text__0036daa4:
    uVar4 = FUN__text__005fe794(param_2,uVar2,0);
    lVar9 = _DAT_008a3090;
    param_5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
      do {
        uVar8 = uVar2;
        lVar6 = 0;
        puVar7 = (ushort *)(lVar9 + 0xc);
        do {
          if (puVar7[-6] == param_2) {
LAB__text__0036db54:
            uVar2 = (uint)*(ushort *)(lVar9 + lVar6 * 4 + 2);
            goto LAB__text__0036db5c;
          }
          if (puVar7[-4] == param_2) {
            lVar6 = lVar6 + 1;
            goto LAB__text__0036db54;
          }
          if (puVar7[-2] == param_2) {
            lVar6 = lVar6 + 2;
            goto LAB__text__0036db54;
          }
          if (*puVar7 == param_2) {
            lVar6 = lVar6 + 3;
            goto LAB__text__0036db54;
          }
          if (puVar7[2] == param_2) {
            lVar6 = lVar6 + 4;
            goto LAB__text__0036db54;
          }
          if (puVar7[4] == param_2) {
            lVar6 = lVar6 + 5;
            goto LAB__text__0036db54;
          }
          lVar6 = lVar6 + 6;
          puVar7 = puVar7 + 0xc;
        } while (lVar6 != 0x90);
        uVar2 = 1;
LAB__text__0036db5c:
        if (uVar2 <= uVar8) goto LAB__text__0036db80;
        uVar4 = FUN__text__005fe794(param_2,uVar8,0);
        uVar2 = uVar8 + 1;
      } while ((uVar4 & 1) == 0);
      param_5 = uVar8;
    }
  }
  else {
    if (param_2 == 0x2ce) {
      if ((param_5 & 0xffff) == 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = param_5;
        if ((param_5 & 0xffff) == 2) {
          uVar2 = 1;
        }
      }
      goto LAB__text__0036daa4;
    }
    if (param_2 == 0x306) {
      uVar2 = 0;
      if (6 < (param_5 & 0xffff)) {
        uVar2 = param_5;
      }
      goto LAB__text__0036daa4;
    }
    lVar9 = 1;
    puVar7 = (ushort *)(_DAT_008a3090 + 4);
    do {
      if (puVar7[-2] == param_2) {
        lVar9 = lVar9 + -1;
LAB__text__0036da8c:
        uVar2 = (uint)*(ushort *)(_DAT_008a3090 + lVar9 * 4 + 2);
        goto LAB__text__0036da94;
      }
      if (*puVar7 == param_2) goto LAB__text__0036da8c;
      lVar9 = lVar9 + 2;
      puVar7 = puVar7 + 4;
    } while (lVar9 != 0x91);
    uVar2 = 1;
LAB__text__0036da94:
    if (uVar2 <= (param_5 & 0xffff)) {
      param_5 = 0;
    }
    uVar2 = param_5;
    if (param_2 != 0x365) goto LAB__text__0036daa4;
  }
LAB__text__0036db80:
  uVar2 = *(uint *)(lVar10 + (ulong)uVar11 * 0x30 + 0x20) & 0x7fff | (param_5 & 0xff) << 0xf;
LAB__text__0036db94:
  uVar8 = 0;
  if ((uVar1 & 1) == 0) {
    uVar8 = 0x10000000;
  }
  uVar1 = 0x80000000;
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  *(uint *)(lVar10 + (ulong)uVar11 * 0x30 + 0x20) =
       uVar1 | (param_3 & 3) << 0x1d | uVar8 | uVar2 & 0xfffffff;
  return;
}


