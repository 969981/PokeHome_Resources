/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002607c8; name: FUN_.text__002607c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002607c8(long param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined8 local_364;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined8 local_324;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined6 local_1e0;
  undefined2 uStack_1da;
  undefined6 uStack_1d8;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined1 auStack_1b4 [12];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
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
  
  fVar11 = (float)*(int *)(param_1 + 8);
  fVar12 = (float)*(int *)(param_1 + 4);
  memset(auStack_1b4,0,0x164);
  local_1d0 = fVar12 / 960.0;
  puVar5 = (undefined8 *)(param_1 + 0x14);
  local_1c4 = *puVar5;
  local_1bc = *(undefined8 *)(param_1 + 0x1c);
  local_118 = 0;
  fVar6 = (float)NEON_ucvtf(*_DAT_008a1d20);
  fVar8 = (float)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10));
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x50));
  fVar7 = (float)*(int *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x24);
  local_120 = 0;
  local_108 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_188 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  fVar6 = fVar6 / *_DAT_008a02c8;
  local_148 = 0;
  local_128 = 0;
  local_1cc = fVar11 / 540.0;
  fVar13 = (float)*(uint *)(param_1 + 0x54) / fVar9;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar6 * 1.5707964) >> 0x18 & 0xff) * 0x10);
  fVar10 = (float)((uint)(long)(fVar6 * 1.5707964) & 0xffffff) * 5.9604645e-08;
  fVar14 = *pfVar1 + fVar10 * pfVar1[2];
  fVar10 = pfVar1[1] + fVar10 * pfVar1[3];
  local_190 = (fVar13 * fVar14 * fVar8 + fVar7 * fVar14 + fVar12) / 960.0;
  fStack_18c = (fVar13 * fVar10 * fVar8 + fVar7 * fVar10 + fVar11) / 540.0;
  fVar10 = (float)*(uint *)(param_1 + 0x58) / fVar9;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar6 * 0.31415927) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar6 * 0.31415927) & 0xffffff) * 5.9604645e-08;
  fVar14 = *pfVar1 + fVar13 * pfVar1[2];
  fVar13 = pfVar1[1] + fVar13 * pfVar1[3];
  fStack_14c = (fVar10 * fVar13 * fVar8 + fVar7 * fVar13 + fVar11) / 540.0;
  local_150 = (fVar10 * fVar14 * fVar8 + fVar7 * fVar14 + fVar12) / 960.0;
  fVar10 = (float)*(uint *)(param_1 + 0x5c) / fVar9;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar6 * -0.9424778) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar6 * -0.9424778) & 0xffffff) * 5.9604645e-08;
  fVar14 = *pfVar1 + fVar13 * pfVar1[2];
  fVar13 = pfVar1[1] + fVar13 * pfVar1[3];
  fStack_10c = (fVar10 * fVar13 * fVar8 + fVar7 * fVar13 + fVar11) / 540.0;
  local_110 = (fVar10 * fVar14 * fVar8 + fVar7 * fVar14 + fVar12) / 960.0;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar6 * -2.1991148) >> 0x18 & 0xff) * 0x10);
  fVar13 = (float)((uint)(long)(fVar6 * -2.1991148) & 0xffffff) * 5.9604645e-08;
  fVar10 = (float)*(uint *)(param_1 + 0x60) / fVar9;
  fVar14 = *pfVar1 + fVar13 * pfVar1[2];
  fVar13 = pfVar1[1] + fVar13 * pfVar1[3];
  local_1c8 = 0x3f800000;
  puVar3 = puVar5;
  if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x54)) {
    puVar3 = puVar2;
  }
  local_184 = *puVar3;
  local_17c = puVar3[1];
  puVar3 = puVar5;
  if (*(uint *)(param_1 + 0x70) <= *(uint *)(param_1 + 0x58)) {
    puVar3 = puVar2;
  }
  local_144 = *puVar3;
  local_13c = puVar3[1];
  puVar3 = puVar5;
  if (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x5c)) {
    puVar3 = puVar2;
  }
  local_104 = *puVar3;
  local_fc = puVar3[1];
  puVar3 = puVar5;
  if (*(uint *)(param_1 + 0x78) <= *(uint *)(param_1 + 0x60)) {
    puVar3 = puVar2;
  }
  local_c4 = *puVar3;
  local_bc = puVar3[1];
  fStack_cc = (fVar10 * fVar13 * fVar8 + fVar7 * fVar13 + fVar11) / 540.0;
  local_d0 = (fVar10 * fVar14 * fVar8 + fVar7 * fVar14 + fVar12) / 960.0;
  fVar9 = (float)*(uint *)(param_1 + 100) / fVar9;
  pfVar1 = (float *)(_DAT_008a1d28 + ((ulong)(long)(fVar6 * -3.455752) >> 0x18 & 0xff) * 0x10);
  if (*(uint *)(param_1 + 0x7c) <= *(uint *)(param_1 + 100)) {
    puVar5 = puVar2;
  }
  local_84 = *puVar5;
  local_7c = puVar5[1];
  fVar6 = (float)((uint)(long)(fVar6 * -3.455752) & 0xffffff) * 5.9604645e-08;
  fVar10 = *pfVar1 + fVar6 * pfVar1[2];
  fVar6 = pfVar1[1] + fVar6 * pfVar1[3];
  local_1f0 = 0x200010000;
  uStack_1e8 = _DAT_0072cd8c;
  local_1e0 = _DAT_0072cd94;
  local_388 = CONCAT44(local_388._4_4_,10);
  local_1f8 = 0xf;
  uStack_1da = _DAT_0072cd9a;
  uStack_1d8 = uRam000000000072cd9c;
  local_378 = 6;
  local_90 = (fVar9 * fVar10 * fVar8 + fVar7 * fVar10 + fVar12) / 960.0;
  fStack_8c = (fVar9 * fVar6 * fVar8 + fVar7 * fVar6 + fVar11) / 540.0;
  uVar4 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_388,
                              &local_1d0,&local_378,&local_1f0,&local_1f8);
  local_378 = CONCAT44(fStack_18c,local_190);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  local_120 = 0;
  local_238 = CONCAT44(fStack_18c,local_190);
  local_118 = 0;
  local_e8 = 0;
  local_278 = CONCAT44(fStack_8c,local_90);
  local_e0 = 0;
  local_d8 = 0;
  local_370 = local_188;
  local_36c = *(undefined8 *)(param_1 + 0x34);
  local_224 = *(undefined8 *)(param_1 + 0x3c);
  local_22c = *(undefined8 *)(param_1 + 0x34);
  local_364 = *(undefined8 *)(param_1 + 0x3c);
  local_a0 = 0;
  local_a8 = 0;
  local_230 = local_188;
  local_330 = local_148;
  local_58 = 0;
  local_60 = 0;
  local_98 = 0;
  local_68 = 0;
  local_338 = CONCAT44(fStack_14c,local_150);
  local_158 = 0;
  local_160 = 0;
  local_198 = 0;
  local_168 = 0;
  local_128 = 0;
  local_1f8 = 6;
  local_388 = 0;
  local_2f0 = local_108;
  local_2ac = *(undefined8 *)(param_1 + 0x34);
  local_324 = *(undefined8 *)(param_1 + 0x3c);
  local_32c = *(undefined8 *)(param_1 + 0x34);
  local_2b0 = local_c8;
  local_2f8 = CONCAT44(fStack_10c,local_110);
  local_270 = local_88;
  local_2e4 = *(undefined8 *)(param_1 + 0x3c);
  local_2ec = *(undefined8 *)(param_1 + 0x34);
  local_2b8 = CONCAT44(fStack_cc,local_d0);
  local_2a4 = *(undefined8 *)(param_1 + 0x3c);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_37c = 7;
  local_26c = local_2ac;
  local_264 = local_2a4;
  uVar4 = FUN__text__005bec90(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_37c,
                              &local_378,&local_1f8,0,&local_388);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  return;
}


