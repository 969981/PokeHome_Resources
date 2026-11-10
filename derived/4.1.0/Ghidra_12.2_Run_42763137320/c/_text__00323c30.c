/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00323c30; name: FUN_.text__00323c30
 */


long FUN__text__00323c30(uint param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_008eefd0 == lVar1 && DAT_008eefd8 == lVar2) {
    uVar6 = 0;
  }
  else if (DAT_008eefe0 == lVar1 && DAT_008eefe8 == lVar2) {
    uVar6 = 0x16;
  }
  else if ((DAT_008eeff0 == lVar1) && (DAT_008eeff8 == lVar2)) {
    uVar6 = 0x2c;
  }
  else if ((DAT_008ef000 == lVar1) && (DAT_008ef008 == lVar2)) {
    uVar6 = 0x42;
  }
  else if ((DAT_008ef010 == lVar1) && (DAT_008ef018 == lVar2)) {
    uVar6 = 0x58;
  }
  else if ((DAT_008ef020 == lVar1) && (DAT_008ef028 == lVar2)) {
    uVar6 = 0x6e;
  }
  else if ((DAT_008ef030 == lVar1) && (DAT_008ef038 == lVar2)) {
    uVar6 = 0x84;
  }
  else {
    uVar4 = 0x9a;
    if (DAT_008ef048 != lVar2 || DAT_008ef040 != lVar1) {
      uVar4 = 0;
    }
    uVar6 = (ulong)uVar4;
  }
  iVar3 = (int)uVar6;
  uVar4 = 0;
  if ((&DAT_008e815c)[uVar6 * 0x28] != 0) {
    if (param_1 == 0) {
      return uVar6 * 0xa0 + 0x8e8130;
    }
    uVar4 = 1;
  }
  if ((&DAT_008e815c)[(uVar6 | 1) * 0x28] != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 1) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if ((&DAT_008e829c)[uVar6 * 0x28] != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 2) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if ((&DAT_008e833c)[uVar6 * 0x28] != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 3) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e83dc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 4) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e847c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 5) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e851c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 6) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e85bc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 7) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e865c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 8) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e86fc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 9) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e879c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 10) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e883c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0xb) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e88dc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0xc) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e897c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0xd) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8a1c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0xe) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8abc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0xf) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8b5c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0x10) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8bfc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0x11) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8c9c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0x12) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8d3c) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0x13) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(uVar6 * 0xa0 + 0x8e8ddc) != 0) {
    if (param_1 <= uVar4) {
      return (ulong)(iVar3 + 0x14) * 0xa0 + 0x8e8130;
    }
    uVar4 = uVar4 + 1;
  }
  iVar5 = 0x15;
  if (uVar4 < param_1 || *(int *)(uVar6 * 0xa0 + 0x8e8e7c) == 0) {
    iVar5 = 0x16;
  }
  return (ulong)(uint)(iVar5 + iVar3) * 0xa0 + 0x8e8130;
}


