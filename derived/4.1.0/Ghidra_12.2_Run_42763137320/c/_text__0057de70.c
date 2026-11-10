/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057de70; name: FUN_.text__0057de70
 */


void FUN__text__0057de70(int *param_1,float *param_2,uint param_3,long *param_4)

{
  uint uVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
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
  uVar7 = (ulong)(uint)param_1[0x16];
  fVar28 = -(float)param_1[0x23];
  fVar26 = (float)param_1[0x21];
  fVar19 = (float)param_1[0x1f];
  fVar21 = (float)param_1[0x22];
  do {
    uVar1 = param_3;
    if ((uint)(iVar10 - iVar12) <= param_3) {
      uVar1 = iVar10 - iVar12;
    }
    if ((uint)(iVar13 - iVar14) <= uVar1) {
      uVar1 = iVar13 - iVar14;
    }
    if ((uint)(iVar15 - iVar16) <= uVar1) {
      uVar1 = iVar15 - iVar16;
    }
    uVar11 = iVar17 - (int)uVar7;
    if (uVar11 <= uVar1) {
      uVar1 = uVar11;
    }
    if (3 < uVar1) {
      uVar11 = uVar1 >> 2;
      pfVar9 = param_2;
      do {
        uVar11 = uVar11 - 1;
        pfVar2 = (float *)(*(long *)(param_1 + 0x14) + uVar7 * 4);
        pauVar3 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        pauVar5 = (undefined1 (*) [12])(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        puVar8 = (undefined8 *)*param_4;
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
        puVar8[1] = CONCAT44((fVar25 + (float)((ulong)puVar8[1] >> 0x20) + fVar23) -
                             (fVar26 + fVar24),
                             (fVar41 + (float)puVar8[1] + fVar39) - (fVar42 + fVar40));
        *puVar8 = CONCAT44((fVar37 + (float)((ulong)*puVar8 >> 0x20) + fVar35) - (fVar38 + fVar36),
                           (fVar33 + (float)*puVar8 + fVar30) - (fVar34 + fVar32));
        puVar8 = (undefined8 *)param_4[1];
        *param_4 = *param_4 + 0x10;
        puVar8[1] = CONCAT44((fVar24 + fVar23 + (float)((ulong)puVar8[1] >> 0x20)) -
                             (fVar26 + fVar25),
                             (fVar40 + fVar39 + (float)puVar8[1]) - (fVar42 + fVar41));
        *puVar8 = CONCAT44((fVar36 + fVar35 + (float)((ulong)*puVar8 >> 0x20)) - (fVar38 + fVar37),
                           (fVar32 + fVar30 + (float)*puVar8) - (fVar34 + fVar33));
        puVar8 = (undefined8 *)param_4[2];
        param_4[1] = param_4[1] + 0x10;
        puVar8[1] = CONCAT44(((fVar26 + fVar23) - (fVar25 + fVar24)) +
                             (float)((ulong)puVar8[1] >> 0x20),
                             ((fVar42 + fVar39) - (fVar41 + fVar40)) + (float)puVar8[1]);
        *puVar8 = CONCAT44(((fVar38 + fVar35) - (fVar37 + fVar36)) + (float)((ulong)*puVar8 >> 0x20)
                           ,((fVar34 + fVar30) - (fVar33 + fVar32)) + (float)*puVar8);
        param_4[2] = param_4[2] + 0x10;
        param_2 = pfVar9 + 4;
        fVar43 = (float)*(undefined8 *)pfVar9 + (fVar32 + fVar30 + fVar33 + fVar34) * -0.5;
        fVar44 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) +
                 (fVar36 + fVar35 + fVar37 + fVar38) * -0.5;
        fVar45 = (float)*(undefined8 *)(pfVar9 + 2) + (fVar40 + fVar39 + fVar41 + fVar42) * -0.5;
        fVar46 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                 (fVar24 + fVar23 + fVar25 + fVar26) * -0.5;
        pfVar9 = (float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        pfVar9[2] = fVar45 + fVar40;
        pfVar9[3] = fVar46 + fVar24;
        *pfVar9 = fVar43 + fVar32;
        pfVar9[1] = fVar44 + fVar36;
        param_1[4] = param_1[4] + 4;
        pfVar9 = (float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        pfVar9[2] = fVar45 + fVar41;
        pfVar9[3] = fVar46 + fVar25;
        *pfVar9 = fVar43 + fVar33;
        pfVar9[1] = fVar44 + fVar37;
        param_1[10] = param_1[10] + 4;
        pfVar9 = (float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        pfVar9[2] = fVar45 + fVar42;
        pfVar9[3] = fVar46 + fVar26;
        *pfVar9 = fVar43 + fVar34;
        pfVar9[1] = fVar44 + fVar38;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar9 = (float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4);
        pfVar9[2] = fVar45 + fVar39;
        pfVar9[3] = fVar46 + fVar23;
        *pfVar9 = fVar43 + fVar30;
        pfVar9[1] = fVar44 + fVar35;
        uVar7 = (ulong)(param_1[0x16] + 4U);
        param_1[0x16] = param_1[0x16] + 4U;
        pfVar9 = param_2;
      } while (uVar11 != 0);
    }
    iVar10 = uVar1 - (uVar1 & 0xfffffffc);
    if ((uVar1 & 0xfffffffc) <= uVar1 && iVar10 != 0) {
      do {
        iVar10 = iVar10 + -1;
        fVar30 = *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        fVar32 = *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        fVar33 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        fVar34 = *(float *)(*(long *)(param_1 + 0x14) + uVar7 * 4);
        pfVar9 = (float *)*param_4;
        *param_4 = (long)(pfVar9 + 1);
        fVar23 = fVar30 * fVar18 + fVar22 * fVar23;
        fVar24 = fVar32 * fVar20 + fVar27 * fVar24;
        fVar25 = fVar33 * fVar19 + fVar29 * fVar25;
        fVar26 = fVar34 * fVar21 + fVar28 * fVar26;
        auVar31._4_4_ = fVar24;
        auVar31._0_4_ = fVar23;
        auVar31._8_4_ = fVar25;
        auVar31._12_4_ = fVar26;
        auVar6._4_4_ = fVar24;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fVar25;
        auVar6._12_4_ = fVar26;
        auVar31 = NEON_ext(auVar31,auVar6,8,1);
        fVar33 = auVar31._0_4_ + fVar23;
        fVar34 = auVar31._4_4_ + fVar24;
        fVar30 = fVar23 - auVar31._0_4_;
        fVar32 = fVar24 - auVar31._4_4_;
        *pfVar9 = (*pfVar9 - fVar34) + fVar33;
        fVar33 = (fVar33 + fVar34) * -0.5;
        pfVar9 = (float *)param_4[1];
        param_4[1] = (long)(pfVar9 + 1);
        *pfVar9 = fVar30 + fVar32 + *pfVar9;
        pfVar9 = (float *)param_4[2];
        param_4[2] = (long)(pfVar9 + 1);
        *pfVar9 = (fVar30 - fVar32) + *pfVar9;
        fVar30 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) = fVar33 + fVar24 + fVar30;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4) = fVar33 + fVar25 + fVar30
        ;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4) =
             fVar33 + fVar26 + fVar30;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4) =
             fVar33 + fVar23 + fVar30;
        uVar7 = (ulong)(param_1[0x16] + 1U);
        param_1[0x16] = param_1[0x16] + 1U;
      } while (iVar10 != 0);
    }
    iVar12 = param_1[4];
    iVar10 = *param_1;
    if (iVar12 == iVar10) {
      iVar12 = 0;
      param_1[4] = 0;
      iVar14 = param_1[10];
      iVar13 = param_1[6];
      if (iVar14 != iVar13) goto LAB__text__0057e278;
LAB__text__0057e2b8:
      iVar14 = 0;
      param_1[10] = 0;
      iVar16 = param_1[0x10];
      iVar15 = param_1[0xc];
      if (iVar16 != iVar15) goto LAB__text__0057e288;
LAB__text__0057e2d0:
      iVar16 = 0;
      param_1[0x10] = 0;
      iVar17 = param_1[0x12];
    }
    else {
      iVar14 = param_1[10];
      iVar13 = param_1[6];
      if (iVar14 == iVar13) goto LAB__text__0057e2b8;
LAB__text__0057e278:
      iVar16 = param_1[0x10];
      iVar15 = param_1[0xc];
      if (iVar16 == iVar15) goto LAB__text__0057e2d0;
LAB__text__0057e288:
      iVar17 = param_1[0x12];
    }
    if ((int)uVar7 == iVar17) {
      uVar7 = 0;
      param_1[0x16] = 0;
    }
    param_3 = param_3 - uVar1;
    if (param_3 == 0) {
      param_1[0x18] = (int)fVar23;
      param_1[0x1b] = (int)fVar24;
      param_1[0x1e] = (int)fVar25;
      param_1[0x21] = (int)fVar26;
      return;
    }
  } while( true );
}


