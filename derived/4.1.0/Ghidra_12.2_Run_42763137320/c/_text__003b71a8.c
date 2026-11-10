/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b71a8; name: FUN_.text__003b71a8
 */


bool FUN__text__003b71a8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 < 1) {
    return false;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar6 = *param_2;
  iVar1 = iVar5;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar9;
  }
  iVar7 = iVar3 + iVar1 * iVar2;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar9 = param_2[1];
    iVar10 = 0;
    if (iVar1 != 0) {
      iVar10 = (iVar6 + iVar9 * iVar5 + iVar3 + iVar5 * iVar2) / iVar1;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar7 / iVar1;
    }
    bVar8 = SBORROW4(iVar10,iVar3);
    iVar1 = iVar10 - iVar3;
    if (iVar10 <= iVar3) goto LAB__text__003b7248;
  }
  else {
    iVar10 = 0;
    if (iVar1 != 0) {
      iVar10 = (param_2[1] + iVar6 * iVar9 + iVar3 + iVar9 * iVar2) / iVar1;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar7 / iVar1;
    }
    bVar8 = SBORROW4(iVar10,iVar3);
    iVar1 = iVar10 - iVar3;
    iVar9 = iVar6;
    if (iVar10 <= iVar3) {
LAB__text__003b7248:
      if (iVar1 < 0 == bVar8) {
        return false;
      }
      if (iVar2 == 0) {
        return false;
      }
      if (*(int *)(param_1 + 0x18) + iVar2 <= iVar10) {
        return false;
      }
      goto LAB__text__003b7264;
    }
  }
  if ((iVar2 == iVar4) || (iVar10 <= *(int *)(param_1 + 0x1c) + iVar2)) {
    return false;
  }
LAB__text__003b7264:
  if (iVar9 < 1) {
    return (iVar9 != 0 && iVar2 != 0) && (iVar9 == 0 || -1 < iVar2);
  }
  return iVar2 < iVar4;
}


