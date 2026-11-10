/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054afa0; name: FUN_.text__0054afa0
 */


void FUN__text__0054afa0(float param_1,float param_2,float param_3,float param_4,float param_5,
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
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  uint7 uVar28;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  undefined1 auVar34 [12];
  int iVar37;
  undefined1 uVar38;
  byte bVar40;
  byte bVar42;
  undefined1 auVar35 [16];
  int iVar39;
  int iVar41;
  undefined1 auVar36 [16];
  byte bVar43;
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
  int iVar59;
  undefined1 auVar60 [12];
  int iVar63;
  undefined1 auVar61 [16];
  int iVar64;
  int iVar65;
  undefined1 auVar62 [16];
  
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
      fVar23 = (float)*(undefined8 *)*pauVar10 + 1e-25;
      fVar25 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20) + 1e-25;
      fVar26 = (float)*(undefined8 *)(*pauVar10 + 8) + 1e-25;
      fVar27 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20) + 1e-25;
      fVar13 = param_5 * fVar18;
      fVar14 = param_5 * param_5 * fVar18;
      fVar15 = fVar21 * fVar18;
      fVar18 = fVar16 * fVar27 + fVar19 * fVar26 + fVar20 * fVar25 + fVar20 * param_5 * fVar23 +
               fVar21 * param_5 * fVar18;
      pauVar9 = pauVar10 + 1;
      *(ulong *)(*pauVar10 + 8) =
           CONCAT44(fVar18,fVar27 * 0.0 + fVar16 * fVar26 + fVar19 * fVar25 + fVar20 * fVar23 +
                           fVar15);
      *(ulong *)*pauVar10 =
           CONCAT44(fVar27 * 0.0 + fVar26 * 0.0 + fVar16 * fVar25 + fVar19 * fVar23 + fVar14,
                    fVar27 * 0.0 + fVar26 * 0.0 + fVar25 * 0.0 + fVar16 * fVar23 + fVar13);
      pauVar10 = pauVar9;
    } while (pauVar9 < pauVar7);
    if (uVar12 != 0) {
      auVar22 = NEON_fmov(0x3f800000,4);
      auVar24 = NEON_fmov(0x41200000,4);
      pauVar10 = param_7;
      do {
        auVar30 = *pauVar10;
        uVar28 = CONCAT16(auVar30[6],
                          CONCAT15(auVar30[5],CONCAT14(auVar30[4],(uint)(auVar30._0_3_ & 0x7fffff)))
                         ) & 0x7fffffffffffff;
        fVar19 = (float)CONCAT13(auVar22[3],
                                 CONCAT12((byte)(uVar28 >> 0x10) | auVar22[2],
                                          CONCAT11((byte)(uVar28 >> 8) | auVar22[1],
                                                   (byte)uVar28 | auVar22[0])));
        auVar29._0_8_ =
             CONCAT17(auVar22[7],
                      CONCAT16((byte)(uVar28 >> 0x30) | auVar22[6],
                               CONCAT15((byte)(uVar28 >> 0x28) | auVar22[5],
                                        CONCAT14((byte)(uVar28 >> 0x20) | auVar22[4],fVar19))));
        auVar29[8] = auVar30[8] | auVar22[8];
        auVar29[9] = auVar30[9] | auVar22[9];
        auVar29[10] = auVar30[10] & 0x7f | auVar22[10];
        auVar29[0xb] = auVar22[0xb];
        auVar31[0xc] = auVar30[0xc] | auVar22[0xc];
        auVar31._0_12_ = auVar29;
        auVar31[0xd] = auVar30[0xd] | auVar22[0xd];
        auVar31[0xe] = auVar30[0xe] & 0x7f | auVar22[0xe];
        auVar31[0xf] = auVar22[0xf];
        auVar61._0_8_ = CONCAT44(auVar30._4_4_ >> 0x17,auVar30._0_4_ >> 0x17) & 0xfffffefffffffeff;
        auVar61._8_4_ = auVar30._8_4_ >> 0x17 & 0xfffffeff;
        auVar61._12_4_ = auVar30._12_4_ >> 0x17 & 0xfffffeff;
        fVar21 = (float)((ulong)auVar29._0_8_ >> 0x20);
        fVar14 = auVar29._8_4_;
        fVar23 = auVar31._12_4_;
        fVar20 = fVar19 + auVar22._0_4_;
        fVar13 = fVar21 + auVar22._4_4_;
        fVar15 = fVar14 + auVar22._8_4_;
        fVar25 = fVar23 + auVar22._12_4_;
        auVar31 = NEON_scvtf(auVar61,4);
        auVar30._0_4_ = fVar20 * fVar20 * fVar20;
        auVar30._4_4_ = fVar13 * fVar13 * fVar13;
        auVar30._8_4_ = fVar15 * fVar15 * fVar15;
        auVar30._12_4_ = fVar25 * fVar25 * fVar25;
        auVar61 = NEON_frecpe(auVar30,4);
        auVar30 = NEON_frecps(auVar30,auVar61,4);
        auVar32._0_4_ =
             param_1 + (auVar30._0_4_ *
                        auVar61._0_4_ * (fVar19 * fVar19 * fVar19 * -1.1581186 + 1.1581186) +
                       (127.0 - auVar31._0_4_) * 0.30103) * auVar24._0_4_;
        auVar32._4_4_ =
             param_1 + (auVar30._4_4_ *
                        auVar61._4_4_ * (fVar21 * fVar21 * fVar21 * -1.1581186 + 1.1581186) +
                       (127.0 - auVar31._4_4_) * 0.30103) * auVar24._4_4_;
        auVar32._8_4_ =
             param_1 + (auVar30._8_4_ *
                        auVar61._8_4_ * (fVar14 * fVar14 * fVar14 * -1.1581186 + 1.1581186) +
                       (127.0 - auVar31._8_4_) * 0.30103) * auVar24._8_4_;
        auVar32._12_4_ =
             param_1 + (auVar30._12_4_ *
                        auVar61._12_4_ * (fVar23 * fVar23 * fVar23 * -1.1581186 + 1.1581186) +
                       (127.0 - auVar31._12_4_) * 0.30103) * auVar24._12_4_;
        auVar30 = NEON_fmax(auVar32,ZEXT816(0),4);
        pauVar9 = pauVar10 + 1;
        *(long *)(*pauVar10 + 8) = auVar30._8_8_;
        *(long *)*pauVar10 = auVar30._0_8_;
        pauVar10 = pauVar9;
      } while (pauVar9 < pauVar7);
      if (uVar12 != 0) {
        pauVar10 = param_7;
        do {
          fVar20 = (float)*(undefined8 *)*pauVar10;
          fVar17 = fVar17 - fVar20;
          fVar21 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          fVar19 = param_3;
          if (fVar17 < 0.0) {
            fVar19 = param_4;
          }
          fVar20 = fVar20 + fVar17 * fVar19;
          fVar19 = fVar20 - fVar21;
          fVar17 = param_3;
          if (fVar19 < 0.0) {
            fVar17 = param_4;
          }
          fVar21 = fVar21 + fVar19 * fVar17;
          fVar14 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar13 = fVar21 - fVar14;
          fVar17 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          *(float *)*pauVar10 = -fVar20;
          *(float *)(*pauVar10 + 4) = -fVar21;
          fVar19 = param_3;
          if (fVar13 < 0.0) {
            fVar19 = param_4;
          }
          fVar14 = fVar14 + fVar13 * fVar19;
          fVar20 = fVar14 - fVar17;
          fVar19 = param_3;
          if (fVar20 < 0.0) {
            fVar19 = param_4;
          }
          fVar17 = fVar17 + fVar20 * fVar19;
          *(float *)(*pauVar10 + 8) = -fVar14;
          *(float *)(*pauVar10 + 0xc) = -fVar17;
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
            iVar59 = -(uint)(-37.0 <= auVar35._0_4_);
            iVar63 = -(uint)(-37.0 <= auVar35._4_4_);
            iVar64 = -(uint)(-37.0 <= auVar35._8_4_);
            iVar65 = -(uint)(-37.0 <= auVar35._12_4_);
            bVar43 = (byte)iVar59 & (byte)iVar37;
            bVar44 = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar37 >> 8);
            bVar45 = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
            bVar46 = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar37 >> 0x18);
            bVar47 = (byte)iVar63 & (byte)iVar39;
            bVar48 = (byte)((uint)iVar63 >> 8) & (byte)((uint)iVar39 >> 8);
            bVar49 = (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
            bVar50 = (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
            bVar51 = (byte)iVar64 & (byte)iVar41;
            bVar52 = (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar41 >> 8);
            bVar53 = (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
            bVar54 = (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
            bVar55 = (byte)iVar65 & (byte)iVar2;
            bVar56 = (byte)((uint)iVar65 >> 8) & (byte)((uint)iVar2 >> 8);
            bVar57 = (byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar2 >> 0x10);
            bVar58 = (byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar2 >> 0x18);
            auVar24._8_4_ = 0xc2140000;
            auVar24._0_8_ = 0xc2140000c2140000;
            auVar24._12_4_ = 0xc2140000;
            auVar1[1] = bVar44;
            auVar1[0] = bVar43;
            auVar1[2] = bVar45;
            auVar1[3] = bVar46;
            auVar1[4] = bVar47;
            auVar1[5] = bVar48;
            auVar1[6] = bVar49;
            auVar1[7] = bVar50;
            auVar1[8] = bVar51;
            auVar1[9] = bVar52;
            auVar1[10] = bVar53;
            auVar1[0xb] = bVar54;
            auVar1[0xc] = bVar55;
            auVar1[0xd] = bVar56;
            auVar1[0xe] = bVar57;
            auVar1[0xf] = bVar58;
            auVar35 = auVar35 ^ (auVar35 ^ auVar24) & ~auVar1;
            uVar33 = (uint)(auVar35._0_4_ * 27866352.0 + 1.0653532e+09);
            iVar37 = (int)(auVar35._4_4_ * 27866352.0 + 1.0653532e+09);
            iVar39 = (int)(auVar35._8_4_ * 27866352.0 + 1.0653532e+09);
            iVar41 = (int)(auVar35._12_4_ * 27866352.0 + 1.0653532e+09);
            uVar38 = (undefined1)((uint)iVar37 >> 0x10);
            uVar8 = CONCAT17((char)((uint)iVar37 >> 0x18),
                             CONCAT16(uVar38,(uint6)((uVar33 >> 0x10 & 0xff80) << 0x10))) &
                    0xff8000ffffffffff;
            auVar60._8_2_ = 0;
            auVar60._0_8_ = uVar8;
            bVar40 = (byte)((uint)iVar39 >> 0x10);
            auVar60[10] = bVar40 & 0x80;
            auVar60[0xb] = (char)((uint)iVar39 >> 0x18);
            auVar62._12_2_ = 0;
            auVar62._0_12_ = auVar60;
            bVar42 = (byte)((uint)iVar41 >> 0x10);
            auVar62[0xe] = bVar42 & 0x80;
            auVar62[0xf] = (char)((uint)iVar41 >> 0x18);
            uVar28 = CONCAT16(uVar38,CONCAT15((char)((uint)iVar37 >> 8),
                                              CONCAT14((char)iVar37,(uint)((uint3)uVar33 & 0x7fffff)
                                                      ))) & 0x7fffffffffffff;
            fVar20 = (float)CONCAT13(auVar22[3],
                                     CONCAT12((byte)(uVar28 >> 0x10) | auVar22[2],
                                              CONCAT11((byte)(uVar28 >> 8) | auVar22[1],
                                                       (byte)uVar28 | auVar22[0])));
            auVar34._0_8_ =
                 CONCAT17(auVar22[7],
                          CONCAT16((byte)(uVar28 >> 0x30) | auVar22[6],
                                   CONCAT15((byte)(uVar28 >> 0x28) | auVar22[5],
                                            CONCAT14((byte)(uVar28 >> 0x20) | auVar22[4],fVar20))));
            auVar34[8] = (byte)iVar39 | auVar22[8];
            auVar34[9] = (byte)((uint)iVar39 >> 8) | auVar22[9];
            auVar34[10] = bVar40 & 0x7f | auVar22[10];
            auVar34[0xb] = auVar22[0xb];
            auVar36[0xc] = (byte)iVar41 | auVar22[0xc];
            auVar36._0_12_ = auVar34;
            auVar36[0xd] = (byte)((uint)iVar41 >> 8) | auVar22[0xd];
            auVar36[0xe] = bVar42 & 0x7f | auVar22[0xe];
            auVar36[0xf] = auVar22[0xf];
            fVar21 = (float)((ulong)auVar34._0_8_ >> 0x20);
            fVar20 = ((fVar20 * 0.32518977 + 0.020805772) * fVar20 + 0.65304345) * (float)uVar8;
            fVar21 = ((fVar21 * 0.32518977 + 0.020805772) * fVar21 + 0.65304345) *
                     (float)(uVar8 >> 0x20);
            fVar13 = ((auVar34._8_4_ * 0.32518977 + 0.020805772) * auVar34._8_4_ + 0.65304345) *
                     auVar60._8_4_;
            fVar14 = ((auVar36._12_4_ * 0.32518977 + 0.020805772) * auVar36._12_4_ + 0.65304345) *
                     auVar62._12_4_;
            pauVar9 = pauVar10 + 1;
            (*pauVar10)[8] = SUB41(fVar13,0) & bVar51;
            (*pauVar10)[9] = (byte)((uint)fVar13 >> 8) & bVar52;
            (*pauVar10)[10] = (byte)((uint)fVar13 >> 0x10) & bVar53;
            (*pauVar10)[0xb] = (byte)((uint)fVar13 >> 0x18) & bVar54;
            (*pauVar10)[0xc] = SUB41(fVar14,0) & bVar55;
            (*pauVar10)[0xd] = (byte)((uint)fVar14 >> 8) & bVar56;
            (*pauVar10)[0xe] = (byte)((uint)fVar14 >> 0x10) & bVar57;
            (*pauVar10)[0xf] = (byte)((uint)fVar14 >> 0x18) & bVar58;
            (*pauVar10)[0] = SUB41(fVar20,0) & bVar43;
            (*pauVar10)[1] = (byte)((uint)fVar20 >> 8) & bVar44;
            (*pauVar10)[2] = (byte)((uint)fVar20 >> 0x10) & bVar45;
            (*pauVar10)[3] = (byte)((uint)fVar20 >> 0x18) & bVar46;
            (*pauVar10)[4] = SUB41(fVar21,0) & bVar47;
            (*pauVar10)[5] = (byte)((uint)fVar21 >> 8) & bVar48;
            (*pauVar10)[6] = (byte)((uint)fVar21 >> 0x10) & bVar49;
            (*pauVar10)[7] = (byte)((uint)fVar21 >> 0x18) & bVar50;
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
      fVar19 = param_1 + ((float)((uint)fVar18 >> 0x17 & 0xff) * -0.30103 + 38.230812 +
                         (fVar19 * fVar19 * fVar19 * -1.1581186 - -1.1581186) /
                         (fVar20 * fVar20 * fVar20)) * 10.0;
      fVar20 = 0.0;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar21 = param_3;
      if (fVar17 - fVar19 < 0.0) {
        fVar21 = param_4;
      }
      fVar17 = fVar19 + (fVar17 - fVar19) * fVar21;
      fVar19 = fVar17 * -param_2 * 0.05;
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
        uVar12 = (uint)(fVar17 * -param_2 * 1393317.6 + 1.0653532e+09);
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


