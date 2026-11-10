/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048b4b0; name: FUN_.text__0048b4b0
 */


void FUN__text__0048b4b0(float param_1,float param_2,float *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  
  *param_3 = SQRT((1.0 - param_1) * param_2);
  param_3[1] = SQRT(param_2 * param_1);
  bVar1 = (param_4 >> 2 & 1) != 0;
  if (bVar1) {
    param_3[2] = 0.0;
  }
  uVar2 = (uint)bVar1;
  param_3[uVar2 | 2] = SQRT((1.0 - param_2) * (1.0 - param_1));
  param_3[uVar2 + 3] = SQRT((1.0 - param_2) * param_1);
  return;
}


