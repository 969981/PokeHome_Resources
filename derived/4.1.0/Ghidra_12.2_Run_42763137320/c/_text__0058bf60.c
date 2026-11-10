/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058bf60; name: FUN_.text__0058bf60
 */


void FUN__text__0058bf60(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                        long param_7,long param_8,float *param_9,undefined8 param_10,uint param_11,
                        uint param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  undefined1 (*pauVar26) [16];
  ulong uVar27;
  float *pfVar28;
  float *pfVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  bVar12 = param_4 == 0;
  bVar13 = param_3 == 0;
  uVar4 = param_2 >> 2;
  uVar5 = param_1 >> 2;
  uVar6 = uVar4;
  if (bVar13) {
    uVar6 = uVar5;
  }
  uVar7 = uVar4;
  if (bVar13 || bVar12) {
    uVar7 = uVar5;
  }
  pauVar21 = (undefined1 (*) [16])(param_6 + (long)(int)uVar6 * 4);
  lVar19 = param_8 + (long)(param_2 >> 1) * 4;
  if (bVar13 || bVar12) {
    lVar19 = param_7 + (long)(param_1 >> 1) * 4;
    param_8 = param_7;
  }
  uVar8 = uVar4 - uVar5;
  uVar6 = uVar8;
  if (!bVar13 || bVar12) {
    uVar6 = 0;
  }
  if (((param_3 != 0) && (uVar4 != uVar5)) && (param_4 == 0)) {
    uVar4 = uVar8;
    if ((int)param_12 <= (int)uVar8) {
      uVar4 = param_12;
    }
    if ((int)param_11 <= (int)uVar8) {
      uVar8 = param_11;
    }
    pauVar26 = (undefined1 (*) [16])((long)pauVar21 + (long)(int)uVar4 * -4);
    param_12 = param_12 - uVar4;
    pauVar21 = (undefined1 (*) [16])((long)pauVar21 + (long)(int)uVar8 * -4);
    param_11 = param_11 - uVar8;
    if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pauVar21 & 0xf) == 0)) &&
       (((ulong)pauVar26 & 0xf) == 0)) {
      pfVar16 = param_9;
      if ((int)uVar8 < (int)uVar4) {
        do {
          pauVar21 = pauVar21 + -1;
          auVar31 = NEON_rev64(*pauVar21,4);
          auVar31 = NEON_ext(auVar31,auVar31,8,1);
          param_9 = pfVar16 + 4;
          *(long *)(pfVar16 + 2) = auVar31._8_8_;
          *(long *)pfVar16 = auVar31._0_8_;
          pfVar16 = param_9;
        } while (pauVar26 < pauVar21);
      }
    }
    else {
      pfVar16 = param_9;
      if ((int)uVar8 < (int)uVar4) {
        do {
          pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 0xc);
          param_9 = pfVar16 + 1;
          *pfVar16 = *(float *)*pauVar21;
          pfVar16 = param_9;
        } while (pauVar26 < pauVar21);
      }
    }
  }
  uVar4 = param_12;
  if ((int)uVar7 <= (int)param_12) {
    uVar4 = uVar7;
  }
  uVar5 = param_11;
  if ((int)uVar7 <= (int)param_11) {
    uVar5 = uVar7;
  }
  uVar30 = (long)pauVar21 + (long)(int)uVar4 * -4;
  param_12 = param_12 - uVar4;
  uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
  param_11 = param_11 - uVar5;
  uVar27 = (long)pauVar21 - uVar15;
  lVar22 = (param_5 + (long)(int)uVar7 * 4) - uVar15;
  lVar19 = lVar19 - uVar15;
  param_8 = param_8 + uVar15;
  if (((((ulong)param_9 & 0xf) == 0) && ((uVar27 & 0xf) == 0)) && ((uVar30 & 0xf) == 0)) {
    if ((int)uVar4 <= (int)uVar5) goto LAB__text__0058c160;
    lVar25 = 0;
    lVar14 = 0;
    do {
      lVar1 = lVar22 + lVar25;
      lVar2 = uVar27 + lVar25;
      uVar34 = *(undefined8 *)(lVar19 + lVar25 + -8);
      uVar33 = *(undefined8 *)(lVar19 + lVar25 + -0x10);
      lVar25 = lVar25 + -0x10;
      auVar31 = NEON_rev64(*(undefined1 (*) [16])(param_8 + lVar14),4);
      uVar36 = *(undefined8 *)(lVar1 + -8);
      uVar35 = *(undefined8 *)(lVar1 + -0x10);
      uVar15 = uVar27 + lVar25;
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      auVar32._0_4_ = auVar31._0_4_ * (float)uVar35 + (float)uVar33 * *(float *)(lVar2 + -0x10);
      auVar32._4_4_ =
           auVar31._4_4_ * (float)((ulong)uVar35 >> 0x20) +
           (float)((ulong)uVar33 >> 0x20) * *(float *)(lVar2 + -0xc);
      auVar32._8_4_ = auVar31._8_4_ * (float)uVar36 + (float)uVar34 * *(float *)(lVar2 + -8);
      auVar32._12_4_ =
           auVar31._12_4_ * (float)((ulong)uVar36 >> 0x20) +
           (float)((ulong)uVar34 >> 0x20) * *(float *)(lVar2 + -4);
      auVar31 = NEON_rev64(auVar32,4);
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      ((undefined8 *)((long)param_9 + lVar14))[1] = auVar31._8_8_;
      *(undefined8 *)((long)param_9 + lVar14) = auVar31._0_8_;
      lVar14 = lVar14 + 0x10;
    } while (uVar30 < uVar15);
  }
  else {
    if ((int)uVar4 <= (int)uVar5) goto LAB__text__0058c160;
    lVar25 = 0;
    lVar14 = 0;
    do {
      lVar1 = lVar22 + lVar25;
      lVar2 = uVar27 + lVar25;
      lVar3 = lVar19 + lVar25;
      lVar25 = lVar25 + -4;
      uVar15 = uVar27 + lVar25;
      *(float *)((long)param_9 + lVar14) =
           *(float *)(lVar3 + -4) * *(float *)(lVar2 + -4) +
           *(float *)(lVar1 + -4) * *(float *)(param_8 + lVar14);
      lVar14 = lVar14 + 4;
    } while (uVar30 < uVar15);
  }
  param_9 = (float *)((long)param_9 - lVar25);
  lVar22 = lVar22 + lVar25;
  lVar19 = lVar19 + lVar25;
  param_8 = param_8 - lVar25;
  uVar27 = uVar15;
LAB__text__0058c160:
  uVar4 = param_12;
  if ((int)uVar7 <= (int)param_12) {
    uVar4 = uVar7;
  }
  uVar5 = param_11;
  if ((int)uVar7 <= (int)param_11) {
    uVar5 = uVar7;
  }
  pfVar16 = (float *)(uVar27 + (long)(int)uVar4 * 4);
  uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
  pfVar28 = (float *)(uVar27 + uVar15);
  pfVar18 = (float *)(lVar22 + uVar15);
  if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pfVar28 & 0xf) == 0)) &&
     (((ulong)pfVar16 & 0xf) == 0)) {
    if ((int)uVar5 < (int)uVar4) {
      pauVar21 = (undefined1 (*) [16])(lVar19 + (long)(int)uVar5 * -4);
      pfVar17 = param_9;
      pfVar23 = pfVar18;
      pfVar24 = (float *)(param_8 + uVar15);
      do {
        pauVar21 = pauVar21 + -1;
        auVar31 = NEON_rev64(*pauVar21,4);
        pfVar20 = pfVar28 + 4;
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        fVar11 = pfVar28[3];
        auVar31 = NEON_ext(auVar31,auVar31,8,1);
        pfVar18 = pfVar23 + 4;
        uVar34 = *(undefined8 *)(pfVar23 + 2);
        uVar33 = *(undefined8 *)pfVar23;
        uVar36 = *(undefined8 *)(pfVar24 + 2);
        uVar35 = *(undefined8 *)pfVar24;
        param_9 = pfVar17 + 4;
        pfVar17[2] = auVar31._8_4_ * pfVar28[2] - (float)uVar36 * (float)uVar34;
        pfVar17[3] = auVar31._12_4_ * fVar11 -
                     (float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
        *pfVar17 = auVar31._0_4_ * fVar9 - (float)uVar35 * (float)uVar33;
        pfVar17[1] = auVar31._4_4_ * fVar10 -
                     (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
        pfVar17 = param_9;
        pfVar23 = pfVar18;
        pfVar24 = pfVar24 + 4;
        pfVar28 = pfVar20;
      } while (pfVar20 < pfVar16);
    }
  }
  else if ((int)uVar5 < (int)uVar4) {
    pfVar20 = (float *)(lVar19 + (long)(int)uVar5 * -4);
    pfVar17 = param_9;
    pfVar23 = pfVar18;
    pfVar24 = (float *)(param_8 + uVar15);
    do {
      pfVar20 = pfVar20 + -1;
      pfVar29 = pfVar28 + 1;
      pfVar18 = pfVar23 + 1;
      param_9 = pfVar17 + 1;
      *pfVar17 = *pfVar20 * *pfVar28 - *pfVar24 * *pfVar23;
      pfVar17 = param_9;
      pfVar23 = pfVar18;
      pfVar24 = pfVar24 + 1;
      pfVar28 = pfVar29;
    } while (pfVar29 < pfVar16);
  }
  if (uVar6 != 0) {
    uVar7 = param_12 - uVar4;
    if ((int)uVar6 <= (int)(param_12 - uVar4)) {
      uVar7 = uVar6;
    }
    uVar4 = param_11 - uVar5;
    if ((int)uVar6 <= (int)(param_11 - uVar5)) {
      uVar4 = uVar6;
    }
    pfVar16 = pfVar18 + (int)uVar7;
    pfVar18 = pfVar18 + (int)uVar4;
    if ((((ulong)param_9 & 0xf) == 0 && ((ulong)pfVar18 & 0xf) == 0) && ((ulong)pfVar16 & 0xf) == 0)
    {
      if ((int)uVar4 < (int)uVar7) {
        do {
          pfVar28 = pfVar18 + 4;
          fVar9 = *pfVar18;
          fVar10 = pfVar18[1];
          fVar11 = pfVar18[3];
          param_9[2] = -pfVar18[2];
          param_9[3] = -fVar11;
          *param_9 = -fVar9;
          param_9[1] = -fVar10;
          param_9 = param_9 + 4;
          pfVar18 = pfVar28;
        } while (pfVar28 < pfVar16);
      }
    }
    else if ((int)uVar4 < (int)uVar7) {
      do {
        pfVar28 = pfVar18 + 1;
        *param_9 = -*pfVar18;
        param_9 = param_9 + 1;
        pfVar18 = pfVar28;
      } while (pfVar28 < pfVar16);
    }
  }
  return;
}


