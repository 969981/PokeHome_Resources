/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00556bd4; name: FUN_.text__00556bd4
 */


void FUN__text__00556bd4(ulong *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  int iVar34;
  byte bVar42;
  byte bVar46;
  ulong uVar35;
  undefined1 auVar36 [12];
  byte bVar40;
  byte bVar41;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  undefined1 auVar37 [16];
  int iVar43;
  undefined1 auVar38 [16];
  byte bVar49;
  byte bVar52;
  undefined1 auVar39 [16];
  int iVar57;
  ulong uVar53;
  int iVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar59;
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  pfVar7 = (float *)*param_1;
  uVar8 = (ulong)(uint)param_1[1] & 0xfffffffe;
  fVar13 = *pfVar7;
  fVar12 = pfVar7[1];
  pfVar1 = pfVar7 + (ulong)((uint)param_1[1] >> 1) * 2;
  fVar11 = *pfVar1;
  fVar10 = pfVar1[1];
  if ((int)uVar8 != 0) {
    auVar15 = NEON_fmov(0x3f800000,4);
    auVar16 = NEON_fmov(0xbf800000,4);
    pfVar9 = pfVar7;
    do {
      fVar14 = pfVar9[1];
      fVar4 = pfVar9[3];
      fVar5 = pfVar9[5];
      fVar6 = pfVar9[7];
      auVar29._4_4_ = pfVar9[2];
      auVar29._0_4_ = *pfVar9;
      auVar29._8_4_ = pfVar9[4];
      auVar29._12_4_ = pfVar9[6];
      auVar22._0_4_ = -(uint)(1e-18 < ABS(*pfVar9));
      auVar22._4_4_ = -(uint)(1e-18 < ABS(pfVar9[2]));
      auVar22._8_4_ = -(uint)(1e-18 < ABS(pfVar9[4]));
      auVar22._12_4_ = -(uint)(1e-18 < ABS(pfVar9[6]));
      auVar30._8_4_ = 0x219392ef;
      auVar30._0_8_ = 0x219392ef219392ef;
      auVar30._12_4_ = 0x219392ef;
      auVar23._8_4_ = 0x219392ef;
      auVar23._0_8_ = 0x219392ef219392ef;
      auVar23._12_4_ = 0x219392ef;
      auVar23 = auVar23 ^ (auVar30 ^ auVar29) & auVar22;
      auVar30 = NEON_frecpe(auVar23,4);
      auVar37 = NEON_frecps(auVar23,auVar30,4);
      fVar28 = auVar30._0_4_ * fVar14 * auVar37._0_4_;
      fVar31 = auVar30._4_4_ * fVar4 * auVar37._4_4_;
      fVar32 = auVar30._8_4_ * fVar5 * auVar37._8_4_;
      fVar33 = auVar30._12_4_ * fVar6 * auVar37._12_4_;
      iVar34 = -(uint)(ABS(fVar28) <= auVar15._0_4_);
      iVar43 = -(uint)(ABS(fVar31) <= auVar15._4_4_);
      auVar38._0_8_ = CONCAT44(iVar43,iVar34);
      auVar38._8_4_ = -(uint)(ABS(fVar32) <= auVar15._8_4_);
      auVar38._12_4_ = -(uint)(ABS(fVar33) <= auVar15._12_4_);
      auVar60._8_8_ = auVar38._8_8_;
      auVar60._0_8_ = auVar38._0_8_;
      auVar54._8_8_ = auVar38._8_8_;
      auVar54._0_8_ = auVar38._0_8_;
      auVar56._8_4_ = 0x3e8f5c29;
      auVar56._0_8_ = 0x3e8f5c293e8f5c29;
      auVar56._12_4_ = 0x3e8f5c29;
      auVar3._8_4_ = 0x40649249;
      auVar3._0_8_ = 0x4064924940649249;
      auVar3._12_4_ = 0x40649249;
      auVar61._8_4_ = 0x3e8f5c29;
      auVar61._0_8_ = 0x3e8f5c293e8f5c29;
      auVar61._12_4_ = 0x3e8f5c29;
      auVar61 = auVar61 ^ (auVar56 ^ auVar3) & auVar60;
      auVar2._8_4_ = 0x3e8f5c29;
      auVar2._0_8_ = 0x3e8f5c293e8f5c29;
      auVar2._12_4_ = 0x3e8f5c29;
      auVar30 = auVar16 ^ (auVar16 ^ auVar2) & auVar54;
      auVar55._0_4_ = (auVar61._0_4_ + fVar28 * fVar28) * auVar30._0_4_;
      auVar55._4_4_ = (auVar61._4_4_ + fVar31 * fVar31) * auVar30._4_4_;
      auVar55._8_4_ = (auVar61._8_4_ + fVar32 * fVar32) * auVar30._8_4_;
      auVar55._12_4_ = (auVar61._12_4_ + fVar33 * fVar33) * auVar30._12_4_;
      auVar62._0_4_ = -(uint)(1e-18 < ABS(auVar55._0_4_));
      auVar62._4_4_ = -(uint)(1e-18 < ABS(auVar55._4_4_));
      auVar62._8_4_ = -(uint)(1e-18 < ABS(auVar55._8_4_));
      auVar62._12_4_ = -(uint)(1e-18 < ABS(auVar55._12_4_));
      auVar37._8_4_ = 0x219392ef;
      auVar37._0_8_ = 0x219392ef219392ef;
      auVar37._12_4_ = 0x219392ef;
      auVar55 = auVar55 ^ (auVar55 ^ auVar37) & ~auVar62;
      auVar61 = NEON_frecpe(auVar55,4);
      auVar37 = NEON_frecps(auVar55,auVar61,4);
      auVar63._0_4_ = -(uint)(fVar14 < 0.0);
      auVar63._4_4_ = -(uint)(fVar4 < 0.0);
      auVar63._8_4_ = -(uint)(fVar5 < 0.0);
      auVar63._12_4_ = -(uint)(fVar6 < 0.0);
      fVar21 = auVar23._0_4_;
      fVar25 = auVar23._4_4_;
      iVar57 = -(uint)(fVar25 < 0.0);
      fVar26 = auVar23._8_4_;
      iVar58 = -(uint)(fVar26 < 0.0);
      fVar27 = auVar23._12_4_;
      iVar59 = -(uint)(fVar27 < 0.0);
      uVar53 = CONCAT17((char)((uint)iVar57 >> 0x18),
                        CONCAT16((char)((uint)iVar57 >> 0x10),
                                 CONCAT15((char)((uint)iVar57 >> 8),
                                          CONCAT14((char)iVar57,-(uint)(fVar21 < 0.0))))) &
               0x40490fdb40490fdb;
      auVar24._0_4_ = fVar21 * fVar21 + fVar14 * fVar14;
      auVar24._4_4_ = fVar25 * fVar25 + fVar4 * fVar4;
      auVar24._8_4_ = fVar26 * fVar26 + fVar5 * fVar5;
      auVar24._12_4_ = fVar27 * fVar27 + fVar6 * fVar6;
      bVar40 = (byte)((uint)iVar34 >> 8);
      bVar41 = (byte)((uint)iVar34 >> 0x10);
      bVar42 = (byte)((uint)iVar34 >> 0x18);
      bVar44 = (byte)((uint)iVar43 >> 8);
      bVar45 = (byte)((uint)iVar43 >> 0x10);
      bVar46 = (byte)((uint)iVar43 >> 0x18);
      bVar47 = (byte)((uint)auVar38._8_4_ >> 8);
      bVar48 = (byte)((uint)auVar38._8_4_ >> 0x10);
      bVar49 = (byte)((uint)auVar38._8_4_ >> 0x18);
      bVar50 = (byte)((uint)auVar38._12_4_ >> 8);
      bVar51 = (byte)((uint)auVar38._12_4_ >> 0x10);
      bVar52 = (byte)((uint)auVar38._12_4_ >> 0x18);
      uVar35 = CONCAT17(~bVar46,CONCAT16(~bVar45,CONCAT15(~bVar44,CONCAT14(~(byte)iVar43,
                                                                           CONCAT13(~bVar42,CONCAT12
                                                  (~bVar41,CONCAT11(~bVar40,~(byte)iVar34))))))) &
               0x3fc90fdb3fc90fdb;
      fVar14 = (float)CONCAT13(bVar42 & (byte)(uVar53 >> 0x18) | (byte)(uVar35 >> 0x18),
                               CONCAT12(bVar41 & (byte)(uVar53 >> 0x10) | (byte)(uVar35 >> 0x10),
                                        CONCAT11(bVar40 & (byte)(uVar53 >> 8) | (byte)(uVar35 >> 8),
                                                 (byte)iVar34 & (byte)uVar53 | (byte)uVar35)));
      auVar36._0_8_ =
           CONCAT17(bVar46 & (byte)(uVar53 >> 0x38) | (byte)(uVar35 >> 0x38),
                    CONCAT16(bVar45 & (byte)(uVar53 >> 0x30) | (byte)(uVar35 >> 0x30),
                             CONCAT15(bVar44 & (byte)(uVar53 >> 0x28) | (byte)(uVar35 >> 0x28),
                                      CONCAT14((byte)iVar43 & (byte)(uVar53 >> 0x20) |
                                               (byte)(uVar35 >> 0x20),fVar14))));
      auVar36[8] = (byte)auVar38._8_4_ & (byte)iVar58 & 0xdb | ~(byte)auVar38._8_4_ & 0xdb;
      auVar36[9] = bVar47 & (byte)((uint)iVar58 >> 8) & 0xf | ~bVar47 & 0xf;
      auVar36[10] = bVar48 & (byte)((uint)iVar58 >> 0x10) & 0x49 | ~bVar48 & 0xc9;
      auVar36[0xb] = bVar49 & (byte)((uint)iVar58 >> 0x18) & 0x40 | ~bVar49 & 0x3f;
      auVar39[0xc] = (byte)auVar38._12_4_ & (byte)iVar59 & 0xdb | ~(byte)auVar38._12_4_ & 0xdb;
      auVar39._0_12_ = auVar36;
      auVar39[0xd] = bVar50 & (byte)((uint)iVar59 >> 8) & 0xf | ~bVar50 & 0xf;
      auVar39[0xe] = bVar51 & (byte)((uint)iVar59 >> 0x10) & 0x49 | ~bVar51 & 0xc9;
      auVar39[0xf] = bVar52 & (byte)((uint)iVar59 >> 0x18) & 0x40 | ~bVar52 & 0x3f;
      auVar30 = NEON_frsqrte(auVar24,4);
      auVar56 = auVar15 ^ (auVar15 ^ auVar16) & auVar63;
      auVar23 = NEON_frecpe(auVar30,4);
      auVar17._4_12_ = auVar30._4_12_;
      auVar17._0_4_ = auVar23._8_4_;
      auVar19._12_4_ = auVar30._12_4_;
      auVar19._0_8_ = auVar17._0_8_;
      auVar19._8_4_ = auVar23._12_4_;
      auVar18._8_8_ = auVar19._8_8_;
      auVar18._0_8_ =
           CONCAT44(-(auVar61._8_4_ * fVar32 * auVar37._8_4_ + auVar56._8_4_ * auVar36._8_4_),
                    auVar23._8_4_);
      auVar20._0_12_ = auVar18._0_12_;
      auVar20._12_4_ = -(auVar61._12_4_ * fVar33 * auVar37._12_4_ + auVar56._12_4_ * auVar39._12_4_)
      ;
      *pfVar9 = auVar23._0_4_;
      pfVar9[1] = -(auVar61._0_4_ * fVar28 * auVar37._0_4_ + auVar56._0_4_ * fVar14);
      pfVar9[2] = auVar23._4_4_;
      pfVar9[3] = -(auVar61._4_4_ * fVar31 * auVar37._4_4_ +
                   auVar56._4_4_ * (float)((ulong)auVar36._0_8_ >> 0x20));
      *(long *)(pfVar9 + 6) = auVar20._8_8_;
      *(undefined8 *)(pfVar9 + 4) = auVar18._0_8_;
      pfVar9 = pfVar9 + 8;
    } while (pfVar9 < pfVar7 + uVar8);
  }
  *pfVar7 = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
  if (fVar13 == 0.0) {
    if (fVar12 <= 0.0) {
      if (fVar12 == 0.0) {
        fVar14 = 0.0;
        if ((int)fVar13 < 0) {
          fVar14 = 3.1415927;
        }
      }
      else {
        fVar14 = -1.5707964;
      }
    }
    else {
      fVar14 = 1.5707964;
    }
  }
  else {
    fVar14 = fVar12 / fVar13;
    if (1.0 <= ABS(fVar14)) {
      if (0.0 <= fVar12) {
        fVar12 = 1.5707964;
      }
      else {
        fVar12 = -1.5707964;
      }
      fVar14 = fVar12 - fVar14 / (fVar14 * fVar14 + 0.28);
    }
    else {
      fVar14 = fVar14 / (fVar14 * fVar14 * 0.28 + 1.0);
      if (fVar13 < 0.0) {
        if (0.0 <= fVar12) {
          fVar12 = 3.1415927;
        }
        else {
          fVar12 = -3.1415927;
        }
        fVar14 = fVar14 + fVar12;
      }
    }
  }
  pfVar7[1] = fVar14;
  *pfVar1 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar11 == 0.0) {
    if (fVar10 <= 0.0) {
      if (fVar10 != 0.0) {
        pfVar1[1] = -1.5707964;
        *(undefined1 *)((long)param_1 + 0xd) = 1;
        return;
      }
      fVar10 = 0.0;
      if ((int)fVar11 < 0) {
        fVar10 = 3.1415927;
      }
      pfVar1[1] = fVar10;
      *(undefined1 *)((long)param_1 + 0xd) = 1;
      return;
    }
    fVar12 = 1.5707964;
  }
  else {
    fVar12 = fVar10 / fVar11;
    if (1.0 <= ABS(fVar12)) {
      fVar12 = fVar12 / (fVar12 * fVar12 + 0.28);
      if (0.0 <= fVar10) {
        pfVar1[1] = 1.5707964 - fVar12;
        *(undefined1 *)((long)param_1 + 0xd) = 1;
        return;
      }
      pfVar1[1] = -1.5707964 - fVar12;
      *(undefined1 *)((long)param_1 + 0xd) = 1;
      return;
    }
    fVar12 = fVar12 / (fVar12 * fVar12 * 0.28 + 1.0);
    if (fVar11 < 0.0) {
      if (0.0 <= fVar10) {
        pfVar1[1] = fVar12 + 3.1415927;
        *(undefined1 *)((long)param_1 + 0xd) = 1;
        return;
      }
      pfVar1[1] = fVar12 + -3.1415927;
      *(undefined1 *)((long)param_1 + 0xd) = 1;
      return;
    }
  }
  pfVar1[1] = fVar12;
  *(undefined1 *)((long)param_1 + 0xd) = 1;
  return;
}


