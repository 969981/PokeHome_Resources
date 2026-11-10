/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a4ec; name: FUN_.text__0053a4ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053a4ec(long *param_1,char *param_2,double *param_3,float *param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                        undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  double dVar1;
  long lVar2;
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
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double local_238;
  undefined4 local_22c;
  float local_224;
  float fStack_220;
  float local_21c;
  double local_218;
  double dStack_210;
  double local_208;
  float local_1fc;
  float fStack_1f8;
  float local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float local_12c;
  float local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 uStack_108;
  float local_100;
  undefined8 local_a8;
  ulong local_a0;
  undefined2 local_98;
  long local_90;
  long local_88;
  char local_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined8 local_76;
  undefined6 local_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  
  local_140 = 0;
  uStack_138 = 0;
  local_120 = *param_3;
  dStack_118 = param_3[1];
  local_98 = 0;
  local_278 = *param_3;
  local_270 = param_3[1];
  local_90 = 0;
  local_258 = (double)param_4[1];
  local_260 = (double)*param_4;
  local_250 = (double)param_4[2];
  uStack_108 = *(undefined8 *)param_4;
  local_110 = param_3[2];
  local_150 = 0;
  uStack_148 = 0;
  local_100 = param_4[2];
  dStack_248 = 1.0 / local_260;
  local_160 = 0;
  uStack_158 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_a0 = 0x3f80000000000000;
  local_80 = (char)&local_1f0;
  uStack_7f = (undefined1)((ulong)&local_1f0 >> 8);
  uStack_7e = (undefined6)((ulong)&local_1f0 >> 0x10);
  local_268 = param_3[2];
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_240 = 1.0 / local_258;
  local_190 = 0;
  uStack_188 = 0;
  local_238 = 1.0 / local_250;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  lVar2 = *(long *)(*param_1 + 0x10);
  if (lVar2 != 0) {
    FUN__text__0053f2f0(*param_1 + 8,lVar2,&local_278,&local_80);
    if ((int)local_a0 != 0) {
      FUN__text__0053fb5c(&local_1f0);
      local_a0 = local_a0 & 0xffffffff00000000;
    }
  }
  if ((char)local_98 != '\0') {
    if (local_88 == 0) {
      lVar2 = 0;
      if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 4)) {
        return;
      }
    }
    else {
      lVar2 = *(long *)(local_88 + 0x38);
      if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 4)) {
        return;
      }
    }
    fVar10 = param_4[1];
    fVar9 = param_4[2];
    fVar11 = *param_4;
    fVar4 = *(float *)(local_90 + 0x18);
    fVar3 = *(float *)(local_90 + 0x1c);
    fVar5 = *(float *)(local_90 + 0x38);
    fVar6 = *(float *)(local_90 + 0x3c);
    fVar13 = fVar10 * fVar3 - fVar9 * fVar4;
    fVar7 = *(float *)(local_90 + 0x40);
    fVar13 = fVar13 + fVar13;
    fVar12 = *(float *)(local_90 + 0x10);
    fVar8 = *(float *)(local_90 + 0x14);
    fVar15 = fVar9 * fVar8 - fVar11 * fVar3;
    fVar17 = fVar11 * fVar4 - fVar10 * fVar8;
    fVar15 = fVar15 + fVar15;
    fVar17 = fVar17 + fVar17;
    fVar14 = *(float *)(lVar2 + 0xc);
    fVar18 = *(float *)(lVar2 + 4);
    fVar16 = *(float *)(lVar2 + 8);
    fVar11 = ((fVar11 + fVar12 * fVar13 + fVar3 * fVar15) - fVar4 * fVar17) / fVar5;
    fVar10 = ((fVar10 - fVar3 * fVar13) + fVar8 * fVar17 + fVar12 * fVar15) / fVar6;
    fVar9 = ((fVar9 + fVar4 * fVar13 + fVar12 * fVar17) - fVar8 * fVar15) / fVar7;
    fVar13 = fVar11 * fVar18 + fVar16 * fVar10 + fVar14 * fVar9;
    fVar13 = fVar13 + fVar13;
    fVar11 = fVar11 - fVar18 * fVar13;
    fVar10 = fVar10 - fVar16 * fVar13;
    fVar9 = fVar9 - fVar14 * fVar13;
    if (fVar11 * fVar18 + fVar16 * fVar10 + fVar14 * fVar9 <= 0.0) {
      local_1fc = local_130 - fVar18 * 0.001;
      fStack_1f8 = local_12c - fVar16 * 0.001;
      local_1f4 = local_128 - fVar14 * 0.001;
    }
    else {
      local_1fc = local_130 + fVar18 * 0.001;
      fStack_1f8 = local_12c + fVar16 * 0.001;
      local_1f4 = local_128 + fVar14 * 0.001;
    }
    fVar14 = fStack_1f8 * fVar6;
    fVar15 = local_1fc * fVar5;
    fVar13 = local_1f4 * fVar7;
    fVar16 = -(fVar4 * fVar4) - fVar3 * fVar3;
    fVar10 = fVar10 * fVar6;
    fVar9 = fVar9 * fVar7;
    fVar11 = fVar11 * fVar5;
    fVar7 = (fVar16 - fVar8 * fVar8) + fVar12 * fVar12;
    fVar6 = fVar14 * fVar4 + fVar3 * fVar13 + fVar15 * fVar8;
    fVar17 = fVar12 * (fVar13 * fVar4 - fVar14 * fVar3) + fVar8 * fVar6;
    fVar5 = (fVar15 * fVar3 - fVar8 * fVar13) * fVar12 + fVar4 * fVar6;
    fVar6 = (fVar8 * fVar14 - fVar15 * fVar4) * fVar12 + fVar3 * fVar6;
    local_218 = *(double *)(local_90 + 0x20) + (double)(fVar17 + fVar17 + fVar15 * fVar7);
    dStack_210 = *(double *)(local_90 + 0x28) + (double)(fVar5 + fVar5 + fVar14 * fVar7);
    local_208 = *(double *)(local_90 + 0x30) + (double)(fVar6 + fVar6 + fVar13 * fVar7);
    fVar13 = *(float *)(local_90 + 0x10);
    fVar7 = *(float *)(local_90 + 0x14);
    fVar6 = fVar10 * fVar4 + fVar3 * fVar9 + fVar11 * fVar7;
    fVar12 = (fVar16 - fVar7 * fVar7) + fVar13 * fVar13;
    fVar5 = (fVar11 * fVar3 - fVar7 * fVar9) * fVar13 + fVar4 * fVar6;
    fVar8 = fVar13 * (fVar9 * fVar4 - fVar10 * fVar3) + fVar7 * fVar6;
    fStack_220 = fVar5 + fVar5 + fVar10 * fVar12;
    fVar3 = (fVar7 * fVar10 - fVar11 * fVar4) * fVar13 + fVar3 * fVar6;
    local_224 = fVar8 + fVar8 + fVar11 * fVar12;
    fVar4 = fVar3 + fVar3 + fVar9 * fVar12;
    fVar3 = *(float *)(param_2 + 0x18) -
            (float)SQRT((local_218 - *param_3) * (local_218 - *param_3) +
                        (dStack_210 - param_3[1]) * (dStack_210 - param_3[1]) +
                        (local_208 - param_3[2]) * (local_208 - param_3[2]));
    *(float *)(param_2 + 0x18) = fVar3;
    fVar5 = SQRT(local_224 * local_224 + fStack_220 * fStack_220 + fVar4 * fVar4);
    if (fVar5 == 0.0) {
      local_224 = 0.0;
      fStack_220 = 0.0;
      fVar4 = 0.0;
    }
    else {
      fVar5 = 1.0 / fVar5;
      local_224 = local_224 * fVar5;
      fStack_220 = fStack_220 * fVar5;
      fVar4 = fVar4 * fVar5;
    }
    local_21c = (float)NEON_fminnm((int)param_1[5],fVar3);
    local_224 = local_21c * local_224;
    fStack_220 = local_21c * fStack_220;
    local_21c = local_21c * fVar4;
    lVar2 = FUN__text__0053b090(param_8,param_10,&local_218,&local_224,lVar2,local_90,&local_1fc);
    if (((lVar2 != 0) && (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 2))) &&
       (0.0 < *(float *)(param_2 + 0x18))) {
      local_240 = 0.0;
      local_238 = 0.0;
      local_22c = 0;
      dVar1 = (double)(_DAT_008a4288 + 0x10);
      local_268 = 0.0;
      local_260 = 0.0;
      local_258 = 0.0;
      local_250 = (double)((ulong)local_250 & 0xffffffff00000000);
      local_270 = 0.0;
      local_278 = dVar1;
      FUN__text__0053d740(&local_278,lVar2);
      param_2[1] = '\0';
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      if (*param_2 != '\0') {
        local_76 = *(undefined8 *)(param_2 + 10);
        uStack_7e = (undefined6)*(undefined8 *)(param_2 + 2);
        uStack_78 = (undefined2)((ulong)*(undefined8 *)(param_2 + 2) >> 0x30);
        local_6e = (undefined6)*(undefined8 *)(param_2 + 0x12);
        uStack_7f = 0;
        uStack_68 = (undefined2)*(undefined8 *)(param_2 + 0x18);
        uStack_66 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x10);
        local_80 = *param_2;
        FUN__text__0053a4ec(param_1,&local_80,&local_218,&local_224,param_5,param_6,param_7,param_8,
                            param_9,&local_278,param_11);
      }
      if (local_240 != 0.0) {
        local_238 = (double)((ulong)local_238 & 0xffffffff00000000);
        local_278 = dVar1;
        FUN__text__00400fc0(0xb);
      }
    }
  }
  return;
}


