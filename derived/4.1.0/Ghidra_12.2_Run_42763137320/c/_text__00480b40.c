/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00480b40; name: FUN_.text__00480b40
 */


void FUN__text__00480b40(long param_1,long param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  if (*(long *)(param_1 + 0x98) == 0) {
    fVar1 = *(float *)(param_2 + 0x30);
  }
  else {
    fVar2 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
    fVar1 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
    fVar3 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  }
  if (fVar1 <= 0.0) {
    return;
  }
  fVar4 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
  fVar5 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
  fVar7 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
  fVar3 = *(float *)(param_1 + 0x3c) * fVar4 + fVar5 * *(float *)(param_1 + 0x40) +
          fVar7 * *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48) * fVar4 + fVar5 * *(float *)(param_1 + 0x4c) +
          fVar7 * *(float *)(param_1 + 0x50);
  fVar4 = *(float *)(param_1 + 0x54) * fVar4 + fVar5 * *(float *)(param_1 + 0x58) +
          fVar7 * *(float *)(param_1 + 0x5c);
  if (fVar4 != 0.0) {
    fVar5 = fVar3 / fVar4;
    fVar1 = (float)NEON_fminnm(fVar2 / fVar1,0x3f800000);
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    fVar7 = ABS(fVar1);
    fVar8 = fVar5 / (fVar5 * fVar5 + 0.28);
    fVar2 = 1.5707964 - fVar8;
    if (fVar3 < 0.0) {
      fVar2 = -1.5707964 - fVar8;
    }
    fVar6 = fVar5 / (fVar5 * fVar5 * 0.28 + 1.0);
    fVar8 = fVar6 + 3.1415927;
    if (fVar3 < 0.0) {
      fVar8 = fVar6 + -3.1415927;
    }
    if (fVar4 < 0.0) {
      fVar6 = fVar8;
    }
    if (ABS(fVar5) < 1.0) {
      fVar2 = fVar6;
    }
    *param_3 = fVar2;
    fVar2 = fVar7 * (fVar7 * (fVar7 * (fVar7 * (fVar7 * (fVar7 * 84.31466 + -242.71996) + 262.81305)
                                      + -131.11235) + 29.66154) + -1.4518384) + 0.0328437;
    if (fVar1 < 0.0) {
      fVar2 = -fVar2;
    }
    *param_4 = fVar2;
    return;
  }
  if (fVar3 == 0.0) {
    fVar1 = 1.5707964;
    *param_3 = 0.0;
    if (fVar2 <= 0.0) {
      fVar1 = -1.5707964;
    }
    fVar3 = 0.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar1;
    }
    *param_4 = fVar3;
    return;
  }
  fVar4 = 1.5707964;
  if (fVar3 <= 0.0) {
    fVar4 = -1.5707964;
  }
  *param_3 = fVar4;
  fVar1 = (float)NEON_fminnm(fVar2 / fVar1,0x3f800000);
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  fVar2 = ABS(fVar1);
  fVar2 = fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * 84.31466 + -242.71996) + 262.81305) +
                                    -131.11235) + 29.66154) + -1.4518384) + 0.0328437;
  if (fVar1 < 0.0) {
    fVar2 = -fVar2;
  }
  *param_4 = fVar2;
  return;
}


