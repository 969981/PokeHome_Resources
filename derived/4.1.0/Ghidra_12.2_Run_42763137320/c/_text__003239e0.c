/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003239e0; name: FUN_.text__003239e0
 */


uint FUN__text__003239e0(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (DAT_008eefd0 == lVar1 && DAT_008eefd8 == lVar2) {
    uVar4 = 0;
  }
  else if (DAT_008eefe0 == lVar1 && DAT_008eefe8 == lVar2) {
    uVar4 = 0x16;
  }
  else if ((DAT_008eeff0 == lVar1) && (DAT_008eeff8 == lVar2)) {
    uVar4 = 0x2c;
  }
  else if ((DAT_008ef000 == lVar1) && (DAT_008ef008 == lVar2)) {
    uVar4 = 0x42;
  }
  else if ((DAT_008ef010 == lVar1) && (DAT_008ef018 == lVar2)) {
    uVar4 = 0x58;
  }
  else if ((DAT_008ef020 == lVar1) && (DAT_008ef028 == lVar2)) {
    uVar4 = 0x6e;
  }
  else if ((DAT_008ef030 == lVar1) && (DAT_008ef038 == lVar2)) {
    uVar4 = 0x84;
  }
  else {
    uVar4 = 0x9a;
    if (DAT_008ef048 != lVar2 || DAT_008ef040 != lVar1) {
      uVar4 = 0;
    }
  }
  lVar1 = uVar4 * 0xa0;
  uVar3 = (uint)((&DAT_008e815c)[(uVar4 | 1) * 0x28] != 0);
  if ((&DAT_008e815c)[uVar4 * 0x28] != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((&DAT_008e829c)[uVar4 * 0x28] != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((&DAT_008e833c)[uVar4 * 0x28] != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e83dc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e847c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e851c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e85bc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e865c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e86fc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e879c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e883c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e88dc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e897c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8a1c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8abc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8b5c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8bfc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8c9c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8d3c) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8ddc) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(lVar1 + 0x8e8e7c) != 0) {
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}


