/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055e72c; name: FUN_.text__0055e72c
 */


void FUN__text__0055e72c(float param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                        uint param_5)

{
  float fVar1;
  
  param_3[1] = param_1;
  *param_3 = param_4;
  fVar1 = exp2f(param_1 * 0.04643856);
  param_3[5] = param_2;
  fVar1 = fVar1 * 4.0 + -3.0;
  param_3[3] = fVar1;
  if ((param_5 & 1) != 0) {
    param_3[2] = param_1;
    param_3[4] = fVar1;
    param_3[6] = param_2;
  }
  return;
}


