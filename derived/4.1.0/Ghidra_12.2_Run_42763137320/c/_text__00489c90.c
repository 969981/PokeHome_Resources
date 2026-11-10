/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489c90; name: FUN_.text__00489c90
 */


void FUN__text__00489c90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar2 <= 0.0) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar2);
    fVar1 = fVar2 * fVar1;
    fVar4 = -(fVar4 * fVar2);
    fVar2 = fVar2 * fVar5;
    fVar5 = fVar1 * fVar1 + fVar4 * fVar4;
    if (1.1920929e-07 < fVar5) {
      fVar5 = SQRT(fVar5);
      param_2[8] = fVar2;
      fVar3 = 1.0 - fVar2;
      fVar4 = (1.0 / fVar5) * fVar4;
      fVar1 = (1.0 / fVar5) * fVar1;
      fVar6 = fVar4 * fVar3 * fVar1;
      param_2[2] = -(fVar1 * fVar5);
      param_2[3] = fVar6;
      param_2[4] = fVar2 + fVar3 * fVar1 * fVar1;
      param_2[5] = fVar4 * fVar5;
      *param_2 = fVar2 + fVar3 * fVar4 * fVar4;
      param_2[1] = fVar6;
      param_2[6] = fVar1 * fVar5;
      param_2[7] = -(fVar4 * fVar5);
      return;
    }
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    if (fVar2 < 0.0) {
      param_2[4] = -1.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[8] = -1.0;
      return;
    }
  }
  param_2[4] = 1.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  return;
}


