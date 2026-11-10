/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004847f0; name: FUN_.text__004847f0
 */


void FUN__text__004847f0(float param_1,float *param_2,int param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  undefined8 uStack_84;
  
  FUN__text__00489b60(param_4,&local_a0,&fStack_d0);
  uVar3 = param_3 << 2;
  fVar8 = (float)uStack_b4;
  fVar6 = (float)((ulong)uStack_b4 >> 0x20);
  fVar9 = (float)uStack_84;
  fVar7 = (float)((ulong)uStack_84 >> 0x20);
  if (param_1 <= 0.5) {
    if (uVar3 != 0) {
      pfVar2 = param_2 + uVar3;
      fVar37 = param_1 * -1.2732395 * ABS(param_1 * 3.1415927) + param_1 * 4.0;
      fVar37 = 1.0 / (fVar37 + 0.0001 + (ABS(fVar37) * fVar37 - fVar37) * 0.225);
      do {
        fVar17 = *param_2;
        fVar19 = param_2[1];
        fVar21 = param_2[2];
        fVar23 = param_2[4];
        fVar12 = param_2[5];
        fVar18 = param_2[6];
        pauVar1 = (undefined1 (*) [12])(param_2 + 8);
        fVar24 = (float)*(undefined8 *)(param_2 + 10);
        pfVar4 = param_2 + 0xc;
        fVar30 = (float)*(undefined8 *)(param_2 + 0xe);
        fVar28 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
        param_2 = param_2 + 0x10;
        fVar14 = SUB124(*pauVar1,0);
        fVar15 = (float)*(undefined8 *)pfVar4;
        fVar20 = SUB124(*pauVar1,4);
        auVar36._0_4_ = fVar17 * fStack_c8 + fVar19 * local_bc + fVar21 * fVar6;
        auVar36._4_4_ = fVar23 * fStack_c8 + fVar12 * local_bc + fVar18 * fVar6;
        auVar36._8_4_ = fVar14 * fStack_c8 + fVar20 * local_bc + fVar24 * fVar6;
        auVar36._12_4_ = fVar15 * fStack_c8 + fVar28 * local_bc + fVar30 * fVar6;
        fVar22 = fVar17 * fStack_d0 + fVar19 * fStack_c4 + fVar21 * fStack_b8;
        fVar16 = fVar23 * fStack_d0 + fVar12 * fStack_c4 + fVar18 * fStack_b8;
        fVar25 = fVar14 * fStack_d0 + fVar20 * fStack_c4 + fVar24 * fStack_b8;
        fVar26 = fVar15 * fStack_d0 + fVar28 * fStack_c4 + fVar30 * fStack_b8;
        fVar27 = fVar17 * local_cc + fVar19 * fStack_c0 + fVar21 * fVar8;
        fVar29 = fVar23 * local_cc + fVar12 * fStack_c0 + fVar18 * fVar8;
        fVar24 = fVar14 * local_cc + fVar20 * fStack_c0 + fVar24 * fVar8;
        fVar15 = fVar15 * local_cc + fVar28 * fStack_c0 + fVar30 * fVar8;
        auVar35._8_4_ = 0xbf7fbe77;
        auVar35._0_8_ = 0xbf7fbe77bf7fbe77;
        auVar35._12_4_ = 0xbf7fbe77;
        auVar35 = NEON_fmax(auVar36,auVar35,4);
        fVar17 = auVar35._0_4_ + fVar37;
        fVar19 = auVar35._4_4_ + fVar37;
        fVar21 = auVar35._8_4_ + fVar37;
        fVar23 = auVar35._12_4_ + fVar37;
        auVar11._0_4_ = fVar17 * fVar17 + fVar22 * fVar22 + fVar27 * fVar27;
        auVar11._4_4_ = fVar19 * fVar19 + fVar16 * fVar16 + fVar29 * fVar29;
        auVar11._8_4_ = fVar21 * fVar21 + fVar25 * fVar25 + fVar24 * fVar24;
        auVar11._12_4_ = fVar23 * fVar23 + fVar26 * fVar26 + fVar15 * fVar15;
        auVar35 = NEON_frsqrte(auVar11,4);
        fVar12 = auVar35._0_4_;
        fVar22 = fVar22 * fVar12;
        fVar18 = auVar35._4_4_;
        fVar16 = fVar16 * fVar18;
        fVar14 = auVar35._8_4_;
        fVar25 = fVar25 * fVar14;
        fVar20 = auVar35._12_4_;
        fVar26 = fVar26 * fVar20;
        fVar27 = fVar27 * fVar12;
        fVar29 = fVar29 * fVar18;
        fVar24 = fVar24 * fVar14;
        fVar15 = fVar15 * fVar20;
        fVar17 = fVar17 * fVar12;
        fVar19 = fVar19 * fVar18;
        fVar21 = fVar21 * fVar14;
        fVar23 = fVar23 * fVar20;
        fVar12 = fVar22 * fStack_98 + fVar27 * local_8c + fVar17 * fVar7;
        fVar18 = fVar16 * fStack_98 + fVar29 * local_8c + fVar19 * fVar7;
        fVar14 = fVar25 * fStack_98 + fVar24 * local_8c + fVar21 * fVar7;
        fVar20 = fVar26 * fStack_98 + fVar15 * local_8c + fVar23 * fVar7;
        param_5[5] = CONCAT44(fVar14,fVar14);
        param_5[4] = CONCAT44(fVar25 * fStack_9c + fVar24 * fStack_90 + fVar21 * fVar9,
                              fVar25 * local_a0 + fVar24 * fStack_94 + fVar21 * fStack_88);
        param_5[7] = CONCAT44(fVar20,fVar20);
        param_5[6] = CONCAT44(fVar26 * fStack_9c + fVar15 * fStack_90 + fVar23 * fVar9,
                              fVar26 * local_a0 + fVar15 * fStack_94 + fVar23 * fStack_88);
        param_5[1] = CONCAT44(fVar12,fVar12);
        *param_5 = CONCAT44(fVar22 * fStack_9c + fVar27 * fStack_90 + fVar17 * fVar9,
                            fVar22 * local_a0 + fVar27 * fStack_94 + fVar17 * fStack_88);
        *(float *)(param_5 + 3) = fVar18;
        *(float *)((long)param_5 + 0x1c) = fVar18;
        *(float *)(param_5 + 2) = fVar16 * local_a0 + fVar29 * fStack_94 + fVar19 * fStack_88;
        *(float *)((long)param_5 + 0x14) = fVar16 * fStack_9c + fVar29 * fStack_90 + fVar19 * fVar9;
        param_5 = param_5 + 8;
      } while (param_2 < pfVar2);
    }
  }
  else if (uVar3 != 0) {
    auVar35 = NEON_fmov(0xbf800000,4);
    auVar36 = NEON_fmov(0x3f800000,4);
    pfVar2 = param_2 + uVar3;
    fVar37 = 1.5707964 - param_1 * 1.5707964;
    do {
      fVar17 = *param_2;
      fVar19 = param_2[1];
      fVar21 = param_2[2];
      fVar23 = param_2[4];
      fVar12 = param_2[5];
      fVar18 = param_2[6];
      fVar22 = (float)*(undefined8 *)(param_2 + 10);
      fVar14 = param_2[8];
      fVar20 = param_2[9];
      pfVar4 = param_2 + 0xc;
      fVar24 = (float)*(undefined8 *)(param_2 + 0xe);
      fVar16 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
      param_2 = param_2 + 0x10;
      fVar15 = (float)*(undefined8 *)pfVar4;
      fVar25 = fVar17 * fStack_d0 + fVar19 * fStack_c4 + fVar21 * fStack_b8;
      fVar26 = fVar23 * fStack_d0 + fVar12 * fStack_c4 + fVar18 * fStack_b8;
      fVar27 = fVar14 * fStack_d0 + fVar20 * fStack_c4 + fVar22 * fStack_b8;
      fVar28 = fVar15 * fStack_d0 + fVar16 * fStack_c4 + fVar24 * fStack_b8;
      fVar29 = fVar17 * local_cc + fVar19 * fStack_c0 + fVar21 * fVar8;
      fVar30 = fVar23 * local_cc + fVar12 * fStack_c0 + fVar18 * fVar8;
      fVar31 = fVar14 * local_cc + fVar20 * fStack_c0 + fVar22 * fVar8;
      fVar32 = fVar15 * local_cc + fVar16 * fStack_c0 + fVar24 * fVar8;
      auVar10._0_4_ = fVar17 * fStack_c8 + fVar19 * local_bc + fVar21 * fVar6;
      auVar10._4_4_ = fVar23 * fStack_c8 + fVar12 * local_bc + fVar18 * fVar6;
      auVar10._8_4_ = fVar14 * fStack_c8 + fVar20 * local_bc + fVar22 * fVar6;
      auVar10._12_4_ = fVar15 * fStack_c8 + fVar16 * local_bc + fVar24 * fVar6;
      fVar12 = fVar25 * fVar25 + fVar29 * fVar29;
      fVar14 = fVar26 * fVar26 + fVar30 * fVar30;
      fVar15 = fVar27 * fVar27 + fVar31 * fVar31;
      fVar16 = fVar28 * fVar28 + fVar32 * fVar32;
      auVar11 = NEON_fmax(auVar10,auVar35,4);
      auVar33._0_4_ = -(uint)(auVar11._0_4_ < 0.0);
      auVar33._4_4_ = -(uint)(auVar11._4_4_ < 0.0);
      auVar33._8_4_ = -(uint)(auVar11._8_4_ < 0.0);
      auVar33._12_4_ = -(uint)(auVar11._12_4_ < 0.0);
      auVar5._4_4_ = -(uint)(0.0 <= fVar14 + -0.0001);
      auVar5._0_4_ = -(uint)(0.0 <= fVar12 + -0.0001);
      auVar5._8_4_ = -(uint)(0.0 <= fVar15 + -0.0001);
      auVar5._12_4_ = -(uint)(0.0 <= fVar16 + -0.0001);
      auVar11 = auVar11 ^ (auVar11 ^ auVar36 ^ (auVar36 ^ auVar35) & auVar33) & ~auVar5;
      fVar17 = auVar11._0_4_;
      fVar19 = auVar11._4_4_;
      fVar21 = auVar11._8_4_;
      fVar23 = auVar11._12_4_;
      fVar17 = fVar37 + (fVar17 * fVar17 * (fVar17 * fVar17 * 0.719088 + -0.35786) + 1.085865) *
                        fVar17 * param_1;
      fVar19 = fVar37 + (fVar19 * fVar19 * (fVar19 * fVar19 * 0.719088 + -0.35786) + 1.085865) *
                        fVar19 * param_1;
      fVar21 = fVar37 + (fVar21 * fVar21 * (fVar21 * fVar21 * 0.719088 + -0.35786) + 1.085865) *
                        fVar21 * param_1;
      fVar23 = fVar37 + (fVar23 * fVar23 * (fVar23 * fVar23 * 0.719088 + -0.35786) + 1.085865) *
                        fVar23 * param_1;
      auVar34._8_4_ = 0x38d1b717;
      auVar34._0_8_ = 0x38d1b71738d1b717;
      auVar34._12_4_ = 0x38d1b717;
      fVar17 = (auVar36._0_4_ + fVar17 * fVar17 * (fVar17 * fVar17 * 0.00833216 + -0.16666655)) *
               fVar17;
      fVar19 = (auVar36._4_4_ + fVar19 * fVar19 * (fVar19 * fVar19 * 0.00833216 + -0.16666655)) *
               fVar19;
      fVar21 = (auVar36._8_4_ + fVar21 * fVar21 * (fVar21 * fVar21 * 0.00833216 + -0.16666655)) *
               fVar21;
      fVar23 = (auVar36._12_4_ + fVar23 * fVar23 * (fVar23 * fVar23 * 0.00833216 + -0.16666655)) *
               fVar23;
      fVar18 = auVar36._0_4_ - fVar17 * fVar17;
      fVar20 = auVar36._4_4_ - fVar19 * fVar19;
      fVar22 = auVar36._8_4_ - fVar21 * fVar21;
      fVar24 = auVar36._12_4_ - fVar23 * fVar23;
      auVar13._0_4_ = fVar18 * fVar12;
      auVar13._4_4_ = fVar20 * fVar14;
      auVar13._8_4_ = fVar22 * fVar15;
      auVar13._12_4_ = fVar24 * fVar16;
      auVar11 = NEON_fmax(auVar13,auVar34,4);
      auVar11 = NEON_frsqrte(auVar11,4);
      fVar18 = fVar18 * auVar11._0_4_;
      fVar20 = fVar20 * auVar11._4_4_;
      fVar22 = fVar22 * auVar11._8_4_;
      fVar24 = fVar24 * auVar11._12_4_;
      fVar25 = fVar18 * fVar25;
      fVar26 = fVar20 * fVar26;
      fVar27 = fVar22 * fVar27;
      fVar28 = fVar24 * fVar28;
      fVar18 = fVar18 * fVar29;
      fVar20 = fVar20 * fVar30;
      fVar22 = fVar22 * fVar31;
      fVar24 = fVar24 * fVar32;
      fVar12 = fVar25 * fStack_98 + fVar18 * local_8c + fVar17 * fVar7;
      fVar14 = fVar26 * fStack_98 + fVar20 * local_8c + fVar19 * fVar7;
      fVar15 = fVar27 * fStack_98 + fVar22 * local_8c + fVar21 * fVar7;
      fVar16 = fVar28 * fStack_98 + fVar24 * local_8c + fVar23 * fVar7;
      param_5[5] = CONCAT44(fVar15,fVar15);
      param_5[4] = CONCAT44(fVar27 * fStack_9c + fVar22 * fStack_90 + fVar21 * fVar9,
                            fVar27 * local_a0 + fVar22 * fStack_94 + fVar21 * fStack_88);
      *(float *)(param_5 + 7) = fVar16;
      *(float *)((long)param_5 + 0x3c) = fVar16;
      *(float *)(param_5 + 6) = fVar28 * local_a0 + fVar24 * fStack_94 + fVar23 * fStack_88;
      *(float *)((long)param_5 + 0x34) = fVar28 * fStack_9c + fVar24 * fStack_90 + fVar23 * fVar9;
      param_5[1] = CONCAT44(fVar12,fVar12);
      *param_5 = CONCAT44(fVar25 * fStack_9c + fVar18 * fStack_90 + fVar17 * fVar9,
                          fVar25 * local_a0 + fVar18 * fStack_94 + fVar17 * fStack_88);
      *(float *)(param_5 + 3) = fVar14;
      *(float *)((long)param_5 + 0x1c) = fVar14;
      *(float *)(param_5 + 2) = fVar26 * local_a0 + fVar20 * fStack_94 + fVar19 * fStack_88;
      *(float *)((long)param_5 + 0x14) = fVar26 * fStack_9c + fVar20 * fStack_90 + fVar19 * fVar9;
      param_5 = param_5 + 8;
    } while (param_2 < pfVar2);
  }
  return;
}


