/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004238d0; name: FUN_.text__004238d0
 */


void FUN__text__004238d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                        long *param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [12];
  undefined1 (*pauVar11) [12];
  undefined1 (*pauVar12) [12];
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 (*pauVar19) [12];
  undefined1 (*pauVar20) [12];
  undefined1 (*pauVar21) [12];
  undefined1 (*pauVar22) [12];
  undefined1 (*pauVar23) [12];
  undefined1 (*pauVar24) [12];
  undefined1 (*pauVar25) [12];
  undefined1 (*pauVar26) [12];
  undefined1 (*pauVar27) [12];
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong uVar41;
  long lVar42;
  undefined8 *puVar43;
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float unaff_s13;
  float fVar120;
  float unaff_000051a4;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float unaff_s15;
  float fVar126;
  float unaff_000051e4;
  float in_register_000051e8;
  float fVar127;
  float in_register_000051ec;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
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
  
  lVar42 = *param_1;
  lVar13 = param_1[1];
  lVar28 = (ulong)(param_7 - 4) * 4;
  lVar2 = param_1[2];
  lVar14 = param_1[3];
  lVar3 = param_1[4];
  lVar15 = param_1[5];
  lVar4 = *param_2;
  lVar16 = param_2[1];
  uVar33 = *(undefined8 *)(lVar42 + lVar28 + 8);
  uVar30 = *(undefined8 *)(lVar13 + lVar28 + 8);
  lVar5 = param_2[2];
  lVar17 = param_2[3];
  lVar6 = param_2[4];
  lVar18 = param_2[5];
  uVar34 = *(undefined8 *)(lVar2 + lVar28 + 8);
  uVar31 = *(undefined8 *)(lVar14 + lVar28 + 8);
  puVar43 = (undefined8 *)(lVar3 + lVar28);
  uVar35 = puVar43[1];
  fVar72 = (float)uVar35;
  fVar161 = (float)((ulong)uVar35 >> 0x20);
  uVar29 = *puVar43;
  fVar68 = (float)uVar29;
  fVar160 = (float)((ulong)uVar29 >> 0x20);
  puVar43 = (undefined8 *)(lVar15 + lVar28);
  uVar32 = puVar43[1];
  uVar29 = *puVar43;
  fVar55 = (float)uVar29;
  fVar60 = (float)((ulong)uVar29 >> 0x20);
  if (param_7 != 0) {
    pauVar7 = (undefined1 (*) [12])*param_3;
    pauVar19 = (undefined1 (*) [12])param_3[1];
    pauVar8 = (undefined1 (*) [12])param_3[2];
    pauVar20 = (undefined1 (*) [12])param_3[3];
    uVar41 = 0;
    pauVar9 = (undefined1 (*) [12])*param_5;
    pauVar21 = (undefined1 (*) [12])param_5[1];
    fVar55 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
    fVar69 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
    pauVar10 = (undefined1 (*) [12])param_5[2];
    pauVar22 = (undefined1 (*) [12])param_5[3];
    fVar60 = (float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
    fVar75 = (float)*(undefined8 *)*pauVar19;
    fVar79 = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
    fVar50 = SUB124(*pauVar7,8);
    fVar61 = SUB124(*pauVar19,8);
    fVar68 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
    fVar85 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
    fVar72 = (float)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
    fVar90 = (float)*(undefined8 *)*pauVar20;
    fVar94 = (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
    fVar52 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
    fVar106 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
    fVar57 = (float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20);
    fVar110 = (float)*(undefined8 *)*pauVar21;
    fVar111 = (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
    fVar63 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
    fVar140 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
    fVar65 = (float)((ulong)*(undefined8 *)(*pauVar22 + 8) >> 0x20);
    fVar144 = (float)*(undefined8 *)*pauVar22;
    fVar146 = (float)((ulong)*(undefined8 *)*pauVar22 >> 0x20);
    fVar100 = SUB124(*pauVar8,8);
    fVar103 = SUB124(*pauVar20,8);
    fVar128 = SUB124(*pauVar9,8);
    fVar135 = SUB124(*pauVar21,8);
    fVar148 = SUB124(*pauVar10,8);
    fVar150 = SUB124(*pauVar22,8);
    fVar116 = *(float *)(pauVar9[1] + 4);
    pauVar11 = (undefined1 (*) [12])param_5[4];
    pauVar23 = (undefined1 (*) [12])param_5[5];
    pauVar12 = (undefined1 (*) [12])param_3[4];
    pauVar24 = (undefined1 (*) [12])param_3[5];
    fVar101 = *(float *)(pauVar11[1] + 4);
    fVar44 = (float)*(undefined8 *)*pauVar7;
    fVar48 = (float)*(undefined8 *)*pauVar8;
    fVar54 = (float)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
    fVar112 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
    fVar59 = (float)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
    fVar91 = (float)*(undefined8 *)*pauVar23;
    fVar95 = (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20);
    fVar114 = *(float *)(pauVar12[1] + 4);
    fVar45 = (float)*(undefined8 *)*pauVar9;
    fVar49 = (float)*(undefined8 *)*pauVar10;
    pauVar9 = (undefined1 (*) [12])param_6[4];
    pauVar25 = (undefined1 (*) [12])param_6[5];
    fVar53 = (float)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
    fVar141 = (float)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
    fVar51 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
    fVar46 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
    fVar64 = (float)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20);
    fVar62 = (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
    fVar58 = (float)((ulong)*(undefined8 *)(*pauVar24 + 8) >> 0x20);
    fVar76 = (float)*(undefined8 *)*pauVar24;
    fVar80 = (float)((ulong)*(undefined8 *)*pauVar24 >> 0x20);
    fVar83 = SUB124(*pauVar12,8);
    fVar87 = SUB124(*pauVar24,8);
    fVar77 = SUB124(*pauVar11,8);
    fVar82 = SUB124(*pauVar23,8);
    fVar102 = *(float *)(pauVar23[1] + 4);
    pauVar23 = (undefined1 (*) [12])param_4[4];
    pauVar26 = (undefined1 (*) [12])param_4[5];
    fVar81 = (float)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
    fVar78 = (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20);
    fVar86 = (float)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
    fVar84 = (float)((ulong)*(undefined8 *)*pauVar26 >> 0x20);
    fVar115 = *(float *)(pauVar24[1] + 4);
    fVar152 = (SUB124(*pauVar9,8) * fVar77 + fVar51 * fVar112) -
              (fVar46 * fVar54 + (float)*(undefined8 *)*pauVar9 * fVar101);
    fVar154 = (SUB124(*pauVar25,8) * fVar82 + fVar64 * fVar95) -
              (fVar62 * fVar59 + (float)*(undefined8 *)*pauVar25 * fVar102);
    pauVar9 = (undefined1 (*) [12])*param_6;
    pauVar25 = (undefined1 (*) [12])param_6[1];
    fVar89 = (float)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20);
    fVar88 = (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
    fVar56 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
    fVar47 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
    pauVar24 = (undefined1 (*) [12])param_6[2];
    pauVar27 = (undefined1 (*) [12])param_6[3];
    fVar132 = (float)((ulong)*(undefined8 *)(*pauVar27 + 8) >> 0x20);
    fVar129 = (float)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
    fVar156 = (SUB124(*pauVar23,8) * fVar83 + fVar81 * fVar141) -
              (fVar78 * fVar53 + (float)*(undefined8 *)*pauVar23 * fVar114);
    fVar157 = (SUB124(*pauVar26,8) * fVar87 + fVar86 * fVar80) -
              (fVar84 * fVar58 + (float)*(undefined8 *)*pauVar26 * fVar115);
    fVar161 = (float)((ulong)*(undefined8 *)(*pauVar24 + 8) >> 0x20);
    fVar160 = (float)((ulong)*(undefined8 *)*pauVar24 >> 0x20);
    pauVar23 = (undefined1 (*) [12])*param_4;
    pauVar26 = (undefined1 (*) [12])param_4[1];
    fVar107 = (float)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
    fVar105 = (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20);
    fVar93 = (float)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
    fVar108 = (float)((ulong)*(undefined8 *)*pauVar26 >> 0x20);
    fVar117 = *(float *)(pauVar21[1] + 4);
    fVar118 = *(float *)(pauVar10[1] + 4);
    fVar119 = *(float *)(pauVar22[1] + 4);
    pauVar10 = (undefined1 (*) [12])param_4[2];
    pauVar21 = (undefined1 (*) [12])param_4[3];
    fVar97 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
    fVar74 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
    fVar158 = *(float *)(pauVar7[1] + 4);
    fVar66 = (float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20);
    fVar109 = (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
    fVar159 = *(float *)(pauVar19[1] + 4);
    fVar92 = (SUB124(*pauVar9,8) * fVar128 + fVar56 * fVar106) -
             (fVar47 * fVar52 + (float)*(undefined8 *)*pauVar9 * fVar116);
    fVar96 = (SUB124(*pauVar25,8) * fVar135 + fVar89 * fVar111) -
             (fVar88 * fVar57 + (float)*(undefined8 *)*pauVar25 * fVar117);
    fVar98 = (SUB124(*pauVar24,8) * fVar148 + fVar161 * fVar140) -
             (fVar160 * fVar63 + (float)*(undefined8 *)*pauVar24 * fVar118);
    fVar99 = (SUB124(*pauVar27,8) * fVar150 + fVar132 * fVar146) -
             (fVar129 * fVar65 + (float)*(undefined8 *)*pauVar27 * fVar119);
    fVar122 = fVar51 * fVar77 - fVar46 * fVar101;
    fVar124 = fVar64 * fVar82 - fVar62 * fVar102;
    fVar67 = -fVar55;
    fVar70 = -fVar60;
    fVar71 = -fVar68;
    fVar73 = -fVar72;
    fVar78 = fVar81 * fVar83 - fVar78 * fVar114;
    fVar81 = fVar86 * fVar87 - fVar84 * fVar115;
    fVar84 = fVar56 * fVar128 - fVar47 * fVar116;
    fVar86 = fVar89 * fVar135 - fVar88 * fVar117;
    fVar88 = fVar161 * fVar148 - fVar160 * fVar118;
    fVar89 = fVar132 * fVar150 - fVar129 * fVar119;
    fVar160 = *(float *)(pauVar8[1] + 4);
    fVar161 = *(float *)(pauVar20[1] + 4);
    fVar51 = -fVar158;
    fVar56 = -fVar159;
    fVar62 = -fVar160;
    fVar64 = -fVar161;
    fVar129 = fVar107 * fVar50 - fVar105 * fVar158;
    fVar132 = fVar93 * fVar61 - fVar108 * fVar159;
    fVar136 = fVar97 * fVar100 - fVar74 * fVar160;
    fVar138 = fVar66 * fVar103 - fVar109 * fVar161;
    fVar52 = -fVar52;
    fVar57 = -fVar57;
    fVar63 = -fVar63;
    fVar65 = -fVar65;
    fVar46 = (float)*(undefined8 *)*pauVar12;
    fVar105 = (SUB124(*pauVar23,8) * fVar50 + fVar107 * fVar69) -
              (fVar105 * fVar55 + (float)*(undefined8 *)*pauVar23 * fVar158);
    fVar107 = (SUB124(*pauVar26,8) * fVar61 + fVar93 * fVar79) -
              (fVar108 * fVar60 + (float)*(undefined8 *)*pauVar26 * fVar159);
    fVar108 = (SUB124(*pauVar10,8) * fVar100 + fVar97 * fVar85) -
              (fVar74 * fVar68 + (float)*(undefined8 *)*pauVar10 * fVar160);
    fVar109 = (SUB124(*pauVar21,8) * fVar103 + fVar66 * fVar94) -
              (fVar109 * fVar72 + (float)*(undefined8 *)*pauVar21 * fVar161);
    fVar116 = -fVar116;
    fVar117 = -fVar117;
    fVar118 = -fVar118;
    fVar119 = -fVar119;
    fVar53 = -fVar53;
    fVar58 = -fVar58;
    fVar114 = -fVar114;
    fVar115 = -fVar115;
    fVar54 = -fVar54;
    fVar59 = -fVar59;
    fVar101 = -fVar101;
    fVar102 = -fVar102;
    fVar47 = (float)*(undefined8 *)*pauVar11;
    do {
      lVar28 = uVar41 * 4;
      uVar1 = (int)uVar41 + 4;
      uVar41 = (ulong)uVar1;
      pauVar7 = (undefined1 (*) [12])(lVar42 + lVar28);
      fVar66 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      fVar160 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      pauVar8 = (undefined1 (*) [12])(lVar13 + lVar28);
      fVar74 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
      fVar72 = (float)*(undefined8 *)*pauVar8;
      fVar161 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
      pauVar9 = (undefined1 (*) [12])(lVar2 + lVar28);
      fVar104 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      fVar131 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
      pauVar10 = (undefined1 (*) [12])(lVar14 + lVar28);
      fVar113 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
      fVar123 = (float)*(undefined8 *)*pauVar10;
      fVar134 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
      pauVar11 = (undefined1 (*) [12])(lVar3 + lVar28);
      fVar143 = (float)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
      fVar142 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
      pauVar12 = (undefined1 (*) [12])(lVar15 + lVar28);
      fVar151 = (float)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
      fVar125 = (float)*(undefined8 *)*pauVar12;
      fVar149 = (float)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
      fVar120 = SUB124(*pauVar7,8);
      fVar121 = SUB124(*pauVar8,8);
      fVar145 = SUB124(*pauVar11,8);
      fVar147 = SUB124(*pauVar12,8);
      fVar126 = SUB124(*pauVar9,8);
      fVar127 = SUB124(*pauVar10,8);
      fVar55 = (float)*(undefined8 *)*pauVar11;
      fVar60 = (float)*(undefined8 *)*pauVar7;
      fVar68 = (float)*(undefined8 *)*pauVar9;
      fVar105 = fVar105 + fVar60 * fVar44;
      fVar107 = fVar107 + fVar72 * fVar75;
      fVar108 = fVar108 + fVar68 * fVar48;
      fVar109 = fVar109 + fVar123 * fVar90;
      fVar156 = fVar156 + fVar55 * fVar46;
      fVar157 = fVar157 + fVar125 * fVar76;
      fVar130 = fVar129 + fVar60 * fVar69 + fVar160 * fVar44 + fVar105 * fVar67;
      fVar133 = fVar132 + fVar72 * fVar79 + fVar161 * fVar75 + fVar107 * fVar70;
      fVar137 = fVar136 + fVar68 * fVar85 + fVar131 * fVar48 + fVar108 * fVar71;
      fVar139 = fVar138 + fVar123 * fVar94 + fVar134 * fVar90 + fVar109 * fVar73;
      fVar78 = fVar78 + fVar55 * fVar141 + fVar142 * fVar46 + fVar156 * fVar53;
      fVar81 = fVar81 + fVar125 * fVar80 + fVar149 * fVar76 + fVar157 * fVar58;
      fVar153 = fVar152 + fVar156 * fVar47;
      fVar155 = fVar154 + fVar157 * fVar91;
      fVar93 = fVar92 + fVar105 * fVar45;
      fVar97 = fVar96 + fVar107 * fVar110;
      fVar158 = fVar98 + fVar108 * fVar49;
      fVar159 = fVar99 + fVar109 * fVar144;
      unaff_s15 = fVar60 * fVar50 + fVar160 * fVar69 + fVar120 * fVar44 + fVar105 * fVar51 +
                  fVar130 * fVar67;
      unaff_000051e4 =
           fVar72 * fVar61 + fVar161 * fVar79 + fVar121 * fVar75 + fVar107 * fVar56 +
           fVar133 * fVar70;
      in_register_000051e8 =
           fVar68 * fVar100 + fVar131 * fVar85 + fVar126 * fVar48 + fVar108 * fVar62 +
           fVar137 * fVar71;
      in_register_000051ec =
           fVar123 * fVar103 + fVar134 * fVar94 + fVar127 * fVar90 + fVar109 * fVar64 +
           fVar139 * fVar73;
      unaff_s13 = fVar55 * fVar83 + fVar142 * fVar141 + fVar145 * fVar46 + fVar156 * fVar114 +
                  fVar78 * fVar53;
      unaff_000051a4 =
           fVar125 * fVar87 + fVar149 * fVar80 + fVar147 * fVar76 + fVar157 * fVar115 +
           fVar81 * fVar58;
      fVar129 = fVar84 + fVar105 * fVar106 + fVar130 * fVar45 + fVar93 * fVar52;
      fVar132 = fVar86 + fVar107 * fVar111 + fVar133 * fVar110 + fVar97 * fVar57;
      fVar136 = fVar88 + fVar108 * fVar140 + fVar137 * fVar49 + fVar158 * fVar63;
      fVar138 = fVar89 + fVar109 * fVar146 + fVar139 * fVar144 + fVar159 * fVar65;
      fVar123 = fVar122 + fVar156 * fVar112 + fVar78 * fVar47 + fVar153 * fVar54;
      fVar125 = fVar124 + fVar157 * fVar95 + fVar81 * fVar91 + fVar155 * fVar59;
      fVar68 = fVar160 * fVar50 + fVar120 * fVar69 + fVar66 * fVar44 + fVar130 * fVar51 +
               unaff_s15 * fVar67;
      fVar160 = fVar161 * fVar61 + fVar121 * fVar79 + fVar74 * fVar75 + fVar133 * fVar56 +
                unaff_000051e4 * fVar70;
      fVar72 = fVar131 * fVar100 + fVar126 * fVar85 + fVar104 * fVar48 + fVar137 * fVar62 +
               in_register_000051e8 * fVar71;
      fVar161 = fVar134 * fVar103 + fVar127 * fVar94 + fVar113 * fVar90 + fVar139 * fVar64 +
                in_register_000051ec * fVar73;
      fVar55 = fVar142 * fVar83 + fVar145 * fVar141 + fVar143 * fVar46 + fVar78 * fVar114 +
               unaff_s13 * fVar53;
      fVar60 = fVar149 * fVar87 + fVar147 * fVar80 + fVar151 * fVar76 + fVar81 * fVar115 +
               unaff_000051a4 * fVar58;
      fVar105 = fVar105 * fVar128 + fVar130 * fVar106 + unaff_s15 * fVar45 + fVar93 * fVar116 +
                fVar129 * fVar52;
      fVar107 = fVar107 * fVar135 + fVar133 * fVar111 + unaff_000051e4 * fVar110 + fVar97 * fVar117
                + fVar132 * fVar57;
      fVar108 = fVar108 * fVar148 + fVar137 * fVar140 + in_register_000051e8 * fVar49 +
                fVar158 * fVar118 + fVar136 * fVar63;
      fVar109 = fVar109 * fVar150 + fVar139 * fVar146 + in_register_000051ec * fVar144 +
                fVar159 * fVar119 + fVar138 * fVar65;
      fVar131 = fVar130 * fVar128 + unaff_s15 * fVar106 + fVar68 * fVar45 + fVar129 * fVar116 +
                fVar105 * fVar52;
      fVar134 = fVar133 * fVar135 + unaff_000051e4 * fVar111 + fVar160 * fVar110 + fVar132 * fVar117
                + fVar107 * fVar57;
      fVar130 = fVar137 * fVar148 + in_register_000051e8 * fVar140 + fVar72 * fVar49 +
                fVar136 * fVar118 + fVar108 * fVar63;
      fVar133 = fVar139 * fVar150 + in_register_000051ec * fVar146 + fVar161 * fVar144 +
                fVar138 * fVar119 + fVar109 * fVar65;
      fVar156 = fVar156 * fVar77 + fVar78 * fVar112 + unaff_s13 * fVar47 + fVar153 * fVar101 +
                fVar123 * fVar54;
      fVar157 = fVar157 * fVar82 + fVar81 * fVar95 + unaff_000051a4 * fVar91 + fVar155 * fVar102 +
                fVar125 * fVar59;
      fVar92 = unaff_s15 * fVar128 + fVar68 * fVar106 + fVar105 * fVar116 + fVar131 * fVar52;
      fVar96 = unaff_000051e4 * fVar135 + fVar160 * fVar111 + fVar107 * fVar117 + fVar134 * fVar57;
      fVar98 = in_register_000051e8 * fVar148 + fVar72 * fVar140 + fVar108 * fVar118 +
               fVar130 * fVar63;
      fVar99 = in_register_000051ec * fVar150 + fVar161 * fVar146 + fVar109 * fVar119 +
               fVar133 * fVar65;
      fVar78 = fVar78 * fVar77 + unaff_s13 * fVar112 + fVar55 * fVar47 + fVar123 * fVar101 +
               fVar156 * fVar54;
      fVar81 = fVar81 * fVar82 + unaff_000051a4 * fVar95 + fVar60 * fVar91 + fVar125 * fVar102 +
               fVar157 * fVar59;
      fVar152 = unaff_s13 * fVar77 + fVar55 * fVar112 + fVar156 * fVar101 + fVar78 * fVar54;
      fVar154 = unaff_000051a4 * fVar82 + fVar60 * fVar95 + fVar157 * fVar102 + fVar81 * fVar59;
      fVar122 = fVar55 * fVar77 + fVar78 * fVar101;
      fVar124 = fVar60 * fVar82 + fVar81 * fVar102;
      fVar84 = fVar68 * fVar128 + fVar131 * fVar116;
      fVar86 = fVar160 * fVar135 + fVar134 * fVar117;
      fVar88 = fVar72 * fVar148 + fVar130 * fVar118;
      fVar89 = fVar161 * fVar150 + fVar133 * fVar119;
      puVar43 = (undefined8 *)(lVar4 + lVar28);
      puVar43[1] = CONCAT44(fVar131,fVar105);
      *puVar43 = CONCAT44(fVar129,fVar93);
      puVar43 = (undefined8 *)(lVar16 + lVar28);
      puVar43[1] = CONCAT44(fVar134,fVar107);
      *puVar43 = CONCAT44(fVar132,fVar97);
      puVar43 = (undefined8 *)(lVar5 + lVar28);
      puVar43[1] = CONCAT44(fVar130,fVar108);
      *puVar43 = CONCAT44(fVar136,fVar158);
      puVar43 = (undefined8 *)(lVar17 + lVar28);
      puVar43[1] = CONCAT44(fVar133,fVar109);
      *puVar43 = CONCAT44(fVar138,fVar159);
      puVar43 = (undefined8 *)(lVar6 + lVar28);
      puVar43[1] = CONCAT44(fVar78,fVar156);
      *puVar43 = CONCAT44(fVar123,fVar153);
      fVar129 = fVar66 * fVar50 + fVar68 * fVar51;
      fVar132 = fVar74 * fVar61 + fVar160 * fVar56;
      fVar136 = fVar104 * fVar100 + fVar72 * fVar62;
      fVar138 = fVar113 * fVar103 + fVar161 * fVar64;
      puVar43 = (undefined8 *)(lVar18 + lVar28);
      puVar43[1] = CONCAT44(fVar81,fVar157);
      *puVar43 = CONCAT44(fVar125,fVar155);
      fVar105 = fVar120 * fVar50 + fVar66 * fVar69 + unaff_s15 * fVar51 + fVar68 * fVar67;
      fVar107 = fVar121 * fVar61 + fVar74 * fVar79 + unaff_000051e4 * fVar56 + fVar160 * fVar70;
      fVar108 = fVar126 * fVar100 + fVar104 * fVar85 + in_register_000051e8 * fVar62 +
                fVar72 * fVar71;
      fVar109 = fVar127 * fVar103 + fVar113 * fVar94 + in_register_000051ec * fVar64 +
                fVar161 * fVar73;
      fVar78 = fVar143 * fVar83 + fVar55 * fVar114;
      fVar81 = fVar151 * fVar87 + fVar60 * fVar115;
      fVar156 = fVar145 * fVar83 + fVar143 * fVar141 + unaff_s13 * fVar114 + fVar55 * fVar53;
      fVar157 = fVar147 * fVar87 + fVar151 * fVar80 + unaff_000051a4 * fVar115 + fVar60 * fVar58;
    } while (uVar1 < param_7);
  }
  lVar42 = (ulong)(param_7 - 4) * 4;
  uVar37 = *(undefined8 *)(lVar5 + lVar42 + 8);
  uVar38 = *(undefined8 *)(lVar17 + lVar42 + 8);
  uVar39 = *(undefined8 *)(lVar6 + lVar42 + 8);
  uVar40 = *(undefined8 *)(lVar18 + lVar42 + 8);
  uVar29 = *(undefined8 *)(lVar4 + lVar42 + 8);
  uVar36 = *(undefined8 *)(lVar16 + lVar42 + 8);
  puVar43 = (undefined8 *)*param_4;
  puVar43[1] = uVar33;
  *puVar43 = CONCAT44(fVar68,unaff_s15);
  puVar43 = (undefined8 *)param_4[1];
  puVar43[1] = uVar30;
  *puVar43 = CONCAT44(fVar160,unaff_000051e4);
  puVar43 = (undefined8 *)param_4[2];
  puVar43[1] = uVar34;
  *puVar43 = CONCAT44(fVar72,in_register_000051e8);
  puVar43 = (undefined8 *)param_4[3];
  puVar43[1] = uVar31;
  *puVar43 = CONCAT44(fVar161,in_register_000051ec);
  puVar43 = (undefined8 *)*param_6;
  puVar43[1] = CONCAT44(fVar68,unaff_s15);
  *puVar43 = uVar29;
  puVar43 = (undefined8 *)param_6[1];
  puVar43[1] = CONCAT44(fVar160,unaff_000051e4);
  *puVar43 = uVar36;
  puVar43 = (undefined8 *)param_6[2];
  puVar43[1] = CONCAT44(fVar72,in_register_000051e8);
  *puVar43 = uVar37;
  puVar43 = (undefined8 *)param_6[3];
  puVar43[1] = CONCAT44(fVar161,in_register_000051ec);
  *puVar43 = uVar38;
  puVar43 = (undefined8 *)param_4[4];
  puVar43[1] = uVar35;
  *puVar43 = CONCAT44(fVar55,unaff_s13);
  puVar43 = (undefined8 *)param_4[5];
  puVar43[1] = uVar32;
  *puVar43 = CONCAT44(fVar60,unaff_000051a4);
  puVar43 = (undefined8 *)param_6[4];
  puVar43[1] = CONCAT44(fVar55,unaff_s13);
  *puVar43 = uVar39;
  puVar43 = (undefined8 *)param_6[5];
  puVar43[1] = CONCAT44(fVar60,unaff_000051a4);
  *puVar43 = uVar40;
  return;
}


