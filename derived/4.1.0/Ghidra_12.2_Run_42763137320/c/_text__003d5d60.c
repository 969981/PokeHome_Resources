/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d5d60; name: FUN_.text__003d5d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__003d5d60(int *param_1,undefined8 *param_2,ulong param_3,byte *param_4,ulong param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  byte bVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte bVar24;
  byte bVar25;
  uint5 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar30;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  uint uVar32;
  uint uVar31;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  uint uVar37;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  uint uVar42;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  uint uVar47;
  byte bVar51;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  uint uVar52;
  int iVar53;
  int iVar54;
  byte bVar58;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  uint uVar59;
  int iVar60;
  int iVar61;
  byte bVar65;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  uint uVar66;
  int iVar67;
  int iVar68;
  byte bVar72;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  uint uVar73;
  int iVar74;
  int iVar75;
  
  if (*param_1 < 0) {
    if (*param_1 != -1) {
      return ZEXT816(0x16);
    }
    FUN__text__003d5c30(param_1,0);
  }
  if ((long)param_5 < 0) {
    *param_1 = -0x16;
    return ZEXT816(0x16);
  }
  if (param_3 < (param_5 + 3 >> 2) * 3) {
    *param_1 = -0x22;
    return ZEXT816(0x22);
  }
  if (param_5 == 0) {
LAB__text__003d6020:
    return ZEXT816(0);
  }
  iVar53 = *param_1;
  puVar23 = param_2;
  uVar20 = _DAT_00724c90;
  uVar21 = uRam0000000000724c98;
  if (0 < iVar53) {
    do {
      if (param_5 == 0) goto LAB__text__003d6020;
      cVar1 = *(char *)((long)param_1 + (ulong)*param_4 + 10);
      if (cVar1 < '\0') {
        if (cVar1 != -2) goto LAB__text__003d5fe8;
      }
      else {
        *param_1 = iVar53 + 1;
        *(char *)((long)param_1 + (long)iVar53 + 4) = cVar1;
        iVar53 = *param_1;
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
    } while (iVar53 < 4);
    uVar31 = (int)*(char *)((long)param_1 + 5) << 0xc | (int)(char)param_1[1] << 0x12 |
             (int)*(char *)((long)param_1 + 6) << 6 | (int)*(char *)((long)param_1 + 7);
    *(char *)((long)param_2 + 2) = (char)uVar31;
    *(char *)param_2 = (char)(uVar31 >> 0x10);
    *(char *)((long)param_2 + 1) = (char)(uVar31 >> 8);
    *param_1 = 0;
    puVar23 = (undefined8 *)((long)param_2 + 3);
    uVar20 = _DAT_00724c90;
    uVar21 = uRam0000000000724c98;
  }
  _DAT_00724c90 = uVar20;
  uRam0000000000724c98 = uVar21;
  if (0x1f < param_5) {
    bVar24 = (byte)*(undefined8 *)(param_1 + 2);
    bVar25 = (byte)*(undefined8 *)((long)param_1 + 9);
    puVar22 = puVar23;
    do {
      bVar4 = *param_4;
      bVar5 = param_4[1];
      bVar6 = param_4[2];
      bVar7 = param_4[3];
      bVar8 = param_4[4];
      bVar9 = param_4[5];
      bVar10 = param_4[6];
      bVar11 = param_4[7];
      bVar12 = param_4[8];
      bVar13 = param_4[9];
      bVar14 = param_4[10];
      bVar15 = param_4[0xb];
      bVar16 = param_4[0xc];
      bVar17 = param_4[0xd];
      bVar18 = param_4[0xe];
      bVar19 = param_4[0xf];
      bVar51 = -((byte)(bVar4 - 0x30) < 10);
      bVar55 = -((byte)(bVar5 - 0x30) < 10);
      bVar56 = -((byte)(bVar6 - 0x30) < 10);
      bVar57 = -((byte)(bVar7 - 0x30) < 10);
      bVar58 = -((byte)(bVar8 - 0x30) < 10);
      bVar62 = -((byte)(bVar9 - 0x30) < 10);
      bVar63 = -((byte)(bVar10 - 0x30) < 10);
      bVar64 = -((byte)(bVar11 - 0x30) < 10);
      bVar65 = -((byte)(bVar12 - 0x30) < 10);
      bVar69 = -((byte)(bVar13 - 0x30) < 10);
      bVar70 = -((byte)(bVar14 - 0x30) < 10);
      bVar71 = -((byte)(bVar15 - 0x30) < 10);
      bVar72 = -((byte)(bVar16 - 0x30) < 10);
      bVar76 = -((byte)(bVar17 - 0x30) < 10);
      bVar77 = -((byte)(bVar18 - 0x30) < 10);
      bVar78 = -((byte)(bVar19 - 0x30) < 10);
      bVar30 = -(bVar4 == bVar25);
      bVar33 = -(bVar5 == bVar25);
      bVar34 = -(bVar6 == bVar25);
      bVar35 = -(bVar7 == bVar25);
      bVar36 = -(bVar8 == bVar25);
      bVar38 = -(bVar9 == bVar25);
      bVar39 = -(bVar10 == bVar25);
      bVar40 = -(bVar11 == bVar25);
      bVar41 = -(bVar12 == bVar25);
      bVar43 = -(bVar13 == bVar25);
      bVar44 = -(bVar14 == bVar25);
      bVar45 = -(bVar15 == bVar25);
      bVar46 = -(bVar16 == bVar25);
      bVar48 = -(bVar17 == bVar25);
      bVar49 = -(bVar18 == bVar25);
      bVar50 = -(bVar19 == bVar25);
      auVar28[1] = -(bVar5 == bVar24) | bVar33 | bVar55 | -((byte)((bVar5 & 0xdf) + 0xbf) < 0x1a);
      auVar28[0] = -(bVar4 == bVar24) | bVar30 | bVar51 | -((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a);
      auVar28[2] = -(bVar6 == bVar24) | bVar34 | bVar56 | -((byte)((bVar6 & 0xdf) + 0xbf) < 0x1a);
      auVar28[3] = -(bVar7 == bVar24) | bVar35 | bVar57 | -((byte)((bVar7 & 0xdf) + 0xbf) < 0x1a);
      auVar28[4] = -(bVar8 == bVar24) | bVar36 | bVar58 | -((byte)((bVar8 & 0xdf) + 0xbf) < 0x1a);
      auVar28[5] = -(bVar9 == bVar24) | bVar38 | bVar62 | -((byte)((bVar9 & 0xdf) + 0xbf) < 0x1a);
      auVar28[6] = -(bVar10 == bVar24) | bVar39 | bVar63 | -((byte)((bVar10 & 0xdf) + 0xbf) < 0x1a);
      auVar28[7] = -(bVar11 == bVar24) | bVar40 | bVar64 | -((byte)((bVar11 & 0xdf) + 0xbf) < 0x1a);
      auVar28[8] = -(bVar12 == bVar24) | bVar41 | bVar65 | -((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a);
      auVar28[9] = -(bVar13 == bVar24) | bVar43 | bVar69 | -((byte)((bVar13 & 0xdf) + 0xbf) < 0x1a);
      auVar28[10] = -(bVar14 == bVar24) | bVar44 | bVar70 | -((byte)((bVar14 & 0xdf) + 0xbf) < 0x1a)
      ;
      auVar28[0xb] = -(bVar15 == bVar24) | bVar45 | bVar71 |
                     -((byte)((bVar15 & 0xdf) + 0xbf) < 0x1a);
      auVar28[0xc] = -(bVar16 == bVar24) | bVar46 | bVar72 |
                     -((byte)((bVar16 & 0xdf) + 0xbf) < 0x1a);
      auVar28[0xd] = -(bVar17 == bVar24) | bVar48 | bVar76 |
                     -((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a);
      auVar28[0xe] = -(bVar18 == bVar24) | bVar49 | bVar77 |
                     -((byte)((bVar18 & 0xdf) + 0xbf) < 0x1a);
      auVar28[0xf] = -(bVar19 == bVar24) | bVar50 | bVar78 |
                     -((byte)((bVar19 & 0xdf) + 0xbf) < 0x1a);
      iVar53 = NEON_uminv(auVar28,4);
      puVar23 = puVar22;
      if (iVar53 != -1) break;
      param_5 = param_5 - 0x10;
      param_4 = param_4 + 0x10;
      uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar35,bVar34) << 0x10) >> 8),bVar30) & 0xffffff3f;
      uVar32 = CONCAT22((short)(uVar31 >> 0x10),CONCAT11(bVar33,(char)uVar31)) & 0xffff3fff;
      uVar31 = CONCAT13((char)(uVar32 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar32)) &
               0x3f3fffff;
      uVar32 = CONCAT31((int3)(((uint)CONCAT11(bVar40,bVar39) << 0x10) >> 8),bVar36) & 0xffffff3f;
      uVar37 = CONCAT22((short)(uVar32 >> 0x10),CONCAT11(bVar38,(char)uVar32)) & 0xffff3fff;
      uVar32 = CONCAT13((char)(uVar37 >> 0x18),CONCAT12((char)(uVar32 >> 0x10),(short)uVar37)) &
               0x3f3fffff;
      uVar37 = CONCAT31((int3)(((uint)CONCAT11(bVar45,bVar44) << 0x10) >> 8),bVar41) & 0xffffff3f;
      uVar42 = CONCAT22((short)(uVar37 >> 0x10),CONCAT11(bVar43,(char)uVar37)) & 0xffff3fff;
      uVar37 = CONCAT13((char)(uVar42 >> 0x18),CONCAT12((char)(uVar37 >> 0x10),(short)uVar42)) &
               0x3f3fffff;
      uVar47 = CONCAT31((int3)(((uint)CONCAT11(bVar50,bVar49) << 0x10) >> 8),bVar46) & 0xffffff3f;
      uVar42 = CONCAT22((short)(uVar47 >> 0x10),CONCAT11(bVar48,(char)uVar47)) & 0xffff3fff;
      uVar42 = CONCAT13((char)(uVar42 >> 0x18),CONCAT12((char)(uVar47 >> 0x10),(short)uVar42)) &
               0x3f3fffff;
      uVar47 = CONCAT31((int3)(((uint)CONCAT11(-(bVar7 == bVar24) & ~bVar35,
                                               -(bVar6 == bVar24) & ~bVar34) << 0x10) >> 8),
                        -(bVar4 == bVar24) & ~bVar30) & 0xffffff3e;
      uVar52 = CONCAT22((short)(uVar47 >> 0x10),CONCAT11(-(bVar5 == bVar24) & ~bVar33,(char)uVar47))
               & 0xffff3eff;
      uVar47 = CONCAT13((char)(uVar52 >> 0x18),CONCAT12((char)(uVar47 >> 0x10),(short)uVar52)) &
               0x3e3effff;
      uVar52 = CONCAT31((int3)(((uint)CONCAT11(-(bVar11 == bVar24) & ~bVar40,
                                               -(bVar10 == bVar24) & ~bVar39) << 0x10) >> 8),
                        -(bVar8 == bVar24) & ~bVar36) & 0xffffff3e;
      uVar59 = CONCAT22((short)(uVar52 >> 0x10),CONCAT11(-(bVar9 == bVar24) & ~bVar38,(char)uVar52))
               & 0xffff3eff;
      uVar52 = CONCAT13((char)(uVar59 >> 0x18),CONCAT12((char)(uVar52 >> 0x10),(short)uVar59)) &
               0x3e3effff;
      uVar59 = CONCAT31((int3)(((uint)CONCAT11(-(bVar15 == bVar24) & ~bVar45,
                                               -(bVar14 == bVar24) & ~bVar44) << 0x10) >> 8),
                        -(bVar12 == bVar24) & ~bVar41) & 0xffffff3e;
      uVar66 = CONCAT22((short)(uVar59 >> 0x10),CONCAT11(-(bVar13 == bVar24) & ~bVar43,(char)uVar59)
                       ) & 0xffff3eff;
      uVar59 = CONCAT13((char)(uVar66 >> 0x18),CONCAT12((char)(uVar59 >> 0x10),(short)uVar66)) &
               0x3e3effff;
      uVar73 = CONCAT31((int3)(((uint)CONCAT11(-(bVar19 == bVar24) & ~bVar50,
                                               -(bVar18 == bVar24) & ~bVar49) << 0x10) >> 8),
                        -(bVar16 == bVar24) & ~bVar46) & 0xffffff3e;
      uVar66 = CONCAT22((short)(uVar73 >> 0x10),CONCAT11(-(bVar17 == bVar24) & ~bVar48,(char)uVar73)
                       ) & 0xffff3eff;
      uVar66 = CONCAT13((char)(uVar66 >> 0x18),CONCAT12((char)(uVar73 >> 0x10),(short)uVar66)) &
               0x3e3effff;
      auVar27[0] = (byte)uVar31 | (byte)uVar47 |
                   bVar4 + 0xbf & -((byte)(bVar4 + 0xbf) < 0x1a) |
                   bVar4 + 0xb9 & -((byte)(bVar4 + 0x9f) < 0x1a) | bVar4 + 4 & bVar51;
      auVar27[1] = (byte)(uVar31 >> 8) | (byte)(uVar47 >> 8) |
                   bVar5 + 0xbf & -((byte)(bVar5 + 0xbf) < 0x1a) |
                   bVar5 + 0xb9 & -((byte)(bVar5 + 0x9f) < 0x1a) | bVar5 + 4 & bVar55;
      auVar27[2] = (byte)(uVar31 >> 0x10) | (byte)(uVar47 >> 0x10) |
                   bVar6 + 0xbf & -((byte)(bVar6 + 0xbf) < 0x1a) |
                   bVar6 + 0xb9 & -((byte)(bVar6 + 0x9f) < 0x1a) | bVar6 + 4 & bVar56;
      auVar27[3] = (byte)(uVar31 >> 0x18) | (byte)(uVar47 >> 0x18) |
                   bVar7 + 0xbf & -((byte)(bVar7 + 0xbf) < 0x1a) |
                   bVar7 + 0xb9 & -((byte)(bVar7 + 0x9f) < 0x1a) | bVar7 + 4 & bVar57;
      auVar27[4] = (byte)uVar32 | (byte)uVar52 |
                   bVar8 + 0xbf & -((byte)(bVar8 + 0xbf) < 0x1a) |
                   bVar8 + 0xb9 & -((byte)(bVar8 + 0x9f) < 0x1a) | bVar8 + 4 & bVar58;
      auVar27[5] = (byte)(uVar32 >> 8) | (byte)(uVar52 >> 8) |
                   bVar9 + 0xbf & -((byte)(bVar9 + 0xbf) < 0x1a) |
                   bVar9 + 0xb9 & -((byte)(bVar9 + 0x9f) < 0x1a) | bVar9 + 4 & bVar62;
      auVar27[6] = (byte)(uVar32 >> 0x10) | (byte)(uVar52 >> 0x10) |
                   bVar10 + 0xbf & -((byte)(bVar10 + 0xbf) < 0x1a) |
                   bVar10 + 0xb9 & -((byte)(bVar10 + 0x9f) < 0x1a) | bVar10 + 4 & bVar63;
      auVar27[7] = (byte)(uVar32 >> 0x18) | (byte)(uVar52 >> 0x18) |
                   bVar11 + 0xbf & -((byte)(bVar11 + 0xbf) < 0x1a) |
                   bVar11 + 0xb9 & -((byte)(bVar11 + 0x9f) < 0x1a) | bVar11 + 4 & bVar64;
      auVar27[8] = (byte)uVar37 | (byte)uVar59 |
                   bVar12 + 0xbf & -((byte)(bVar12 + 0xbf) < 0x1a) |
                   bVar12 + 0xb9 & -((byte)(bVar12 + 0x9f) < 0x1a) | bVar12 + 4 & bVar65;
      auVar27[9] = (byte)(uVar37 >> 8) | (byte)(uVar59 >> 8) |
                   bVar13 + 0xbf & -((byte)(bVar13 + 0xbf) < 0x1a) |
                   bVar13 + 0xb9 & -((byte)(bVar13 + 0x9f) < 0x1a) | bVar13 + 4 & bVar69;
      auVar27[10] = (byte)(uVar37 >> 0x10) | (byte)(uVar59 >> 0x10) |
                    bVar14 + 0xbf & -((byte)(bVar14 + 0xbf) < 0x1a) |
                    bVar14 + 0xb9 & -((byte)(bVar14 + 0x9f) < 0x1a) | bVar14 + 4 & bVar70;
      auVar27[0xb] = (byte)(uVar37 >> 0x18) | (byte)(uVar59 >> 0x18) |
                     bVar15 + 0xbf & -((byte)(bVar15 + 0xbf) < 0x1a) |
                     bVar15 + 0xb9 & -((byte)(bVar15 + 0x9f) < 0x1a) | bVar15 + 4 & bVar71;
      auVar27[0xc] = (byte)uVar42 | (byte)uVar66 |
                     bVar16 + 0xbf & -((byte)(bVar16 + 0xbf) < 0x1a) |
                     bVar16 + 0xb9 & -((byte)(bVar16 + 0x9f) < 0x1a) | bVar16 + 4 & bVar72;
      auVar27[0xd] = (byte)(uVar42 >> 8) | (byte)(uVar66 >> 8) |
                     bVar17 + 0xbf & -((byte)(bVar17 + 0xbf) < 0x1a) |
                     bVar17 + 0xb9 & -((byte)(bVar17 + 0x9f) < 0x1a) | bVar17 + 4 & bVar76;
      auVar27[0xe] = (byte)(uVar42 >> 0x10) | (byte)(uVar66 >> 0x10) |
                     bVar18 + 0xbf & -((byte)(bVar18 + 0xbf) < 0x1a) |
                     bVar18 + 0xb9 & -((byte)(bVar18 + 0x9f) < 0x1a) | bVar18 + 4 & bVar77;
      auVar27[0xf] = (byte)(uVar42 >> 0x18) | (byte)(uVar66 >> 0x18) |
                     bVar19 + 0xbf & -((byte)(bVar19 + 0xbf) < 0x1a) |
                     bVar19 + 0xb9 & -((byte)(bVar19 + 0x9f) < 0x1a) | bVar19 + 4 & bVar78;
      auVar28 = NEON_rev32(auVar27,1);
      iVar53 = (uint)(auVar28[2] & 0x3f) << 0x14;
      iVar60 = (uint)(auVar28[6] & 0x3f) << 0x14;
      iVar67 = (uint)(auVar28[10] & 0x3f) << 0x14;
      iVar74 = (uint)(auVar28[0xe] & 0x3f) << 0x14;
      uVar26 = CONCAT14(auVar28[4],(uint)(auVar28[0] & 0x3f)) & 0x3fffffffff;
      iVar54 = (uint)(auVar28[1] & 0x3f) << 0xe;
      iVar61 = (uint)(auVar28[5] & 0x3f) << 0xe;
      iVar68 = (uint)(auVar28[9] & 0x3f) << 0xe;
      iVar75 = (uint)(auVar28[0xd] & 0x3f) << 0xe;
      auVar29[5] = (byte)((uint)iVar61 >> 8) | (byte)(uVar26 >> 0x20);
      auVar29[9] = (byte)((uint)iVar68 >> 8) | auVar28[8] & 0x3f;
      auVar29[0xd] = (byte)((uint)iVar75 >> 8) | auVar28[0xc] & 0x3f;
      auVar29._0_5_ =
           (uint5)CONCAT12((byte)((uint)iVar53 >> 0x18) |
                           (byte)(((uint)(auVar28[3] & 0x3f) << 0x1a) >> 0x18),
                           CONCAT11((byte)((uint)iVar53 >> 0x10) | (byte)((uint)iVar54 >> 0x10),
                                    (byte)((uint)iVar54 >> 8) | (byte)uVar26)) << 8;
      auVar29[6] = (byte)((uint)iVar60 >> 0x10) | (byte)((uint)iVar61 >> 0x10);
      auVar29[7] = (byte)((uint)iVar60 >> 0x18) |
                   (byte)(((uint)(auVar28[7] & 0x3f) << 0x1a) >> 0x18);
      auVar29[8] = 0;
      auVar29[10] = (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar68 >> 0x10);
      auVar29[0xb] = (byte)((uint)iVar67 >> 0x18) |
                     (byte)(((uint)(auVar28[0xb] & 0x3f) << 0x1a) >> 0x18);
      auVar29[0xc] = 0;
      auVar29[0xe] = (byte)((uint)iVar74 >> 0x10) | (byte)((uint)iVar75 >> 0x10);
      auVar29[0xf] = (byte)((uint)iVar74 >> 0x18) |
                     (byte)(((uint)(auVar28[0xf] & 0x3f) << 0x1a) >> 0x18);
      auVar2._8_8_ = uVar21;
      auVar2._0_8_ = uVar20;
      auVar28 = a64_TBL(ZEXT816(0),auVar29,auVar2);
      puVar23 = (undefined8 *)((long)puVar22 + 0xc);
      puVar22[1] = auVar28._8_8_;
      *puVar22 = auVar28._0_8_;
      puVar22 = puVar23;
    } while (0x18 < param_5);
  }
  do {
    if (param_5 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)puVar23 - (long)param_2;
      return auVar3 << 0x40;
    }
    cVar1 = *(char *)((long)param_1 + (ulong)*param_4 + 10);
    if (cVar1 < '\0') {
      if (cVar1 != -2) {
LAB__text__003d5fe8:
        *param_1 = -0x54;
        return ZEXT816(0x54);
      }
    }
    else {
      iVar53 = *param_1;
      *param_1 = iVar53 + 1;
      *(char *)((long)param_1 + (long)iVar53 + 4) = cVar1;
    }
    param_5 = param_5 - 1;
    param_4 = param_4 + 1;
    if (3 < *param_1) {
      uVar31 = (int)*(char *)((long)param_1 + 5) << 0xc | (int)(char)param_1[1] << 0x12 |
               (int)*(char *)((long)param_1 + 6) << 6 | (int)*(char *)((long)param_1 + 7);
      *(char *)((long)puVar23 + 2) = (char)uVar31;
      *(char *)puVar23 = (char)(uVar31 >> 0x10);
      *(char *)((long)puVar23 + 1) = (char)(uVar31 >> 8);
      puVar23 = (undefined8 *)((long)puVar23 + 3);
      *param_1 = 0;
    }
  } while( true );
}


