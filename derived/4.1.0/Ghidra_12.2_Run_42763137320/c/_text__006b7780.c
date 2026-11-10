/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7780; name: FUN_.text__006b7780
 */


long FUN__text__006b7780(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN__text__006c1690(param_1,0x10,0x230);
    if ((param_3 == 0) && ((*(byte *)(param_2 + 4) >> 1 & 1) == 0)) {
      return lVar2;
    }
    lVar3 = FUN__text__006c1690(param_1,0x10,0x230);
    lVar3 = lVar3 + lVar2;
  }
  if (param_3 == 0) {
    return lVar3;
  }
  bVar1 = *(byte *)(param_3 + 8);
  uVar6 = (uint)bVar1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) goto LAB__text__006b789c;
LAB__text__006b7800:
    if ((uVar6 >> 2 & 1) == 0) goto LAB__text__006b7838;
  }
  else {
    lVar2 = 2;
    if ((bVar1 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN__text__006c1690(param_1,0x10,0x230);
    lVar5 = FUN__text__006c1690(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 1 & 1) == 0) goto LAB__text__006b7800;
LAB__text__006b789c:
    lVar2 = 2;
    if ((uVar6 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN__text__006c1690(param_1,0x10,0x230);
    lVar5 = FUN__text__006c1690(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 2 & 1) == 0) goto LAB__text__006b7838;
  }
  lVar2 = 2;
  if ((uVar6 & 0x20) != 0) {
    lVar2 = 3;
  }
  lVar4 = FUN__text__006c1690(param_1,0x10,0x230);
  lVar5 = FUN__text__006c1690(param_1,0x10,0xe0);
  lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
LAB__text__006b7838:
  lVar2 = FUN__text__006c1690(param_1,0x10,0x230);
  return lVar2 + lVar3;
}


