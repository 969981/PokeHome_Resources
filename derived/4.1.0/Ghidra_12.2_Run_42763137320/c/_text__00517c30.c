/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00517c30; name: FUN_.text__00517c30
 */


undefined8
FUN__text__00517c30(float param_1,long param_2,long param_3,long param_4,double param_5,
                   float *param_6,double *param_7,float *param_8,undefined8 param_9,
                   undefined8 param_10,double *param_11,undefined1 param_12)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  double *pdVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
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
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_ac;
  float local_a4;
  
  fVar14 = param_6[1] - *(float *)(param_3 + 8);
  fVar13 = *param_6 - *(float *)(param_3 + 4);
  fVar15 = param_6[2] - *(float *)(param_3 + 0xc);
  fVar16 = *(float *)(param_3 + 0x1c) * fVar13 + fVar14 * *(float *)(param_3 + 0x20) +
           fVar15 * *(float *)(param_3 + 0x24);
  fVar13 = *(float *)(param_3 + 0x28) * fVar13 + fVar14 * *(float *)(param_3 + 0x2c) +
           fVar15 * *(float *)(param_3 + 0x30);
  uVar11 = 0xfffffffe;
  if (fVar16 < 0.0001 && -0.0001 < fVar13) {
    uVar11 = 1;
  }
  if (fVar13 < 0.0001 && -0.0001 < fVar16) {
    uVar11 = 0;
  }
  if (0.0001 < fVar13 && 0.0001 < fVar16 ||
      (fVar13 < 0.0001 && -0.0001 < fVar16) && (fVar16 < 0.0001 && -0.0001 < fVar13)) {
    uVar11 = 0xffffffff;
  }
  if ((uVar11 >> 7 & 1) != 0) {
    return 0;
  }
  local_ac = 0.0;
  local_a4 = 0.0;
  uVar8 = FUN__text__005170c0(param_3,param_8,param_10,&local_ac);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  fVar14 = *(float *)(param_4 + 0x3c) * local_ac._4_4_;
  fVar21 = *(float *)(param_4 + 0x10);
  fVar19 = *(float *)(param_4 + 0x14);
  fVar13 = *(float *)(param_4 + 0x38) * (float)local_ac;
  fVar15 = *(float *)(param_4 + 0x40) * local_a4;
  fVar16 = *(float *)(param_4 + 0x18);
  fVar18 = *(float *)(param_4 + 0x1c);
  fVar22 = fVar19 * fVar13 + fVar14 * fVar16 + fVar15 * fVar18;
  fVar26 = fVar21 * fVar21 - (fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18);
  fVar20 = (fVar16 * fVar15 - fVar18 * fVar14) * fVar21 + fVar19 * fVar22;
  fVar17 = (fVar18 * fVar13 - fVar15 * fVar19) * fVar21 + fVar16 * fVar22;
  fVar16 = (fVar19 * fVar14 - fVar16 * fVar13) * fVar21 + fVar18 * fVar22;
  dVar24 = *(double *)(param_4 + 0x20) + (double)(fVar20 + fVar20 + fVar13 * fVar26);
  dVar23 = *(double *)(param_4 + 0x28) + (double)(fVar17 + fVar17 + fVar14 * fVar26);
  dVar25 = *(double *)(param_4 + 0x30) + (double)(fVar16 + fVar16 + fVar15 * fVar26);
  if (param_5 != 0.0) {
    lVar1 = *(long *)((long)param_5 + 0x30);
    lVar2 = *(long *)((long)param_5 + 0x38);
    fVar16 = *(float *)(lVar2 + 0x18);
    fVar17 = *(float *)(lVar2 + 0x1c);
    fVar21 = *(float *)(lVar2 + 0x10);
    fVar20 = *(float *)(lVar2 + 0x14);
    fVar14 = (float)(dVar23 - *(double *)(lVar2 + 0x28));
    fVar13 = (float)(dVar24 - *(double *)(lVar2 + 0x20));
    fVar15 = (float)(dVar25 - *(double *)(lVar2 + 0x30));
    fVar22 = fVar16 * fVar13 - fVar20 * fVar14;
    fVar18 = fVar17 * fVar14 - fVar16 * fVar15;
    fVar19 = fVar20 * fVar15 - fVar17 * fVar13;
    fVar22 = fVar22 + fVar22;
    fVar18 = fVar18 + fVar18;
    fVar19 = fVar19 + fVar19;
    fVar13 = ((fVar13 - fVar16 * fVar22) + fVar21 * fVar18 + fVar17 * fVar19) /
             *(float *)(lVar2 + 0x38) - *(float *)(lVar1 + 4);
    fVar14 = ((fVar14 + fVar20 * fVar22 + fVar21 * fVar19) - fVar17 * fVar18) /
             *(float *)(lVar2 + 0x3c) - *(float *)(lVar1 + 8);
    fVar15 = ((fVar15 + fVar21 * fVar22 + fVar16 * fVar18) - fVar20 * fVar19) /
             *(float *)(lVar2 + 0x40) - *(float *)(lVar1 + 0xc);
    fVar16 = fVar13 * *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x20) * fVar14 +
             *(float *)(lVar1 + 0x24) * fVar15;
    fVar13 = *(float *)(lVar1 + 0x28) * fVar13 + fVar14 * *(float *)(lVar1 + 0x2c) +
             fVar15 * *(float *)(lVar1 + 0x30);
    bVar5 = false;
    bVar6 = true;
    bVar7 = false;
    if (0.0001 < fVar13) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar16)) {
        bVar5 = fVar16 < 0.0001;
        bVar6 = fVar16 == 0.0001;
        bVar7 = false;
      }
    }
    if (!bVar6 && bVar5 == bVar7 ||
        (0.0001 > fVar13 && fVar16 > -0.0001) && (0.0001 > fVar16 && fVar13 > -0.0001)) {
      return 0;
    }
    if ((0.0001 <= fVar13 || fVar16 <= -0.0001) && (0.0001 <= fVar16 || fVar13 <= -0.0001)) {
      return 0;
    }
  }
  fVar14 = (float)(param_7[1] - dVar23);
  fVar13 = (float)(*param_7 - dVar24);
  fVar15 = (float)(param_7[2] - dVar25);
  fVar16 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
  if (fVar16 < 0.001) {
    return 0;
  }
  fVar17 = 1.0 / fVar16;
  fVar13 = fVar17 * fVar13;
  fVar14 = fVar17 * fVar14;
  fVar17 = fVar17 * fVar15;
  if (param_5 == 0.0) {
    fVar18 = 0.0;
    fVar15 = fVar16;
  }
  else {
    lVar1 = *(long *)((long)param_5 + 0x30);
    lVar2 = *(long *)((long)param_5 + 0x38);
    fVar19 = *(float *)((long)param_5 + 0x24);
    fVar18 = *(float *)((long)param_5 + 0x28);
    fVar15 = *(float *)((long)param_5 + 0x2c);
    fVar28 = *(float *)(lVar2 + 0x18);
    fVar29 = *(float *)(lVar2 + 0x1c);
    fVar31 = *(float *)(lVar2 + 0x10);
    fVar30 = *(float *)(lVar2 + 0x14);
    fVar21 = fVar15 * fVar30 - fVar19 * fVar29;
    fVar20 = fVar18 * fVar29 - fVar15 * fVar28;
    fVar26 = fVar19 * fVar28 - fVar18 * fVar30;
    fVar21 = fVar21 + fVar21;
    fVar20 = fVar20 + fVar20;
    fVar26 = fVar26 + fVar26;
    fVar22 = 0.0;
    fVar27 = 0.0;
    fVar32 = ((fVar19 + fVar31 * fVar20 + fVar29 * fVar21) - fVar28 * fVar26) /
             *(float *)(lVar2 + 0x38);
    fVar33 = ((fVar18 - fVar29 * fVar20) + fVar30 * fVar26 + fVar31 * fVar21) /
             *(float *)(lVar2 + 0x3c);
    fVar34 = ((fVar15 + fVar28 * fVar20 + fVar31 * fVar26) - fVar30 * fVar21) /
             *(float *)(lVar2 + 0x40);
    fVar26 = 0.0;
    fVar21 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34);
    fVar20 = 0.0;
    if (fVar21 != 0.0) {
      fVar21 = 1.0 / fVar21;
      fVar22 = fVar32 * fVar21;
      fVar27 = fVar33 * fVar21;
      fVar26 = fVar34 * fVar21;
    }
    fVar35 = fVar28 * fVar13 - fVar30 * fVar14;
    fVar34 = fVar30 * fVar17 - fVar29 * fVar13;
    fVar21 = fVar29 * fVar14 - fVar28 * fVar17;
    fVar35 = fVar35 + fVar35;
    fVar34 = fVar34 + fVar34;
    fVar21 = fVar21 + fVar21;
    fVar32 = ((fVar13 - fVar28 * fVar35) + fVar29 * fVar34 + fVar21 * fVar31) /
             *(float *)(lVar2 + 0x38);
    fVar33 = (((fVar14 + fVar30 * fVar35) - fVar29 * fVar21) + fVar34 * fVar31) /
             *(float *)(lVar2 + 0x3c);
    fVar29 = 0.0;
    fVar30 = (((fVar17 + fVar28 * fVar21) - fVar30 * fVar34) + fVar35 * fVar31) /
             *(float *)(lVar2 + 0x40);
    fVar28 = SQRT(fVar33 * fVar33 + fVar30 * fVar30 + fVar32 * fVar32);
    fVar21 = 0.0;
    if (fVar28 != 0.0) {
      fVar28 = 1.0 / fVar28;
      fVar20 = fVar32 * fVar28;
      fVar21 = fVar33 * fVar28;
      fVar29 = fVar30 * fVar28;
    }
    fVar32 = *(float *)(lVar1 + 0x10);
    fVar31 = *(float *)(lVar1 + 0x14);
    fVar34 = *(float *)(lVar1 + 0x18);
    fVar33 = fVar34 * *(float *)(lVar1 + 0x20) - fVar31 * *(float *)(lVar1 + 0x24);
    fVar28 = *(float *)(lVar1 + 0x1c) * fVar31 - fVar32 * *(float *)(lVar1 + 0x20);
    fVar30 = fVar32 * *(float *)(lVar1 + 0x24) - *(float *)(lVar1 + 0x1c) * fVar34;
    fVar35 = fVar34 * fVar26 + fVar27 * fVar31 + fVar22 * fVar32;
    fVar22 = fVar22 - fVar32 * fVar35;
    fVar27 = fVar27 - fVar31 * fVar35;
    fVar26 = fVar26 - fVar34 * fVar35;
    fVar35 = fVar34 * fVar29 + fVar21 * fVar31 + fVar20 * fVar32;
    fVar20 = fVar35 * fVar32 - fVar20;
    fVar21 = fVar35 * fVar31 - fVar21;
    fVar29 = fVar35 * fVar34 - fVar29;
    if ((fVar20 * fVar33 + fVar30 * fVar21 + fVar28 * fVar29) /
        SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar29 * fVar29) + 1.1920929e-07 <
        (-(fVar26 * fVar28) - (fVar22 * fVar33 + fVar30 * fVar27)) /
        SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar26 * fVar26)) {
      return 0;
    }
    fVar15 = (float)NEON_fminnm(fVar15 * fVar17 + fVar14 * fVar18 + fVar13 * fVar19,0x3f800000);
    if (fVar15 <= -1.0) {
      fVar15 = -1.0;
    }
    fVar15 = acosf(fVar15);
    fVar18 = *(float *)((long)param_5 + 0x68) + fVar15 * 0.31830987;
    if (1.0 <= fVar18) {
      return 0;
    }
    fVar15 = *(float *)((long)param_5 + 0x5c) + fVar16;
  }
  fVar20 = (float)(dVar23 - param_11[1]);
  fVar19 = (float)(dVar24 - *param_11);
  fVar21 = (float)(dVar25 - param_11[2]);
  fVar22 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21);
  if ((0.001 <= fVar22) && (fVar22 + fVar15 <= param_1)) {
    fVar19 = (float)NEON_fminnm((fVar14 * fVar20 + fVar21 * fVar17 + fVar19 * fVar13) / fVar22,
                                0x3f800000);
    if (fVar19 <= -1.0) {
      fVar19 = -1.0;
    }
    fVar19 = acosf(fVar19);
    fVar20 = fVar18 + fVar19 * 0.31830987;
    if (fVar20 < 1.0) {
      dVar9 = (double)FUN__text__0051736c(fVar19,0x3f800000,param_3,param_4,param_12);
      uVar3 = *(uint *)(param_2 + 0x18);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = SUB84(dVar9,0) / uVar3;
        }
        pdVar12 = *(double **)
                   (*(long *)(param_2 + 0x10) + (ulong)(SUB84(dVar9,0) - uVar4 * uVar3) * 8);
        if (pdVar12 != (double *)0x0) {
          do {
            if (pdVar12[10] == dVar9) {
              fVar26 = *(float *)(param_2 + 0x38);
              fVar27 = (float)NEON_fminnm(fVar22 + fVar15,fVar26);
              fVar28 = *(float *)(pdVar12 + 0xd) + *(float *)((long)pdVar12 + 100) * 0.31830987;
              fVar29 = (float)NEON_fminnm(*(float *)((long)pdVar12 + 0x5c) +
                                          *(float *)(pdVar12 + 0xc),fVar26);
              fVar21 = 2.0;
              if (fVar28 < 1.0) {
                fVar21 = fVar28 + fVar28;
              }
              if ((fVar29 / fVar26 + fVar21) * 0.33333334 <
                  (fVar27 / fVar26 + fVar20 + fVar20) * 0.33333334) {
                dStack_c0 = (double)param_8[1];
                local_c8 = (double)*param_8;
                local_b8 = (double)param_8[2];
                uVar8 = FUN__text__005185c0(param_2,pdVar12,&local_c8);
                if ((uVar8 & 1) != 0) {
                  return 0;
                }
              }
              goto LAB__text__005183c8;
            }
            pdVar12 = (double *)pdVar12[9];
          } while (pdVar12 != (double *)0x0);
        }
      }
      pdVar12 = (double *)FUN__text__00519c90(param_2 + 8,param_3,param_4,param_12);
      if (pdVar12 == (double *)0x0) {
        return 0;
      }
      uVar8 = FUN__text__00519e80((long *)(param_2 + 0x10),pdVar12);
      if ((uVar8 & 1) == 0) {
        FUN__text__00518d90(param_2 + 8,pdVar12);
        return 0;
      }
LAB__text__005183c8:
      *pdVar12 = dVar24;
      pdVar12[1] = dVar23;
      pdVar12[2] = dVar25;
      *(float *)((long)pdVar12 + 0x24) = fVar13;
      *(float *)(pdVar12 + 5) = fVar14;
      *(float *)((long)pdVar12 + 0x2c) = fVar17;
      pdVar12[8] = param_5;
      *(float *)(pdVar12 + 0xb) = fVar16;
      *(float *)((long)pdVar12 + 0x5c) = fVar15;
      *(float *)(pdVar12 + 0xc) = fVar22;
      *(float *)(pdVar12 + 0xd) = fVar18;
      *(float *)((long)pdVar12 + 100) = fVar19;
      *(char *)((long)pdVar12 + 0x6c) = (char)uVar11;
      *(undefined1 *)((long)pdVar12 + 0x6d) = param_12;
      pdVar12[3] = local_ac;
      *(float *)(pdVar12 + 4) = local_a4;
      if (param_5 == 0.0) {
        cVar10 = '\x01';
      }
      else {
        cVar10 = *(char *)((long)param_5 + 0x6e) + '\x01';
      }
      *(char *)((long)pdVar12 + 0x6e) = cVar10;
      FUN__text__00519f20(param_2,pdVar12);
      return 1;
    }
  }
  return 0;
}


