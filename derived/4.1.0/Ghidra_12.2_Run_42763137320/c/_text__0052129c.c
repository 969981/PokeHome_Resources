/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052129c; name: FUN_.text__0052129c
 */


undefined1  [16] FUN__text__0052129c(double *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *param_1 +
                 (double)(*(float *)(param_1 + 3) * *param_2 +
                          param_2[1] * *(float *)((long)param_1 + 0x24) +
                         param_2[2] * *(float *)(param_1 + 6));
  auVar1._8_8_ = 0;
  return auVar1;
}


