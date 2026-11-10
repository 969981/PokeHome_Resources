/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059bc68; name: FUN_.text__0059bc68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__0059bc68(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                   float param_5,float param_6,undefined1 param_7 [16],float param_8)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_s21;
  float fVar17;
  float in_s22;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0.0 <= param_8) {
    if (param_8 <= 0.70710677) {
      fVar18 = 1.0 - param_8 * param_8;
      fVar2 = SQRT(fVar18);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar18);
        in_s22 = 0.5;
      }
      param_8 = param_8 / fVar2;
      fVar2 = *_DAT_008a5560;
      fVar13 = _DAT_008a5560[1];
      fVar12 = _DAT_008a5560[2];
      fVar14 = _DAT_008a5560[3];
      fVar18 = param_8 * param_8;
      fVar11 = _DAT_008a5560[4];
      fVar15 = _DAT_008a5560[5];
      fVar10 = _DAT_008a5560[6];
      fVar16 = _DAT_008a5560[7];
      fVar18 = param_8 * (fVar18 * ((fVar10 + fVar18 * ((fVar11 + fVar18 * ((fVar12 + fVar18 * (
                                                  fVar2 * fVar18 - fVar13)) * fVar18 - fVar14)) *
                                                  fVar18 - fVar15)) * fVar18 - fVar16) + 1.0);
    }
    else {
      fVar2 = 1.0 - param_8 * param_8;
      fVar18 = *_DAT_008a51c0;
      fVar21 = SQRT(fVar2);
      if (NAN(fVar21)) {
        fVar21 = sqrtf(fVar2);
        in_s22 = 0.5;
      }
      fVar21 = fVar21 / param_8;
      fVar2 = *_DAT_008a5560;
      fVar13 = _DAT_008a5560[1];
      fVar12 = _DAT_008a5560[2];
      fVar14 = _DAT_008a5560[3];
      fVar20 = fVar21 * fVar21;
      fVar11 = _DAT_008a5560[4];
      fVar15 = _DAT_008a5560[5];
      fVar10 = _DAT_008a5560[6];
      fVar16 = _DAT_008a5560[7];
      fVar18 = fVar18 - fVar21 * (fVar20 * ((fVar10 + fVar20 * ((fVar11 + fVar20 * ((fVar12 + fVar20
                                                                                              * (
                                                  fVar2 * fVar20 - fVar13)) * fVar20 - fVar14)) *
                                                  fVar20 - fVar15)) * fVar20 - fVar16) + 1.0);
    }
  }
  else if (-0.70710677 <= param_8) {
    fVar2 = 1.0 - param_8 * param_8;
    fVar18 = SQRT(fVar2);
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar2);
      in_s22 = 0.5;
    }
    fVar18 = -param_8 / fVar18;
    fVar2 = *_DAT_008a5560;
    fVar13 = _DAT_008a5560[1];
    fVar21 = fVar18 * fVar18;
    fVar12 = _DAT_008a5560[2];
    fVar14 = _DAT_008a5560[3];
    fVar11 = _DAT_008a5560[4];
    fVar15 = _DAT_008a5560[5];
    fVar10 = _DAT_008a5560[6];
    fVar16 = _DAT_008a5560[7];
    fVar18 = -((fVar21 * ((fVar10 + fVar21 * ((fVar11 + fVar21 * ((fVar12 + fVar21 * (fVar2 * fVar21
                                                                                     - fVar13)) *
                                                                  fVar21 - fVar14)) * fVar21 -
                                             fVar15)) * fVar21 - fVar16) + 1.0) * fVar18);
  }
  else {
    fVar10 = 1.0 - param_8 * param_8;
    fVar18 = *_DAT_008a51c0;
    fVar2 = SQRT(fVar10);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar10);
      in_s22 = 0.5;
    }
    param_8 = -fVar2 / param_8;
    fVar2 = *_DAT_008a5560;
    fVar13 = _DAT_008a5560[1];
    fVar12 = _DAT_008a5560[2];
    fVar14 = _DAT_008a5560[3];
    fVar21 = param_8 * param_8;
    fVar11 = _DAT_008a5560[4];
    fVar15 = _DAT_008a5560[5];
    fVar10 = _DAT_008a5560[6];
    fVar16 = _DAT_008a5560[7];
    fVar18 = param_8 * (fVar21 * ((fVar10 + fVar21 * ((fVar11 + fVar21 * ((fVar12 + fVar21 * (fVar2 
                                                  * fVar21 - fVar13)) * fVar21 - fVar14)) * fVar21 -
                                                  fVar15)) * fVar21 - fVar16) + 1.0) - fVar18;
  }
  fVar21 = in_s22 - param_6 * param_6;
  fVar19 = param_6 * param_3 + param_4 * param_5;
  fVar20 = fVar21 + param_4 * in_s21;
  if ((fVar20 != 0.0) || (fVar17 = 0.0, fVar19 != 0.0)) {
    if (0.0 <= fVar20) {
      if (0.0 <= fVar19) {
        if (fVar20 < fVar19) {
          fVar17 = *_DAT_008a51c0;
          goto LAB__text__0059c0fc;
        }
        fVar19 = fVar19 / fVar20;
        fVar20 = fVar19 * fVar19;
        fVar17 = fVar19 * (fVar20 * ((fVar10 + fVar20 * ((fVar11 + fVar20 * ((fVar12 + fVar20 * (
                                                  fVar2 * fVar20 - fVar13)) * fVar20 - fVar14)) *
                                                  fVar20 - fVar15)) * fVar20 - fVar16) + 1.0);
      }
      else {
        fVar19 = -fVar19;
        if (fVar19 <= fVar20) {
          fVar19 = fVar19 / fVar20;
          fVar20 = fVar19 * fVar19;
          fVar17 = -((fVar20 * ((fVar10 + fVar20 * ((fVar11 + fVar20 * ((fVar12 + fVar20 * (fVar2 * 
                                                  fVar20 - fVar13)) * fVar20 - fVar14)) * fVar20 -
                                                  fVar15)) * fVar20 - fVar16) + 1.0) * fVar19);
        }
        else {
          fVar20 = fVar20 / fVar19;
          fVar19 = fVar20 * fVar20;
          fVar17 = fVar20 * (fVar19 * ((fVar10 + fVar19 * ((fVar11 + fVar19 * ((fVar12 + fVar19 * (
                                                  fVar2 * fVar19 - fVar13)) * fVar19 - fVar14)) *
                                                  fVar19 - fVar15)) * fVar19 - fVar16) + 1.0) -
                   *_DAT_008a51c0;
        }
      }
    }
    else if (0.0 <= fVar19) {
      fVar20 = -fVar20;
      if (fVar19 <= fVar20) {
        fVar19 = fVar19 / fVar20;
        fVar20 = fVar19 * fVar19;
        fVar17 = *_DAT_008a02c8 -
                 fVar19 * (fVar20 * (-fVar16 +
                                    fVar20 * (fVar10 + fVar20 * (-fVar15 +
                                                                fVar20 * (fVar11 + fVar20 * (-fVar14
                                                                                            + fVar20
                                                                                              * (
                                                  fVar12 + fVar20 * (-fVar13 + fVar20 * fVar2)))))))
                          + 1.0);
      }
      else {
        fVar20 = fVar20 / fVar19;
        fVar19 = fVar20 * fVar20;
        fVar17 = fVar20 * (fVar19 * (-fVar16 +
                                    fVar19 * (fVar10 + fVar19 * (-fVar15 +
                                                                fVar19 * (fVar11 + fVar19 * (-fVar14
                                                                                            + fVar19
                                                                                              * (
                                                  fVar12 + fVar19 * (-fVar13 + fVar19 * fVar2)))))))
                          + 1.0) + *_DAT_008a51c0;
      }
    }
    else if (fVar20 <= fVar19) {
      fVar19 = fVar19 / fVar20;
      fVar20 = fVar19 * fVar19;
      fVar17 = fVar19 * (fVar20 * ((fVar10 + fVar20 * ((fVar11 + fVar20 * ((fVar12 + fVar20 * (fVar2
                                                                                               * 
                                                  fVar20 - fVar13)) * fVar20 - fVar14)) * fVar20 -
                                                  fVar15)) * fVar20 - fVar16) + 1.0) -
               *_DAT_008a02c8;
    }
    else {
      fVar17 = -*_DAT_008a51c0;
LAB__text__0059c0fc:
      fVar20 = fVar20 / fVar19;
      fVar19 = fVar20 * fVar20;
      fVar17 = fVar17 - fVar20 * (fVar19 * ((fVar10 + fVar19 * ((fVar11 + fVar19 * ((fVar12 + fVar19
                                                                                              * (
                                                  fVar2 * fVar19 - fVar13)) * fVar19 - fVar14)) *
                                                  fVar19 - fVar15)) * fVar19 - fVar16) + 1.0);
    }
  }
  fVar20 = param_6 * param_4 + param_3 * param_5;
  fVar21 = fVar21 - param_3 * param_3;
  if ((fVar21 == 0.0) && (fVar20 == 0.0)) {
    auVar3._4_4_ = fVar17;
    auVar3._0_4_ = fVar18;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if (0.0 <= fVar21) {
    if (fVar20 < 0.0) {
      fVar20 = -fVar20;
      if (fVar20 <= fVar21) {
        fVar20 = fVar20 / fVar21;
        fVar21 = fVar20 * fVar20;
        auVar7._4_4_ = fVar17;
        auVar7._0_4_ = fVar18;
        auVar7._8_4_ = -((fVar21 * ((fVar10 + fVar21 * ((fVar11 + fVar21 * ((fVar12 + fVar21 * (
                                                  fVar2 * fVar21 - fVar13)) * fVar21 - fVar14)) *
                                                  fVar21 - fVar15)) * fVar21 - fVar16) + 1.0) *
                        fVar20);
        auVar7._12_4_ = 0;
        return auVar7;
      }
      fVar20 = fVar21 / fVar20;
      pfVar1 = _DAT_008a51c0;
      goto LAB__text__0059c4e4;
    }
    if (fVar20 <= fVar21) {
      fVar20 = fVar20 / fVar21;
      fVar21 = fVar20 * fVar20;
      auVar9._4_4_ = fVar17;
      auVar9._0_4_ = fVar18;
      auVar9._8_4_ = fVar20 * (fVar21 * ((fVar10 + fVar21 * ((fVar11 + fVar21 * ((fVar12 + fVar21 * 
                                                  (fVar2 * fVar21 - fVar13)) * fVar21 - fVar14)) *
                                                  fVar21 - fVar15)) * fVar21 - fVar16) + 1.0);
      auVar9._12_4_ = 0;
      return auVar9;
    }
    fVar19 = *_DAT_008a51c0;
  }
  else {
    if (0.0 <= fVar20) {
      fVar21 = -fVar21;
      if (fVar20 <= fVar21) {
        fVar20 = fVar20 / fVar21;
        fVar21 = fVar20 * fVar20;
        auVar8._4_4_ = fVar17;
        auVar8._0_4_ = fVar18;
        auVar8._8_4_ = *_DAT_008a02c8 -
                       fVar20 * (fVar21 * (-fVar16 +
                                          fVar21 * (fVar10 + fVar21 * (-fVar15 +
                                                                      fVar21 * (fVar11 + fVar21 * (-
                                                  fVar14 + fVar21 * (fVar12 + fVar21 * (-fVar13 +
                                                                                       fVar21 * 
                                                  fVar2))))))) + 1.0);
        auVar8._12_4_ = 0;
        return auVar8;
      }
      fVar21 = fVar21 / fVar20;
      fVar20 = fVar21 * fVar21;
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar18;
      auVar4._8_4_ = fVar21 * (fVar20 * (-fVar16 +
                                        fVar20 * (fVar10 + fVar20 * (-fVar15 +
                                                                    fVar20 * (fVar11 + fVar20 * (-
                                                  fVar14 + fVar20 * (fVar12 + fVar20 * (-fVar13 +
                                                                                       fVar20 * 
                                                  fVar2))))))) + 1.0) + *_DAT_008a51c0;
      auVar4._12_4_ = 0;
      return auVar4;
    }
    if (fVar21 <= fVar20) {
      fVar20 = fVar20 / fVar21;
      pfVar1 = _DAT_008a02c8;
LAB__text__0059c4e4:
      fVar21 = fVar20 * fVar20;
      auVar6._4_4_ = fVar17;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar20 * (fVar21 * ((fVar10 + fVar21 * ((fVar11 + fVar21 * ((fVar12 + fVar21 * 
                                                  (fVar2 * fVar21 - fVar13)) * fVar21 - fVar14)) *
                                                  fVar21 - fVar15)) * fVar21 - fVar16) + 1.0) -
                     *pfVar1;
      auVar6._12_4_ = 0;
      return auVar6;
    }
    fVar19 = -*_DAT_008a51c0;
  }
  fVar21 = fVar21 / fVar20;
  fVar20 = fVar21 * fVar21;
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar18;
  auVar5._8_4_ = fVar19 - fVar21 * (fVar20 * ((fVar10 + fVar20 * ((fVar11 + fVar20 * ((fVar12 + 
                                                  fVar20 * (fVar2 * fVar20 - fVar13)) * fVar20 -
                                                  fVar14)) * fVar20 - fVar15)) * fVar20 - fVar16) +
                                   1.0);
  auVar5._12_4_ = 0;
  return auVar5;
}


