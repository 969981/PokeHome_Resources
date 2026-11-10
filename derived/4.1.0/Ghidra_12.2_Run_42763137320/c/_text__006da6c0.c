/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006da6c0; name: FUN_.text__006da6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006da6c0(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar3 = *param_2;
  fVar12 = param_2[1];
  fVar15 = *_DAT_008a51b0;
  fVar4 = 0.5;
  if (fVar3 < 0.0) {
    fVar4 = -0.5;
  }
  fVar17 = *_DAT_008a51c0;
  fVar16 = -*_DAT_008a51b8;
  fVar13 = -fVar17;
  fVar3 = fVar3 - (float)(int)(fVar4 + fVar15 * fVar3) * *_DAT_008a51b8;
  if (fVar3 <= fVar17) {
    fVar23 = -*_DAT_008a02c8 - fVar3;
    fVar5 = _DAT_008a51c8[4];
    fVar10 = *_DAT_008a51c8;
    fVar11 = _DAT_008a51c8[1];
    fVar4 = fVar23;
    if (fVar13 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar9 = _DAT_008a51c8[2];
    fVar7 = _DAT_008a51c8[3];
    if (fVar13 <= fVar3) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = -1.0;
      fVar3 = fVar23;
    }
  }
  else {
    fVar4 = *_DAT_008a02c8 - fVar3;
    fVar6 = -1.0;
    fVar10 = *_DAT_008a51c8;
    fVar11 = _DAT_008a51c8[1];
    fVar9 = _DAT_008a51c8[2];
    fVar7 = _DAT_008a51c8[3];
    fVar5 = _DAT_008a51c8[4];
    fVar3 = fVar4;
  }
  fVar23 = param_2[2];
  fVar24 = *_DAT_008a02c8;
  fVar8 = 0.5;
  if (fVar12 < 0.0) {
    fVar8 = -0.5;
  }
  fVar12 = fVar12 + (float)(int)(fVar8 + fVar15 * fVar12) * fVar16;
  if (fVar12 <= fVar17) {
    if (fVar13 <= fVar12) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -1.0;
      fVar12 = -fVar24 - fVar12;
    }
  }
  else {
    fVar8 = -1.0;
    fVar12 = fVar24 - fVar12;
  }
  fVar21 = *_DAT_008a51d0;
  fVar22 = _DAT_008a51d0[1];
  fVar20 = _DAT_008a51d0[2];
  fVar19 = _DAT_008a51d0[3];
  fVar18 = 0.5;
  if (fVar23 < 0.0) {
    fVar18 = -0.5;
  }
  fVar14 = _DAT_008a51d0[4];
  fVar23 = fVar23 + (float)(int)(fVar18 + fVar15 * fVar23) * fVar16;
  if (fVar23 <= fVar17) {
    if (fVar13 <= fVar23) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = -1.0;
      fVar23 = -fVar24 - fVar23;
    }
  }
  else {
    fVar15 = -1.0;
    fVar23 = fVar24 - fVar23;
  }
  fVar3 = fVar3 * fVar3;
  fVar17 = fVar4 * fVar4;
  fVar16 = fVar23 * fVar23;
  fVar24 = fVar23 * fVar23;
  fVar13 = fVar12 * fVar12;
  fVar18 = fVar12 * fVar12;
  fVar13 = fVar13 * ((fVar7 + fVar13 * ((fVar11 - fVar13 * fVar10) * fVar13 - fVar9)) * fVar13 -
                    fVar5) + 1.0;
  fVar6 = fVar6 * (fVar3 * ((fVar19 + fVar3 * ((fVar22 - fVar3 * fVar21) * fVar3 - fVar20)) * fVar3
                           - fVar14) + 1.0);
  fVar4 = fVar4 * (fVar17 * ((fVar7 + fVar17 * ((fVar11 - fVar17 * fVar10) * fVar17 - fVar9)) *
                             fVar17 - fVar5) + 1.0);
  fVar15 = fVar15 * (fVar16 * ((fVar19 + fVar16 * ((fVar22 - fVar16 * fVar21) * fVar16 - fVar20)) *
                               fVar16 - fVar14) + 1.0);
  fVar8 = fVar8 * (fVar18 * ((fVar19 + fVar18 * ((fVar22 - fVar18 * fVar21) * fVar18 - fVar20)) *
                             fVar18 - fVar14) + 1.0);
  fVar23 = fVar23 * (fVar24 * ((fVar7 + fVar24 * ((fVar11 - fVar24 * fVar10) * fVar24 - fVar9)) *
                               fVar24 - fVar5) + 1.0);
  fVar3 = fVar12 * fVar13;
  param_1[1] = (ulong)(uint)-(fVar12 * fVar13);
  *param_1 = CONCAT44(fVar8 * fVar23,fVar8 * fVar15);
  param_1[3] = (ulong)(uint)(fVar4 * fVar8);
  param_1[2] = CONCAT44(fVar6 * fVar15 + fVar3 * fVar4 * fVar23,
                        fVar4 * fVar15 * fVar3 - fVar6 * fVar23);
  uVar2 = uRam0000000000724938;
  uVar1 = _DAT_00724930;
  param_1[5] = (ulong)(uint)(fVar6 * fVar8);
  param_1[4] = CONCAT44(fVar6 * fVar23 * fVar3 - fVar4 * fVar15,
                        fVar4 * fVar23 + fVar3 * fVar6 * fVar15);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}


