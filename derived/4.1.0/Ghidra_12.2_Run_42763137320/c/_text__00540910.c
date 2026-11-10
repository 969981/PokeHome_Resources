/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00540910; name: FUN_.text__00540910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00540910(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
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
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  float fVar111;
  float fVar115;
  float fVar117;
  undefined1 auVar113 [16];
  int iVar112;
  int iVar116;
  int iVar118;
  float fVar119;
  int iVar120;
  undefined1 auVar114 [16];
  byte bVar121;
  float fVar122;
  byte bVar125;
  byte bVar126;
  byte bVar128;
  float fVar129;
  byte bVar130;
  byte bVar131;
  byte bVar133;
  float fVar134;
  byte bVar135;
  byte bVar136;
  byte bVar138;
  byte bVar140;
  byte bVar141;
  undefined1 auVar123 [16];
  byte bVar127;
  byte bVar132;
  byte bVar137;
  float fVar139;
  byte bVar142;
  undefined1 auVar124 [16];
  undefined4 uVar143;
  undefined4 uVar144;
  undefined4 uVar145;
  float fVar146;
  float fVar147;
  int iVar148;
  float fVar149;
  float fVar150;
  int iVar151;
  float fVar152;
  float fVar153;
  int iVar154;
  float fVar155;
  float fVar156;
  int iVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar39 = 0;
  fVar45 = (float)param_1[8];
  fVar49 = (float)((ulong)param_1[8] >> 0x20);
  fVar53 = (float)param_1[9];
  fVar146 = (float)param_1[0x16];
  fVar149 = (float)((ulong)param_1[0x16] >> 0x20);
  fVar152 = (float)param_1[0x17];
  fVar155 = (float)((ulong)param_1[0x17] >> 0x20);
  fVar23 = (float)param_1[0xc];
  fVar42 = (float)param_1[0x1c];
  fVar43 = (float)((ulong)param_1[0x1c] >> 0x20);
  fVar44 = (float)param_1[0x1d];
  fVar46 = (float)((ulong)param_1[0x1d] >> 0x20);
  fVar50 = (float)((ulong)param_1[0xc] >> 0x20);
  fVar122 = (float)param_1[0xd];
  fVar9 = fVar42 * fVar23 + *(float *)(param_1 + 0x1e) * fVar50 +
          *(float *)(param_1 + 0x20) * fVar122;
  fVar11 = fVar43 * fVar23 + *(float *)((long)param_1 + 0xf4) * fVar50 +
           *(float *)((long)param_1 + 0x104) * fVar122;
  uVar59 = (undefined1)((uint)fVar11 >> 8);
  uVar61 = (undefined1)((uint)fVar11 >> 0x10);
  uVar63 = (undefined1)((uint)fVar11 >> 0x18);
  fVar13 = fVar44 * fVar23 + *(float *)(param_1 + 0x1f) * fVar50 +
           *(float *)(param_1 + 0x21) * fVar122;
  uVar66 = (undefined1)((uint)fVar13 >> 8);
  uVar68 = (undefined1)((uint)fVar13 >> 0x10);
  uVar70 = (undefined1)((uint)fVar13 >> 0x18);
  fVar15 = fVar46 * fVar23 + *(float *)((long)param_1 + 0xfc) * fVar50 +
           *(float *)((long)param_1 + 0x10c) * fVar122;
  uVar73 = (undefined1)((uint)fVar15 >> 8);
  uVar75 = (undefined1)((uint)fVar15 >> 0x10);
  uVar77 = (undefined1)((uint)fVar15 >> 0x18);
  fVar147 = (float)param_1[0x1a];
  fVar150 = (float)((ulong)param_1[0x1a] >> 0x20);
  fVar153 = (float)param_1[0x1b];
  fVar156 = (float)((ulong)param_1[0x1b] >> 0x20);
  auVar113[4] = SUB41(fVar11,0);
  auVar113._0_4_ = fVar9;
  auVar113[5] = uVar59;
  auVar113[6] = uVar61;
  auVar113[7] = uVar63;
  auVar113[8] = SUB41(fVar13,0);
  auVar113[9] = uVar66;
  auVar113[10] = uVar68;
  auVar113[0xb] = uVar70;
  auVar113[0xc] = SUB41(fVar15,0);
  auVar113[0xd] = uVar73;
  auVar113[0xe] = uVar75;
  auVar113[0xf] = uVar77;
  auVar113 = NEON_frecpe(auVar113,4);
  auVar123[4] = SUB41(fVar11,0);
  auVar123._0_4_ = fVar9;
  auVar123[5] = uVar59;
  auVar123[6] = uVar61;
  auVar123[7] = uVar63;
  auVar123[8] = SUB41(fVar13,0);
  auVar123[9] = uVar66;
  auVar123[10] = uVar68;
  auVar123[0xb] = uVar70;
  auVar123[0xc] = SUB41(fVar15,0);
  auVar123[0xd] = uVar73;
  auVar123[0xe] = uVar75;
  auVar123[0xf] = uVar77;
  auVar123 = NEON_frecps(auVar123,auVar113,4);
  fVar111 = auVar123._0_4_ *
            auVar113._0_4_ *
            ((fVar146 - fVar45) * fVar42 +
             (*(float *)(param_1 + 0x18) - fVar49) * *(float *)(param_1 + 0x1e) +
            (fVar147 - fVar53) * *(float *)(param_1 + 0x20));
  fVar115 = auVar123._4_4_ *
            auVar113._4_4_ *
            ((fVar149 - fVar45) * fVar43 +
             (*(float *)((long)param_1 + 0xc4) - fVar49) * *(float *)((long)param_1 + 0xf4) +
            (fVar150 - fVar53) * *(float *)((long)param_1 + 0x104));
  fVar117 = auVar123._8_4_ *
            auVar113._8_4_ *
            ((fVar152 - fVar45) * fVar44 +
             (*(float *)(param_1 + 0x19) - fVar49) * *(float *)(param_1 + 0x1f) +
            (fVar153 - fVar53) * *(float *)(param_1 + 0x21));
  fVar119 = auVar123._12_4_ *
            auVar113._12_4_ *
            ((fVar155 - fVar45) * fVar46 +
             (*(float *)((long)param_1 + 0xcc) - fVar49) * *(float *)((long)param_1 + 0xfc) +
            (fVar156 - fVar53) * *(float *)((long)param_1 + 0x10c));
  fVar42 = fVar45 + fVar111 * fVar23;
  fVar43 = fVar45 + fVar115 * fVar23;
  fVar44 = fVar45 + fVar117 * fVar23;
  fVar45 = fVar45 + fVar119 * fVar23;
  fVar46 = fVar49 + fVar111 * fVar50;
  fVar47 = fVar49 + fVar115 * fVar50;
  fVar48 = fVar49 + fVar117 * fVar50;
  fVar49 = fVar49 + fVar119 * fVar50;
  fVar50 = fVar53 + fVar111 * fVar122;
  fVar51 = fVar53 + fVar115 * fVar122;
  fVar52 = fVar53 + fVar117 * fVar122;
  fVar53 = fVar53 + fVar119 * fVar122;
  fVar23 = SQRT(*(float *)(param_1 + 10) * *(float *)(param_1 + 10) +
                *(float *)((long)param_1 + 0x54) * *(float *)((long)param_1 + 0x54) +
                *(float *)(param_1 + 0xb) * *(float *)(param_1 + 0xb));
  fVar146 = fVar42 - fVar146;
  fVar149 = fVar43 - fVar149;
  fVar152 = fVar44 - fVar152;
  fVar155 = fVar45 - fVar155;
  fVar158 = fVar46 - *(float *)(param_1 + 0x18);
  fVar159 = fVar47 - *(float *)((long)param_1 + 0xc4);
  fVar160 = fVar48 - *(float *)(param_1 + 0x19);
  fVar161 = fVar49 - *(float *)((long)param_1 + 0xcc);
  fVar147 = fVar50 - fVar147;
  fVar150 = fVar51 - fVar150;
  fVar153 = fVar52 - fVar153;
  fVar156 = fVar53 - fVar156;
  fVar122 = *(float *)(param_1 + 0x22) * fVar146 + (float)param_1[0x24] * fVar158 +
            *(float *)(param_1 + 0x26) * fVar147;
  fVar129 = *(float *)((long)param_1 + 0x114) * fVar149 +
            (float)((ulong)param_1[0x24] >> 0x20) * fVar159 +
            *(float *)((long)param_1 + 0x134) * fVar150;
  fVar134 = *(float *)(param_1 + 0x23) * fVar152 + (float)param_1[0x25] * fVar160 +
            *(float *)(param_1 + 0x27) * fVar153;
  fVar139 = *(float *)((long)param_1 + 0x11c) * fVar155 +
            (float)((ulong)param_1[0x25] >> 0x20) * fVar161 +
            *(float *)((long)param_1 + 0x13c) * fVar156;
  fVar147 = *(float *)(param_1 + 0x28) * fVar146 + (float)param_1[0x2a] * fVar158 +
            (float)param_1[0x2c] * fVar147;
  fVar150 = *(float *)((long)param_1 + 0x144) * fVar149 +
            (float)((ulong)param_1[0x2a] >> 0x20) * fVar159 +
            (float)((ulong)param_1[0x2c] >> 0x20) * fVar150;
  fVar153 = *(float *)(param_1 + 0x29) * fVar152 + (float)param_1[0x2b] * fVar160 +
            (float)param_1[0x2d] * fVar153;
  fVar156 = *(float *)((long)param_1 + 0x14c) * fVar155 +
            (float)((ulong)param_1[0x2b] >> 0x20) * fVar161 +
            (float)((ulong)param_1[0x2d] >> 0x20) * fVar156;
  iVar10 = -(uint)(1.1920929e-07 < ABS(fVar9));
  iVar12 = -(uint)(1.1920929e-07 < ABS(fVar11));
  iVar14 = -(uint)(1.1920929e-07 < ABS(fVar13));
  iVar16 = -(uint)(1.1920929e-07 < ABS(fVar15));
  uStack_98 = CONCAT44(fVar49,fVar48);
  local_a0 = CONCAT44(fVar47,fVar46);
  uStack_88 = CONCAT44(fVar45,fVar44);
  local_90 = CONCAT44(fVar43,fVar42);
  uStack_a8 = CONCAT44(fVar53,fVar52);
  local_b0 = CONCAT44(fVar51,fVar50);
  iVar17 = -(uint)(fVar111 <= fVar23);
  iVar18 = -(uint)(fVar115 <= fVar23);
  iVar19 = -(uint)(fVar117 <= fVar23);
  iVar20 = -(uint)(fVar119 <= fVar23);
  iVar24 = -(uint)(0.0 < fVar122);
  iVar25 = -(uint)(0.0 < fVar129);
  iVar26 = -(uint)(0.0 < fVar134);
  iVar27 = -(uint)(0.0 < fVar139);
  iVar30 = -(uint)(0.0 < fVar147);
  iVar31 = -(uint)(0.0 < fVar150);
  iVar32 = -(uint)(0.0 < fVar153);
  iVar33 = -(uint)(0.0 < fVar156);
  iVar148 = -(uint)(fVar147 < *(float *)(param_1 + 0x30));
  iVar151 = -(uint)(fVar150 < *(float *)((long)param_1 + 0x184));
  iVar154 = -(uint)(fVar153 < *(float *)(param_1 + 0x31));
  iVar157 = -(uint)(fVar156 < *(float *)((long)param_1 + 0x18c));
  iVar112 = -(uint)(fVar122 < *(float *)(param_1 + 0x2e));
  iVar116 = -(uint)(fVar129 < *(float *)((long)param_1 + 0x174));
  iVar118 = -(uint)(fVar134 < *(float *)(param_1 + 0x2f));
  iVar120 = -(uint)(fVar139 < *(float *)((long)param_1 + 0x17c));
  bVar121 = (byte)_DAT_00724a10;
  bVar54 = (byte)iVar10 & bVar121;
  bVar125 = (byte)((ulong)_DAT_00724a10 >> 8);
  bVar55 = (byte)((uint)iVar10 >> 8) & bVar125;
  bVar126 = (byte)((ulong)_DAT_00724a10 >> 0x10);
  bVar56 = (byte)((uint)iVar10 >> 0x10) & bVar126;
  bVar127 = (byte)((ulong)_DAT_00724a10 >> 0x18);
  bVar57 = (byte)((uint)iVar10 >> 0x18) & bVar127;
  bVar128 = (byte)((ulong)_DAT_00724a10 >> 0x20);
  bVar58 = (byte)iVar12 & bVar128;
  bVar130 = (byte)((ulong)_DAT_00724a10 >> 0x28);
  bVar60 = (byte)((uint)iVar12 >> 8) & bVar130;
  bVar131 = (byte)((ulong)_DAT_00724a10 >> 0x30);
  bVar62 = (byte)((uint)iVar12 >> 0x10) & bVar131;
  bVar132 = (byte)((ulong)_DAT_00724a10 >> 0x38);
  bVar64 = (byte)((uint)iVar12 >> 0x18) & bVar132;
  bVar133 = (byte)uRam0000000000724a18;
  bVar65 = (byte)iVar14 & bVar133;
  bVar135 = (byte)((ulong)uRam0000000000724a18 >> 8);
  bVar67 = (byte)((uint)iVar14 >> 8) & bVar135;
  bVar136 = (byte)((ulong)uRam0000000000724a18 >> 0x10);
  bVar69 = (byte)((uint)iVar14 >> 0x10) & bVar136;
  bVar137 = (byte)((ulong)uRam0000000000724a18 >> 0x18);
  bVar71 = (byte)((uint)iVar14 >> 0x18) & bVar137;
  bVar138 = (byte)((ulong)uRam0000000000724a18 >> 0x20);
  bVar72 = (byte)iVar16 & bVar138;
  bVar140 = (byte)((ulong)uRam0000000000724a18 >> 0x28);
  bVar74 = (byte)((uint)iVar16 >> 8) & bVar140;
  bVar141 = (byte)((ulong)uRam0000000000724a18 >> 0x30);
  bVar76 = (byte)((uint)iVar16 >> 0x10) & bVar141;
  bVar142 = (byte)((ulong)uRam0000000000724a18 >> 0x38);
  bVar78 = (byte)((uint)iVar16 >> 0x18) & bVar142;
  bVar79 = (byte)iVar17 & bVar121;
  bVar80 = (byte)((uint)iVar17 >> 8) & bVar125;
  bVar81 = (byte)((uint)iVar17 >> 0x10) & bVar126;
  bVar82 = (byte)((uint)iVar17 >> 0x18) & bVar127;
  bVar83 = (byte)iVar18 & bVar128;
  bVar84 = (byte)((uint)iVar18 >> 8) & bVar130;
  bVar85 = (byte)((uint)iVar18 >> 0x10) & bVar131;
  bVar86 = (byte)((uint)iVar18 >> 0x18) & bVar132;
  bVar87 = (byte)iVar19 & bVar133;
  bVar88 = (byte)((uint)iVar19 >> 8) & bVar135;
  bVar89 = (byte)((uint)iVar19 >> 0x10) & bVar136;
  bVar90 = (byte)((uint)iVar19 >> 0x18) & bVar137;
  bVar91 = (byte)iVar20 & bVar138;
  bVar92 = (byte)((uint)iVar20 >> 8) & bVar140;
  bVar93 = (byte)((uint)iVar20 >> 0x10) & bVar141;
  bVar94 = (byte)((uint)iVar20 >> 0x18) & bVar142;
  bVar95 = (byte)iVar24 & bVar121;
  bVar96 = (byte)((uint)iVar24 >> 8) & bVar125;
  bVar97 = (byte)((uint)iVar24 >> 0x10) & bVar126;
  bVar98 = (byte)((uint)iVar24 >> 0x18) & bVar127;
  bVar99 = (byte)iVar25 & bVar128;
  bVar100 = (byte)((uint)iVar25 >> 8) & bVar130;
  bVar101 = (byte)((uint)iVar25 >> 0x10) & bVar131;
  bVar102 = (byte)((uint)iVar25 >> 0x18) & bVar132;
  bVar103 = (byte)iVar26 & bVar133;
  bVar104 = (byte)((uint)iVar26 >> 8) & bVar135;
  bVar105 = (byte)((uint)iVar26 >> 0x10) & bVar136;
  bVar106 = (byte)((uint)iVar26 >> 0x18) & bVar137;
  bVar107 = (byte)iVar27 & bVar138;
  bVar108 = (byte)((uint)iVar27 >> 8) & bVar140;
  bVar109 = (byte)((uint)iVar27 >> 0x10) & bVar141;
  bVar110 = (byte)((uint)iVar27 >> 0x18) & bVar142;
  auVar114[0] = (byte)iVar112 & bVar121;
  auVar114[1] = (byte)((uint)iVar112 >> 8) & bVar125;
  auVar114[2] = (byte)((uint)iVar112 >> 0x10) & bVar126;
  auVar114[3] = (byte)((uint)iVar112 >> 0x18) & bVar127;
  auVar114[4] = (byte)iVar116 & bVar128;
  auVar114[5] = (byte)((uint)iVar116 >> 8) & bVar130;
  auVar114[6] = (byte)((uint)iVar116 >> 0x10) & bVar131;
  auVar114[7] = (byte)((uint)iVar116 >> 0x18) & bVar132;
  auVar114[8] = (byte)iVar118 & bVar133;
  auVar114[9] = (byte)((uint)iVar118 >> 8) & bVar135;
  auVar114[10] = (byte)((uint)iVar118 >> 0x10) & bVar136;
  auVar114[0xb] = (byte)((uint)iVar118 >> 0x18) & bVar137;
  auVar114[0xc] = (byte)iVar120 & bVar138;
  auVar114[0xd] = (byte)((uint)iVar120 >> 8) & bVar140;
  auVar114[0xe] = (byte)((uint)iVar120 >> 0x10) & bVar141;
  auVar114[0xf] = (byte)((uint)iVar120 >> 0x18) & bVar142;
  bVar162 = (byte)iVar30 & bVar121;
  bVar163 = (byte)((uint)iVar30 >> 8) & bVar125;
  bVar164 = (byte)((uint)iVar30 >> 0x10) & bVar126;
  bVar165 = (byte)((uint)iVar30 >> 0x18) & bVar127;
  bVar166 = (byte)iVar31 & bVar128;
  bVar167 = (byte)((uint)iVar31 >> 8) & bVar130;
  bVar168 = (byte)((uint)iVar31 >> 0x10) & bVar131;
  bVar169 = (byte)((uint)iVar31 >> 0x18) & bVar132;
  bVar170 = (byte)iVar32 & bVar133;
  bVar171 = (byte)((uint)iVar32 >> 8) & bVar135;
  bVar172 = (byte)((uint)iVar32 >> 0x10) & bVar136;
  bVar173 = (byte)((uint)iVar32 >> 0x18) & bVar137;
  bVar174 = (byte)iVar33 & bVar138;
  bVar175 = (byte)((uint)iVar33 >> 8) & bVar140;
  bVar176 = (byte)((uint)iVar33 >> 0x10) & bVar141;
  bVar177 = (byte)((uint)iVar33 >> 0x18) & bVar142;
  auVar124[0] = (byte)iVar148 & bVar121;
  auVar124[1] = (byte)((uint)iVar148 >> 8) & bVar125;
  auVar124[2] = (byte)((uint)iVar148 >> 0x10) & bVar126;
  auVar124[3] = (byte)((uint)iVar148 >> 0x18) & bVar127;
  auVar124[4] = (byte)iVar151 & bVar128;
  auVar124[5] = (byte)((uint)iVar151 >> 8) & bVar130;
  auVar124[6] = (byte)((uint)iVar151 >> 0x10) & bVar131;
  auVar124[7] = (byte)((uint)iVar151 >> 0x18) & bVar132;
  auVar124[8] = (byte)iVar154 & bVar133;
  auVar124[9] = (byte)((uint)iVar154 >> 8) & bVar135;
  auVar124[10] = (byte)((uint)iVar154 >> 0x10) & bVar136;
  auVar124[0xb] = (byte)((uint)iVar154 >> 0x18) & bVar137;
  auVar124[0xc] = (byte)iVar157 & bVar138;
  auVar124[0xd] = (byte)((uint)iVar157 >> 8) & bVar140;
  auVar124[0xe] = (byte)((uint)iVar157 >> 0x10) & bVar141;
  auVar124[0xf] = (byte)((uint)iVar157 >> 0x18) & bVar142;
  auVar178[1] = bVar55;
  auVar178[0] = bVar54;
  auVar178[2] = bVar56;
  auVar178[3] = bVar57;
  auVar178[4] = bVar58;
  auVar178[5] = bVar60;
  auVar178[6] = bVar62;
  auVar178[7] = bVar64;
  auVar178[8] = bVar65;
  auVar178[9] = bVar67;
  auVar178[10] = bVar69;
  auVar178[0xb] = bVar71;
  auVar178[0xc] = bVar72;
  auVar178[0xd] = bVar74;
  auVar178[0xe] = bVar76;
  auVar178[0xf] = bVar78;
  auVar179[1] = bVar55;
  auVar179[0] = bVar54;
  auVar179[2] = bVar56;
  auVar179[3] = bVar57;
  auVar179[4] = bVar58;
  auVar179[5] = bVar60;
  auVar179[6] = bVar62;
  auVar179[7] = bVar64;
  auVar179[8] = bVar65;
  auVar179[9] = bVar67;
  auVar179[10] = bVar69;
  auVar179[0xb] = bVar71;
  auVar179[0xc] = bVar72;
  auVar179[0xd] = bVar74;
  auVar179[0xe] = bVar76;
  auVar179[0xf] = bVar78;
  auVar178 = NEON_ext(auVar178,auVar179,8,1);
  auVar180[1] = bVar80;
  auVar180[0] = bVar79;
  auVar180[2] = bVar81;
  auVar180[3] = bVar82;
  auVar180[4] = bVar83;
  auVar180[5] = bVar84;
  auVar180[6] = bVar85;
  auVar180[7] = bVar86;
  auVar180[8] = bVar87;
  auVar180[9] = bVar88;
  auVar180[10] = bVar89;
  auVar180[0xb] = bVar90;
  auVar180[0xc] = bVar91;
  auVar180[0xd] = bVar92;
  auVar180[0xe] = bVar93;
  auVar180[0xf] = bVar94;
  auVar181[1] = bVar80;
  auVar181[0] = bVar79;
  auVar181[2] = bVar81;
  auVar181[3] = bVar82;
  auVar181[4] = bVar83;
  auVar181[5] = bVar84;
  auVar181[6] = bVar85;
  auVar181[7] = bVar86;
  auVar181[8] = bVar87;
  auVar181[9] = bVar88;
  auVar181[10] = bVar89;
  auVar181[0xb] = bVar90;
  auVar181[0xc] = bVar91;
  auVar181[0xd] = bVar92;
  auVar181[0xe] = bVar93;
  auVar181[0xf] = bVar94;
  auVar180 = NEON_ext(auVar180,auVar181,8,1);
  auVar21[1] = bVar96;
  auVar21[0] = bVar95;
  auVar21[2] = bVar97;
  auVar21[3] = bVar98;
  auVar21[4] = bVar99;
  auVar21[5] = bVar100;
  auVar21[6] = bVar101;
  auVar21[7] = bVar102;
  auVar21[8] = bVar103;
  auVar21[9] = bVar104;
  auVar21[10] = bVar105;
  auVar21[0xb] = bVar106;
  auVar21[0xc] = bVar107;
  auVar21[0xd] = bVar108;
  auVar21[0xe] = bVar109;
  auVar21[0xf] = bVar110;
  auVar22[1] = bVar96;
  auVar22[0] = bVar95;
  auVar22[2] = bVar97;
  auVar22[3] = bVar98;
  auVar22[4] = bVar99;
  auVar22[5] = bVar100;
  auVar22[6] = bVar101;
  auVar22[7] = bVar102;
  auVar22[8] = bVar103;
  auVar22[9] = bVar104;
  auVar22[10] = bVar105;
  auVar22[0xb] = bVar106;
  auVar22[0xc] = bVar107;
  auVar22[0xd] = bVar108;
  auVar22[0xe] = bVar109;
  auVar22[0xf] = bVar110;
  auVar113 = NEON_ext(auVar21,auVar22,8,1);
  auVar179 = NEON_ext(auVar114,auVar114,8,1);
  auVar28[1] = bVar163;
  auVar28[0] = bVar162;
  auVar28[2] = bVar164;
  auVar28[3] = bVar165;
  auVar28[4] = bVar166;
  auVar28[5] = bVar167;
  auVar28[6] = bVar168;
  auVar28[7] = bVar169;
  auVar28[8] = bVar170;
  auVar28[9] = bVar171;
  auVar28[10] = bVar172;
  auVar28[0xb] = bVar173;
  auVar28[0xc] = bVar174;
  auVar28[0xd] = bVar175;
  auVar28[0xe] = bVar176;
  auVar28[0xf] = bVar177;
  auVar29[1] = bVar163;
  auVar29[0] = bVar162;
  auVar29[2] = bVar164;
  auVar29[3] = bVar165;
  auVar29[4] = bVar166;
  auVar29[5] = bVar167;
  auVar29[6] = bVar168;
  auVar29[7] = bVar169;
  auVar29[8] = bVar170;
  auVar29[9] = bVar171;
  auVar29[10] = bVar172;
  auVar29[0xb] = bVar173;
  auVar29[0xc] = bVar174;
  auVar29[0xd] = bVar175;
  auVar29[0xe] = bVar176;
  auVar29[0xf] = bVar177;
  auVar181 = NEON_ext(auVar28,auVar29,8,1);
  auVar123 = NEON_ext(auVar124,auVar124,8,1);
  do {
    if (((CONCAT13(auVar180[3] | bVar82 | auVar180[7] | bVar86,
                   CONCAT12(auVar180[2] | bVar81 | auVar180[6] | bVar85,
                            CONCAT11(auVar180[1] | bVar80 | auVar180[5] | bVar84,
                                     auVar180[0] | bVar79 | auVar180[4] | bVar83))) &
          CONCAT13(auVar178[3] | bVar57 | auVar178[7] | bVar64,
                   CONCAT12(auVar178[2] | bVar56 | auVar178[6] | bVar62,
                            CONCAT11(auVar178[1] | bVar55 | auVar178[5] | bVar60,
                                     auVar178[0] | bVar54 | auVar178[4] | bVar58))) &
          CONCAT13(auVar113[3] | bVar98 | auVar113[7] | bVar102,
                   CONCAT12(auVar113[2] | bVar97 | auVar113[6] | bVar101,
                            CONCAT11(auVar113[1] | bVar96 | auVar113[5] | bVar100,
                                     auVar113[0] | bVar95 | auVar113[4] | bVar99))) &
          CONCAT13(auVar179[3] | auVar114[3] | auVar179[7] | auVar114[7],
                   CONCAT12(auVar179[2] | auVar114[2] | auVar179[6] | auVar114[6],
                            CONCAT11(auVar179[1] | auVar114[1] | auVar179[5] | auVar114[5],
                                     auVar179[0] | auVar114[0] | auVar179[4] | auVar114[4]))) &
          CONCAT13(auVar181[3] | bVar165 | auVar181[7] | bVar169,
                   CONCAT12(auVar181[2] | bVar164 | auVar181[6] | bVar168,
                            CONCAT11(auVar181[1] | bVar163 | auVar181[5] | bVar167,
                                     auVar181[0] | bVar162 | auVar181[4] | bVar166))) &
         CONCAT13(auVar123[3] | auVar124[3] | auVar123[7] | auVar124[7],
                  CONCAT12(auVar123[2] | auVar124[2] | auVar123[6] | auVar124[6],
                           CONCAT11(auVar123[1] | auVar124[1] | auVar123[5] | auVar124[5],
                                    auVar123[0] | auVar124[0] | auVar123[4] | auVar124[4])))) >>
         (ulong)((uint)uVar39 & 0x1f) & 1) != 0) {
      uVar40 = *param_1;
      lVar38 = param_1[0xe];
      uVar41 = param_1[uVar39 + 0x10];
      lVar34 = uVar39 * 4;
      uVar145 = *(undefined4 *)((long)&local_90 + lVar34);
      uVar144 = *(undefined4 *)((long)&local_a0 + lVar34);
      uVar143 = *(undefined4 *)((long)&local_b0 + lVar34);
      uVar4 = *(uint *)(param_1 + 0xf);
      uVar37 = (ulong)uVar4;
      uVar5 = *(uint *)((long)param_1 + 0x7c);
      if (uVar4 < uVar5) {
        *(uint *)(param_1 + 0xf) = uVar4 + 1;
        if (lVar38 != 0) {
LAB__text__00540acc:
          puVar1 = (undefined8 *)(lVar38 + uVar37 * 0x20);
          *(undefined4 *)(puVar1 + 2) = uVar145;
          *puVar1 = uVar41;
          puVar1[1] = uVar40;
          *(undefined4 *)((long)puVar1 + 0x14) = uVar144;
          *(undefined4 *)(puVar1 + 3) = uVar143;
        }
      }
      else {
        iVar10 = uVar5 + (uVar5 >> 1);
        if (uVar5 == 0) {
          iVar10 = 1;
        }
        uVar5 = iVar10 + uVar5;
        if (lVar38 == 0) {
          lVar38 = FUN__text__00400f80(0xb,(ulong)uVar5 << 5);
          if (lVar38 != 0) {
            lVar34 = param_1[0xe];
            if ((lVar34 != 0) && (lVar34 != lVar38)) {
              if (uVar4 != 0) {
                if (uVar4 < 4) {
                  lVar35 = 0;
                }
                else {
                  lVar34 = 0;
                  lVar35 = 0;
                  do {
                    puVar1 = (undefined8 *)(lVar38 + lVar34);
                    lVar35 = lVar35 + -4;
                    *(undefined4 *)(puVar1 + 3) = 0;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    *puVar1 = 0;
                    puVar3 = (undefined8 *)(param_1[0xe] + lVar34);
                    uVar6 = *puVar3;
                    uVar7 = puVar3[1];
                    uVar36 = puVar3[2];
                    uVar8 = *(undefined4 *)(puVar3 + 3);
                    puVar1[4] = 0;
                    puVar1[5] = 0;
                    puVar1[6] = 0;
                    *(undefined4 *)(puVar1 + 7) = 0;
                    *(undefined4 *)(puVar1 + 3) = uVar8;
                    puVar1[1] = uVar7;
                    puVar1[2] = uVar36;
                    *puVar1 = uVar6;
                    lVar2 = param_1[0xe] + lVar34;
                    uVar36 = *(undefined8 *)(lVar2 + 0x30);
                    uVar6 = *(undefined8 *)(lVar2 + 0x20);
                    uVar7 = *(undefined8 *)(lVar2 + 0x28);
                    uVar8 = *(undefined4 *)(lVar2 + 0x38);
                    puVar1[8] = 0;
                    puVar1[9] = 0;
                    puVar1[10] = 0;
                    *(undefined4 *)(puVar1 + 0xb) = 0;
                    *(undefined4 *)(puVar1 + 7) = uVar8;
                    puVar1[4] = uVar6;
                    puVar1[5] = uVar7;
                    puVar1[6] = uVar36;
                    lVar2 = param_1[0xe] + lVar34;
                    uVar6 = *(undefined8 *)(lVar2 + 0x40);
                    uVar7 = *(undefined8 *)(lVar2 + 0x48);
                    uVar36 = *(undefined8 *)(lVar2 + 0x50);
                    uVar8 = *(undefined4 *)(lVar2 + 0x58);
                    puVar1[0xe] = 0;
                    puVar1[0xc] = 0;
                    puVar1[0xd] = 0;
                    *(undefined4 *)(puVar1 + 0xf) = 0;
                    *(undefined4 *)(puVar1 + 0xb) = uVar8;
                    puVar1[9] = uVar7;
                    puVar1[10] = uVar36;
                    puVar1[8] = uVar6;
                    lVar2 = param_1[0xe] + lVar34;
                    lVar34 = lVar34 + 0x80;
                    uVar6 = *(undefined8 *)(lVar2 + 0x60);
                    uVar7 = *(undefined8 *)(lVar2 + 0x68);
                    uVar36 = *(undefined8 *)(lVar2 + 0x70);
                    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(lVar2 + 0x78);
                    puVar1[0xd] = uVar7;
                    puVar1[0xe] = uVar36;
                    puVar1[0xc] = uVar6;
                  } while (-lVar35 != (uVar37 & 0xfffffffc));
                  lVar35 = -lVar35;
                }
                if ((uVar4 & 3) != 0) {
                  uVar37 = uVar37 & 3;
                  lVar35 = lVar35 << 5;
                  do {
                    puVar1 = (undefined8 *)(lVar38 + lVar35);
                    uVar37 = uVar37 - 1;
                    *(undefined4 *)(puVar1 + 3) = 0;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    *puVar1 = 0;
                    puVar3 = (undefined8 *)(param_1[0xe] + lVar35);
                    lVar35 = lVar35 + 0x20;
                    uVar6 = *puVar3;
                    uVar7 = puVar3[1];
                    uVar36 = puVar3[2];
                    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar3 + 3);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar7;
                    puVar1[2] = uVar36;
                  } while (uVar37 != 0);
                }
                lVar34 = param_1[0xe];
              }
              FUN__text__00400fc0(0xb,lVar34);
            }
            goto LAB__text__00540ccc;
          }
        }
        else {
          lVar38 = FUN__text__00400fa0(0xb,lVar38);
          if (lVar38 != 0) {
LAB__text__00540ccc:
            param_1[0xe] = lVar38;
            *(uint *)((long)param_1 + 0x7c) = uVar5;
            if (uVar4 < uVar5) {
              uVar37 = (ulong)*(uint *)(param_1 + 0xf);
              *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) + 1;
              goto LAB__text__00540acc;
            }
          }
        }
      }
    }
    uVar39 = uVar39 + 1;
    if (*(byte *)(param_1 + 0x14) <= uVar39) {
      return;
    }
  } while( true );
}


