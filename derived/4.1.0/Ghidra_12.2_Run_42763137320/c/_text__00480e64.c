/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00480e64; name: FUN_.text__00480e64
 */


void FUN__text__00480e64(long param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)(*(double *)(param_3 + 8) - *(double *)(param_1 + 0x80));
  fVar2 = (float)(*(double *)(param_3 + 6) - *(double *)(param_1 + 0x78));
  fVar5 = (float)(*(double *)(param_3 + 10) - *(double *)(param_1 + 0x88));
  fVar8 = fVar3 * fVar3;
  fVar7 = fVar2 * fVar2;
  fVar9 = fVar5 * fVar5;
  fVar6 = SQRT(fVar8 + fVar7 + fVar9);
  fVar4 = fVar6;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 8);
    if (*(short *)(lVar1 + 0x38) != 0) {
      lVar1 = *(long *)(lVar1 + 0x20);
      fVar9 = (float)(*(double *)(param_3 + 10) - *(double *)(lVar1 + 0x28));
      fVar7 = (float)(*(double *)(param_3 + 6) - *(double *)(lVar1 + 0x18));
      fVar8 = (float)(*(double *)(param_3 + 8) - *(double *)(lVar1 + 0x20));
      fVar9 = fVar9 * fVar9;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
    }
    fVar4 = SQRT(fVar8 + fVar9 + fVar7);
  }
  if (fVar6 <= 0.0) {
    fVar2 = 0.0;
    param_3[0xd] = 0.0;
  }
  else {
    fVar9 = (float)NEON_fminnm((-(param_3[2] * fVar5) - (*param_3 * fVar2 + fVar3 * param_3[1])) /
                               fVar6,0x3f800000);
    if (fVar9 <= -1.0) {
      fVar9 = -1.0;
    }
    fVar8 = ABS(fVar9);
    fVar8 = (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384) * fVar8;
    fVar7 = 1.5379527 - fVar8;
    if (fVar9 < 0.0) {
      fVar7 = fVar8 + 1.6036401;
    }
    param_3[0xd] = fVar7;
    fVar3 = (float)NEON_fminnm((*(float *)(param_1 + 0x60) * fVar2 +
                                fVar3 * *(float *)(param_1 + 100) +
                               fVar5 * *(float *)(param_1 + 0x68)) / fVar6,0x3f800000);
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar9 = ABS(fVar3);
    fVar9 = (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384) * fVar9;
    fVar2 = 1.5379527 - fVar9;
    if (fVar3 < 0.0) {
      fVar2 = fVar9 + 1.6036401;
    }
  }
  param_3[0xe] = fVar2;
  fVar2 = *(float *)(param_1 + 0x90);
  if (*(long *)(*(long *)(param_2 + 8) + 0x58) != *(long *)(*(long *)(param_1 + 8) + 0x58)) {
    fVar2 = *(float *)(param_2 + 0x78) * fVar2;
  }
  param_3[0x18] = fVar2;
  param_3[0xc] = fVar4 / fVar2;
  return;
}


