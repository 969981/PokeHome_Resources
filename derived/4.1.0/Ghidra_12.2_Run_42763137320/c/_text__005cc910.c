/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cc910; name: FUN_.text__005cc910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cc910(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  uint uVar15;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 local_2c;
  long local_28;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  if ((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = _DAT_008a5930 + 0x10;
  param_1[9] = _DAT_008a5930 + 0x48;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  memset(param_1 + 0xc,0,0x1c0);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x51] = -0x407fffff40800000;
  param_1[0x53] = -0x407fffff40800000;
  param_1[0x55] = -0x407fffff40800000;
  param_1[0x57] = -0x407fffff40800000;
  param_1[0x59] = -0x407fffff40800000;
  param_1[0x5b] = -0x407fffff40800000;
  param_1[0x5d] = -0x407fffff40800000;
  param_1[0x5f] = -0x407fffff40800000;
  param_1[0x61] = -0x407fffff40800000;
  param_1[99] = -0x407fffff40800000;
  param_1[0x65] = -0x407fffff40800000;
  param_1[0x67] = -0x407fffff40800000;
  param_1[0x69] = -0x407fffff40800000;
  param_1[0x6b] = -0x407fffff40800000;
  param_1[0x6d] = -0x407fffff40800000;
  param_1[0x6f] = -0x407fffff40800000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  local_2c = 0;
  FUN__text__005ccd30(&local_28,lVar2,&local_2c);
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
  }
  param_1[0x4e] = local_28;
  if (*(int *)(local_28 + 0xdc) == 0) {
    fVar37 = *(float *)(local_28 + 0xd0) * 0.5;
    fVar14 = fVar37 * *_DAT_008a51b0;
    fVar36 = *_DAT_008a51b8;
    auVar17._0_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
    auVar17._4_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
    auVar17._8_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
    auVar17._12_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
    auVar4 = NEON_scvtf(auVar17,4);
    fVar14 = fVar37 - auVar4._0_4_ * fVar36;
    fVar34 = fVar37 - auVar4._4_4_ * fVar36;
    fVar35 = fVar37 - auVar4._8_4_ * fVar36;
    fVar37 = fVar37 - auVar4._12_4_ * fVar36;
    fVar36 = *_DAT_008a51c0;
    fVar22 = *_DAT_008a02c8;
    fVar6 = -fVar36;
    uVar15 = -(uint)(fVar36 < fVar14);
    uVar18 = -(uint)(fVar36 < fVar34);
    uVar19 = -(uint)(fVar36 < fVar35);
    uVar20 = -(uint)(fVar36 < fVar37);
    fVar36 = -fVar22;
    fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar22 - fVar14)) & uVar15);
    fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar22 - fVar34)) & uVar18);
    fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)(fVar22 - fVar35)) & uVar19);
    fVar37 = (float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)(fVar22 - fVar37)) & uVar20);
    fVar24 = *_DAT_008a51c8;
    uVar7 = -(uint)(fVar14 < fVar6);
    uVar11 = -(uint)(fVar34 < fVar6);
    uVar12 = -(uint)(fVar35 < fVar6);
    uVar13 = -(uint)(fVar37 < fVar6);
    fVar31 = *_DAT_008a51d0;
    fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar36 - fVar14)) & uVar7);
    fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar36 - fVar34)) & uVar11);
    fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)(fVar36 - fVar35)) & uVar12);
    fVar37 = (float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)(fVar36 - fVar37)) & uVar13);
    auVar8[0] = (byte)uVar7 | (byte)uVar15;
    auVar8[1] = (byte)(uVar7 >> 8) | (byte)(uVar15 >> 8);
    auVar8[2] = (byte)(uVar7 >> 0x10) | (byte)(uVar15 >> 0x10);
    auVar8[3] = (byte)(uVar7 >> 0x18) | (byte)(uVar15 >> 0x18);
    auVar8[4] = (byte)uVar11 | (byte)uVar18;
    auVar8[5] = (byte)(uVar11 >> 8) | (byte)(uVar18 >> 8);
    auVar8[6] = (byte)(uVar11 >> 0x10) | (byte)(uVar18 >> 0x10);
    auVar8[7] = (byte)(uVar11 >> 0x18) | (byte)(uVar18 >> 0x18);
    auVar8[8] = (byte)uVar12 | (byte)uVar19;
    auVar8[9] = (byte)(uVar12 >> 8) | (byte)(uVar19 >> 8);
    auVar8[10] = (byte)(uVar12 >> 0x10) | (byte)(uVar19 >> 0x10);
    auVar8[0xb] = (byte)(uVar12 >> 0x18) | (byte)(uVar19 >> 0x18);
    auVar8[0xc] = (byte)uVar13 | (byte)uVar20;
    auVar8[0xd] = (byte)(uVar13 >> 8) | (byte)(uVar20 >> 8);
    auVar8[0xe] = (byte)(uVar13 >> 0x10) | (byte)(uVar20 >> 0x10);
    auVar8[0xf] = (byte)(uVar13 >> 0x18) | (byte)(uVar20 >> 0x18);
    fVar27 = (float)*(undefined8 *)(_DAT_008a51c8 + 1);
    fVar36 = fVar14 * fVar14;
    fVar6 = fVar34 * fVar34;
    fVar22 = fVar35 * fVar35;
    fVar21 = fVar37 * fVar37;
    fVar25 = -(float)((ulong)*(undefined8 *)(_DAT_008a51c8 + 1) >> 0x20);
    fVar30 = (float)*(undefined8 *)(_DAT_008a51c8 + 3);
    fVar26 = -(float)((ulong)*(undefined8 *)(_DAT_008a51c8 + 3) >> 0x20);
    auVar23 = NEON_fmov(0x3f800000,4);
    fVar32 = (float)*(undefined8 *)(_DAT_008a51d0 + 1);
    fVar28 = -(float)((ulong)*(undefined8 *)(_DAT_008a51d0 + 1) >> 0x20);
    fVar33 = (float)*(undefined8 *)(_DAT_008a51d0 + 3);
    fVar29 = -(float)((ulong)*(undefined8 *)(_DAT_008a51d0 + 3) >> 0x20);
    auVar9._0_4_ = auVar23._0_4_ +
                   fVar36 * (fVar29 + fVar36 * (fVar33 + fVar36 * (fVar28 + fVar36 * (fVar32 - 
                                                  fVar36 * fVar31))));
    auVar9._4_4_ = auVar23._4_4_ +
                   fVar6 * (fVar29 + fVar6 * (fVar33 + fVar6 * (fVar28 + fVar6 * (fVar32 - fVar6 * 
                                                  fVar31))));
    auVar9._8_4_ = auVar23._8_4_ +
                   fVar22 * (fVar29 + fVar22 * (fVar33 + fVar22 * (fVar28 + fVar22 * (fVar32 - 
                                                  fVar22 * fVar31))));
    auVar9._12_4_ =
         auVar23._12_4_ +
         fVar21 * (fVar29 + fVar21 * (fVar33 + fVar21 * (fVar28 + fVar21 * (fVar32 - fVar21 * fVar31
                                                                           ))));
    auVar16._0_4_ = -auVar9._0_4_;
    auVar16._4_4_ = -auVar9._4_4_;
    auVar16._8_4_ = -auVar9._8_4_;
    auVar16._12_4_ = -auVar9._12_4_;
    auVar9 = auVar9 ^ (auVar9 ^ auVar16) & auVar8;
    fVar28 = *(float *)(local_28 + 200);
    fVar29 = *(float *)(local_28 + 0xcc);
    auVar4._0_4_ = (fVar14 * (auVar23._0_4_ +
                             fVar36 * (fVar26 + fVar36 * (fVar30 + fVar36 * (fVar25 + fVar36 * (
                                                  fVar27 - fVar36 * fVar24)))))) / auVar9._0_4_;
    auVar4._4_4_ = (fVar34 * (auVar23._4_4_ +
                             fVar6 * (fVar26 + fVar6 * (fVar30 + fVar6 * (fVar25 + fVar6 * (fVar27 -
                                                                                           fVar6 * 
                                                  fVar24)))))) / auVar9._4_4_;
    auVar4._8_4_ = (fVar35 * (auVar23._8_4_ +
                             fVar22 * (fVar26 + fVar22 * (fVar30 + fVar22 * (fVar25 + fVar22 * (
                                                  fVar27 - fVar22 * fVar24)))))) / auVar9._8_4_;
    auVar4._12_4_ =
         (fVar37 * (auVar23._12_4_ +
                   fVar21 * (fVar26 + fVar21 * (fVar30 + fVar21 * (fVar25 + fVar21 * (fVar27 - 
                                                  fVar21 * fVar24)))))) / auVar9._12_4_;
    auVar23 = NEON_frecpe(auVar4,4);
    auVar17 = NEON_frecps(auVar23,auVar4,4);
    auVar10._0_4_ = auVar23._0_4_ * auVar17._0_4_;
    auVar10._4_4_ = auVar23._4_4_ * auVar17._4_4_;
    auVar10._8_4_ = auVar23._8_4_ * auVar17._8_4_;
    auVar10._12_4_ = auVar23._12_4_ * auVar17._12_4_;
    auVar4 = NEON_frecps(auVar10,auVar4,4);
    fVar37 = auVar10._0_4_ * auVar4._0_4_;
    fVar14 = fVar37 / *(float *)(local_28 + 0xd4);
    fVar34 = -1.0 / (fVar29 - fVar28);
    auVar23 = ZEXT816(0);
    uVar3 = CONCAT44(0xbf800000,(fVar28 + fVar29) * fVar34);
    fVar34 = (fVar28 * fVar29 + fVar28 * fVar29) * fVar34;
  }
  else {
    fVar34 = 1.0 / (*(float *)(local_28 + 0xe4) - *(float *)(local_28 + 0xe0));
    fVar14 = fVar34 + fVar34;
    fVar35 = 1.0 / (*(float *)(local_28 + 0xec) - *(float *)(local_28 + 0xe8));
    fVar37 = fVar35 + fVar35;
    auVar4 = NEON_fmov(0x3f800000,4);
    fVar36 = -1.0 / (*(float *)(local_28 + 0xcc) - *(float *)(local_28 + 200));
    auVar23._8_8_ = auVar4._8_8_;
    auVar23._4_4_ = -((*(float *)(local_28 + 0xe8) + *(float *)(local_28 + 0xec)) * fVar35);
    auVar23._0_4_ = -((*(float *)(local_28 + 0xe0) + *(float *)(local_28 + 0xe4)) * fVar34);
    fVar34 = (*(float *)(local_28 + 200) + *(float *)(local_28 + 0xcc)) * fVar36;
    uVar3 = (ulong)(uint)(fVar36 + fVar36);
  }
  auVar5._12_4_ = auVar23._12_4_;
  auVar5._0_8_ = auVar23._0_8_;
  auVar5._8_4_ = fVar34;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x43] = 0x3f80000000000000;
  param_1[0x42] = 0;
  param_1[0x41] = 0x3f800000;
  param_1[0x3c] = 0x3f800000;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f80000000000000;
  param_1[0x36] = 0x3f80000000000000;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3f80000000000000;
  param_1[0x44] = 0x3f8000003f800000;
  param_1[0x45] = 0x3f8000003f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3f800000;
  param_1[0x34] = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(float *)(param_1 + 0x14) = fVar14;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  param_1[0x16] = (ulong)(uint)fVar37 << 0x20;
  param_1[0x19] = uVar3;
  param_1[0x18] = 0;
  param_1[0x1b] = auVar5._8_8_;
  param_1[0x1a] = auVar5._0_8_;
  return;
}


