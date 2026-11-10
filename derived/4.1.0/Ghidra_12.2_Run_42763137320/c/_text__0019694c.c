/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019694c; name: FUN_.text__0019694c
 */


bool FUN__text__0019694c(float param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = fVar3 - param_3[1];
  fVar5 = fVar2 - *param_3;
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5;
  bVar1 = fVar6 <= param_1 * param_1;
  if (fVar6 > 0.0001 && !bVar1) {
    fVar2 = *param_3 + param_1 * (fVar5 / SQRT(fVar6));
    fVar3 = param_3[1] + param_1 * (fVar4 / SQRT(fVar6));
  }
  *param_2 = fVar2;
  param_2[1] = fVar3;
  return fVar6 <= 0.0001 || bVar1;
}


