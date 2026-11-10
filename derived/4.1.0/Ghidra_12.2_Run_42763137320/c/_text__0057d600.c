/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057d600; name: FUN_.text__0057d600
 */


void FUN__text__0057d600(int *param_1,float *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
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
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20);
  fVar23 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar27 = -(float)param_1[0x1d];
  fVar29 = -(float)param_1[0x20];
  fVar22 = -(float)((ulong)*(undefined8 *)(param_1 + 0x19) >> 0x20);
  fVar25 = (float)param_1[0x1e];
  fVar18 = (float)*(undefined8 *)(param_1 + 0x19);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b) >> 0x20);
  iVar10 = *param_1;
  iVar12 = param_1[4];
  iVar13 = param_1[6];
  iVar14 = param_1[10];
  iVar15 = param_1[0xc];
  iVar16 = param_1[0x10];
  iVar17 = param_1[0x12];
  uVar9 = (ulong)(uint)param_1[0x16];
  fVar28 = -(float)param_1[0x23];
  fVar26 = (float)param_1[0x21];
  fVar19 = (float)param_1[0x1f];
  fVar21 = (float)param_1[0x22];
  do {
    uVar1 = param_4;
    if ((uint)(iVar10 - iVar12) <= param_4) {
      uVar1 = iVar10 - iVar12;
    }
    if ((uint)(iVar13 - iVar14) <= uVar1) {
      uVar1 = iVar13 - iVar14;
    }
    if ((uint)(iVar15 - iVar16) <= uVar1) {
      uVar1 = iVar15 - iVar16;
    }
    uVar11 = iVar17 - (int)uVar9;
    if (uVar11 <= uVar1) {
      uVar1 = uVar11;
    }
    if (3 < uVar1) {
      uVar11 = uVar1 >> 2;
      pfVar7 = param_2;
      pfVar8 = param_3;
      do {
        uVar11 = uVar11 - 1;
        pfVar2 = (float *)(*(long *)(param_1 + 0x14) + uVar9 * 4);
        pauVar3 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        pauVar5 = (undefined1 (*) [12])(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        fVar30 = SUB124(*pauVar3,0) * fVar18 + fVar22 * fVar23;
        fVar32 = SUB124(*pauVar4,0) * fVar20 + fVar27 * fVar24;
        fVar33 = SUB124(*pauVar5,0) * fVar19 + fVar29 * fVar25;
        fVar34 = *pfVar2 * fVar21 + fVar28 * fVar26;
        fVar35 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) * fVar18 + fVar22 * fVar30;
        fVar36 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar20 + fVar27 * fVar32;
        fVar37 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) * fVar19 + fVar29 * fVar33;
        fVar38 = pfVar2[1] * fVar21 + fVar28 * fVar34;
        fVar39 = SUB124(*pauVar3,8) * fVar18 + fVar22 * fVar35;
        fVar40 = SUB124(*pauVar4,8) * fVar20 + fVar27 * fVar36;
        fVar41 = SUB124(*pauVar5,8) * fVar19 + fVar29 * fVar37;
        fVar42 = pfVar2[2] * fVar21 + fVar28 * fVar38;
        fVar23 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20) * fVar18 + fVar22 * fVar39;
        fVar24 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20) * fVar20 + fVar27 * fVar40;
        fVar25 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20) * fVar19 + fVar29 * fVar41;
        fVar26 = pfVar2[3] * fVar21 + fVar28 * fVar42;
        param_3 = pfVar8 + 4;
        *(ulong *)(pfVar8 + 2) =
             CONCAT44((fVar25 + fVar23 + (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20)) -
                      (fVar26 + fVar24),
                      (fVar41 + fVar39 + (float)*(undefined8 *)(pfVar8 + 2)) - (fVar42 + fVar40));
        *(ulong *)pfVar8 =
             CONCAT44((fVar37 + fVar35 + (float)((ulong)*(undefined8 *)pfVar8 >> 0x20)) -
                      (fVar38 + fVar36),
                      (fVar33 + fVar30 + (float)*(undefined8 *)pfVar8) - (fVar34 + fVar32));
        param_2 = pfVar7 + 4;
        fVar43 = (float)*(undefined8 *)pfVar7 + (fVar33 + fVar30 + fVar32 + fVar34) * -0.5;
        fVar44 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) +
                 (fVar37 + fVar35 + fVar36 + fVar38) * -0.5;
        fVar45 = (float)*(undefined8 *)(pfVar7 + 2) + (fVar41 + fVar39 + fVar40 + fVar42) * -0.5;
        fVar46 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) +
                 (fVar25 + fVar23 + fVar24 + fVar26) * -0.5;
        pfVar7 = (float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        pfVar7[2] = fVar45 + fVar40;
        pfVar7[3] = fVar46 + fVar24;
        *pfVar7 = fVar43 + fVar32;
        pfVar7[1] = fVar44 + fVar36;
        param_1[4] = param_1[4] + 4;
        pfVar7 = (float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        pfVar7[2] = fVar45 + fVar41;
        pfVar7[3] = fVar46 + fVar25;
        *pfVar7 = fVar43 + fVar33;
        pfVar7[1] = fVar44 + fVar37;
        param_1[10] = param_1[10] + 4;
        pfVar7 = (float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        pfVar7[2] = fVar45 + fVar42;
        pfVar7[3] = fVar46 + fVar26;
        *pfVar7 = fVar43 + fVar34;
        pfVar7[1] = fVar44 + fVar38;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar7 = (float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4);
        pfVar7[2] = fVar45 + fVar39;
        pfVar7[3] = fVar46 + fVar23;
        *pfVar7 = fVar43 + fVar30;
        pfVar7[1] = fVar44 + fVar35;
        uVar9 = (ulong)(param_1[0x16] + 4U);
        param_1[0x16] = param_1[0x16] + 4U;
        pfVar7 = param_2;
        pfVar8 = param_3;
      } while (uVar11 != 0);
    }
    iVar10 = uVar1 - (uVar1 & 0xfffffffc);
    if ((uVar1 & 0xfffffffc) <= uVar1 && iVar10 != 0) {
      pfVar7 = param_3;
      do {
        iVar10 = iVar10 + -1;
        fVar23 = *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) * fVar18 +
                 fVar22 * fVar23;
        fVar24 = *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4) * fVar20 +
                 fVar27 * fVar24;
        fVar25 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4) * fVar19 +
                 fVar29 * fVar25;
        fVar26 = *(float *)(*(long *)(param_1 + 0x14) + uVar9 * 4) * fVar21 + fVar28 * fVar26;
        auVar31._4_4_ = fVar24;
        auVar31._0_4_ = fVar23;
        auVar31._8_4_ = fVar25;
        auVar31._12_4_ = fVar26;
        auVar6._4_4_ = fVar24;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fVar25;
        auVar6._12_4_ = fVar26;
        auVar31 = NEON_ext(auVar31,auVar6,8,1);
        fVar30 = auVar31._0_4_ + fVar23;
        fVar33 = auVar31._4_4_ + fVar24;
        fVar32 = (fVar30 + fVar33) * -0.5;
        param_3 = pfVar7 + 1;
        *pfVar7 = (*pfVar7 - fVar33) + fVar30;
        fVar30 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) = fVar32 + fVar24 + fVar30;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4) = fVar32 + fVar25 + fVar30
        ;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4) =
             fVar32 + fVar26 + fVar30;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4) =
             fVar32 + fVar23 + fVar30;
        uVar9 = (ulong)(param_1[0x16] + 1U);
        param_1[0x16] = param_1[0x16] + 1U;
        pfVar7 = param_3;
      } while (iVar10 != 0);
    }
    iVar12 = param_1[4];
    iVar10 = *param_1;
    if (iVar12 == iVar10) {
      iVar12 = 0;
      param_1[4] = 0;
      iVar14 = param_1[10];
      iVar13 = param_1[6];
      if (iVar14 == iVar13) goto LAB__text__0057d9a8;
LAB__text__0057d96c:
      iVar16 = param_1[0x10];
      iVar15 = param_1[0xc];
      if (iVar16 != iVar15) goto LAB__text__0057d97c;
LAB__text__0057d9c0:
      iVar16 = 0;
      param_1[0x10] = 0;
      iVar17 = param_1[0x12];
    }
    else {
      iVar14 = param_1[10];
      iVar13 = param_1[6];
      if (iVar14 != iVar13) goto LAB__text__0057d96c;
LAB__text__0057d9a8:
      iVar14 = 0;
      param_1[10] = 0;
      iVar16 = param_1[0x10];
      iVar15 = param_1[0xc];
      if (iVar16 == iVar15) goto LAB__text__0057d9c0;
LAB__text__0057d97c:
      iVar17 = param_1[0x12];
    }
    if ((int)uVar9 == iVar17) {
      uVar9 = 0;
      param_1[0x16] = 0;
    }
    param_4 = param_4 - uVar1;
    if (param_4 == 0) {
      param_1[0x18] = (int)fVar23;
      param_1[0x1b] = (int)fVar24;
      param_1[0x1e] = (int)fVar25;
      param_1[0x21] = (int)fVar26;
      return;
    }
  } while( true );
}


