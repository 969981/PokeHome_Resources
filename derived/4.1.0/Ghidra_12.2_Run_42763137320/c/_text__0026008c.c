/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026008c; name: FUN_.text__0026008c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0026008c(long param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  fVar15 = (float)*(int *)(param_1 + 8);
  fVar14 = (float)*(int *)(param_1 + 4);
  memset(auStack_1f4,0,0x1a4);
  fVar10 = 0.0;
  local_208 = 0x3f800000;
  local_210 = fVar14 / 960.0;
  puVar6 = (undefined8 *)(param_1 + 0x14);
  local_204 = *puVar6;
  local_1fc = *(undefined8 *)(param_1 + 0x1c);
  local_20c = fVar15 / 540.0;
  uVar4 = *(uint *)(param_1 + 0x54);
  fVar9 = (float)NEON_ucvtf(*_DAT_008a1d20);
  fVar7 = (float)*(int *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x24);
  fVar8 = (float)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10));
  fVar9 = fVar9 / *_DAT_008a02c8;
  fVar11 = 0.0;
  if (uVar4 < 0x20) {
    fVar11 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_1c8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * 1.5707964) >> 0x18 & 0xff) * 0x10);
  fVar12 = (float)((uint)(long)(fVar9 * 1.5707964) & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar1 + fVar12 * pfVar1[2];
  fVar12 = pfVar1[1] + fVar12 * pfVar1[3];
  local_1d0 = (fVar11 * fVar13 * fVar8 + fVar7 * fVar13 + fVar14) / 960.0;
  fStack_1cc = (fVar11 * fVar12 * fVar8 + fVar7 * fVar12 + fVar15) / 540.0;
  puVar3 = puVar6;
  if (*(uint *)(param_1 + 0x6c) <= uVar4) {
    puVar3 = puVar2;
  }
  local_1c4 = *puVar3;
  local_1bc = puVar3[1];
  uVar4 = *(uint *)(param_1 + 0x58);
  if (uVar4 < 0x20) {
    fVar10 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_188 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * 0.5235988) >> 0x18 & 0xff) * 0x10);
  fVar11 = (float)((uint)(long)(fVar9 * 0.5235988) & 0xffffff) * 5.9604645e-08;
  fVar12 = *pfVar1 + fVar11 * pfVar1[2];
  fVar11 = pfVar1[1] + fVar11 * pfVar1[3];
  local_190 = (fVar10 * fVar12 * fVar8 + fVar7 * fVar12 + fVar14) / 960.0;
  fStack_18c = (fVar10 * fVar11 * fVar8 + fVar7 * fVar11 + fVar15) / 540.0;
  puVar3 = puVar6;
  if (*(uint *)(param_1 + 0x70) <= uVar4) {
    puVar3 = puVar2;
  }
  local_184 = *puVar3;
  local_17c = puVar3[1];
  uVar4 = *(uint *)(param_1 + 0x5c);
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (uVar4 < 0x20) {
    fVar11 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * -0.5235988) >> 0x18 & 0xff) * 0x10);
  fVar12 = (float)((uint)(long)(fVar9 * -0.5235988) & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar1 + fVar12 * pfVar1[2];
  fVar12 = pfVar1[1] + fVar12 * pfVar1[3];
  local_150 = (fVar11 * fVar13 * fVar8 + fVar7 * fVar13 + fVar14) / 960.0;
  fStack_14c = (fVar11 * fVar12 * fVar8 + fVar7 * fVar12 + fVar15) / 540.0;
  puVar3 = puVar6;
  if (*(uint *)(param_1 + 0x74) <= uVar4) {
    puVar3 = puVar2;
  }
  local_144 = *puVar3;
  local_13c = puVar3[1];
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar4 < 0x20) {
    fVar10 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_108 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * -1.5707964) >> 0x18 & 0xff) * 0x10);
  fVar11 = (float)((uint)(long)(fVar9 * -1.5707964) & 0xffffff) * 5.9604645e-08;
  fVar12 = *pfVar1 + fVar11 * pfVar1[2];
  fVar11 = pfVar1[1] + fVar11 * pfVar1[3];
  local_110 = (fVar10 * fVar12 * fVar8 + fVar7 * fVar12 + fVar14) / 960.0;
  fStack_10c = (fVar10 * fVar11 * fVar8 + fVar7 * fVar11 + fVar15) / 540.0;
  puVar3 = puVar6;
  if (*(uint *)(param_1 + 0x78) <= uVar4) {
    puVar3 = puVar2;
  }
  local_104 = *puVar3;
  local_fc = puVar3[1];
  uVar4 = *(uint *)(param_1 + 100);
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (uVar4 < 0x20) {
    fVar11 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_c8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * -2.6179938) >> 0x18 & 0xff) * 0x10);
  fVar12 = (float)((uint)(long)(fVar9 * -2.6179938) & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar1 + fVar12 * pfVar1[2];
  fVar12 = pfVar1[1] + fVar12 * pfVar1[3];
  local_d0 = (fVar11 * fVar13 * fVar8 + fVar7 * fVar13 + fVar14) / 960.0;
  fStack_cc = (fVar11 * fVar12 * fVar8 + fVar7 * fVar12 + fVar15) / 540.0;
  puVar3 = puVar6;
  if (*(uint *)(param_1 + 0x7c) <= uVar4) {
    puVar3 = puVar2;
  }
  local_c4 = *puVar3;
  local_bc = puVar3[1];
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 < 0x20) {
    fVar10 = *(float *)((ulong)uVar4 * 4 + 0x72cd04);
  }
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_400 = 7;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar9 * -3.6651914) >> 0x18 & 0xff) * 0x10);
  local_218 = 0x10006;
  fVar9 = (float)((uint)(long)(fVar9 * -3.6651914) & 0xffffff) * 5.9604645e-08;
  fVar11 = *pfVar1 + fVar9 * pfVar1[2];
  fVar9 = pfVar1[1] + fVar9 * pfVar1[3];
  if (*(uint *)(param_1 + 0x80) <= uVar4) {
    puVar6 = puVar2;
  }
  local_84 = *puVar6;
  local_7c = puVar6[1];
  local_90 = (fVar10 * fVar11 * fVar8 + fVar7 * fVar11 + fVar14) / 960.0;
  fStack_8c = (fVar10 * fVar9 * fVar8 + fVar7 * fVar9 + fVar15) / 540.0;
  local_228 = _DAT_0072cdf4;
  uStack_220 = 0x600050000;
  local_410 = CONCAT44(local_410._4_4_,10);
  local_238 = 0x200010000;
  uStack_230 = _DAT_0072cdec;
  local_240 = 0x12;
  uVar5 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_410,
                              &local_210,&local_400,&local_238,&local_240);
  local_400 = CONCAT44(fStack_1cc,local_1d0);
  *(undefined4 *)(param_1 + 0x90) = uVar5;
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
  uVar5 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_404,
                              &local_400,&local_240,0,&local_410);
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  return;
}


