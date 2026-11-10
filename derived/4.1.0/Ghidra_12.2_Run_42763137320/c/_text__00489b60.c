/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489b60; name: FUN_.text__00489b60
 */


void FUN__text__00489b60(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN__text__00489c90(param_1 + 6);
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar7 = param_1[3];
  fVar6 = fVar2 * fVar3 - fVar1 * fVar4;
  fVar8 = fVar5 * fVar4 - fVar7 * fVar2;
  fVar9 = fVar7 * fVar1 - fVar5 * fVar3;
  *param_3 = *param_2 * fVar6 + param_2[1] * fVar8 + fVar9 * param_2[2];
  param_3[1] = param_2[3] * fVar6 + fVar8 * param_2[4] + fVar9 * param_2[5];
  param_3[2] = param_2[6] * fVar6 + fVar8 * param_2[7] + fVar9 * param_2[8];
  param_3[3] = *param_2 * fVar7 + fVar3 * param_2[1] + fVar4 * param_2[2];
  param_3[4] = param_2[3] * fVar7 + fVar3 * param_2[4] + fVar4 * param_2[5];
  param_3[5] = param_2[6] * fVar7 + fVar3 * param_2[7] + fVar4 * param_2[8];
  param_3[6] = *param_2 * fVar5 + fVar1 * param_2[1] + fVar2 * param_2[2];
  param_3[7] = param_2[3] * fVar5 + fVar1 * param_2[4] + fVar2 * param_2[5];
  param_3[8] = param_2[6] * fVar5 + fVar1 * param_2[7] + fVar2 * param_2[8];
  return;
}


