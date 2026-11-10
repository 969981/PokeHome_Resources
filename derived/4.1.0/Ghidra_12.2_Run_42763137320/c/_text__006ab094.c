/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab094; name: FUN_.text__006ab094
 */


void FUN__text__006ab094(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    lVar2 = 0x230;
  }
  else {
    lVar2 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
  }
  lVar2 = FUN__text__006c1690(param_3,0x10,lVar2);
  *param_2 = *param_2 + lVar2;
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar2 = 0x90;
      }
      else {
        lVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x90;
      }
    }
    else {
      lVar2 = 0x220;
    }
  }
  else {
    lVar2 = 0xe0;
  }
  lVar2 = FUN__text__006c1690(param_3,0x10,lVar2);
  *param_2 = *param_2 + lVar2;
  uVar1 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18) +
            ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
            ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14;
    if (*(char *)(lVar2 + 1) != '\a') {
      if ((uVar1 == 1) || (*(char *)(lVar2 + 0x11) == '\a')) {
        uVar3 = 1;
      }
      else if (uVar1 == 2) {
        uVar3 = 2;
      }
      else {
        uVar3 = 2;
        if (*(char *)(lVar2 + 0x21) != '\a') {
          uVar3 = 3;
        }
      }
      if (uVar1 <= uVar3) goto LAB__text__006ab1a0;
    }
    lVar2 = FUN__text__006c1690(param_3,0x10,0xc0);
    *param_2 = *param_2 + lVar2;
  }
LAB__text__006ab1a0:
  if ((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
    lVar2 = FUN__text__006c1690(param_3,0x10);
    *param_2 = *param_2 + lVar2;
  }
  return;
}


