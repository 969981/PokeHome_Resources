/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520ce4; name: FUN_.text__00520ce4
 */


bool FUN__text__00520ce4(long param_1,double *param_2,double *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  
  dVar21 = *(double *)(param_1 + 0x5a0);
  dVar23 = *(double *)(param_1 + 0x5a8);
  dVar6 = *param_2;
  dVar8 = param_2[1];
  dVar10 = param_2[2];
  dVar19 = *(double *)(param_1 + 0x598);
  fVar17 = (float)(dVar10 - dVar23);
  fVar4 = *(float *)(param_1 + 0x5cc);
  fVar14 = (float)(dVar6 - dVar19);
  fVar15 = (float)(dVar8 - dVar21);
  fVar3 = *(float *)(param_1 + 0x5c8);
  fVar2 = *(float *)(param_1 + 0x5d0);
  fVar13 = fVar3 * fVar14 + fVar15 * fVar4 + fVar17 * fVar2;
  fVar1 = fVar13 * (fVar3 * (float)(*param_3 - dVar19) + (float)(param_3[1] - dVar21) * fVar4 +
                   (float)(param_3[2] - dVar23) * fVar2);
  if (0.0 < fVar1) {
    fVar17 = fVar13 * -2.0;
    dVar6 = dVar6 + (double)(fVar17 * fVar3);
    dVar8 = dVar8 + (double)(fVar17 * fVar4);
    dVar10 = dVar10 + (double)(fVar17 * fVar2);
    fVar14 = (float)(dVar6 - dVar19);
    fVar15 = (float)(dVar8 - dVar21);
    fVar17 = (float)(dVar10 - dVar23);
  }
  fVar20 = *(float *)(param_1 + 0x5d4);
  fVar18 = *(float *)(param_1 + 0x5d8);
  fVar12 = *(float *)(param_1 + 0x44);
  fVar5 = (float)(*param_3 - dVar6);
  fVar7 = (float)(param_3[1] - dVar8);
  fVar9 = (float)(param_3[2] - dVar10);
  fVar24 = -fVar20;
  fVar22 = -fVar18;
  fVar13 = ABS(fVar13 / ABS(fVar3 * fVar5 + fVar7 * fVar4 + fVar9 * fVar2));
  fVar14 = fVar14 + fVar5 * fVar13;
  fVar15 = fVar15 + fVar7 * fVar13;
  fVar17 = fVar17 + fVar9 * fVar13;
  fVar5 = fVar14 * *(float *)(param_1 + 0x5b0) + *(float *)(param_1 + 0x5b4) * fVar15 +
          *(float *)(param_1 + 0x5b8) * fVar17;
  fVar7 = fVar14 * *(float *)(param_1 + 0x5bc) + *(float *)(param_1 + 0x5c0) * fVar15 +
          *(float *)(param_1 + 0x5c4) * fVar17;
  fVar9 = (float)NEON_fminnm(fVar5,fVar20);
  fVar13 = fVar24;
  if (fVar24 <= fVar5) {
    fVar13 = fVar9;
  }
  fVar11 = (float)NEON_fminnm(fVar7,fVar18);
  fVar9 = fVar22;
  if (fVar22 <= fVar7) {
    fVar9 = fVar11;
  }
  fVar11 = fVar13;
  fVar16 = fVar9;
  if (0.0 < fVar1) {
    if (fVar18 - ABS(fVar9) <= fVar20 - ABS(fVar13)) {
      if ((fVar18 - ABS(fVar9) < fVar20 - ABS(fVar13)) && (fVar16 = fVar18, fVar9 < 0.0)) {
        fVar16 = fVar22;
      }
    }
    else {
      if (fVar13 < 0.0) {
        fVar20 = fVar24;
      }
      fVar11 = fVar20;
    }
  }
  dVar6 = *(double *)(param_1 + 0x598);
  dVar8 = *(double *)(param_1 + 0x5a8);
  param_4[1] = *(double *)(param_1 + 0x5a0);
  param_4[2] = dVar8;
  *param_4 = dVar6;
  fVar2 = fVar14 * fVar3 + fVar4 * fVar15 + fVar2 * fVar17;
  fVar3 = (float)NEON_fminnm(fVar2,fVar12);
  dVar6 = *param_4 + (double)(*(float *)(param_1 + 0x5b0) * fVar11);
  dVar8 = param_4[1] + (double)(*(float *)(param_1 + 0x5b4) * fVar11);
  dVar10 = param_4[2] + (double)(*(float *)(param_1 + 0x5b8) * fVar11);
  param_4[2] = dVar10;
  *param_4 = dVar6;
  param_4[1] = dVar8;
  dVar6 = dVar6 + (double)(*(float *)(param_1 + 0x5bc) * fVar16);
  dVar8 = dVar8 + (double)(*(float *)(param_1 + 0x5c0) * fVar16);
  dVar10 = dVar10 + (double)(*(float *)(param_1 + 0x5c4) * fVar16);
  fVar12 = -fVar12;
  *param_4 = dVar6;
  param_4[1] = dVar8;
  param_4[2] = dVar10;
  fVar4 = *(float *)(param_1 + 0x5cc);
  fVar17 = *(float *)(param_1 + 0x5d0);
  if (fVar12 <= fVar2) {
    fVar12 = fVar3;
  }
  *param_4 = dVar6 + (double)(*(float *)(param_1 + 0x5c8) * fVar12);
  param_4[1] = dVar8 + (double)(fVar4 * fVar12);
  param_4[2] = dVar10 + (double)(fVar17 * fVar12);
  return 0.0 < fVar1 || (fVar12 != fVar2 || (fVar9 != fVar7 || fVar13 != fVar5));
}


