/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005488a0; name: FUN_.text__005488a0
 */


void FUN__text__005488a0(float param_1,float param_2,float param_3,float param_4,float param_5,
                        long param_6,undefined1 (*param_7) [16],uint param_8,uint param_9,
                        float *param_10)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  uint7 uVar26;
  float fVar29;
  undefined1 auVar27 [12];
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  undefined1 auVar34 [12];
  int iVar37;
  undefined1 uVar38;
  byte bVar40;
  byte bVar43;
  undefined1 auVar35 [16];
  int iVar39;
  int iVar41;
  undefined1 auVar36 [16];
  float fVar42;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  int iVar60;
  undefined1 auVar61 [12];
  int iVar64;
  undefined1 auVar62 [16];
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  
  fVar17 = *param_10;
  fVar18 = param_10[1];
  uVar12 = param_9 & 0xfffffffc;
  pauVar7 = (undefined1 (*) [16])(*param_7 + (ulong)uVar12 * 4);
  fVar16 = 1.0 - param_5;
  fVar19 = fVar16 * param_5;
  fVar20 = fVar19 * param_5;
  if (uVar12 != 0) {
    fVar21 = param_5 * param_5 * param_5;
    pauVar10 = param_7;
    do {
      fVar25 = *(float *)*pauVar10 + 1e-25;
      fVar42 = *(float *)(*pauVar10 + 4) + 1e-25;
      fVar29 = *(float *)(*pauVar10 + 8) + 1e-25;
      fVar30 = *(float *)(*pauVar10 + 0xc) + 1e-25;
      fVar13 = param_5 * fVar18;
      fVar14 = param_5 * param_5 * fVar18;
      fVar15 = fVar21 * fVar18;
      fVar18 = fVar16 * fVar30 + fVar19 * fVar29 + fVar20 * fVar42 + fVar20 * param_5 * fVar25 +
               fVar21 * param_5 * fVar18;
      pauVar9 = pauVar10 + 1;
      *(float *)(*pauVar10 + 8) =
           fVar30 * 0.0 + fVar16 * fVar29 + fVar19 * fVar42 + fVar20 * fVar25 + fVar15;
      *(float *)(*pauVar10 + 0xc) = fVar18;
      *(float *)*pauVar10 = fVar30 * 0.0 + fVar29 * 0.0 + fVar42 * 0.0 + fVar16 * fVar25 + fVar13;
      *(float *)(*pauVar10 + 4) =
           fVar30 * 0.0 + fVar29 * 0.0 + fVar16 * fVar42 + fVar19 * fVar25 + fVar14;
      pauVar10 = pauVar9;
    } while (pauVar9 < pauVar7);
    if (uVar12 != 0) {
      auVar22 = NEON_fmov(0x3f800000,4);
      auVar24 = NEON_fmov(0x41200000,4);
      fVar19 = -param_1;
      fVar20 = -param_1;
      pauVar10 = param_7;
      do {
        auVar28 = *pauVar10;
        uVar26 = CONCAT16(auVar28[6],
                          CONCAT15(auVar28[5],CONCAT14(auVar28[4],(uint)(auVar28._0_3_ & 0x7fffff)))
                         ) & 0x7fffffffffffff;
        fVar21 = (float)CONCAT13(auVar22[3],
                                 CONCAT12((byte)(uVar26 >> 0x10) | auVar22[2],
                                          CONCAT11((byte)(uVar26 >> 8) | auVar22[1],
                                                   (byte)uVar26 | auVar22[0])));
        auVar27._0_8_ =
             CONCAT17(auVar22[7],
                      CONCAT16((byte)(uVar26 >> 0x30) | auVar22[6],
                               CONCAT15((byte)(uVar26 >> 0x28) | auVar22[5],
                                        CONCAT14((byte)(uVar26 >> 0x20) | auVar22[4],fVar21))));
        auVar27[8] = auVar28[8] | auVar22[8];
        auVar27[9] = auVar28[9] | auVar22[9];
        auVar27[10] = auVar28[10] & 0x7f | auVar22[10];
        auVar27[0xb] = auVar22[0xb];
        auVar31[0xc] = auVar28[0xc] | auVar22[0xc];
        auVar31._0_12_ = auVar27;
        auVar31[0xd] = auVar28[0xd] | auVar22[0xd];
        auVar31[0xe] = auVar28[0xe] & 0x7f | auVar22[0xe];
        auVar31[0xf] = auVar22[0xf];
        auVar62._0_8_ = CONCAT44(auVar28._4_4_ >> 0x17,auVar28._0_4_ >> 0x17) & 0xfffffefffffffeff;
        auVar62._8_4_ = auVar28._8_4_ >> 0x17 & 0xfffffeff;
        auVar62._12_4_ = auVar28._12_4_ >> 0x17 & 0xfffffeff;
        fVar42 = (float)((ulong)auVar27._0_8_ >> 0x20);
        fVar30 = auVar27._8_4_;
        fVar14 = auVar31._12_4_;
        fVar25 = fVar21 + auVar22._0_4_;
        fVar29 = fVar42 + auVar22._4_4_;
        fVar13 = fVar30 + auVar22._8_4_;
        fVar15 = fVar14 + auVar22._12_4_;
        auVar31 = NEON_scvtf(auVar62,4);
        auVar28._0_4_ = fVar25 * fVar25 * fVar25;
        auVar28._4_4_ = fVar29 * fVar29 * fVar29;
        auVar28._8_4_ = fVar13 * fVar13 * fVar13;
        auVar28._12_4_ = fVar15 * fVar15 * fVar15;
        auVar62 = NEON_frecpe(auVar28,4);
        auVar28 = NEON_frecps(auVar28,auVar62,4);
        auVar32._0_4_ =
             -param_1 +
             (auVar28._0_4_ * auVar62._0_4_ * (fVar21 * fVar21 * fVar21 * 1.1581186 + -1.1581186) +
             (auVar31._0_4_ + -127.0) * 0.30103) * auVar24._0_4_;
        auVar32._4_4_ =
             (float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                              CONCAT16((char)((uint)fVar19 >> 0x10),
                                       CONCAT15((char)((uint)fVar19 >> 8),
                                                CONCAT14(SUB41(fVar19,0),-param_1)))) >> 0x20) +
             (auVar28._4_4_ * auVar62._4_4_ * (fVar42 * fVar42 * fVar42 * 1.1581186 + -1.1581186) +
             (auVar31._4_4_ + -127.0) * 0.30103) * auVar24._4_4_;
        auVar32._8_4_ =
             -param_1 +
             (auVar28._8_4_ * auVar62._8_4_ * (fVar30 * fVar30 * fVar30 * 1.1581186 + -1.1581186) +
             (auVar31._8_4_ + -127.0) * 0.30103) * auVar24._8_4_;
        auVar32._12_4_ =
             (float)(CONCAT17((char)((uint)fVar20 >> 0x18),
                              CONCAT16((char)((uint)fVar20 >> 0x10),
                                       CONCAT15((char)((uint)fVar20 >> 8),
                                                CONCAT14(SUB41(fVar20,0),-param_1)))) >> 0x20) +
             (auVar28._12_4_ * auVar62._12_4_ * (fVar14 * fVar14 * fVar14 * 1.1581186 + -1.1581186)
             + (auVar31._12_4_ + -127.0) * 0.30103) * auVar24._12_4_;
        auVar28 = NEON_fmax(auVar32,ZEXT816(0),4);
        pauVar9 = pauVar10 + 1;
        *(long *)(*pauVar10 + 8) = auVar28._8_8_;
        *(long *)*pauVar10 = auVar28._0_8_;
        pauVar10 = pauVar9;
      } while (pauVar9 < pauVar7);
      if (uVar12 != 0) {
        pauVar10 = param_7;
        do {
          uVar23 = *(undefined8 *)(*pauVar10 + 8);
          fVar20 = (float)*(undefined8 *)*pauVar10;
          fVar17 = fVar17 - fVar20;
          fVar19 = param_4;
          if (fVar17 < 0.0) {
            fVar19 = param_3;
          }
          fVar20 = fVar20 + fVar17 * fVar19;
          fVar19 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          fVar21 = fVar20 - fVar19;
          fVar17 = param_4;
          if (fVar21 < 0.0) {
            fVar17 = param_3;
          }
          fVar19 = fVar19 + fVar21 * fVar17;
          fVar21 = (float)uVar23;
          fVar25 = fVar19 - fVar21;
          *(float *)*pauVar10 = fVar20;
          *(float *)(*pauVar10 + 4) = fVar19;
          fVar17 = param_4;
          if (fVar25 < 0.0) {
            fVar17 = param_3;
          }
          fVar21 = fVar21 + fVar25 * fVar17;
          fVar17 = (float)((ulong)uVar23 >> 0x20);
          fVar20 = fVar21 - fVar17;
          fVar19 = param_4;
          if (fVar20 < 0.0) {
            fVar19 = param_3;
          }
          fVar17 = fVar17 + fVar20 * fVar19;
          *(float *)(*pauVar10 + 8) = fVar21;
          *(float *)(*pauVar10 + 0xc) = fVar17;
          pauVar10 = pauVar10 + 1;
        } while (pauVar10 < pauVar7);
        if (uVar12 != 0) {
          fVar19 = param_2 * 0.05;
          pauVar10 = param_7;
          do {
            auVar35._0_4_ = *(float *)*pauVar10 * fVar19;
            auVar35._4_4_ = *(float *)(*pauVar10 + 4) * fVar19;
            auVar35._8_4_ = *(float *)(*pauVar10 + 8) * fVar19;
            auVar35._12_4_ = *(float *)(*pauVar10 + 0xc) * fVar19;
            iVar37 = -(uint)(auVar35._0_4_ <= 37.0);
            iVar39 = -(uint)(auVar35._4_4_ <= 37.0);
            iVar41 = -(uint)(auVar35._8_4_ <= 37.0);
            iVar2 = -(uint)(auVar35._12_4_ <= 37.0);
            iVar60 = -(uint)(-37.0 <= auVar35._0_4_);
            iVar64 = -(uint)(-37.0 <= auVar35._4_4_);
            iVar65 = -(uint)(-37.0 <= auVar35._8_4_);
            iVar66 = -(uint)(-37.0 <= auVar35._12_4_);
            bVar44 = (byte)iVar60 & (byte)iVar37;
            bVar45 = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar37 >> 8);
            bVar46 = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
            bVar47 = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar37 >> 0x18);
            bVar48 = (byte)iVar64 & (byte)iVar39;
            bVar49 = (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar39 >> 8);
            bVar50 = (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
            bVar51 = (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
            bVar52 = (byte)iVar65 & (byte)iVar41;
            bVar53 = (byte)((uint)iVar65 >> 8) & (byte)((uint)iVar41 >> 8);
            bVar54 = (byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
            bVar55 = (byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
            bVar56 = (byte)iVar66 & (byte)iVar2;
            bVar57 = (byte)((uint)iVar66 >> 8) & (byte)((uint)iVar2 >> 8);
            bVar58 = (byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar2 >> 0x10);
            bVar59 = (byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar2 >> 0x18);
            auVar24._8_4_ = 0xc2140000;
            auVar24._0_8_ = 0xc2140000c2140000;
            auVar24._12_4_ = 0xc2140000;
            auVar1[1] = bVar45;
            auVar1[0] = bVar44;
            auVar1[2] = bVar46;
            auVar1[3] = bVar47;
            auVar1[4] = bVar48;
            auVar1[5] = bVar49;
            auVar1[6] = bVar50;
            auVar1[7] = bVar51;
            auVar1[8] = bVar52;
            auVar1[9] = bVar53;
            auVar1[10] = bVar54;
            auVar1[0xb] = bVar55;
            auVar1[0xc] = bVar56;
            auVar1[0xd] = bVar57;
            auVar1[0xe] = bVar58;
            auVar1[0xf] = bVar59;
            auVar35 = auVar35 ^ (auVar35 ^ auVar24) & ~auVar1;
            uVar33 = (uint)(auVar35._0_4_ * 27866352.0 + 1.0653532e+09);
            iVar37 = (int)(auVar35._4_4_ * 27866352.0 + 1.0653532e+09);
            iVar39 = (int)(auVar35._8_4_ * 27866352.0 + 1.0653532e+09);
            iVar41 = (int)(auVar35._12_4_ * 27866352.0 + 1.0653532e+09);
            uVar38 = (undefined1)((uint)iVar37 >> 0x10);
            auVar61._0_8_ =
                 CONCAT17((char)((uint)iVar37 >> 0x18),
                          CONCAT16(uVar38,(uint6)((uVar33 >> 0x10 & 0xff80) << 0x10))) &
                 0xff80ffffffffffff;
            auVar61._8_2_ = 0;
            bVar40 = (byte)((uint)iVar39 >> 0x10);
            auVar61[10] = bVar40 & 0x80;
            auVar61[0xb] = (char)((uint)iVar39 >> 0x18);
            auVar63._12_2_ = 0;
            auVar63._0_12_ = auVar61;
            bVar43 = (byte)((uint)iVar41 >> 0x10);
            auVar63[0xe] = bVar43 & 0x80;
            auVar63[0xf] = (char)((uint)iVar41 >> 0x18);
            uVar26 = CONCAT16(uVar38,CONCAT15((char)((uint)iVar37 >> 8),
                                              CONCAT14((char)iVar37,(uint)((uint3)uVar33 & 0x7fffff)
                                                      ))) & 0x7fffffffffffff;
            fVar20 = (float)CONCAT13(auVar22[3],
                                     CONCAT12((byte)(uVar26 >> 0x10) | auVar22[2],
                                              CONCAT11((byte)(uVar26 >> 8) | auVar22[1],
                                                       (byte)uVar26 | auVar22[0])));
            auVar34._0_8_ =
                 CONCAT17(auVar22[7],
                          CONCAT16((byte)(uVar26 >> 0x30) | auVar22[6],
                                   CONCAT15((byte)(uVar26 >> 0x28) | auVar22[5],
                                            CONCAT14((byte)(uVar26 >> 0x20) | auVar22[4],fVar20))));
            auVar34[8] = (byte)iVar39 | auVar22[8];
            auVar34[9] = (byte)((uint)iVar39 >> 8) | auVar22[9];
            auVar34[10] = bVar40 & 0x7f | auVar22[10];
            auVar34[0xb] = auVar22[0xb];
            auVar36[0xc] = (byte)iVar41 | auVar22[0xc];
            auVar36._0_12_ = auVar34;
            auVar36[0xd] = (byte)((uint)iVar41 >> 8) | auVar22[0xd];
            auVar36[0xe] = bVar43 & 0x7f | auVar22[0xe];
            auVar36[0xf] = auVar22[0xf];
            fVar21 = (float)((ulong)auVar34._0_8_ >> 0x20);
            fVar20 = ((fVar20 * 0.32518977 + 0.020805772) * fVar20 + 0.65304345) *
                     (float)auVar61._0_8_;
            fVar21 = ((fVar21 * 0.32518977 + 0.020805772) * fVar21 + 0.65304345) *
                     (float)(auVar61._0_8_ >> 0x20);
            fVar25 = ((auVar34._8_4_ * 0.32518977 + 0.020805772) * auVar34._8_4_ + 0.65304345) *
                     auVar61._8_4_;
            fVar42 = ((auVar36._12_4_ * 0.32518977 + 0.020805772) * auVar36._12_4_ + 0.65304345) *
                     auVar63._12_4_;
            pauVar9 = pauVar10 + 1;
            (*pauVar10)[8] = SUB41(fVar25,0) & bVar52;
            (*pauVar10)[9] = (byte)((uint)fVar25 >> 8) & bVar53;
            (*pauVar10)[10] = (byte)((uint)fVar25 >> 0x10) & bVar54;
            (*pauVar10)[0xb] = (byte)((uint)fVar25 >> 0x18) & bVar55;
            (*pauVar10)[0xc] = SUB41(fVar42,0) & bVar56;
            (*pauVar10)[0xd] = (byte)((uint)fVar42 >> 8) & bVar57;
            (*pauVar10)[0xe] = (byte)((uint)fVar42 >> 0x10) & bVar58;
            (*pauVar10)[0xf] = (byte)((uint)fVar42 >> 0x18) & bVar59;
            (*pauVar10)[0] = SUB41(fVar20,0) & bVar44;
            (*pauVar10)[1] = (byte)((uint)fVar20 >> 8) & bVar45;
            (*pauVar10)[2] = (byte)((uint)fVar20 >> 0x10) & bVar46;
            (*pauVar10)[3] = (byte)((uint)fVar20 >> 0x18) & bVar47;
            (*pauVar10)[4] = SUB41(fVar21,0) & bVar48;
            (*pauVar10)[5] = (byte)((uint)fVar21 >> 8) & bVar49;
            (*pauVar10)[6] = (byte)((uint)fVar21 >> 0x10) & bVar50;
            (*pauVar10)[7] = (byte)((uint)fVar21 >> 0x18) & bVar51;
            pauVar10 = pauVar9;
          } while (pauVar9 < pauVar7);
        }
      }
    }
  }
  if (uVar12 < param_9) {
    do {
      fVar18 = fVar18 * param_5 + fVar16 * (*(float *)*pauVar7 + 1e-25);
      fVar19 = (float)((uint)fVar18 & 0x7fffff | 0x3f800000);
      fVar20 = fVar19 + 1.0;
      fVar19 = ((float)((uint)fVar18 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
               (fVar19 * 1.1581186 * fVar19 * fVar19 + -1.1581186) / (fVar20 * fVar20 * fVar20)) *
               10.0 - param_1;
      fVar20 = 0.0;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar21 = param_4;
      if (fVar17 - fVar19 < 0.0) {
        fVar21 = param_3;
      }
      fVar17 = fVar19 + (fVar17 - fVar19) * fVar21;
      fVar19 = fVar17 * param_2 * 0.05;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      if (-37.0 <= fVar19) {
        bVar4 = false;
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar19)) {
          bVar4 = fVar19 < 37.0;
          bVar5 = fVar19 == 37.0;
          bVar6 = false;
        }
      }
      if (bVar5 || bVar4 != bVar6) {
        uVar12 = (uint)(fVar17 * param_2 * 1393317.6 + 1.0653532e+09);
        fVar19 = (float)(uVar12 & 0x7fffff | 0x3f800000);
        fVar20 = (fVar19 * (fVar19 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar12 & 0xff800000);
      }
      puVar3 = *pauVar7;
      *(float *)*pauVar7 = fVar20;
      pauVar7 = (undefined1 (*) [16])(puVar3 + 4);
    } while ((undefined1 (*) [16])(puVar3 + 4) <
             (undefined1 (*) [16])(*param_7 + (ulong)param_9 * 4));
  }
  *param_10 = fVar17;
  param_10[1] = fVar18;
  if ((param_8 != 0) && (param_9 != 0)) {
    uVar8 = 0;
    do {
      pfVar11 = *(float **)(param_6 + uVar8 * 8);
      pauVar7 = param_7;
      do {
        puVar3 = *pauVar7;
        *pfVar11 = *pfVar11 * *(float *)*pauVar7;
        pfVar11 = pfVar11 + 1;
        pauVar7 = (undefined1 (*) [16])(puVar3 + 4);
      } while ((undefined1 (*) [16])(puVar3 + 4) <
               (undefined1 (*) [16])(*param_7 + (ulong)param_9 * 4));
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_8);
  }
  return;
}


