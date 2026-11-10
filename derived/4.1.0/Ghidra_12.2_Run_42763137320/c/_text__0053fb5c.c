/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053fb5c; name: FUN_.text__0053fb5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__0053fb5c(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  int iVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar15 [16];
  float fVar22;
  byte bVar27;
  float fVar28;
  undefined1 auVar24 [16];
  float fVar23;
  byte bVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar32 [16];
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
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
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined1 auVar70 [16];
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
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
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  undefined8 local_3c;
  float local_34;
  
  pfVar8 = _DAT_008a42d8;
  if (((*_DAT_008a42d0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(_DAT_008a42d0), iVar13 != 0)) {
    auVar24._8_4_ = 0x6ce3ee;
    auVar24._0_8_ = 0x6ce3ee006ce3ee;
    auVar24._12_4_ = 0x6ce3ee;
    *(long *)(pfVar8 + 2) = auVar24._8_8_;
    pfVar8[0] = 1e-38;
    pfVar8[1] = 1e-38;
    __cxa_guard_release(_DAT_008a42d0);
  }
  puVar9 = _DAT_008a42e8;
  uVar71 = *(undefined8 *)(param_1 + 0x42);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
  fVar23 = auVar24._0_4_;
  fVar31 = auVar24._4_4_;
  fVar43 = auVar24._8_4_;
  fVar72 = *param_1 * fVar23 + param_1[4] * fVar31 + param_1[8] * fVar43;
  fVar73 = param_1[1] * fVar23 + param_1[5] * fVar31 + param_1[9] * fVar43;
  fVar74 = param_1[2] * fVar23 + param_1[6] * fVar31 + param_1[10] * fVar43;
  fVar75 = param_1[3] * fVar23 + param_1[7] * fVar31 + param_1[0xb] * fVar43;
  iVar13 = -(uint)(ABS(fVar72) < *pfVar8);
  iVar16 = -(uint)(ABS(fVar73) < pfVar8[1]);
  iVar18 = -(uint)(ABS(fVar74) < pfVar8[2]);
  iVar20 = -(uint)(ABS(fVar75) < pfVar8[3]);
  bVar76 = (byte)_DAT_00724a10;
  auVar70[0] = (byte)iVar13 & bVar76;
  bVar77 = (byte)((ulong)_DAT_00724a10 >> 8);
  auVar70[1] = (byte)((uint)iVar13 >> 8) & bVar77;
  bVar78 = (byte)((ulong)_DAT_00724a10 >> 0x10);
  auVar70[2] = (byte)((uint)iVar13 >> 0x10) & bVar78;
  bVar79 = (byte)((ulong)_DAT_00724a10 >> 0x18);
  auVar70[3] = (byte)((uint)iVar13 >> 0x18) & bVar79;
  bVar80 = (byte)((ulong)_DAT_00724a10 >> 0x20);
  auVar70[4] = (byte)iVar16 & bVar80;
  bVar81 = (byte)((ulong)_DAT_00724a10 >> 0x28);
  auVar70[5] = (byte)((uint)iVar16 >> 8) & bVar81;
  bVar82 = (byte)((ulong)_DAT_00724a10 >> 0x30);
  auVar70[6] = (byte)((uint)iVar16 >> 0x10) & bVar82;
  bVar83 = (byte)((ulong)_DAT_00724a10 >> 0x38);
  auVar70[7] = (byte)((uint)iVar16 >> 0x18) & bVar83;
  bVar84 = (byte)uRam0000000000724a18;
  auVar70[8] = (byte)iVar18 & bVar84;
  bVar85 = (byte)((ulong)uRam0000000000724a18 >> 8);
  auVar70[9] = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar86 = (byte)((ulong)uRam0000000000724a18 >> 0x10);
  auVar70[10] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar87 = (byte)((ulong)uRam0000000000724a18 >> 0x18);
  auVar70[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar88 = (byte)((ulong)uRam0000000000724a18 >> 0x20);
  auVar70[0xc] = (byte)iVar20 & bVar88;
  bVar89 = (byte)((ulong)uRam0000000000724a18 >> 0x28);
  auVar70[0xd] = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar90 = (byte)((ulong)uRam0000000000724a18 >> 0x30);
  auVar70[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar91 = (byte)((ulong)uRam0000000000724a18 >> 0x38);
  auVar70[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar24 = NEON_ext(auVar70,auVar70,8,1);
  if (((*_DAT_008a42e0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(_DAT_008a42e0), iVar13 != 0)) {
    auVar15 = NEON_fmov(0xbf800000,4);
    puVar9[1] = auVar15._8_8_;
    *puVar9 = auVar15._0_8_;
    __cxa_guard_release(_DAT_008a42e0);
  }
  if (((*_DAT_008a42f0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(_DAT_008a42f0), puVar10 = _DAT_008a42f8, iVar13 != 0)) {
    auVar15 = NEON_fmov(0x3f800000,4);
    _DAT_008a42f8[1] = auVar15._8_8_;
    *puVar10 = auVar15._0_8_;
    __cxa_guard_release(_DAT_008a42f0);
  }
  fVar39 = (float)uVar12;
  fVar40 = (float)((ulong)uVar12 >> 0x20);
  fVar22 = param_1[0x55];
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x54] & 0x1f);
  fVar44 = (float)uVar71;
  fVar14 = (float)*_DAT_008a42f8 * param_1[0xc] +
           (*param_1 * fVar39 + param_1[4] * fVar40 + (float)*(undefined8 *)(param_1 + 8) * fVar44)
           * (float)*puVar9;
  fVar17 = (float)((ulong)*_DAT_008a42f8 >> 0x20) * param_1[0xd] +
           (param_1[1] * fVar39 + param_1[5] * fVar40 +
           (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar44) *
           (float)((ulong)*puVar9 >> 0x20);
  fVar19 = (float)_DAT_008a42f8[1] * param_1[0xe] +
           (param_1[2] * fVar39 + param_1[6] * fVar40 +
           (float)*(undefined8 *)(param_1 + 10) * fVar44) * (float)puVar9[1];
  fVar21 = (float)((ulong)_DAT_008a42f8[1] >> 0x20) * param_1[0xf] +
           (param_1[3] * fVar39 + param_1[7] * fVar40 +
           (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) * fVar44) *
           (float)((ulong)puVar9[1] >> 0x20);
  fVar28 = fVar74 * fVar22 - fVar19;
  fVar30 = fVar75 * fVar22 - fVar21;
  bVar27 = (byte)((uint)(fVar73 * fVar22 - fVar17) >> 0x18) ^ (byte)((uint)fVar17 >> 0x18);
  bVar29 = (byte)((uint)fVar28 >> 0x18) ^ (byte)((uint)fVar19 >> 0x18);
  iVar13 = -(uint)((char)((byte)((uint)(fVar72 * fVar22 - fVar14) >> 0x18) ^
                         (byte)((uint)fVar14 >> 0x18)) < '\0');
  iVar16 = -(uint)((char)bVar27 < '\0');
  iVar18 = -(uint)((char)bVar29 < '\0');
  iVar20 = -(uint)((long)(CONCAT18((byte)((uint)fVar30 >> 0x18) ^ (byte)((uint)fVar21 >> 0x18),
                                   CONCAT17((byte)((uint)fVar30 >> 0x10) ^
                                            (byte)((uint)fVar21 >> 0x10),
                                            CONCAT16((byte)((uint)fVar30 >> 8) ^
                                                     (byte)((uint)fVar21 >> 8),
                                                     CONCAT15(SUB41(fVar30,0) ^ SUB41(fVar21,0),
                                                              CONCAT14(bVar29,CONCAT13((byte)((uint)
                                                  fVar28 >> 0x10) ^ (byte)((uint)fVar19 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar28 >> 8) ^
                                                           (byte)((uint)fVar19 >> 8),
                                                           CONCAT11(SUB41(fVar28,0) ^
                                                                    SUB41(fVar19,0),bVar27))))))))
                         >> 8) < 0);
  auVar15[0] = (byte)iVar13 & bVar76;
  auVar15[1] = (byte)((uint)iVar13 >> 8) & bVar77;
  auVar15[2] = (byte)((uint)iVar13 >> 0x10) & bVar78;
  auVar15[3] = (byte)((uint)iVar13 >> 0x18) & bVar79;
  auVar15[4] = (byte)iVar16 & bVar80;
  auVar15[5] = (byte)((uint)iVar16 >> 8) & bVar81;
  auVar15[6] = (byte)((uint)iVar16 >> 0x10) & bVar82;
  auVar15[7] = (byte)((uint)iVar16 >> 0x18) & bVar83;
  auVar15[8] = (byte)iVar18 & bVar84;
  auVar15[9] = (byte)((uint)iVar18 >> 8) & bVar85;
  auVar15[10] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  auVar15[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  auVar15[0xc] = (byte)iVar20 & bVar88;
  auVar15[0xd] = (byte)((uint)iVar20 >> 8) & bVar89;
  auVar15[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  auVar15[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar32 = NEON_ext(auVar15,auVar15,8,1);
  uVar2 = CONCAT13(auVar24[3] | auVar70[3] | auVar24[7] | auVar70[7],
                   CONCAT12(auVar24[2] | auVar70[2] | auVar24[6] | auVar70[6],
                            CONCAT11(auVar24[1] | auVar70[1] | auVar24[5] | auVar70[5],
                                     auVar24[0] | auVar70[0] | auVar24[4] | auVar70[4]))) |
          CONCAT13(auVar32[3] | auVar15[3] | auVar32[7] | auVar15[7],
                   CONCAT12(auVar32[2] | auVar15[2] | auVar32[6] | auVar15[6],
                            CONCAT11(auVar32[1] | auVar15[1] | auVar32[5] | auVar15[5],
                                     auVar32[0] | auVar15[0] | auVar32[4] | auVar15[4]))) & uVar1;
  if (uVar2 == uVar1) goto LAB__text__0053fee8;
  fVar30 = fVar72 * fVar39 + fVar14 * fVar23;
  fVar37 = fVar73 * fVar39 + fVar17 * fVar23;
  fVar38 = fVar74 * fVar39 + fVar19 * fVar23;
  fVar39 = fVar75 * fVar39 + fVar21 * fVar23;
  fVar23 = fVar72 * fVar40 + fVar14 * fVar31;
  fVar22 = fVar73 * fVar40 + fVar17 * fVar31;
  fVar28 = fVar74 * fVar40 + fVar19 * fVar31;
  fVar31 = fVar75 * fVar40 + fVar21 * fVar31;
  fVar40 = fVar72 * fVar44 + fVar14 * fVar43;
  fVar41 = fVar73 * fVar44 + fVar17 * fVar43;
  fVar42 = fVar74 * fVar44 + fVar19 * fVar43;
  fVar43 = fVar75 * fVar44 + fVar21 * fVar43;
  fVar44 = (float)*(undefined8 *)(param_1 + 0x10) * fVar30 +
           (float)*(undefined8 *)(param_1 + 0x14) * fVar23 + param_1[0x18] * fVar40 +
           (float)*(undefined8 *)(param_1 + 0x1c) * fVar72;
  fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar37 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar22 + param_1[0x19] * fVar41
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) * fVar73;
  fVar46 = (float)*(undefined8 *)(param_1 + 0x12) * fVar38 +
           (float)*(undefined8 *)(param_1 + 0x16) * fVar28 + param_1[0x1a] * fVar42 +
           (float)*(undefined8 *)(param_1 + 0x1e) * fVar74;
  fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) * fVar39 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar31 + param_1[0x1b] * fVar43
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20) * fVar75;
  iVar13 = -(uint)(fVar44 == 0.0);
  iVar16 = -(uint)(fVar45 == 0.0);
  iVar18 = -(uint)(fVar46 == 0.0);
  iVar20 = -(uint)(fVar47 == 0.0);
  bVar27 = (byte)iVar13 & bVar76;
  bVar48 = (byte)((uint)iVar13 >> 8) & bVar77;
  bVar49 = (byte)((uint)iVar13 >> 0x10) & bVar78;
  bVar50 = (byte)((uint)iVar13 >> 0x18) & bVar79;
  bVar51 = (byte)iVar16 & bVar80;
  bVar52 = (byte)((uint)iVar16 >> 8) & bVar81;
  bVar53 = (byte)((uint)iVar16 >> 0x10) & bVar82;
  bVar54 = (byte)((uint)iVar16 >> 0x18) & bVar83;
  bVar29 = (byte)iVar18 & bVar84;
  bVar56 = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar58 = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar60 = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar62 = (byte)iVar20 & bVar88;
  bVar64 = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar66 = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar68 = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar32[1] = bVar48;
  auVar32[0] = bVar27;
  auVar32[2] = bVar49;
  auVar32[3] = bVar50;
  auVar32[4] = bVar51;
  auVar32[5] = bVar52;
  auVar32[6] = bVar53;
  auVar32[7] = bVar54;
  auVar32[8] = bVar29;
  auVar32[9] = bVar56;
  auVar32[10] = bVar58;
  auVar32[0xb] = bVar60;
  auVar32[0xc] = bVar62;
  auVar32[0xd] = bVar64;
  auVar32[0xe] = bVar66;
  auVar32[0xf] = bVar68;
  auVar3[1] = bVar48;
  auVar3[0] = bVar27;
  auVar3[2] = bVar49;
  auVar3[3] = bVar50;
  auVar3[4] = bVar51;
  auVar3[5] = bVar52;
  auVar3[6] = bVar53;
  auVar3[7] = bVar54;
  auVar3[8] = bVar29;
  auVar3[9] = bVar56;
  auVar3[10] = bVar58;
  auVar3[0xb] = bVar60;
  auVar3[0xc] = bVar62;
  auVar3[0xd] = bVar64;
  auVar3[0xe] = bVar66;
  auVar3[0xf] = bVar68;
  auVar24 = NEON_ext(auVar32,auVar3,8,1);
  iVar13 = -(uint)((char)((byte)((uint)(fVar72 - fVar44) >> 0x18) ^ (byte)((uint)fVar44 >> 0x18)) <
                  '\0');
  iVar16 = -(uint)((char)((byte)((uint)(fVar73 - fVar45) >> 0x18) ^ (byte)((uint)fVar45 >> 0x18)) <
                  '\0');
  iVar18 = -(uint)((char)((byte)((uint)(fVar74 - fVar46) >> 0x18) ^ (byte)((uint)fVar46 >> 0x18)) <
                  '\0');
  iVar20 = -(uint)((char)((byte)((uint)(fVar75 - fVar47) >> 0x18) ^ (byte)((uint)fVar47 >> 0x18)) <
                  '\0');
  bVar29 = (byte)iVar13 & bVar76;
  bVar56 = (byte)((uint)iVar13 >> 8) & bVar77;
  bVar58 = (byte)((uint)iVar13 >> 0x10) & bVar78;
  bVar60 = (byte)((uint)iVar13 >> 0x18) & bVar79;
  bVar62 = (byte)iVar16 & bVar80;
  bVar64 = (byte)((uint)iVar16 >> 8) & bVar81;
  bVar66 = (byte)((uint)iVar16 >> 0x10) & bVar82;
  bVar68 = (byte)((uint)iVar16 >> 0x18) & bVar83;
  bVar55 = (byte)iVar18 & bVar84;
  bVar57 = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar59 = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar61 = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar63 = (byte)iVar20 & bVar88;
  bVar65 = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar67 = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar69 = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar4[1] = bVar56;
  auVar4[0] = bVar29;
  auVar4[2] = bVar58;
  auVar4[3] = bVar60;
  auVar4[4] = bVar62;
  auVar4[5] = bVar64;
  auVar4[6] = bVar66;
  auVar4[7] = bVar68;
  auVar4[8] = bVar55;
  auVar4[9] = bVar57;
  auVar4[10] = bVar59;
  auVar4[0xb] = bVar61;
  auVar4[0xc] = bVar63;
  auVar4[0xd] = bVar65;
  auVar4[0xe] = bVar67;
  auVar4[0xf] = bVar69;
  auVar5[1] = bVar56;
  auVar5[0] = bVar29;
  auVar5[2] = bVar58;
  auVar5[3] = bVar60;
  auVar5[4] = bVar62;
  auVar5[5] = bVar64;
  auVar5[6] = bVar66;
  auVar5[7] = bVar68;
  auVar5[8] = bVar55;
  auVar5[9] = bVar57;
  auVar5[10] = bVar59;
  auVar5[0xb] = bVar61;
  auVar5[0xc] = bVar63;
  auVar5[0xd] = bVar65;
  auVar5[0xe] = bVar67;
  auVar5[0xf] = bVar69;
  auVar70 = NEON_ext(auVar4,auVar5,8,1);
  uVar2 = CONCAT13(auVar70[3] | bVar60 | auVar70[7] | bVar68,
                   CONCAT12(auVar70[2] | bVar58 | auVar70[6] | bVar66,
                            CONCAT11(auVar70[1] | bVar56 | auVar70[5] | bVar64,
                                     auVar70[0] | bVar29 | auVar70[4] | bVar62))) &
          (CONCAT13(auVar24[3] | bVar50 | auVar24[7] | bVar54,
                    CONCAT12(auVar24[2] | bVar49 | auVar24[6] | bVar53,
                             CONCAT11(auVar24[1] | bVar48 | auVar24[5] | bVar52,
                                      auVar24[0] | bVar27 | auVar24[4] | bVar51))) ^ 0xffffffff) &
          uVar1 | uVar2;
  if (uVar2 == uVar1) goto LAB__text__0053fee8;
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x24);
  fVar30 = (float)*(undefined8 *)(param_1 + 0x20) * fVar30 + auVar24._0_4_ * fVar23 +
           (float)*(undefined8 *)(param_1 + 0x28) * fVar40 +
           (float)*(undefined8 *)(param_1 + 0x2c) * fVar72;
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar37 + auVar24._4_4_ * fVar22
           + (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar41 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) * fVar73;
  fVar28 = (float)*(undefined8 *)(param_1 + 0x22) * fVar38 + auVar24._8_4_ * fVar28 +
           (float)*(undefined8 *)(param_1 + 0x2a) * fVar42 +
           (float)*(undefined8 *)(param_1 + 0x2e) * fVar74;
  fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar39 +
           auVar24._12_4_ * fVar31 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) * fVar43 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) * fVar75;
  fVar23 = fVar74 - (fVar46 + fVar28);
  fVar31 = fVar75 - (fVar47 + fVar43);
  bVar27 = (byte)((uint)(fVar73 - (fVar45 + fVar22)) >> 0x18) ^ (byte)((uint)fVar22 >> 0x18);
  bVar29 = (byte)((uint)fVar23 >> 0x18) ^ (byte)((uint)fVar28 >> 0x18);
  iVar13 = -(uint)((char)((byte)((uint)(fVar72 - (fVar44 + fVar30)) >> 0x18) ^
                         (byte)((uint)fVar30 >> 0x18)) < '\0');
  iVar16 = -(uint)((char)bVar27 < '\0');
  iVar18 = -(uint)((char)bVar29 < '\0');
  iVar20 = -(uint)((long)(CONCAT18((byte)((uint)fVar31 >> 0x18) ^ (byte)((uint)fVar43 >> 0x18),
                                   CONCAT17((byte)((uint)fVar31 >> 0x10) ^
                                            (byte)((uint)fVar43 >> 0x10),
                                            CONCAT16((byte)((uint)fVar31 >> 8) ^
                                                     (byte)((uint)fVar43 >> 8),
                                                     CONCAT15(SUB41(fVar31,0) ^ SUB41(fVar43,0),
                                                              CONCAT14(bVar29,CONCAT13((byte)((uint)
                                                  fVar23 >> 0x10) ^ (byte)((uint)fVar28 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar23 >> 8) ^
                                                           (byte)((uint)fVar28 >> 8),
                                                           CONCAT11(SUB41(fVar23,0) ^
                                                                    SUB41(fVar28,0),bVar27))))))))
                         >> 8) < 0);
  auVar25[0] = (byte)iVar13 & bVar76;
  auVar25[1] = (byte)((uint)iVar13 >> 8) & bVar77;
  auVar25[2] = (byte)((uint)iVar13 >> 0x10) & bVar78;
  auVar25[3] = (byte)((uint)iVar13 >> 0x18) & bVar79;
  auVar25[4] = (byte)iVar16 & bVar80;
  auVar25[5] = (byte)((uint)iVar16 >> 8) & bVar81;
  auVar25[6] = (byte)((uint)iVar16 >> 0x10) & bVar82;
  auVar25[7] = (byte)((uint)iVar16 >> 0x18) & bVar83;
  auVar25[8] = (byte)iVar18 & bVar84;
  auVar25[9] = (byte)((uint)iVar18 >> 8) & bVar85;
  auVar25[10] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  auVar25[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  auVar25[0xc] = (byte)iVar20 & bVar88;
  auVar25[0xd] = (byte)((uint)iVar20 >> 8) & bVar89;
  auVar25[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  auVar25[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar24 = NEON_ext(auVar25,auVar25,8,1);
  uVar2 = CONCAT13(auVar24[3] | auVar25[3] | auVar24[7] | auVar25[7],
                   CONCAT12(auVar24[2] | auVar25[2] | auVar24[6] | auVar25[6],
                            CONCAT11(auVar24[1] | auVar25[1] | auVar24[5] | auVar25[5],
                                     auVar24[0] | auVar25[0] | auVar24[4] | auVar25[4]))) & uVar1 |
          uVar2;
  if (uVar2 == uVar1) goto LAB__text__0053fee8;
  auVar6._4_4_ = fVar73;
  auVar6._0_4_ = fVar72;
  auVar6._8_4_ = fVar74;
  auVar6._12_4_ = fVar75;
  auVar24 = NEON_frecpe(auVar6,4);
  auVar7._4_4_ = fVar73;
  auVar7._0_4_ = fVar72;
  auVar7._8_4_ = fVar74;
  auVar7._12_4_ = fVar75;
  auVar70 = NEON_frecps(auVar7,auVar24,4);
  fVar23 = auVar24._0_4_ * fVar14 * auVar70._0_4_;
  auVar26._0_8_ = CONCAT44(auVar24._4_4_ * fVar17 * auVar70._4_4_,fVar23);
  auVar26._8_4_ = auVar24._8_4_ * fVar19 * auVar70._8_4_;
  auVar26._12_4_ = auVar24._12_4_ * fVar21 * auVar70._12_4_;
  if (((uVar1 & (uVar2 ^ 0xffffffff) & 1) != 0) && (fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar33._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar33._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar33._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) == 0) {
      uVar12 = 0;
    }
    else {
      local_3c = auVar33._0_8_;
      local_34 = auVar33._8_4_;
      uVar11 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4a),
                                   &local_3c);
      auVar26._8_8_ = auVar26._8_8_;
      if ((uVar11 & 1) != 0) goto LAB__text__0053fdd4;
      auVar33._8_8_ = auVar33._8_8_;
      uVar12 = *(undefined8 *)(param_1 + 0x52);
    }
    param_1[0x55] = auVar26._0_4_;
    *(undefined2 *)(param_1 + 0x56) = 1;
    *(undefined8 *)(param_1 + 0x58) = uVar12;
    *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x4a);
    *(long *)(param_1 + 0x32) = auVar33._8_8_;
    *(long *)(param_1 + 0x30) = auVar33._0_8_;
  }
LAB__text__0053fdd4:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__0053fee8;
  uVar2 = ~uVar2;
  if ((((uVar2 & uVar1) >> 1 & 1) != 0) && (fVar23 = auVar26._4_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar34._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar34._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar34._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) == 0) {
      uVar12 = 0;
    }
    else {
      local_3c = auVar34._0_8_;
      local_34 = auVar34._8_4_;
      uVar11 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4c),
                                   &local_3c);
      if ((uVar11 & 1) != 0) goto LAB__text__0053fe5c;
      auVar34._8_8_ = auVar34._8_8_;
      uVar12 = *(undefined8 *)(param_1 + 0x52);
    }
    param_1[0x55] = fVar23;
    *(undefined2 *)(param_1 + 0x56) = 1;
    *(undefined8 *)(param_1 + 0x58) = uVar12;
    *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x4c);
    *(long *)(param_1 + 0x32) = auVar34._8_8_;
    *(long *)(param_1 + 0x30) = auVar34._0_8_;
  }
LAB__text__0053fe5c:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__0053fee8;
  if ((((uVar2 & uVar1) >> 2 & 1) != 0) && (fVar23 = auVar26._8_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar35._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar35._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar35._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) == 0) {
      uVar12 = 0;
    }
    else {
      local_3c = auVar35._0_8_;
      local_34 = auVar35._8_4_;
      uVar11 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4e),
                                   &local_3c);
      if ((uVar11 & 1) != 0) goto LAB__text__0053fee0;
      auVar35._8_8_ = auVar35._8_8_;
      uVar12 = *(undefined8 *)(param_1 + 0x52);
    }
    param_1[0x55] = fVar23;
    *(undefined2 *)(param_1 + 0x56) = 1;
    *(undefined8 *)(param_1 + 0x58) = uVar12;
    *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x4e);
    *(long *)(param_1 + 0x32) = auVar35._8_8_;
    *(long *)(param_1 + 0x30) = auVar35._0_8_;
  }
LAB__text__0053fee0:
  if (((*(char *)((long)param_1 + 0x159) == '\0') && (((uVar2 & uVar1) >> 3 & 1) != 0)) &&
     (fVar23 = auVar26._12_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar36._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar36._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar36._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) == 0) {
      uVar12 = 0;
    }
    else {
      local_3c = auVar36._0_8_;
      local_34 = auVar36._8_4_;
      uVar11 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x50),
                                   &local_3c);
      if ((uVar11 & 1) != 0) goto LAB__text__0053fee8;
      auVar36._8_8_ = auVar36._8_8_;
      uVar12 = *(undefined8 *)(param_1 + 0x52);
    }
    param_1[0x55] = fVar23;
    *(undefined2 *)(param_1 + 0x56) = 1;
    *(undefined8 *)(param_1 + 0x58) = uVar12;
    *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x32) = auVar36._8_8_;
    *(long *)(param_1 + 0x30) = auVar36._0_8_;
  }
LAB__text__0053fee8:
  return *(undefined1 *)((long)param_1 + 0x159);
}


