/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036dea0; name: FUN_.text__0036dea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0036dea0(long param_1,uint *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ushort *puVar16;
  
  uVar3 = *param_2;
  uVar5 = (ushort)param_2[1];
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  uVar14 = param_2[5];
  uVar2 = param_2[6];
  if ((uVar3 == 0x37c) && (0x3d < uVar5)) {
    return false;
  }
  uVar8 = FUN__text__00206710(0,uVar3);
  if (uVar8 == 0) {
    uVar8 = FUN__text__00206710(1,uVar3);
    if (uVar8 == 0) {
      uVar8 = FUN__text__00206710(2,uVar3);
      if (uVar8 != 0) {
        iVar9 = 2;
        uVar12 = 0;
        if (uVar8 < 0xd3) {
          uVar12 = uVar8;
        }
        uVar12 = uVar12 - 1;
        if (uVar12 < 0xd2) goto LAB__text__0036dfd0;
      }
    }
    else {
      iVar9 = 1;
      uVar12 = 0;
      if (uVar8 < 0xd4) {
        uVar12 = uVar8;
      }
      uVar12 = uVar12 - 1;
      if (uVar12 < 0xd3) goto LAB__text__0036dfd0;
    }
LAB__text__0036df94:
    bVar7 = false;
    uVar8 = FUN__text__00206710(0,uVar3);
  }
  else {
    iVar9 = 0;
    uVar12 = 0;
    if (uVar8 < 0x191) {
      uVar12 = uVar8;
    }
    uVar12 = uVar12 - 1;
    if (399 < uVar12) goto LAB__text__0036df94;
LAB__text__0036dfd0:
    if (iVar9 == 2) {
      plVar10 = (long *)(param_1 + 0x72f0 + (ulong)uVar12 * 0x30);
      lVar15 = *plVar10;
joined_r0x0036e010:
      if (lVar15 != 0) goto LAB__text__0036e03c;
LAB__text__0036e02c:
      if ((plVar10[1] != 0) || (plVar10[2] != 0)) goto LAB__text__0036e03c;
      bVar7 = plVar10[3] != 0;
      uVar8 = FUN__text__00206710(0,uVar3);
    }
    else {
      if (iVar9 != 1) {
        plVar10 = (long *)(param_1 + 0x60 + (ulong)uVar12 * 0x30);
        lVar15 = *plVar10;
        goto joined_r0x0036e010;
      }
      plVar10 = (long *)(param_1 + 0x4b60 + (ulong)uVar12 * 0x30);
      if (*plVar10 == 0) goto LAB__text__0036e02c;
LAB__text__0036e03c:
      bVar7 = true;
      uVar8 = FUN__text__00206710(0,uVar3);
    }
  }
  if (uVar8 == 0) {
    uVar8 = FUN__text__00206710(1,uVar3);
    if (uVar8 == 0) {
      uVar8 = FUN__text__00206710(2,uVar3);
      if (uVar8 != 0) {
        iVar9 = 2;
        uVar12 = 0;
        if (uVar8 < 0xd3) {
          uVar12 = uVar8;
        }
        uVar12 = uVar12 - 1;
        if (uVar12 < 0xd2) goto LAB__text__0036e0e0;
      }
    }
    else {
      iVar9 = 1;
      uVar12 = 0;
      if (uVar8 < 0xd4) {
        uVar12 = uVar8;
      }
      uVar12 = uVar12 - 1;
      if (uVar12 < 0xd3) goto LAB__text__0036e0e0;
    }
  }
  else {
    iVar9 = 0;
    uVar12 = 0;
    if (uVar8 < 0x191) {
      uVar12 = uVar8;
    }
    uVar12 = uVar12 - 1;
    if (uVar12 < 400) {
LAB__text__0036e0e0:
      if (iVar9 == 2) {
        param_1 = param_1 + 0x72f0;
      }
      else if (iVar9 == 1) {
        param_1 = param_1 + 0x4b60;
      }
      else {
        param_1 = param_1 + 0x60;
      }
      puVar11 = (ulong *)(param_1 + (ulong)uVar12 * 0x30);
      puVar1 = puVar11 + 1;
      if ((char)uVar6 != '\0') {
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 2;
      }
      if (uVar4 == 1) {
        puVar11 = puVar1;
      }
      uVar4 = 0;
      if (uVar3 != 0x2e8 || uVar5 != 1) {
        uVar4 = (uint)uVar5;
      }
      uVar2 = uVar2 + uVar4 * 7;
      if (uVar3 != 0x365) {
        uVar2 = uVar4;
      }
      uVar6 = 0;
      if (uVar2 < 0x3f) {
        uVar6 = uVar2;
      }
      if (uVar14 == 2) {
        uVar13 = 0x4000000000000000;
        if (uVar4 != 1 || uVar3 != 0x37c) {
          uVar13 = 0x8000000000000000;
        }
      }
      else {
        lVar15 = 1;
        puVar16 = (ushort *)(_DAT_008a3090 + 4);
        do {
          if (uVar3 == puVar16[-2]) {
            lVar15 = lVar15 + -1;
LAB__text__0036e1c4:
            uVar14 = (uint)*(ushort *)(_DAT_008a3090 + lVar15 * 4 + 2);
            goto LAB__text__0036e1cc;
          }
          if (uVar3 == *puVar16) goto LAB__text__0036e1c4;
          lVar15 = lVar15 + 2;
          puVar16 = puVar16 + 4;
        } while (lVar15 != 0x91);
        uVar14 = 1;
LAB__text__0036e1cc:
        if (uVar14 <= uVar6) {
          return bVar7;
        }
        uVar13 = 1L << ((ulong)uVar6 & 0x3f);
      }
      *puVar11 = *puVar11 | uVar13;
      return bVar7;
    }
  }
  return false;
}


