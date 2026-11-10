/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7634; name: FUN_.text__003b7634
 */


undefined4 FUN__text__003b7634(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar1 = uVar4;
  iVar11 = iVar8;
  if (iVar5 != 0) {
    uVar1 = uVar7;
    iVar11 = iVar2;
  }
  iVar12 = 0;
  if (iVar11 != 0) {
    iVar12 = iVar6 / iVar11;
  }
  iVar10 = iVar6 - iVar12 * iVar11;
  if ((int)uVar1 < 1) {
    uVar16 = 0;
    if ((uVar1 != 0) && ((int)(uVar1 + iVar10) < 0)) goto LAB__text__003b7684;
  }
  else if ((int)(uVar1 + iVar10) < iVar11) {
    uVar16 = 0;
  }
  else {
LAB__text__003b7684:
    uVar16 = uVar1 >> 0x1f;
  }
  if (((iVar11 * iVar3 + iVar6 == 0) && (uVar16 != 0)) && (*(char *)(param_1 + 0x2c) != '\0')) {
    return 5;
  }
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = iVar11 * iVar3 + iVar6;
  iVar13 = iVar9 + -1;
  if (((0 < (int)uVar1) && (iVar10 == iVar13)) && (*(char *)(param_1 + 0x2c) != '\0')) {
    return 6;
  }
  uVar1 = uVar7;
  if (iVar5 != 0) {
    uVar1 = uVar4;
  }
  if (((int)uVar1 < 0) && (iVar12 == 0 && iVar3 == 0)) {
    iVar3 = uVar4 + uVar7 * iVar8;
    if (iVar5 != 0) {
      iVar3 = uVar7 + uVar4 * iVar2;
    }
    iVar6 = iVar6 + iVar3;
    iVar11 = iVar11 * (int)((float)iVar9 / (float)iVar11);
    if (iVar6 < 0) {
      uVar14 = 1;
      if (iVar9 <= iVar11 + iVar6) {
        uVar14 = 2;
      }
      return uVar14;
    }
    uVar14 = 1;
    if (iVar9 <= iVar6 && iVar6 < iVar11) {
      uVar14 = 2;
    }
    return uVar14;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 < 1) {
    iVar15 = 0;
    if (iVar11 != 0) {
      iVar15 = iVar13 / iVar11;
    }
    if (((0 < (int)uVar1) && (iVar12 == iVar15)) && (iVar3 == iVar6)) goto joined_r0x003b77f4;
LAB__text__003b779c:
    if ((int)uVar1 < 1) {
      return 0;
    }
    if (iVar12 != iVar15 + -1) {
      return 0;
    }
    iVar15 = uVar4 + uVar7 * iVar8;
    if (iVar5 != 0) {
      iVar15 = uVar7 + uVar4 * iVar2;
    }
    if (iVar10 + iVar15 < iVar9 || iVar3 != iVar6) {
      return 0;
    }
    if (iVar6 < 1) {
      iVar15 = 0;
      if (iVar11 != 0) {
        iVar15 = iVar13 / iVar11;
      }
      goto joined_r0x003b77f4;
    }
  }
  else {
    iVar15 = iVar2;
    if (iVar5 != 0) {
      iVar15 = iVar8;
    }
    iVar15 = iVar15 + -1;
    if (((int)uVar1 < 1) || (iVar12 != iVar15 || iVar3 != iVar6)) goto LAB__text__003b779c;
  }
  iVar15 = iVar2;
  if (iVar5 != 0) {
    iVar15 = iVar8;
  }
  iVar15 = iVar15 + -1;
joined_r0x003b77f4:
  uVar14 = 3;
  if (iVar12 == iVar15 + -1) {
    iVar6 = uVar4 + uVar7 * iVar8;
    if (iVar5 != 0) {
      iVar6 = uVar7 + uVar4 * iVar2;
    }
    uVar14 = 3;
    if (iVar9 <= iVar10 + iVar6) {
      uVar14 = 4;
    }
  }
  return uVar14;
}


