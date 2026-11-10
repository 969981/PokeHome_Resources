/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9ee8; name: FUN_.text__006b9ee8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b9ee8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  uint uVar7;
  float fVar8;
  undefined1 auVar5 [16];
  uint uVar9;
  uint uVar10;
  undefined1 auVar6 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  
  if ((*(byte *)(param_1 + 0x60) >> 1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_2 + 0xa8) = uVar2;
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = uVar2;
  }
  else {
    fVar32 = *(float *)(param_1 + 0x50);
    fVar31 = *(float *)(param_1 + 0x54);
    lVar1 = FUN__text__006b253c(param_1,1);
    fVar3 = *_DAT_008a51b0;
    fVar8 = *(float *)(lVar1 + 0x14) * fVar3;
    fVar15 = *_DAT_008a51b8;
    fVar22 = *_DAT_008a02c8;
    auVar5._0_4_ = (int)(fVar3 * 0.0 +
                        (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar5._4_4_ = (int)(fVar3 * 0.0 +
                        (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar5._8_4_ = (int)(fVar8 + (float)(-(uint)(0.0 <= fVar8) & 0x80000000 ^ 0xbf000000));
    auVar5._12_4_ =
         (int)(fVar3 * 0.0 + (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar5 = NEON_scvtf(auVar5,4);
    fVar23 = -fVar22;
    fVar40 = *_DAT_008a51c8;
    fVar11 = 0.0 - auVar5._0_4_ * fVar15;
    fVar13 = 0.0 - auVar5._4_4_ * fVar15;
    fVar14 = *(float *)(lVar1 + 0x14) - auVar5._8_4_ * fVar15;
    fVar15 = 0.0 - auVar5._12_4_ * fVar15;
    fVar3 = *_DAT_008a51c0;
    fVar8 = -fVar3;
    fVar33 = *_DAT_008a51d0;
    uVar4 = -(uint)(fVar3 < fVar11);
    uVar7 = -(uint)(fVar3 < fVar13);
    uVar9 = -(uint)(fVar3 < fVar14);
    uVar10 = -(uint)(fVar3 < fVar15);
    fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)(fVar22 - fVar11)) & uVar4);
    fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar22 - fVar13)) & uVar7);
    fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar22 - fVar14)) & uVar9);
    fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)(fVar22 - fVar15)) & uVar10);
    fVar17 = (float)*(undefined8 *)(_DAT_008a51c8 + 3);
    fVar22 = (float)*(undefined8 *)(_DAT_008a51c8 + 1);
    uVar16 = -(uint)(fVar11 < fVar8);
    uVar19 = -(uint)(fVar13 < fVar8);
    uVar20 = -(uint)(fVar14 < fVar8);
    uVar21 = -(uint)(fVar15 < fVar8);
    auVar44[0] = (byte)uVar16 | (byte)uVar4;
    auVar44[1] = (byte)(uVar16 >> 8) | (byte)(uVar4 >> 8);
    auVar44[2] = (byte)(uVar16 >> 0x10) | (byte)(uVar4 >> 0x10);
    auVar44[3] = (byte)(uVar16 >> 0x18) | (byte)(uVar4 >> 0x18);
    auVar44[4] = (byte)uVar19 | (byte)uVar7;
    auVar44[5] = (byte)(uVar19 >> 8) | (byte)(uVar7 >> 8);
    auVar44[6] = (byte)(uVar19 >> 0x10) | (byte)(uVar7 >> 0x10);
    auVar44[7] = (byte)(uVar19 >> 0x18) | (byte)(uVar7 >> 0x18);
    auVar44[8] = (byte)uVar20 | (byte)uVar9;
    auVar44[9] = (byte)(uVar20 >> 8) | (byte)(uVar9 >> 8);
    auVar44[10] = (byte)(uVar20 >> 0x10) | (byte)(uVar9 >> 0x10);
    auVar44[0xb] = (byte)(uVar20 >> 0x18) | (byte)(uVar9 >> 0x18);
    auVar44[0xc] = (byte)uVar21 | (byte)uVar10;
    auVar44[0xd] = (byte)(uVar21 >> 8) | (byte)(uVar10 >> 8);
    auVar44[0xe] = (byte)(uVar21 >> 0x10) | (byte)(uVar10 >> 0x10);
    auVar44[0xf] = (byte)(uVar21 >> 0x18) | (byte)(uVar10 >> 0x18);
    fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)(fVar23 - fVar11)) & uVar16);
    fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar23 - fVar13)) & uVar19);
    fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar23 - fVar14)) & uVar20);
    fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)(fVar23 - fVar15)) & uVar21);
    fVar3 = _DAT_008a51d0[1];
    fVar8 = _DAT_008a51d0[3];
    fVar26 = fVar11 * fVar11;
    fVar28 = fVar13 * fVar13;
    fVar29 = fVar14 * fVar14;
    fVar30 = fVar15 * fVar15;
    fVar23 = -(float)((ulong)*(undefined8 *)(_DAT_008a51c8 + 1) >> 0x20);
    fVar34 = -_DAT_008a51d0[2];
    fVar24 = -_DAT_008a51d0[4];
    fVar35 = -(float)((ulong)*(undefined8 *)(_DAT_008a51c8 + 3) >> 0x20);
    auVar5 = NEON_fmov(0x3f800000,4);
    auVar6._0_4_ = auVar5._0_4_ +
                   fVar26 * (fVar24 + fVar26 * (fVar8 + fVar26 * (fVar34 + fVar26 * (fVar3 - fVar26 
                                                  * fVar33))));
    auVar6._4_4_ = auVar5._4_4_ +
                   fVar28 * (fVar24 + fVar28 * (fVar8 + fVar28 * (fVar34 + fVar28 * (fVar3 - fVar28 
                                                  * fVar33))));
    auVar6._8_4_ = auVar5._8_4_ +
                   fVar29 * (fVar24 + fVar29 * (fVar8 + fVar29 * (fVar34 + fVar29 * (fVar3 - fVar29 
                                                  * fVar33))));
    auVar6._12_4_ =
         auVar5._12_4_ +
         fVar30 * (fVar24 + fVar30 * (fVar8 + fVar30 * (fVar34 + fVar30 * (fVar3 - fVar30 * fVar33))
                                     ));
    auVar18._0_4_ = -auVar6._0_4_;
    auVar18._4_4_ = -auVar6._4_4_;
    auVar18._8_4_ = -auVar6._8_4_;
    auVar18._12_4_ = -auVar6._12_4_;
    auVar12._0_4_ =
         fVar11 * (auVar5._0_4_ +
                  fVar26 * (fVar35 + fVar26 * (fVar17 + fVar26 * (fVar23 + fVar26 * (fVar22 - fVar26
                                                                                              * 
                                                  fVar40)))));
    auVar12._4_4_ =
         fVar13 * (auVar5._4_4_ +
                  fVar28 * (fVar35 + fVar28 * (fVar17 + fVar28 * (fVar23 + fVar28 * (fVar22 - fVar28
                                                                                              * 
                                                  fVar40)))));
    auVar12._8_4_ =
         fVar14 * (auVar5._8_4_ +
                  fVar29 * (fVar35 + fVar29 * (fVar17 + fVar29 * (fVar23 + fVar29 * (fVar22 - fVar29
                                                                                              * 
                                                  fVar40)))));
    auVar12._12_4_ =
         fVar15 * (auVar5._12_4_ +
                  fVar30 * (fVar35 + fVar30 * (fVar17 + fVar30 * (fVar23 + fVar30 * (fVar22 - fVar30
                                                                                              * 
                                                  fVar40)))));
    auVar5 = NEON_ext(auVar12,auVar12,8,1);
    auVar6 = auVar6 ^ (auVar6 ^ auVar18) & auVar44;
    fVar34 = -(*(float *)(lVar1 + 0xc) * fVar32) + *(float *)(lVar1 + 4) * fVar32 * -0.5;
    fVar14 = auVar6._4_4_;
    auVar44 = NEON_ext(auVar6,auVar6,8,1);
    fVar33 = -auVar12._4_4_;
    fVar3 = auVar44._0_4_;
    fVar8 = auVar5._0_4_;
    fVar17 = fVar14 * (float)_DAT_00723930;
    fVar27 = fVar31 * *(float *)(lVar1 + 0x10) + fVar31 * *(float *)(lVar1 + 8) * 0.5;
    fVar35 = fVar3 * fVar14;
    fVar14 = fVar8 * fVar14;
    fVar43 = fVar27 + fVar31 * -0.5;
    fVar24 = fVar34 + fVar32 * 0.5;
    fVar47 = (float)uRam0000000000724928;
    fVar11 = auVar6._0_4_;
    fVar45 = (float)_DAT_00724920;
    fVar46 = (float)((ulong)_DAT_00724920 >> 0x20);
    fVar15 = fVar8 * fVar11 * (float)_DAT_007247b0 + fVar3 * auVar12._4_4_ * auVar12._0_4_;
    fVar22 = fVar3 * fVar11 * (float)((ulong)_DAT_007247b0 >> 0x20) +
             fVar8 * auVar12._4_4_ * auVar12._0_4_;
    fVar23 = fVar11 * 0.0 * (float)uRam00000000007247b8 + fVar17 * auVar12._0_4_;
    fVar26 = (float)_DAT_00724ba0;
    fVar28 = (float)((ulong)_DAT_00724ba0 >> 0x20);
    fVar29 = (float)uRam0000000000724ba8;
    fVar13 = fVar8 * auVar12._0_4_ * (float)_DAT_00724b60 + fVar3 * auVar12._4_4_ * fVar11;
    fVar3 = fVar3 * auVar12._0_4_ * (float)((ulong)_DAT_00724b60 >> 0x20) +
            fVar8 * auVar12._4_4_ * fVar11;
    fVar11 = auVar12._0_4_ * 0.0 * (float)uRam0000000000724b68 + fVar17 * fVar11;
    fVar8 = (float)_DAT_00724a00;
    fVar17 = (float)((ulong)_DAT_00724a00 >> 0x20);
    fVar30 = (float)uRam0000000000724a08;
    fVar40 = fVar45 * fVar35 + fVar26 * fVar15 + fVar8 * fVar13 + 0.0;
    fVar41 = fVar46 * fVar35 + fVar28 * fVar15 + fVar17 * fVar13 + 0.0;
    fVar42 = fVar47 * fVar35 + fVar29 * fVar15 + fVar30 * fVar13 + 0.0;
    fVar35 = fVar24 * fVar35 + fVar43 * fVar15 + fVar13 * 0.0 + 0.0;
    fVar36 = fVar45 * fVar14 + fVar26 * fVar22 + fVar8 * fVar3 + 0.0;
    fVar37 = fVar46 * fVar14 + fVar28 * fVar22 + fVar17 * fVar3 + 0.0;
    fVar38 = fVar47 * fVar14 + fVar29 * fVar22 + fVar30 * fVar3 + 0.0;
    fVar39 = fVar24 * fVar14 + fVar43 * fVar22 + fVar3 * 0.0 + 0.0;
    fVar3 = fVar45 * fVar33 + fVar26 * fVar23 + fVar8 * fVar11 + 0.0;
    fVar8 = fVar46 * fVar33 + fVar28 * fVar23 + fVar17 * fVar11 + 0.0;
    fVar13 = fVar47 * fVar33 + fVar29 * fVar23 + fVar30 * fVar11 + 0.0;
    fVar11 = fVar24 * fVar33 + fVar43 * fVar23 + fVar11 * 0.0 + 0.0;
    fVar14 = fVar40 * 0.0;
    fVar15 = fVar41 * 0.0;
    fVar22 = fVar42 * 0.0;
    fVar23 = fVar35 * 0.0;
    fVar29 = fVar40 + fVar36 * 0.0 + fVar3 * 0.0 + 0.0;
    fVar30 = fVar41 + fVar37 * 0.0 + fVar8 * 0.0 + 0.0;
    fVar33 = fVar42 + fVar38 * 0.0 + fVar13 * 0.0 + 0.0;
    fVar34 = (-(fVar32 * 0.5) - fVar34) + fVar35 + fVar39 * 0.0 + fVar11 * 0.0;
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    fVar40 = (float)uVar2;
    fVar32 = (float)*(undefined8 *)(param_1 + 0x70);
    fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    uVar25 = *(undefined8 *)(param_1 + 0x88);
    fVar17 = fVar3 + fVar14 + fVar36 * 0.0;
    fVar24 = fVar8 + fVar15 + fVar37 * 0.0;
    fVar26 = fVar13 + fVar22 + fVar38 * 0.0;
    fVar28 = fVar11 + fVar23 + fVar39 * 0.0;
    fVar14 = fVar36 + fVar14 + fVar3 * 0.0 + 0.0;
    fVar15 = fVar37 + fVar15 + fVar8 * 0.0 + 0.0;
    fVar22 = fVar38 + fVar22 + fVar13 * 0.0 + 0.0;
    fVar23 = (-(fVar31 * -0.5) - fVar27) + fVar39 + fVar23 + fVar11 * 0.0;
    fVar3 = *(float *)(param_1 + 0x90);
    fVar8 = *(float *)(param_1 + 0x94);
    fVar11 = *(float *)(param_1 + 0x98);
    fVar13 = *(float *)(param_1 + 0x9c);
    fVar27 = (float)*(undefined8 *)(param_1 + 0x80);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
    fVar36 = (float)uVar25;
    *(float *)(param_2 + 0x88) = fVar33 * fVar32 + fVar22 * fVar35 + fVar26 * fVar40 + 0.0;
    *(float *)(param_2 + 0x8c) =
         (float)((ulong)uVar2 >> 0x20) + fVar34 * fVar32 + fVar23 * fVar35 + fVar28 * fVar40;
    *(float *)(param_2 + 0x80) = fVar29 * fVar32 + fVar14 * fVar35 + fVar17 * fVar40 + 0.0;
    *(float *)(param_2 + 0x84) = fVar30 * fVar32 + fVar15 * fVar35 + fVar24 * fVar40 + 0.0;
    *(ulong *)(param_2 + 0x98) =
         CONCAT44((float)((ulong)uVar25 >> 0x20) +
                  fVar34 * fVar27 + fVar23 * fVar31 + fVar28 * fVar36,
                  fVar33 * fVar27 + fVar22 * fVar31 + fVar26 * fVar36 + 0.0);
    *(ulong *)(param_2 + 0x90) =
         CONCAT44(fVar30 * fVar27 + fVar15 * fVar31 + fVar24 * fVar36 + 0.0,
                  fVar29 * fVar27 + fVar14 * fVar31 + fVar17 * fVar36 + 0.0);
    *(ulong *)(param_2 + 0xa8) =
         CONCAT44(fVar13 + fVar34 * fVar3 + fVar23 * fVar8 + fVar28 * fVar11,
                  fVar33 * fVar3 + fVar22 * fVar8 + fVar26 * fVar11 + 0.0);
    *(ulong *)(param_2 + 0xa0) =
         CONCAT44(fVar30 * fVar3 + fVar15 * fVar8 + fVar24 * fVar11 + 0.0,
                  fVar29 * fVar3 + fVar14 * fVar8 + fVar17 * fVar11 + 0.0);
  }
  *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
  return;
}


