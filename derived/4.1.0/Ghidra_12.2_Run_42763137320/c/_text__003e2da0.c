/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e2da0; name: FUN_.text__003e2da0
 */


void * FUN__text__003e2da0(undefined8 *param_1,int param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  void *pvVar9;
  char cVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined6 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
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
  byte bVar41;
  byte bVar42;
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
  
  if (param_1 != (undefined8 *)0x0) {
    cVar10 = (char)param_2;
    for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
      Hint_Prefetch(param_1 + 4,0,0,0);
      uVar3 = param_1[1];
      uVar14 = *param_1;
      uVar6 = param_1[3];
      uVar5 = param_1[2];
      bVar37 = -((char)uVar5 == cVar10);
      bVar38 = -((char)((ulong)uVar5 >> 8) == cVar10);
      bVar39 = -((char)((ulong)uVar5 >> 0x10) == cVar10);
      bVar40 = -((char)((ulong)uVar5 >> 0x18) == cVar10);
      bVar41 = -((char)((ulong)uVar5 >> 0x20) == cVar10);
      bVar42 = -((char)((ulong)uVar5 >> 0x28) == cVar10);
      bVar43 = -((char)((ulong)uVar5 >> 0x30) == cVar10);
      bVar44 = -((char)((ulong)uVar5 >> 0x38) == cVar10);
      bVar45 = -((char)uVar6 == cVar10);
      bVar46 = -((char)((ulong)uVar6 >> 8) == cVar10);
      bVar47 = -((char)((ulong)uVar6 >> 0x10) == cVar10);
      bVar48 = -((char)((ulong)uVar6 >> 0x18) == cVar10);
      bVar49 = -((char)((ulong)uVar6 >> 0x20) == cVar10);
      bVar50 = -((char)((ulong)uVar6 >> 0x28) == cVar10);
      bVar51 = -((char)((ulong)uVar6 >> 0x30) == cVar10);
      bVar52 = -((char)((ulong)uVar6 >> 0x38) == cVar10);
      bVar21 = -((char)uVar14 == cVar10);
      bVar22 = -((char)((ulong)uVar14 >> 8) == cVar10);
      bVar23 = -((char)((ulong)uVar14 >> 0x10) == cVar10);
      bVar24 = -((char)((ulong)uVar14 >> 0x18) == cVar10);
      bVar25 = -((char)((ulong)uVar14 >> 0x20) == cVar10);
      bVar26 = -((char)((ulong)uVar14 >> 0x28) == cVar10);
      bVar27 = -((char)((ulong)uVar14 >> 0x30) == cVar10);
      bVar28 = -((char)((ulong)uVar14 >> 0x38) == cVar10);
      bVar29 = -((char)uVar3 == cVar10);
      bVar30 = -((char)((ulong)uVar3 >> 8) == cVar10);
      bVar31 = -((char)((ulong)uVar3 >> 0x10) == cVar10);
      bVar32 = -((char)((ulong)uVar3 >> 0x18) == cVar10);
      bVar33 = -((char)((ulong)uVar3 >> 0x20) == cVar10);
      bVar34 = -((char)((ulong)uVar3 >> 0x28) == cVar10);
      bVar35 = -((char)((ulong)uVar3 >> 0x30) == cVar10);
      bVar36 = -((char)((ulong)uVar3 >> 0x38) == cVar10);
      auVar7[1] = bVar38 | bVar22;
      auVar7[0] = bVar37 | bVar21;
      auVar7[2] = bVar39 | bVar23;
      auVar7[3] = bVar40 | bVar24;
      auVar7[4] = bVar41 | bVar25;
      auVar7[5] = bVar42 | bVar26;
      auVar7[6] = bVar43 | bVar27;
      auVar7[7] = bVar44 | bVar28;
      auVar7[8] = bVar45 | bVar29;
      auVar7[9] = bVar46 | bVar30;
      auVar7[10] = bVar47 | bVar31;
      auVar7[0xb] = bVar48 | bVar32;
      auVar7[0xc] = bVar49 | bVar33;
      auVar7[0xd] = bVar50 | bVar34;
      auVar7[0xe] = bVar51 | bVar35;
      auVar7[0xf] = bVar52 | bVar36;
      iVar8 = NEON_umaxv(auVar7,4);
      if (iVar8 != 0) {
        auVar1[1] = bVar22;
        auVar1[0] = bVar21;
        auVar1[2] = bVar23;
        auVar1[3] = bVar24;
        auVar1[4] = bVar25;
        auVar1[5] = bVar26;
        auVar1[6] = bVar27;
        auVar1[7] = bVar28;
        auVar1[8] = bVar29;
        auVar1[9] = bVar30;
        auVar1[10] = bVar31;
        auVar1[0xb] = bVar32;
        auVar1[0xc] = bVar33;
        auVar1[0xd] = bVar34;
        auVar1[0xe] = bVar35;
        auVar1[0xf] = bVar36;
        iVar8 = NEON_umaxv(auVar1,4);
        auVar19._0_4_ = -(uint)(iVar8 == 0);
        auVar19._4_4_ = auVar19._0_4_;
        auVar19._8_4_ = auVar19._0_4_;
        auVar19._12_4_ = auVar19._0_4_;
        auVar2[1] = bVar22;
        auVar2[0] = bVar21;
        auVar2[2] = bVar23;
        auVar2[3] = bVar24;
        auVar2[4] = bVar25;
        auVar2[5] = bVar26;
        auVar2[6] = bVar27;
        auVar2[7] = bVar28;
        auVar2[8] = bVar29;
        auVar2[9] = bVar30;
        auVar2[10] = bVar31;
        auVar2[0xb] = bVar32;
        auVar2[0xc] = bVar33;
        auVar2[0xd] = bVar34;
        auVar2[0xe] = bVar35;
        auVar2[0xf] = bVar36;
        auVar4[1] = bVar38;
        auVar4[0] = bVar37;
        auVar4[2] = bVar39;
        auVar4[3] = bVar40;
        auVar4[4] = bVar41;
        auVar4[5] = bVar42;
        auVar4[6] = bVar43;
        auVar4[7] = bVar44;
        auVar4[8] = bVar45;
        auVar4[9] = bVar46;
        auVar4[10] = bVar47;
        auVar4[0xb] = bVar48;
        auVar4[0xc] = bVar49;
        auVar4[0xd] = bVar50;
        auVar4[0xe] = bVar51;
        auVar4[0xf] = bVar52;
        auVar20[1] = bVar22;
        auVar20[0] = bVar21;
        auVar20[2] = bVar23;
        auVar20[3] = bVar24;
        auVar20[4] = bVar25;
        auVar20[5] = bVar26;
        auVar20[6] = bVar27;
        auVar20[7] = bVar28;
        auVar20[8] = bVar29;
        auVar20[9] = bVar30;
        auVar20[10] = bVar31;
        auVar20[0xb] = bVar32;
        auVar20[0xc] = bVar33;
        auVar20[0xd] = bVar34;
        auVar20[0xe] = bVar35;
        auVar20[0xf] = bVar36;
        auVar20 = auVar20 ^ (auVar2 ^ auVar4) & auVar19;
        uVar15 = CONCAT17((char)(auVar20._14_2_ >> 4),
                          CONCAT16((char)(auVar20._12_2_ >> 4),
                                   CONCAT15((char)(auVar20._10_2_ >> 4),
                                            CONCAT14((char)(auVar20._8_2_ >> 4),
                                                     CONCAT13((char)(auVar20._6_2_ >> 4),
                                                              CONCAT12((char)(auVar20._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar20._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar20._0_2_
                                                                                      >> 4))))))));
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        return (void *)((long)param_1 +
                       ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2) +
                       (ulong)(iVar8 == 0) * 0x10);
      }
      param_1 = param_1 + 4;
    }
    if (0xf < param_3) {
      uVar3 = param_1[1];
      uVar14 = *param_1;
      uVar11 = CONCAT11(-((char)((ulong)uVar14 >> 8) == cVar10),-((char)uVar14 == cVar10));
      uVar12 = CONCAT13(-((char)((ulong)uVar14 >> 0x18) == cVar10),
                        CONCAT12(-((char)((ulong)uVar14 >> 0x10) == cVar10),uVar11));
      uVar13 = CONCAT15(-((char)((ulong)uVar14 >> 0x28) == cVar10),
                        CONCAT14(-((char)((ulong)uVar14 >> 0x20) == cVar10),uVar12));
      uVar14 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) == cVar10),
                        CONCAT16(-((char)((ulong)uVar14 >> 0x30) == cVar10),uVar13));
      auVar16._0_10_ =
           CONCAT19(-((char)((ulong)uVar3 >> 8) == cVar10),CONCAT18(-((char)uVar3 == cVar10),uVar14)
                   );
      auVar16[10] = -((char)((ulong)uVar3 >> 0x10) == cVar10);
      auVar16[0xb] = -((char)((ulong)uVar3 >> 0x18) == cVar10);
      auVar17[0xc] = -((char)((ulong)uVar3 >> 0x20) == cVar10);
      auVar17._0_12_ = auVar16;
      auVar17[0xd] = -((char)((ulong)uVar3 >> 0x28) == cVar10);
      auVar18[0xe] = -((char)((ulong)uVar3 >> 0x30) == cVar10);
      auVar18._0_14_ = auVar17;
      auVar18[0xf] = -((char)((ulong)uVar3 >> 0x38) == cVar10);
      iVar8 = NEON_umaxv(auVar18,4);
      if (iVar8 != 0) {
        uVar15 = CONCAT17((char)(auVar18._14_2_ >> 4),
                          CONCAT16((char)(auVar17._12_2_ >> 4),
                                   CONCAT15((char)(auVar16._10_2_ >> 4),
                                            CONCAT14((char)((unkuint10)auVar16._0_10_ >> 0x44),
                                                     CONCAT13((char)((ulong)uVar14 >> 0x34),
                                                              CONCAT12((char)((uint6)uVar13 >> 0x24)
                                                                       ,CONCAT11((char)((uint)uVar12
                                                                                       >> 0x14),
                                                                                 (char)(uVar11 >> 4)
                                                                                )))))));
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        return (void *)((long)param_1 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
      }
      param_1 = param_1 + 2;
      param_3 = param_3 - 0x10;
    }
    if (param_3 != 0) {
      pvVar9 = memchr(param_1,param_2,param_3);
      return pvVar9;
    }
  }
  return (void *)0x0;
}


