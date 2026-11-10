/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057da00; name: FUN_.text__0057da00
 */


void FUN__text__0057da00(int *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
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
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar34 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar29 = -(float)param_1[0x1d];
  fVar31 = -(float)param_1[0x20];
  fVar24 = -(float)((ulong)*(undefined8 *)(param_1 + 0x19) >> 0x20);
  fVar27 = (float)param_1[0x1e];
  fVar20 = (float)*(undefined8 *)(param_1 + 0x19);
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b) >> 0x20);
  iVar12 = *param_1;
  iVar14 = param_1[4];
  iVar15 = param_1[6];
  iVar16 = param_1[10];
  iVar17 = param_1[0xc];
  iVar18 = param_1[0x10];
  iVar19 = param_1[0x12];
  uVar11 = (ulong)(uint)param_1[0x16];
  fVar30 = -(float)param_1[0x23];
  fVar28 = (float)param_1[0x21];
  fVar21 = (float)param_1[0x1f];
  fVar23 = (float)param_1[0x22];
  do {
    uVar1 = param_5;
    if ((uint)(iVar12 - iVar14) <= param_5) {
      uVar1 = iVar12 - iVar14;
    }
    if ((uint)(iVar15 - iVar16) <= uVar1) {
      uVar1 = iVar15 - iVar16;
    }
    if ((uint)(iVar17 - iVar18) <= uVar1) {
      uVar1 = iVar17 - iVar18;
    }
    uVar13 = iVar19 - (int)uVar11;
    if (uVar13 <= uVar1) {
      uVar1 = uVar13;
    }
    if (3 < uVar1) {
      uVar13 = uVar1 >> 2;
      pfVar8 = param_2;
      pfVar9 = param_3;
      pfVar10 = param_4;
      do {
        uVar13 = uVar13 - 1;
        pfVar2 = (float *)(*(long *)(param_1 + 0x14) + uVar11 * 4);
        pauVar3 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        pauVar5 = (undefined1 (*) [12])(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        fVar45 = SUB124(*pauVar3,0) * fVar20 + fVar24 * fVar25;
        fVar46 = SUB124(*pauVar4,0) * fVar22 + fVar29 * fVar26;
        fVar47 = SUB124(*pauVar5,0) * fVar21 + fVar31 * fVar27;
        fVar48 = *pfVar2 * fVar23 + fVar30 * fVar28;
        fVar41 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) * fVar20 + fVar24 * fVar45;
        fVar42 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar22 + fVar29 * fVar46;
        fVar43 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) * fVar21 + fVar31 * fVar47;
        fVar44 = pfVar2[1] * fVar23 + fVar30 * fVar48;
        fVar32 = SUB124(*pauVar3,8) * fVar20 + fVar24 * fVar41;
        fVar35 = SUB124(*pauVar4,8) * fVar22 + fVar29 * fVar42;
        fVar37 = SUB124(*pauVar5,8) * fVar21 + fVar31 * fVar43;
        fVar39 = pfVar2[2] * fVar23 + fVar30 * fVar44;
        fVar25 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20) * fVar20 + fVar24 * fVar32;
        fVar26 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20) * fVar22 + fVar29 * fVar35;
        fVar27 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20) * fVar21 + fVar31 * fVar37;
        fVar28 = pfVar2[3] * fVar23 + fVar30 * fVar39;
        param_3 = pfVar9 + 4;
        pfVar9[2] = (fVar37 + pfVar9[2] + fVar32) - (fVar39 + fVar35);
        pfVar9[3] = (fVar27 + pfVar9[3] + fVar25) - (fVar28 + fVar26);
        *pfVar9 = (fVar47 + *pfVar9 + fVar45) - (fVar48 + fVar46);
        pfVar9[1] = (fVar43 + pfVar9[1] + fVar41) - (fVar44 + fVar42);
        uVar50 = *(undefined8 *)(pfVar10 + 2);
        uVar49 = *(undefined8 *)pfVar10;
        param_4 = pfVar10 + 4;
        pfVar10[2] = (fVar35 + fVar32 + (float)uVar50) - (fVar39 + fVar37);
        pfVar10[3] = (fVar26 + fVar25 + (float)((ulong)uVar50 >> 0x20)) - (fVar28 + fVar27);
        *pfVar10 = (fVar46 + fVar45 + (float)uVar49) - (fVar48 + fVar47);
        pfVar10[1] = (fVar42 + fVar41 + (float)((ulong)uVar49 >> 0x20)) - (fVar44 + fVar43);
        param_2 = pfVar8 + 4;
        fVar33 = *pfVar8 + (fVar46 + fVar45 + fVar47 + fVar48) * -0.5;
        fVar36 = pfVar8[1] + (fVar42 + fVar41 + fVar43 + fVar44) * -0.5;
        fVar38 = pfVar8[2] + (fVar35 + fVar32 + fVar37 + fVar39) * -0.5;
        fVar40 = pfVar8[3] + (fVar26 + fVar25 + fVar27 + fVar28) * -0.5;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4);
        puVar6[1] = CONCAT44(fVar40 + fVar26,fVar38 + fVar35);
        *puVar6 = CONCAT44(fVar36 + fVar42,fVar33 + fVar46);
        param_1[4] = param_1[4] + 4;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4);
        puVar6[1] = CONCAT44(fVar40 + fVar27,fVar38 + fVar37);
        *puVar6 = CONCAT44(fVar36 + fVar43,fVar33 + fVar47);
        param_1[10] = param_1[10] + 4;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4);
        puVar6[1] = CONCAT44(fVar40 + fVar28,fVar38 + fVar39);
        *puVar6 = CONCAT44(fVar36 + fVar44,fVar33 + fVar48);
        param_1[0x10] = param_1[0x10] + 4;
        pfVar8 = (float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4);
        pfVar8[2] = fVar38 + fVar32;
        pfVar8[3] = fVar40 + fVar25;
        *pfVar8 = fVar33 + fVar45;
        pfVar8[1] = fVar36 + fVar41;
        uVar11 = (ulong)(param_1[0x16] + 4U);
        param_1[0x16] = param_1[0x16] + 4U;
        pfVar8 = param_2;
        pfVar9 = param_3;
        pfVar10 = param_4;
      } while (uVar13 != 0);
    }
    iVar12 = uVar1 - (uVar1 & 0xfffffffc);
    if ((uVar1 & 0xfffffffc) <= uVar1 && iVar12 != 0) {
      pfVar8 = param_3;
      pfVar9 = param_4;
      do {
        iVar12 = iVar12 + -1;
        fVar25 = *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) * fVar20 +
                 fVar24 * fVar25;
        fVar26 = *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4) * fVar22 +
                 fVar29 * fVar26;
        fVar27 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4) * fVar21 +
                 fVar31 * fVar27;
        fVar28 = *(float *)(*(long *)(param_1 + 0x14) + uVar11 * 4) * fVar23 + fVar30 * fVar28;
        auVar34._4_4_ = fVar26;
        auVar34._0_4_ = fVar25;
        auVar34._8_4_ = fVar27;
        auVar34._12_4_ = fVar28;
        auVar7._4_4_ = fVar26;
        auVar7._0_4_ = fVar25;
        auVar7._8_4_ = fVar27;
        auVar7._12_4_ = fVar28;
        auVar34 = NEON_ext(auVar34,auVar7,8,1);
        fVar32 = auVar34._0_4_ + fVar25;
        fVar33 = auVar34._4_4_ + fVar26;
        param_3 = pfVar8 + 1;
        *pfVar8 = (*pfVar8 - fVar33) + fVar32;
        param_4 = pfVar9 + 1;
        *pfVar9 = (fVar25 - auVar34._0_4_) + *pfVar9 + (fVar26 - auVar34._4_4_);
        fVar33 = (fVar32 + fVar33) * -0.5;
        fVar32 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) = fVar33 + fVar26 + fVar32;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)(uint)param_1[10] * 4) = fVar33 + fVar27 + fVar32
        ;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)(uint)param_1[0x10] * 4) =
             fVar33 + fVar28 + fVar32;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)(uint)param_1[0x16] * 4) =
             fVar33 + fVar25 + fVar32;
        uVar11 = (ulong)(param_1[0x16] + 1U);
        param_1[0x16] = param_1[0x16] + 1U;
        pfVar8 = param_3;
        pfVar9 = param_4;
      } while (iVar12 != 0);
    }
    iVar14 = param_1[4];
    iVar12 = *param_1;
    if (iVar14 == iVar12) {
      iVar14 = 0;
      param_1[4] = 0;
      iVar16 = param_1[10];
      iVar15 = param_1[6];
      if (iVar16 == iVar15) goto LAB__text__0057ddec;
LAB__text__0057ddb4:
      iVar18 = param_1[0x10];
      iVar17 = param_1[0xc];
      if (iVar18 != iVar17) goto LAB__text__0057ddc4;
LAB__text__0057de04:
      iVar18 = 0;
      param_1[0x10] = 0;
      iVar19 = param_1[0x12];
    }
    else {
      iVar16 = param_1[10];
      iVar15 = param_1[6];
      if (iVar16 != iVar15) goto LAB__text__0057ddb4;
LAB__text__0057ddec:
      iVar16 = 0;
      param_1[10] = 0;
      iVar18 = param_1[0x10];
      iVar17 = param_1[0xc];
      if (iVar18 == iVar17) goto LAB__text__0057de04;
LAB__text__0057ddc4:
      iVar19 = param_1[0x12];
    }
    if ((int)uVar11 == iVar19) {
      uVar11 = 0;
      param_1[0x16] = 0;
    }
    param_5 = param_5 - uVar1;
    if (param_5 == 0) {
      param_1[0x18] = (int)fVar25;
      param_1[0x1b] = (int)fVar26;
      param_1[0x1e] = (int)fVar27;
      param_1[0x21] = (int)fVar28;
      return;
    }
  } while( true );
}


