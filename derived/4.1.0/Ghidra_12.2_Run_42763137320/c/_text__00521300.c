/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521300; name: FUN_.text__00521300
 */


float FUN__text__00521300(double *param_1,double *param_2)

{
  return *(float *)(param_1 + 3) * (float)(*param_2 - *param_1) +
         (float)(param_2[1] - param_1[1]) * *(float *)((long)param_1 + 0x1c) +
         (float)(param_2[2] - param_1[2]) * *(float *)(param_1 + 4);
}


