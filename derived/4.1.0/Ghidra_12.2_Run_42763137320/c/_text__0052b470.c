/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b470; name: FUN_.text__0052b470
 */


void FUN__text__0052b470(float param_1,float param_2,long param_3,double *param_4,float *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  double *pdVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  float fVar18;
  double dVar19;
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
  double dVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  local_b8 = *param_5;
  local_b4 = param_5[1];
  local_a4 = param_5[2];
  local_a8 = param_5[3];
  local_ac = param_5[4];
  local_b0 = param_5[5];
  *(undefined8 *)(param_3 + 0xfc) = 0;
  uVar16 = *(undefined8 *)(param_5 + 10);
  dVar13 = *(double *)(param_5 + 6);
  *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_3 + 0xf0) = uVar16;
  pdVar8 = (double *)(param_3 + 0xe0);
  *pdVar8 = dVar13;
  FUN__text__0052ba80(param_3,param_3 + 8,pdVar8);
  dVar17 = *pdVar8;
  dVar13 = *(double *)(param_3 + 0xe8);
  dVar14 = *(double *)(param_3 + 0xf0);
  uVar2 = *(int *)(param_3 + 0xf8) - 1;
  fVar31 = *(float *)(param_3 + 0x100);
  dVar19 = dVar17;
  if (-1 < (int)uVar2) {
    fVar39 = *(float *)(param_3 + 0xfc);
    lVar11 = (ulong)uVar2 + 0x45;
    iVar9 = *(int *)(param_3 + 0xf8) + -2;
    lVar10 = (ulong)uVar2 * 0x18 + 0x20;
    do {
      pdVar8 = (double *)(param_3 + lVar10);
      dVar37 = *pdVar8;
      dVar35 = pdVar8[1];
      dVar33 = pdVar8[2];
      lVar6 = param_3 + (long)iVar9 * 0x18;
      fVar24 = (float)(dVar35 - dVar13);
      fVar26 = (float)(dVar37 - dVar19);
      fVar30 = (float)(dVar33 - dVar14);
      fVar27 = (float)(*(double *)(lVar6 + 0x28) - dVar35);
      fVar25 = (float)(*(double *)(lVar6 + 0x20) - dVar37);
      fVar28 = (float)(*(double *)(lVar6 + 0x30) - dVar33);
      fVar18 = SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar30 * fVar30);
      fVar29 = SQRT(fVar25 * fVar25 + fVar27 * fVar27 + fVar28 * fVar28) * fVar18;
      if (0.001 < fVar29) {
        fVar31 = fVar31 + fVar18;
        *(float *)(param_3 + 0x100) = fVar31;
        fVar18 = (fVar25 * fVar26 + fVar24 * fVar27 + fVar30 * fVar28) / fVar29;
        bVar3 = false;
        bVar4 = true;
        bVar5 = false;
        if (fVar18 < 0.999998) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar18)) {
            bVar3 = fVar18 < -1.0;
            bVar4 = fVar18 == -1.0;
            bVar5 = false;
          }
        }
        dVar13 = dVar35;
        dVar14 = dVar33;
        dVar19 = dVar37;
        if (!(bVar4 || bVar3 != bVar5)) {
          fVar12 = (float)NEON_fminnm(fVar18,0x3f800000);
          if (fVar12 <= -1.0) {
            fVar12 = -1.0;
          }
          fVar12 = acosf(fVar12);
          fVar29 = 1.0 / fVar29;
          *(float *)(param_3 + lVar11 * 4) = fVar12;
          fVar39 = (float)NEON_fminnm(fVar39 + fVar12 * 0.31830987,0x3f800000);
          *(float *)(param_3 + 0xfc) = fVar39;
          fVar20 = fVar29 * (fVar25 * fVar30 - fVar28 * fVar26);
          fVar22 = fVar29 * (fVar27 * fVar26 - fVar25 * fVar24);
          fVar12 = 0.0;
          fVar15 = 1.0;
          fVar29 = fVar29 * (fVar28 * fVar24 - fVar27 * fVar30);
          fVar27 = 0.0;
          fVar25 = SQRT(fVar29 * fVar29 + fVar20 * fVar20 + fVar22 * fVar22);
          if (0.0 < fVar25) {
            fVar27 = 1.0 / fVar25;
            fVar12 = fVar27 * fVar29;
            fVar15 = fVar27 * fVar20;
            fVar27 = fVar27 * fVar22;
          }
          fVar22 = 1.0 - fVar18;
          fVar28 = fVar15 * fVar27 * fVar22;
          local_a4 = local_a4 + fVar30;
          fVar34 = local_a8 + fVar26;
          fVar36 = local_ac + fVar24;
          local_b0 = local_b0 + fVar30;
          fVar29 = fVar12 * fVar22 * fVar15;
          fVar20 = fVar27 * fVar12 * fVar22;
          fVar21 = fVar18 + fVar22 * fVar12 * fVar12;
          fVar23 = fVar18 + fVar22 * fVar15 * fVar15;
          fVar18 = fVar18 + fVar22 * fVar27 * fVar27;
          fVar22 = fVar28 + fVar12 * fVar25;
          fVar28 = fVar28 - fVar12 * fVar25;
          fVar32 = local_b4 + fVar24;
          fVar12 = local_b8 + fVar26;
          fVar38 = fVar29 - fVar27 * fVar25;
          fVar29 = fVar27 * fVar25 + fVar29;
          fVar27 = fVar20 - fVar15 * fVar25;
          fVar20 = fVar20 + fVar15 * fVar25;
          local_a8 = fVar21 * fVar26 + fVar24 * fVar38 + fVar30 * fVar20;
          local_ac = fVar29 * fVar26 + fVar24 * fVar23 + fVar30 * fVar28;
          fVar24 = fVar27 * fVar26 + fVar24 * fVar22 + fVar30 * fVar18;
          local_b8 = (fVar21 * fVar12 + fVar32 * fVar38 + local_a4 * fVar20) - local_a8;
          local_b4 = (fVar29 * fVar12 + fVar32 * fVar23 + local_a4 * fVar28) - local_ac;
          local_ac = (fVar29 * fVar34 + fVar36 * fVar23 + local_b0 * fVar28) - local_ac;
          local_a4 = (fVar27 * fVar12 + fVar32 * fVar22 + local_a4 * fVar18) - fVar24;
          local_a8 = (fVar21 * fVar34 + fVar36 * fVar38 + local_b0 * fVar20) - local_a8;
          local_b0 = (fVar27 * fVar34 + fVar36 * fVar22 + local_b0 * fVar18) - fVar24;
        }
      }
      lVar6 = lVar11 + -0x45;
      lVar11 = lVar11 + -1;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + -0x18;
    } while (0 < lVar6);
    fVar31 = *(float *)(param_3 + 0x100);
  }
  dVar33 = *(double *)(param_3 + 8);
  dVar35 = *(double *)(param_3 + 0x10);
  dVar37 = *(double *)(param_3 + 0x18);
  fVar18 = (float)(dVar13 - dVar35);
  fVar39 = (float)(dVar19 - dVar33);
  fVar29 = (float)(dVar14 - dVar37);
  fVar24 = SQRT(fVar39 * fVar39 + fVar18 * fVar18 + fVar29 * fVar29);
  fVar31 = fVar24 + fVar31;
  *(float *)(param_3 + 0x100) = fVar31;
  if (fVar24 <= 0.0) {
    dVar13 = *(double *)(param_3 + 0xe8) - param_4[1];
    dVar14 = *(double *)(param_3 + 0xf0) - param_4[2];
    param_2 = (float)SQRT((dVar17 - *param_4) * (dVar17 - *param_4) + dVar13 * dVar13 +
                          dVar14 * dVar14) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_3 + 0x104) = param_2;
    uVar7 = *(undefined8 *)(param_5 + 4);
    uVar16 = *(undefined8 *)param_5;
    uVar1 = *(undefined8 *)(param_5 + 2);
    *(double *)(param_3 + 0x1e0) = *(double *)(param_3 + 0xf0);
    *(double *)(param_3 + 0x1d0) = dVar17;
    *(double *)(param_3 + 0x1d8) = *(double *)(param_3 + 0xe8);
    *(undefined8 *)(param_3 + 0x1c0) = uVar1;
    *(undefined8 *)(param_3 + 0x1c8) = uVar7;
    *(undefined8 *)(param_3 + 0x1b8) = uVar16;
    if (0.0 < param_1) {
      *(undefined4 *)(param_3 + 0x10c) = 0x42c80000;
    }
  }
  else {
    if (DAT_008ab25d == '\0') {
      fVar39 = (float)(dVar17 - dVar33);
      fVar18 = (float)(*(double *)(param_3 + 0xe8) - dVar35);
      fVar29 = (float)(*(double *)(param_3 + 0xf0) - dVar37);
      fVar31 = SQRT(fVar39 * fVar39 + fVar18 * fVar18 + fVar29 * fVar29);
      fVar24 = 1.0 / fVar31;
      *(float *)(param_3 + 0x100) = fVar31;
      if (fVar31 != 0.0) {
        fVar29 = fVar24 * fVar29;
        fVar18 = fVar24 * fVar18;
        fVar39 = fVar24 * fVar39;
      }
    }
    else {
      fVar24 = 1.0 / fVar24;
      fVar29 = fVar24 * fVar29;
      fVar18 = fVar24 * fVar18;
      fVar39 = fVar24 * fVar39;
    }
    if (0.0 < param_1) {
      if (fVar31 <= param_1) {
        if (fVar31 <= param_2) {
          fVar24 = 100.0;
        }
        else {
          fVar24 = ((fVar31 - param_2) * -50.0) / (param_1 - param_2) + 100.0;
        }
      }
      else {
        fVar24 = asinf(param_1 / fVar31);
        fVar24 = fVar24 * 31.830988;
      }
      *(float *)(param_3 + 0x10c) = fVar24;
    }
    dVar13 = (dVar33 + (double)(fVar31 * fVar39)) - *param_4;
    dVar14 = (dVar35 + (double)(fVar31 * fVar18)) - param_4[1];
    dVar19 = param_4[2];
    *(float *)(param_3 + 0x1b8) = local_b8;
    dVar19 = (dVar37 + (double)(fVar31 * fVar29)) - dVar19;
    fVar24 = fVar31 - param_2;
    if (fVar31 - param_2 <= 0.0001) {
      fVar24 = 0.0001;
    }
    *(double *)(param_3 + 0x1e0) = dVar37 + (double)(fVar24 * fVar29);
    *(double *)(param_3 + 0x1d0) = dVar33 + (double)(fVar24 * fVar39);
    *(double *)(param_3 + 0x1d8) = dVar35 + (double)(fVar24 * fVar18);
    param_2 = (float)SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar19 * dVar19) - param_2;
    *(float *)(param_3 + 0x1bc) = local_b4;
    *(float *)(param_3 + 0x1c0) = local_a4;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_3 + 0x104) = param_2;
    *(float *)(param_3 + 0x1c4) = local_a8;
    *(float *)(param_3 + 0x1c8) = local_ac;
    *(float *)(param_3 + 0x1cc) = local_b0;
  }
  return;
}


