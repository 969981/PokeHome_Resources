/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055f1e0; name: FUN_.text__0055f1e0
 */


void FUN__text__0055f1e0(float param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 0.0) {
    param_2[4] = 0.0;
  }
  else {
    if (param_1 <= 50.0) {
      fVar1 = 1.4013e-45;
    }
    else {
      fVar1 = 2.8026e-45;
    }
    param_2[4] = fVar1;
  }
  fVar2 = (float)NEON_fminnm(param_1,0x42480000);
  fVar1 = param_1 * 0.02 + -1.0;
  fVar2 = fVar2 * 0.02 + -1.0;
  param_2[2] = fVar1;
  *param_2 = fVar2;
  if ((param_3 & 1) != 0) {
    param_2[1] = fVar2;
    param_2[3] = fVar1;
  }
  return;
}


