/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048b510; name: FUN_.text__0048b510
 */


void FUN__text__0048b510(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * -1.2 + 1.0;
  if (0.5 <= param_2) {
    fVar2 = 0.8 - param_2 * 0.8;
  }
  fVar1 = 1.0 - fVar2;
  param_3[4] = SQRT(fVar2 * param_1);
  *param_3 = SQRT(fVar1 * (0.6666667 - param_1 * 0.6666667));
  param_3[1] = SQRT(fVar1 * param_1 * 0.6666667);
  param_3[2] = SQRT(fVar1 * 0.33333334);
  param_3[3] = SQRT(fVar2 - fVar2 * param_1);
  return;
}


