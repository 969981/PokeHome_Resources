/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d0ed4; name: FUN_.text__003d0ed4
 */


void FUN__text__003d0ed4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        int param_5)

{
  long *plVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) {
    return;
  }
  plVar1 = (long *)FUN__text__003e7418(*(undefined8 *)(param_1 + 0x170));
  lVar2 = (**(code **)(*plVar1 + 0x38))();
  if (lVar2 != 0) {
    FUN__text__003e7434(*(undefined8 *)(param_1 + 0x170),plVar1,param_2);
  }
  lVar2 = (**(code **)(*param_3 + 0x58))(param_3,0);
  *(long **)(*(long *)(lVar2 + 0x18) + (long)param_5 * 0x10 + 8) = plVar1;
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170));
  return;
}


