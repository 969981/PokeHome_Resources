/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004884b0; name: FUN_.text__004884b0
 */


int FUN__text__004884b0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  
  if ((param_2 & 0xf00) != 0x100) {
    return 1;
  }
  uVar1 = param_2 + ((int)(param_2 << 0x10) >> 0x1f);
  if ((uVar1 & 0xfe) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (uint *)*param_1;
  puVar5 = puVar4;
  if (uVar2 == 0) {
LAB__text__00488538:
    if (puVar5 != puVar4 + (ulong)uVar2 * 4) {
      iVar3 = 1;
      goto joined_r0x00488548;
    }
  }
  else {
    lVar6 = (ulong)uVar2 << 4;
    do {
      if (*puVar5 == (param_2 & 0xffff7f00 | uVar1 & 0xff)) goto LAB__text__00488538;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  lVar6 = FUN__text__004896b0(param_1);
  iVar3 = 1;
  if (lVar6 == 0) {
    iVar3 = 2;
  }
joined_r0x00488548:
  if (((param_2 >> 0xe & 1) == 0) || (iVar3 != 1)) {
    return iVar3;
  }
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (uint *)*param_1;
  puVar5 = puVar4;
  if (uVar2 == 0) {
LAB__text__004885c0:
    if (puVar5 != puVar4 + (ulong)uVar2 * 4) {
      return 1;
    }
  }
  else {
    lVar6 = (ulong)uVar2 << 4;
    do {
      if (*puVar5 == (param_2 & 0xffff3f00 | uVar1 + ((int)(param_2 << 0x11) >> 0x1f) & 0xff))
      goto LAB__text__004885c0;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  lVar6 = FUN__text__004896b0(param_1);
  iVar3 = 1;
  if (lVar6 == 0) {
    iVar3 = 2;
  }
  return iVar3;
}


