/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005473c0; name: FUN_.text__005473c0
 */


bool FUN__text__005473c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar4 = param_1[2];
  fVar3 = *param_2 * fVar1 + fVar2 * param_2[1] + fVar4 * param_2[2];
  fVar5 = *param_3 * fVar1 + fVar2 * param_3[1] + fVar4 * param_3[2];
  fVar6 = *param_4 * fVar1 + fVar2 * param_4[1] + fVar4 * param_4[2];
  uVar7 = NEON_fminnm(fVar5,fVar6);
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar6 = (float)NEON_fminnm(fVar3,uVar7);
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  fVar5 = *param_5 * ABS(fVar1) + ABS(fVar2) * param_5[1] + ABS(fVar4) * param_5[2];
  return -fVar5 <= fVar3 && fVar6 <= fVar5;
}


