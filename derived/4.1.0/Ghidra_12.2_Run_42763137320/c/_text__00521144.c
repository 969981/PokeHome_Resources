/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521144; name: FUN_.text__00521144
 */


float FUN__text__00521144(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                         double *param_5)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)FUN__text__00520f94();
  fVar1 = SQRT((float)(dVar2 - *param_5) * (float)(dVar2 - *param_5) +
               (float)(param_2 - param_5[1]) * (float)(param_2 - param_5[1]) +
               (float)(param_3 - param_5[2]) * (float)(param_3 - param_5[2]));
  if (fVar1 == 0.0) {
    return 3.1415927;
  }
  fVar1 = atanf(SQRT(*(float *)(param_4 + 0x3c) * 1.2732395 * *(float *)(param_4 + 0x40)) / fVar1);
  return fVar1 + fVar1;
}


