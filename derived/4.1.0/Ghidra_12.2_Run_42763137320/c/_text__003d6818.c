/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6818; name: FUN_.text__003d6818
 */


void FUN__text__003d6818(long *param_1)

{
  long lVar1;
  
  if ((*(int *)((long)param_1 + 0x3c) == 0) &&
     (lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[5],param_1[6]), lVar1 != 0)) {
    param_1[1] = param_1[1] + param_1[3];
    param_1[2] = 0;
    param_1[3] = lVar1;
    param_1[4] = -1;
    return;
  }
  return;
}


