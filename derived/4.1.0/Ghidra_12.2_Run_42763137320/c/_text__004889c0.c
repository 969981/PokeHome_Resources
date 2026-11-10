/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004889c0; name: FUN_.text__004889c0
 */


void FUN__text__004889c0(undefined4 param_1,undefined8 *param_2,char param_3,byte param_4,
                        float *param_5,float *param_6)

{
  ulong uVar1;
  undefined1 (*pauVar2) [12];
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  float local_c0 [2];
  undefined8 uStack_b8;
  float afStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [2];
  undefined8 uStack_98;
  float local_90;
  float afStack_8c [5];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  if (param_3 == '\x01') {
    *param_2 = 0;
    param_2[1] = 0x3f800000;
    param_2[2] = 0x3f800000;
  }
  uVar3 = (uint)param_4;
  pfVar7 = local_c0 + (ulong)param_4 * -4;
  if (param_4 != 0) {
    uVar4 = (ulong)param_4;
    pfVar5 = (float *)((ulong)(uVar3 - 1) * 0x54 + 0x73c26c);
    pfVar6 = local_c0 + (ulong)param_4 * -4 + 2;
    do {
      fVar9 = pfVar5[-2];
      pfVar6[-1] = 0.0;
      uVar4 = uVar4 - 1;
      pfVar6[1] = 0.0;
      pfVar6[-2] = fVar9;
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 3;
      pfVar6 = pfVar6 + 4;
    } while (uVar4 != 0);
  }
  if ((param_4 & 3) == 0) {
    FUN__text__00489b60(param_2,&local_90,local_c0);
    fVar9 = (float)uVar3 + -1.0;
    if (uVar3 < 2) {
      fVar9 = 1.0;
    }
    if (param_4 != 0) {
      fVar16 = (float)NEON_fminnm(param_1,0x3f7ff972);
      if (fVar16 <= 0.0001) {
        fVar16 = 0.0001;
      }
      fVar18 = fVar16 * 1.5707964 + 1.5707964;
      fVar18 = fVar18 * fVar18 * -0.4052847 + fVar18 * 1.2732395;
      fVar16 = fVar16 + fVar16 + fVar16 * 1.5707964 * fVar16 * -0.63661975;
      fVar16 = (fVar18 + (ABS(fVar18) * fVar18 - fVar18) * 0.225) /
               (fVar16 + (ABS(fVar16) * fVar16 - fVar16) * 0.225);
      auVar13 = NEON_fmov(0x3f800000,4);
      uVar4 = 0;
      do {
        uVar1 = uVar4 + 4;
        pauVar2 = (undefined1 (*) [12])(pfVar7 + uVar4 * 4);
        pfVar5 = param_5 + uVar4 * 4;
        fVar15 = (float)*(undefined8 *)(*pauVar2 + 8);
        fVar18 = *(float *)(pauVar2[1] + 4);
        fVar10 = *(float *)(pauVar2[1] + 8);
        fVar12 = *(float *)pauVar2[2];
        fVar19 = *(float *)pauVar2[4];
        fVar22 = *(float *)(pauVar2[4] + 4);
        fVar27 = *(float *)(pauVar2[4] + 8);
        fVar11 = (float)((ulong)*(undefined8 *)(pauVar2[2] + 8) >> 0x20);
        fVar20 = (float)*(undefined8 *)(pauVar2[3] + 4);
        fVar14 = SUB124(*pauVar2,0);
        fVar8 = (float)*(undefined8 *)(pauVar2[2] + 8);
        fVar21 = SUB124(*pauVar2,4);
        fVar23 = fVar14 * local_c0[0] + fVar21 * uStack_b8._4_4_ + fVar15 * fStack_a8;
        fVar24 = fVar18 * local_c0[0] + fVar10 * uStack_b8._4_4_ + fVar12 * fStack_a8;
        fVar25 = fVar8 * local_c0[0] + fVar11 * uStack_b8._4_4_ + fVar20 * fStack_a8;
        fVar26 = fVar19 * local_c0[0] + fVar22 * uStack_b8._4_4_ + fVar27 * fStack_a8;
        fVar28 = fVar14 * local_c0[1] + fVar21 * afStack_b0[0] + fVar15 * fStack_a4;
        fVar30 = fVar18 * local_c0[1] + fVar10 * afStack_b0[0] + fVar12 * fStack_a4;
        fVar31 = fVar8 * local_c0[1] + fVar11 * afStack_b0[0] + fVar20 * fStack_a4;
        fVar32 = fVar19 * local_c0[1] + fVar22 * afStack_b0[0] + fVar27 * fStack_a4;
        fVar14 = fVar14 * (float)uStack_b8 + fVar21 * afStack_b0[1] + fVar15 * afStack_a0[0] +
                 fVar16;
        fVar18 = fVar18 * (float)uStack_b8 + fVar10 * afStack_b0[1] + fVar12 * afStack_a0[0] +
                 fVar16;
        fVar10 = fVar8 * (float)uStack_b8 + fVar11 * afStack_b0[1] + fVar20 * afStack_a0[0] + fVar16
        ;
        fVar12 = fVar19 * (float)uStack_b8 + fVar22 * afStack_b0[1] + fVar27 * afStack_a0[0] +
                 fVar16;
        auVar17._0_4_ = fVar23 * fVar23 + fVar28 * fVar28 + fVar14 * fVar14;
        auVar17._4_4_ = fVar24 * fVar24 + fVar30 * fVar30 + fVar18 * fVar18;
        auVar17._8_4_ = fVar25 * fVar25 + fVar31 * fVar31 + fVar10 * fVar10;
        auVar17._12_4_ = fVar26 * fVar26 + fVar32 * fVar32 + fVar12 * fVar12;
        auVar17 = NEON_frsqrte(auVar17,4);
        fVar19 = auVar17._0_4_;
        fVar23 = fVar23 * fVar19;
        fVar22 = auVar17._4_4_;
        fVar24 = fVar24 * fVar22;
        fVar27 = auVar17._8_4_;
        fVar25 = fVar25 * fVar27;
        fVar21 = auVar17._12_4_;
        fVar26 = fVar26 * fVar21;
        fVar28 = fVar28 * fVar19;
        fVar30 = fVar30 * fVar22;
        fVar31 = fVar31 * fVar27;
        fVar32 = fVar32 * fVar21;
        fVar14 = fVar14 * fVar19;
        fVar18 = fVar18 * fVar22;
        fVar10 = fVar10 * fVar27;
        fVar12 = fVar12 * fVar21;
        auVar17 = NEON_frecpe(auVar17,4);
        auVar29._0_4_ = auVar13._0_4_ + auVar17._0_4_ * fVar9;
        auVar29._4_4_ = auVar13._4_4_ + auVar17._4_4_ * fVar9;
        auVar29._8_4_ = auVar13._8_4_ + auVar17._8_4_ * fVar9;
        auVar29._12_4_ = auVar13._12_4_ + auVar17._12_4_ * fVar9;
        fVar19 = fVar23 * afStack_8c[1] + fVar28 * afStack_8c[4] + fVar14 * fStack_70;
        fVar22 = fVar24 * afStack_8c[1] + fVar30 * afStack_8c[4] + fVar18 * fStack_70;
        fVar27 = fVar25 * afStack_8c[1] + fVar31 * afStack_8c[4] + fVar10 * fStack_70;
        fVar21 = fVar26 * afStack_8c[1] + fVar32 * afStack_8c[4] + fVar12 * fStack_70;
        auVar17 = NEON_frecpe(auVar29,4);
        *(long *)(param_6 + 2) = auVar17._8_8_;
        *(long *)param_6 = auVar17._0_8_;
        *pfVar5 = fVar23 * local_90 + fVar28 * afStack_8c[2] + fVar14 * fStack_78;
        pfVar5[1] = fVar23 * afStack_8c[0] + fVar28 * afStack_8c[3] + fVar14 * fStack_74;
        pfVar5[2] = fVar19;
        pfVar5[3] = fVar19;
        *(ulong *)(pfVar5 + 6) = CONCAT44(fVar22,fVar22);
        *(ulong *)(pfVar5 + 4) =
             CONCAT44(fVar24 * afStack_8c[0] + fVar30 * afStack_8c[3] + fVar18 * fStack_74,
                      fVar24 * local_90 + fVar30 * afStack_8c[2] + fVar18 * fStack_78);
        *(ulong *)(pfVar5 + 10) = CONCAT44(fVar27,fVar27);
        *(ulong *)(pfVar5 + 8) =
             CONCAT44(fVar25 * afStack_8c[0] + fVar31 * afStack_8c[3] + fVar10 * fStack_74,
                      fVar25 * local_90 + fVar31 * afStack_8c[2] + fVar10 * fStack_78);
        pfVar5[0xe] = fVar21;
        pfVar5[0xf] = fVar21;
        pfVar5[0xc] = fVar26 * local_90 + fVar32 * afStack_8c[2] + fVar12 * fStack_78;
        pfVar5[0xd] = fVar26 * afStack_8c[0] + fVar32 * afStack_8c[3] + fVar12 * fStack_74;
        uVar4 = uVar1;
        param_6 = param_6 + 4;
      } while (uVar1 < param_4);
    }
  }
  else {
    FUN__text__00489b60(param_2,&local_90,local_c0);
    fVar9 = (float)uVar3 + -1.0;
    if (uVar3 < 2) {
      fVar9 = 1.0;
    }
    if (param_4 != 0) {
      fVar16 = (float)NEON_fminnm(param_1,0x3f7ff972);
      if (fVar16 <= 0.0001) {
        fVar16 = 0.0001;
      }
      fVar18 = fVar16 * 1.5707964 + 1.5707964;
      fVar18 = fVar18 * fVar18 * -0.4052847 + fVar18 * 1.2732395;
      uVar4 = (ulong)param_4;
      fVar16 = fVar16 + fVar16 + fVar16 * 1.5707964 * fVar16 * -0.63661975;
      pfVar5 = param_5;
      do {
        fVar19 = *pfVar7;
        fVar22 = pfVar7[1];
        uVar4 = uVar4 - 1;
        fVar27 = pfVar7[2];
        pfVar7 = pfVar7 + 4;
        fVar10 = fVar19 * local_c0[0] + uStack_b8._4_4_ * fVar22 + fStack_a8 * fVar27;
        fVar12 = fVar19 * local_c0[1] + afStack_b0[0] * fVar22 + fStack_a4 * fVar27;
        fVar19 = (fVar18 + (ABS(fVar18) * fVar18 - fVar18) * 0.225) /
                 (fVar16 + (ABS(fVar16) * fVar16 - fVar16) * 0.225) + (float)uStack_b8 * fVar19 +
                 afStack_b0[1] * fVar22 + afStack_a0[0] * fVar27;
        fVar27 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar19 * fVar19);
        fVar22 = 1.0 / fVar27;
        fVar10 = fVar22 * fVar10;
        fVar12 = fVar22 * fVar12;
        fVar22 = fVar22 * fVar19;
        *param_6 = 1.0 / (fVar9 * fVar27 + 1.0);
        pfVar5[3] = 0.0;
        *pfVar5 = fVar10 * local_90 + afStack_8c[2] * fVar12 + fStack_78 * fVar22;
        pfVar5[1] = fVar10 * afStack_8c[0] + afStack_8c[3] * fVar12 + fStack_74 * fVar22;
        pfVar5[2] = fVar10 * afStack_8c[1] + afStack_8c[4] * fVar12 + fStack_70 * fVar22;
        pfVar5 = pfVar5 + 4;
        param_6 = param_6 + 1;
      } while (uVar4 != 0);
    }
  }
  fVar9 = SQRT(*(float *)(param_2 + 3) * *(float *)(param_2 + 3) +
               *(float *)((long)param_2 + 0x1c) * *(float *)((long)param_2 + 0x1c) +
               *(float *)(param_2 + 4) * *(float *)(param_2 + 4));
  if ((1.1920929e-07 <= fVar9) && (param_4 != 0)) {
    uVar3 = uVar3 * 4;
    param_5 = param_5 + 1;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uVar4 = (ulong)uVar3;
    do {
      uVar4 = uVar4 - 2;
      param_5[-1] = param_5[-1] * fVar9;
      *param_5 = *param_5 * fVar9;
      param_5 = param_5 + 2;
    } while (uVar4 != 0);
  }
  return;
}


