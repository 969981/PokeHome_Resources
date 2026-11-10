/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005288e0; name: FUN_.text__005288e0
 */


void FUN__text__005288e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                        float param_6,float *param_7)

{
  long lVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  dVar6 = (double)(fStack000000000000002c * param_4);
  dVar8 = (double)(fStack000000000000002c * param_5);
  dVar10 = (double)(fStack000000000000002c * param_6);
  dVar16 = (double)(in_stack_00000030 * fStack0000000000000000);
  dVar14 = (double)(in_stack_00000030 * fStack0000000000000004);
  dVar12 = (double)(in_stack_00000030 * in_stack_00000008);
  dVar25 = in_stack_00000010 - (double)(fStack0000000000000028 * param_1);
  dVar27 = in_stack_00000018 - (double)(fStack0000000000000028 * param_2);
  dVar28 = in_stack_00000020 - (double)(fStack0000000000000028 * param_3);
  in_stack_00000010 = in_stack_00000010 + (double)(fStack0000000000000028 * param_1);
  in_stack_00000018 = in_stack_00000018 + (double)(fStack0000000000000028 * param_2);
  in_stack_00000020 = in_stack_00000020 + (double)(fStack0000000000000028 * param_3);
  dVar24 = dVar25 - dVar6;
  dVar29 = dVar27 - dVar8;
  dVar30 = dVar28 - dVar10;
  dVar20 = in_stack_00000018 - dVar8;
  dVar22 = in_stack_00000020 - dVar10;
  in_stack_00000018 = in_stack_00000018 + dVar8;
  in_stack_00000020 = in_stack_00000020 + dVar10;
  dVar18 = in_stack_00000010 - dVar6;
  in_stack_00000010 = in_stack_00000010 + dVar6;
  dVar27 = dVar27 + dVar8;
  dVar28 = dVar28 + dVar10;
  dVar25 = dVar25 + dVar6;
  dVar8 = 0.0;
  dVar11 = (dVar29 - dVar14) - in_stack_00000040;
  dVar6 = 0.0;
  dVar10 = 0.0;
  dVar9 = 0.0;
  dVar13 = (dVar24 - dVar16) - in_stack_00000038;
  dVar15 = (dVar30 - dVar12) - in_stack_00000048;
  dVar17 = SQRT(dVar13 * dVar13 + dVar11 * dVar11 + dVar15 * dVar15);
  if (dVar17 != 0.0) {
    dVar17 = 1.0 / dVar17;
    dVar8 = dVar13 * dVar17;
    dVar10 = dVar11 * dVar17;
    dVar9 = dVar15 * dVar17;
  }
  dVar15 = 0.0;
  dVar11 = (dVar29 + dVar14) - in_stack_00000040;
  dVar24 = (dVar24 + dVar16) - in_stack_00000038;
  dVar29 = (dVar30 + dVar12) - in_stack_00000048;
  dVar13 = SQRT(dVar24 * dVar24 + dVar11 * dVar11 + dVar29 * dVar29);
  dVar17 = 0.0;
  if (dVar13 != 0.0) {
    dVar13 = 1.0 / dVar13;
    dVar6 = dVar24 * dVar13;
    dVar17 = dVar11 * dVar13;
    dVar15 = dVar29 * dVar13;
  }
  dVar29 = 0.0;
  dVar21 = 0.0;
  dVar24 = (dVar20 + dVar14) - in_stack_00000040;
  dVar13 = 0.0;
  dVar30 = (dVar18 + dVar16) - in_stack_00000038;
  dVar19 = (dVar22 + dVar12) - in_stack_00000048;
  dVar23 = SQRT(dVar30 * dVar30 + dVar24 * dVar24 + dVar19 * dVar19);
  dVar11 = 0.0;
  if (dVar23 != 0.0) {
    dVar23 = 1.0 / dVar23;
    dVar13 = dVar30 * dVar23;
    dVar29 = dVar24 * dVar23;
    dVar21 = dVar19 * dVar23;
  }
  local_b8 = 0.0;
  dVar20 = (dVar20 - dVar14) - in_stack_00000040;
  dVar24 = (dVar18 - dVar16) - in_stack_00000038;
  dVar30 = (dVar22 - dVar12) - in_stack_00000048;
  dVar22 = SQRT(dVar24 * dVar24 + dVar20 * dVar20 + dVar30 * dVar30);
  dVar18 = 0.0;
  if (dVar22 != 0.0) {
    dVar22 = 1.0 / dVar22;
    dVar11 = dVar24 * dVar22;
    dVar18 = dVar20 * dVar22;
    local_b8 = dVar30 * dVar22;
  }
  dStack_a8 = 0.0;
  local_a0 = 0.0;
  dVar20 = (dVar27 - dVar14) - in_stack_00000040;
  local_b0 = 0.0;
  dVar22 = (dVar25 - dVar16) - in_stack_00000038;
  dVar24 = (dVar28 - dVar12) - in_stack_00000048;
  dVar30 = SQRT(dVar22 * dVar22 + dVar20 * dVar20 + dVar24 * dVar24);
  local_98 = 0.0;
  if (dVar30 != 0.0) {
    dVar30 = 1.0 / dVar30;
    local_b0 = dVar22 * dVar30;
    dStack_a8 = dVar20 * dVar30;
    local_a0 = dVar24 * dVar30;
  }
  local_88 = 0.0;
  dVar20 = (dVar27 + dVar14) - in_stack_00000040;
  dVar27 = (dVar25 + dVar16) - in_stack_00000038;
  dVar22 = (dVar28 + dVar12) - in_stack_00000048;
  dVar25 = SQRT(dVar27 * dVar27 + dVar20 * dVar20 + dVar22 * dVar22);
  local_90 = 0.0;
  if (dVar25 != 0.0) {
    dVar25 = 1.0 / dVar25;
    local_98 = dVar27 * dVar25;
    local_90 = dVar20 * dVar25;
    local_88 = dVar22 * dVar25;
  }
  dStack_78 = 0.0;
  local_70 = 0.0;
  dVar25 = (in_stack_00000018 + dVar14) - in_stack_00000040;
  local_80 = 0.0;
  dVar20 = (in_stack_00000010 + dVar16) - in_stack_00000038;
  dVar27 = (in_stack_00000020 + dVar12) - in_stack_00000048;
  dVar22 = SQRT(dVar20 * dVar20 + dVar25 * dVar25 + dVar27 * dVar27);
  local_68 = 0.0;
  if (dVar22 != 0.0) {
    dVar22 = 1.0 / dVar22;
    local_80 = dVar20 * dVar22;
    dStack_78 = dVar25 * dVar22;
    local_70 = dVar27 * dVar22;
  }
  in_stack_00000040 = (in_stack_00000018 - dVar14) - in_stack_00000040;
  local_58 = 0.0;
  in_stack_00000038 = (in_stack_00000010 - dVar16) - in_stack_00000038;
  in_stack_00000048 = (in_stack_00000020 - dVar12) - in_stack_00000048;
  dVar12 = SQRT(in_stack_00000038 * in_stack_00000038 + in_stack_00000040 * in_stack_00000040 +
                in_stack_00000048 * in_stack_00000048);
  local_60 = 0.0;
  if (dVar12 != 0.0) {
    dVar12 = 1.0 / dVar12;
    local_68 = in_stack_00000038 * dVar12;
    local_60 = in_stack_00000040 * dVar12;
    local_58 = in_stack_00000048 * dVar12;
  }
  lVar1 = 0;
  dVar12 = dVar8 * dVar6 + dVar17 * dVar10 + dVar15 * dVar9;
  uVar26 = NEON_fminnm(dVar12,0x3ff0000000000000);
  dVar14 = dVar8 * dVar13 + dVar29 * dVar10 + dVar21 * dVar9;
  uVar26 = NEON_fminnm(dVar14,uVar26);
  uVar26 = NEON_fminnm(dVar8 * dVar11 + dVar18 * dVar10 + local_b8 * dVar9,uVar26);
  uVar26 = NEON_fminnm(dVar8 * local_b0 + dStack_a8 * dVar10 + local_a0 * dVar9,uVar26);
  uVar26 = NEON_fminnm(dVar8 * local_98 + local_90 * dVar10 + local_88 * dVar9,uVar26);
  uVar26 = NEON_fminnm(dVar8 * local_80 + dStack_78 * dVar10 + local_70 * dVar9,uVar26);
  uVar26 = NEON_fminnm(dVar8 * local_68 + local_60 * dVar10 + local_58 * dVar9,uVar26);
  uVar26 = NEON_fminnm(dVar12,uVar26);
  dVar12 = dVar6 * dVar13 + dVar17 * dVar29 + dVar15 * dVar21;
  uVar26 = NEON_fminnm(dVar12,uVar26);
  uVar26 = NEON_fminnm(dVar6 * dVar11 + dVar18 * dVar17 + local_b8 * dVar15,uVar26);
  uVar26 = NEON_fminnm(dVar6 * local_b0 + dStack_a8 * dVar17 + local_a0 * dVar15,uVar26);
  uVar26 = NEON_fminnm(dVar6 * local_98 + local_90 * dVar17 + local_88 * dVar15,uVar26);
  uVar26 = NEON_fminnm(dVar6 * local_80 + dStack_78 * dVar17 + local_70 * dVar15,uVar26);
  uVar26 = NEON_fminnm(dVar6 * local_68 + local_60 * dVar17 + local_58 * dVar15,uVar26);
  uVar26 = NEON_fminnm(dVar14,uVar26);
  uVar26 = NEON_fminnm(dVar12,uVar26);
  uVar26 = NEON_fminnm(dVar13 * dVar11 + dVar18 * dVar29 + local_b8 * dVar21,uVar26);
  uVar26 = NEON_fminnm(dVar13 * local_b0 + dStack_a8 * dVar29 + local_a0 * dVar21,uVar26);
  uVar26 = NEON_fminnm(dVar13 * local_98 + local_90 * dVar29 + local_88 * dVar21,uVar26);
  uVar26 = NEON_fminnm(dVar13 * local_80 + dStack_78 * dVar29 + local_70 * dVar21,uVar26);
  uVar26 = NEON_fminnm(dVar13 * local_68 + local_60 * dVar29 + local_58 * dVar21,uVar26);
  pdVar2 = &local_b8;
  while( true ) {
    dVar14 = pdVar2[-2];
    dVar16 = pdVar2[-1];
    dVar12 = *pdVar2;
    uVar26 = NEON_fminnm(dVar14 * dVar8 + dVar10 * dVar16 + dVar9 * dVar12,uVar26);
    uVar26 = NEON_fminnm(dVar14 * dVar6 + dVar17 * dVar16 + dVar15 * dVar12,uVar26);
    dVar12 = (double)NEON_fminnm(dVar14 * dVar13 + dVar29 * dVar16 + dVar21 * dVar12,uVar26);
    if (((((lVar1 == 0) ||
          (dVar12 = (double)NEON_fminnm(pdVar2[-2] * dVar11 + dVar18 * pdVar2[-1] +
                                        local_b8 * *pdVar2,dVar12), lVar1 != -1)) &&
         (dVar12 = (double)NEON_fminnm(pdVar2[-2] * local_b0 + dStack_a8 * pdVar2[-1] +
                                       local_a0 * *pdVar2,dVar12), lVar1 == -2)) ||
        (dVar12 = (double)NEON_fminnm(pdVar2[-2] * local_98 + local_90 * pdVar2[-1] +
                                      local_88 * *pdVar2,dVar12), lVar1 != -3)) &&
       (dVar12 = (double)NEON_fminnm(pdVar2[-2] * local_80 + dStack_78 * pdVar2[-1] +
                                     local_70 * *pdVar2,dVar12), lVar1 == -4)) break;
    lVar1 = lVar1 + -1;
    uVar26 = NEON_fminnm(pdVar2[-2] * local_68 + local_60 * pdVar2[-1] + local_58 * *pdVar2,dVar12);
    pdVar2 = pdVar2 + 3;
  }
  fVar4 = (float)((local_60 + dStack_78 + local_90 + dStack_a8 + dVar18 + dVar29 + dVar17 + dVar10)
                 * 0.125);
  fVar5 = (float)((local_58 + local_70 + local_88 + local_a0 + local_b8 + dVar21 + dVar15 + dVar9) *
                 0.125);
  fVar3 = (float)((local_68 + local_80 + local_98 + local_b0 + dVar11 + dVar13 + dVar6 + dVar8) *
                 0.125);
  fVar7 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar7 == 0.0) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar3 = fVar3 * fVar7;
    fVar4 = fVar4 * fVar7;
    fVar5 = fVar5 * fVar7;
  }
  *param_7 = fVar3;
  param_7[1] = fVar4;
  param_7[2] = fVar5;
  fVar3 = (float)NEON_fminnm((float)dVar12,0x3f800000);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  acosf(fVar3);
  return;
}


