/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e9b80; name: FUN_.text__006e9b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__006e9b80(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  unkbyte9 *pVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined2 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined5 uVar40;
  float *pfVar41;
  long lVar42;
  long lVar43;
  float *pfVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  float fVar90;
  float fVar91;
  float fVar94;
  undefined8 uVar92;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  float fVar98;
  undefined8 uVar99;
  float fVar104;
  undefined8 uVar100;
  undefined8 uVar101;
  float fVar105;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar111;
  undefined8 uVar109;
  undefined8 uVar110;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined4 uVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar134;
  undefined8 uVar133;
  float fVar135;
  undefined8 uVar136;
  float fVar137;
  undefined8 uVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined8 uVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if (param_3 != 3) {
    lVar42 = *(long *)(*(long *)(param_2 + 0x238) + (ulong)param_3 * 8 + 0x340);
    if (lVar42 != 0) {
      pfVar44 = *(float **)(*(long *)(param_2 + 0x238) + 0x338);
      FUN__text__006ed020(param_1,*(undefined8 *)(lVar42 + 8),0x1ff);
      fVar16 = pfVar44[0xd];
      fVar12 = pfVar44[0xe];
      fVar130 = pfVar44[0xb];
      fVar13 = pfVar44[0xc];
      fVar126 = pfVar44[4];
      fVar127 = pfVar44[5];
      fVar129 = pfVar44[6];
      fVar128 = pfVar44[7];
      if (pfVar44[0xf] == 0.0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        fVar15 = pfVar44[0x11];
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        uStack_e8 = (ulong)(uint)pfVar44[0x12];
        local_f0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                            CONCAT16((char)((uint)fVar15 >> 0x10),
                                     CONCAT15((char)((uint)fVar15 >> 8),
                                              *(undefined5 *)(pfVar44 + 0x10))));
        FUN__text__006da6c0(&local_e0,&local_f0);
        fVar15 = (float)local_e0;
        fVar105 = (float)_DAT_00724920;
        fVar94 = (float)((ulong)_DAT_00724920 >> 0x20);
        fVar91 = (float)uRam0000000000724928;
        fVar114 = (float)((ulong)uRam0000000000724928 >> 0x20);
        fVar170 = (float)uRam0000000000724a08;
        fVar131 = (float)((ulong)uRam0000000000724a08 >> 0x20);
        fVar96 = (float)_DAT_00724a00;
        fVar168 = (float)((ulong)_DAT_00724a00 >> 0x20);
        fVar97 = (float)local_d0;
        fVar47 = (float)((ulong)local_e0 >> 0x20);
        fVar104 = (float)_DAT_00724ba0;
        fVar25 = (float)((ulong)_DAT_00724ba0 >> 0x20);
        fVar112 = (float)uRam0000000000724ba8;
        fVar108 = (float)((ulong)uRam0000000000724ba8 >> 0x20);
        fVar18 = (float)((ulong)local_d0 >> 0x20);
        fVar95 = (float)uStack_d8;
        fVar19 = (float)uStack_c8;
        fVar45 = (float)((ulong)uStack_d8 >> 0x20);
        fVar134 = (float)_DAT_00724930;
        fVar123 = (float)((ulong)_DAT_00724930 >> 0x20);
        fVar124 = (float)uRam0000000000724938;
        fVar125 = (float)((ulong)uRam0000000000724938 >> 0x20);
        fVar21 = (float)local_c0;
        fVar22 = (float)((ulong)local_c0 >> 0x20);
        fVar20 = (float)((ulong)uStack_c8 >> 0x20);
        fVar98 = (float)uStack_b8;
        fVar23 = (float)((ulong)uStack_b8 >> 0x20);
        fVar107 = fVar105 * fVar15 + fVar104 * fVar47 + fVar96 * fVar95 + fVar134 * fVar45 + 0.0;
        fVar111 = fVar94 * fVar15 + fVar25 * fVar47 + fVar168 * fVar95 + fVar123 * fVar45 + 0.0;
        fVar113 = fVar91 * fVar15 + fVar112 * fVar47 + fVar170 * fVar95 + fVar124 * fVar45 + 0.0;
        fVar116 = fVar114 * fVar15 + fVar108 * fVar47 + fVar131 * fVar95 + fVar125 * fVar45 + 0.0;
        fVar115 = fVar105 * fVar97 + fVar104 * fVar18 + fVar96 * fVar19 + fVar134 * fVar20 + 0.0;
        fVar117 = fVar94 * fVar97 + fVar25 * fVar18 + fVar168 * fVar19 + fVar123 * fVar20 + 0.0;
        fVar106 = fVar91 * fVar97 + fVar112 * fVar18 + fVar170 * fVar19 + fVar124 * fVar20 + 0.0;
        fVar90 = fVar114 * fVar97 + fVar108 * fVar18 + fVar131 * fVar19 + fVar125 * fVar20 + 0.0;
        pauVar1 = (undefined1 (*) [12])(param_2 + 0x360);
        uVar122 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x368) >> 0x20);
        fVar167 = (float)*(undefined8 *)*pauVar1;
        fVar169 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar97 = fVar105 * fVar21 + fVar104 * fVar22 + fVar96 * fVar98 + fVar134 * fVar23 + 0.0;
        fVar18 = fVar94 * fVar21 + fVar25 * fVar22 + fVar168 * fVar98 + fVar123 * fVar23 + 0.0;
        fVar20 = fVar91 * fVar21 + fVar112 * fVar22 + fVar170 * fVar98 + fVar124 * fVar23 + 0.0;
        fVar22 = fVar114 * fVar21 + fVar108 * fVar22 + fVar131 * fVar98 + fVar125 * fVar23 + 0.0;
        auVar39 = *(undefined1 (*) [12])(pfVar44 + 8);
        fVar15 = auVar39._0_4_ +
                 fVar105 * (float)local_b0 + fVar104 * local_b0._4_4_ + fVar96 * (float)uStack_a8 +
                 fVar134 * uStack_a8._4_4_;
        fVar47 = auVar39._4_4_ +
                 fVar94 * (float)local_b0 + fVar25 * local_b0._4_4_ + fVar168 * (float)uStack_a8 +
                 fVar123 * uStack_a8._4_4_;
        fVar95 = auVar39._8_4_ +
                 fVar91 * (float)local_b0 + fVar112 * local_b0._4_4_ + fVar170 * (float)uStack_a8 +
                 fVar124 * uStack_a8._4_4_;
        fVar45 = fVar114 * (float)local_b0 + fVar108 * local_b0._4_4_ + fVar131 * (float)uStack_a8 +
                 fVar125 * uStack_a8._4_4_ + 0.0;
        auVar4 = *(undefined1 (*) [16])(param_2 + 0x340);
        pVar3 = (unkbyte9 *)(param_2 + 0x350);
        uVar99 = *(undefined8 *)(param_2 + 0x358);
        uVar55 = (undefined1)((ulong)uVar99 >> 8);
        uVar57 = (undefined1)((ulong)uVar99 >> 0x10);
        uVar59 = (undefined1)((ulong)uVar99 >> 0x18);
        uVar61 = (undefined1)((ulong)uVar99 >> 0x20);
        uVar65 = (undefined1)((ulong)uVar99 >> 0x28);
        uVar67 = (undefined1)((ulong)uVar99 >> 0x30);
        uVar70 = (undefined1)((ulong)uVar99 >> 0x38);
        auVar102 = NEON_ext(auVar4,auVar4,8,1);
        fVar94 = auVar102._0_4_;
        auVar102[9] = uVar55;
        auVar102._0_9_ = *pVar3;
        auVar102[10] = uVar57;
        auVar102[0xb] = uVar59;
        auVar102[0xc] = uVar61;
        auVar102[0xd] = uVar65;
        auVar102[0xe] = uVar67;
        auVar102[0xf] = uVar70;
        auVar103[9] = uVar55;
        auVar103._0_9_ = *pVar3;
        auVar103[10] = uVar57;
        auVar103[0xb] = uVar59;
        auVar103[0xc] = uVar61;
        auVar103[0xd] = uVar65;
        auVar103[0xe] = uVar67;
        auVar103[0xf] = uVar70;
        auVar102 = NEON_ext(auVar102,auVar103,8,1);
        auVar30._12_4_ = uVar122;
        auVar30._0_12_ = *pauVar1;
        auVar31._12_4_ = uVar122;
        auVar31._0_12_ = *pauVar1;
        auVar103 = NEON_ext(auVar30,auVar31,8,1);
        fVar91 = auVar103._0_4_;
        uVar99 = NEON_fmov(0x3f800000,4);
        fVar170 = (float)*(undefined8 *)(param_2 + 0x378);
        fVar108 = auVar4._0_4_;
        fVar105 = auVar4._4_4_;
        fVar25 = (float)*(undefined8 *)pVar3;
        fVar104 = (float)((ulong)*(undefined8 *)pVar3 >> 0x20);
        fVar112 = auVar102._0_4_;
        fVar96 = (float)*(undefined8 *)(param_2 + 0x370);
        fVar168 = (float)((ulong)*(undefined8 *)(param_2 + 0x370) >> 0x20);
        fVar131 = (float)((ulong)uVar99 >> 0x20);
        uVar109 = CONCAT44(fVar105 * fVar97 + fVar104 * fVar18 + fVar169 * fVar20 + fVar168 * fVar22
                           ,fVar108 * fVar97 + fVar25 * fVar18 + fVar167 * fVar20 + fVar96 * fVar22)
        ;
        fVar114 = fVar94 * fVar97 + fVar112 * fVar18 + fVar91 * fVar20 + fVar170 * fVar22;
        uStack_f8 = CONCAT44(fVar107 * 0.0 + fVar111 * 0.0 + fVar113 * 0.0 + fVar131 * fVar116,
                             fVar94 * fVar107 + fVar112 * fVar111 + fVar91 * fVar113 +
                             fVar170 * fVar116);
        local_100 = CONCAT44(fVar105 * fVar107 + fVar104 * fVar111 + fVar169 * fVar113 +
                             fVar168 * fVar116,
                             fVar108 * fVar107 + fVar25 * fVar111 + fVar167 * fVar113 +
                             fVar96 * fVar116);
        fVar19 = fVar105 * fVar15 + fVar104 * fVar47 + fVar169 * fVar95 + fVar168 * fVar45;
        fVar21 = fVar94 * fVar15 + fVar112 * fVar47 + fVar91 * fVar95 + fVar170 * fVar45;
        fVar23 = fVar15 * 0.0 + fVar47 * 0.0 + fVar95 * 0.0 + fVar131 * fVar45;
        fVar98 = fVar108 * fVar115 + fVar25 * fVar117 + fVar167 * fVar106 + fVar96 * fVar90;
        fVar104 = fVar105 * fVar115 + fVar104 * fVar117 + fVar169 * fVar106 + fVar168 * fVar90;
        fVar105 = fVar94 * fVar115 + fVar112 * fVar117 + fVar91 * fVar106 + fVar170 * fVar90;
        fVar106 = fVar115 * 0.0 + fVar117 * 0.0 + fVar106 * 0.0 + fVar131 * fVar90;
        uStack_128 = SUB41(fVar21,0);
        uStack_127 = (undefined7)
                     (CONCAT17((char)((uint)fVar23 >> 0x18),
                               CONCAT16((char)((uint)fVar23 >> 0x10),
                                        CONCAT15((char)((uint)fVar23 >> 8),
                                                 CONCAT14(SUB41(fVar23,0),fVar21)))) >> 8);
        uVar99 = CONCAT17((char)((uint)fVar19 >> 0x18),
                          CONCAT16((char)((uint)fVar19 >> 0x10),
                                   CONCAT15((char)((uint)fVar19 >> 8),
                                            CONCAT14(SUB41(fVar19,0),
                                                     fVar108 * fVar15 + fVar25 * fVar47 +
                                                     fVar167 * fVar95 + fVar96 * fVar45))));
        uStack_118 = SUB41(fVar114,0);
        uStack_117 = (undefined7)
                     (CONCAT44(fVar97 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar131 * fVar22,fVar114
                              ) >> 8);
        fVar15 = pfVar44[3];
      }
      else {
        lVar43 = *(long *)(param_5 + 8);
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        fVar19 = (float)_DAT_00724930;
        fVar97 = *(float *)(lVar43 + 0x110) + fVar19;
        fVar21 = (float)((ulong)_DAT_00724930 >> 0x20);
        fVar18 = *(float *)(lVar43 + 0x114) + fVar21;
        fVar98 = (float)uRam0000000000724938;
        fVar15 = *(float *)(lVar43 + 0x118) + fVar98;
        fVar104 = (float)((ulong)uRam0000000000724938 >> 0x20);
        fVar47 = fVar104 + 0.0;
        uVar99 = CONCAT17((char)((uint)fVar47 >> 0x18),
                          CONCAT16((char)((uint)fVar47 >> 0x10),
                                   CONCAT15((char)((uint)fVar47 >> 8),
                                            CONCAT14(SUB41(fVar47,0),fVar15))));
        uStack_128 = SUB41(fVar15,0);
        uStack_127 = (undefined7)((ulong)uVar99 >> 8);
        fVar15 = pfVar44[0x11];
        uStack_e8 = (ulong)(uint)pfVar44[0x12];
        local_f0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                            CONCAT16((char)((uint)fVar15 >> 0x10),
                                     CONCAT15((char)((uint)fVar15 >> 8),
                                              *(undefined5 *)(pfVar44 + 0x10))));
        FUN__text__006da6c0(&local_e0,&local_f0);
        fVar15 = (float)_DAT_00724920;
        fVar47 = (float)((ulong)_DAT_00724920 >> 0x20);
        fVar95 = (float)uRam0000000000724928;
        fVar45 = (float)((ulong)uRam0000000000724928 >> 0x20);
        fVar20 = (float)_DAT_00724ba0;
        fVar22 = (float)((ulong)_DAT_00724ba0 >> 0x20);
        fVar23 = (float)uRam0000000000724ba8;
        fVar25 = (float)((ulong)uRam0000000000724ba8 >> 0x20);
        fVar169 = (float)uStack_b8;
        fVar170 = (float)((ulong)uStack_b8 >> 0x20);
        fVar116 = (float)local_c0;
        fVar168 = (float)((ulong)local_c0 >> 0x20);
        fVar91 = (float)local_d0;
        fVar107 = (float)((ulong)local_d0 >> 0x20);
        fVar112 = (float)_DAT_00724a00;
        fVar108 = (float)((ulong)_DAT_00724a00 >> 0x20);
        fVar115 = (float)uRam0000000000724a08;
        fVar117 = (float)((ulong)uRam0000000000724a08 >> 0x20);
        fVar111 = (float)uStack_c8;
        fVar113 = (float)((ulong)uStack_c8 >> 0x20);
        fVar114 = pfVar44[8];
        fVar96 = pfVar44[9];
        fVar167 = pfVar44[10];
        fVar105 = fVar15 * (float)local_e0 + fVar20 * local_e0._4_4_ + fVar112 * (float)uStack_d8 +
                  fVar19 * uStack_d8._4_4_ + 0.0;
        fVar106 = fVar47 * (float)local_e0 + fVar22 * local_e0._4_4_ + fVar108 * (float)uStack_d8 +
                  fVar21 * uStack_d8._4_4_ + 0.0;
        fVar90 = fVar95 * (float)local_e0 + fVar23 * local_e0._4_4_ + fVar115 * (float)uStack_d8 +
                 fVar98 * uStack_d8._4_4_ + 0.0;
        fVar94 = fVar45 * (float)local_e0 + fVar25 * local_e0._4_4_ + fVar117 * (float)uStack_d8 +
                 fVar104 * uStack_d8._4_4_ + 0.0;
        fVar131 = fVar15 * fVar91 + fVar20 * fVar107 + fVar112 * fVar111 + fVar19 * fVar113 + 0.0;
        fVar134 = fVar47 * fVar91 + fVar22 * fVar107 + fVar108 * fVar111 + fVar21 * fVar113 + 0.0;
        fVar123 = fVar95 * fVar91 + fVar23 * fVar107 + fVar115 * fVar111 + fVar98 * fVar113 + 0.0;
        fVar124 = fVar45 * fVar91 + fVar25 * fVar107 + fVar117 * fVar111 + fVar104 * fVar113 + 0.0;
        fVar107 = fVar15 * fVar116 + fVar20 * fVar168 + fVar112 * fVar169 + fVar19 * fVar170 + 0.0;
        fVar111 = fVar47 * fVar116 + fVar22 * fVar168 + fVar108 * fVar169 + fVar21 * fVar170 + 0.0;
        fVar113 = fVar95 * fVar116 + fVar23 * fVar168 + fVar115 * fVar169 + fVar98 * fVar170 + 0.0;
        fVar116 = fVar45 * fVar116 + fVar25 * fVar168 + fVar117 * fVar169 + fVar104 * fVar170 + 0.0;
        fVar169 = (float)CONCAT71(uStack_127,uStack_128);
        fVar170 = (float)((ulong)uVar99 >> 0x20);
        fVar168 = (float)(CONCAT17((char)((uint)fVar18 >> 0x18),
                                   CONCAT16((char)((uint)fVar18 >> 0x10),
                                            CONCAT15((char)((uint)fVar18 >> 8),
                                                     CONCAT14(SUB41(fVar18,0),fVar97)))) >> 0x20);
        local_100 = CONCAT44(fVar47 * fVar105 + fVar22 * fVar106 + fVar108 * fVar90 +
                             fVar168 * fVar94,
                             fVar15 * fVar105 + fVar20 * fVar106 + fVar112 * fVar90 +
                             fVar97 * fVar94);
        uStack_f8 = CONCAT44(fVar45 * fVar105 + fVar25 * fVar106 + fVar117 * fVar90 +
                             fVar170 * fVar94,
                             fVar95 * fVar105 + fVar23 * fVar106 + fVar115 * fVar90 +
                             fVar169 * fVar94);
        fVar90 = fVar15 * (float)local_b0 + fVar20 * local_b0._4_4_ + fVar112 * (float)uStack_a8 +
                 fVar19 * uStack_a8._4_4_ +
                 fVar96 * *(float *)(lVar43 + 0xc4) + *(float *)(lVar43 + 0xc0) * fVar114 +
                 *(float *)(lVar43 + 200) * fVar167;
        fVar94 = fVar47 * (float)local_b0 + fVar22 * local_b0._4_4_ + fVar108 * (float)uStack_a8 +
                 fVar21 * uStack_a8._4_4_ +
                 fVar96 * *(float *)(lVar43 + 0xd4) + *(float *)(lVar43 + 0xd0) * fVar114 +
                 *(float *)(lVar43 + 0xd8) * fVar167;
        fVar91 = fVar95 * (float)local_b0 + fVar23 * local_b0._4_4_ + fVar115 * (float)uStack_a8 +
                 fVar98 * uStack_a8._4_4_ +
                 fVar96 * *(float *)(lVar43 + 0xe4) + *(float *)(lVar43 + 0xe0) * fVar114 +
                 *(float *)(lVar43 + 0xe8) * fVar167;
        fVar114 = fVar45 * (float)local_b0 + fVar25 * local_b0._4_4_ + fVar117 * (float)uStack_a8 +
                  fVar104 * uStack_a8._4_4_ + 0.0;
        fVar18 = fVar47 * fVar107 + fVar22 * fVar111 + fVar108 * fVar113 + fVar168 * fVar116;
        fVar19 = fVar95 * fVar107 + fVar23 * fVar111 + fVar115 * fVar113 + fVar169 * fVar116;
        fVar21 = fVar45 * fVar107 + fVar25 * fVar111 + fVar117 * fVar113 + fVar170 * fVar116;
        fVar98 = fVar15 * fVar131 + fVar20 * fVar134 + fVar112 * fVar123 + fVar97 * fVar124;
        fVar104 = fVar47 * fVar131 + fVar22 * fVar134 + fVar108 * fVar123 + fVar168 * fVar124;
        fVar105 = fVar95 * fVar131 + fVar23 * fVar134 + fVar115 * fVar123 + fVar169 * fVar124;
        fVar106 = fVar45 * fVar131 + fVar25 * fVar134 + fVar117 * fVar123 + fVar170 * fVar124;
        fVar47 = fVar47 * fVar90 + fVar22 * fVar94 + fVar108 * fVar91 + fVar168 * fVar114;
        fVar95 = fVar95 * fVar90 + fVar23 * fVar94 + fVar115 * fVar91 + fVar169 * fVar114;
        fVar45 = fVar45 * fVar90 + fVar25 * fVar94 + fVar117 * fVar91 + fVar170 * fVar114;
        uStack_118 = SUB41(fVar19,0);
        uStack_117 = (undefined7)
                     (CONCAT17((char)((uint)fVar21 >> 0x18),
                               CONCAT16((char)((uint)fVar21 >> 0x10),
                                        CONCAT15((char)((uint)fVar21 >> 8),
                                                 CONCAT14(SUB41(fVar21,0),fVar19)))) >> 8);
        uVar109 = CONCAT17((char)((uint)fVar18 >> 0x18),
                           CONCAT16((char)((uint)fVar18 >> 0x10),
                                    CONCAT15((char)((uint)fVar18 >> 8),
                                             CONCAT14(SUB41(fVar18,0),
                                                      fVar15 * fVar107 + fVar20 * fVar111 +
                                                      fVar112 * fVar113 + fVar97 * fVar116))));
        uStack_128 = SUB41(fVar95,0);
        uStack_127 = (undefined7)
                     (CONCAT17((char)((uint)fVar45 >> 0x18),
                               CONCAT16((char)((uint)fVar45 >> 0x10),
                                        CONCAT15((char)((uint)fVar45 >> 8),
                                                 CONCAT14(SUB41(fVar45,0),fVar95)))) >> 8);
        uVar99 = CONCAT17((char)((uint)fVar47 >> 0x18),
                          CONCAT16((char)((uint)fVar47 >> 0x10),
                                   CONCAT15((char)((uint)fVar47 >> 8),
                                            CONCAT14(SUB41(fVar47,0),
                                                     fVar15 * fVar90 + fVar20 * fVar94 +
                                                     fVar112 * fVar91 + fVar97 * fVar114))));
        fVar15 = pfVar44[3];
      }
      iVar2 = (int)(fVar15 + 1.0);
      if (0 < iVar2) {
        uVar65 = (undefined1)((uint7)uStack_117 >> 0x10);
        uVar67 = (undefined1)((uint7)uStack_117 >> 0x18);
        uVar72 = (undefined1)((uint7)uStack_117 >> 0x20);
        uVar76 = (undefined1)((uint7)uStack_117 >> 0x28);
        uVar80 = (undefined1)((uint7)uStack_117 >> 0x30);
        fVar123 = 0.0;
        fVar161 = (float)uStack_f8;
        fVar164 = (float)((ulong)uStack_f8 >> 0x20);
        fVar153 = (float)((ulong)local_100 >> 0x20);
        fVar124 = 0.0;
        fVar125 = 0.0;
        uVar84 = (undefined1)uVar109;
        uVar85 = (undefined1)((ulong)uVar109 >> 8);
        uVar86 = (undefined1)((ulong)uVar109 >> 0x10);
        uVar87 = (undefined1)((ulong)uVar109 >> 0x18);
        uVar88 = (undefined1)((ulong)uStack_f8 >> 0x30);
        uVar89 = (undefined1)((ulong)uStack_f8 >> 0x38);
        uVar70 = (undefined1)((uint7)uStack_127 >> 0x18);
        uVar73 = (undefined1)((uint7)uStack_127 >> 0x20);
        uVar77 = (undefined1)((uint7)uStack_127 >> 0x28);
        uVar81 = (undefined1)((uint7)uStack_127 >> 0x30);
        uVar50 = (undefined4)((ulong)uVar99 >> 0x20);
        uVar122 = CONCAT13((char)((uint7)uStack_127 >> 0x10),
                           CONCAT12((char)((uint7)uStack_127 >> 8),
                                    CONCAT11((char)uStack_127,uStack_128)));
        uVar55 = SUB41(fVar98,0);
        uVar57 = (undefined1)((uint)fVar98 >> 8);
        uVar59 = (undefined1)((uint)fVar98 >> 0x10);
        uVar61 = (undefined1)((uint)fVar98 >> 0x18);
        uVar68 = (undefined1)uVar99;
        uVar74 = (undefined1)((ulong)uVar99 >> 8);
        uVar78 = (undefined1)((ulong)uVar99 >> 0x10);
        uVar82 = (undefined1)((ulong)uVar99 >> 0x18);
        uVar40 = CONCAT14((char)((ulong)local_100 >> 0x38),
                          CONCAT13((char)((ulong)local_100 >> 0x30),
                                   CONCAT12((char)((ulong)local_100 >> 0x28),
                                            CONCAT11((char)((ulong)local_100 >> 0x20),uVar87))));
        uVar48 = (undefined4)((uint5)uVar40 >> 8);
        uVar49 = (undefined4)
                 (CONCAT18((char)((ulong)uVar109 >> 0x38),
                           CONCAT17((char)((ulong)uVar109 >> 0x30),
                                    CONCAT16((char)((ulong)uVar109 >> 0x28),
                                             CONCAT15((char)((ulong)uVar109 >> 0x20),uVar40)))) >>
                 0x28);
        uVar46 = (undefined4)
                 (CONCAT17(uVar65,CONCAT16((char)((uint7)uStack_117 >> 8),
                                           CONCAT15((char)uStack_117,CONCAT14(uStack_118,fVar161))))
                 >> 0x20);
        uVar118 = SUB41(fVar106,0);
        uVar119 = (undefined1)((uint)fVar106 >> 8);
        uVar120 = (undefined1)((uint)fVar106 >> 0x10);
        uVar121 = (undefined1)((uint)fVar106 >> 0x18);
        fVar15 = (float)local_100;
        uVar17 = NEON_rev64(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,fVar15))
                                                    )),4);
        auVar4[4] = uVar55;
        auVar4._0_4_ = fVar15;
        auVar4[5] = uVar57;
        auVar4[6] = uVar59;
        auVar4[7] = uVar61;
        auVar4[8] = uVar84;
        auVar4[9] = uVar85;
        auVar4[10] = uVar86;
        auVar4[0xb] = uVar87;
        auVar4[0xc] = uVar68;
        auVar4[0xd] = uVar74;
        auVar4[0xe] = uVar78;
        auVar4[0xf] = uVar82;
        uVar100 = a64_TBL(ZEXT816(0),auVar4,_DAT_007239f0);
        auVar32._4_4_ = fVar104;
        auVar32._0_4_ = uVar48;
        auVar32._8_4_ = uVar49;
        auVar32._12_4_ = uVar50;
        uVar136 = a64_TBL(ZEXT816(0),auVar32,_DAT_00723958);
        auVar5[4] = uVar55;
        auVar5._0_4_ = fVar15;
        auVar5[5] = uVar57;
        auVar5[6] = uVar59;
        auVar5[7] = uVar61;
        auVar5[8] = uVar84;
        auVar5[9] = uVar85;
        auVar5[10] = uVar86;
        auVar5[0xb] = uVar87;
        auVar5[0xc] = uVar68;
        auVar5[0xd] = uVar74;
        auVar5[0xe] = uVar78;
        auVar5[0xf] = uVar82;
        uVar24 = a64_TBL(ZEXT816(0),auVar5,_DAT_00723948);
        auVar6[4] = uVar55;
        auVar6._0_4_ = fVar15;
        auVar6[5] = uVar57;
        auVar6[6] = uVar59;
        auVar6[7] = uVar61;
        auVar6[8] = uVar84;
        auVar6[9] = uVar85;
        auVar6[10] = uVar86;
        auVar6[0xb] = uVar87;
        auVar6[0xc] = uVar68;
        auVar6[0xd] = uVar74;
        auVar6[0xe] = uVar78;
        auVar6[0xf] = uVar82;
        uVar92 = a64_TBL(ZEXT816(0),auVar6,_DAT_00723958);
        uVar101 = NEON_rev64(CONCAT44(fVar104,uVar48),4);
        auVar33._4_4_ = fVar104;
        auVar33._0_4_ = uVar48;
        auVar33._8_4_ = uVar49;
        auVar33._12_4_ = uVar50;
        uVar110 = a64_TBL(ZEXT816(0),auVar33,_DAT_00723948);
        auVar34._4_4_ = fVar104;
        auVar34._0_4_ = uVar48;
        auVar34._8_4_ = uVar49;
        auVar34._12_4_ = uVar50;
        uVar35 = a64_TBL(ZEXT816(0),auVar34,_DAT_007239f0);
        fVar169 = (float)uVar35;
        fVar170 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = NEON_rev64(CONCAT44(fVar105,fVar161),4);
        fVar131 = (float)uVar35;
        fVar134 = (float)((ulong)uVar35 >> 0x20);
        auVar36._4_4_ = fVar105;
        auVar36._0_4_ = fVar161;
        auVar36._8_4_ = uVar46;
        auVar36._12_4_ = uVar122;
        uVar133 = a64_TBL(ZEXT816(0),auVar36,_DAT_00723948);
        auVar37._4_4_ = fVar105;
        auVar37._0_4_ = fVar161;
        auVar37._8_4_ = uVar46;
        auVar37._12_4_ = uVar122;
        uVar138 = a64_TBL(ZEXT816(0),auVar37,_DAT_00723958);
        auVar38._4_4_ = fVar105;
        auVar38._0_4_ = fVar161;
        auVar38._8_4_ = uVar46;
        auVar38._12_4_ = uVar122;
        uVar35 = a64_TBL(ZEXT816(0),auVar38,_DAT_007239f0);
        fVar140 = (float)uVar35;
        fVar142 = (float)((ulong)uVar35 >> 0x20);
        uVar27 = (undefined2)
                 (CONCAT12((char)((ulong)uStack_f8 >> 0x28),
                           CONCAT11((char)((ulong)uStack_f8 >> 0x20),uVar65)) >> 8);
        auVar26[2] = uVar88;
        auVar26._0_2_ = uVar27;
        auVar26[3] = uVar89;
        auVar26[4] = uVar118;
        auVar26[5] = uVar119;
        auVar26[6] = uVar120;
        auVar26[7] = uVar121;
        auVar26[8] = uVar67;
        auVar26[9] = uVar72;
        auVar26[10] = uVar76;
        auVar26[0xb] = uVar80;
        auVar26[0xc] = uVar70;
        auVar26[0xd] = uVar73;
        auVar26[0xe] = uVar77;
        auVar26[0xf] = uVar81;
        uVar147 = a64_TBL(ZEXT816(0),auVar26,_DAT_00723958);
        fVar94 = (float)uVar92;
        fVar45 = (float)uVar110;
        fVar114 = (float)((ulong)uVar92 >> 0x20);
        fVar97 = (float)((ulong)uVar110 >> 0x20);
        fVar111 = (float)uVar100;
        fVar116 = (float)((ulong)uVar100 >> 0x20);
        auVar28[2] = uVar88;
        auVar28._0_2_ = uVar27;
        auVar28[3] = uVar89;
        auVar28[4] = uVar118;
        auVar28[5] = uVar119;
        auVar28[6] = uVar120;
        auVar28[7] = uVar121;
        auVar28[8] = uVar67;
        auVar28[9] = uVar72;
        auVar28[10] = uVar76;
        auVar28[0xb] = uVar80;
        auVar28[0xc] = uVar70;
        auVar28[0xd] = uVar73;
        auVar28[0xe] = uVar77;
        auVar28[0xf] = uVar81;
        uVar35 = a64_TBL(ZEXT816(0),auVar28,_DAT_00723948);
        fVar141 = (float)uVar35;
        fVar143 = (float)((ulong)uVar35 >> 0x20);
        uVar92 = NEON_rev64(CONCAT17(uVar121,CONCAT16(uVar120,CONCAT15(uVar119,CONCAT14(uVar118,
                                                  CONCAT13(uVar89,CONCAT12(uVar88,uVar27)))))),4);
        auVar29[2] = uVar88;
        auVar29._0_2_ = uVar27;
        auVar29[3] = uVar89;
        auVar29[4] = uVar118;
        auVar29[5] = uVar119;
        auVar29[6] = uVar120;
        auVar29[7] = uVar121;
        auVar29[8] = uVar67;
        auVar29[9] = uVar72;
        auVar29[10] = uVar76;
        auVar29[0xb] = uVar80;
        auVar29[0xc] = uVar70;
        auVar29[0xd] = uVar73;
        auVar29[0xe] = uVar77;
        auVar29[0xf] = uVar81;
        uVar35 = a64_TBL(ZEXT816(0),auVar29,_DAT_007239f0);
        fVar137 = (float)uVar138;
        fVar139 = (float)((ulong)uVar138 >> 0x20);
        fVar132 = (float)uVar133;
        fVar146 = (float)uVar147;
        fVar135 = (float)((ulong)uVar133 >> 0x20);
        fVar148 = (float)((ulong)uVar147 >> 0x20);
        fVar149 = (float)uVar35;
        fVar150 = (float)((ulong)uVar35 >> 0x20);
        fVar144 = (float)uVar92;
        fVar145 = (float)((ulong)uVar92 >> 0x20);
        fVar108 = fVar132 * fVar146 - fVar137 * fVar141;
        fVar115 = fVar135 * fVar148 - fVar139 * fVar143;
        fVar117 = fVar105 * fVar149 - fVar140 * fVar106;
        fVar90 = fVar105 * fVar150 - fVar142 * fVar106;
        fVar151 = fVar131 * fVar146 - fVar144 * fVar137;
        fVar152 = fVar134 * fVar148 - fVar145 * fVar139;
        fVar154 = fVar161 * fVar149 - fVar164 * fVar140;
        fVar155 = fVar161 * fVar150 - fVar164 * fVar142;
        fVar157 = fVar131 * fVar141 - fVar144 * fVar132;
        fVar159 = fVar134 * fVar143 - fVar145 * fVar135;
        fVar162 = fVar161 * fVar106 - fVar164 * fVar105;
        fVar165 = fVar161 * fVar106 - fVar164 * fVar105;
        fVar47 = (float)uVar101;
        fVar95 = (float)((ulong)uVar101 >> 0x20);
        fVar18 = (float)uVar17;
        fVar19 = (float)((ulong)uVar17 >> 0x20);
        fVar25 = (float)uVar24;
        fVar112 = (float)((ulong)uVar24 >> 0x20);
        fVar167 = (float)uVar136;
        fVar168 = (float)((ulong)uVar136 >> 0x20);
        fVar158 = fVar25 * fVar167 - fVar94 * fVar45;
        fVar160 = fVar112 * fVar168 - fVar114 * fVar97;
        fVar163 = fVar98 * fVar169 - fVar111 * fVar104;
        fVar166 = fVar98 * fVar170 - fVar116 * fVar104;
        fVar91 = fVar18 * fVar167 - fVar94 * fVar47;
        fVar107 = fVar19 * fVar168 - fVar114 * fVar95;
        fVar113 = fVar15 * fVar169 - fVar111 * fVar153;
        fVar96 = fVar15 * fVar170 - fVar116 * fVar153;
        fVar20 = fVar18 * fVar45 - fVar47 * fVar25;
        fVar21 = fVar19 * fVar97 - fVar95 * fVar112;
        fVar22 = fVar15 * fVar104 - fVar153 * fVar98;
        fVar23 = fVar15 * fVar104 - fVar153 * fVar98;
        fVar167 = ((fVar47 * fVar108 - fVar151 * fVar45) + fVar157 * fVar167) * (float)_DAT_00724940
        ;
        fVar171 = (float)((ulong)_DAT_00724940 >> 0x20);
        fVar168 = ((fVar95 * fVar115 - fVar152 * fVar97) + fVar159 * fVar168) * fVar171;
        fVar169 = ((fVar153 * fVar117 - fVar154 * fVar104) + fVar162 * fVar169) *
                  (float)uRam0000000000724948;
        fVar172 = (float)((ulong)uRam0000000000724948 >> 0x20);
        fVar170 = ((fVar153 * fVar90 - fVar155 * fVar104) + fVar165 * fVar170) * fVar172;
        fVar153 = (float)((ulong)_DAT_007248d0 >> 0x20);
        fVar156 = (float)((ulong)uRam00000000007248d8 >> 0x20);
        fVar47 = fVar15 * fVar167;
        fVar95 = fVar98 * fVar168;
        uVar55 = (undefined1)((uint)fVar95 >> 8);
        uVar57 = (undefined1)((uint)fVar95 >> 0x10);
        uVar59 = (undefined1)((uint)fVar95 >> 0x18);
        fVar45 = (float)uVar109 * fVar169;
        uVar61 = (undefined1)((uint)fVar45 >> 8);
        uVar65 = (undefined1)((uint)fVar45 >> 0x10);
        uVar67 = (undefined1)((uint)fVar45 >> 0x18);
        fVar97 = (float)uVar99 * fVar170;
        uVar70 = (undefined1)((uint)fVar97 >> 8);
        uVar68 = (undefined1)((uint)fVar97 >> 0x10);
        uVar72 = (undefined1)((uint)fVar97 >> 0x18);
        auVar7[4] = SUB41(fVar95,0);
        auVar7._0_4_ = fVar47;
        auVar7[5] = uVar55;
        auVar7[6] = uVar57;
        auVar7[7] = uVar59;
        auVar7[8] = SUB41(fVar45,0);
        auVar7[9] = uVar61;
        auVar7[10] = uVar65;
        auVar7[0xb] = uVar67;
        auVar7[0xc] = SUB41(fVar97,0);
        auVar7[0xd] = uVar70;
        auVar7[0xe] = uVar68;
        auVar7[0xf] = uVar72;
        auVar8[4] = SUB41(fVar95,0);
        auVar8._0_4_ = fVar47;
        auVar8[5] = uVar55;
        auVar8[6] = uVar57;
        auVar8[7] = uVar59;
        auVar8[8] = SUB41(fVar45,0);
        auVar8[9] = uVar61;
        auVar8[10] = uVar65;
        auVar8[0xb] = uVar67;
        auVar8[0xc] = SUB41(fVar97,0);
        auVar8[0xd] = uVar70;
        auVar8[0xe] = uVar68;
        auVar8[0xf] = uVar72;
        auVar102 = NEON_ext(auVar7,auVar8,8,1);
        fVar47 = auVar102._0_4_ + fVar47;
        fVar95 = auVar102._4_4_ + fVar95;
        fVar45 = fVar47 + fVar95;
        fVar47 = fVar47 + fVar95;
        uVar55 = SUB41(fVar47,0);
        uVar57 = (undefined1)((uint)fVar47 >> 8);
        uVar59 = (undefined1)((uint)fVar47 >> 0x10);
        uVar61 = (undefined1)((uint)fVar47 >> 0x18);
        uVar65 = SUB41(fVar45,0);
        uVar67 = (undefined1)((uint)fVar45 >> 8);
        uVar70 = (undefined1)((uint)fVar45 >> 0x10);
        uVar68 = (undefined1)((uint)fVar45 >> 0x18);
        auVar9[4] = uVar55;
        auVar9._0_4_ = fVar45;
        auVar9[5] = uVar57;
        auVar9[6] = uVar59;
        auVar9[7] = uVar61;
        auVar9[8] = uVar65;
        auVar9[9] = uVar67;
        auVar9[10] = uVar70;
        auVar9[0xb] = uVar68;
        auVar9[0xc] = uVar55;
        auVar9[0xd] = uVar57;
        auVar9[0xe] = uVar59;
        auVar9[0xf] = uVar61;
        auVar102 = NEON_frecpe(auVar9,4);
        auVar10[4] = uVar55;
        auVar10._0_4_ = fVar45;
        auVar10[5] = uVar57;
        auVar10[6] = uVar59;
        auVar10[7] = uVar61;
        auVar10[8] = uVar65;
        auVar10[9] = uVar67;
        auVar10[10] = uVar70;
        auVar10[0xb] = uVar68;
        auVar10[0xc] = uVar55;
        auVar10[0xd] = uVar57;
        auVar10[0xe] = uVar59;
        auVar10[0xf] = uVar61;
        auVar103 = NEON_frecps(auVar102,auVar10,4);
        auVar93._0_4_ = auVar102._0_4_ * auVar103._0_4_;
        auVar93._4_4_ = auVar102._4_4_ * auVar103._4_4_;
        auVar93._8_4_ = auVar102._8_4_ * auVar103._8_4_;
        auVar93._12_4_ = auVar102._12_4_ * auVar103._12_4_;
        auVar11[4] = uVar55;
        auVar11._0_4_ = fVar45;
        auVar11[5] = uVar57;
        auVar11[6] = uVar59;
        auVar11[7] = uVar61;
        auVar11[8] = uVar65;
        auVar11[9] = uVar67;
        auVar11[10] = uVar70;
        auVar11[0xb] = uVar68;
        auVar11[0xc] = uVar55;
        auVar11[0xd] = uVar57;
        auVar11[0xe] = uVar59;
        auVar11[0xf] = uVar61;
        auVar102 = NEON_frecps(auVar93,auVar11,4);
        iVar14 = -(uint)(fVar45 == 0.0);
        bVar51 = (byte)iVar14;
        bVar52 = (byte)((uint)iVar14 >> 8);
        bVar53 = (byte)((uint)iVar14 >> 0x10);
        bVar54 = (byte)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)(fVar47 == 0.0);
        bVar56 = (byte)iVar14;
        bVar58 = (byte)((uint)iVar14 >> 8);
        bVar60 = (byte)((uint)iVar14 >> 0x10);
        bVar62 = (byte)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)(fVar45 == 0.0);
        bVar63 = (byte)iVar14;
        bVar64 = (byte)((uint)iVar14 >> 8);
        bVar66 = (byte)((uint)iVar14 >> 0x10);
        bVar69 = (byte)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)((float)CONCAT13(uVar61,CONCAT12(uVar59,(short)(CONCAT15(uVar57,CONCAT14(
                                                  uVar55,fVar45)) >> 0x20))) == 0.0);
        bVar71 = (byte)iVar14;
        bVar75 = (byte)((uint)iVar14 >> 8);
        bVar79 = (byte)((uint)iVar14 >> 0x10);
        bVar83 = (byte)((uint)iVar14 >> 0x18);
        fVar47 = auVar93._0_4_ * auVar102._0_4_;
        fVar95 = auVar93._4_4_ * auVar102._4_4_;
        fVar45 = auVar93._8_4_ * auVar102._8_4_;
        fVar97 = auVar93._12_4_ * auVar102._12_4_;
        fVar167 = fVar47 * fVar167;
        fVar168 = fVar95 * fVar168;
        fVar169 = fVar45 * fVar169;
        fVar170 = fVar97 * fVar170;
        fVar108 = fVar47 * ((fVar18 * fVar108 - fVar151 * fVar25) + fVar157 * fVar94) *
                           (float)_DAT_007248d0;
        fVar112 = fVar95 * ((fVar19 * fVar115 - fVar152 * fVar112) + fVar159 * fVar114) * fVar153;
        fVar115 = fVar45 * ((fVar15 * fVar117 - fVar154 * fVar98) + fVar162 * fVar111) *
                           (float)uRam00000000007248d8;
        fVar117 = fVar97 * ((fVar15 * fVar90 - fVar155 * fVar98) + fVar165 * fVar116) * fVar156;
        fVar15 = ((fVar144 * fVar158 - fVar91 * fVar141) + fVar20 * fVar146) * (float)_DAT_00724940
                 * fVar47;
        fVar18 = ((fVar145 * fVar160 - fVar107 * fVar143) + fVar21 * fVar148) * fVar171 * fVar95;
        fVar19 = ((fVar164 * fVar163 - fVar113 * fVar106) + fVar22 * fVar149) *
                 (float)uRam0000000000724948 * fVar45;
        fVar25 = ((fVar164 * fVar166 - fVar96 * fVar106) + fVar23 * fVar150) * fVar172 * fVar97;
        fVar47 = ((fVar131 * fVar158 - fVar91 * fVar132) + fVar20 * fVar137) * (float)_DAT_007248d0
                 * fVar47;
        fVar95 = ((fVar134 * fVar160 - fVar107 * fVar135) + fVar21 * fVar139) * fVar153 * fVar95;
        fVar45 = ((fVar161 * fVar163 - fVar113 * fVar105) + fVar22 * fVar140) *
                 (float)uRam00000000007248d8 * fVar45;
        fVar97 = ((fVar161 * fVar166 - fVar96 * fVar105) + fVar23 * fVar142) * fVar156 * fVar97;
        do {
          local_e0 = 0;
          uStack_d8 = 0;
          pfVar41 = (float *)FUN__text__006ea4a0(*(undefined8 *)(param_5 + 0x30),&local_e0,0xc0);
          if (pfVar41 == (float *)0x0) {
            return 1;
          }
          *pfVar41 = fVar125;
          pfVar41[1] = fVar124;
          pfVar41[2] = fVar123;
          fVar20 = pfVar44[0xf];
          pfVar41[7] = 0.0;
          pfVar41[0x28] = (float)(int)fVar130;
          pfVar41[0x29] = fVar128;
          pfVar41[0x2a] = 0.0;
          pfVar41[0x2b] = 0.0;
          pfVar41[0x2c] = fVar126;
          pfVar41[0x2d] = fVar127;
          pfVar41[0x2e] = fVar129;
          pfVar41[0x2f] = 0.0;
          pfVar41[4] = fVar13;
          pfVar41[3] = fVar20;
          pfVar41[5] = fVar16;
          pfVar41[6] = fVar12;
          *(undefined8 *)(pfVar41 + 10) = uStack_f8;
          *(undefined8 *)(pfVar41 + 8) = local_100;
          *(ulong *)(pfVar41 + 0xe) = CONCAT44(fVar106,fVar105);
          *(ulong *)(pfVar41 + 0xc) = CONCAT44(fVar104,fVar98);
          *(ulong *)(pfVar41 + 0x12) = CONCAT71(uStack_117,uStack_118);
          *(undefined8 *)(pfVar41 + 0x10) = uVar109;
          *(ulong *)(pfVar41 + 0x16) = CONCAT71(uStack_127,uStack_128);
          *(undefined8 *)(pfVar41 + 0x14) = uVar99;
          *(ulong *)(pfVar41 + 0x1a) =
               CONCAT17((byte)((uint)fVar170 >> 0x18) & ~bVar83,
                        CONCAT16((byte)((uint)fVar170 >> 0x10) & ~bVar79,
                                 CONCAT15((byte)((uint)fVar170 >> 8) & ~bVar75,
                                          CONCAT14(SUB41(fVar170,0) & ~bVar71,
                                                   CONCAT13((byte)((uint)fVar169 >> 0x18) & ~bVar69,
                                                            CONCAT12((byte)((uint)fVar169 >> 0x10) &
                                                                     ~bVar66,CONCAT11((byte)((uint)
                                                  fVar169 >> 8) & ~bVar64,SUB41(fVar169,0) & ~bVar63
                                                  )))))));
          *(ulong *)(pfVar41 + 0x18) =
               CONCAT17((byte)((uint)fVar168 >> 0x18) & ~bVar62,
                        CONCAT16((byte)((uint)fVar168 >> 0x10) & ~bVar60,
                                 CONCAT15((byte)((uint)fVar168 >> 8) & ~bVar58,
                                          CONCAT14(SUB41(fVar168,0) & ~bVar56,
                                                   CONCAT13((byte)((uint)fVar167 >> 0x18) & ~bVar54,
                                                            CONCAT12((byte)((uint)fVar167 >> 0x10) &
                                                                     ~bVar53,CONCAT11((byte)((uint)
                                                  fVar167 >> 8) & ~bVar52,SUB41(fVar167,0) & ~bVar51
                                                  )))))));
          *(ulong *)(pfVar41 + 0x1e) =
               CONCAT17((byte)((uint)fVar117 >> 0x18) & ~bVar83,
                        CONCAT16((byte)((uint)fVar117 >> 0x10) & ~bVar79,
                                 CONCAT15((byte)((uint)fVar117 >> 8) & ~bVar75,
                                          CONCAT14(SUB41(fVar117,0) & ~bVar71,
                                                   CONCAT13((byte)((uint)fVar115 >> 0x18) & ~bVar69,
                                                            CONCAT12((byte)((uint)fVar115 >> 0x10) &
                                                                     ~bVar66,CONCAT11((byte)((uint)
                                                  fVar115 >> 8) & ~bVar64,SUB41(fVar115,0) & ~bVar63
                                                  )))))));
          *(ulong *)(pfVar41 + 0x1c) =
               CONCAT17((byte)((uint)fVar112 >> 0x18) & ~bVar62,
                        CONCAT16((byte)((uint)fVar112 >> 0x10) & ~bVar60,
                                 CONCAT15((byte)((uint)fVar112 >> 8) & ~bVar58,
                                          CONCAT14(SUB41(fVar112,0) & ~bVar56,
                                                   CONCAT13((byte)((uint)fVar108 >> 0x18) & ~bVar54,
                                                            CONCAT12((byte)((uint)fVar108 >> 0x10) &
                                                                     ~bVar53,CONCAT11((byte)((uint)
                                                  fVar108 >> 8) & ~bVar52,SUB41(fVar108,0) & ~bVar51
                                                  )))))));
          *(ulong *)(pfVar41 + 0x22) =
               CONCAT17((byte)((uint)fVar25 >> 0x18) & ~bVar83,
                        CONCAT16((byte)((uint)fVar25 >> 0x10) & ~bVar79,
                                 CONCAT15((byte)((uint)fVar25 >> 8) & ~bVar75,
                                          CONCAT14(SUB41(fVar25,0) & ~bVar71,
                                                   CONCAT13((byte)((uint)fVar19 >> 0x18) & ~bVar69,
                                                            CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                     ~bVar66,CONCAT11((byte)((uint)
                                                  fVar19 >> 8) & ~bVar64,SUB41(fVar19,0) & ~bVar63))
                                                  )))));
          *(ulong *)(pfVar41 + 0x20) =
               CONCAT17((byte)((uint)fVar18 >> 0x18) & ~bVar62,
                        CONCAT16((byte)((uint)fVar18 >> 0x10) & ~bVar60,
                                 CONCAT15((byte)((uint)fVar18 >> 8) & ~bVar58,
                                          CONCAT14(SUB41(fVar18,0) & ~bVar56,
                                                   CONCAT13((byte)((uint)fVar15 >> 0x18) & ~bVar54,
                                                            CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                                     ~bVar53,CONCAT11((byte)((uint)
                                                  fVar15 >> 8) & ~bVar52,SUB41(fVar15,0) & ~bVar51))
                                                  )))));
          *(ulong *)(pfVar41 + 0x26) =
               CONCAT17((byte)((uint)fVar97 >> 0x18) & ~bVar83,
                        CONCAT16((byte)((uint)fVar97 >> 0x10) & ~bVar79,
                                 CONCAT15((byte)((uint)fVar97 >> 8) & ~bVar75,
                                          CONCAT14(SUB41(fVar97,0) & ~bVar71,
                                                   CONCAT13((byte)((uint)fVar45 >> 0x18) & ~bVar69,
                                                            CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                                                     ~bVar66,CONCAT11((byte)((uint)
                                                  fVar45 >> 8) & ~bVar64,SUB41(fVar45,0) & ~bVar63))
                                                  )))));
          *(ulong *)(pfVar41 + 0x24) =
               CONCAT17((byte)((uint)fVar95 >> 0x18) & ~bVar62,
                        CONCAT16((byte)((uint)fVar95 >> 0x10) & ~bVar60,
                                 CONCAT15((byte)((uint)fVar95 >> 8) & ~bVar58,
                                          CONCAT14(SUB41(fVar95,0) & ~bVar56,
                                                   CONCAT13((byte)((uint)fVar47 >> 0x18) & ~bVar54,
                                                            CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                                                     ~bVar53,CONCAT11((byte)((uint)
                                                  fVar47 >> 8) & ~bVar52,SUB41(fVar47,0) & ~bVar51))
                                                  )))));
          iVar14 = *(int *)(lVar42 + 0x148);
          if (*(int *)(lVar42 + 0x144) != -1) {
            FUN__text__006ee1d4(param_1,*(int *)(lVar42 + 0x144),0,&local_e0,0xc0);
          }
          if (iVar14 != -1) {
            FUN__text__006ee1d4(param_1,iVar14,4,&local_e0,0xc0);
          }
          FUN__text__006dd7b0(*(undefined8 *)(param_2 + 0x98),param_1,param_2,lVar42,param_4,param_5
                             );
          iVar2 = iVar2 + -1;
          fVar124 = fVar124 + pfVar44[1];
          fVar125 = fVar125 + *pfVar44;
          fVar123 = fVar123 + pfVar44[2];
        } while (iVar2 != 0);
      }
      return 1;
    }
  }
  FUN__text__006d84a0(param_2,0x80);
  return 0;
}


