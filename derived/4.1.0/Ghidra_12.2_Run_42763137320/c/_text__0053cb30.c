/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053cb30; name: FUN_.text__0053cb30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__0053cb30(undefined1 param_1 [16],long *param_2,undefined8 *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  float *pfVar20;
  undefined1 (*pauVar21) [12];
  undefined1 (*pauVar22) [16];
  float fVar23;
  float fVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  int iVar47;
  int iVar51;
  int iVar54;
  int iVar57;
  undefined1 auVar49 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar50 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  
  if (((*_DAT_008a4060 & 1) == 0) &&
     (iVar47 = __cxa_guard_acquire(_DAT_008a4060), pauVar19 = _DAT_008a4068, iVar47 != 0)) {
    auVar86._8_4_ = 0x6ce3ee;
    auVar86._0_8_ = 0x6ce3ee006ce3ee;
    auVar86._12_4_ = 0x6ce3ee;
    *(long *)(*_DAT_008a4068 + 8) = auVar86._8_8_;
    *(undefined8 *)*pauVar19 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(_DAT_008a4060);
  }
  uVar13 = uRam0000000000724a18;
  uVar12 = _DAT_00724a10;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    auVar86 = NEON_fmov(0xbf800000,4);
    auVar87 = NEON_fmov(0x3f800000,4);
    uVar18 = 0;
    pbVar15 = _DAT_008a4070;
    pbVar16 = _DAT_008a4080;
    pauVar19 = _DAT_008a4068;
    pfVar20 = _DAT_008a4078;
    pauVar21 = _DAT_008a4088;
    do {
      lVar17 = *param_2;
      pauVar22 = *(undefined1 (**) [16])(lVar17 + (ulong)uVar18 * 8);
      pauVar11 = pauVar22;
      if (uVar18 + 1 < uVar1) {
        pauVar11 = *(undefined1 (**) [16])(lVar17 + (ulong)(uVar18 + 1) * 8);
      }
      pauVar10 = pauVar11;
      if (uVar18 + 2 < uVar1) {
        pauVar10 = *(undefined1 (**) [16])(lVar17 + (ulong)(uVar18 + 2) * 8);
      }
      pauVar14 = pauVar10;
      if (uVar18 + 3 < uVar1) {
        pauVar14 = *(undefined1 (**) [16])(lVar17 + (ulong)(uVar18 + 3) * 8);
      }
      uVar5 = *(undefined8 *)(*pauVar22 + 8);
      fVar55 = (float)uVar5;
      fVar48 = (float)*(undefined8 *)*pauVar22;
      fVar52 = (float)((ulong)*(undefined8 *)*pauVar22 >> 0x20);
      auVar42 = *pauVar11;
      auVar62 = *pauVar10;
      uVar7 = *(undefined8 *)(*pauVar14 + 8);
      uVar6 = *(undefined8 *)*pauVar14;
      auVar49 = *pauVar19;
      fVar46 = (float)param_3[1];
      fVar65 = (float)*param_3;
      fVar45 = (float)((ulong)*param_3 >> 0x20);
      if (((*pbVar15 & 1) == 0) &&
         (iVar47 = __cxa_guard_acquire(pbVar15), pfVar20 = _DAT_008a4078, pbVar15 = _DAT_008a4070,
         pbVar16 = _DAT_008a4080, pauVar19 = _DAT_008a4068, pauVar21 = _DAT_008a4088, iVar47 != 0))
      {
        *(long *)(_DAT_008a4078 + 2) = auVar86._8_8_;
        *(long *)pfVar20 = auVar86._0_8_;
        __cxa_guard_release(pbVar15);
        pbVar15 = _DAT_008a4070;
        pbVar16 = _DAT_008a4080;
        pauVar19 = _DAT_008a4068;
        pfVar20 = _DAT_008a4078;
        pauVar21 = _DAT_008a4088;
      }
      fVar58 = (float)uVar6;
      if ((*pbVar16 & 1) == 0) {
        iVar47 = __cxa_guard_acquire(pbVar16);
        pauVar21 = _DAT_008a4088;
        pbVar16 = _DAT_008a4080;
        pbVar15 = _DAT_008a4070;
        pauVar19 = _DAT_008a4068;
        pfVar20 = _DAT_008a4078;
        if (iVar47 != 0) {
          *(long *)(*_DAT_008a4088 + 8) = auVar87._8_8_;
          *(long *)*pauVar21 = auVar87._0_8_;
          __cxa_guard_release(pbVar16);
          pbVar15 = _DAT_008a4070;
          pbVar16 = _DAT_008a4080;
          pauVar19 = _DAT_008a4068;
          pfVar20 = _DAT_008a4078;
          pauVar21 = _DAT_008a4088;
        }
      }
      fVar3 = (float)((ulong)uVar6 >> 0x20);
      fVar4 = (float)uVar7;
      fVar41 = param_1._0_4_;
      fVar53 = param_1._4_4_;
      fVar43 = (float)*(undefined8 *)(*pauVar21 + 8);
      fVar44 = (float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20);
      auVar9 = *pauVar21;
      fVar23 = (float)*(undefined8 *)*pauVar21;
      fVar24 = (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
      fVar56 = param_1._8_4_;
      fVar66 = fVar48 * fVar41 + fVar52 * fVar53 + fVar55 * fVar56;
      fVar67 = auVar42._0_4_ * fVar41 + auVar42._4_4_ * fVar53 + auVar42._8_4_ * fVar56;
      fVar68 = auVar62._0_4_ * fVar41 + auVar62._4_4_ * fVar53 + auVar62._8_4_ * fVar56;
      fVar69 = fVar58 * fVar41 + fVar3 * fVar53 + fVar4 * fVar56;
      iVar47 = -(uint)(ABS(fVar66) < auVar49._0_4_);
      iVar51 = -(uint)(ABS(fVar67) < auVar49._4_4_);
      iVar54 = -(uint)(ABS(fVar68) < auVar49._8_4_);
      iVar57 = -(uint)(ABS(fVar69) < auVar49._12_4_);
      bVar70 = (byte)uVar12;
      auVar49[0] = (byte)iVar47 & bVar70;
      bVar71 = (byte)((ulong)uVar12 >> 8);
      auVar49[1] = (byte)((uint)iVar47 >> 8) & bVar71;
      bVar72 = (byte)((ulong)uVar12 >> 0x10);
      auVar49[2] = (byte)((uint)iVar47 >> 0x10) & bVar72;
      bVar73 = (byte)((ulong)uVar12 >> 0x18);
      auVar49[3] = (byte)((uint)iVar47 >> 0x18) & bVar73;
      bVar74 = (byte)((ulong)uVar12 >> 0x20);
      auVar49[4] = (byte)iVar51 & bVar74;
      bVar75 = (byte)((ulong)uVar12 >> 0x28);
      auVar49[5] = (byte)((uint)iVar51 >> 8) & bVar75;
      bVar76 = (byte)((ulong)uVar12 >> 0x30);
      auVar49[6] = (byte)((uint)iVar51 >> 0x10) & bVar76;
      bVar77 = (byte)((ulong)uVar12 >> 0x38);
      auVar49[7] = (byte)((uint)iVar51 >> 0x18) & bVar77;
      bVar78 = (byte)uVar13;
      auVar49[8] = (byte)iVar54 & bVar78;
      bVar79 = (byte)((ulong)uVar13 >> 8);
      auVar49[9] = (byte)((uint)iVar54 >> 8) & bVar79;
      bVar80 = (byte)((ulong)uVar13 >> 0x10);
      auVar49[10] = (byte)((uint)iVar54 >> 0x10) & bVar80;
      bVar81 = (byte)((ulong)uVar13 >> 0x18);
      auVar49[0xb] = (byte)((uint)iVar54 >> 0x18) & bVar81;
      bVar82 = (byte)((ulong)uVar13 >> 0x20);
      auVar49[0xc] = (byte)iVar57 & bVar82;
      bVar83 = (byte)((ulong)uVar13 >> 0x28);
      auVar49[0xd] = (byte)((uint)iVar57 >> 8) & bVar83;
      bVar84 = (byte)((ulong)uVar13 >> 0x30);
      auVar49[0xe] = (byte)((uint)iVar57 >> 0x10) & bVar84;
      bVar85 = (byte)((ulong)uVar13 >> 0x38);
      auVar49[0xf] = (byte)((uint)iVar57 >> 0x18) & bVar85;
      auVar60 = NEON_ext(auVar49,auVar49,8,1);
      fVar48 = fVar23 * (float)((ulong)uVar5 >> 0x20) +
               (fVar52 * fVar45 + fVar55 * fVar46 + fVar48 * fVar65) * *pfVar20;
      fVar52 = fVar24 * auVar42._12_4_ +
               (auVar42._4_4_ * fVar45 + auVar42._8_4_ * fVar46 + auVar42._0_4_ * fVar65) *
               pfVar20[1];
      fVar55 = fVar43 * auVar62._12_4_ +
               (auVar62._4_4_ * fVar45 + auVar62._8_4_ * fVar46 + auVar62._0_4_ * fVar65) *
               pfVar20[2];
      fVar58 = fVar44 * (float)((ulong)uVar7 >> 0x20) +
               (fVar3 * fVar45 + fVar4 * fVar46 + fVar58 * fVar65) * pfVar20[3];
      iVar47 = -(uint)((char)((byte)((uint)(fVar23 * fVar66 - fVar48) >> 0x18) ^
                             (byte)((uint)fVar48 >> 0x18)) < '\0');
      iVar51 = -(uint)((char)((byte)((uint)(fVar24 * fVar67 - fVar52) >> 0x18) ^
                             (byte)((uint)fVar52 >> 0x18)) < '\0');
      iVar54 = -(uint)((char)((byte)((uint)(fVar43 * fVar68 - fVar55) >> 0x18) ^
                             (byte)((uint)fVar55 >> 0x18)) < '\0');
      iVar57 = -(uint)((char)((byte)((uint)(fVar44 * fVar69 - fVar58) >> 0x18) ^
                             (byte)((uint)fVar58 >> 0x18)) < '\0');
      bVar25 = (byte)iVar47 & bVar70;
      bVar26 = (byte)((uint)iVar47 >> 8) & bVar71;
      bVar27 = (byte)((uint)iVar47 >> 0x10) & bVar72;
      bVar28 = (byte)((uint)iVar47 >> 0x18) & bVar73;
      bVar29 = (byte)iVar51 & bVar74;
      bVar30 = (byte)((uint)iVar51 >> 8) & bVar75;
      bVar31 = (byte)((uint)iVar51 >> 0x10) & bVar76;
      bVar32 = (byte)((uint)iVar51 >> 0x18) & bVar77;
      bVar33 = (byte)iVar54 & bVar78;
      bVar34 = (byte)((uint)iVar54 >> 8) & bVar79;
      bVar35 = (byte)((uint)iVar54 >> 0x10) & bVar80;
      bVar36 = (byte)((uint)iVar54 >> 0x18) & bVar81;
      bVar37 = (byte)iVar57 & bVar82;
      bVar38 = (byte)((uint)iVar57 >> 8) & bVar83;
      bVar39 = (byte)((uint)iVar57 >> 0x10) & bVar84;
      bVar40 = (byte)((uint)iVar57 >> 0x18) & bVar85;
      auVar42[1] = bVar26;
      auVar42[0] = bVar25;
      auVar42[2] = bVar27;
      auVar42[3] = bVar28;
      auVar42[4] = bVar29;
      auVar42[5] = bVar30;
      auVar42[6] = bVar31;
      auVar42[7] = bVar32;
      auVar42[8] = bVar33;
      auVar42[9] = bVar34;
      auVar42[10] = bVar35;
      auVar42[0xb] = bVar36;
      auVar42[0xc] = bVar37;
      auVar42[0xd] = bVar38;
      auVar42[0xe] = bVar39;
      auVar42[0xf] = bVar40;
      auVar62[1] = bVar26;
      auVar62[0] = bVar25;
      auVar62[2] = bVar27;
      auVar62[3] = bVar28;
      auVar62[4] = bVar29;
      auVar62[5] = bVar30;
      auVar62[6] = bVar31;
      auVar62[7] = bVar32;
      auVar62[8] = bVar33;
      auVar62[9] = bVar34;
      auVar62[10] = bVar35;
      auVar62[0xb] = bVar36;
      auVar62[0xc] = bVar37;
      auVar62[0xd] = bVar38;
      auVar62[0xe] = bVar39;
      auVar62[0xf] = bVar40;
      auVar42 = NEON_ext(auVar42,auVar62,8,1);
      uVar2 = CONCAT13(auVar60[3] | auVar49[3] | auVar42[3] | bVar28 |
                       auVar60[7] | auVar49[7] | auVar42[7] | bVar32,
                       CONCAT12(auVar60[2] | auVar49[2] | auVar42[2] | bVar27 |
                                auVar60[6] | auVar49[6] | auVar42[6] | bVar31,
                                CONCAT11(auVar60[1] | auVar49[1] | auVar42[1] | bVar26 |
                                         auVar60[5] | auVar49[5] | auVar42[5] | bVar30,
                                         auVar60[0] | auVar49[0] | auVar42[0] | bVar25 |
                                         auVar60[4] | auVar49[4] | auVar42[4] | bVar29)));
      if (uVar2 != 0xf) {
        uVar5 = *(undefined8 *)pauVar10[1];
        fVar3 = fVar66 * fVar65 + fVar48 * fVar41;
        fVar4 = fVar67 * fVar65 + fVar52 * fVar41;
        fVar24 = fVar68 * fVar65 + fVar55 * fVar41;
        fVar65 = fVar69 * fVar65 + fVar58 * fVar41;
        fVar41 = fVar66 * fVar45 + fVar48 * fVar53;
        fVar43 = fVar67 * fVar45 + fVar52 * fVar53;
        fVar44 = fVar68 * fVar45 + fVar55 * fVar53;
        fVar45 = fVar69 * fVar45 + fVar58 * fVar53;
        fVar48 = fVar66 * fVar46 + fVar48 * fVar56;
        fVar52 = fVar67 * fVar46 + fVar52 * fVar56;
        fVar55 = fVar68 * fVar46 + fVar55 * fVar56;
        fVar46 = fVar69 * fVar46 + fVar58 * fVar56;
        fVar58 = *(float *)pauVar22[1] * fVar3 + *(float *)(pauVar22[1] + 4) * fVar41 +
                 *(float *)(pauVar22[1] + 8) * fVar48 + *(float *)(pauVar22[1] + 0xc) * fVar66;
        fVar53 = *(float *)pauVar11[1] * fVar4 + *(float *)(pauVar11[1] + 4) * fVar43 +
                 *(float *)(pauVar11[1] + 8) * fVar52 + *(float *)(pauVar11[1] + 0xc) * fVar67;
        fVar56 = (float)uVar5 * fVar24 + (float)((ulong)uVar5 >> 0x20) * fVar44 +
                 SUB124(*(undefined1 (*) [12])pauVar10[1],8) * fVar55 +
                 (float)((ulong)*(undefined8 *)(pauVar10[1] + 8) >> 0x20) * fVar68;
        fVar59 = (float)*(undefined8 *)pauVar14[1] * fVar65 +
                 (float)((ulong)*(undefined8 *)pauVar14[1] >> 0x20) * fVar45 +
                 (float)*(undefined8 *)(pauVar14[1] + 8) * fVar46 +
                 (float)((ulong)*(undefined8 *)(pauVar14[1] + 8) >> 0x20) * fVar69;
        iVar47 = -(uint)(fVar58 == 0.0);
        iVar51 = -(uint)(fVar53 == 0.0);
        iVar54 = -(uint)(fVar56 == 0.0);
        iVar57 = -(uint)(fVar59 == 0.0);
        auVar60[0] = (byte)iVar47 & bVar70;
        auVar60[1] = (byte)((uint)iVar47 >> 8) & bVar71;
        auVar60[2] = (byte)((uint)iVar47 >> 0x10) & bVar72;
        auVar60[3] = (byte)((uint)iVar47 >> 0x18) & bVar73;
        auVar60[4] = (byte)iVar51 & bVar74;
        auVar60[5] = (byte)((uint)iVar51 >> 8) & bVar75;
        auVar60[6] = (byte)((uint)iVar51 >> 0x10) & bVar76;
        auVar60[7] = (byte)((uint)iVar51 >> 0x18) & bVar77;
        auVar60[8] = (byte)iVar54 & bVar78;
        auVar60[9] = (byte)((uint)iVar54 >> 8) & bVar79;
        auVar60[10] = (byte)((uint)iVar54 >> 0x10) & bVar80;
        auVar60[0xb] = (byte)((uint)iVar54 >> 0x18) & bVar81;
        auVar60[0xc] = (byte)iVar57 & bVar82;
        auVar60[0xd] = (byte)((uint)iVar57 >> 8) & bVar83;
        auVar60[0xe] = (byte)((uint)iVar57 >> 0x10) & bVar84;
        auVar60[0xf] = (byte)((uint)iVar57 >> 0x18) & bVar85;
        auVar42 = NEON_ext(auVar60,auVar60,8,1);
        fVar63 = fVar68 - fVar56;
        fVar64 = fVar69 - fVar59;
        bVar25 = (byte)((uint)(fVar67 - fVar53) >> 0x18) ^ (byte)((uint)fVar53 >> 0x18);
        bVar26 = (byte)((uint)fVar63 >> 0x18) ^ (byte)((uint)fVar56 >> 0x18);
        iVar47 = -(uint)((char)((byte)((uint)(fVar66 - fVar58) >> 0x18) ^
                               (byte)((uint)fVar58 >> 0x18)) < '\0');
        iVar51 = -(uint)((char)bVar25 < '\0');
        iVar54 = -(uint)((char)bVar26 < '\0');
        iVar57 = -(uint)((long)(CONCAT18((byte)((uint)fVar64 >> 0x18) ^ (byte)((uint)fVar59 >> 0x18)
                                         ,CONCAT17((byte)((uint)fVar64 >> 0x10) ^
                                                   (byte)((uint)fVar59 >> 0x10),
                                                   CONCAT16((byte)((uint)fVar64 >> 8) ^
                                                            (byte)((uint)fVar59 >> 8),
                                                            CONCAT15(SUB41(fVar64,0) ^
                                                                     SUB41(fVar59,0),
                                                                     CONCAT14(bVar26,CONCAT13((byte)
                                                  ((uint)fVar63 >> 0x10) ^
                                                  (byte)((uint)fVar56 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar63 >> 8) ^
                                                           (byte)((uint)fVar56 >> 8),
                                                           CONCAT11(SUB41(fVar63,0) ^
                                                                    SUB41(fVar56,0),bVar25))))))))
                               >> 8) < 0);
        auVar61[0] = (byte)iVar47 & bVar70;
        auVar61[1] = (byte)((uint)iVar47 >> 8) & bVar71;
        auVar61[2] = (byte)((uint)iVar47 >> 0x10) & bVar72;
        auVar61[3] = (byte)((uint)iVar47 >> 0x18) & bVar73;
        auVar61[4] = (byte)iVar51 & bVar74;
        auVar61[5] = (byte)((uint)iVar51 >> 8) & bVar75;
        auVar61[6] = (byte)((uint)iVar51 >> 0x10) & bVar76;
        auVar61[7] = (byte)((uint)iVar51 >> 0x18) & bVar77;
        auVar61[8] = (byte)iVar54 & bVar78;
        auVar61[9] = (byte)((uint)iVar54 >> 8) & bVar79;
        auVar61[10] = (byte)((uint)iVar54 >> 0x10) & bVar80;
        auVar61[0xb] = (byte)((uint)iVar54 >> 0x18) & bVar81;
        auVar61[0xc] = (byte)iVar57 & bVar82;
        auVar61[0xd] = (byte)((uint)iVar57 >> 8) & bVar83;
        auVar61[0xe] = (byte)((uint)iVar57 >> 0x10) & bVar84;
        auVar61[0xf] = (byte)((uint)iVar57 >> 0x18) & bVar85;
        auVar62 = NEON_ext(auVar61,auVar61,8,1);
        uVar2 = CONCAT13(auVar62[3] | auVar61[3] | auVar62[7] | auVar61[7],
                         CONCAT12(auVar62[2] | auVar61[2] | auVar62[6] | auVar61[6],
                                  CONCAT11(auVar62[1] | auVar61[1] | auVar62[5] | auVar61[5],
                                           auVar62[0] | auVar61[0] | auVar62[4] | auVar61[4]))) &
                (CONCAT13(auVar42[3] | auVar60[3] | auVar42[7] | auVar60[7],
                          CONCAT12(auVar42[2] | auVar60[2] | auVar42[6] | auVar60[6],
                                   CONCAT11(auVar42[1] | auVar60[1] | auVar42[5] | auVar60[5],
                                            auVar42[0] | auVar60[0] | auVar42[4] | auVar60[4]))) ^
                0xffffffff) | uVar2;
        if (uVar2 != 0xf) {
          uVar5 = *(undefined8 *)pauVar10[2];
          fVar63 = *(float *)pauVar22[2] * fVar3 + *(float *)(pauVar22[2] + 4) * fVar41 +
                   *(float *)(pauVar22[2] + 8) * fVar48 + *(float *)(pauVar22[2] + 0xc) * fVar66;
          fVar52 = *(float *)pauVar11[2] * fVar4 + *(float *)(pauVar11[2] + 4) * fVar43 +
                   *(float *)(pauVar11[2] + 8) * fVar52 + *(float *)(pauVar11[2] + 0xc) * fVar67;
          fVar55 = (float)uVar5 * fVar24 + (float)((ulong)uVar5 >> 0x20) * fVar44 +
                   SUB124(*(undefined1 (*) [12])pauVar10[2],8) * fVar55 +
                   (float)((ulong)*(undefined8 *)(pauVar10[2] + 8) >> 0x20) * fVar68;
          fVar65 = (float)*(undefined8 *)pauVar14[2] * fVar65 +
                   (float)((ulong)*(undefined8 *)pauVar14[2] >> 0x20) * fVar45 +
                   (float)*(undefined8 *)(pauVar14[2] + 8) * fVar46 +
                   (float)((ulong)*(undefined8 *)(pauVar14[2] + 8) >> 0x20) * fVar69;
          fVar45 = fVar68 - (fVar56 + fVar55);
          fVar46 = fVar69 - (fVar59 + fVar65);
          bVar25 = (byte)((uint)(fVar67 - (fVar53 + fVar52)) >> 0x18) ^ (byte)((uint)fVar52 >> 0x18)
          ;
          bVar26 = (byte)((uint)fVar45 >> 0x18) ^ (byte)((uint)fVar55 >> 0x18);
          iVar47 = -(uint)((char)((byte)((uint)(fVar66 - (fVar58 + fVar63)) >> 0x18) ^
                                 (byte)((uint)fVar63 >> 0x18)) < '\0');
          iVar51 = -(uint)((char)bVar25 < '\0');
          iVar54 = -(uint)((char)bVar26 < '\0');
          iVar57 = -(uint)((long)(CONCAT18((byte)((uint)fVar46 >> 0x18) ^
                                           (byte)((uint)fVar65 >> 0x18),
                                           CONCAT17((byte)((uint)fVar46 >> 0x10) ^
                                                    (byte)((uint)fVar65 >> 0x10),
                                                    CONCAT16((byte)((uint)fVar46 >> 8) ^
                                                             (byte)((uint)fVar65 >> 8),
                                                             CONCAT15(SUB41(fVar46,0) ^
                                                                      SUB41(fVar65,0),
                                                                      CONCAT14(bVar26,CONCAT13((byte
                                                  )((uint)fVar45 >> 0x10) ^
                                                  (byte)((uint)fVar55 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar45 >> 8) ^
                                                           (byte)((uint)fVar55 >> 8),
                                                           CONCAT11(SUB41(fVar45,0) ^
                                                                    SUB41(fVar55,0),bVar25))))))))
                                 >> 8) < 0);
          auVar50[0] = (byte)iVar47 & bVar70;
          auVar50[1] = (byte)((uint)iVar47 >> 8) & bVar71;
          auVar50[2] = (byte)((uint)iVar47 >> 0x10) & bVar72;
          auVar50[3] = (byte)((uint)iVar47 >> 0x18) & bVar73;
          auVar50[4] = (byte)iVar51 & bVar74;
          auVar50[5] = (byte)((uint)iVar51 >> 8) & bVar75;
          auVar50[6] = (byte)((uint)iVar51 >> 0x10) & bVar76;
          auVar50[7] = (byte)((uint)iVar51 >> 0x18) & bVar77;
          auVar50[8] = (byte)iVar54 & bVar78;
          auVar50[9] = (byte)((uint)iVar54 >> 8) & bVar79;
          auVar50[10] = (byte)((uint)iVar54 >> 0x10) & bVar80;
          auVar50[0xb] = (byte)((uint)iVar54 >> 0x18) & bVar81;
          auVar50[0xc] = (byte)iVar57 & bVar82;
          auVar50[0xd] = (byte)((uint)iVar57 >> 8) & bVar83;
          auVar50[0xe] = (byte)((uint)iVar57 >> 0x10) & bVar84;
          auVar50[0xf] = (byte)((uint)iVar57 >> 0x18) & bVar85;
          auVar42 = NEON_ext(auVar50,auVar50,8,1);
          uVar2 = CONCAT13(auVar42[7] | auVar50[7] | auVar42[3] | auVar50[3],
                           CONCAT12(auVar42[6] | auVar50[6] | auVar42[2] | auVar50[2],
                                    CONCAT11(auVar42[5] | auVar50[5] | auVar42[1] | auVar50[1],
                                             auVar42[4] | auVar50[4] | auVar42[0] | auVar50[0]))) |
                  uVar2;
          if (uVar2 != 0xf) {
            auVar87._4_4_ = fVar67;
            auVar87._0_4_ = fVar66;
            auVar87._8_4_ = fVar68;
            auVar87._12_4_ = fVar69;
            auVar87 = NEON_frecpe(auVar87,4);
            iVar47 = 0;
            auVar8._4_4_ = fVar67;
            auVar8._0_4_ = fVar66;
            auVar8._8_4_ = fVar68;
            auVar8._12_4_ = fVar69;
            auVar86 = NEON_frecps(auVar8,auVar87,4);
            fVar52 = auVar87._0_4_ * fVar23 * auVar86._0_4_;
            param_4[2] = fVar52 * fVar48;
            param_4[3] = auVar9._0_4_;
            *param_4 = fVar3 * fVar52;
            param_4[1] = fVar41 * fVar52;
            for (; (uVar2 & 1) != 0; uVar2 = uVar2 >> 1) {
              iVar47 = iVar47 + 1;
            }
            return *(undefined8 *)(*param_2 + (ulong)(iVar47 + uVar18) * 8);
          }
        }
      }
      uVar18 = uVar18 + 4;
    } while (uVar18 < uVar1);
  }
  return 0;
}


