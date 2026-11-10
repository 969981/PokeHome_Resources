/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e0700; name: FUN_.text__006e0700
 */


void FUN__text__006e0700(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                        int *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  float *pfVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fStack_ec;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0 [4];
  float local_b0;
  float fStack_ac;
  
  iVar12 = *(int *)(param_4 + 0x70);
  if (iVar12 < 3) {
    *(undefined4 *)(param_4 + 0x78) = 0;
  }
  else {
    fVar55 = 0.0;
    pfVar18 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
    if (param_6[0x16] == 1) {
      fVar55 = 0.0;
      iVar15 = iVar12 + -1;
      pfVar11 = pfVar18;
      do {
        pfVar11 = *(float **)(pfVar11 + 0x16);
        iVar15 = iVar15 + -1;
        pfVar13 = *(float **)(pfVar11 + 0x18);
        auVar59._0_4_ = (*pfVar11 - *pfVar13) * (*pfVar11 - *pfVar13);
        auVar59._4_4_ = (pfVar11[1] - pfVar13[1]) * (pfVar11[1] - pfVar13[1]);
        auVar59._8_4_ = (pfVar11[2] - pfVar13[2]) * (pfVar11[2] - pfVar13[2]);
        auVar59._12_4_ = (pfVar11[3] - pfVar13[3]) * (pfVar11[3] - pfVar13[3]);
        auVar64 = NEON_ext(auVar59,auVar59,8,1);
        fVar55 = fVar55 + SQRT(auVar64._0_4_ + auVar59._0_4_ + auVar64._4_4_ + auVar59._4_4_);
      } while (iVar15 != 0);
      fVar55 = 1.0 / fVar55;
    }
    lVar10 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    fVar56 = 1.0;
    if (*(char *)(lVar10 + 0x75c) != '\0') {
      fVar56 = *(float *)(param_5 + 0x74);
    }
    fVar22 = 1.0;
    if (*(char *)(lVar10 + 0x756) != '\0') {
      fVar22 = *(float *)(param_5 + 0x70);
    }
    iVar15 = param_6[10] + 1;
    uVar1 = iVar12 + param_6[10] * (iVar12 + -1);
    fVar67 = 1.0 / (float)iVar15;
    if ((int)uVar1 < 1) {
      *(undefined4 *)(param_4 + 0x78) = 0;
      iVar12 = *param_6;
    }
    else {
      fVar57 = *(float *)(param_4 + 0x80);
      iVar19 = 0;
      uVar20 = 0;
      iVar21 = 0;
      pfVar11 = (float *)(param_3 + 0x50);
      uVar23 = 0;
      uVar26 = 0;
      uVar29 = 0;
      uVar32 = 0;
      uVar35 = 0;
      uVar37 = 0;
      uVar39 = 0;
      uVar41 = 0;
      uVar43 = 0;
      uVar45 = 0;
      uVar47 = 0;
      uVar49 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      do {
        fVar68 = (float)(int)uVar20;
        fVar62 = (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar45,uVar43)));
        uVar6 = CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,fVar62))));
        fVar61 = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
        uVar2 = CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,fVar61))));
        fVar63 = fVar67 * fVar68;
        iVar9 = (int)fVar63;
        if (iVar21 < iVar9) {
          pfVar18 = *(float **)(pfVar18 + 0x16);
          iVar21 = iVar9;
        }
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        FUN__text__006e0e28(SUB41(fVar63 - (float)iVar9,0),&local_d0,&local_e0,pfVar18,iVar9,iVar12)
        ;
        if (param_6[0x16] == 1) {
          uVar43 = (undefined1)uStack_c8;
          uVar45 = (undefined1)((ulong)uStack_c8 >> 8);
          uVar47 = (undefined1)((ulong)uStack_c8 >> 0x10);
          uVar49 = (undefined1)((ulong)uStack_c8 >> 0x18);
          uVar51 = (undefined1)((ulong)uStack_c8 >> 0x20);
          uVar52 = (undefined1)((ulong)uStack_c8 >> 0x28);
          uVar53 = (undefined1)((ulong)uStack_c8 >> 0x30);
          uVar54 = (undefined1)((ulong)uStack_c8 >> 0x38);
          uVar23 = (undefined1)local_d0;
          uVar26 = (undefined1)((ulong)local_d0 >> 8);
          uVar29 = (undefined1)((ulong)local_d0 >> 0x10);
          uVar32 = (undefined1)((ulong)local_d0 >> 0x18);
          uVar35 = (undefined1)((ulong)local_d0 >> 0x20);
          uVar37 = (undefined1)((ulong)local_d0 >> 0x28);
          uVar39 = (undefined1)((ulong)local_d0 >> 0x30);
          uVar41 = (undefined1)((ulong)local_d0 >> 0x38);
          if (uVar20 == 0) {
            fVar61 = 0.0;
          }
          else {
            fStack_ec = (float)((ulong)uVar2 >> 0x20);
            fStack_e4 = (float)((ulong)uVar6 >> 0x20);
            fVar61 = (float)local_d0 - fVar61;
            fVar62 = (float)uStack_c8 - fVar62;
            fStack_e4 = (float)((ulong)uStack_c8 >> 0x20) - fStack_e4;
            auVar64._0_4_ = fVar61 * fVar61;
            auVar64._4_4_ = (local_d0._4_4_ - fStack_ec) * (local_d0._4_4_ - fStack_ec);
            auVar64._8_4_ = fVar62 * fVar62;
            auVar64._12_4_ = fStack_e4 * fStack_e4;
            auVar59 = NEON_ext(auVar64,auVar64,8,1);
            fVar61 = SQRT(auVar59._0_4_ + auVar64._0_4_ + auVar59._4_4_ + auVar64._4_4_);
          }
          iVar9 = iVar19;
          if (iVar19 < 3) {
            iVar9 = 2;
          }
          bVar8 = uVar20 != 0;
          lVar10 = param_3 + (ulong)(iVar9 - 2) * 0x50;
          local_c0[1] = 0.0;
          if (bVar8) {
            local_c0[1] = *(float *)(lVar10 + 0x34) + fVar55 * fVar61;
          }
          local_c0[0] = 0.0;
          if (bVar8) {
            local_c0[0] = *(float *)(lVar10 + 0x30) + fVar55 * fVar61;
          }
          fStack_ac = *(float *)(param_4 + 0x8c) * 0.1;
          local_c0[3] = fStack_ac;
          local_c0[2] = 0.0;
          if (bVar8) {
            local_c0[3] = *(float *)(lVar10 + 0x30) - fVar61 * 0.1;
            local_c0[2] = *(float *)(lVar10 + 0x38) + fVar55 * fVar61;
          }
          local_b0 = fStack_ac;
          if (bVar8) {
            fStack_ac = *(float *)(lVar10 + 0x38) - fVar61 * 0.1;
            local_b0 = *(float *)(lVar10 + 0x34) - fVar61 * 0.1;
          }
          auVar58._4_4_ = local_c0[(long)param_6[4] * 3 + 1];
          auVar58._0_4_ = local_c0[(long)param_6[3] * 3];
          auVar58._8_4_ = local_c0[(long)param_6[5] * 3 + 2];
        }
        else if (param_6[0x16] == 0) {
          fVar61 = ((fVar57 - (float)(int)fVar57) + param_1 + fVar68) /
                   (float)(((int)(float)param_6[6] + -1) * iVar15);
          local_c0[0] = fVar68 / (float)(int)(uVar1 - 1);
          local_c0[1] = local_c0[0];
          uVar24 = 0;
          uVar27 = 0;
          uVar30 = 0x80;
          uVar33 = 0x3f;
          if (fVar61 <= 1.0) {
            uVar24 = SUB41(fVar61,0);
            uVar27 = (char)((uint)fVar61 >> 8);
            uVar30 = (char)((uint)fVar61 >> 0x10);
            uVar33 = (char)((uint)fVar61 >> 0x18);
          }
          local_c0[2] = local_c0[0];
          local_c0[3] = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
          local_b0 = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
          fStack_ac = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
          auVar58._4_4_ = local_c0[(long)param_6[4] * 3 + 1];
          auVar58._0_4_ = local_c0[(long)param_6[3] * 3];
          auVar58._8_4_ = local_c0[(long)param_6[5] * 3 + 2];
        }
        else {
          auVar58 = SUB1612(ZEXT816(0),0);
        }
        fVar61 = pfVar18[0x14];
        uVar20 = uVar20 + 1;
        iVar19 = iVar19 + 2;
        pfVar11[-0x12] = (float)uStack_c8;
        pfVar11[-0x14] = (float)local_d0;
        pfVar11[-0x13] = local_d0._4_4_;
        *pfVar11 = (float)local_d0;
        pfVar11[1] = local_d0._4_4_;
        pfVar11[2] = (float)uStack_c8;
        pfVar11[-0xe] = (float)uStack_d8;
        *(undefined8 *)(pfVar11 + -0x10) = local_e0;
        *(undefined8 *)(pfVar11 + 4) = local_e0;
        pfVar11[6] = (float)uStack_d8;
        pfVar11[-0x11] = fVar56 * fVar22 * fVar61;
        pfVar11[3] = -(fVar56 * fVar22 * fVar61);
        fVar61 = pfVar18[0xd];
        fVar62 = pfVar18[0xe];
        pfVar11[-0xc] = pfVar18[0xc];
        pfVar11[-0xb] = fVar61;
        pfVar11[-10] = fVar62;
        auVar59 = *(undefined1 (*) [16])(pfVar18 + 0xc);
        pfVar11[-6] = auVar58._8_4_;
        *(long *)(pfVar11 + -8) = auVar58._0_8_;
        *(long *)(pfVar11 + 0xc) = auVar58._0_8_;
        pfVar11[-0xd] = fVar68;
        pfVar11[7] = fVar68;
        pfVar11[0xe] = auVar58._8_4_;
        pfVar13 = pfVar11 + 10;
        *(long *)(pfVar11 + 8) = auVar59._0_8_;
        pfVar11 = pfVar11 + 0x28;
        *pfVar13 = auVar59._8_4_;
      } while (uVar1 != uVar20);
      *(uint *)(param_4 + 0x78) = uVar1 * 2;
      iVar12 = *param_6;
    }
    if (((iVar12 != 0) && (iVar12 != 3)) && (0 < (int)uVar1)) {
      uVar20 = 0;
      iVar12 = 0;
      puVar14 = (undefined4 *)(param_3 + 0x98);
      lVar10 = *(long *)(*(long *)(param_4 + 0x58) + 0x58);
      do {
        fVar55 = fVar67 * (float)(int)uVar20;
        iVar15 = (int)fVar55;
        if (iVar12 < iVar15) {
          lVar10 = *(long *)(lVar10 + 0x58);
          iVar12 = iVar15;
        }
        uVar20 = uVar20 + 1;
        lVar16 = *(long *)(lVar10 + 0x58);
        fVar55 = fVar55 - (float)iVar15;
        puVar17 = puVar14 + -0x14;
        fVar61 = *(float *)(lVar10 + 0x40) +
                 (*(float *)(lVar16 + 0x40) - *(float *)(lVar10 + 0x40)) * fVar55;
        fVar62 = *(float *)(lVar10 + 0x44) +
                 (*(float *)(lVar16 + 0x44) - *(float *)(lVar10 + 0x44)) * fVar55;
        fVar63 = *(float *)(lVar10 + 0x48) +
                 (*(float *)(lVar16 + 0x48) - *(float *)(lVar10 + 0x48)) * fVar55;
        fVar57 = *(float *)(lVar10 + 0x4c) +
                 (*(float *)(lVar16 + 0x4c) - *(float *)(lVar10 + 0x4c)) * fVar55;
        fVar55 = fVar61 * fVar61;
        fVar56 = fVar62 * fVar62;
        uVar23 = (undefined1)((uint)fVar56 >> 8);
        uVar26 = (undefined1)((uint)fVar56 >> 0x10);
        uVar29 = (undefined1)((uint)fVar56 >> 0x18);
        fVar22 = fVar63 * fVar63;
        uVar32 = (undefined1)((uint)fVar22 >> 8);
        uVar35 = (undefined1)((uint)fVar22 >> 0x10);
        uVar37 = (undefined1)((uint)fVar22 >> 0x18);
        fVar57 = fVar57 * fVar57;
        uVar39 = (undefined1)((uint)fVar57 >> 8);
        uVar41 = (undefined1)((uint)fVar57 >> 0x10);
        uVar43 = (undefined1)((uint)fVar57 >> 0x18);
        auVar3[4] = SUB41(fVar56,0);
        auVar3._0_4_ = fVar55;
        auVar3[5] = uVar23;
        auVar3[6] = uVar26;
        auVar3[7] = uVar29;
        auVar3[8] = SUB41(fVar22,0);
        auVar3[9] = uVar32;
        auVar3[10] = uVar35;
        auVar3[0xb] = uVar37;
        auVar3[0xc] = SUB41(fVar57,0);
        auVar3[0xd] = uVar39;
        auVar3[0xe] = uVar41;
        auVar3[0xf] = uVar43;
        auVar4[4] = SUB41(fVar56,0);
        auVar4._0_4_ = fVar55;
        auVar4[5] = uVar23;
        auVar4[6] = uVar26;
        auVar4[7] = uVar29;
        auVar4[8] = SUB41(fVar22,0);
        auVar4[9] = uVar32;
        auVar4[10] = uVar35;
        auVar4[0xb] = uVar37;
        auVar4[0xc] = SUB41(fVar57,0);
        auVar4[0xd] = uVar39;
        auVar4[0xe] = uVar41;
        auVar4[0xf] = uVar43;
        auVar59 = NEON_ext(auVar3,auVar4,8,1);
        fVar55 = auVar59._0_4_ + fVar55;
        fVar56 = auVar59._4_4_ + fVar56;
        fVar22 = fVar55 + fVar56;
        fVar55 = fVar55 + fVar56;
        uVar23 = SUB41(fVar55,0);
        uVar26 = (undefined1)((uint)fVar55 >> 8);
        uVar29 = (undefined1)((uint)fVar55 >> 0x10);
        uVar32 = (undefined1)((uint)fVar55 >> 0x18);
        auVar5[4] = uVar23;
        auVar5._0_4_ = fVar22;
        auVar5[5] = uVar26;
        auVar5[6] = uVar29;
        auVar5[7] = uVar32;
        auVar5[8] = SUB41(fVar22,0);
        auVar5[9] = (char)((uint)fVar22 >> 8);
        auVar5[10] = (char)((uint)fVar22 >> 0x10);
        auVar5[0xb] = (char)((uint)fVar22 >> 0x18);
        auVar5[0xc] = uVar23;
        auVar5[0xd] = uVar26;
        auVar5[0xe] = uVar29;
        auVar5[0xf] = uVar32;
        auVar59 = NEON_frsqrte(auVar5,4);
        auVar65._0_4_ = auVar59._0_4_ * fVar22;
        auVar65._4_4_ = auVar59._4_4_ * fVar55;
        auVar65._8_4_ = auVar59._8_4_ * fVar22;
        uVar7 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar23,fVar22)) >> 0x20);
        auVar65._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar32,CONCAT12(uVar29,uVar7));
        auVar64 = NEON_frsqrts(auVar59,auVar65,4);
        auVar60._0_4_ = auVar59._0_4_ * auVar64._0_4_;
        auVar60._4_4_ = auVar59._4_4_ * auVar64._4_4_;
        auVar60._8_4_ = auVar59._8_4_ * auVar64._8_4_;
        auVar60._12_4_ = auVar59._12_4_ * auVar64._12_4_;
        auVar66._0_4_ = fVar22 * auVar60._0_4_;
        auVar66._4_4_ = fVar55 * auVar60._4_4_;
        auVar66._8_4_ = fVar22 * auVar60._8_4_;
        auVar66._12_4_ = (float)CONCAT13(uVar32,CONCAT12(uVar29,uVar7)) * auVar60._12_4_;
        iVar15 = -(uint)(fVar22 == 0.0);
        iVar19 = -(uint)(fVar55 == 0.0);
        iVar21 = -(uint)(fVar22 == 0.0);
        auVar59 = NEON_frsqrts(auVar60,auVar66,4);
        fVar61 = fVar61 * auVar60._0_4_ * auVar59._0_4_;
        fVar62 = fVar62 * auVar60._4_4_ * auVar59._4_4_;
        fVar63 = fVar63 * auVar60._8_4_ * auVar59._8_4_;
        bVar25 = SUB41(fVar61,0) & ~(byte)iVar15;
        bVar28 = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar15 >> 8);
        bVar31 = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
        bVar34 = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
        bVar36 = SUB41(fVar62,0) & ~(byte)iVar19;
        bVar38 = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar19 >> 8);
        bVar40 = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
        bVar42 = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
        bVar44 = SUB41(fVar63,0) & ~(byte)iVar21;
        bVar46 = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar21 >> 8);
        bVar48 = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
        bVar50 = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
        *(ulong *)(puVar14 + -0x16) =
             CONCAT17(bVar42,CONCAT16(bVar40,CONCAT15(bVar38,CONCAT14(bVar36,CONCAT13(bVar34,
                                                  CONCAT12(bVar31,CONCAT11(bVar28,bVar25)))))));
        *(ulong *)(puVar14 + -2) =
             CONCAT17(bVar42,CONCAT16(bVar40,CONCAT15(bVar38,CONCAT14(bVar36,CONCAT13(bVar34,
                                                  CONCAT12(bVar31,CONCAT11(bVar28,bVar25)))))));
        *puVar14 = CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
        puVar14 = puVar14 + 0x28;
        *puVar17 = CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
      } while (uVar1 != uVar20);
    }
  }
  return;
}


