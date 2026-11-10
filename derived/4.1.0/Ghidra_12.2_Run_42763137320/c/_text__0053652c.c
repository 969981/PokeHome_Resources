/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053652c; name: FUN_.text__0053652c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__0053652c(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  undefined1 auVar17 [16];
  float fVar24;
  byte bVar32;
  float fVar33;
  undefined1 auVar26 [16];
  float fVar25;
  byte bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar39;
  float fVar41;
  undefined1 auVar37 [16];
  float fVar42;
  undefined1 auVar40 [12];
  undefined1 auVar38 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
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
  byte bVar71;
  byte bVar72;
  undefined1 auVar73 [16];
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
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
  byte bVar94;
  byte bVar95;
  undefined8 local_3c;
  float local_34;
  
  pfVar10 = _DAT_008a4230;
  if (((*_DAT_008a4228 & 1) == 0) && (iVar15 = __cxa_guard_acquire(_DAT_008a4228), iVar15 != 0)) {
    auVar26._8_4_ = 0x6ce3ee;
    auVar26._0_8_ = 0x6ce3ee006ce3ee;
    auVar26._12_4_ = 0x6ce3ee;
    *(long *)(pfVar10 + 2) = auVar26._8_8_;
    pfVar10[0] = 1e-38;
    pfVar10[1] = 1e-38;
    __cxa_guard_release(_DAT_008a4228);
  }
  puVar11 = _DAT_008a4240;
  uVar75 = *(undefined8 *)(param_1 + 0x42);
  uVar74 = *(undefined8 *)(param_1 + 0x40);
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x44);
  fVar25 = auVar26._0_4_;
  fVar36 = auVar26._4_4_;
  fVar46 = auVar26._8_4_;
  fVar76 = *param_1 * fVar25 + param_1[4] * fVar36 + param_1[8] * fVar46;
  fVar77 = param_1[1] * fVar25 + param_1[5] * fVar36 + param_1[9] * fVar46;
  fVar78 = param_1[2] * fVar25 + param_1[6] * fVar36 + param_1[10] * fVar46;
  fVar79 = param_1[3] * fVar25 + param_1[7] * fVar36 + param_1[0xb] * fVar46;
  iVar15 = -(uint)(ABS(fVar76) < *pfVar10);
  iVar18 = -(uint)(ABS(fVar77) < pfVar10[1]);
  iVar20 = -(uint)(ABS(fVar78) < pfVar10[2]);
  iVar22 = -(uint)(ABS(fVar79) < pfVar10[3]);
  bVar80 = (byte)_DAT_00724a10;
  auVar73[0] = (byte)iVar15 & bVar80;
  bVar81 = (byte)((ulong)_DAT_00724a10 >> 8);
  auVar73[1] = (byte)((uint)iVar15 >> 8) & bVar81;
  bVar82 = (byte)((ulong)_DAT_00724a10 >> 0x10);
  auVar73[2] = (byte)((uint)iVar15 >> 0x10) & bVar82;
  bVar83 = (byte)((ulong)_DAT_00724a10 >> 0x18);
  auVar73[3] = (byte)((uint)iVar15 >> 0x18) & bVar83;
  bVar84 = (byte)((ulong)_DAT_00724a10 >> 0x20);
  auVar73[4] = (byte)iVar18 & bVar84;
  bVar85 = (byte)((ulong)_DAT_00724a10 >> 0x28);
  auVar73[5] = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar86 = (byte)((ulong)_DAT_00724a10 >> 0x30);
  auVar73[6] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar87 = (byte)((ulong)_DAT_00724a10 >> 0x38);
  auVar73[7] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar88 = (byte)uRam0000000000724a18;
  auVar73[8] = (byte)iVar20 & bVar88;
  bVar89 = (byte)((ulong)uRam0000000000724a18 >> 8);
  auVar73[9] = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar90 = (byte)((ulong)uRam0000000000724a18 >> 0x10);
  auVar73[10] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar91 = (byte)((ulong)uRam0000000000724a18 >> 0x18);
  auVar73[0xb] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  bVar92 = (byte)((ulong)uRam0000000000724a18 >> 0x20);
  auVar73[0xc] = (byte)iVar22 & bVar92;
  bVar93 = (byte)((ulong)uRam0000000000724a18 >> 0x28);
  auVar73[0xd] = (byte)((uint)iVar22 >> 8) & bVar93;
  bVar94 = (byte)((ulong)uRam0000000000724a18 >> 0x30);
  auVar73[0xe] = (byte)((uint)iVar22 >> 0x10) & bVar94;
  bVar95 = (byte)((ulong)uRam0000000000724a18 >> 0x38);
  auVar73[0xf] = (byte)((uint)iVar22 >> 0x18) & bVar95;
  auVar26 = NEON_ext(auVar73,auVar73,8,1);
  if (((*_DAT_008a4238 & 1) == 0) && (iVar15 = __cxa_guard_acquire(_DAT_008a4238), iVar15 != 0)) {
    auVar17 = NEON_fmov(0xbf800000,4);
    puVar11[1] = auVar17._8_8_;
    *puVar11 = auVar17._0_8_;
    __cxa_guard_release(_DAT_008a4238);
  }
  if (((*_DAT_008a4248 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(_DAT_008a4248), puVar12 = _DAT_008a4250, iVar15 != 0)) {
    auVar17 = NEON_fmov(0x3f800000,4);
    _DAT_008a4250[1] = auVar17._8_8_;
    *puVar12 = auVar17._0_8_;
    __cxa_guard_release(_DAT_008a4248);
  }
  fVar42 = (float)uVar74;
  fVar43 = (float)((ulong)uVar74 >> 0x20);
  fVar24 = param_1[0x55];
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x54] & 0x1f);
  fVar47 = (float)uVar75;
  fVar16 = (float)*_DAT_008a4250 * param_1[0xc] +
           (*param_1 * fVar42 + param_1[4] * fVar43 + (float)*(undefined8 *)(param_1 + 8) * fVar47)
           * (float)*puVar11;
  fVar19 = (float)((ulong)*_DAT_008a4250 >> 0x20) * param_1[0xd] +
           (param_1[1] * fVar42 + param_1[5] * fVar43 +
           (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar47) *
           (float)((ulong)*puVar11 >> 0x20);
  fVar21 = (float)_DAT_008a4250[1] * param_1[0xe] +
           (param_1[2] * fVar42 + param_1[6] * fVar43 +
           (float)*(undefined8 *)(param_1 + 10) * fVar47) * (float)puVar11[1];
  fVar23 = (float)((ulong)_DAT_008a4250[1] >> 0x20) * param_1[0xf] +
           (param_1[3] * fVar42 + param_1[7] * fVar43 +
           (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) * fVar47) *
           (float)((ulong)puVar11[1] >> 0x20);
  fVar33 = fVar78 * fVar24 - fVar21;
  fVar35 = fVar79 * fVar24 - fVar23;
  bVar32 = (byte)((uint)(fVar77 * fVar24 - fVar19) >> 0x18) ^ (byte)((uint)fVar19 >> 0x18);
  bVar34 = (byte)((uint)fVar33 >> 0x18) ^ (byte)((uint)fVar21 >> 0x18);
  iVar15 = -(uint)((char)((byte)((uint)(fVar76 * fVar24 - fVar16) >> 0x18) ^
                         (byte)((uint)fVar16 >> 0x18)) < '\0');
  iVar18 = -(uint)((char)bVar32 < '\0');
  iVar20 = -(uint)((char)bVar34 < '\0');
  iVar22 = -(uint)((long)(CONCAT18((byte)((uint)fVar35 >> 0x18) ^ (byte)((uint)fVar23 >> 0x18),
                                   CONCAT17((byte)((uint)fVar35 >> 0x10) ^
                                            (byte)((uint)fVar23 >> 0x10),
                                            CONCAT16((byte)((uint)fVar35 >> 8) ^
                                                     (byte)((uint)fVar23 >> 8),
                                                     CONCAT15(SUB41(fVar35,0) ^ SUB41(fVar23,0),
                                                              CONCAT14(bVar34,CONCAT13((byte)((uint)
                                                  fVar33 >> 0x10) ^ (byte)((uint)fVar21 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar33 >> 8) ^
                                                           (byte)((uint)fVar21 >> 8),
                                                           CONCAT11(SUB41(fVar33,0) ^
                                                                    SUB41(fVar21,0),bVar32))))))))
                         >> 8) < 0);
  auVar17[0] = (byte)iVar15 & bVar80;
  auVar17[1] = (byte)((uint)iVar15 >> 8) & bVar81;
  auVar17[2] = (byte)((uint)iVar15 >> 0x10) & bVar82;
  auVar17[3] = (byte)((uint)iVar15 >> 0x18) & bVar83;
  auVar17[4] = (byte)iVar18 & bVar84;
  auVar17[5] = (byte)((uint)iVar18 >> 8) & bVar85;
  auVar17[6] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  auVar17[7] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  auVar17[8] = (byte)iVar20 & bVar88;
  auVar17[9] = (byte)((uint)iVar20 >> 8) & bVar89;
  auVar17[10] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  auVar17[0xb] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar17[0xc] = (byte)iVar22 & bVar92;
  auVar17[0xd] = (byte)((uint)iVar22 >> 8) & bVar93;
  auVar17[0xe] = (byte)((uint)iVar22 >> 0x10) & bVar94;
  auVar17[0xf] = (byte)((uint)iVar22 >> 0x18) & bVar95;
  auVar37 = NEON_ext(auVar17,auVar17,8,1);
  uVar2 = CONCAT13(auVar26[3] | auVar73[3] | auVar26[7] | auVar73[7],
                   CONCAT12(auVar26[2] | auVar73[2] | auVar26[6] | auVar73[6],
                            CONCAT11(auVar26[1] | auVar73[1] | auVar26[5] | auVar73[5],
                                     auVar26[0] | auVar73[0] | auVar26[4] | auVar73[4]))) |
          CONCAT13(auVar37[3] | auVar17[3] | auVar37[7] | auVar17[7],
                   CONCAT12(auVar37[2] | auVar17[2] | auVar37[6] | auVar17[6],
                            CONCAT11(auVar37[1] | auVar17[1] | auVar37[5] | auVar17[5],
                                     auVar37[0] | auVar17[0] | auVar37[4] | auVar17[4]))) & uVar1;
  if (uVar2 == uVar1) goto LAB__text__005367b8;
  fVar35 = fVar76 * fVar42 + fVar16 * fVar25;
  fVar39 = fVar77 * fVar42 + fVar19 * fVar25;
  fVar41 = fVar78 * fVar42 + fVar21 * fVar25;
  fVar42 = fVar79 * fVar42 + fVar23 * fVar25;
  fVar25 = fVar76 * fVar43 + fVar16 * fVar36;
  fVar24 = fVar77 * fVar43 + fVar19 * fVar36;
  fVar33 = fVar78 * fVar43 + fVar21 * fVar36;
  fVar36 = fVar79 * fVar43 + fVar23 * fVar36;
  fVar43 = fVar76 * fVar47 + fVar16 * fVar46;
  fVar44 = fVar77 * fVar47 + fVar19 * fVar46;
  fVar45 = fVar78 * fVar47 + fVar21 * fVar46;
  fVar46 = fVar79 * fVar47 + fVar23 * fVar46;
  fVar47 = (float)*(undefined8 *)(param_1 + 0x10) * fVar35 +
           (float)*(undefined8 *)(param_1 + 0x14) * fVar25 + param_1[0x18] * fVar43 +
           (float)*(undefined8 *)(param_1 + 0x1c) * fVar76;
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar39 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar24 + param_1[0x19] * fVar44
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) * fVar77;
  fVar49 = (float)*(undefined8 *)(param_1 + 0x12) * fVar41 +
           (float)*(undefined8 *)(param_1 + 0x16) * fVar33 + param_1[0x1a] * fVar45 +
           (float)*(undefined8 *)(param_1 + 0x1e) * fVar78;
  fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) * fVar42 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar36 + param_1[0x1b] * fVar46
           + (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20) * fVar79;
  iVar15 = -(uint)(fVar47 == 0.0);
  iVar18 = -(uint)(fVar48 == 0.0);
  iVar20 = -(uint)(fVar49 == 0.0);
  iVar22 = -(uint)(fVar50 == 0.0);
  bVar32 = (byte)iVar15 & bVar80;
  bVar51 = (byte)((uint)iVar15 >> 8) & bVar81;
  bVar52 = (byte)((uint)iVar15 >> 0x10) & bVar82;
  bVar53 = (byte)((uint)iVar15 >> 0x18) & bVar83;
  bVar54 = (byte)iVar18 & bVar84;
  bVar55 = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar56 = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar57 = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar34 = (byte)iVar20 & bVar88;
  bVar59 = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar61 = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar63 = (byte)((uint)iVar20 >> 0x18) & bVar91;
  bVar65 = (byte)iVar22 & bVar92;
  bVar67 = (byte)((uint)iVar22 >> 8) & bVar93;
  bVar69 = (byte)((uint)iVar22 >> 0x10) & bVar94;
  bVar71 = (byte)((uint)iVar22 >> 0x18) & bVar95;
  auVar37[1] = bVar51;
  auVar37[0] = bVar32;
  auVar37[2] = bVar52;
  auVar37[3] = bVar53;
  auVar37[4] = bVar54;
  auVar37[5] = bVar55;
  auVar37[6] = bVar56;
  auVar37[7] = bVar57;
  auVar37[8] = bVar34;
  auVar37[9] = bVar59;
  auVar37[10] = bVar61;
  auVar37[0xb] = bVar63;
  auVar37[0xc] = bVar65;
  auVar37[0xd] = bVar67;
  auVar37[0xe] = bVar69;
  auVar37[0xf] = bVar71;
  auVar3[1] = bVar51;
  auVar3[0] = bVar32;
  auVar3[2] = bVar52;
  auVar3[3] = bVar53;
  auVar3[4] = bVar54;
  auVar3[5] = bVar55;
  auVar3[6] = bVar56;
  auVar3[7] = bVar57;
  auVar3[8] = bVar34;
  auVar3[9] = bVar59;
  auVar3[10] = bVar61;
  auVar3[0xb] = bVar63;
  auVar3[0xc] = bVar65;
  auVar3[0xd] = bVar67;
  auVar3[0xe] = bVar69;
  auVar3[0xf] = bVar71;
  auVar26 = NEON_ext(auVar37,auVar3,8,1);
  iVar15 = -(uint)((char)((byte)((uint)(fVar76 - fVar47) >> 0x18) ^ (byte)((uint)fVar47 >> 0x18)) <
                  '\0');
  iVar18 = -(uint)((char)((byte)((uint)(fVar77 - fVar48) >> 0x18) ^ (byte)((uint)fVar48 >> 0x18)) <
                  '\0');
  iVar20 = -(uint)((char)((byte)((uint)(fVar78 - fVar49) >> 0x18) ^ (byte)((uint)fVar49 >> 0x18)) <
                  '\0');
  iVar22 = -(uint)((char)((byte)((uint)(fVar79 - fVar50) >> 0x18) ^ (byte)((uint)fVar50 >> 0x18)) <
                  '\0');
  bVar34 = (byte)iVar15 & bVar80;
  bVar59 = (byte)((uint)iVar15 >> 8) & bVar81;
  bVar61 = (byte)((uint)iVar15 >> 0x10) & bVar82;
  bVar63 = (byte)((uint)iVar15 >> 0x18) & bVar83;
  bVar65 = (byte)iVar18 & bVar84;
  bVar67 = (byte)((uint)iVar18 >> 8) & bVar85;
  bVar69 = (byte)((uint)iVar18 >> 0x10) & bVar86;
  bVar71 = (byte)((uint)iVar18 >> 0x18) & bVar87;
  bVar58 = (byte)iVar20 & bVar88;
  bVar60 = (byte)((uint)iVar20 >> 8) & bVar89;
  bVar62 = (byte)((uint)iVar20 >> 0x10) & bVar90;
  bVar64 = (byte)((uint)iVar20 >> 0x18) & bVar91;
  bVar66 = (byte)iVar22 & bVar92;
  bVar68 = (byte)((uint)iVar22 >> 8) & bVar93;
  bVar70 = (byte)((uint)iVar22 >> 0x10) & bVar94;
  bVar72 = (byte)((uint)iVar22 >> 0x18) & bVar95;
  auVar4[1] = bVar59;
  auVar4[0] = bVar34;
  auVar4[2] = bVar61;
  auVar4[3] = bVar63;
  auVar4[4] = bVar65;
  auVar4[5] = bVar67;
  auVar4[6] = bVar69;
  auVar4[7] = bVar71;
  auVar4[8] = bVar58;
  auVar4[9] = bVar60;
  auVar4[10] = bVar62;
  auVar4[0xb] = bVar64;
  auVar4[0xc] = bVar66;
  auVar4[0xd] = bVar68;
  auVar4[0xe] = bVar70;
  auVar4[0xf] = bVar72;
  auVar5[1] = bVar59;
  auVar5[0] = bVar34;
  auVar5[2] = bVar61;
  auVar5[3] = bVar63;
  auVar5[4] = bVar65;
  auVar5[5] = bVar67;
  auVar5[6] = bVar69;
  auVar5[7] = bVar71;
  auVar5[8] = bVar58;
  auVar5[9] = bVar60;
  auVar5[10] = bVar62;
  auVar5[0xb] = bVar64;
  auVar5[0xc] = bVar66;
  auVar5[0xd] = bVar68;
  auVar5[0xe] = bVar70;
  auVar5[0xf] = bVar72;
  auVar73 = NEON_ext(auVar4,auVar5,8,1);
  uVar2 = CONCAT13(auVar73[3] | bVar63 | auVar73[7] | bVar71,
                   CONCAT12(auVar73[2] | bVar61 | auVar73[6] | bVar69,
                            CONCAT11(auVar73[1] | bVar59 | auVar73[5] | bVar67,
                                     auVar73[0] | bVar34 | auVar73[4] | bVar65))) &
          (CONCAT13(auVar26[3] | bVar53 | auVar26[7] | bVar57,
                    CONCAT12(auVar26[2] | bVar52 | auVar26[6] | bVar56,
                             CONCAT11(auVar26[1] | bVar51 | auVar26[5] | bVar55,
                                      auVar26[0] | bVar32 | auVar26[4] | bVar54))) ^ 0xffffffff) &
          uVar1 | uVar2;
  if (uVar2 == uVar1) goto LAB__text__005367b8;
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x24);
  fVar35 = (float)*(undefined8 *)(param_1 + 0x20) * fVar35 + auVar26._0_4_ * fVar25 +
           (float)*(undefined8 *)(param_1 + 0x28) * fVar43 +
           (float)*(undefined8 *)(param_1 + 0x2c) * fVar76;
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar39 + auVar26._4_4_ * fVar24
           + (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar44 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) * fVar77;
  fVar33 = (float)*(undefined8 *)(param_1 + 0x22) * fVar41 + auVar26._8_4_ * fVar33 +
           (float)*(undefined8 *)(param_1 + 0x2a) * fVar45 +
           (float)*(undefined8 *)(param_1 + 0x2e) * fVar78;
  fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar42 +
           auVar26._12_4_ * fVar36 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) * fVar46 +
           (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) * fVar79;
  fVar25 = fVar78 - (fVar49 + fVar33);
  fVar36 = fVar79 - (fVar50 + fVar46);
  bVar32 = (byte)((uint)(fVar77 - (fVar48 + fVar24)) >> 0x18) ^ (byte)((uint)fVar24 >> 0x18);
  bVar34 = (byte)((uint)fVar25 >> 0x18) ^ (byte)((uint)fVar33 >> 0x18);
  iVar15 = -(uint)((char)((byte)((uint)(fVar76 - (fVar47 + fVar35)) >> 0x18) ^
                         (byte)((uint)fVar35 >> 0x18)) < '\0');
  iVar18 = -(uint)((char)bVar32 < '\0');
  iVar20 = -(uint)((char)bVar34 < '\0');
  iVar22 = -(uint)((long)(CONCAT18((byte)((uint)fVar36 >> 0x18) ^ (byte)((uint)fVar46 >> 0x18),
                                   CONCAT17((byte)((uint)fVar36 >> 0x10) ^
                                            (byte)((uint)fVar46 >> 0x10),
                                            CONCAT16((byte)((uint)fVar36 >> 8) ^
                                                     (byte)((uint)fVar46 >> 8),
                                                     CONCAT15(SUB41(fVar36,0) ^ SUB41(fVar46,0),
                                                              CONCAT14(bVar34,CONCAT13((byte)((uint)
                                                  fVar25 >> 0x10) ^ (byte)((uint)fVar33 >> 0x10),
                                                  CONCAT12((byte)((uint)fVar25 >> 8) ^
                                                           (byte)((uint)fVar33 >> 8),
                                                           CONCAT11(SUB41(fVar25,0) ^
                                                                    SUB41(fVar33,0),bVar32))))))))
                         >> 8) < 0);
  auVar27[0] = (byte)iVar15 & bVar80;
  auVar27[1] = (byte)((uint)iVar15 >> 8) & bVar81;
  auVar27[2] = (byte)((uint)iVar15 >> 0x10) & bVar82;
  auVar27[3] = (byte)((uint)iVar15 >> 0x18) & bVar83;
  auVar27[4] = (byte)iVar18 & bVar84;
  auVar27[5] = (byte)((uint)iVar18 >> 8) & bVar85;
  auVar27[6] = (byte)((uint)iVar18 >> 0x10) & bVar86;
  auVar27[7] = (byte)((uint)iVar18 >> 0x18) & bVar87;
  auVar27[8] = (byte)iVar20 & bVar88;
  auVar27[9] = (byte)((uint)iVar20 >> 8) & bVar89;
  auVar27[10] = (byte)((uint)iVar20 >> 0x10) & bVar90;
  auVar27[0xb] = (byte)((uint)iVar20 >> 0x18) & bVar91;
  auVar27[0xc] = (byte)iVar22 & bVar92;
  auVar27[0xd] = (byte)((uint)iVar22 >> 8) & bVar93;
  auVar27[0xe] = (byte)((uint)iVar22 >> 0x10) & bVar94;
  auVar27[0xf] = (byte)((uint)iVar22 >> 0x18) & bVar95;
  auVar26 = NEON_ext(auVar27,auVar27,8,1);
  uVar2 = CONCAT13(auVar26[3] | auVar27[3] | auVar26[7] | auVar27[7],
                   CONCAT12(auVar26[2] | auVar27[2] | auVar26[6] | auVar27[6],
                            CONCAT11(auVar26[1] | auVar27[1] | auVar26[5] | auVar27[5],
                                     auVar26[0] | auVar27[0] | auVar26[4] | auVar27[4]))) & uVar1 |
          uVar2;
  if (uVar2 == uVar1) goto LAB__text__005367b8;
  auVar6._4_4_ = fVar77;
  auVar6._0_4_ = fVar76;
  auVar6._8_4_ = fVar78;
  auVar6._12_4_ = fVar79;
  auVar26 = NEON_frecpe(auVar6,4);
  auVar7._4_4_ = fVar77;
  auVar7._0_4_ = fVar76;
  auVar7._8_4_ = fVar78;
  auVar7._12_4_ = fVar79;
  auVar73 = NEON_frecps(auVar7,auVar26,4);
  fVar25 = auVar26._0_4_ * fVar16 * auVar73._0_4_;
  auVar38._0_8_ = CONCAT44(auVar26._4_4_ * fVar19 * auVar73._4_4_,fVar25);
  auVar38._8_4_ = auVar26._8_4_ * fVar21 * auVar73._8_4_;
  auVar38._12_4_ = auVar26._12_4_ * fVar23 * auVar73._12_4_;
  auVar40 = auVar38._4_12_;
  if (((uVar1 & (uVar2 ^ 0xffffffff) & 1) != 0) && (fVar25 <= param_1[0x55])) {
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar28._0_8_ =
         CONCAT44(param_1[0x41] + auVar26._4_4_ * fVar25,param_1[0x40] + auVar26._0_4_ * fVar25);
    auVar28._8_4_ = param_1[0x42] + auVar26._8_4_ * fVar25;
    auVar28._12_4_ = param_1[0x43] + auVar26._12_4_ * fVar25;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar28._0_8_;
      local_34 = auVar28._8_4_;
      uVar13 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4a),
                                   &local_3c);
      auVar28._8_8_ = auVar28._8_8_;
      auVar8._8_8_ = auVar38._8_8_;
      auVar8._0_8_ = auVar38._0_8_;
      auVar40 = auVar8._4_12_;
      if ((uVar13 & 1) != 0) goto LAB__text__005367b0;
    }
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(long *)(param_1 + 0x32) = auVar28._8_8_;
    *(long *)(param_1 + 0x30) = auVar28._0_8_;
    lVar14 = FUN__text__00530d5c(*(undefined8 *)(param_1 + 0x4a));
    fVar25 = *(float *)(lVar14 + 4);
    *(undefined1 *)((long)param_1 + 0x159) = 0;
    auVar9._8_8_ = auVar38._8_8_;
    auVar9._0_8_ = auVar38._0_8_;
    auVar40 = auVar9._4_12_;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x52);
    param_1[0x5a] = fVar25;
  }
LAB__text__005367b0:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__005367b8;
  uVar2 = ~uVar2;
  if ((((uVar2 & uVar1) >> 1 & 1) != 0) && (fVar25 = auVar40._0_4_, fVar25 <= param_1[0x55])) {
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar29._0_8_ =
         CONCAT44(param_1[0x41] + auVar26._4_4_ * fVar25,param_1[0x40] + auVar26._0_4_ * fVar25);
    auVar29._8_4_ = param_1[0x42] + auVar26._8_4_ * fVar25;
    auVar29._12_4_ = param_1[0x43] + auVar26._12_4_ * fVar25;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar29._0_8_;
      local_34 = auVar29._8_4_;
      uVar13 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4c),
                                   &local_3c);
      auVar29._8_8_ = auVar29._8_8_;
      if ((uVar13 & 1) != 0) goto LAB__text__00536860;
    }
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(long *)(param_1 + 0x32) = auVar29._8_8_;
    *(long *)(param_1 + 0x30) = auVar29._0_8_;
    lVar14 = FUN__text__00530d5c(*(undefined8 *)(param_1 + 0x4c));
    fVar25 = *(float *)(lVar14 + 4);
    *(undefined1 *)((long)param_1 + 0x159) = 0;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x52);
    param_1[0x5a] = fVar25;
  }
LAB__text__00536860:
  if (*(char *)((long)param_1 + 0x159) != '\0') goto LAB__text__005367b8;
  if ((((uVar2 & uVar1) >> 2 & 1) != 0) && (fVar25 = auVar40._4_4_, fVar25 <= param_1[0x55])) {
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar30._0_8_ =
         CONCAT44(param_1[0x41] + auVar26._4_4_ * fVar25,param_1[0x40] + auVar26._0_4_ * fVar25);
    auVar30._8_4_ = param_1[0x42] + auVar26._8_4_ * fVar25;
    auVar30._12_4_ = param_1[0x43] + auVar26._12_4_ * fVar25;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar30._0_8_;
      local_34 = auVar30._8_4_;
      uVar13 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x4e),
                                   &local_3c);
      auVar30._8_8_ = auVar30._8_8_;
      if ((uVar13 & 1) != 0) goto LAB__text__005368f4;
    }
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(long *)(param_1 + 0x32) = auVar30._8_8_;
    *(long *)(param_1 + 0x30) = auVar30._0_8_;
    lVar14 = FUN__text__00530d5c(*(undefined8 *)(param_1 + 0x4e));
    fVar25 = *(float *)(lVar14 + 4);
    *(undefined1 *)((long)param_1 + 0x159) = 0;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x52);
    param_1[0x5a] = fVar25;
  }
LAB__text__005368f4:
  if (((*(char *)((long)param_1 + 0x159) == '\0') && (((uVar2 & uVar1) >> 3 & 1) != 0)) &&
     (fVar25 = auVar40._8_4_, fVar25 <= param_1[0x55])) {
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x44);
    auVar31._0_8_ =
         CONCAT44(param_1[0x41] + auVar26._4_4_ * fVar25,param_1[0x40] + auVar26._0_4_ * fVar25);
    auVar31._8_4_ = param_1[0x42] + auVar26._8_4_ * fVar25;
    auVar31._12_4_ = param_1[0x43] + auVar26._12_4_ * fVar25;
    if (*(long *)(param_1 + 0x52) != 0) {
      local_3c = auVar31._0_8_;
      local_34 = auVar31._8_4_;
      uVar13 = FUN__text__0051ed40(*(long *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x50),
                                   &local_3c);
      auVar31._8_8_ = auVar31._8_8_;
      if ((uVar13 & 1) != 0) goto LAB__text__005367b8;
    }
    *(undefined1 *)(param_1 + 0x56) = 1;
    *(long *)(param_1 + 0x32) = auVar31._8_8_;
    *(long *)(param_1 + 0x30) = auVar31._0_8_;
    lVar14 = FUN__text__00530d5c(*(undefined8 *)(param_1 + 0x50));
    fVar25 = *(float *)(lVar14 + 4);
    *(undefined1 *)((long)param_1 + 0x159) = 0;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x52);
    param_1[0x5a] = fVar25;
    return 0;
  }
LAB__text__005367b8:
  return *(undefined1 *)((long)param_1 + 0x159);
}


