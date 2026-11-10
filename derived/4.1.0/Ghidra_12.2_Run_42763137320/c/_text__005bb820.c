/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bb820; name: FUN_.text__005bb820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bb820(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4,
                        undefined8 *param_5,undefined8 *param_6)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  bool bVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
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
  undefined8 local_c0 [16];
  
  uVar39 = param_5[5];
  uVar38 = param_5[4];
  fVar66 = *(float *)(param_5 + 6);
  fVar21 = *(float *)((long)param_5 + 0x34);
  fVar70 = *(float *)(param_5 + 7);
  uVar23 = NEON_fmov(0x3f800000,4);
  lVar20 = 0;
  uVar47 = param_5[1];
  uVar43 = *param_5;
  uVar41 = param_5[3];
  uVar40 = param_5[2];
  do {
    pfVar1 = (float *)(param_4 + lVar20);
    fVar28 = *pfVar1;
    fVar22 = pfVar1[1];
    fVar71 = pfVar1[2];
    fVar42 = (float)uVar43;
    fVar44 = (float)((ulong)uVar43 >> 0x20);
    fVar45 = (float)uVar47;
    fVar48 = (float)((ulong)uVar47 >> 0x20);
    fVar34 = (float)uVar40;
    fVar51 = (float)((ulong)uVar40 >> 0x20);
    fVar53 = (float)uVar41;
    fVar55 = (float)((ulong)uVar41 >> 0x20);
    fVar73 = (float)uVar38;
    fVar31 = (float)((ulong)uVar38 >> 0x20);
    fVar32 = (float)uVar39;
    fVar33 = (float)((ulong)uVar39 >> 0x20);
    fVar27 = 1.0 / (fVar48 * fVar28 + fVar55 * fVar22 + fVar33 * fVar71 + 1.0);
    auVar29._8_8_ = param_2._8_8_;
    auVar29._0_8_ = uVar23;
    auVar25._4_12_ = auVar29._4_12_;
    auVar25._0_4_ = (fVar70 + fVar45 * fVar28 + fVar53 * fVar22 + fVar32 * fVar71) * fVar27;
    *(long *)((long)local_c0 + lVar20 + 8) = auVar25._0_8_;
    *(ulong *)((long)local_c0 + lVar20) =
         CONCAT44((fVar21 + fVar44 * fVar28 + fVar51 * fVar22 + fVar31 * fVar71) * fVar27,
                  (fVar66 + fVar42 * fVar28 + fVar34 * fVar22 + fVar73 * fVar71) * fVar27);
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x80);
  fVar46 = (float)local_c0[1];
  fVar101 = (float)local_c0[0];
  fVar30 = (float)((ulong)local_c0[0] >> 0x20);
  auVar29 = NEON_fmov(0x3e800000,4);
  fVar76 = (float)local_c0[5];
  fVar68 = (float)local_c0[4];
  fVar69 = (float)((ulong)local_c0[4] >> 0x20);
  fVar75 = (float)local_c0[7];
  fVar58 = (float)local_c0[6];
  fVar60 = (float)((ulong)local_c0[6] >> 0x20);
  fVar94 = (float)local_c0[2];
  fVar99 = (float)((ulong)local_c0[2] >> 0x20);
  fVar77 = (float)local_c0[3];
  fVar63 = (float)local_c0[9];
  fVar35 = (float)local_c0[8];
  fVar64 = (float)((ulong)local_c0[8] >> 0x20);
  fVar74 = (float)local_c0[0xb];
  fVar49 = (float)local_c0[10];
  fVar72 = (float)((ulong)local_c0[10] >> 0x20);
  fVar84 = (float)_DAT_00724920;
  fVar86 = (float)((ulong)_DAT_00724920 >> 0x20);
  fVar91 = (float)uRam0000000000724928;
  fVar93 = (float)((ulong)uRam0000000000724928 >> 0x20);
  fVar81 = (float)local_c0[0xf];
  fVar65 = (float)local_c0[0xe];
  fVar79 = (float)((ulong)local_c0[0xe] >> 0x20);
  fVar22 = (float)local_c0[0xc];
  fVar71 = (float)((ulong)local_c0[0xc] >> 0x20);
  fVar27 = (float)local_c0[0xd];
  fVar24 = (fVar35 + fVar49 + fVar22 + fVar65) * auVar29._0_4_;
  fVar26 = (fVar64 + fVar72 + fVar71 + fVar79) * auVar29._4_4_;
  fVar95 = ((fVar101 + fVar94 + fVar68 + fVar58) * auVar29._0_4_ + fVar24) * 0.5;
  fVar96 = ((fVar30 + fVar99 + fVar69 + fVar60) * auVar29._4_4_ + fVar26) * 0.5;
  fVar50 = -fVar95;
  fVar28 = -fVar96;
  fVar52 = (float)_DAT_00724ba0;
  fVar54 = (float)((ulong)_DAT_00724ba0 >> 0x20);
  fVar56 = (float)uRam0000000000724ba8;
  fVar57 = (float)((ulong)uRam0000000000724ba8 >> 0x20);
  fVar62 = (float)uRam0000000000724a08;
  fVar67 = (float)((ulong)uRam0000000000724a08 >> 0x20);
  fVar59 = (float)_DAT_00724a00;
  fVar61 = (float)((ulong)_DAT_00724a00 >> 0x20);
  fVar89 = 1.0 / (fVar93 * fVar101 + fVar57 * fVar30 + fVar67 * fVar46 + 1.0);
  fVar98 = (fVar50 + fVar84 * fVar101 + fVar52 * fVar30 + fVar59 * fVar46) * fVar89;
  fVar100 = (fVar28 + fVar86 * fVar101 + fVar54 * fVar30 + fVar61 * fVar46) * fVar89;
  fVar89 = (fVar91 * fVar101 + fVar56 * fVar30 + fVar62 * fVar46 + 0.0) * fVar89;
  fVar24 = fVar24 - fVar95;
  fVar26 = fVar26 - fVar96;
  fVar101 = SQRT(fVar26 * fVar26 + fVar24 * fVar24);
  fVar26 = fVar26 / fVar101;
  fVar24 = fVar24 / fVar101;
  fVar97 = 1.0 / (fVar93 * fVar94 + fVar57 * fVar99 + fVar67 * fVar77 + 1.0);
  fVar36 = (fVar50 + fVar84 * fVar94 + fVar52 * fVar99 + fVar59 * fVar77) * fVar97;
  fVar37 = (fVar28 + fVar86 * fVar94 + fVar54 * fVar99 + fVar61 * fVar77) * fVar97;
  fVar97 = (fVar91 * fVar94 + fVar56 * fVar99 + fVar62 * fVar77 + 0.0) * fVar97;
  fVar94 = 1.0 / (fVar93 * fVar68 + fVar57 * fVar69 + fVar67 * fVar76 + 1.0);
  fVar95 = (fVar50 + fVar84 * fVar68 + fVar52 * fVar69 + fVar59 * fVar76) * fVar94;
  fVar96 = (fVar28 + fVar86 * fVar68 + fVar54 * fVar69 + fVar61 * fVar76) * fVar94;
  fVar94 = (fVar91 * fVar68 + fVar56 * fVar69 + fVar62 * fVar76 + 0.0) * fVar94;
  fVar82 = 1.0 / (fVar93 * fVar58 + fVar57 * fVar60 + fVar67 * fVar75 + 1.0);
  fVar101 = (float)((ulong)uVar23 >> 0x20);
  fVar83 = (fVar50 + fVar84 * fVar58 + fVar52 * fVar60 + fVar59 * fVar75) * fVar82;
  fVar85 = (fVar28 + fVar86 * fVar58 + fVar54 * fVar60 + fVar61 * fVar75) * fVar82;
  fVar82 = (fVar91 * fVar58 + fVar56 * fVar60 + fVar62 * fVar75 + 0.0) * fVar82;
  fVar75 = 1.0 / (fVar93 * fVar35 + fVar57 * fVar64 + fVar67 * fVar63 + 1.0);
  fVar58 = (fVar50 + fVar84 * fVar35 + fVar52 * fVar64 + fVar59 * fVar63) * fVar75;
  fVar60 = (fVar28 + fVar86 * fVar35 + fVar54 * fVar64 + fVar61 * fVar63) * fVar75;
  fVar75 = (fVar91 * fVar35 + fVar56 * fVar64 + fVar62 * fVar63 + 0.0) * fVar75;
  fVar76 = 1.0 / (fVar93 * fVar49 + fVar57 * fVar72 + fVar67 * fVar74 + 1.0);
  fVar63 = (fVar50 + fVar84 * fVar49 + fVar52 * fVar72 + fVar59 * fVar74) * fVar76;
  fVar68 = (fVar28 + fVar86 * fVar49 + fVar54 * fVar72 + fVar61 * fVar74) * fVar76;
  fVar76 = (fVar91 * fVar49 + fVar56 * fVar72 + fVar62 * fVar74 + 0.0) * fVar76;
  fVar77 = 1.0 / (fVar93 * fVar22 + fVar57 * fVar71 + fVar67 * fVar27 + 1.0);
  fVar78 = (fVar50 + fVar84 * fVar22 + fVar52 * fVar71 + fVar59 * fVar27) * fVar77;
  fVar80 = (fVar28 + fVar86 * fVar22 + fVar54 * fVar71 + fVar61 * fVar27) * fVar77;
  fVar77 = (fVar91 * fVar22 + fVar56 * fVar71 + fVar62 * fVar27 + 0.0) * fVar77;
  fVar30 = -fVar24;
  fVar46 = (float)_DAT_00724930;
  fVar49 = (float)((ulong)_DAT_00724930 >> 0x20);
  fVar72 = (float)uRam0000000000724938;
  fVar74 = (float)((ulong)uRam0000000000724938 >> 0x20);
  fVar35 = 1.0 / (fVar98 * 0.0 + fVar100 * 0.0 + fVar67 * fVar89 + fVar74);
  fVar90 = (fVar26 * fVar98 + fVar30 * fVar100 + fVar59 * fVar89 + fVar46) * fVar35;
  fVar92 = (fVar24 * fVar98 + fVar26 * fVar100 + fVar61 * fVar89 + fVar49) * fVar35;
  fVar35 = (fVar98 * 0.0 + fVar100 * 0.0 + fVar62 * fVar89 + fVar72) * fVar35;
  fVar99 = 1.0 / (fVar36 * 0.0 + fVar37 * 0.0 + fVar67 * fVar97 + fVar74);
  fVar89 = (fVar26 * fVar36 + fVar30 * fVar37 + fVar59 * fVar97 + fVar46) * fVar99;
  fVar69 = (fVar24 * fVar36 + fVar26 * fVar37 + fVar61 * fVar97 + fVar49) * fVar99;
  fVar99 = (fVar36 * 0.0 + fVar37 * 0.0 + fVar62 * fVar97 + fVar72) * fVar99;
  fVar98 = fVar84 * fVar66 + fVar52 * fVar21 + fVar59 * fVar70 + fVar50;
  fVar100 = fVar86 * fVar66 + fVar54 * fVar21 + fVar61 * fVar70 + fVar28;
  fVar87 = fVar91 * fVar66 + fVar56 * fVar21 + fVar62 * fVar70 + 0.0;
  fVar88 = fVar93 * fVar66 + fVar57 * fVar21 + fVar67 * fVar70 + 1.0;
  fVar27 = 1.0 / (fVar63 * 0.0 + fVar68 * 0.0 + fVar67 * fVar76 + fVar74);
  fVar64 = 1.0 / (fVar93 * fVar65 + fVar57 * fVar79 + fVar67 * fVar81 + 1.0);
  fVar21 = (fVar26 * fVar63 + fVar30 * fVar68 + fVar59 * fVar76 + fVar46) * fVar27;
  fVar22 = (fVar24 * fVar63 + fVar26 * fVar68 + fVar61 * fVar76 + fVar49) * fVar27;
  fVar27 = (fVar63 * 0.0 + fVar68 * 0.0 + fVar62 * fVar76 + fVar72) * fVar27;
  fVar37 = (fVar50 + fVar84 * fVar65 + fVar52 * fVar79 + fVar59 * fVar81) * fVar64;
  fVar97 = (fVar28 + fVar86 * fVar65 + fVar54 * fVar79 + fVar61 * fVar81) * fVar64;
  fVar64 = (fVar91 * fVar65 + fVar56 * fVar79 + fVar62 * fVar81 + 0.0) * fVar64;
  fVar104 = 1.0 / (fVar83 * 0.0 + fVar85 * 0.0 + fVar67 * fVar82 + fVar74);
  fVar65 = 1.0 / (fVar95 * 0.0 + fVar96 * 0.0 + fVar67 * fVar94 + fVar74);
  fVar79 = fVar84 * fVar42 + fVar52 * fVar44 + fVar59 * fVar45 + fVar50 * fVar48;
  fVar81 = fVar86 * fVar42 + fVar54 * fVar44 + fVar61 * fVar45 + fVar28 * fVar48;
  fVar63 = fVar91 * fVar42 + fVar56 * fVar44 + fVar62 * fVar45 + fVar48 * 0.0;
  fVar68 = fVar93 * fVar42 + fVar57 * fVar44 + fVar67 * fVar45 + fVar48 * 1.0;
  fVar102 = (fVar26 * fVar83 + fVar30 * fVar85 + fVar59 * fVar82 + fVar46) * fVar104;
  fVar103 = (fVar24 * fVar83 + fVar26 * fVar85 + fVar61 * fVar82 + fVar49) * fVar104;
  fVar104 = (fVar83 * 0.0 + fVar85 * 0.0 + fVar62 * fVar82 + fVar72) * fVar104;
  fVar76 = (fVar26 * fVar95 + fVar30 * fVar96 + fVar59 * fVar94 + fVar46) * fVar65;
  fVar82 = (fVar24 * fVar95 + fVar26 * fVar96 + fVar61 * fVar94 + fVar49) * fVar65;
  fVar65 = (fVar95 * 0.0 + fVar96 * 0.0 + fVar62 * fVar94 + fVar72) * fVar65;
  fVar66 = fVar84 * fVar73 + fVar52 * fVar31 + fVar59 * fVar32 + fVar50 * fVar33;
  fVar70 = fVar86 * fVar73 + fVar54 * fVar31 + fVar61 * fVar32 + fVar28 * fVar33;
  fVar71 = fVar91 * fVar73 + fVar56 * fVar31 + fVar62 * fVar32 + fVar33 * 0.0;
  fVar73 = fVar93 * fVar73 + fVar57 * fVar31 + fVar67 * fVar32 + fVar33 * 1.0;
  fVar42 = fVar26 * fVar66 + fVar30 * fVar70 + fVar59 * fVar71 + fVar46 * fVar73;
  fVar44 = fVar24 * fVar66 + fVar26 * fVar70 + fVar61 * fVar71 + fVar49 * fVar73;
  fVar45 = fVar66 * 0.0 + fVar70 * 0.0 + fVar62 * fVar71 + fVar72 * fVar73;
  fVar48 = fVar66 * 0.0 + fVar70 * 0.0 + fVar67 * fVar71 + fVar74 * fVar73;
  fVar66 = fVar84 * fVar34 + fVar52 * fVar51 + fVar59 * fVar53 + fVar50 * fVar55;
  fVar70 = fVar86 * fVar34 + fVar54 * fVar51 + fVar61 * fVar53 + fVar28 * fVar55;
  fVar28 = fVar91 * fVar34 + fVar56 * fVar51 + fVar62 * fVar53 + fVar55 * 0.0;
  fVar71 = fVar93 * fVar34 + fVar57 * fVar51 + fVar67 * fVar53 + fVar55 * 1.0;
  fVar36 = 1.0 / (fVar58 * 0.0 + fVar60 * 0.0 + fVar67 * fVar75 + fVar74);
  fVar51 = fVar26 * fVar98 + fVar30 * fVar100 + fVar59 * fVar87 + fVar46 * fVar88;
  fVar53 = fVar24 * fVar98 + fVar26 * fVar100 + fVar61 * fVar87 + fVar49 * fVar88;
  fVar55 = fVar98 * 0.0 + fVar100 * 0.0 + fVar62 * fVar87 + fVar72 * fVar88;
  fVar95 = fVar98 * 0.0 + fVar100 * 0.0 + fVar67 * fVar87 + fVar74 * fVar88;
  fVar31 = fVar26 * fVar66 + fVar30 * fVar70 + fVar59 * fVar28 + fVar46 * fVar71;
  fVar32 = fVar24 * fVar66 + fVar26 * fVar70 + fVar61 * fVar28 + fVar49 * fVar71;
  fVar33 = fVar66 * 0.0 + fVar70 * 0.0 + fVar62 * fVar28 + fVar72 * fVar71;
  fVar34 = fVar66 * 0.0 + fVar70 * 0.0 + fVar67 * fVar28 + fVar74 * fVar71;
  fVar96 = (fVar26 * fVar58 + fVar30 * fVar60 + fVar59 * fVar75 + fVar46) * fVar36;
  fVar94 = (fVar24 * fVar58 + fVar26 * fVar60 + fVar61 * fVar75 + fVar49) * fVar36;
  fVar36 = (fVar58 * 0.0 + fVar60 * 0.0 + fVar62 * fVar75 + fVar72) * fVar36;
  fVar73 = 1.0 / (fVar78 * 0.0 + fVar80 * 0.0 + fVar67 * fVar77 + fVar74);
  fVar70 = (fVar26 * fVar78 + fVar30 * fVar80 + fVar59 * fVar77 + fVar46) * fVar73;
  fVar71 = (fVar24 * fVar78 + fVar26 * fVar80 + fVar61 * fVar77 + fVar49) * fVar73;
  fVar73 = (fVar78 * 0.0 + fVar80 * 0.0 + fVar62 * fVar77 + fVar72) * fVar73;
  fVar28 = (float)NEON_fminnm(fVar92,0x7f7fffff);
  fVar66 = fVar69;
  if (fVar28 <= fVar69) {
    fVar66 = fVar28;
  }
  fVar50 = 1.0 / (fVar37 * 0.0 + fVar97 * 0.0 + fVar67 * fVar64 + fVar74);
  fVar58 = (fVar26 * fVar37 + fVar30 * fVar97 + fVar59 * fVar64 + fVar46) * fVar50;
  fVar60 = (fVar24 * fVar37 + fVar26 * fVar97 + fVar61 * fVar64 + fVar49) * fVar50;
  fVar50 = (fVar37 * 0.0 + fVar97 * 0.0 + fVar62 * fVar64 + fVar72) * fVar50;
  fVar30 = fVar26 * fVar79 + fVar30 * fVar81 + fVar59 * fVar63 + fVar46 * fVar68;
  fVar24 = fVar24 * fVar79 + fVar26 * fVar81 + fVar61 * fVar63 + fVar49 * fVar68;
  fVar26 = fVar79 * 0.0 + fVar81 * 0.0 + fVar62 * fVar63 + fVar72 * fVar68;
  fVar37 = fVar79 * 0.0 + fVar81 * 0.0 + fVar67 * fVar63 + fVar74 * fVar68;
  fVar28 = fVar92;
  if (fVar92 <= -3.4028235e+38) {
    fVar28 = -3.4028235e+38;
  }
  fVar97 = fVar69;
  if (fVar69 <= fVar28) {
    fVar97 = fVar28;
  }
  fVar28 = fVar82;
  if (fVar66 <= fVar82) {
    fVar28 = fVar66;
  }
  fVar66 = fVar82;
  if (fVar82 <= fVar97) {
    fVar66 = fVar97;
  }
  fVar97 = fVar103;
  if (fVar28 <= fVar103) {
    fVar97 = fVar28;
  }
  fVar28 = fVar103;
  if (fVar103 <= fVar66) {
    fVar28 = fVar66;
  }
  fVar66 = fVar94;
  if (fVar97 <= fVar94) {
    fVar66 = fVar97;
  }
  fVar97 = fVar94;
  if (fVar94 <= fVar28) {
    fVar97 = fVar28;
  }
  fVar28 = fVar22;
  if (fVar66 <= fVar22) {
    fVar28 = fVar66;
  }
  fVar66 = fVar22;
  if (fVar22 <= fVar97) {
    fVar66 = fVar97;
  }
  fVar97 = fVar71;
  if (fVar28 <= fVar71) {
    fVar97 = fVar28;
  }
  fVar28 = fVar71;
  if (fVar71 <= fVar66) {
    fVar28 = fVar66;
  }
  fVar66 = fVar60;
  if (fVar97 <= fVar60) {
    fVar66 = fVar97;
  }
  fVar97 = fVar60;
  if (fVar60 <= fVar28) {
    fVar97 = fVar28;
  }
  fVar28 = (fVar53 + fVar24 * (float)*param_6 + fVar32 * (float)((ulong)*param_6 >> 0x20) +
                     fVar44 * (float)param_6[1]) - fVar66;
  fVar79 = ABS(fVar66);
  fVar75 = ((fVar97 - fVar66) * fVar28) / ((fVar97 - fVar66) - (fVar28 + fVar28));
  fVar28 = fVar79 + fVar75 + fVar92;
  fVar81 = fVar79 + fVar75 + fVar69;
  fVar66 = fVar81 / fVar89;
  fVar97 = fVar28 / fVar90;
  bVar18 = true;
  bVar19 = false;
  if (fVar97 < 3.4028235e+38) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar90)) {
      bVar18 = fVar90 < 0.0;
      bVar19 = false;
    }
  }
  fVar64 = fVar97;
  if (bVar18 != bVar19) {
    fVar64 = 3.4028235e+38;
  }
  bVar18 = false;
  if ((-3.4028235e+38 < fVar97) && (bVar18 = false, !NAN(fVar90))) {
    bVar18 = fVar90 < 0.0;
  }
  if (!bVar18) {
    fVar97 = -3.4028235e+38;
  }
  bVar18 = true;
  bVar19 = false;
  if (fVar66 < fVar64) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar89)) {
      bVar18 = fVar89 < 0.0;
      bVar19 = false;
    }
  }
  fVar68 = fVar79 + fVar75 + fVar82;
  fVar69 = fVar79 + fVar75 + fVar103;
  fVar63 = fVar66;
  if (bVar18 != bVar19) {
    fVar63 = fVar64;
  }
  bVar18 = false;
  if ((fVar97 < fVar66) && (bVar18 = false, !NAN(fVar89))) {
    bVar18 = fVar89 < 0.0;
  }
  if (!bVar18) {
    fVar66 = fVar97;
  }
  fVar97 = fVar68 / fVar76;
  fVar64 = fVar79 + fVar75 + fVar94;
  fVar94 = fVar79 + fVar75 + fVar22;
  fVar22 = fVar79 + fVar75 + fVar60;
  bVar18 = true;
  bVar19 = false;
  if (fVar97 < fVar63) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar76)) {
      bVar18 = fVar76 < 0.0;
      bVar19 = false;
    }
  }
  fVar60 = fVar97;
  if (bVar18 != bVar19) {
    fVar60 = fVar63;
  }
  bVar18 = false;
  if ((fVar66 < fVar97) && (bVar18 = false, !NAN(fVar76))) {
    bVar18 = fVar76 < 0.0;
  }
  if (!bVar18) {
    fVar97 = fVar66;
  }
  fVar66 = fVar69 / fVar102;
  bVar18 = true;
  bVar19 = false;
  if (fVar66 < fVar60) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar102)) {
      bVar18 = fVar102 < 0.0;
      bVar19 = false;
    }
  }
  fVar63 = fVar66;
  if (bVar18 != bVar19) {
    fVar63 = fVar60;
  }
  bVar18 = false;
  if ((fVar97 < fVar66) && (bVar18 = false, !NAN(fVar102))) {
    bVar18 = fVar102 < 0.0;
  }
  if (!bVar18) {
    fVar66 = fVar97;
  }
  fVar97 = fVar64 / fVar96;
  bVar18 = true;
  bVar19 = false;
  if (fVar97 < fVar63) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar96)) {
      bVar18 = fVar96 < 0.0;
      bVar19 = false;
    }
  }
  fVar60 = fVar97;
  if (bVar18 != bVar19) {
    fVar60 = fVar63;
  }
  bVar18 = false;
  if ((fVar66 < fVar97) && (bVar18 = false, !NAN(fVar96))) {
    bVar18 = fVar96 < 0.0;
  }
  if (!bVar18) {
    fVar97 = fVar66;
  }
  fVar66 = fVar94 / fVar21;
  fVar71 = fVar79 + fVar75 + fVar71;
  bVar18 = true;
  bVar19 = false;
  if (fVar66 < fVar60) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar21)) {
      bVar18 = fVar21 < 0.0;
      bVar19 = false;
    }
  }
  fVar63 = fVar66;
  if (bVar18 != bVar19) {
    fVar63 = fVar60;
  }
  bVar18 = false;
  if ((fVar97 < fVar66) && (bVar18 = false, !NAN(fVar21))) {
    bVar18 = fVar21 < 0.0;
  }
  if (!bVar18) {
    fVar66 = fVar97;
  }
  fVar97 = fVar71 / fVar70;
  bVar18 = true;
  bVar19 = false;
  if (fVar97 < fVar63) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar70)) {
      bVar18 = fVar70 < 0.0;
      bVar19 = false;
    }
  }
  fVar60 = fVar97;
  if (bVar18 != bVar19) {
    fVar60 = fVar63;
  }
  bVar18 = false;
  if ((fVar66 < fVar97) && (bVar18 = false, !NAN(fVar70))) {
    bVar18 = fVar70 < 0.0;
  }
  if (!bVar18) {
    fVar97 = fVar66;
  }
  fVar66 = fVar22 / fVar58;
  bVar18 = true;
  bVar19 = false;
  if (fVar66 < fVar60) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar58)) {
      bVar18 = fVar58 < 0.0;
      bVar19 = false;
    }
  }
  fVar63 = fVar66;
  if (bVar18 != bVar19) {
    fVar63 = fVar60;
  }
  bVar18 = false;
  if ((fVar97 < fVar66) && (bVar18 = false, !NAN(fVar58))) {
    bVar18 = fVar58 < 0.0;
  }
  if (!bVar18) {
    fVar66 = fVar97;
  }
  fVar97 = ((fVar66 + fVar63) * -0.5) / (fVar66 * fVar63);
  fVar60 = 1.0 / (fVar93 * fVar90 + fVar28 * 0.0 + fVar67 * fVar35 + fVar74);
  fVar80 = 1.0 / (fVar93 * fVar89 + fVar81 * 0.0 + fVar67 * fVar99 + fVar74);
  fVar63 = 1.0 / (fVar93 * fVar76 + fVar68 * 0.0 + fVar67 * fVar65 + fVar74);
  fVar82 = 1.0 / (fVar93 * fVar102 + fVar69 * 0.0 + fVar67 * fVar104 + fVar74);
  fVar77 = 1.0 / (fVar93 * fVar96 + fVar64 * 0.0 + fVar67 * fVar36 + fVar74);
  fVar66 = 1.0 / (fVar93 * fVar21 + fVar94 * 0.0 + fVar67 * fVar27 + fVar74);
  fVar66 = ((fVar86 * fVar21 + fVar101 * fVar94 + fVar61 * fVar27 + fVar49) * fVar66) /
           ((fVar84 * fVar21 + fVar97 * fVar94 + fVar59 * fVar27 + fVar46) * fVar66);
  fVar94 = 1.0 / (fVar93 * fVar70 + fVar71 * 0.0 + fVar67 * fVar73 + fVar74);
  fVar78 = 1.0 / (fVar93 * fVar58 + fVar22 * 0.0 + fVar67 * fVar50 + fVar74);
  fVar27 = ((fVar86 * fVar90 + fVar101 * fVar28 + fVar61 * fVar35 + fVar49) * fVar60) /
           ((fVar84 * fVar90 + fVar97 * fVar28 + fVar59 * fVar35 + fVar46) * fVar60);
  fVar28 = ((fVar86 * fVar76 + fVar101 * fVar68 + fVar61 * fVar65 + fVar49) * fVar63) /
           ((fVar84 * fVar76 + fVar97 * fVar68 + fVar59 * fVar65 + fVar46) * fVar63);
  fVar21 = ((fVar86 * fVar96 + fVar101 * fVar64 + fVar61 * fVar36 + fVar49) * fVar77) /
           ((fVar84 * fVar96 + fVar97 * fVar64 + fVar59 * fVar36 + fVar46) * fVar77);
  bVar18 = true;
  bVar19 = false;
  if (fVar27 < 3.4028235e+38) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar27)) {
      bVar18 = fVar27 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar27 = 3.4028235e+38;
  }
  fVar96 = ((fVar86 * fVar89 + fVar101 * fVar81 + fVar61 * fVar99 + fVar49) * fVar80) /
           ((fVar84 * fVar89 + fVar97 * fVar81 + fVar59 * fVar99 + fVar46) * fVar80);
  fVar35 = ((fVar86 * fVar102 + fVar101 * fVar69 + fVar61 * fVar104 + fVar49) * fVar82) /
           ((fVar84 * fVar102 + fVar97 * fVar69 + fVar59 * fVar104 + fVar46) * fVar82);
  bVar18 = true;
  bVar19 = false;
  if (fVar96 < fVar27) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar96)) {
      bVar18 = fVar96 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar96 = fVar27;
  }
  fVar70 = ((fVar86 * fVar70 + fVar101 * fVar71 + fVar61 * fVar73 + fVar49) * fVar94) /
           ((fVar84 * fVar70 + fVar97 * fVar71 + fVar59 * fVar73 + fVar46) * fVar94);
  bVar18 = true;
  bVar19 = false;
  if (fVar28 < fVar96) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar28)) {
      bVar18 = fVar28 < 0.0;
      bVar19 = false;
    }
  }
  fVar22 = ((fVar86 * fVar58 + fVar101 * fVar22 + fVar61 * fVar50 + fVar49) * fVar78) /
           ((fVar84 * fVar58 + fVar97 * fVar22 + fVar59 * fVar50 + fVar46) * fVar78);
  if (bVar18 != bVar19) {
    fVar28 = fVar96;
  }
  bVar18 = true;
  bVar19 = false;
  if (fVar35 < fVar28) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar35)) {
      bVar18 = fVar35 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar35 = fVar28;
  }
  bVar18 = true;
  bVar19 = false;
  if (fVar21 < fVar35) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar21)) {
      bVar18 = fVar21 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar21 = fVar35;
  }
  bVar18 = true;
  bVar19 = false;
  if (fVar66 < fVar21) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar66)) {
      bVar18 = fVar66 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar66 = fVar21;
  }
  fVar21 = 1.0 / fVar75;
  bVar18 = true;
  bVar19 = false;
  if (fVar70 < fVar66) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar70)) {
      bVar18 = fVar70 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar70 = fVar66;
  }
  bVar18 = true;
  bVar19 = false;
  if (fVar22 < fVar70) {
    bVar18 = false;
    bVar19 = true;
    if (!NAN(fVar22)) {
      bVar18 = fVar22 < 0.0;
      bVar19 = false;
    }
  }
  if (bVar18 != bVar19) {
    fVar22 = fVar70;
  }
  fVar22 = fVar22 / fVar75;
  fVar79 = fVar79 + fVar53 + fVar75;
  fVar27 = fVar84 * fVar51 + fVar97 * fVar79 + fVar59 * fVar55 + fVar46 * fVar95;
  fVar73 = fVar86 * fVar51 + fVar101 * fVar79 + fVar61 * fVar55 + fVar49 * fVar95;
  fVar53 = fVar91 * fVar51 + fVar79 * 0.0 + fVar62 * fVar55 + fVar72 * fVar95;
  fVar51 = fVar93 * fVar51 + fVar79 * 0.0 + fVar67 * fVar55 + fVar74 * fVar95;
  fVar94 = fVar84 * fVar42 + fVar97 * fVar44 + fVar59 * fVar45 + fVar46 * fVar48;
  fVar36 = fVar86 * fVar42 + fVar101 * fVar44 + fVar61 * fVar45 + fVar49 * fVar48;
  fVar50 = fVar91 * fVar42 + fVar44 * 0.0 + fVar62 * fVar45 + fVar72 * fVar48;
  fVar58 = fVar93 * fVar42 + fVar44 * 0.0 + fVar67 * fVar45 + fVar74 * fVar48;
  fVar71 = fVar84 * fVar30 + fVar97 * fVar24 + fVar59 * fVar26 + fVar46 * fVar37;
  fVar45 = fVar86 * fVar30 + fVar101 * fVar24 + fVar61 * fVar26 + fVar49 * fVar37;
  fVar48 = fVar91 * fVar30 + fVar24 * 0.0 + fVar62 * fVar26 + fVar72 * fVar37;
  fVar24 = fVar93 * fVar30 + fVar24 * 0.0 + fVar67 * fVar26 + fVar74 * fVar37;
  fVar55 = fVar84 * fVar31 + fVar97 * fVar32 + fVar59 * fVar33 + fVar46 * fVar34;
  fVar42 = fVar86 * fVar31 + fVar101 * fVar32 + fVar61 * fVar33 + fVar49 * fVar34;
  fVar44 = fVar91 * fVar31 + fVar32 * 0.0 + fVar62 * fVar33 + fVar72 * fVar34;
  fVar31 = fVar93 * fVar31 + fVar32 * 0.0 + fVar67 * fVar33 + fVar74 * fVar34;
  fVar66 = fVar22 * fVar71 + fVar45 * 0.0 + fVar59 * fVar48 + fVar46 * fVar24;
  fVar70 = fVar71 * 0.0 + fVar21 * fVar45 + fVar61 * fVar48 + fVar49 * fVar24;
  fVar28 = fVar71 * 0.0 + fVar45 * 0.0 + fVar62 * fVar48 + fVar72 * fVar24;
  fVar71 = fVar71 * 0.0 + fVar45 * 0.0 + fVar67 * fVar48 + fVar74 * fVar24;
  fVar35 = fVar22 * fVar94 + fVar36 * 0.0 + fVar59 * fVar50 + fVar46 * fVar58;
  fVar95 = fVar94 * 0.0 + fVar21 * fVar36 + fVar61 * fVar50 + fVar49 * fVar58;
  fVar96 = fVar94 * 0.0 + fVar36 * 0.0 + fVar62 * fVar50 + fVar72 * fVar58;
  fVar94 = fVar94 * 0.0 + fVar36 * 0.0 + fVar67 * fVar50 + fVar74 * fVar58;
  fVar33 = fVar22 * fVar55 + fVar42 * 0.0 + fVar59 * fVar44 + fVar46 * fVar31;
  fVar34 = fVar55 * 0.0 + fVar21 * fVar42 + fVar61 * fVar44 + fVar49 * fVar31;
  fVar45 = fVar55 * 0.0 + fVar42 * 0.0 + fVar62 * fVar44 + fVar72 * fVar31;
  fVar44 = fVar55 * 0.0 + fVar42 * 0.0 + fVar67 * fVar44 + fVar74 * fVar31;
  fVar24 = fVar22 * fVar27 + fVar73 * 0.0 + fVar59 * fVar53 + fVar46 * fVar51;
  fVar36 = fVar27 * 0.0 + fVar21 * fVar73 + fVar61 * fVar53 + fVar49 * fVar51;
  fVar72 = fVar27 * 0.0 + fVar73 * 0.0 + fVar62 * fVar53 + fVar72 * fVar51;
  fVar74 = fVar27 * 0.0 + fVar73 * 0.0 + fVar67 * fVar53 + fVar74 * fVar51;
  fVar27 = (float)_DAT_00724a90;
  fVar73 = (float)((ulong)_DAT_00724a90 >> 0x20);
  fVar31 = (float)uRam0000000000724a98;
  fVar32 = (float)((ulong)uRam0000000000724a98 >> 0x20);
  fVar51 = fVar84 * fVar66 + fVar27 * fVar70 + fVar59 * fVar28 + fVar52 * fVar71;
  fVar53 = fVar86 * fVar66 + fVar73 * fVar70 + fVar61 * fVar28 + fVar54 * fVar71;
  fVar55 = fVar91 * fVar66 + fVar31 * fVar70 + fVar62 * fVar28 + fVar56 * fVar71;
  fVar42 = fVar93 * fVar66 + fVar32 * fVar70 + fVar67 * fVar28 + fVar57 * fVar71;
  fVar26 = fVar84 * fVar33 + fVar27 * fVar34 + fVar59 * fVar45 + fVar52 * fVar44;
  fVar30 = fVar86 * fVar33 + fVar73 * fVar34 + fVar61 * fVar45 + fVar54 * fVar44;
  fVar46 = fVar91 * fVar33 + fVar31 * fVar34 + fVar62 * fVar45 + fVar56 * fVar44;
  fVar49 = fVar93 * fVar33 + fVar32 * fVar34 + fVar67 * fVar45 + fVar57 * fVar44;
  fVar66 = *(float *)(param_3 + 0x30);
  fVar21 = *(float *)(param_3 + 0x34);
  fVar70 = *(float *)(param_3 + 0x38);
  fVar28 = *(float *)(param_3 + 0x40);
  fVar22 = *(float *)(param_3 + 0x44);
  fVar71 = *(float *)(param_3 + 0x48);
  fVar44 = fVar84 * fVar24 + fVar27 * fVar36 + fVar59 * fVar72 + fVar52 * fVar74;
  fVar45 = fVar86 * fVar24 + fVar73 * fVar36 + fVar61 * fVar72 + fVar54 * fVar74;
  fVar48 = fVar91 * fVar24 + fVar31 * fVar36 + fVar62 * fVar72 + fVar56 * fVar74;
  fVar24 = fVar93 * fVar24 + fVar32 * fVar36 + fVar67 * fVar72 + fVar57 * fVar74;
  fVar52 = fVar84 * fVar35 + fVar27 * fVar95 + fVar59 * fVar96 + fVar52 * fVar94;
  fVar54 = fVar86 * fVar35 + fVar73 * fVar95 + fVar61 * fVar96 + fVar54 * fVar94;
  fVar56 = fVar91 * fVar35 + fVar31 * fVar95 + fVar62 * fVar96 + fVar56 * fVar94;
  fVar57 = fVar93 * fVar35 + fVar32 * fVar95 + fVar67 * fVar96 + fVar57 * fVar94;
  fVar27 = fVar51 * fVar66;
  fVar73 = fVar53 * fVar66;
  fVar32 = fVar55 * fVar66;
  fVar66 = fVar42 * fVar66;
  fVar51 = fVar51 * fVar28;
  fVar53 = fVar53 * fVar28;
  fVar55 = fVar55 * fVar28;
  fVar42 = fVar42 * fVar28;
  fVar28 = fVar27 + fVar26 * fVar22;
  fVar31 = fVar73 + fVar30 * fVar22;
  fVar33 = fVar32 + fVar46 * fVar22;
  fVar34 = fVar66 + fVar49 * fVar22;
  fVar27 = fVar27 + fVar26 * fVar21;
  fVar73 = fVar73 + fVar30 * fVar21;
  fVar32 = fVar32 + fVar46 * fVar21;
  fVar66 = fVar66 + fVar49 * fVar21;
  fVar62 = 1.0 / (fVar24 + fVar66 + fVar57 * fVar70);
  fVar59 = (fVar44 + fVar27 + fVar52 * fVar70) * fVar62;
  fVar61 = (fVar45 + fVar73 + fVar54 * fVar70) * fVar62;
  fVar62 = (fVar48 + fVar32 + fVar56 * fVar70) * fVar62;
  fVar91 = fVar51 + fVar26 * fVar22;
  fVar93 = fVar53 + fVar30 * fVar22;
  fVar35 = fVar55 + fVar46 * fVar22;
  fVar95 = fVar42 + fVar49 * fVar22;
  fVar51 = fVar51 + fVar26 * fVar21;
  fVar53 = fVar53 + fVar30 * fVar21;
  fVar55 = fVar55 + fVar46 * fVar21;
  fVar42 = fVar42 + fVar49 * fVar21;
  fVar46 = 1.0 / (fVar24 + fVar42 + fVar57 * fVar70);
  fVar96 = (fVar44 + fVar51 + fVar52 * fVar70) * fVar46;
  fVar94 = (fVar45 + fVar53 + fVar54 * fVar70) * fVar46;
  fVar46 = (fVar48 + fVar55 + fVar56 * fVar70) * fVar46;
  fVar49 = 1.0 / (fVar24 + fVar34 + fVar57 * fVar70);
  fVar84 = (fVar44 + fVar28 + fVar52 * fVar70) * fVar49;
  fVar86 = (fVar45 + fVar31 + fVar54 * fVar70) * fVar49;
  fVar49 = (fVar48 + fVar33 + fVar56 * fVar70) * fVar49;
  fVar26 = 1.0 / (fVar24 + fVar95 + fVar57 * fVar70);
  fVar72 = (fVar44 + fVar91 + fVar52 * fVar70) * fVar26;
  fVar74 = (fVar45 + fVar93 + fVar54 * fVar70) * fVar26;
  fVar26 = (fVar48 + fVar35 + fVar56 * fVar70) * fVar26;
  fVar22 = 1.0 / (fVar24 + fVar66 + fVar57 * fVar71);
  fVar67 = (fVar44 + fVar27 + fVar52 * fVar71) * fVar22;
  fVar30 = (fVar45 + fVar73 + fVar54 * fVar71) * fVar22;
  fVar22 = (fVar48 + fVar32 + fVar56 * fVar71) * fVar22;
  fVar27 = 1.0 / (fVar24 + fVar42 + fVar57 * fVar71);
  fVar32 = (fVar44 + fVar51 + fVar52 * fVar71) * fVar27;
  fVar51 = (fVar45 + fVar53 + fVar54 * fVar71) * fVar27;
  fVar27 = (fVar48 + fVar55 + fVar56 * fVar71) * fVar27;
  fVar21 = 1.0 / (fVar24 + fVar34 + fVar57 * fVar71);
  fVar73 = (fVar44 + fVar28 + fVar52 * fVar71) * fVar21;
  fVar31 = (fVar45 + fVar31 + fVar54 * fVar71) * fVar21;
  fVar21 = (fVar48 + fVar33 + fVar56 * fVar71) * fVar21;
  fVar66 = 1.0 / (fVar24 + fVar95 + fVar57 * fVar71);
  fVar70 = (fVar44 + fVar91 + fVar52 * fVar71) * fVar66;
  fVar28 = (fVar45 + fVar93 + fVar54 * fVar71) * fVar66;
  fVar66 = (fVar48 + fVar35 + fVar56 * fVar71) * fVar66;
  auVar6._4_4_ = fVar61;
  auVar6._0_4_ = fVar59;
  auVar6._8_4_ = fVar62;
  auVar6._12_4_ = fVar101;
  auVar16._4_4_ = fVar94;
  auVar16._0_4_ = fVar96;
  auVar16._8_4_ = fVar46;
  auVar16._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar6,auVar16,4);
  auVar7._4_4_ = fVar61;
  auVar7._0_4_ = fVar59;
  auVar7._8_4_ = fVar62;
  auVar7._12_4_ = fVar101;
  auVar17._4_4_ = fVar94;
  auVar17._0_4_ = fVar96;
  auVar17._8_4_ = fVar46;
  auVar17._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar7,auVar17,4);
  auVar14._4_4_ = fVar86;
  auVar14._0_4_ = fVar84;
  auVar14._8_4_ = fVar49;
  auVar14._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar29,auVar14,4);
  auVar15._4_4_ = fVar86;
  auVar15._0_4_ = fVar84;
  auVar15._8_4_ = fVar49;
  auVar15._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar25,auVar15,4);
  auVar12._4_4_ = fVar74;
  auVar12._0_4_ = fVar72;
  auVar12._8_4_ = fVar26;
  auVar12._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar29,auVar12,4);
  auVar13._4_4_ = fVar74;
  auVar13._0_4_ = fVar72;
  auVar13._8_4_ = fVar26;
  auVar13._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar25,auVar13,4);
  auVar10._4_4_ = fVar30;
  auVar10._0_4_ = fVar67;
  auVar10._8_4_ = fVar22;
  auVar10._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar29,auVar10,4);
  auVar11._4_4_ = fVar30;
  auVar11._0_4_ = fVar67;
  auVar11._8_4_ = fVar22;
  auVar11._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar25,auVar11,4);
  auVar8._4_4_ = fVar51;
  auVar8._0_4_ = fVar32;
  auVar8._8_4_ = fVar27;
  auVar8._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar29,auVar8,4);
  auVar9._4_4_ = fVar51;
  auVar9._0_4_ = fVar32;
  auVar9._8_4_ = fVar27;
  auVar9._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar25,auVar9,4);
  auVar4._4_4_ = fVar31;
  auVar4._0_4_ = fVar73;
  auVar4._8_4_ = fVar21;
  auVar4._12_4_ = fVar101;
  auVar29 = NEON_fmin(auVar29,auVar4,4);
  auVar5._4_4_ = fVar31;
  auVar5._0_4_ = fVar73;
  auVar5._8_4_ = fVar21;
  auVar5._12_4_ = fVar101;
  auVar25 = NEON_fmax(auVar25,auVar5,4);
  auVar2._4_4_ = fVar28;
  auVar2._0_4_ = fVar70;
  auVar2._8_4_ = fVar66;
  auVar2._12_4_ = fVar101;
  NEON_fmin(auVar29,auVar2,4);
  auVar3._4_4_ = fVar28;
  auVar3._0_4_ = fVar70;
  auVar3._8_4_ = fVar66;
  auVar3._12_4_ = fVar101;
  NEON_fmax(auVar25,auVar3,4);
  NEON_fmov(0x3f800000,4);
  return;
}


