/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1d60; name: FUN_.text__006c1d60
 */


void FUN__text__006c1d60(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  *(int *)(param_4 + 1) = (int)param_1;
  *(int *)((long)param_4 + 0xc) = (int)param_2;
  *param_3 = 0;
  *(float *)(param_3 + 1) = param_1;
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


