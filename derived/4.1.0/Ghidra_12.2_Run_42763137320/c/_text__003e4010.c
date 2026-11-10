/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e4010; name: FUN_.text__003e4010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e4010(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                        undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                        uint *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  ulong uVar20;
  ushort uVar21;
  undefined4 uVar22;
  undefined6 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [14];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  int iVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [14];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar53;
  
  bVar47 = param_3[0xf];
  bVar46 = param_3[0xe];
  bVar45 = param_3[0xd];
  bVar44 = param_3[0xc];
  bVar43 = param_3[0xb];
  bVar42 = param_3[10];
  bVar41 = param_3[9];
  bVar40 = param_3[8];
  bVar39 = param_3[7];
  bVar38 = param_3[6];
  bVar37 = param_3[5];
  bVar36 = param_3[4];
  bVar35 = param_3[3];
  bVar34 = param_3[2];
  bVar33 = param_3[1];
  bVar32 = param_3[0];
  uVar21 = CONCAT11(param_4[9] ^ bVar41,param_4[8] ^ bVar40);
  uVar22 = CONCAT13(param_4[0xb] ^ bVar43,CONCAT12(param_4[10] ^ bVar42,uVar21));
  uVar23 = CONCAT15(param_4[0xd] ^ bVar45,CONCAT14(param_4[0xc] ^ bVar44,uVar22));
  uVar20 = CONCAT17((char)(CONCAT17(param_4[0xf] ^ bVar47,CONCAT16(param_4[0xe] ^ bVar46,uVar23)) >>
                          0x34),
                    CONCAT16((char)((uint6)uVar23 >> 0x24),
                             CONCAT15((char)((uint)uVar22 >> 0x14),
                                      CONCAT14((char)(uVar21 >> 4),
                                               CONCAT13((char)(CONCAT11(param_4[7] ^ bVar39,
                                                                        param_4[6] ^ bVar38) >> 4),
                                                        CONCAT12((char)(CONCAT11(param_4[5] ^ bVar37
                                                                                 ,param_4[4] ^
                                                                                  bVar36) >> 4),
                                                                 CONCAT11((char)(CONCAT11(param_4[3]
                                                                                          ^ bVar35,
                                                  param_4[2] ^ bVar34) >> 4),
                                                  (char)(CONCAT11(param_4[1] ^ bVar33,
                                                                  param_4[0] ^ bVar32) >> 4))))))));
  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
  uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 2;
  uVar18 = (uint)uVar20;
  bVar53 = (byte)(1 << uVar20);
  bVar19 = (byte)((uint)(1 << uVar20) >> 8);
  auVar28[0] = param_4[0] & ~-((bVar53 & (byte)_DAT_00724c40) == 0);
  auVar28[1] = param_4[1] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 8)) == 0);
  auVar28[2] = param_4[2] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x10)) == 0);
  auVar28[3] = param_4[3] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x18)) == 0);
  auVar28[4] = param_4[4] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x20)) == 0);
  auVar28[5] = param_4[5] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x28)) == 0);
  auVar28[6] = param_4[6] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x30)) == 0);
  auVar28[7] = param_4[7] & ~-((bVar53 & (byte)((ulong)_DAT_00724c40 >> 0x38)) == 0);
  auVar28[8] = param_4[8] & ~-((bVar19 & (byte)uRam0000000000724c48) == 0);
  auVar28[9] = param_4[9] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 8)) == 0);
  auVar28[10] = param_4[10] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x10)) == 0);
  auVar28[0xb] = param_4[0xb] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x18)) == 0);
  auVar28[0xc] = param_4[0xc] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x20)) == 0);
  auVar28[0xd] = param_4[0xd] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x28)) == 0);
  auVar28[0xe] = param_4[0xe] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x30)) == 0);
  auVar28[0xf] = param_4[0xf] & ~-((bVar19 & (byte)((ulong)uRam0000000000724c48 >> 0x38)) == 0);
  iVar48 = NEON_umaxv(auVar28,4);
  if (iVar48 != 0) {
    lVar3 = -uVar20;
    uVar21 = CONCAT11(*(byte *)(lVar3 + 0x73add9) & param_5[1],
                      *(byte *)(lVar3 + 0x73add8) & param_5[0]);
    uVar22 = CONCAT13(*(byte *)(lVar3 + 0x73addb) & param_5[3],
                      CONCAT12(*(byte *)(lVar3 + 0x73adda) & param_5[2],uVar21));
    uVar23 = CONCAT15(*(byte *)(lVar3 + 0x73addd) & param_5[5],
                      CONCAT14(*(byte *)(lVar3 + 0x73addc) & param_5[4],uVar22));
    uVar24 = CONCAT17(*(byte *)(lVar3 + 0x73addf) & param_5[7],
                      CONCAT16(*(byte *)(lVar3 + 0x73adde) & param_5[6],uVar23));
    auVar49._0_10_ =
         CONCAT19(*(byte *)(lVar3 + 0x73ade1) & param_5[9],
                  CONCAT18(*(byte *)(lVar3 + 0x73ade0) & param_5[8],uVar24));
    auVar49[10] = *(byte *)(lVar3 + 0x73ade2) & param_5[10];
    auVar49[0xb] = *(byte *)(lVar3 + 0x73ade3) & param_5[0xb];
    auVar50[0xc] = *(byte *)(lVar3 + 0x73ade4) & param_5[0xc];
    auVar50._0_12_ = auVar49;
    auVar50[0xd] = *(byte *)(lVar3 + 0x73ade5) & param_5[0xd];
    auVar31[0xe] = *(byte *)(lVar3 + 0x73ade6) & param_5[0xe];
    auVar31._0_14_ = auVar50;
    auVar31[0xf] = *(byte *)(lVar3 + 0x73ade7) & param_5[0xf];
    iVar48 = NEON_umaxv(auVar31,4);
    if (iVar48 == 0) {
      *(undefined1 *)(param_7 + 1) = 1;
      param_7[10] = 0xffffffff;
      param_7[0xb] = 0xffffffff;
      param_7[8] = 0xffffffff;
      param_7[9] = 0xffffffff;
      *param_7 = (uint)LZCOUNT(CONCAT17((char)(*(ushort *)((long)param_7 + 0x4e) >> 4),
                                        CONCAT16((char)((ushort)param_7[0x13] >> 4),
                                                 CONCAT15((char)(*(ushort *)((long)param_7 + 0x4a)
                                                                >> 4),
                                                          CONCAT14((char)((ushort)param_7[0x12] >> 4
                                                                         ),CONCAT13((char)(*(ushort 
                                                  *)((long)param_7 + 0x46) >> 4),
                                                  CONCAT12((char)((ushort)param_7[0x11] >> 4),
                                                           CONCAT11((char)(*(ushort *)
                                                                            ((long)param_7 + 0x42)
                                                                          >> 4),
                                                                    (char)((ushort)param_7[0x10] >>
                                                                          4))))))))) >> 2 ^
                 0xffffffff;
      return;
    }
    uVar18 = 0xf - ((uint)LZCOUNT(CONCAT17((char)(auVar31._14_2_ >> 4),
                                           CONCAT16((char)(auVar50._12_2_ >> 4),
                                                    CONCAT15((char)(auVar49._10_2_ >> 4),
                                                             CONCAT14((char)((unkuint10)
                                                                             auVar49._0_10_ >> 0x44)
                                                                      ,CONCAT13((char)((ulong)uVar24
                                                                                      >> 0x34),
                                                                                CONCAT12((char)((
                                                  uint6)uVar23 >> 0x24),
                                                  CONCAT11((char)((uint)uVar22 >> 0x14),
                                                           (char)(uVar21 >> 4))))))))) >> 2);
  }
  auVar51[0] = param_2[0] >> 4;
  auVar51[1] = param_2[1] >> 4;
  auVar51[2] = param_2[2] >> 4;
  auVar51[3] = param_2[3] >> 4;
  auVar51[4] = param_2[4] >> 4;
  auVar51[5] = param_2[5] >> 4;
  auVar51[6] = param_2[6] >> 4;
  auVar51[7] = param_2[7] >> 4;
  auVar51[8] = param_2[8] >> 4;
  auVar51[9] = param_2[9] >> 4;
  auVar51[10] = param_2[10] >> 4;
  auVar51[0xb] = param_2[0xb] >> 4;
  auVar51[0xc] = param_2[0xc] >> 4;
  auVar51[0xd] = param_2[0xd] >> 4;
  auVar51[0xe] = param_2[0xe] >> 4;
  auVar51[0xf] = param_2[0xf] >> 4;
  auVar27[0] = param_1[0] >> 4;
  auVar27[1] = param_1[1] >> 4;
  auVar27[2] = param_1[2] >> 4;
  auVar27[3] = param_1[3] >> 4;
  auVar27[4] = param_1[4] >> 4;
  auVar27[5] = param_1[5] >> 4;
  auVar27[6] = param_1[6] >> 4;
  auVar27[7] = param_1[7] >> 4;
  auVar27[8] = param_1[8] >> 4;
  auVar27[9] = param_1[9] >> 4;
  auVar27[10] = param_1[10] >> 4;
  auVar27[0xb] = param_1[0xb] >> 4;
  auVar27[0xc] = param_1[0xc] >> 4;
  auVar27[0xd] = param_1[0xd] >> 4;
  auVar27[0xe] = param_1[0xe] >> 4;
  auVar27[0xf] = param_1[0xf] >> 4;
  auVar52[8] = (char)uRam00000000007247e8;
  auVar52._0_8_ = _DAT_007247e0;
  auVar52[9] = (char)((ulong)uRam00000000007247e8 >> 8);
  auVar52[10] = (char)((ulong)uRam00000000007247e8 >> 0x10);
  auVar52[0xb] = (char)((ulong)uRam00000000007247e8 >> 0x18);
  auVar52[0xc] = (char)((ulong)uRam00000000007247e8 >> 0x20);
  auVar52[0xd] = (char)((ulong)uRam00000000007247e8 >> 0x28);
  auVar52[0xe] = (char)((ulong)uRam00000000007247e8 >> 0x30);
  auVar52[0xf] = (char)((ulong)uRam00000000007247e8 >> 0x38);
  auVar52 = a64_TBL(ZEXT816(0),auVar52,auVar51);
  auVar30._0_8_ = param_2._0_8_ & 0xf0f0f0f0f0f0f0f;
  auVar30[8] = param_2[8] & 0xf;
  auVar30[9] = param_2[9] & 0xf;
  auVar30[10] = param_2[10] & 0xf;
  auVar30[0xb] = param_2[0xb] & 0xf;
  auVar30[0xc] = param_2[0xc] & 0xf;
  auVar30[0xd] = param_2[0xd] & 0xf;
  auVar30[0xe] = param_2[0xe] & 0xf;
  auVar30[0xf] = param_2[0xf] & 0xf;
  auVar1[8] = (char)uRam0000000000724ad8;
  auVar1._0_8_ = _DAT_00724ad0;
  auVar1[9] = (char)((ulong)uRam0000000000724ad8 >> 8);
  auVar1[10] = (char)((ulong)uRam0000000000724ad8 >> 0x10);
  auVar1[0xb] = (char)((ulong)uRam0000000000724ad8 >> 0x18);
  auVar1[0xc] = (char)((ulong)uRam0000000000724ad8 >> 0x20);
  auVar1[0xd] = (char)((ulong)uRam0000000000724ad8 >> 0x28);
  auVar1[0xe] = (char)((ulong)uRam0000000000724ad8 >> 0x30);
  auVar1[0xf] = (char)((ulong)uRam0000000000724ad8 >> 0x38);
  auVar31 = a64_TBL(ZEXT816(0),auVar1,auVar30);
  auVar2[8] = (char)uRam0000000000724b88;
  auVar2._0_8_ = _DAT_00724b80;
  auVar2[9] = (char)((ulong)uRam0000000000724b88 >> 8);
  auVar2[10] = (char)((ulong)uRam0000000000724b88 >> 0x10);
  auVar2[0xb] = (char)((ulong)uRam0000000000724b88 >> 0x18);
  auVar2[0xc] = (char)((ulong)uRam0000000000724b88 >> 0x20);
  auVar2[0xd] = (char)((ulong)uRam0000000000724b88 >> 0x28);
  auVar2[0xe] = (char)((ulong)uRam0000000000724b88 >> 0x30);
  auVar2[0xf] = (char)((ulong)uRam0000000000724b88 >> 0x38);
  auVar28 = a64_TBL(ZEXT816(0),auVar2,auVar27);
  uVar21 = CONCAT11(-((byte)(auVar31[1] & auVar52[1] & auVar28[1]) != 0),
                    -((byte)(auVar31[0] & auVar52[0] & auVar28[0]) != 0));
  uVar22 = CONCAT13(-((byte)(auVar31[3] & auVar52[3] & auVar28[3]) != 0),
                    CONCAT12(-((byte)(auVar31[2] & auVar52[2] & auVar28[2]) != 0),uVar21));
  uVar23 = CONCAT15(-((byte)(auVar31[5] & auVar52[5] & auVar28[5]) != 0),
                    CONCAT14(-((byte)(auVar31[4] & auVar52[4] & auVar28[4]) != 0),uVar22));
  uVar24 = CONCAT17(-((byte)(auVar31[7] & auVar52[7] & auVar28[7]) != 0),
                    CONCAT16(-((byte)(auVar31[6] & auVar52[6] & auVar28[6]) != 0),uVar23));
  auVar25._0_10_ =
       CONCAT19(-((byte)(auVar31[9] & auVar52[9] & auVar28[9]) != 0),
                CONCAT18(-((byte)(auVar31[8] & auVar52[8] & auVar28[8]) != 0),uVar24));
  auVar25[10] = -((byte)(auVar31[10] & auVar52[10] & auVar28[10]) != 0);
  auVar25[0xb] = -((byte)(auVar31[0xb] & auVar52[0xb] & auVar28[0xb]) != 0);
  auVar26[0xc] = -((byte)(auVar31[0xc] & auVar52[0xc] & auVar28[0xc]) != 0);
  auVar26._0_12_ = auVar25;
  auVar26[0xd] = -((byte)(auVar31[0xd] & auVar52[0xd] & auVar28[0xd]) != 0);
  auVar29[0xe] = -((byte)(auVar31[0xe] & auVar52[0xe] & auVar28[0xe]) != 0);
  auVar29._0_14_ = auVar26;
  auVar29[0xf] = -((byte)(auVar31[0xf] & auVar52[0xf] & auVar28[0xf]) != 0);
  iVar48 = NEON_umaxv(auVar29,4);
  if (iVar48 != 0) {
    uVar20 = CONCAT17((char)(auVar29._14_2_ >> 4),
                      CONCAT16((char)(auVar26._12_2_ >> 4),
                               CONCAT15((char)(auVar25._10_2_ >> 4),
                                        CONCAT14((char)((unkuint10)auVar25._0_10_ >> 0x44),
                                                 CONCAT13((char)((ulong)uVar24 >> 0x34),
                                                          CONCAT12((char)((uint6)uVar23 >> 0x24),
                                                                   CONCAT11((char)((uint)uVar22 >>
                                                                                  0x14),
                                                                            (char)(uVar21 >> 4))))))
                              ));
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
    iVar48 = (int)(uVar20 >> 2);
    if (iVar48 <= (int)uVar18) {
      uVar18 = iVar48 - 1;
      *param_7 = uVar18;
      if ((uint)uVar20 < 4) {
        *(undefined1 *)(param_7 + 1) = 1;
        param_7[10] = 0xffffffff;
        param_7[0xb] = 0xffffffff;
        param_7[8] = 0xffffffff;
        param_7[9] = 0xffffffff;
        return;
      }
      lVar3 = -(ulong)uVar18;
      bVar19 = *(byte *)(lVar3 + 0x73add8);
      bVar53 = *(byte *)(lVar3 + 0x73add9);
      bVar4 = *(byte *)(lVar3 + 0x73adda);
      bVar5 = *(byte *)(lVar3 + 0x73addb);
      bVar6 = *(byte *)(lVar3 + 0x73addc);
      bVar7 = *(byte *)(lVar3 + 0x73addd);
      bVar8 = *(byte *)(lVar3 + 0x73adde);
      bVar9 = *(byte *)(lVar3 + 0x73addf);
      bVar10 = *(byte *)(lVar3 + 0x73ade0);
      bVar11 = *(byte *)(lVar3 + 0x73ade1);
      bVar12 = *(byte *)(lVar3 + 0x73ade2);
      bVar13 = *(byte *)(lVar3 + 0x73ade3);
      bVar14 = *(byte *)(lVar3 + 0x73ade4);
      bVar15 = *(byte *)(lVar3 + 0x73ade5);
      bVar16 = *(byte *)(lVar3 + 0x73ade6);
      bVar17 = *(byte *)(lVar3 + 0x73ade7);
      *(byte *)(param_7 + 10) = bVar40 | ~bVar10;
      *(byte *)((long)param_7 + 0x29) = bVar41 | ~bVar11;
      *(byte *)((long)param_7 + 0x2a) = bVar42 | ~bVar12;
      *(byte *)((long)param_7 + 0x2b) = bVar43 | ~bVar13;
      *(byte *)(param_7 + 0xb) = bVar44 | ~bVar14;
      *(byte *)((long)param_7 + 0x2d) = bVar45 | ~bVar15;
      *(byte *)((long)param_7 + 0x2e) = bVar46 | ~bVar16;
      *(byte *)((long)param_7 + 0x2f) = bVar47 | ~bVar17;
      *(byte *)(param_7 + 8) = bVar32 | ~bVar19;
      *(byte *)((long)param_7 + 0x21) = bVar33 | ~bVar53;
      *(byte *)((long)param_7 + 0x22) = bVar34 | ~bVar4;
      *(byte *)((long)param_7 + 0x23) = bVar35 | ~bVar5;
      *(byte *)(param_7 + 9) = bVar36 | ~bVar6;
      *(byte *)((long)param_7 + 0x25) = bVar37 | ~bVar7;
      *(byte *)((long)param_7 + 0x26) = bVar38 | ~bVar8;
      *(byte *)((long)param_7 + 0x27) = bVar39 | ~bVar9;
      *(byte *)(param_7 + 0xe) = bVar10 & param_6[8];
      *(byte *)((long)param_7 + 0x39) = bVar11 & param_6[9];
      *(byte *)((long)param_7 + 0x3a) = bVar12 & param_6[10];
      *(byte *)((long)param_7 + 0x3b) = bVar13 & param_6[0xb];
      *(byte *)(param_7 + 0xf) = bVar14 & param_6[0xc];
      *(byte *)((long)param_7 + 0x3d) = bVar15 & param_6[0xd];
      *(byte *)((long)param_7 + 0x3e) = bVar16 & param_6[0xe];
      *(byte *)((long)param_7 + 0x3f) = bVar17 & param_6[0xf];
      *(byte *)(param_7 + 0xc) = bVar19 & param_6[0];
      *(byte *)((long)param_7 + 0x31) = bVar53 & param_6[1];
      *(byte *)((long)param_7 + 0x32) = bVar4 & param_6[2];
      *(byte *)((long)param_7 + 0x33) = bVar5 & param_6[3];
      *(byte *)(param_7 + 0xd) = bVar6 & param_6[4];
      *(byte *)((long)param_7 + 0x35) = bVar7 & param_6[5];
      *(byte *)((long)param_7 + 0x36) = bVar8 & param_6[6];
      *(byte *)((long)param_7 + 0x37) = bVar9 & param_6[7];
      return;
    }
  }
  uVar20 = (ulong)(0x10 - uVar18);
  bVar19 = *(byte *)(uVar20 + 0x73adc8);
  bVar53 = *(byte *)(uVar20 + 0x73adc9);
  bVar4 = *(byte *)(uVar20 + 0x73adca);
  bVar5 = *(byte *)(uVar20 + 0x73adcb);
  bVar6 = *(byte *)(uVar20 + 0x73adcc);
  bVar7 = *(byte *)(uVar20 + 0x73adcd);
  bVar8 = *(byte *)(uVar20 + 0x73adce);
  bVar9 = *(byte *)(uVar20 + 0x73adcf);
  bVar10 = *(byte *)(uVar20 + 0x73add0);
  bVar11 = *(byte *)(uVar20 + 0x73add1);
  bVar12 = *(byte *)(uVar20 + 0x73add2);
  bVar13 = *(byte *)(uVar20 + 0x73add3);
  bVar14 = *(byte *)(uVar20 + 0x73add4);
  bVar15 = *(byte *)(uVar20 + 0x73add5);
  bVar16 = *(byte *)(uVar20 + 0x73add6);
  bVar17 = *(byte *)(uVar20 + 0x73add7);
  *param_7 = uVar18;
  *(byte *)(param_7 + 10) = bVar40 | ~bVar10;
  *(byte *)((long)param_7 + 0x29) = bVar41 | ~bVar11;
  *(byte *)((long)param_7 + 0x2a) = bVar42 | ~bVar12;
  *(byte *)((long)param_7 + 0x2b) = bVar43 | ~bVar13;
  *(byte *)(param_7 + 0xb) = bVar44 | ~bVar14;
  *(byte *)((long)param_7 + 0x2d) = bVar45 | ~bVar15;
  *(byte *)((long)param_7 + 0x2e) = bVar46 | ~bVar16;
  *(byte *)((long)param_7 + 0x2f) = bVar47 | ~bVar17;
  *(byte *)(param_7 + 8) = bVar32 | ~bVar19;
  *(byte *)((long)param_7 + 0x21) = bVar33 | ~bVar53;
  *(byte *)((long)param_7 + 0x22) = bVar34 | ~bVar4;
  *(byte *)((long)param_7 + 0x23) = bVar35 | ~bVar5;
  *(byte *)(param_7 + 9) = bVar36 | ~bVar6;
  *(byte *)((long)param_7 + 0x25) = bVar37 | ~bVar7;
  *(byte *)((long)param_7 + 0x26) = bVar38 | ~bVar8;
  *(byte *)((long)param_7 + 0x27) = bVar39 | ~bVar9;
  *(byte *)(param_7 + 0xe) = bVar10 & param_6[8];
  *(byte *)((long)param_7 + 0x39) = bVar11 & param_6[9];
  *(byte *)((long)param_7 + 0x3a) = bVar12 & param_6[10];
  *(byte *)((long)param_7 + 0x3b) = bVar13 & param_6[0xb];
  *(byte *)(param_7 + 0xf) = bVar14 & param_6[0xc];
  *(byte *)((long)param_7 + 0x3d) = bVar15 & param_6[0xd];
  *(byte *)((long)param_7 + 0x3e) = bVar16 & param_6[0xe];
  *(byte *)((long)param_7 + 0x3f) = bVar17 & param_6[0xf];
  *(byte *)(param_7 + 0xc) = bVar19 & param_6[0];
  *(byte *)((long)param_7 + 0x31) = bVar53 & param_6[1];
  *(byte *)((long)param_7 + 0x32) = bVar4 & param_6[2];
  *(byte *)((long)param_7 + 0x33) = bVar5 & param_6[3];
  *(byte *)(param_7 + 0xd) = bVar6 & param_6[4];
  *(byte *)((long)param_7 + 0x35) = bVar7 & param_6[5];
  *(byte *)((long)param_7 + 0x36) = bVar8 & param_6[6];
  *(byte *)((long)param_7 + 0x37) = bVar9 & param_6[7];
  return;
}


