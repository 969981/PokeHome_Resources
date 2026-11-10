/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00260d44; name: FUN_.text__00260d44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00260d44(long param_1)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
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
  undefined8 local_410;
  undefined4 local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined8 local_3ec;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined8 local_3ac;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined8 local_36c;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined8 local_32c;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined8 local_2ec;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  float local_210;
  float local_20c;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined1 auStack_1f4 [12];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float fStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  float local_190;
  float fStack_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  fVar17 = (float)*(int *)(param_1 + 8);
  fVar16 = (float)*(int *)(param_1 + 4);
  memset(auStack_1f4,0,0x1a4);
  local_208 = 0x3f800000;
  local_210 = fVar16 / 960.0;
  puVar7 = (undefined8 *)(param_1 + 0x14);
  local_204 = *puVar7;
  uVar5 = *(uint *)(param_1 + 0x50);
  local_1fc = *(undefined8 *)(param_1 + 0x1c);
  local_20c = fVar17 / 540.0;
  fVar9 = (float)uVar5;
  fVar14 = (float)NEON_ucvtf(*_DAT_008a1d20);
  fVar10 = (float)*(int *)(param_1 + 0x10);
  fVar11 = (float)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10));
  puVar3 = (undefined8 *)(param_1 + 0x24);
  fVar13 = ((float)*(uint *)(param_1 + 0x54) / fVar9) * 100.0;
  fVar12 = 0.0;
  fVar14 = fVar14 / *_DAT_008a02c8;
  fVar15 = 0.0;
  if (0.0 < fVar13) {
    if (fVar13 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar13 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar15 = 100.0;
      if (100.0 < fVar13) goto LAB__text__00260ee4;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar13 = fVar13 - *(float *)(lVar1 + 0x72cda4);
    fVar15 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar18 = fVar13 * fVar13 * fVar15;
    fVar20 = fVar13 * fVar15 * fVar18;
    fVar19 = fVar15 * fVar18 * 3.0;
    fVar15 = *(float *)(lVar8 + 0x72cda8) * (fVar19 + fVar15 * fVar20 * -2.0) +
             ((fVar15 * fVar20 * 2.0 - fVar19) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar13 + fVar20 + fVar18 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar20 - fVar18) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__00260ee4:
  local_1c8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * 1.5707964) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar14 * 1.5707964) & 0xffffff) * 5.9604645e-08;
  fVar18 = *pfVar2 + fVar13 * pfVar2[2];
  fVar13 = pfVar2[1] + fVar13 * pfVar2[3];
  fVar15 = ((fVar15 / 100.0) * fVar9) / fVar9;
  puVar4 = puVar7;
  if (uVar5 <= *(uint *)(param_1 + 0x54)) {
    puVar4 = puVar3;
  }
  local_1c4 = *puVar4;
  local_1bc = puVar4[1];
  fStack_1cc = (fVar15 * fVar13 * fVar11 + fVar10 * fVar13 + fVar17) / 540.0;
  local_1d0 = (fVar15 * fVar18 * fVar11 + fVar10 * fVar18 + fVar16) / 960.0;
  fVar13 = ((float)*(uint *)(param_1 + 0x58) / fVar9) * 100.0;
  if (0.0 < fVar13) {
    if (fVar13 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar13 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar12 = 100.0;
      if (100.0 < fVar13) goto LAB__text__00261080;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar13 = fVar13 - *(float *)(lVar1 + 0x72cda4);
    fVar12 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar15 = fVar13 * fVar13 * fVar12;
    fVar19 = fVar13 * fVar12 * fVar15;
    fVar18 = fVar12 * fVar15 * 3.0;
    fVar12 = *(float *)(lVar8 + 0x72cda8) * (fVar18 + fVar12 * fVar19 * -2.0) +
             ((fVar12 * fVar19 * 2.0 - fVar18) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar13 + fVar19 + fVar15 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar19 - fVar15) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__00261080:
  local_188 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * 0.5235988) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar14 * 0.5235988) & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar2 + fVar13 * pfVar2[2];
  fVar13 = pfVar2[1] + fVar13 * pfVar2[3];
  fVar12 = ((fVar12 / 100.0) * fVar9) / fVar9;
  puVar4 = puVar7;
  if (uVar5 <= *(uint *)(param_1 + 0x58)) {
    puVar4 = puVar3;
  }
  local_184 = *puVar4;
  local_17c = puVar4[1];
  fStack_18c = (fVar12 * fVar13 * fVar11 + fVar10 * fVar13 + fVar17) / 540.0;
  local_190 = (fVar12 * fVar15 * fVar11 + fVar10 * fVar15 + fVar16) / 960.0;
  fVar13 = 0.0;
  fVar15 = ((float)*(uint *)(param_1 + 0x5c) / fVar9) * 100.0;
  fVar12 = 0.0;
  if (0.0 < fVar15) {
    if (fVar15 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar15 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar13 = 100.0;
      if (100.0 < fVar15) goto LAB__text__0026121c;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar15 = fVar15 - *(float *)(lVar1 + 0x72cda4);
    fVar13 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar18 = fVar15 * fVar15 * fVar13;
    fVar20 = fVar15 * fVar13 * fVar18;
    fVar19 = fVar13 * fVar18 * 3.0;
    fVar13 = *(float *)(lVar8 + 0x72cda8) * (fVar19 + fVar13 * fVar20 * -2.0) +
             ((fVar13 * fVar20 * 2.0 - fVar19) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar15 + fVar20 + fVar18 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar20 - fVar18) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__0026121c:
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * -0.5235988) >> 0x18 & 0xff) * 0x10);
  fVar15 = (float)((uint)(long)(fVar14 * -0.5235988) & 0xffffff) * 5.9604645e-08;
  fVar18 = *pfVar2 + fVar15 * pfVar2[2];
  fVar15 = pfVar2[1] + fVar15 * pfVar2[3];
  fVar13 = ((fVar13 / 100.0) * fVar9) / fVar9;
  puVar4 = puVar7;
  if (uVar5 <= *(uint *)(param_1 + 0x5c)) {
    puVar4 = puVar3;
  }
  local_144 = *puVar4;
  local_13c = puVar4[1];
  fStack_14c = (fVar13 * fVar15 * fVar11 + fVar10 * fVar15 + fVar17) / 540.0;
  local_150 = (fVar13 * fVar18 * fVar11 + fVar10 * fVar18 + fVar16) / 960.0;
  fVar13 = ((float)*(uint *)(param_1 + 0x60) / fVar9) * 100.0;
  if (0.0 < fVar13) {
    if (fVar13 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar13 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar12 = 100.0;
      if (100.0 < fVar13) goto LAB__text__002613b0;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar13 = fVar13 - *(float *)(lVar1 + 0x72cda4);
    fVar12 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar15 = fVar13 * fVar13 * fVar12;
    fVar19 = fVar13 * fVar12 * fVar15;
    fVar18 = fVar12 * fVar15 * 3.0;
    fVar12 = *(float *)(lVar8 + 0x72cda8) * (fVar18 + fVar12 * fVar19 * -2.0) +
             ((fVar12 * fVar19 * 2.0 - fVar18) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar13 + fVar19 + fVar15 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar19 - fVar15) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__002613b0:
  local_108 = 0;
  puVar4 = puVar7;
  if (uVar5 <= *(uint *)(param_1 + 0x60)) {
    puVar4 = puVar3;
  }
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * -1.5707964) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar14 * -1.5707964) & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar2 + fVar13 * pfVar2[2];
  fVar13 = pfVar2[1] + fVar13 * pfVar2[3];
  fVar12 = ((fVar12 / 100.0) * fVar9) / fVar9;
  local_104 = *puVar4;
  local_fc = puVar4[1];
  fStack_10c = (fVar12 * fVar13 * fVar11 + fVar10 * fVar13 + fVar17) / 540.0;
  local_110 = (fVar12 * fVar15 * fVar11 + fVar10 * fVar15 + fVar16) / 960.0;
  fVar15 = 0.0;
  fVar13 = ((float)*(uint *)(param_1 + 100) / fVar9) * 100.0;
  fVar12 = 0.0;
  if (0.0 < fVar13) {
    if (fVar13 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar13 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar15 = 100.0;
      if (100.0 < fVar13) goto LAB__text__00261554;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar13 = fVar13 - *(float *)(lVar1 + 0x72cda4);
    fVar15 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar18 = fVar13 * fVar13 * fVar15;
    fVar20 = fVar13 * fVar15 * fVar18;
    fVar19 = fVar15 * fVar18 * 3.0;
    fVar15 = *(float *)(lVar8 + 0x72cda8) * (fVar19 + fVar15 * fVar20 * -2.0) +
             ((fVar15 * fVar20 * 2.0 - fVar19) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar13 + fVar20 + fVar18 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar20 - fVar18) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__00261554:
  local_c8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * -2.6179938) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar14 * -2.6179938) & 0xffffff) * 5.9604645e-08;
  fVar18 = *pfVar2 + fVar13 * pfVar2[2];
  fVar13 = pfVar2[1] + fVar13 * pfVar2[3];
  fVar15 = ((fVar15 / 100.0) * fVar9) / fVar9;
  puVar4 = puVar7;
  if (uVar5 <= *(uint *)(param_1 + 100)) {
    puVar4 = puVar3;
  }
  local_c4 = *puVar4;
  local_bc = puVar4[1];
  fStack_cc = (fVar15 * fVar13 * fVar11 + fVar10 * fVar13 + fVar17) / 540.0;
  local_d0 = (fVar15 * fVar18 * fVar11 + fVar10 * fVar18 + fVar16) / 960.0;
  fVar13 = ((float)*(uint *)(param_1 + 0x68) / fVar9) * 100.0;
  if (0.0 < fVar13) {
    if (fVar13 <= 40.0) {
      lVar8 = 1;
    }
    else if (fVar13 <= 70.0) {
      lVar8 = 2;
    }
    else {
      fVar12 = 100.0;
      if (100.0 < fVar13) goto LAB__text__002616f0;
      lVar8 = 3;
    }
    lVar1 = (ulong)((int)lVar8 - 1) * 0x10;
    lVar8 = lVar8 * 0x10;
    fVar13 = fVar13 - *(float *)(lVar1 + 0x72cda4);
    fVar12 = 1.0 / (*(float *)(lVar8 + 0x72cda4) - *(float *)(lVar1 + 0x72cda4));
    fVar15 = fVar13 * fVar13 * fVar12;
    fVar19 = fVar13 * fVar12 * fVar15;
    fVar18 = fVar12 * fVar15 * 3.0;
    fVar12 = *(float *)(lVar8 + 0x72cda8) * (fVar18 + fVar12 * fVar19 * -2.0) +
             ((fVar12 * fVar19 * 2.0 - fVar18) + 1.0) * *(float *)(lVar1 + 0x72cda8) +
             (fVar13 + fVar19 + fVar15 * -2.0) * *(float *)(lVar1 + 0x72cdb0) +
             (fVar19 - fVar15) * *(float *)(lVar8 + 0x72cdac);
  }
LAB__text__002616f0:
  local_88 = 0;
  local_218 = 0x10006;
  if (uVar5 <= *(uint *)(param_1 + 0x68)) {
    puVar7 = puVar3;
  }
  local_84 = *puVar7;
  local_7c = puVar7[1];
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_400 = 7;
  pfVar2 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar14 * -3.6651914) >> 0x18 & 0xff) * 0x10);
  fVar14 = (float)((uint)(long)(fVar14 * -3.6651914) & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar2 + fVar14 * pfVar2[2];
  fVar14 = pfVar2[1] + fVar14 * pfVar2[3];
  fVar9 = ((fVar12 / 100.0) * fVar9) / fVar9;
  local_228 = _DAT_0072cdf4;
  uStack_220 = 0x600050000;
  local_410 = CONCAT44(local_410._4_4_,10);
  local_238 = 0x200010000;
  uStack_230 = _DAT_0072cdec;
  local_240 = 0x12;
  local_90 = (fVar9 * fVar13 * fVar11 + fVar10 * fVar13 + fVar16) / 960.0;
  fStack_8c = (fVar9 * fVar14 * fVar11 + fVar10 * fVar14 + fVar17) / 540.0;
  uVar6 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_410,
                              &local_210,&local_400,&local_238,&local_240);
  local_400 = CONCAT44(fStack_1cc,local_1d0);
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  local_160 = 0;
  local_118 = 0;
  local_280 = CONCAT44(fStack_1cc,local_1d0);
  local_120 = 0;
  local_158 = 0;
  local_3f4 = *(undefined8 *)(param_1 + 0x34);
  local_3f8 = local_1c8;
  local_274 = *(undefined8 *)(param_1 + 0x34);
  local_128 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_3ec = *(undefined8 *)(param_1 + 0x3c);
  local_98 = 0;
  local_a0 = 0;
  local_d8 = 0;
  local_a8 = 0;
  local_3b8 = local_188;
  local_278 = local_1c8;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_3c0 = CONCAT44(fStack_18c,local_190);
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_168 = 0;
  local_378 = local_148;
  local_404 = 7;
  local_3ac = *(undefined8 *)(param_1 + 0x3c);
  local_240 = 7;
  local_410 = 0;
  local_3b4 = *(undefined8 *)(param_1 + 0x34);
  local_338 = local_108;
  local_380 = CONCAT44(fStack_14c,local_150);
  local_2f8 = local_c8;
  local_36c = *(undefined8 *)(param_1 + 0x3c);
  local_2b8 = local_88;
  local_374 = *(undefined8 *)(param_1 + 0x34);
  local_340 = CONCAT44(fStack_10c,local_110);
  local_32c = *(undefined8 *)(param_1 + 0x3c);
  local_334 = *(undefined8 *)(param_1 + 0x34);
  local_300 = CONCAT44(fStack_cc,local_d0);
  local_2ec = *(undefined8 *)(param_1 + 0x3c);
  local_2f4 = *(undefined8 *)(param_1 + 0x34);
  local_2c0 = CONCAT44(fStack_8c,local_90);
  local_2ac = *(undefined8 *)(param_1 + 0x3c);
  local_2b4 = *(undefined8 *)(param_1 + 0x34);
  local_26c = *(undefined8 *)(param_1 + 0x3c);
  uVar6 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_404,
                              &local_400,&local_240,0,&local_410);
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  return;
}


