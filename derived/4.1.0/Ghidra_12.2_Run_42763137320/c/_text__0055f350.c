/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055f350; name: FUN_.text__0055f350
 */


void FUN__text__0055f350(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1[1];
  if (param_3 == 0) {
    *param_1 = *param_1;
    param_1[1] = fVar3;
    return;
  }
  fVar5 = param_1[2];
  pfVar1 = param_2;
  fVar4 = *param_1;
  do {
    fVar6 = *pfVar1;
    fVar3 = (fVar6 - fVar4) + fVar5 * fVar3;
    pfVar2 = pfVar1 + 1;
    *pfVar1 = fVar3;
    pfVar1 = pfVar2;
    fVar4 = fVar6;
  } while (pfVar2 < param_2 + param_3);
  *param_1 = fVar6;
  param_1[1] = fVar3;
  return;
}


