/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004213f0; name: FUN_.text__004213f0
 */


void FUN__text__004213f0(long *param_1,long *param_2,long *param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [12];
  undefined1 (*pauVar18) [12];
  undefined1 (*pauVar19) [12];
  undefined1 (*pauVar20) [12];
  undefined1 (*pauVar21) [12];
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  float *pfVar33;
  undefined1 (*pauVar34) [12];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
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
  float in_s20;
  float in_register_00005284;
  float fVar86;
  float in_register_00005288;
  float in_register_0000528c;
  float in_s21;
  float fVar87;
  float fVar88;
  float fVar89;
  float in_register_000052a4;
  float fVar90;
  float fVar91;
  float in_register_000052a8;
  float fVar92;
  float fVar93;
  float in_register_000052ac;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float in_s23;
  float fVar102;
  float in_register_000052e4;
  float fVar103;
  float fVar104;
  float in_register_000052e8;
  float fVar105;
  float in_register_000052ec;
  float fVar106;
  float in_s24;
  float fVar107;
  float in_register_00005304;
  float fVar108;
  float in_register_00005308;
  float in_register_0000530c;
  float in_s25;
  float in_register_00005324;
  float fVar109;
  float in_register_00005328;
  float in_register_0000532c;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float in_s27;
  float fVar118;
  float in_register_00005364;
  float fVar119;
  float in_register_00005368;
  float in_register_0000536c;
  float in_s28;
  float in_register_00005384;
  float fVar120;
  float in_register_00005388;
  float in_register_0000538c;
  float in_s29;
  float fVar121;
  float in_register_000053a4;
  float fVar122;
  float in_register_000053a8;
  float in_register_000053ac;
  
  pfVar33 = (float *)*param_4;
  if (param_5 != 0) {
    pauVar2 = (undefined1 (*) [12])*param_3;
    pauVar16 = (undefined1 (*) [12])param_3[1];
    uVar31 = 0;
    pauVar3 = (undefined1 (*) [12])param_3[2];
    pauVar17 = (undefined1 (*) [12])param_3[3];
    fVar110 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar43 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar37 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
    fVar64 = (float)*(undefined8 *)*pauVar17;
    fVar66 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
    fVar114 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
    fVar44 = (float)*(undefined8 *)*pauVar16;
    fVar45 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
    fVar41 = SUB124(*pauVar2,8);
    fVar42 = SUB124(*pauVar16,8);
    fVar116 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
    fVar60 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
    fVar70 = SUB124(*pauVar3,8);
    fVar73 = SUB124(*pauVar17,8);
    pauVar4 = (undefined1 (*) [12])param_3[4];
    pauVar18 = (undefined1 (*) [12])param_3[5];
    fVar50 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
    fVar48 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
    pauVar5 = (undefined1 (*) [12])param_3[6];
    pauVar19 = (undefined1 (*) [12])param_3[7];
    pauVar6 = (undefined1 (*) [12])param_4[3];
    pauVar20 = (undefined1 (*) [12])param_4[4];
    fVar53 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
    fVar56 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
    fVar52 = (float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
    fVar49 = (float)*(undefined8 *)*pauVar19;
    fVar51 = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
    fVar81 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
    fVar80 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
    fVar112 = (float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
    fVar46 = (float)*(undefined8 *)*pauVar18;
    fVar47 = (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20);
    fVar78 = SUB124(*pauVar4,8);
    fVar82 = SUB124(*pauVar18,8);
    fVar87 = SUB124(*pauVar5,8);
    fVar92 = SUB124(*pauVar19,8);
    fVar55 = (float)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
    fVar54 = (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
    pauVar7 = (undefined1 (*) [12])param_4[5];
    pauVar21 = (undefined1 (*) [12])param_4[6];
    fVar95 = (float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20);
    fVar83 = (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
    fVar35 = (float)*(undefined8 *)*pauVar4;
    fVar39 = (float)*(undefined8 *)*pauVar5;
    lVar8 = param_2[4];
    lVar22 = param_2[5];
    fVar36 = (float)*(undefined8 *)*pauVar2;
    fVar40 = (float)*(undefined8 *)*pauVar3;
    fVar58 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
    fVar57 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
    pauVar34 = (undefined1 (*) [12])param_4[7];
    fVar100 = (float)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
    fVar98 = (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20);
    fVar102 = *(float *)(pauVar2[1] + 4);
    fVar103 = *(float *)(pauVar16[1] + 4);
    fVar88 = *(float *)(pauVar4[1] + 4);
    lVar9 = *param_1;
    lVar23 = param_1[1];
    fVar90 = *(float *)(pauVar18[1] + 4);
    lVar10 = param_1[6];
    lVar24 = param_1[7];
    fVar59 = -fVar50;
    fVar61 = -fVar112;
    fVar62 = -fVar53;
    fVar63 = -fVar52;
    fVar105 = *(float *)(pauVar3[1] + 4);
    lVar11 = *param_2;
    lVar25 = param_2[1];
    fVar93 = *(float *)(pauVar5[1] + 4);
    lVar12 = param_1[4];
    lVar26 = param_1[5];
    fVar106 = *(float *)(pauVar17[1] + 4);
    fVar94 = *(float *)(pauVar19[1] + 4);
    pauVar2 = (undefined1 (*) [12])param_4[1];
    pauVar3 = (undefined1 (*) [12])param_4[2];
    fVar38 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar77 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
    fVar75 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
    fVar71 = fVar55 * fVar78 - fVar54 * fVar88;
    fVar72 = fVar58 * fVar82 - fVar57 * fVar90;
    fVar74 = fVar95 * fVar87 - fVar83 * fVar93;
    fVar76 = fVar100 * fVar92 - fVar98 * fVar94;
    lVar13 = param_1[2];
    lVar27 = param_1[3];
    lVar14 = param_2[2];
    lVar28 = param_2[3];
    lVar15 = param_2[6];
    lVar29 = param_2[7];
    fVar65 = -fVar88;
    fVar67 = -fVar90;
    fVar68 = -fVar93;
    fVar69 = -fVar94;
    fVar79 = (SUB124(*pauVar20,8) * fVar78 + fVar55 * fVar48) -
             (fVar54 * fVar50 + (float)*(undefined8 *)*pauVar20 * fVar88);
    fVar90 = (SUB124(*pauVar7,8) * fVar82 + fVar58 * fVar47) -
             (fVar57 * fVar112 + (float)*(undefined8 *)*pauVar7 * fVar90);
    fVar83 = (SUB124(*pauVar21,8) * fVar87 + fVar95 * fVar56) -
             (fVar83 * fVar53 + (float)*(undefined8 *)*pauVar21 * fVar93);
    fVar93 = (SUB124(*pauVar34,8) * fVar92 + fVar100 * fVar51) -
             (fVar98 * fVar52 + (float)*(undefined8 *)*pauVar34 * fVar94);
    fVar50 = -fVar110;
    fVar52 = -fVar114;
    fVar53 = -fVar116;
    fVar54 = -fVar37;
    fVar55 = -fVar102;
    fVar57 = -fVar103;
    fVar58 = -fVar105;
    fVar88 = -fVar106;
    fVar112 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar95 = pfVar33[3] * fVar41 - pfVar33[1] * fVar102;
    fVar94 = fVar38 * fVar42 - fVar112 * fVar103;
    fVar98 = fVar77 * fVar70 - fVar75 * fVar105;
    fVar100 = fVar81 * fVar73 - fVar80 * fVar106;
    fVar110 = (pfVar33[2] * fVar41 + pfVar33[3] * fVar43) -
              (pfVar33[1] * fVar110 + *pfVar33 * fVar102);
    fVar112 = (SUB124(*pauVar2,8) * fVar42 + fVar38 * fVar45) -
              (fVar112 * fVar114 + (float)*(undefined8 *)*pauVar2 * fVar103);
    fVar114 = (SUB124(*pauVar3,8) * fVar70 + fVar77 * fVar60) -
              (fVar75 * fVar116 + (float)*(undefined8 *)*pauVar3 * fVar105);
    fVar116 = (SUB124(*pauVar6,8) * fVar73 + fVar81 * fVar66) -
              (fVar80 * fVar37 + (float)*(undefined8 *)*pauVar6 * fVar106);
    do {
      lVar30 = uVar31 * 4;
      uVar1 = (int)uVar31 + 4;
      uVar31 = (ulong)uVar1;
      pauVar2 = (undefined1 (*) [12])(lVar9 + lVar30);
      in_s24 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      fVar86 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      pauVar3 = (undefined1 (*) [12])(lVar13 + lVar30);
      in_register_00005308 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
      fVar104 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      pauVar4 = (undefined1 (*) [12])(lVar12 + lVar30);
      in_s21 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
      fVar109 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
      pauVar5 = (undefined1 (*) [12])(lVar26 + lVar30);
      in_register_000052a4 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
      fVar118 = (float)*(undefined8 *)*pauVar5;
      fVar119 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
      pauVar6 = (undefined1 (*) [12])(lVar10 + lVar30);
      in_register_000052a8 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
      fVar120 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
      pauVar7 = (undefined1 (*) [12])(lVar23 + lVar30);
      in_register_00005304 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      fVar89 = (float)*(undefined8 *)*pauVar7;
      fVar91 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      pauVar16 = (undefined1 (*) [12])(lVar27 + lVar30);
      in_register_0000530c = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
      fVar107 = (float)*(undefined8 *)*pauVar16;
      fVar108 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
      pauVar17 = (undefined1 (*) [12])(lVar24 + lVar30);
      in_register_000052ac = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
      fVar121 = (float)*(undefined8 *)*pauVar17;
      fVar122 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
      in_s20 = SUB124(*pauVar4,8);
      in_register_00005284 = SUB124(*pauVar5,8);
      in_s23 = SUB124(*pauVar2,8);
      in_register_000052e4 = SUB124(*pauVar7,8);
      in_register_000052e8 = SUB124(*pauVar3,8);
      in_register_000052ec = SUB124(*pauVar16,8);
      in_register_00005288 = SUB124(*pauVar6,8);
      in_register_0000528c = SUB124(*pauVar17,8);
      fVar37 = (float)*(undefined8 *)*pauVar2;
      fVar102 = (float)*(undefined8 *)*pauVar3;
      fVar38 = (float)*(undefined8 *)*pauVar4;
      fVar103 = (float)*(undefined8 *)*pauVar6;
      fVar111 = fVar110 + fVar37 * fVar36;
      fVar113 = fVar112 + fVar89 * fVar44;
      fVar115 = fVar114 + fVar102 * fVar40;
      fVar117 = fVar116 + fVar107 * fVar64;
      fVar80 = fVar79 + fVar38 * fVar35;
      fVar81 = fVar90 + fVar118 * fVar46;
      fVar84 = fVar83 + fVar103 * fVar39;
      fVar85 = fVar93 + fVar121 * fVar49;
      fVar96 = fVar95 + fVar37 * fVar43 + fVar86 * fVar36 + fVar111 * fVar50;
      fVar97 = fVar94 + fVar89 * fVar45 + fVar91 * fVar44 + fVar113 * fVar52;
      fVar99 = fVar98 + fVar102 * fVar60 + fVar104 * fVar40 + fVar115 * fVar53;
      fVar101 = fVar100 + fVar107 * fVar66 + fVar108 * fVar64 + fVar117 * fVar54;
      fVar105 = fVar71 + fVar38 * fVar48 + fVar109 * fVar35 + fVar80 * fVar59;
      fVar106 = fVar72 + fVar118 * fVar47 + fVar119 * fVar46 + fVar81 * fVar61;
      fVar75 = fVar74 + fVar103 * fVar56 + fVar120 * fVar39 + fVar84 * fVar62;
      fVar77 = fVar76 + fVar121 * fVar51 + fVar122 * fVar49 + fVar85 * fVar63;
      in_s25 = fVar37 * fVar41 + fVar86 * fVar43 + in_s23 * fVar36 + fVar111 * fVar55 +
               fVar96 * fVar50;
      in_register_00005324 =
           fVar89 * fVar42 + fVar91 * fVar45 + in_register_000052e4 * fVar44 + fVar113 * fVar57 +
           fVar97 * fVar52;
      in_register_00005328 =
           fVar102 * fVar70 + fVar104 * fVar60 + in_register_000052e8 * fVar40 + fVar115 * fVar58 +
           fVar99 * fVar53;
      in_register_0000532c =
           fVar107 * fVar73 + fVar108 * fVar66 + in_register_000052ec * fVar64 + fVar117 * fVar88 +
           fVar101 * fVar54;
      in_s28 = fVar38 * fVar78 + fVar109 * fVar48 + in_s20 * fVar35 + fVar80 * fVar65 +
               fVar105 * fVar59;
      in_register_00005384 =
           fVar118 * fVar82 + fVar119 * fVar47 + in_register_00005284 * fVar46 + fVar81 * fVar67 +
           fVar106 * fVar61;
      in_register_00005388 =
           fVar103 * fVar87 + fVar120 * fVar56 + in_register_00005288 * fVar39 + fVar84 * fVar68 +
           fVar75 * fVar62;
      in_register_0000538c =
           fVar121 * fVar92 + fVar122 * fVar51 + in_register_0000528c * fVar49 + fVar85 * fVar69 +
           fVar77 * fVar63;
      in_s27 = fVar86 * fVar41 + in_s23 * fVar43 + in_s24 * fVar36 + fVar96 * fVar55 +
               in_s25 * fVar50;
      in_register_00005364 =
           fVar91 * fVar42 + in_register_000052e4 * fVar45 + in_register_00005304 * fVar44 +
           fVar97 * fVar57 + in_register_00005324 * fVar52;
      in_register_00005368 =
           fVar104 * fVar70 + in_register_000052e8 * fVar60 + in_register_00005308 * fVar40 +
           fVar99 * fVar58 + in_register_00005328 * fVar53;
      in_register_0000536c =
           fVar108 * fVar73 + in_register_000052ec * fVar66 + in_register_0000530c * fVar64 +
           fVar101 * fVar88 + in_register_0000532c * fVar54;
      in_s29 = fVar109 * fVar78 + in_s20 * fVar48 + in_s21 * fVar35 + fVar105 * fVar65 +
               in_s28 * fVar59;
      in_register_000053a4 =
           fVar119 * fVar82 + in_register_00005284 * fVar47 + in_register_000052a4 * fVar46 +
           fVar106 * fVar67 + in_register_00005384 * fVar61;
      in_register_000053a8 =
           fVar120 * fVar87 + in_register_00005288 * fVar56 + in_register_000052a8 * fVar39 +
           fVar75 * fVar68 + in_register_00005388 * fVar62;
      in_register_000053ac =
           fVar122 * fVar92 + in_register_0000528c * fVar51 + in_register_000052ac * fVar49 +
           fVar77 * fVar69 + in_register_0000538c * fVar63;
      fVar79 = in_s20 * fVar78 + in_s21 * fVar48 + in_s28 * fVar65 + in_s29 * fVar59;
      fVar90 = in_register_00005284 * fVar82 + in_register_000052a4 * fVar47 +
               in_register_00005384 * fVar67 + in_register_000053a4 * fVar61;
      fVar83 = in_register_00005288 * fVar87 + in_register_000052a8 * fVar56 +
               in_register_00005388 * fVar68 + in_register_000053a8 * fVar62;
      fVar93 = in_register_0000528c * fVar92 + in_register_000052ac * fVar51 +
               in_register_0000538c * fVar69 + in_register_000053ac * fVar63;
      fVar110 = in_s23 * fVar41 + in_s24 * fVar43 + in_s25 * fVar55 + in_s27 * fVar50;
      fVar112 = in_register_000052e4 * fVar42 + in_register_00005304 * fVar45 +
                in_register_00005324 * fVar57 + in_register_00005364 * fVar52;
      fVar114 = in_register_000052e8 * fVar70 + in_register_00005308 * fVar60 +
                in_register_00005328 * fVar58 + in_register_00005368 * fVar53;
      fVar116 = in_register_000052ec * fVar73 + in_register_0000530c * fVar66 +
                in_register_0000532c * fVar88 + in_register_0000536c * fVar54;
      fVar95 = in_s24 * fVar41 + in_s27 * fVar55;
      fVar94 = in_register_00005304 * fVar42 + in_register_00005364 * fVar57;
      fVar98 = in_register_00005308 * fVar70 + in_register_00005368 * fVar58;
      fVar100 = in_register_0000530c * fVar73 + in_register_0000536c * fVar88;
      fVar71 = in_s21 * fVar78 + in_s29 * fVar65;
      fVar72 = in_register_000052a4 * fVar82 + in_register_000053a4 * fVar67;
      fVar74 = in_register_000052a8 * fVar87 + in_register_000053a8 * fVar68;
      fVar76 = in_register_000052ac * fVar92 + in_register_000053ac * fVar69;
      ((undefined8 *)(lVar11 + lVar30))[1] = CONCAT44(in_s27,in_s25);
      *(undefined8 *)(lVar11 + lVar30) = CONCAT44(fVar96,fVar111);
      ((undefined8 *)(lVar25 + lVar30))[1] = CONCAT44(in_register_00005364,in_register_00005324);
      *(undefined8 *)(lVar25 + lVar30) = CONCAT44(fVar97,fVar113);
      ((undefined8 *)(lVar14 + lVar30))[1] = CONCAT44(in_register_00005368,in_register_00005328);
      *(undefined8 *)(lVar14 + lVar30) = CONCAT44(fVar99,fVar115);
      ((undefined8 *)(lVar28 + lVar30))[1] = CONCAT44(in_register_0000536c,in_register_0000532c);
      *(undefined8 *)(lVar28 + lVar30) = CONCAT44(fVar101,fVar117);
      ((undefined8 *)(lVar8 + lVar30))[1] = CONCAT44(in_s29,in_s28);
      *(undefined8 *)(lVar8 + lVar30) = CONCAT44(fVar105,fVar80);
      ((undefined8 *)(lVar22 + lVar30))[1] = CONCAT44(in_register_000053a4,in_register_00005384);
      *(undefined8 *)(lVar22 + lVar30) = CONCAT44(fVar106,fVar81);
      ((undefined8 *)(lVar15 + lVar30))[1] = CONCAT44(in_register_000053a8,in_register_00005388);
      *(undefined8 *)(lVar15 + lVar30) = CONCAT44(fVar75,fVar84);
      ((undefined8 *)(lVar29 + lVar30))[1] = CONCAT44(in_register_000053ac,in_register_0000538c);
      *(undefined8 *)(lVar29 + lVar30) = CONCAT44(fVar77,fVar85);
    } while (uVar1 < param_5);
    pfVar33 = (float *)*param_4;
  }
  *(ulong *)(pfVar33 + 2) = CONCAT44(in_s24,in_s23);
  *(ulong *)pfVar33 = CONCAT44(in_s27,in_s25);
  puVar32 = (undefined8 *)param_4[1];
  puVar32[1] = CONCAT44(in_register_00005304,in_register_000052e4);
  *puVar32 = CONCAT44(in_register_00005364,in_register_00005324);
  puVar32 = (undefined8 *)param_4[2];
  puVar32[1] = CONCAT44(in_register_00005308,in_register_000052e8);
  *puVar32 = CONCAT44(in_register_00005368,in_register_00005328);
  puVar32 = (undefined8 *)param_4[3];
  puVar32[1] = CONCAT44(in_register_0000530c,in_register_000052ec);
  *puVar32 = CONCAT44(in_register_0000536c,in_register_0000532c);
  puVar32 = (undefined8 *)param_4[4];
  puVar32[1] = CONCAT44(in_s21,in_s20);
  *puVar32 = CONCAT44(in_s29,in_s28);
  puVar32 = (undefined8 *)param_4[5];
  puVar32[1] = CONCAT44(in_register_000052a4,in_register_00005284);
  *puVar32 = CONCAT44(in_register_000053a4,in_register_00005384);
  puVar32 = (undefined8 *)param_4[6];
  puVar32[1] = CONCAT44(in_register_000052a8,in_register_00005288);
  *puVar32 = CONCAT44(in_register_000053a8,in_register_00005388);
  puVar32 = (undefined8 *)param_4[7];
  puVar32[1] = CONCAT44(in_register_000052ac,in_register_0000528c);
  *puVar32 = CONCAT44(in_register_000053ac,in_register_0000538c);
  return;
}


