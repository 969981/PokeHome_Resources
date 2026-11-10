/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053b220; name: FUN_.text__0053b220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053b220(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                        char *param_5,undefined8 param_6,float *param_7,undefined8 param_8,
                        long param_9,undefined8 param_10,int param_11,undefined4 *param_12,
                        undefined8 *param_13,float *param_14,undefined8 param_15,long param_16,
                        long param_17,long param_18)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined6 local_1e0;
  undefined2 uStack_1da;
  undefined6 uStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  long local_1a0;
  ulong local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  ulong local_148;
  float local_13c;
  float fStack_138;
  float local_134;
  undefined8 local_130;
  ulong uStack_128;
  ulong local_120;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  float local_100;
  long local_f8;
  undefined8 uStack_f0;
  char local_e8;
  char local_e7;
  undefined8 local_e6;
  undefined8 local_de;
  undefined6 local_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  char local_c8;
  char cStack_c7;
  undefined2 uStack_c6;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined6 uStack_bc;
  undefined6 local_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  
  local_f8 = param_9;
  uStack_f0 = param_10;
  fVar14 = (float)FUN__text__0051dafc(&local_f8,param_9 + 0x10);
  fVar32 = 0.0;
  fVar31 = 0.0;
  fVar33 = 0.0;
  fVar26 = SQRT(fVar14 * fVar14 + param_2 * param_2 + param_3 * param_3);
  fVar25 = 0.0;
  if (fVar26 != 0.0) {
    fVar26 = 1.0 / fVar26;
    fVar32 = fVar14 * fVar26;
    fVar31 = param_2 * fVar26;
    fVar33 = param_3 * fVar26;
  }
  fVar20 = param_7[2] * fVar31 - param_7[1] * fVar33;
  fVar27 = *param_7 * fVar33 - param_7[2] * fVar32;
  fVar28 = param_7[1] * fVar32 - *param_7 * fVar31;
  fVar17 = 0.0;
  fVar26 = SQRT(fVar20 * fVar20 + fVar27 * fVar27 + fVar28 * fVar28);
  fVar14 = 0.0;
  if (fVar26 != 0.0) {
    fVar26 = 1.0 / fVar26;
    fVar25 = fVar20 * fVar26;
    fVar14 = fVar27 * fVar26;
    fVar17 = fVar28 * fVar26;
  }
  fVar28 = -fVar25;
  fVar27 = -fVar17;
  fVar26 = -fVar14;
  fVar20 = fVar28;
  lVar8 = param_9 + 0x28;
  if (param_11 != 0) {
    fVar27 = fVar17;
    fVar26 = fVar14;
    fVar20 = fVar25;
    lVar8 = param_9 + 0x1c;
  }
  fVar14 = (float)FUN__text__0051dafc(&local_f8,lVar8);
  fVar25 = SQRT(fVar14 * fVar14 + fVar17 * fVar17 + fVar28 * fVar28);
  if (fVar25 == 0.0) {
    fVar14 = 0.0;
    fVar17 = 0.0;
    dVar19 = 0.0;
  }
  else {
    fVar25 = 1.0 / fVar25;
    fVar14 = fVar14 * fVar25;
    fVar17 = fVar17 * fVar25;
    dVar19 = (double)(ulong)(uint)(fVar28 * fVar25);
  }
  fVar14 = (float)NEON_fminnm(fVar14 * fVar20 + fVar26 * fVar17 + fVar27 * SUB84(dVar19,0),
                              0x3f800000);
  if (fVar14 <= -1.0) {
    fVar14 = -1.0;
  }
  fVar25 = acosf(fVar14);
  fVar26 = (float)(**(code **)(**(long **)(param_5 + 0x10) + 0x20))();
  dVar23 = (double)(ulong)(uint)(fVar26 * fVar25);
  fVar14 = -(fVar26 * fVar25);
  if (param_11 != 1) {
    fVar14 = fVar26 * fVar25;
  }
  fVar25 = sinf(fVar14);
  fVar14 = cosf(fVar14);
  fVar17 = *param_7;
  fVar26 = param_7[1];
  fVar20 = param_7[2];
  if (param_13 != (undefined8 *)0x0) {
    local_190 = (double)FUN__text__0051d9b8(&local_f8,param_9 + 4);
    fVar21 = *(float *)(param_9 + 0x50);
    fVar27 = *(float *)(param_9 + 0x10) * fVar21;
    fStack_c4 = *(float *)(param_9 + 0x14) * fVar21;
    local_c8 = SUB41(fVar27,0);
    cStack_c7 = (char)((uint)fVar27 >> 8);
    uStack_c6 = (undefined2)((uint)fVar27 >> 0x10);
    uStack_c0 = *(float *)(param_9 + 0x18) * fVar21;
    local_188 = dVar23;
    local_180 = dVar19;
    fVar27 = fStack_c4;
    fVar28 = (float)FUN__text__0051dafc(&local_f8,&local_c8);
    uVar13 = *param_13;
    local_1d0 = local_190 + (double)fVar28;
    dVar19 = local_188 + (double)fVar27;
    dVar23 = local_180 + (double)fVar21;
    dStack_1c8 = dVar19;
    local_1c0 = dVar23;
    uVar15 = FUN__text__0051da68(param_13,&local_190);
    local_c8 = (char)uVar15;
    cStack_c7 = (char)((uint)uVar15 >> 8);
    uStack_c6 = (undefined2)((uint)uVar15 >> 0x10);
    uVar18 = SUB84(dVar19,0);
    uVar22 = SUB84(dVar23,0);
    uStack_c0._0_2_ = SUB82(dVar23,0);
    uStack_c0._2_2_ = (undefined2)((ulong)dVar23 >> 0x10);
    fStack_c4 = (float)uVar18;
    uVar15 = FUN__text__00516f44(uVar13,&local_c8);
    uVar13 = *param_13;
    uVar16 = FUN__text__0051da68(param_13,&local_1d0);
    local_c8 = (char)uVar16;
    cStack_c7 = (char)((uint)uVar16 >> 8);
    uStack_c6 = (undefined2)((uint)uVar16 >> 0x10);
    uStack_c0._0_2_ = (undefined2)uVar22;
    uStack_c0._2_2_ = (undefined2)((uint)uVar22 >> 0x10);
    fStack_c4 = (float)uVar18;
    uVar16 = FUN__text__00516f44(uVar13,&local_c8);
    FUN__text__0051d4d0(param_13,&local_f8,uVar15,uVar16);
  }
  uVar4 = 0;
  if (*(char *)(param_4 + 0x24) != '\0') {
    uVar4 = *(uint *)(param_4 + 0x14);
  }
  uVar5 = *(uint *)(param_4 + 0x20);
  if (*(uint *)(param_4 + 0x20) <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 < *(uint *)(param_5 + 8)) {
    return;
  }
  fVar27 = *(float *)(param_5 + 0x18) -
           SQRT(*param_7 * *param_7 + param_7[1] * param_7[1] + param_7[2] * param_7[2]);
  *(float *)(param_5 + 0x18) = fVar27;
  if (fVar27 <= 0.0) {
    return;
  }
  local_100 = param_7[2];
  local_108._0_4_ = (float)*(undefined8 *)param_7;
  local_108._4_4_ = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
  fVar27 = SQRT((float)local_108 * (float)local_108 + local_108._4_4_ * local_108._4_4_ +
                local_100 * local_100);
  if (fVar27 == 0.0) {
    fVar28 = 0.0;
    fVar21 = 0.0;
    local_108 = 0;
    local_100 = 0.0;
    if (param_14 == (float *)0x0) goto LAB__text__0053b5a8;
LAB__text__0053b544:
    fVar27 = (float)NEON_fminnm(*param_14 * fVar28 + fVar21 * param_14[1] + local_100 * param_14[2],
                                0x3f800000);
    if (fVar27 <= -1.0) {
      fVar27 = -1.0;
    }
    fVar27 = acosf(fVar27);
    fVar27 = *(float *)(param_5 + 0x1c) + fVar27 * -0.31830987;
    *(float *)(param_5 + 0x1c) = fVar27;
  }
  else {
    fVar27 = 1.0 / fVar27;
    fVar28 = (float)local_108 * fVar27;
    fVar21 = local_108._4_4_ * fVar27;
    local_100 = local_100 * fVar27;
    local_108 = CONCAT44(fVar21,fVar28);
    if (param_14 != (float *)0x0) goto LAB__text__0053b544;
LAB__text__0053b5a8:
    fVar27 = *(float *)(param_5 + 0x1c);
  }
  if (fVar27 <= 0.0) {
    return;
  }
  fVar27 = 1.0 - fVar14;
  fVar28 = fVar33 * fVar31 * fVar27;
  fVar29 = fVar27 * fVar32 * fVar31;
  fVar21 = fVar27 * fVar32 * fVar33;
  fVar30 = (fVar14 + fVar27 * fVar33 * fVar33) * fVar20 + fVar26 * (fVar28 + fVar25 * fVar32) +
           fVar17 * (fVar21 - fVar25 * fVar31);
  uVar24 = (ulong)(uint)param_12[2];
  uVar11 = (ulong)(uint)param_12[1];
  fVar28 = (fVar14 + fVar27 * fVar31 * fVar31) * fVar26 + fVar20 * (fVar28 - fVar25 * fVar32) +
           fVar17 * (fVar29 + fVar25 * fVar33);
  fVar25 = (fVar14 + fVar27 * fVar32 * fVar32) * fVar17 + fVar26 * (fVar29 - fVar25 * fVar33) +
           fVar20 * (fVar21 + fVar25 * fVar31);
  local_114 = FUN__text__005171a0(*param_12,param_9,param_11 == 0);
  uStack_110 = (undefined4)uVar11;
  local_10c = (undefined4)uVar24;
  local_130 = FUN__text__0051d9b8(&local_f8,&local_114);
  lVar8 = _DAT_008a4288;
  fVar14 = SQRT(fVar25 * fVar25 + fVar28 * fVar28 + fVar30 * fVar30);
  if (fVar14 == 0.0) {
    fVar25 = 0.0;
    fVar28 = 0.0;
    fVar30 = 0.0;
  }
  else {
    fVar14 = 1.0 / fVar14;
    fVar25 = fVar25 * fVar14;
    fVar28 = fVar28 * fVar14;
    fVar30 = fVar30 * fVar14;
  }
  uVar15 = *(undefined4 *)(param_4 + 0x28);
  uVar4 = *(uint *)(param_5 + 8);
  uVar5 = *(uint *)(param_4 + 0x20);
  *(uint *)(param_5 + 8) = uVar4 + 1;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_134 = (float)NEON_fminnm(uVar15,*(undefined4 *)(param_5 + 0x18));
  *param_5 = uVar5 > uVar4 || uVar4 == uVar5;
  local_190 = (double)(lVar8 + 0x10);
  local_13c = local_134 * fVar25;
  fStack_138 = local_134 * fVar28;
  local_134 = local_134 * fVar30;
  uStack_128 = uVar11;
  local_120 = uVar24;
  if (uVar5 <= uVar4 && uVar4 != uVar5) {
    local_160 = *(undefined8 *)(param_17 + 0x30);
    uVar4 = *(uint *)(param_17 + 0x40);
    if ((uVar4 != 0) && (lVar9 = FUN__text__00400f90(0xb,(ulong)uVar4 * 0x28,0x10), lVar9 != 0)) {
      lVar10 = 0;
      while( true ) {
        if (lVar9 != 0) {
          puVar1 = (undefined8 *)(lVar9 + lVar10);
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        if ((ulong)uVar4 * 0x28 + -0x28 == lVar10) break;
        lVar10 = lVar10 + 0x28;
      }
      local_150 = CONCAT44(uVar4,uVar4);
      local_158 = lVar9;
      if (*(int *)(param_17 + 0x40) != 0) {
        lVar10 = 0;
        uVar11 = 0;
        do {
          uVar11 = uVar11 + 1;
          puVar1 = (undefined8 *)(*(long *)(param_17 + 0x38) + lVar10);
          puVar2 = (undefined8 *)(lVar9 + lVar10);
          lVar10 = lVar10 + 0x28;
          uVar12 = puVar1[4];
          uVar13 = puVar1[1];
          uVar3 = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[4] = uVar12;
          puVar2[1] = uVar13;
          puVar2[2] = uVar3;
          *puVar2 = *puVar1;
        } while (uVar11 < *(uint *)(param_17 + 0x40));
      }
    }
  }
  else {
    param_17 = FUN__text__0053baa8(param_15,param_17,&local_130,&local_13c,local_f8,uStack_f0,
                                   param_11,&local_114);
    if (param_17 == 0) {
      return;
    }
    local_160 = *(undefined8 *)(param_17 + 0x30);
    local_150 = local_150 & 0xffffffff00000000;
    uVar4 = *(uint *)(param_17 + 0x40);
    if (uVar4 != 0) {
      lVar9 = FUN__text__00400f90(0xb,(ulong)uVar4 * 0x28,0x10);
      if (lVar9 == 0) goto LAB__text__0053b8b0;
      lVar10 = 0;
      local_150 = (ulong)uVar4 << 0x20;
      while( true ) {
        if (lVar9 != 0) {
          puVar1 = (undefined8 *)(lVar9 + lVar10);
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        local_158 = lVar9;
        if ((ulong)uVar4 * 0x28 + -0x28 == lVar10) break;
        lVar10 = lVar10 + 0x28;
      }
    }
    local_150 = CONCAT44(local_150._4_4_,uVar4);
    if (*(int *)(param_17 + 0x40) != 0) {
      lVar9 = 0;
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_17 + 0x38) + lVar9);
        puVar2 = (undefined8 *)(local_158 + lVar9);
        lVar9 = lVar9 + 0x28;
        uVar12 = puVar1[4];
        uVar13 = puVar1[1];
        uVar3 = puVar1[2];
        puVar2[3] = puVar1[3];
        puVar2[4] = uVar12;
        puVar2[1] = uVar13;
        puVar2[2] = uVar3;
        *puVar2 = *puVar1;
      } while (uVar11 < *(uint *)(param_17 + 0x40));
    }
  }
LAB__text__0053b8b0:
  lVar9 = _DAT_008a4290;
  local_188 = *(double *)(param_17 + 8);
  local_180 = *(double *)(param_17 + 0x10);
  uStack_178 = *(undefined8 *)(param_17 + 0x18);
  local_170 = *(undefined8 *)(param_17 + 0x20);
  local_168 = *(undefined4 *)(param_17 + 0x28);
  local_148 = (ulong)*(uint *)(param_17 + 0x48);
  local_1a0 = 0;
  local_198 = 0;
  local_1c0 = 0.0;
  uStack_1b8 = 0;
  local_1d0 = (double)(_DAT_008a4290 + 0x10);
  local_1b0 = 0;
  local_1a8 = 0;
  dStack_1c8 = 0.0;
  if (((param_16 == 0) || (param_5[1] == '\0')) ||
     (param_18 = FUN__text__0053bc54(param_16,&local_130,&local_13c), param_18 != 0)) {
    FUN__text__0053df80(&local_1d0,param_18);
    uVar13 = *(undefined8 *)(param_5 + 10);
    cVar6 = *param_5;
    uVar12 = *(undefined8 *)(param_5 + 2);
    cVar7 = param_5[1];
    local_1e0 = (undefined6)*(undefined8 *)(param_5 + 0x12);
    uStack_1da = (undefined2)*(undefined8 *)(param_5 + 0x18);
    uStack_1d8 = (undefined6)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x10);
    if (cVar6 != '\0') {
      uVar3 = *(undefined8 *)(param_5 + 2);
      local_b6 = (undefined6)*(undefined8 *)(param_5 + 0x12);
      uStack_b0 = (undefined2)*(undefined8 *)(param_5 + 0x18);
      uStack_ae = (undefined6)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x10);
      uStack_c6 = (undefined2)uVar3;
      fStack_c4 = (float)((ulong)uVar3 >> 0x10);
      uStack_c0._0_2_ = (undefined2)((ulong)uVar3 >> 0x30);
      uStack_c0._2_2_ = (undefined2)*(undefined8 *)(param_5 + 10);
      uStack_bc = (undefined6)((ulong)*(undefined8 *)(param_5 + 10) >> 0x10);
      local_c8 = cVar6;
      cStack_c7 = cVar7;
      FUN__text__0053a4ec(param_4,&local_c8,&local_130,&local_13c,param_8,&local_f8,&local_108,
                          param_15,param_16,&local_190,&local_1d0);
    }
    if (cVar7 != '\0') {
      local_d6 = local_1e0;
      local_e8 = cVar6;
      local_e7 = cVar7;
      local_e6 = uVar12;
      local_de = uVar13;
      uStack_d0 = uStack_1da;
      uStack_ce = uStack_1d8;
      FUN__text__0053a9d0(param_4,&local_e8,&local_130,&local_13c,param_8,&local_f8,&local_108,
                          param_15,param_16,&local_190,&local_1d0);
    }
    lVar8 = _DAT_008a4288;
    local_1d0 = (double)(lVar9 + 0x10);
    if (local_1a0 != 0) {
      local_198 = local_198 & 0xffffffff00000000;
      FUN__text__00400fc0(0xe);
    }
  }
  if (local_158 != 0) {
    local_190 = (double)(lVar8 + 0x10);
    local_150 = local_150 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
  }
  return;
}


