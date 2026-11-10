/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe878; name: FUN_.text__003fe878
 */


short FUN__text__003fe878(long param_1,long param_2)

{
  long *plVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_2 + 0x24) + -1;
  *(short *)(param_2 + 0x24) = sVar2;
  if (sVar2 != 0) {
    return sVar2;
  }
  if (*(int *)(param_2 + 0x20) == -1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c);
    FUN__text__003ff460(param_1 + 0x38,*(int *)(param_2 + 8) - *(int *)(param_1 + 0x338),
                        *(undefined4 *)(param_2 + 0x1c));
    FUN__text__00400fc0(7,param_2);
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    plVar1 = (long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x360));
  return 0;
}


