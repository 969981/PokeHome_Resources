/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ebe70; name: FUN_.text__004ebe70
 */


void FUN__text__004ebe70(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  plVar2 = (long *)param_1[6];
  while (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
    (**(code **)(lVar1 + 8))();
  }
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  FUN__text__004eb980(param_1);
  return;
}


