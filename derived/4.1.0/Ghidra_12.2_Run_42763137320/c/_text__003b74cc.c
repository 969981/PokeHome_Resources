/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b74cc; name: FUN_.text__003b74cc
 */


bool FUN__text__003b74cc(long param_1,uint *param_2)

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
  bool bVar13;
  uint uVar14;
  int iVar15;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar1 = uVar4;
  iVar12 = iVar8;
  if (iVar5 != 0) {
    uVar1 = uVar7;
    iVar12 = iVar2;
  }
  iVar11 = 0;
  if (iVar12 != 0) {
    iVar11 = iVar6 / iVar12;
  }
  iVar10 = iVar6 - iVar11 * iVar12;
  if ((int)uVar1 < 1) {
    uVar14 = 0;
    if ((uVar1 == 0) || (-1 < (int)(uVar1 + iVar10))) goto LAB__text__003b7520;
  }
  else if ((int)(uVar1 + iVar10) < iVar12) {
    uVar14 = 0;
    goto LAB__text__003b7520;
  }
  uVar14 = uVar1 >> 0x1f;
LAB__text__003b7520:
  if (((iVar12 * iVar3 + iVar6 == 0) && (uVar14 != 0)) && (*(char *)(param_1 + 0x2c) != '\0')) {
    return true;
  }
  iVar6 = iVar12 * iVar3 + iVar6;
  iVar10 = *(int *)(param_1 + 8) + -1;
  if (((0 < (int)uVar1) && (iVar6 == iVar10)) && (*(char *)(param_1 + 0x2c) != '\0')) {
    return true;
  }
  uVar1 = uVar7;
  if (iVar5 != 0) {
    uVar1 = uVar4;
  }
  if (((int)uVar1 < 0) && (iVar11 == 0 && iVar3 == 0)) {
    return true;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 < 1) {
    iVar15 = 0;
    if (iVar12 != 0) {
      iVar15 = iVar10 / iVar12;
    }
    if (((0 < (int)uVar1) && (iVar11 == iVar15)) && (iVar3 == iVar9)) {
      return true;
    }
  }
  else {
    iVar15 = iVar2;
    if (iVar5 != 0) {
      iVar15 = iVar8;
    }
    iVar15 = iVar15 + -1;
    if ((0 < (int)uVar1) && (iVar11 == iVar15 && iVar3 == iVar9)) {
      return true;
    }
  }
  bVar13 = false;
  if ((0 < (int)uVar1) && (iVar11 == iVar15 + -1)) {
    iVar8 = uVar4 + uVar7 * iVar8;
    if (iVar5 != 0) {
      iVar8 = uVar7 + uVar4 * iVar2;
    }
    bVar13 = *(int *)(param_1 + 8) <= iVar6 + iVar8 && iVar3 == iVar9;
  }
  return bVar13;
}


