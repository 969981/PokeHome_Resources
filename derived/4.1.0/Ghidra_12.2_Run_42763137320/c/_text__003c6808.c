/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c6808; name: FUN_.text__003c6808
 */


void FUN__text__003c6808(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2 - 1;
  if ((((10 < (uVar1 & 0xff)) || ((0x7dfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) ||
      (*(long *)(param_1 + 0x68) == 0)) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) {
    return;
  }
  uVar4 = *(undefined8 *)(*(long *)((long)(char)uVar1 * 8 + 0x73a878) * 8 + 0x883df8);
  plVar2 = (long *)FUN__text__003e7418(*(undefined8 *)(param_1 + 0x170),uVar4);
  lVar3 = (**(code **)(*plVar2 + 0x38))();
  if (lVar3 != 0) {
    FUN__text__003e7434(*(undefined8 *)(param_1 + 0x170),plVar2,uVar4);
  }
  lVar3 = (**(code **)(*param_3 + 0x58))(param_3,0);
  *(long **)(*(long *)(lVar3 + 0x18) + 8) = plVar2;
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170));
  return;
}


