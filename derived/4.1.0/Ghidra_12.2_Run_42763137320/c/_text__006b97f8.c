/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b97f8; name: FUN_.text__006b97f8
 */


void FUN__text__006b97f8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN__text__006b253c(param_1,6);
  lVar3 = FUN__text__006b27a8(param_1,0x12);
  if (lVar3 != 0) {
    lVar4 = FUN__text__006b4514(param_1);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = FUN__text__006b4514(param_1);
    uVar5 = FUN__text__006b13f0(uVar5,*(undefined2 *)(lVar4 + 0x4a));
    uVar1 = FUN__text__006f3f40(uVar5,4,3,0x7208e5);
    *(undefined4 *)(lVar3 + 4) = uVar1;
    if (param_2 != (long *)0x0) {
      lVar3 = FUN__text__006c1690(param_3,0x10,0x120);
      *param_2 = *param_2 + lVar3;
      if ((*(byte *)(lVar2 + 4) >> 4 & 1) != 0) {
        lVar2 = FUN__text__006c1690(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar2;
        lVar2 = FUN__text__006c1690(param_3,0x10,0x120);
        *param_2 = *param_2 + lVar2;
      }
    }
  }
  return;
}


