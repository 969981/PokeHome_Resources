/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e4220; name: FUN_.text__003e4220
 */


byte * FUN__text__003e4220(long *param_1,long *param_2,byte *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  ulong uVar33;
  ulong uVar32;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  ulong uVar41;
  char cVar49;
  ulong uVar42;
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
  
  if (param_1 == (long *)0x0 && param_2 == (long *)0x0) {
    if (param_4 < 0x10) {
      uVar11 = 0;
      if (param_4 != 0) {
        do {
          if (0x20 < param_3[uVar11] || (1L << ((ulong)param_3[uVar11] & 0x3f) & 0x100002600U) == 0)
          goto LAB__text__003e42d8;
          uVar11 = uVar11 + 1;
        } while (param_4 != uVar11);
        uVar11 = param_4;
      }
LAB__text__003e42d8:
      return param_3 + uVar11;
    }
    pbVar9 = param_3;
    uVar11 = param_4;
    do {
      uVar2 = *(undefined8 *)(pbVar9 + 8);
      bVar22 = (byte)uVar2;
      bVar23 = (byte)((ulong)uVar2 >> 8);
      bVar24 = (byte)((ulong)uVar2 >> 0x10);
      bVar25 = (byte)((ulong)uVar2 >> 0x18);
      bVar26 = (byte)((ulong)uVar2 >> 0x20);
      bVar27 = (byte)((ulong)uVar2 >> 0x28);
      bVar28 = (byte)((ulong)uVar2 >> 0x30);
      bVar29 = (byte)((ulong)uVar2 >> 0x38);
      uVar2 = *(undefined8 *)pbVar9;
      bVar14 = (byte)uVar2;
      bVar15 = (byte)((ulong)uVar2 >> 8);
      bVar16 = (byte)((ulong)uVar2 >> 0x10);
      bVar17 = (byte)((ulong)uVar2 >> 0x18);
      bVar18 = (byte)((ulong)uVar2 >> 0x20);
      bVar19 = (byte)((ulong)uVar2 >> 0x28);
      bVar20 = (byte)((ulong)uVar2 >> 0x30);
      bVar21 = (byte)((ulong)uVar2 >> 0x38);
      bVar14 = ~(-(bVar14 == 10) | -(bVar14 == 0x20) | -((bVar14 & 0xfb) == 9));
      bVar15 = ~(-(bVar15 == 10) | -(bVar15 == 0x20) | -((bVar15 & 0xfb) == 9));
      bVar16 = ~(-(bVar16 == 10) | -(bVar16 == 0x20) | -((bVar16 & 0xfb) == 9));
      bVar17 = ~(-(bVar17 == 10) | -(bVar17 == 0x20) | -((bVar17 & 0xfb) == 9));
      bVar18 = ~(-(bVar18 == 10) | -(bVar18 == 0x20) | -((bVar18 & 0xfb) == 9));
      bVar19 = ~(-(bVar19 == 10) | -(bVar19 == 0x20) | -((bVar19 & 0xfb) == 9));
      bVar20 = ~(-(bVar20 == 10) | -(bVar20 == 0x20) | -((bVar20 & 0xfb) == 9));
      bVar21 = ~(-(bVar21 == 10) | -(bVar21 == 0x20) | -((bVar21 & 0xfb) == 9));
      bVar22 = ~(-(bVar22 == 10) | -(bVar22 == 0x20) | -((bVar22 & 0xfb) == 9));
      bVar23 = ~(-(bVar23 == 10) | -(bVar23 == 0x20) | -((bVar23 & 0xfb) == 9));
      bVar24 = ~(-(bVar24 == 10) | -(bVar24 == 0x20) | -((bVar24 & 0xfb) == 9));
      bVar25 = ~(-(bVar25 == 10) | -(bVar25 == 0x20) | -((bVar25 & 0xfb) == 9));
      bVar26 = ~(-(bVar26 == 10) | -(bVar26 == 0x20) | -((bVar26 & 0xfb) == 9));
      bVar27 = ~(-(bVar27 == 10) | -(bVar27 == 0x20) | -((bVar27 & 0xfb) == 9));
      bVar28 = ~(-(bVar28 == 10) | -(bVar28 == 0x20) | -((bVar28 & 0xfb) == 9));
      bVar29 = ~(-(bVar29 == 10) | -(bVar29 == 0x20) | -((bVar29 & 0xfb) == 9));
      auVar4[1] = bVar15;
      auVar4[0] = bVar14;
      auVar4[2] = bVar16;
      auVar4[3] = bVar17;
      auVar4[4] = bVar18;
      auVar4[5] = bVar19;
      auVar4[6] = bVar20;
      auVar4[7] = bVar21;
      auVar4[8] = bVar22;
      auVar4[9] = bVar23;
      auVar4[10] = bVar24;
      auVar4[0xb] = bVar25;
      auVar4[0xc] = bVar26;
      auVar4[0xd] = bVar27;
      auVar4[0xe] = bVar28;
      auVar4[0xf] = bVar29;
      iVar10 = NEON_umaxv(auVar4,4);
      if (iVar10 != 0) {
        uVar11 = CONCAT17((char)(CONCAT11(bVar29,bVar28) >> 4),
                          CONCAT16((char)(CONCAT11(bVar27,bVar26) >> 4),
                                   CONCAT15((char)(CONCAT11(bVar25,bVar24) >> 4),
                                            CONCAT14((char)(CONCAT11(bVar23,bVar22) >> 4),
                                                     CONCAT13((char)(CONCAT11(bVar21,bVar20) >> 4),
                                                              CONCAT12((char)(CONCAT11(bVar19,bVar18
                                                                                      ) >> 4),
                                                                       CONCAT11((char)(CONCAT11(
                                                  bVar17,bVar16) >> 4),
                                                  (char)(CONCAT11(bVar15,bVar14) >> 4))))))));
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        return pbVar9 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 2);
      }
      uVar11 = uVar11 - 0x10;
      pbVar9 = pbVar9 + 0x10;
    } while (0xf < uVar11);
    if ((param_4 & 0xf | 0x10) != 0x10) {
      uVar12 = 0;
      do {
        if (0x20 < pbVar9[uVar12] || (1L << ((ulong)pbVar9[uVar12] & 0x3f) & 0x100002600U) == 0) {
          return pbVar9 + uVar12;
        }
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      return param_3 + param_4;
    }
  }
  else {
    if (param_4 < 0x10) {
      if ((param_4 != 0) && (*param_3 - 9 < 0x18)) {
                    /* WARNING: Could not emulate address calculation at 0x003e4430 */
                    /* WARNING: Treating indirect jump as call */
        pbVar8 = (byte *)(*(code *)(&UNK__text__003e4404 +
                                   (ulong)*(byte *)((ulong)(*param_3 - 9) + 0x73ade8) * 4))();
        return pbVar8;
      }
      if (param_1 != (long *)0x0) {
        *param_1 = 0;
      }
      if (param_2 != (long *)0x0) {
        *param_2 = 0;
      }
      return param_3;
    }
    iVar10 = 0;
    lVar13 = 0;
    pbVar8 = param_3 + 0xf;
    uVar11 = param_4;
    do {
      pbVar9 = pbVar8;
      uVar41 = *(ulong *)(pbVar9 + -7);
      uVar12 = *(ulong *)(pbVar9 + -0xf);
      bVar14 = -((char)uVar12 == '\n');
      cVar34 = (char)(uVar12 >> 8);
      bVar15 = -(cVar34 == '\n');
      cVar35 = (char)(uVar12 >> 0x10);
      bVar16 = -(cVar35 == '\n');
      cVar36 = (char)(uVar12 >> 0x18);
      bVar17 = -(cVar36 == '\n');
      cVar37 = (char)(uVar12 >> 0x20);
      bVar18 = -(cVar37 == '\n');
      cVar38 = (char)(uVar12 >> 0x28);
      bVar19 = -(cVar38 == '\n');
      cVar39 = (char)(uVar12 >> 0x30);
      bVar20 = -(cVar39 == '\n');
      cVar40 = (char)(uVar12 >> 0x38);
      bVar21 = -(cVar40 == '\n');
      bVar22 = -((char)uVar41 == '\n');
      cVar43 = (char)(uVar41 >> 8);
      bVar23 = -(cVar43 == '\n');
      cVar44 = (char)(uVar41 >> 0x10);
      bVar24 = -(cVar44 == '\n');
      cVar45 = (char)(uVar41 >> 0x18);
      bVar25 = -(cVar45 == '\n');
      cVar46 = (char)(uVar41 >> 0x20);
      bVar26 = -(cVar46 == '\n');
      cVar47 = (char)(uVar41 >> 0x28);
      bVar27 = -(cVar47 == '\n');
      cVar48 = (char)(uVar41 >> 0x30);
      bVar28 = -(cVar48 == '\n');
      cVar49 = (char)(uVar41 >> 0x38);
      bVar29 = -(cVar49 == '\n');
      uVar32 = uVar12 & 0xfffffffffffffffb;
      uVar33 = CONCAT62((int6)(uVar32 >> 0x10),CONCAT11(cVar34,(char)uVar32)) & 0xfffffffffffffbff;
      uVar32 = CONCAT53((int5)(uVar33 >> 0x18),CONCAT12((char)(uVar32 >> 0x10),(short)uVar33)) &
               0xfffffffffffbffff;
      uVar33 = CONCAT44((int)(uVar32 >> 0x20),CONCAT13((char)(uVar33 >> 0x18),(int3)uVar32)) &
               0xfffffffffbffffff;
      uVar32 = CONCAT35((int3)(uVar33 >> 0x28),CONCAT14((char)(uVar32 >> 0x20),(int)uVar33)) &
               0xfffffffbffffffff;
      uVar33 = CONCAT26((short)(uVar32 >> 0x30),CONCAT15((char)(uVar33 >> 0x28),(int5)uVar32)) &
               0xfffffbffffffffff;
      uVar33 = CONCAT17((char)(uVar33 >> 0x38),CONCAT16((char)(uVar32 >> 0x30),(int6)uVar33)) &
               0xfbfbffffffffffff;
      uVar32 = uVar41 & 0xfffffffffffffffb;
      uVar42 = CONCAT62((int6)(uVar32 >> 0x10),CONCAT11(cVar43,(char)uVar32)) & 0xfffffffffffffbff;
      uVar32 = CONCAT53((int5)(uVar42 >> 0x18),CONCAT12((char)(uVar32 >> 0x10),(short)uVar42)) &
               0xfffffffffffbffff;
      uVar42 = CONCAT44((int)(uVar32 >> 0x20),CONCAT13((char)(uVar42 >> 0x18),(int3)uVar32)) &
               0xfffffffffbffffff;
      uVar32 = CONCAT35((int3)(uVar42 >> 0x28),CONCAT14((char)(uVar32 >> 0x20),(int)uVar42)) &
               0xfffffffbffffffff;
      uVar42 = CONCAT26((short)(uVar32 >> 0x30),CONCAT15((char)(uVar42 >> 0x28),(int5)uVar32)) &
               0xfffffbffffffffff;
      uVar32 = CONCAT17((char)(uVar42 >> 0x38),CONCAT16((char)(uVar32 >> 0x30),(int6)uVar42)) &
               0xfbfbffffffffffff;
      bVar50 = ~(-((char)uVar12 == ' ') | bVar14 | -((char)uVar33 == '\t'));
      bVar51 = ~(-(cVar34 == ' ') | bVar15 | -((char)(uVar33 >> 8) == '\t'));
      bVar52 = ~(-(cVar35 == ' ') | bVar16 | -((char)(uVar33 >> 0x10) == '\t'));
      bVar53 = ~(-(cVar36 == ' ') | bVar17 | -((char)(uVar33 >> 0x18) == '\t'));
      bVar54 = ~(-(cVar37 == ' ') | bVar18 | -((char)(uVar33 >> 0x20) == '\t'));
      bVar55 = ~(-(cVar38 == ' ') | bVar19 | -((char)(uVar33 >> 0x28) == '\t'));
      bVar56 = ~(-(cVar39 == ' ') | bVar20 | -((char)(uVar33 >> 0x30) == '\t'));
      bVar57 = ~(-(cVar40 == ' ') | bVar21 | -((char)(uVar33 >> 0x38) == '\t'));
      bVar58 = ~(-((char)uVar41 == ' ') | bVar22 | -((char)uVar32 == '\t'));
      bVar59 = ~(-(cVar43 == ' ') | bVar23 | -((char)(uVar32 >> 8) == '\t'));
      bVar60 = ~(-(cVar44 == ' ') | bVar24 | -((char)(uVar32 >> 0x10) == '\t'));
      bVar61 = ~(-(cVar45 == ' ') | bVar25 | -((char)(uVar32 >> 0x18) == '\t'));
      bVar62 = ~(-(cVar46 == ' ') | bVar26 | -((char)(uVar32 >> 0x20) == '\t'));
      bVar63 = ~(-(cVar47 == ' ') | bVar27 | -((char)(uVar32 >> 0x28) == '\t'));
      bVar64 = ~(-(cVar48 == ' ') | bVar28 | -((char)(uVar32 >> 0x30) == '\t'));
      bVar65 = ~(-(cVar49 == ' ') | bVar29 | -((char)(uVar32 >> 0x38) == '\t'));
      auVar6[1] = bVar51;
      auVar6[0] = bVar50;
      auVar6[2] = bVar52;
      auVar6[3] = bVar53;
      auVar6[4] = bVar54;
      auVar6[5] = bVar55;
      auVar6[6] = bVar56;
      auVar6[7] = bVar57;
      auVar6[8] = bVar58;
      auVar6[9] = bVar59;
      auVar6[10] = bVar60;
      auVar6[0xb] = bVar61;
      auVar6[0xc] = bVar62;
      auVar6[0xd] = bVar63;
      auVar6[0xe] = bVar64;
      auVar6[0xf] = bVar65;
      iVar30 = NEON_umaxv(auVar6,4);
      auVar5[1] = bVar15;
      auVar5[0] = bVar14;
      auVar5[2] = bVar16;
      auVar5[3] = bVar17;
      auVar5[4] = bVar18;
      auVar5[5] = bVar19;
      auVar5[6] = bVar20;
      auVar5[7] = bVar21;
      auVar5[8] = bVar22;
      auVar5[9] = bVar23;
      auVar5[10] = bVar24;
      auVar5[0xb] = bVar25;
      auVar5[0xc] = bVar26;
      auVar5[0xd] = bVar27;
      auVar5[0xe] = bVar28;
      auVar5[0xf] = bVar29;
      iVar31 = NEON_umaxv(auVar5,4);
      if (iVar30 != 0) {
        uVar11 = CONCAT17((char)(CONCAT11(bVar65,bVar64) >> 4),
                          CONCAT16((char)(CONCAT11(bVar63,bVar62) >> 4),
                                   CONCAT15((char)(CONCAT11(bVar61,bVar60) >> 4),
                                            CONCAT14((char)(CONCAT11(bVar59,bVar58) >> 4),
                                                     CONCAT13((char)(CONCAT11(bVar57,bVar56) >> 4),
                                                              CONCAT12((char)(CONCAT11(bVar55,bVar54
                                                                                      ) >> 4),
                                                                       CONCAT11((char)(CONCAT11(
                                                  bVar53,bVar52) >> 4),
                                                  (char)(CONCAT11(bVar51,bVar50) >> 4))))))));
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 2;
        if (iVar31 != 0) {
          lVar7 = -uVar11;
          uVar3 = *(undefined8 *)(lVar7 + 0x73ade0);
          uVar2 = *(undefined8 *)(lVar7 + 0x73add8);
          bVar14 = (byte)uVar2 & bVar14;
          bVar15 = (byte)((ulong)uVar2 >> 8) & bVar15;
          bVar16 = (byte)((ulong)uVar2 >> 0x10) & bVar16;
          bVar17 = (byte)((ulong)uVar2 >> 0x18) & bVar17;
          bVar18 = (byte)((ulong)uVar2 >> 0x20) & bVar18;
          bVar19 = (byte)((ulong)uVar2 >> 0x28) & bVar19;
          bVar20 = (byte)((ulong)uVar2 >> 0x30) & bVar20;
          bVar21 = (byte)((ulong)uVar2 >> 0x38) & bVar21;
          bVar22 = (byte)uVar3 & bVar22;
          bVar23 = (byte)((ulong)uVar3 >> 8) & bVar23;
          bVar24 = (byte)((ulong)uVar3 >> 0x10) & bVar24;
          bVar25 = (byte)((ulong)uVar3 >> 0x18) & bVar25;
          bVar26 = (byte)((ulong)uVar3 >> 0x20) & bVar26;
          bVar27 = (byte)((ulong)uVar3 >> 0x28) & bVar27;
          bVar28 = (byte)((ulong)uVar3 >> 0x30) & bVar28;
          bVar29 = (byte)((ulong)uVar3 >> 0x38) & bVar29;
          auVar1[1] = bVar15;
          auVar1[0] = bVar14;
          auVar1[2] = bVar16;
          auVar1[3] = bVar17;
          auVar1[4] = bVar18;
          auVar1[5] = bVar19;
          auVar1[6] = bVar20;
          auVar1[7] = bVar21;
          auVar1[8] = bVar22;
          auVar1[9] = bVar23;
          auVar1[10] = bVar24;
          auVar1[0xb] = bVar25;
          auVar1[0xc] = bVar26;
          auVar1[0xd] = bVar27;
          auVar1[0xe] = bVar28;
          auVar1[0xf] = bVar29;
          iVar30 = NEON_umaxv(auVar1,4);
          if (iVar30 != 0) {
            lVar13 = (long)pbVar9 -
                     ((ulong)LZCOUNT(CONCAT17((char)(CONCAT11(bVar29,bVar28) >> 4),
                                              CONCAT16((char)(CONCAT11(bVar27,bVar26) >> 4),
                                                       CONCAT15((char)(CONCAT11(bVar25,bVar24) >> 4)
                                                                ,CONCAT14((char)(CONCAT11(bVar23,
                                                  bVar22) >> 4),
                                                  CONCAT13((char)(CONCAT11(bVar21,bVar20) >> 4),
                                                           CONCAT12((char)(CONCAT11(bVar19,bVar18)
                                                                          >> 4),
                                                                    CONCAT11((char)(CONCAT11(bVar17,
                                                  bVar16) >> 4),(char)(CONCAT11(bVar15,bVar14) >> 4)
                                                  )))))))) >> 2);
            iVar10 = iVar10 + (char)(((((((((((((((-bVar15 - bVar14) - bVar16) - bVar17) - bVar18) -
                                              bVar19) - bVar20) - bVar21) - bVar22) - bVar23) -
                                         bVar24) - bVar25) - bVar26) - bVar27) - bVar28) - bVar29);
          }
        }
        if (param_1 != (long *)0x0) {
          *param_1 = (long)iVar10;
        }
        if (param_2 != (long *)0x0) {
          *param_2 = lVar13;
        }
        return pbVar9 + (uVar11 - 0xf);
      }
      if (iVar31 != 0) {
        uVar12 = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar14))))))) &
                 0x101010101010101;
        uVar33 = CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(bVar25,
                                                  CONCAT12(bVar24,CONCAT11(bVar23,bVar22))))))) &
                 0x101010101010101;
        lVar13 = (long)pbVar9 -
                 ((ulong)LZCOUNT(CONCAT17((char)(CONCAT11(bVar29,bVar28) >> 4),
                                          CONCAT16((char)(CONCAT11(bVar27,bVar26) >> 4),
                                                   CONCAT15((char)(CONCAT11(bVar25,bVar24) >> 4),
                                                            CONCAT14((char)(CONCAT11(bVar23,bVar22)
                                                                           >> 4),
                                                                     CONCAT13((char)(CONCAT11(bVar21
                                                  ,bVar20) >> 4),
                                                  CONCAT12((char)(CONCAT11(bVar19,bVar18) >> 4),
                                                           CONCAT11((char)(CONCAT11(bVar17,bVar16)
                                                                          >> 4),
                                                                    (char)(CONCAT11(bVar15,bVar14)
                                                                          >> 4))))))))) >> 2);
        iVar10 = iVar10 + (char)((char)uVar12 + (char)(uVar12 >> 8) + (char)(uVar12 >> 0x10) +
                                 (char)(uVar12 >> 0x18) + (char)(uVar12 >> 0x20) +
                                 (char)(uVar12 >> 0x28) + (char)(uVar12 >> 0x30) +
                                 (char)(uVar12 >> 0x38) + (char)uVar33 + (char)(uVar33 >> 8) +
                                 (char)(uVar33 >> 0x10) + (char)(uVar33 >> 0x18) +
                                 (char)(uVar33 >> 0x20) + (char)(uVar33 >> 0x28) +
                                 (char)(uVar33 >> 0x30) + (char)(uVar33 >> 0x38));
      }
      uVar11 = uVar11 - 0x10;
      pbVar8 = pbVar9 + 0x10;
    } while (0xf < uVar11);
    if ((param_4 & 0xf | 0x10) != 0x10) {
      if (pbVar9[1] - 9 < 0x18) {
                    /* WARNING: Could not emulate address calculation at 0x003e454c */
                    /* WARNING: Treating indirect jump as call */
        pbVar8 = (byte *)(*(code *)(&UNK__text__003e4524 +
                                   (ulong)*(byte *)((ulong)(pbVar9[1] - 9) + 0x73ae00) * 4))
                                   (param_3 + param_4);
        return pbVar8;
      }
    }
    pbVar9 = pbVar9 + 1;
    if (param_1 != (long *)0x0) {
      *param_1 = (long)iVar10;
    }
    if (param_2 != (long *)0x0) {
      *param_2 = lVar13;
      return pbVar9;
    }
  }
  return pbVar9;
}


