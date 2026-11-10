/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005354bc; name: FUN_.text__005354bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__005354bc(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
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
  byte bVar30;
  float fVar31;
  undefined1 auVar24 [16];
  float fVar23;
  byte bVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar37;
  float fVar39;
  undefined1 auVar35 [16];
  float fVar40;
  undefined1 auVar38 [12];
  undefined1 auVar36 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
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
  byte bVar70;
  undefined1 auVar71 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
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
  byte bVar92;
  byte bVar93;
  undefined8 local_3c;
  float local_34;
  
  pfVar9 = _DAT_008a4200;
  if (((*_DAT_008a41f8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(_DAT_008a41f8), iVar13 != 0)) {
    auVar24._8_4_ = 0x6ce3ee;
    auVar24._0_8_ = 0x6ce3ee006ce3ee;
    auVar24._12_4_ = 0x6ce3ee;
    *(long *)(pfVar9 + 2) = auVar24._8_8_;
    pfVar9[0] = 1e-38;
    pfVar9[1] = 1e-38;
    __cxa_guard_release(_DAT_008a41f8);
  }
  puVar10 = _DAT_008a4210;
  uVar73 = *(undefined8 *)(param_1 + 0x42);
  uVar72 = *(undefined8 *)(param_1 + 0x40);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
  fVar23 = auVar24._0_4_;
  fVar34 = auVar24._4_4_;
  fVar44 = auVar24._8_4_;
  fVar74 = *param_1 * fVar23 + param_1[4] * fVar34 + param_1[8] * fVar44;
  fVar75 = param_1[1] * fVar23 + param_1[5] * fVar34 + param_1[9] * fVar44;
  fVar76 = param_1[2] * fVar23 + param_1[6] * fVar34 + param_1[10] * fVar44;
  fVar77 = param_1[3] * fVar23 + param_1[7] * fVar34 + param_1[0xb] * fVar44;
  iVar13 = -(uint)(ABS(fVar74) < *pfVar9);
  iVar16 = -(uint)(ABS(fVar75) < pfVar9[1]);
  iVar18 = -(uint)(ABS(fVar76) < pfVar9[2]);
  iVar20 = -(uint)(ABS(fVar77) < pfVar9[3]);
  bVar78 = (byte)_DAT_00724a10;
  auVar71[0] = (byte)iVar13 & bVar78;
  bVar79 = (byte)((ulong)_DAT_00724a10 >> 8);
  auVar71[1] = (byte)((uint)iVar13 >> 8) & bVar79;
  bVar80 = (byte)((ulong)_DAT_00724a10 >> 0x10);
  auVar71[2] = (byte)((uint)iVar13 >> 0x10) & bVar80;
  bVar81 = (byte)((ulong)_DAT_00724a10 >> 0x18);
  auVar71[3] = (byte)((uint)iVar13 >> 0x18) & bVar81;
  bVar82 = (byte)((ulong)_DAT_00724a10 >> 0x20);
  auVar71[4] = (byte)iVar16 & bVar82;
  bVar83 = (byte)((ulong)_DAT_00724a10 >> 0x28);
  auVar71[5] = (byte)((uint)iVar16 >> 8) & bVar83;
  bVar84 = (byte)((ulong)_DAT_00724a10 >> 0x30);
  auVar71[6] = (byte)((uint)iVar16 >> 0x10) & bVar84;
  bVar85 = (byte)((ulong)_DAT_00724a10 >> 0x38);
  auVar71[7] = (byte)((uint)iVar16 >> 0x18) & bVar85;
  bVar86 = (byte)uRam0000000000724a18;
  auVar71[8] = (byte)iVar18 & bVar86;
  bVar87 = (byte)((ulong)uRam0000000000724a18 >> 8);
  auVar71[9] = (byte)((uint)iVar18 >> 8) & bVar87;
  bVar88 = (byte)((ulong)uRam0000000000724a18 >> 0x10);
  auVar71[10] = (byte)((uint)iVar18 >> 0x10) & bVar88;
  bVar89 = (byte)((ulong)uRam0000000000724a18 >> 0x18);
  auVar71[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar89;
  bVar90 = (byte)((ulong)uRam0000000000724a18 >> 0x20);
  auVar71[0xc] = (byte)iVar20 & bVar90;
  bVar91 = (byte)((ulong)uRam0000000000724a18 >> 0x28);
  auVar71[0xd] = (byte)((uint)iVar20 >> 8) & bVar91;
  bVar92 = (byte)((ulong)uRam0000000000724a18 >> 0x30);
  auVar71[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar92;
  bVar93 = (byte)((ulong)uRam0000000000724a18 >> 0x38);
  auVar71[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar93;
  auVar24 = NEON_ext(auVar71,auVar71,8,1);
  if (((*_DAT_008a4208 & 1) == 0) && (iVar13 = __cxa_guard_acquire(_DAT_008a4208), iVar13 != 0)) {
    auVar15 = NEON_fmov(0xbf800000,4);
    puVar10[1] = auVar15._8_8_;
    *puVar10 = auVar15._0_8_;
    __cxa_guard_release(_DAT_008a4208);
  }
  if (((*_DAT_008a4218 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(_DAT_008a4218), puVar11 = _DAT_008a4220, iVar13 != 0)) {
    auVar15 = NEON_fmov(0x3f800000,4);
    _DAT_008a4220[1] = auVar15._8_8_;
    *puVar11 = auVar15._0_8_;
    __cxa_guard_release(_DAT_008a4218);
  }
  fVar40 = (float)uVar72;
  fVar41 = (float)((ulong)uVar72 >> 0x20);
  fVar22 = param_1[0x55];
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x54] & 0x1f);
  fVar45 = (float)uVar73;
  fVar14 = (float)*_DAT_008a4220 * param_1[0xc] +
           (*param_1 * fVar40 + param_1[4] * fVar41 + (float)*(undefined8 *)(param_1 + 8) * fVar45)
           * (float)*puVar10;
  fVar17 = (float)((ulong)*_DAT_008a4220 >> 0x20) * param_1[0xd] +
           (param_1[1] * fVar40 + param_1[5] * fVar41 +
           (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar45) *
           (float)((ulong)*puVar10 >> 0x20);
  fVar19 = (float)_DAT_008a4220[1] * param_1[0xe] +
           (param_1[2] * fVar40 + param_1[6] * fVar41 +
           (float)*(undefined8 *)(param_1 + 10) * fVar45) * (float)puVar10[1];
  fVar21 = (float)((ulong)_DAT_008a4220[1] >> 0x20) * param_1[0xf] +
           (param_1[3] * fVar40 + param_1[7] * fVar41 +
           (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) * fVar45) *
           (float)((ulong)puVar10[1] >> 0x20);
  fVar31 = fVar76 * fVar22 - fVar19;
  fVar33 = fVar77 * fVar22 - fVar21;
  bVar30 = (byte)((uint)(fVar75 * fVar22 - fVar17) >> 0x18) ^ (byte)((uint)fVar17 >> 0x18);
  bVar32 = (byte)((uint)fVar31 >> 0x18) ^ (byte)((uint)fVar19 >> 0x18);
  iVar13 = -(uint)((char)((byte)((uint)(fVar74 * fVar22 - fVar14) >> 0x18) ^
                         (byte)((uint)fVar14 >> 0x18)) < '\0');
  iVar16 = -(uint)((char)bVar30 < '\0');
  iVar18 = -(uint)((char)bVar32 < '\0');
  iVar20 = -(uint)((long)(CONCAT18((byte)((uint)fVar33 >> 0x18) ^ (byte)((uint)fVar21 >> 0x18),
                                   CONCAT17((byte)((uint)fVar33 >> 0x10) ^
                                            (byte)((uint)fVar21 >> 0x10),
                                            CONCAT16((byte)((uint)fVar33 >> 8) ^
                                                     (byte)((uint)fVar21 >> 8),
                                                     CONCAT15(SUB41(fVar33,0) ^ SUB41(fVar21,0),
                                                              CONCAT14(bVar32,CONCAT13((byte)((uint)
                                                  fVar31 >> 0x10) ^ (byte)((uint)fVar19 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar31 >> 8) ^
                                                           (byte)((uint)fVar19 >> 8),
                                                           CONCAT11(SUB41(fVar31,0) ^
                                                                    SUB41(fVar19,0),bVar30))))))))
                         >> 8) < 0);
  auVar15[0] = (byte)iVar13 & bVar78;
  auVar15[1] = (byte)((uint)iVar13 >> 8) & bVar79;
  auVar15[2] = (byte)((uint)iVar13 >> 0x10) & bVar80;
  auVar15[3] = (byte)((uint)iVar13 >> 0x18) & bVar81;
  auVar15[4] = (byte)iVar16 & bVar82;
  auVar15[5] = (byte)((uint)iVar16 >> 8) & bVar83;
  auVar15[6] = (byte)((uint)iVar16 >> 0x10) & bVar84;
  auVar15[7] = (byte)((uint)iVar16 >> 0x18) & bVar85;
  auVar15[8] = (byte)iVar18 & bVar86;
  auVar15[9] = (byte)((uint)iVar18 >> 8) & bVar87;
  auVar15[10] = (byte)((uint)iVar18 >> 0x10) & bVar88;
  auVar15[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar89;
  auVar15[0xc] = (byte)iVar20 & bVar90;
  auVar15[0xd] = (byte)((uint)iVar20 >> 8) & bVar91;
  auVar15[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar92;
  auVar15[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar93;
  auVar35 = NEON_ext(auVar15,auVar15,8,1);
  uVar2 = CONCAT13(auVar24[3] | auVar71[3] | auVar24[7] | auVar71[7],
                   CONCAT12(auVar24[2] | auVar71[2] | auVar24[6] | auVar71[6],
                            CONCAT11(auVar24[1] | auVar71[1] | auVar24[5] | auVar71[5],
                                     auVar24[0] | auVar71[0] | auVar24[4] | auVar71[4]))) |
          CONCAT13(auVar35[3] | auVar15[3] | auVar35[7] | auVar15[7],
                   CONCAT12(auVar35[2] | auVar15[2] | auVar35[6] | auVar15[6],
                            CONCAT11(auVar35[1] | auVar15[1] | auVar35[5] | auVar15[5],
                                     auVar35[0] | auVar15[0] | auVar35[4] | auVar15[4]))) & uVar1;
  if (uVar2 == uVar1) goto LAB__text__00535720;
  fVar33 = fVar74 * fVar40 + fVar14 * fVar23;
  fVar37 = fVar75 * fVar40 + fVar17 * fVar23;
  fVar39 = fVar76 * fVar40 + fVar19 * fVar23;
  fVar40 = fVar77 * fVar40 + fVar21 * fVar23;
  fVar23 = fVar74 * fVar41 + fVar14 * fVar34;
  fVar22 = fVar75 * fVar41 + fVar17 * fVar34;
  fVar31 = fVar76 * fVar41 + fVar19 * fVar34;
  fVar34 = fVar77 * fVar41 + fVar21 * fVar34;
  fVar41 = fVar74 * fVar45 + fVar14 * fVar44;
  fVar42 = fVar75 * fVar45 + fVar17 * fVar44;
  fVar43 = fVar76 * fVar45 + fVar19 * fVar44;
  fVar44 = fVar77 * fVar45 + fVar21 * fVar44;
  fVar45 = (float)*(undefined8 *)(param_1 + 0x10) * fVar33 +
           (float)*(undefined8 *)(param_1 + 0x14) * fVar23 + param_1[0x18] * fVar41 +
           (float)*(undefined8 *)(param_1 + 0x1c) * fVar74;
  fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar37 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar22 + param_1[0x19] * fVar42
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) * fVar75;
  fVar47 = (float)*(undefined8 *)(param_1 + 0x12) * fVar39 +
           (float)*(undefined8 *)(param_1 + 0x16) * fVar31 + param_1[0x1a] * fVar43 +
           (float)*(undefined8 *)(param_1 + 0x1e) * fVar76;
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) * fVar40 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar34 + param_1[0x1b] * fVar44
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20) * fVar77;
  iVar13 = -(uint)(fVar45 == 0.0);
  iVar16 = -(uint)(fVar46 == 0.0);
  iVar18 = -(uint)(fVar47 == 0.0);
  iVar20 = -(uint)(fVar48 == 0.0);
  bVar30 = (byte)iVar13 & bVar78;
  bVar49 = (byte)((uint)iVar13 >> 8) & bVar79;
  bVar50 = (byte)((uint)iVar13 >> 0x10) & bVar80;
  bVar51 = (byte)((uint)iVar13 >> 0x18) & bVar81;
  bVar52 = (byte)iVar16 & bVar82;
  bVar53 = (byte)((uint)iVar16 >> 8) & bVar83;
  bVar54 = (byte)((uint)iVar16 >> 0x10) & bVar84;
  bVar55 = (byte)((uint)iVar16 >> 0x18) & bVar85;
  bVar32 = (byte)iVar18 & bVar86;
  bVar57 = (byte)((uint)iVar18 >> 8) & bVar87;
  bVar59 = (byte)((uint)iVar18 >> 0x10) & bVar88;
  bVar61 = (byte)((uint)iVar18 >> 0x18) & bVar89;
  bVar63 = (byte)iVar20 & bVar90;
  bVar65 = (byte)((uint)iVar20 >> 8) & bVar91;
  bVar67 = (byte)((uint)iVar20 >> 0x10) & bVar92;
  bVar69 = (byte)((uint)iVar20 >> 0x18) & bVar93;
  auVar35[1] = bVar49;
  auVar35[0] = bVar30;
  auVar35[2] = bVar50;
  auVar35[3] = bVar51;
  auVar35[4] = bVar52;
  auVar35[5] = bVar53;
  auVar35[6] = bVar54;
  auVar35[7] = bVar55;
  auVar35[8] = bVar32;
  auVar35[9] = bVar57;
  auVar35[10] = bVar59;
  auVar35[0xb] = bVar61;
  auVar35[0xc] = bVar63;
  auVar35[0xd] = bVar65;
  auVar35[0xe] = bVar67;
  auVar35[0xf] = bVar69;
  auVar3[1] = bVar49;
  auVar3[0] = bVar30;
  auVar3[2] = bVar50;
  auVar3[3] = bVar51;
  auVar3[4] = bVar52;
  auVar3[5] = bVar53;
  auVar3[6] = bVar54;
  auVar3[7] = bVar55;
  auVar3[8] = bVar32;
  auVar3[9] = bVar57;
  auVar3[10] = bVar59;
  auVar3[0xb] = bVar61;
  auVar3[0xc] = bVar63;
  auVar3[0xd] = bVar65;
  auVar3[0xe] = bVar67;
  auVar3[0xf] = bVar69;
  auVar24 = NEON_ext(auVar35,auVar3,8,1);
  iVar13 = -(uint)((char)((byte)((uint)(fVar74 - fVar45) >> 0x18) ^ (byte)((uint)fVar45 >> 0x18)) <
                  '\0');
  iVar16 = -(uint)((char)((byte)((uint)(fVar75 - fVar46) >> 0x18) ^ (byte)((uint)fVar46 >> 0x18)) <
                  '\0');
  iVar18 = -(uint)((char)((byte)((uint)(fVar76 - fVar47) >> 0x18) ^ (byte)((uint)fVar47 >> 0x18)) <
                  '\0');
  iVar20 = -(uint)((char)((byte)((uint)(fVar77 - fVar48) >> 0x18) ^ (byte)((uint)fVar48 >> 0x18)) <
                  '\0');
  bVar32 = (byte)iVar13 & bVar78;
  bVar57 = (byte)((uint)iVar13 >> 8) & bVar79;
  bVar59 = (byte)((uint)iVar13 >> 0x10) & bVar80;
  bVar61 = (byte)((uint)iVar13 >> 0x18) & bVar81;
  bVar63 = (byte)iVar16 & bVar82;
  bVar65 = (byte)((uint)iVar16 >> 8) & bVar83;
  bVar67 = (byte)((uint)iVar16 >> 0x10) & bVar84;
  bVar69 = (byte)((uint)iVar16 >> 0x18) & bVar85;
  bVar56 = (byte)iVar18 & bVar86;
  bVar58 = (byte)((uint)iVar18 >> 8) & bVar87;
  bVar60 = (byte)((uint)iVar18 >> 0x10) & bVar88;
  bVar62 = (byte)((uint)iVar18 >> 0x18) & bVar89;
  bVar64 = (byte)iVar20 & bVar90;
  bVar66 = (byte)((uint)iVar20 >> 8) & bVar91;
  bVar68 = (byte)((uint)iVar20 >> 0x10) & bVar92;
  bVar70 = (byte)((uint)iVar20 >> 0x18) & bVar93;
  auVar4[1] = bVar57;
  auVar4[0] = bVar32;
  auVar4[2] = bVar59;
  auVar4[3] = bVar61;
  auVar4[4] = bVar63;
  auVar4[5] = bVar65;
  auVar4[6] = bVar67;
  auVar4[7] = bVar69;
  auVar4[8] = bVar56;
  auVar4[9] = bVar58;
  auVar4[10] = bVar60;
  auVar4[0xb] = bVar62;
  auVar4[0xc] = bVar64;
  auVar4[0xd] = bVar66;
  auVar4[0xe] = bVar68;
  auVar4[0xf] = bVar70;
  auVar5[1] = bVar57;
  auVar5[0] = bVar32;
  auVar5[2] = bVar59;
  auVar5[3] = bVar61;
  auVar5[4] = bVar63;
  auVar5[5] = bVar65;
  auVar5[6] = bVar67;
  auVar5[7] = bVar69;
  auVar5[8] = bVar56;
  auVar5[9] = bVar58;
  auVar5[10] = bVar60;
  auVar5[0xb] = bVar62;
  auVar5[0xc] = bVar64;
  auVar5[0xd] = bVar66;
  auVar5[0xe] = bVar68;
  auVar5[0xf] = bVar70;
  auVar71 = NEON_ext(auVar4,auVar5,8,1);
  uVar2 = CONCAT13(auVar71[3] | bVar61 | auVar71[7] | bVar69,
                   CONCAT12(auVar71[2] | bVar59 | auVar71[6] | bVar67,
                            CONCAT11(auVar71[1] | bVar57 | auVar71[5] | bVar65,
                                     auVar71[0] | bVar32 | auVar71[4] | bVar63))) &
          (CONCAT13(auVar24[3] | bVar51 | auVar24[7] | bVar55,
                    CONCAT12(auVar24[2] | bVar50 | auVar24[6] | bVar54,
                             CONCAT11(auVar24[1] | bVar49 | auVar24[5] | bVar53,
                                      auVar24[0] | bVar30 | auVar24[4] | bVar52))) ^ 0xffffffff) &
          uVar1 | uVar2;
  if (uVar2 == uVar1) goto LAB__text__00535720;
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x24);
  fVar33 = (float)*(undefined8 *)(param_1 + 0x20) * fVar33 + auVar24._0_4_ * fVar23 +
           (float)*(undefined8 *)(param_1 + 0x28) * fVar41 +
           (float)*(undefined8 *)(param_1 + 0x2c) * fVar74;
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar37 + auVar24._4_4_ * fVar22
           + (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar42 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) * fVar75;
  fVar31 = (float)*(undefined8 *)(param_1 + 0x22) * fVar39 + auVar24._8_4_ * fVar31 +
           (float)*(undefined8 *)(param_1 + 0x2a) * fVar43 +
           (float)*(undefined8 *)(param_1 + 0x2e) * fVar76;
  fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar40 +
           auVar24._12_4_ * fVar34 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) * fVar44 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) * fVar77;
  fVar23 = fVar76 - (fVar47 + fVar31);
  fVar34 = fVar77 - (fVar48 + fVar44);
  bVar30 = (byte)((uint)(fVar75 - (fVar46 + fVar22)) >> 0x18) ^ (byte)((uint)fVar22 >> 0x18);
  bVar32 = (byte)((uint)fVar23 >> 0x18) ^ (byte)((uint)fVar31 >> 0x18);
  iVar13 = -(uint)((char)((byte)((uint)(fVar74 - (fVar45 + fVar33)) >> 0x18) ^
                         (byte)((uint)fVar33 >> 0x18)) < '\0');
  iVar16 = -(uint)((char)bVar30 < '\0');
  iVar18 = -(uint)((char)bVar32 < '\0');
  iVar20 = -(uint)((long)(CONCAT18((byte)((uint)fVar34 >> 0x18) ^ (byte)((uint)fVar44 >> 0x18),
                                   CONCAT17((byte)((uint)fVar34 >> 0x10) ^
                                            (byte)((uint)fVar44 >> 0x10),
                                            CONCAT16((byte)((uint)fVar34 >> 8) ^
                                                     (byte)((uint)fVar44 >> 8),
                                                     CONCAT15(SUB41(fVar34,0) ^ SUB41(fVar44,0),
                                                              CONCAT14(bVar32,CONCAT13((byte)((uint)
                                                  fVar23 >> 0x10) ^ (byte)((uint)fVar31 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar23 >> 8) ^
                                                           (byte)((uint)fVar31 >> 8),
                                                           CONCAT11(SUB41(fVar23,0) ^
                                                                    SUB41(fVar31,0),bVar30))))))))
                         >> 8) < 0);
  auVar25[0] = (byte)iVar13 & bVar78;
  auVar25[1] = (byte)((uint)iVar13 >> 8) & bVar79;
  auVar25[2] = (byte)((uint)iVar13 >> 0x10) & bVar80;
  auVar25[3] = (byte)((uint)iVar13 >> 0x18) & bVar81;
  auVar25[4] = (byte)iVar16 & bVar82;
  auVar25[5] = (byte)((uint)iVar16 >> 8) & bVar83;
  auVar25[6] = (byte)((uint)iVar16 >> 0x10) & bVar84;
  auVar25[7] = (byte)((uint)iVar16 >> 0x18) & bVar85;
  auVar25[8] = (byte)iVar18 & bVar86;
  auVar25[9] = (byte)((uint)iVar18 >> 8) & bVar87;
  auVar25[10] = (byte)((uint)iVar18 >> 0x10) & bVar88;
  auVar25[0xb] = (byte)((uint)iVar18 >> 0x18) & bVar89;
  auVar25[0xc] = (byte)iVar20 & bVar90;
  auVar25[0xd] = (byte)((uint)iVar20 >> 8) & bVar91;
  auVar25[0xe] = (byte)((uint)iVar20 >> 0x10) & bVar92;
  auVar25[0xf] = (byte)((uint)iVar20 >> 0x18) & bVar93;
  auVar24 = NEON_ext(auVar25,auVar25,8,1);
  uVar2 = CONCAT13(auVar24[3] | auVar25[3] | auVar24[7] | auVar25[7],
                   CONCAT12(auVar24[2] | auVar25[2] | auVar24[6] | auVar25[6],
                            CONCAT11(auVar24[1] | auVar25[1] | auVar24[5] | auVar25[5],
                                     auVar24[0] | auVar25[0] | auVar24[4] | auVar25[4]))) & uVar1 |
          uVar2;
  if (uVar2 == uVar1) goto LAB__text__00535720;
  auVar6._4_4_ = fVar75;
  auVar6._0_4_ = fVar74;
  auVar6._8_4_ = fVar76;
  auVar6._12_4_ = fVar77;
  auVar24 = NEON_frecpe(auVar6,4);
  auVar7._4_4_ = fVar75;
  auVar7._0_4_ = fVar74;
  auVar7._8_4_ = fVar76;
  auVar7._12_4_ = fVar77;
  auVar71 = NEON_frecps(auVar7,auVar24,4);
  fVar23 = auVar24._0_4_ * fVar14 * auVar71._0_4_;
  auVar36._0_8_ = CONCAT44(auVar24._4_4_ * fVar17 * auVar71._4_4_,fVar23);
  auVar36._8_4_ = auVar24._8_4_ * fVar19 * auVar71._8_4_;
  auVar36._12_4_ = auVar24._12_4_ * fVar21 * auVar71._12_4_;
  auVar38 = auVar36._4_12_;
  if (((uVar1 & (uVar2 ^ 0xffffffff) & 1) != 0) && (fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar26._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar26._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar26._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar26._0_8_;
      local_34 = auVar26._8_4_;
      uVar12 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4a),
                                   &local_3c);
      auVar26._8_8_ = auVar26._8_8_;
      auVar8._8_8_ = auVar36._8_8_;
      auVar8._0_8_ = auVar36._0_8_;
      auVar38 = auVar8._4_12_;
      if ((uVar12 & 1) != 0) goto LAB__text__00535718;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x101;
    *(long *)(param_1 + 0x32) = auVar26._8_8_;
    *(long *)(param_1 + 0x30) = auVar26._0_8_;
  }
LAB__text__00535718:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__00535720;
  uVar2 = ~uVar2;
  if ((((uVar2 & uVar1) >> 1 & 1) != 0) && (fVar23 = auVar38._0_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar27._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar27._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar27._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar27._0_8_;
      local_34 = auVar27._8_4_;
      uVar12 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4c),
                                   &local_3c);
      auVar27._8_8_ = auVar27._8_8_;
      if ((uVar12 & 1) != 0) goto LAB__text__005357a0;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x101;
    *(long *)(param_1 + 0x32) = auVar27._8_8_;
    *(long *)(param_1 + 0x30) = auVar27._0_8_;
  }
LAB__text__005357a0:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__00535720;
  if ((((uVar2 & uVar1) >> 2 & 1) != 0) && (fVar23 = auVar38._4_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar28._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar28._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar28._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar28._0_8_;
      local_34 = auVar28._8_4_;
      uVar12 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4e),
                                   &local_3c);
      auVar28._8_8_ = auVar28._8_8_;
      if ((uVar12 & 1) != 0) goto LAB__text__0053580c;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x101;
    *(long *)(param_1 + 0x32) = auVar28._8_8_;
    *(long *)(param_1 + 0x30) = auVar28._0_8_;
  }
LAB__text__0053580c:
  if (((*(char *)((long)param_1 + 0x159) == '\0') && (((uVar2 & uVar1) >> 3 & 1) != 0)) &&
     (fVar23 = auVar38._8_4_, fVar23 <= param_1[0x55])) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar29._0_8_ =
         CONCAT44(param_1[0x41] + auVar24._4_4_ * fVar23,param_1[0x40] + auVar24._0_4_ * fVar23);
    auVar29._8_4_ = param_1[0x42] + auVar24._8_4_ * fVar23;
    auVar29._12_4_ = param_1[0x43] + auVar24._12_4_ * fVar23;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar29._0_8_;
      local_34 = auVar29._8_4_;
      uVar12 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x50),
                                   &local_3c);
      auVar29._8_8_ = auVar29._8_8_;
      if ((uVar12 & 1) != 0) goto LAB__text__00535720;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x101;
    *(long *)(param_1 + 0x32) = auVar29._8_8_;
    *(long *)(param_1 + 0x30) = auVar29._0_8_;
    return 1;
  }
LAB__text__00535720:
  return *(undefined1 *)((long)param_1 + 0x159);
}


