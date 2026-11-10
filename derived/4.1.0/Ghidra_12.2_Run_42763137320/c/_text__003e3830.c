/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e3830; name: FUN_.text__003e3830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__003e3830(long *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                   ulong param_6,int param_7)

{
  ulong *puVar1;
  uint uVar2;
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
  undefined1 auVar18 [15];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  size_t __n;
  ulong uVar27;
  long lVar28;
  undefined2 *puVar29;
  ulong *puVar30;
  ulong *__dest;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  byte bVar34;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  byte bVar56;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
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
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 uStack_108;
  undefined1 auStack_d4 [4];
  byte local_d0;
  uint7 uStack_cf;
  ulong uStack_c8;
  byte bStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte local_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  byte bStack_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar26 = uRam0000000000724b88;
  uVar25 = _DAT_00724b80;
  uVar24 = uRam0000000000724ad8;
  uVar23 = _DAT_00724ad0;
  uVar22 = uRam00000000007247e8;
  uVar32 = _DAT_007247e0;
  if (param_7 == 0) {
    uVar32 = FUN__text__003e3030(0,0,param_2,param_5,param_6);
    return uVar32;
  }
  puVar1 = (ulong *)((long)param_3 + param_4);
  bStack_98 = 0;
  bStack_97 = 0;
  bStack_96 = 0;
  bStack_95 = 0;
  bStack_94 = 0;
  bStack_93 = 0;
  bStack_92 = 0;
  bStack_91 = 0;
  local_a0 = 0;
  bStack_9f = 0;
  bStack_9e = 0;
  bStack_9d = 0;
  bStack_9c = 0;
  bStack_9b = 0;
  bStack_9a = 0;
  bStack_99 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  __dest = param_3;
  if (param_6 != 0) {
    uVar33 = 0;
    uVar31 = 0x22;
LAB__text__003e38f0:
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_108 = (undefined1)uVar26;
    if (uVar33 + 0x10 <= param_6) {
      auVar73 = *(undefined1 (*) [16])(param_5 + uVar33);
      bVar34 = auVar73[0];
      bVar37 = auVar73[1];
      bVar38 = auVar73[2];
      bVar39 = auVar73[3];
      bVar40 = auVar73[4];
      bVar41 = auVar73[5];
      bVar42 = auVar73[6];
      bVar43 = auVar73[7];
      bVar44 = auVar73[8];
      bVar45 = auVar73[9];
      bVar46 = auVar73[10];
      bVar47 = auVar73[0xb];
      bVar48 = auVar73[0xc];
      bVar49 = auVar73[0xd];
      bVar50 = auVar73[0xe];
      bVar75 = auVar73[0xf];
      if (uVar33 == 0) {
        auVar52 = NEON_ext(ZEXT816(0),auVar73,0xf,1);
        auVar123[0] = -((char)bVar34 < '\0');
        auVar123[1] = -((char)bVar37 < '\0');
        auVar123[2] = -((char)bVar38 < '\0');
        auVar123[3] = -((char)bVar39 < '\0');
        auVar123[4] = -((char)bVar40 < '\0');
        auVar123[5] = -((char)bVar41 < '\0');
        auVar123[6] = -((char)bVar42 < '\0');
        auVar123[7] = -((char)bVar43 < '\0');
        auVar123[8] = -((char)bVar44 < '\0');
        auVar123[9] = -((char)bVar45 < '\0');
        auVar123[10] = -((char)bVar46 < '\0');
        auVar123[0xb] = -((char)bVar47 < '\0');
        auVar123[0xc] = -((char)bVar48 < '\0');
        auVar123[0xd] = -((char)bVar49 < '\0');
        auVar123[0xe] = -((char)bVar50 < '\0');
        auVar123[0xf] = -((char)bVar75 < '\0');
        iVar70 = NEON_umaxv(auVar123,4);
        if (iVar70 == 0) goto LAB__text__003e39d8;
LAB__text__003e391c:
        uVar27 = auVar73._0_8_ & 0x4040404040404040;
        bVar74 = auVar123[0] & ~-((char)uVar27 == '\0');
        bVar76 = auVar123[1] & ~-((char)(uVar27 >> 8) == '\0');
        bVar77 = auVar123[2] & ~-((char)(uVar27 >> 0x10) == '\0');
        bVar78 = auVar123[3] & ~-((char)(uVar27 >> 0x18) == '\0');
        bVar79 = auVar123[4] & ~-((char)(uVar27 >> 0x20) == '\0');
        bVar80 = auVar123[5] & ~-((char)(uVar27 >> 0x28) == '\0');
        bVar81 = auVar123[6] & ~-((char)(uVar27 >> 0x30) == '\0');
        bVar82 = auVar123[7] & ~-((char)(uVar27 >> 0x38) == '\0');
        bVar83 = auVar123[8] & ~-((bVar44 & 0x40) == 0);
        bVar84 = auVar123[9] & ~-((bVar45 & 0x40) == 0);
        bVar85 = auVar123[10] & ~-((bVar46 & 0x40) == 0);
        bVar86 = auVar123[0xb] & ~-((bVar47 & 0x40) == 0);
        bVar87 = auVar123[0xc] & ~-((bVar48 & 0x40) == 0);
        bVar88 = auVar123[0xd] & ~-((bVar49 & 0x40) == 0);
        bVar89 = auVar123[0xe] & ~-((bVar50 & 0x40) == 0);
        bVar90 = auVar123[0xf] & ~-((bVar75 & 0x40) == 0);
        bVar107 = bVar74 & ~-((bVar34 & 0x20) == 0);
        bVar108 = bVar76 & ~-((bVar37 & 0x20) == 0);
        bVar109 = bVar77 & ~-((bVar38 & 0x20) == 0);
        bVar110 = bVar78 & ~-((bVar39 & 0x20) == 0);
        bVar111 = bVar79 & ~-((bVar40 & 0x20) == 0);
        bVar112 = bVar80 & ~-((bVar41 & 0x20) == 0);
        bVar113 = bVar81 & ~-((bVar42 & 0x20) == 0);
        bVar114 = bVar82 & ~-((bVar43 & 0x20) == 0);
        bVar115 = bVar83 & ~-((bVar44 & 0x20) == 0);
        bVar116 = bVar84 & ~-((bVar45 & 0x20) == 0);
        bVar117 = bVar85 & ~-((bVar46 & 0x20) == 0);
        bVar118 = bVar86 & ~-((bVar47 & 0x20) == 0);
        bVar119 = bVar87 & ~-((bVar48 & 0x20) == 0);
        bVar120 = bVar88 & ~-((bVar49 & 0x20) == 0);
        bVar121 = bVar89 & ~-((bVar50 & 0x20) == 0);
        bVar122 = bVar90 & ~-((bVar75 & 0x20) == 0);
        bVar56 = bVar74 ^ auVar123[0];
        bVar63 = bVar76 ^ auVar123[1];
        bVar64 = bVar77 ^ auVar123[2];
        bVar65 = bVar78 ^ auVar123[3];
        bVar66 = bVar79 ^ auVar123[4];
        bVar67 = bVar80 ^ auVar123[5];
        bVar68 = bVar81 ^ auVar123[6];
        bVar69 = bVar82 ^ auVar123[7];
        auVar57._0_8_ =
             CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,CONCAT13(bVar65,
                                                  CONCAT12(bVar64,CONCAT11(bVar63,bVar56)))))));
        auVar57[8] = bVar83 ^ auVar123[8];
        auVar57[9] = bVar84 ^ auVar123[9];
        auVar57[10] = bVar85 ^ auVar123[10];
        auVar57[0xb] = bVar86 ^ auVar123[0xb];
        auVar57[0xc] = bVar87 ^ auVar123[0xc];
        auVar57[0xd] = bVar88 ^ auVar123[0xd];
        auVar57[0xe] = bVar89 ^ auVar123[0xe];
        auVar57[0xf] = bVar90 ^ auVar123[0xf];
        bVar91 = bVar107 & ~-((bVar34 & 0x10) == 0);
        bVar92 = bVar108 & ~-((bVar37 & 0x10) == 0);
        bVar93 = bVar109 & ~-((bVar38 & 0x10) == 0);
        bVar94 = bVar110 & ~-((bVar39 & 0x10) == 0);
        bVar95 = bVar111 & ~-((bVar40 & 0x10) == 0);
        bVar96 = bVar112 & ~-((bVar41 & 0x10) == 0);
        bVar97 = bVar113 & ~-((bVar42 & 0x10) == 0);
        bVar98 = bVar114 & ~-((bVar43 & 0x10) == 0);
        bVar99 = bVar115 & ~-((bVar44 & 0x10) == 0);
        bVar100 = bVar116 & ~-((bVar45 & 0x10) == 0);
        bVar101 = bVar117 & ~-((bVar46 & 0x10) == 0);
        bVar102 = bVar118 & ~-((bVar47 & 0x10) == 0);
        bVar103 = bVar119 & ~-((bVar48 & 0x10) == 0);
        bVar104 = bVar120 & ~-((bVar49 & 0x10) == 0);
        bVar105 = bVar121 & ~-((bVar50 & 0x10) == 0);
        bVar106 = bVar122 & ~-((bVar75 & 0x10) == 0);
        auVar127[1] = bVar76;
        auVar127[0] = bVar74;
        auVar127[2] = bVar77;
        auVar127[3] = bVar78;
        auVar127[4] = bVar79;
        auVar127[5] = bVar80;
        auVar127[6] = bVar81;
        auVar127[7] = bVar82;
        auVar127[8] = bVar83;
        auVar127[9] = bVar84;
        auVar127[10] = bVar85;
        auVar127[0xb] = bVar86;
        auVar127[0xc] = bVar87;
        auVar127[0xd] = bVar88;
        auVar127[0xe] = bVar89;
        auVar127[0xf] = bVar90;
        auVar123 = NEON_ext(ZEXT816(0),auVar127,0xf,1);
        auVar9[1] = bVar108;
        auVar9[0] = bVar107;
        auVar9[2] = bVar109;
        auVar9[3] = bVar110;
        auVar9[4] = bVar111;
        auVar9[5] = bVar112;
        auVar9[6] = bVar113;
        auVar9[7] = bVar114;
        auVar9[8] = bVar115;
        auVar9[9] = bVar116;
        auVar9[10] = bVar117;
        auVar9[0xb] = bVar118;
        auVar9[0xc] = bVar119;
        auVar9[0xd] = bVar120;
        auVar9[0xe] = bVar121;
        auVar9[0xf] = bVar122;
        auVar127 = NEON_ext(ZEXT816(0),auVar9,0xe,1);
        auVar128[1] = bVar92;
        auVar128[0] = bVar91;
        auVar128[2] = bVar93;
        auVar128[3] = bVar94;
        auVar128[4] = bVar95;
        auVar128[5] = bVar96;
        auVar128[6] = bVar97;
        auVar128[7] = bVar98;
        auVar128[8] = bVar99;
        auVar128[9] = bVar100;
        auVar128[10] = bVar101;
        auVar128[0xb] = bVar102;
        auVar128[0xc] = bVar103;
        auVar128[0xd] = bVar104;
        auVar128[0xe] = bVar105;
        auVar128[0xf] = bVar106;
        auVar128 = NEON_ext(ZEXT816(0),auVar128,0xd,1);
        auVar124[0] = -(bVar56 == (byte)(auVar127[0] | auVar123[0] | auVar128[0] | local_a0));
        auVar124[1] = -(bVar63 == (byte)(auVar127[1] | auVar123[1] | auVar128[1] | bStack_9f));
        auVar124[2] = -(bVar64 == (byte)(auVar127[2] | auVar123[2] | auVar128[2] | bStack_9e));
        auVar124[3] = -(bVar65 == (byte)(auVar127[3] | auVar123[3] | auVar128[3] | bStack_9d));
        auVar124[4] = -(bVar66 == (byte)(auVar127[4] | auVar123[4] | auVar128[4] | bStack_9c));
        auVar124[5] = -(bVar67 == (byte)(auVar127[5] | auVar123[5] | auVar128[5] | bStack_9b));
        auVar124[6] = -(bVar68 == (byte)(auVar127[6] | auVar123[6] | auVar128[6] | bStack_9a));
        auVar124[7] = -(bVar69 == (byte)(auVar127[7] | auVar123[7] | auVar128[7] | bStack_99));
        auVar124[8] = -(auVar57[8] == (byte)(auVar127[8] | auVar123[8] | auVar128[8] | bStack_98));
        auVar124[9] = -(auVar57[9] == (byte)(auVar127[9] | auVar123[9] | auVar128[9] | bStack_97));
        auVar124[10] = -(auVar57[10] ==
                        (byte)(auVar127[10] | auVar123[10] | auVar128[10] | bStack_96));
        auVar124[0xb] =
             -(auVar57[0xb] == (byte)(auVar127[0xb] | auVar123[0xb] | auVar128[0xb] | bStack_95));
        auVar124[0xc] =
             -(auVar57[0xc] == (byte)(auVar127[0xc] | auVar123[0xc] | auVar128[0xc] | bStack_94));
        auVar124[0xd] =
             -(auVar57[0xd] == (byte)(auVar127[0xd] | auVar123[0xd] | auVar128[0xd] | bStack_93));
        auVar124[0xe] =
             -(auVar57[0xe] == (byte)(auVar127[0xe] | auVar123[0xe] | auVar128[0xe] | bStack_92));
        auVar124[0xf] =
             -(auVar57[0xf] == (byte)(auVar127[0xf] | auVar123[0xf] | auVar128[0xf] | bStack_91));
        iVar70 = NEON_uminv(auVar124,4);
        if (iVar70 != -1) {
          FUN__text__003e4010(&local_b0);
          goto joined_r0x003e3b08;
        }
        auVar71[0] = auVar52[0] >> 4;
        auVar71[1] = auVar52[1] >> 4;
        auVar71[2] = auVar52[2] >> 4;
        auVar71[3] = auVar52[3] >> 4;
        auVar71[4] = auVar52[4] >> 4;
        auVar71[5] = auVar52[5] >> 4;
        auVar71[6] = auVar52[6] >> 4;
        auVar71[7] = auVar52[7] >> 4;
        auVar71[8] = auVar52[8] >> 4;
        auVar71[9] = auVar52[9] >> 4;
        auVar71[10] = auVar52[10] >> 4;
        auVar71[0xb] = auVar52[0xb] >> 4;
        auVar71[0xc] = auVar52[0xc] >> 4;
        auVar71[0xd] = auVar52[0xd] >> 4;
        auVar71[0xe] = auVar52[0xe] >> 4;
        auVar71[0xf] = auVar52[0xf] >> 4;
        auVar51._0_8_ = auVar52._0_8_ & 0xf0f0f0f0f0f0f0f;
        auVar51[8] = auVar52[8] & 0xf;
        auVar51[9] = auVar52[9] & 0xf;
        auVar51[10] = auVar52[10] & 0xf;
        auVar51[0xb] = auVar52[0xb] & 0xf;
        auVar51[0xc] = auVar52[0xc] & 0xf;
        auVar51[0xd] = auVar52[0xd] & 0xf;
        auVar51[0xe] = auVar52[0xe] & 0xf;
        auVar51[0xf] = auVar52[0xf] & 0xf;
        auVar125[0] = bVar34 >> 4;
        auVar125[1] = bVar37 >> 4;
        auVar125[2] = bVar38 >> 4;
        auVar125[3] = bVar39 >> 4;
        auVar125[4] = bVar40 >> 4;
        auVar125[5] = bVar41 >> 4;
        auVar125[6] = bVar42 >> 4;
        auVar125[7] = bVar43 >> 4;
        auVar125[8] = bVar44 >> 4;
        auVar125[9] = bVar45 >> 4;
        auVar125[10] = bVar46 >> 4;
        auVar125[0xb] = bVar47 >> 4;
        auVar125[0xc] = bVar48 >> 4;
        auVar125[0xd] = bVar49 >> 4;
        auVar125[0xe] = bVar50 >> 4;
        auVar125[0xf] = bVar75 >> 4;
        auVar52._8_8_ = uVar22;
        auVar52._0_8_ = uVar32;
        auVar123 = a64_TBL(ZEXT816(0),auVar52,auVar71);
        auVar12._8_8_ = uVar24;
        auVar12._0_8_ = uVar23;
        auVar52 = a64_TBL(ZEXT816(0),auVar12,auVar51);
        auVar13._8_8_ = uVar26;
        auVar13._0_8_ = uVar25;
        auVar127 = a64_TBL(ZEXT816(0),auVar13,auVar125);
        auVar72[0] = -((byte)(auVar52[0] & auVar123[0] & auVar127[0]) != 0);
        auVar72[1] = -((byte)(auVar52[1] & auVar123[1] & auVar127[1]) != 0);
        auVar72[2] = -((byte)(auVar52[2] & auVar123[2] & auVar127[2]) != 0);
        auVar72[3] = -((byte)(auVar52[3] & auVar123[3] & auVar127[3]) != 0);
        auVar72[4] = -((byte)(auVar52[4] & auVar123[4] & auVar127[4]) != 0);
        auVar72[5] = -((byte)(auVar52[5] & auVar123[5] & auVar127[5]) != 0);
        auVar72[6] = -((byte)(auVar52[6] & auVar123[6] & auVar127[6]) != 0);
        auVar72[7] = -((byte)(auVar52[7] & auVar123[7] & auVar127[7]) != 0);
        auVar72[8] = -((byte)(auVar52[8] & auVar123[8] & auVar127[8]) != 0);
        auVar72[9] = -((byte)(auVar52[9] & auVar123[9] & auVar127[9]) != 0);
        auVar72[10] = -((byte)(auVar52[10] & auVar123[10] & auVar127[10]) != 0);
        auVar72[0xb] = -((byte)(auVar52[0xb] & auVar123[0xb] & auVar127[0xb]) != 0);
        auVar72[0xc] = -((byte)(auVar52[0xc] & auVar123[0xc] & auVar127[0xc]) != 0);
        auVar72[0xd] = -((byte)(auVar52[0xd] & auVar123[0xd] & auVar127[0xd]) != 0);
        auVar72[0xe] = -((byte)(auVar52[0xe] & auVar123[0xe] & auVar127[0xe]) != 0);
        auVar72[0xf] = -((byte)(auVar52[0xf] & auVar123[0xf] & auVar127[0xf]) != 0);
        iVar70 = NEON_umaxv(auVar72,4);
        if (iVar70 != 0) {
          auVar73._8_8_ = auVar57._8_8_;
          auVar73._0_8_ = auVar57._0_8_;
          auVar55[9] = bVar100;
          auVar55[8] = bVar99;
          auVar55[10] = bVar101;
          auVar55[0xb] = bVar102;
          auVar55[0xc] = bVar103;
          auVar55[0xd] = bVar104;
          auVar55[0xe] = bVar105;
          auVar55[0xf] = bVar106;
          auVar55[1] = bVar92;
          auVar55[0] = bVar91;
          auVar55[2] = bVar93;
          auVar55[3] = bVar94;
          auVar55[4] = bVar95;
          auVar55[5] = bVar96;
          auVar55[6] = bVar97;
          auVar55[7] = bVar98;
          FUN__text__003e41c0(auVar73,auVar55,auVar72,&local_b0);
          uVar27 = local_b0 & 0xffffffff;
          goto joined_r0x003e3ba8;
        }
        auVar3[1] = bVar76;
        auVar3[0] = bVar74;
        auVar3[2] = bVar77;
        auVar3[3] = bVar78;
        auVar3[4] = bVar79;
        auVar3[5] = bVar80;
        auVar3[6] = bVar81;
        auVar3[7] = bVar82;
        auVar3[8] = bVar83;
        auVar3[9] = bVar84;
        auVar3[10] = bVar85;
        auVar3[0xb] = bVar86;
        auVar3[0xc] = bVar87;
        auVar3[0xd] = bVar88;
        auVar3[0xe] = bVar89;
        auVar3[0xf] = bVar90;
        auVar52 = NEON_ext(auVar3,ZEXT816(0),0xf,1);
        auVar10[1] = bVar108;
        auVar10[0] = bVar107;
        auVar10[2] = bVar109;
        auVar10[3] = bVar110;
        auVar10[4] = bVar111;
        auVar10[5] = bVar112;
        auVar10[6] = bVar113;
        auVar10[7] = bVar114;
        auVar10[8] = bVar115;
        auVar10[9] = bVar116;
        auVar10[10] = bVar117;
        auVar10[0xb] = bVar118;
        auVar10[0xc] = bVar119;
        auVar10[0xd] = bVar120;
        auVar10[0xe] = bVar121;
        auVar10[0xf] = bVar122;
        auVar123 = NEON_ext(auVar10,ZEXT816(0),0xe,1);
        auVar6[1] = bVar92;
        auVar6[0] = bVar91;
        auVar6[2] = bVar93;
        auVar6[3] = bVar94;
        auVar6[4] = bVar95;
        auVar6[5] = bVar96;
        auVar6[6] = bVar97;
        auVar6[7] = bVar98;
        auVar6[8] = bVar99;
        auVar6[9] = bVar100;
        auVar6[10] = bVar101;
        auVar6[0xb] = bVar102;
        auVar6[0xc] = bVar103;
        auVar6[0xd] = bVar104;
        auVar6[0xe] = bVar105;
        auVar6[0xf] = bVar106;
        auVar127 = NEON_ext(auVar6,ZEXT816(0),0xd,1);
        local_a0 = auVar123[0] | auVar52[0] | auVar127[0];
        bStack_9f = auVar123[1] | auVar52[1] | auVar127[1];
        bStack_9e = auVar123[2] | auVar52[2] | auVar127[2];
        bStack_9d = auVar123[3] | auVar52[3] | auVar127[3];
        bStack_9c = auVar123[4] | auVar52[4] | auVar127[4];
        bStack_9b = auVar123[5] | auVar52[5] | auVar127[5];
        bStack_9a = auVar123[6] | auVar52[6] | auVar127[6];
        bStack_99 = auVar123[7] | auVar52[7] | auVar127[7];
        bStack_98 = auVar123[8] | auVar52[8] | auVar127[8];
        bStack_97 = auVar123[9] | auVar52[9] | auVar127[9];
        bStack_96 = auVar123[10] | auVar52[10] | auVar127[10];
        bStack_95 = auVar123[0xb] | auVar52[0xb] | auVar127[0xb];
        bStack_94 = auVar123[0xc] | auVar52[0xc] | auVar127[0xc];
        bStack_93 = auVar123[0xd] | auVar52[0xd] | auVar127[0xd];
        bStack_92 = auVar123[0xe] | auVar52[0xe] | auVar127[0xe];
        bStack_91 = auVar123[0xf] | auVar52[0xf] | auVar127[0xf];
        uStack_78 = CONCAT17(bVar106,CONCAT16(bVar105,CONCAT15(bVar104,CONCAT14(bVar103,CONCAT13(
                                                  bVar102,CONCAT12(bVar101,CONCAT11(bVar100,bVar99))
                                                  )))));
        local_80 = CONCAT17(bVar98,CONCAT16(bVar97,CONCAT15(bVar96,CONCAT14(bVar95,CONCAT13(bVar94,
                                                  CONCAT12(bVar93,CONCAT11(bVar92,bVar91)))))));
        uStack_68 = CONCAT17(bVar90,CONCAT16(bVar89,CONCAT15(bVar88,CONCAT14(bVar87,CONCAT13(bVar86,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83)))))));
        local_70 = CONCAT17(bVar82,CONCAT16(bVar81,CONCAT15(bVar80,CONCAT14(bVar79,CONCAT13(bVar78,
                                                  CONCAT12(bVar77,CONCAT11(bVar76,bVar74)))))));
        uStack_88 = auVar57._8_8_;
        local_90 = auVar57._0_8_;
      }
      else {
        auVar52 = *(undefined1 (*) [16])(((undefined1 (*) [16])(param_5 + uVar33))[-1] + 0xf);
        auVar123[0] = -((char)bVar34 < '\0');
        auVar123[1] = -((char)bVar37 < '\0');
        auVar123[2] = -((char)bVar38 < '\0');
        auVar123[3] = -((char)bVar39 < '\0');
        auVar123[4] = -((char)bVar40 < '\0');
        auVar123[5] = -((char)bVar41 < '\0');
        auVar123[6] = -((char)bVar42 < '\0');
        auVar123[7] = -((char)bVar43 < '\0');
        auVar123[8] = -((char)bVar44 < '\0');
        auVar123[9] = -((char)bVar45 < '\0');
        auVar123[10] = -((char)bVar46 < '\0');
        auVar123[0xb] = -((char)bVar47 < '\0');
        auVar123[0xc] = -((char)bVar48 < '\0');
        auVar123[0xd] = -((char)bVar49 < '\0');
        auVar123[0xe] = -((char)bVar50 < '\0');
        auVar123[0xf] = -((char)bVar75 < '\0');
        iVar70 = NEON_umaxv(auVar123,4);
        if (iVar70 != 0) goto LAB__text__003e391c;
LAB__text__003e39d8:
        auVar19[1] = bStack_9f;
        auVar19[0] = local_a0;
        auVar19[2] = bStack_9e;
        auVar19[3] = bStack_9d;
        auVar19[4] = bStack_9c;
        auVar19[5] = bStack_9b;
        auVar19[6] = bStack_9a;
        auVar19[7] = bStack_99;
        auVar19[8] = bStack_98;
        auVar19[9] = bStack_97;
        auVar19[10] = bStack_96;
        auVar19[0xb] = bStack_95;
        auVar19[0xc] = bStack_94;
        auVar19[0xd] = bStack_93;
        auVar19[0xe] = bStack_92;
        auVar19[0xf] = bStack_91;
        iVar70 = NEON_umaxv(auVar19,4);
        if (iVar70 != 0) {
          uVar2 = (uint)LZCOUNT(CONCAT17((char)(uStack_68._6_2_ >> 4),
                                         CONCAT16((char)(uStack_68._4_2_ >> 4),
                                                  CONCAT15((char)(uStack_68._2_2_ >> 4),
                                                           CONCAT14((char)((ushort)uStack_68 >> 4),
                                                                    CONCAT13((char)(local_70._6_2_
                                                                                   >> 4),
                                                                             CONCAT12((char)(
                                                  local_70._4_2_ >> 4),
                                                  CONCAT11((char)(local_70._2_2_ >> 4),
                                                           (char)((ushort)local_70 >> 4))))))))) >>
                  2 ^ 0xffffffff;
          uStack_88 = 0xffffffffffffffff;
          local_90 = 0xffffffffffffffff;
          local_b0 = CONCAT44(1,uVar2);
          uVar27 = (ulong)uVar2;
          goto joined_r0x003e3ba8;
        }
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
      }
      if (param_3 != (ulong *)0x0) {
        if (puVar1 < __dest + 2) goto LAB__text__003e3f10;
        __dest[1] = auVar73._8_8_;
        *__dest = auVar73._0_8_;
      }
      __dest = __dest + 2;
      uVar33 = uVar33 + 0x10;
      goto joined_r0x003e38ec;
    }
    bStack_c0 = 0;
    local_d0 = 0;
    uStack_cf = 0;
    uStack_c8 = 0;
    if (uVar33 != 0) {
      local_d0 = *(byte *)(uVar33 + param_5 + -1);
    }
    __n = param_6 - uVar33;
    memcpy((void *)((ulong)&local_d0 | 1),(void *)(param_5 + uVar33),__n);
    auVar18._7_8_ = uStack_c8;
    auVar18._0_7_ = uStack_cf;
    auVar17[0xf] = bStack_c0;
    auVar17._0_15_ = auVar18;
    bVar34 = (byte)uStack_cf;
    auVar58[0] = -((char)bVar34 < '\0');
    bVar37 = (byte)(uStack_cf >> 8);
    auVar58[1] = -((char)bVar37 < '\0');
    bVar38 = (byte)(uStack_cf >> 0x10);
    auVar58[2] = -((char)bVar38 < '\0');
    bVar39 = (byte)(uStack_cf >> 0x18);
    auVar58[3] = -((char)bVar39 < '\0');
    bVar40 = (byte)(uStack_cf >> 0x20);
    auVar58[4] = -((char)bVar40 < '\0');
    bVar41 = (byte)(uStack_cf >> 0x28);
    auVar58[5] = -((char)bVar41 < '\0');
    bVar42 = (byte)(uStack_cf >> 0x30);
    auVar58[6] = -((int7)uStack_cf < 0);
    bVar43 = (byte)uStack_c8;
    auVar58[7] = -((char)bVar43 < '\0');
    bVar44 = (byte)(uStack_c8 >> 8);
    auVar58[8] = -((char)bVar44 < '\0');
    bVar45 = (byte)(uStack_c8 >> 0x10);
    auVar58[9] = -((char)bVar45 < '\0');
    bVar46 = (byte)(uStack_c8 >> 0x18);
    auVar58[10] = -((char)bVar46 < '\0');
    bVar47 = (byte)(uStack_c8 >> 0x20);
    auVar58[0xb] = -((char)bVar47 < '\0');
    bVar48 = (byte)(uStack_c8 >> 0x28);
    auVar58[0xc] = -((char)bVar48 < '\0');
    bVar49 = (byte)(uStack_c8 >> 0x30);
    auVar58[0xd] = -((char)bVar49 < '\0');
    bVar50 = (byte)(uStack_c8 >> 0x38);
    auVar58[0xe] = -((long)uStack_c8 < 0);
    auVar58[0xf] = -((char)bStack_c0 < '\0');
    iVar70 = NEON_umaxv(auVar58,4);
    if (iVar70 != 0) {
      auVar16._8_8_ = uStack_c8;
      auVar16._0_8_ = CONCAT71(uStack_cf,local_d0);
      auVar11[8] = uStack_108;
      auVar11._0_8_ = uVar25;
      uVar27 = auVar18._0_8_ & 0x4040404040404040;
      bVar75 = auVar58[0] & ~-((char)uVar27 == '\0');
      bVar56 = auVar58[1] & ~-((char)(uVar27 >> 8) == '\0');
      bVar63 = auVar58[2] & ~-((char)(uVar27 >> 0x10) == '\0');
      bVar64 = auVar58[3] & ~-((char)(uVar27 >> 0x18) == '\0');
      bVar65 = auVar58[4] & ~-((char)(uVar27 >> 0x20) == '\0');
      bVar66 = auVar58[5] & ~-((char)(uVar27 >> 0x28) == '\0');
      bVar67 = auVar58[6] & ~-((char)(uVar27 >> 0x30) == '\0');
      bVar68 = auVar58[7] & ~-((char)(uVar27 >> 0x38) == '\0');
      bVar69 = auVar58[8] & ~-((uStack_c8 & 0x4000) == 0);
      bVar74 = auVar58[9] & ~-((uStack_c8 & 0x400000) == 0);
      bVar76 = auVar58[10] & ~-((uStack_c8 & 0x40000000) == 0);
      bVar77 = auVar58[0xb] & ~-((uStack_c8 & 0x4000000000) == 0);
      bVar78 = auVar58[0xc] & ~-((uStack_c8 & 0x400000000000) == 0);
      bVar79 = auVar58[0xd] & ~-((uStack_c8 & 0x40000000000000) == 0);
      bVar80 = auVar58[0xe] & ~-((uStack_c8 & 0x4000000000000000) == 0);
      bVar81 = auVar58[0xf] & ~-((bStack_c0 & 0x40) == 0);
      auVar126[0] = bVar75 & ~-((uStack_cf & 0x20) == 0);
      auVar126[1] = bVar56 & ~-((uStack_cf & 0x2000) == 0);
      auVar126[2] = bVar63 & ~-((uStack_cf & 0x200000) == 0);
      auVar126[3] = bVar64 & ~-((uStack_cf & 0x20000000) == 0);
      auVar126[4] = bVar65 & ~-((uStack_cf & 0x2000000000) == 0);
      auVar126[5] = bVar66 & ~-((uStack_cf & 0x200000000000) == 0);
      auVar126[6] = bVar67 & ~-((uStack_cf & 0x20000000000000) == 0);
      auVar126[7] = bVar68 & ~-((uStack_c8 & 0x20) == 0);
      auVar126[8] = bVar69 & ~-((uStack_c8 & 0x2000) == 0);
      auVar126[9] = bVar74 & ~-((uStack_c8 & 0x200000) == 0);
      auVar126[10] = bVar76 & ~-((uStack_c8 & 0x20000000) == 0);
      auVar126[0xb] = bVar77 & ~-((uStack_c8 & 0x2000000000) == 0);
      auVar126[0xc] = bVar78 & ~-((uStack_c8 & 0x200000000000) == 0);
      auVar126[0xd] = bVar79 & ~-((uStack_c8 & 0x20000000000000) == 0);
      auVar126[0xe] = bVar80 & ~-((uStack_c8 & 0x2000000000000000) == 0);
      auVar126[0xf] = bVar81 & ~-((bStack_c0 & 0x20) == 0);
      auVar4[1] = bVar56;
      auVar4[0] = bVar75;
      auVar4[2] = bVar63;
      auVar4[3] = bVar64;
      auVar4[4] = bVar65;
      auVar4[5] = bVar66;
      auVar4[6] = bVar67;
      auVar4[7] = bVar68;
      auVar4[8] = bVar69;
      auVar4[9] = bVar74;
      auVar4[10] = bVar76;
      auVar4[0xb] = bVar77;
      auVar4[0xc] = bVar78;
      auVar4[0xd] = bVar79;
      auVar4[0xe] = bVar80;
      auVar4[0xf] = bVar81;
      auVar73 = NEON_ext(ZEXT816(0),auVar4,0xf,1);
      bVar82 = auVar126[0] & ~-((uStack_cf & 0x10) == 0);
      bVar83 = auVar126[1] & ~-((uStack_cf & 0x1000) == 0);
      bVar84 = auVar126[2] & ~-((uStack_cf & 0x100000) == 0);
      bVar85 = auVar126[3] & ~-((uStack_cf & 0x10000000) == 0);
      bVar86 = auVar126[4] & ~-((uStack_cf & 0x1000000000) == 0);
      bVar87 = auVar126[5] & ~-((uStack_cf & 0x100000000000) == 0);
      bVar88 = auVar126[6] & ~-((uStack_cf & 0x10000000000000) == 0);
      bVar89 = auVar126[7] & ~-((uStack_c8 & 0x10) == 0);
      bVar90 = auVar126[8] & ~-((uStack_c8 & 0x1000) == 0);
      bVar91 = auVar126[9] & ~-((uStack_c8 & 0x100000) == 0);
      bVar92 = auVar126[10] & ~-((uStack_c8 & 0x10000000) == 0);
      bVar93 = auVar126[0xb] & ~-((uStack_c8 & 0x1000000000) == 0);
      bVar94 = auVar126[0xc] & ~-((uStack_c8 & 0x100000000000) == 0);
      bVar95 = auVar126[0xd] & ~-((uStack_c8 & 0x10000000000000) == 0);
      bVar96 = auVar126[0xe] & ~-((uStack_c8 & 0x1000000000000000) == 0);
      bVar97 = auVar126[0xf] & ~-((bStack_c0 & 0x10) == 0);
      auVar52 = NEON_ext(ZEXT816(0),auVar126,0xe,1);
      bVar98 = bVar75 ^ auVar58[0];
      bVar99 = bVar56 ^ auVar58[1];
      bVar100 = bVar63 ^ auVar58[2];
      bVar101 = bVar64 ^ auVar58[3];
      bVar102 = bVar65 ^ auVar58[4];
      bVar103 = bVar66 ^ auVar58[5];
      bVar104 = bVar67 ^ auVar58[6];
      bVar105 = bVar68 ^ auVar58[7];
      bVar106 = bVar69 ^ auVar58[8];
      bVar107 = bVar74 ^ auVar58[9];
      bVar108 = bVar76 ^ auVar58[10];
      bVar109 = bVar77 ^ auVar58[0xb];
      bVar110 = bVar78 ^ auVar58[0xc];
      bVar111 = bVar79 ^ auVar58[0xd];
      bVar112 = bVar80 ^ auVar58[0xe];
      bVar113 = bVar81 ^ auVar58[0xf];
      auVar7[1] = bVar83;
      auVar7[0] = bVar82;
      auVar7[2] = bVar84;
      auVar7[3] = bVar85;
      auVar7[4] = bVar86;
      auVar7[5] = bVar87;
      auVar7[6] = bVar88;
      auVar7[7] = bVar89;
      auVar7[8] = bVar90;
      auVar7[9] = bVar91;
      auVar7[10] = bVar92;
      auVar7[0xb] = bVar93;
      auVar7[0xc] = bVar94;
      auVar7[0xd] = bVar95;
      auVar7[0xe] = bVar96;
      auVar7[0xf] = bVar97;
      auVar123 = NEON_ext(ZEXT816(0),auVar7,0xd,1);
      auVar14._8_8_ = uVar24;
      auVar14._0_8_ = uVar23;
      auVar15._8_8_ = uVar22;
      auVar15._0_8_ = uVar32;
      auVar59[0] = -(bVar98 == (byte)(auVar52[0] | auVar73[0] | auVar123[0] | local_a0));
      auVar59[1] = -(bVar99 == (byte)(auVar52[1] | auVar73[1] | auVar123[1] | bStack_9f));
      auVar59[2] = -(bVar100 == (byte)(auVar52[2] | auVar73[2] | auVar123[2] | bStack_9e));
      auVar59[3] = -(bVar101 == (byte)(auVar52[3] | auVar73[3] | auVar123[3] | bStack_9d));
      auVar59[4] = -(bVar102 == (byte)(auVar52[4] | auVar73[4] | auVar123[4] | bStack_9c));
      auVar59[5] = -(bVar103 == (byte)(auVar52[5] | auVar73[5] | auVar123[5] | bStack_9b));
      auVar59[6] = -(bVar104 == (byte)(auVar52[6] | auVar73[6] | auVar123[6] | bStack_9a));
      auVar59[7] = -(bVar105 == (byte)(auVar52[7] | auVar73[7] | auVar123[7] | bStack_99));
      auVar59[8] = -(bVar106 == (byte)(auVar52[8] | auVar73[8] | auVar123[8] | bStack_98));
      auVar59[9] = -(bVar107 == (byte)(auVar52[9] | auVar73[9] | auVar123[9] | bStack_97));
      auVar59[10] = -(bVar108 == (byte)(auVar52[10] | auVar73[10] | auVar123[10] | bStack_96));
      auVar59[0xb] = -(bVar109 == (byte)(auVar52[0xb] | auVar73[0xb] | auVar123[0xb] | bStack_95));
      auVar59[0xc] = -(bVar110 == (byte)(auVar52[0xc] | auVar73[0xc] | auVar123[0xc] | bStack_94));
      auVar59[0xd] = -(bVar111 == (byte)(auVar52[0xd] | auVar73[0xd] | auVar123[0xd] | bStack_93));
      auVar59[0xe] = -(bVar112 == (byte)(auVar52[0xe] | auVar73[0xe] | auVar123[0xe] | bStack_92));
      auVar59[0xf] = -(bVar113 == (byte)(auVar52[0xf] | auVar73[0xf] | auVar123[0xf] | bStack_91));
      iVar70 = NEON_uminv(auVar59,4);
      if (iVar70 == -1) {
        auVar60[0] = local_d0 >> 4;
        auVar60[1] = bVar34 >> 4;
        auVar60[2] = bVar37 >> 4;
        auVar60[3] = bVar38 >> 4;
        auVar60[4] = bVar39 >> 4;
        auVar60[5] = bVar40 >> 4;
        auVar60[6] = bVar41 >> 4;
        auVar60[7] = bVar42 >> 4;
        auVar60[8] = bVar43 >> 4;
        auVar60[9] = bVar44 >> 4;
        auVar60[10] = bVar45 >> 4;
        auVar60[0xb] = bVar46 >> 4;
        auVar60[0xc] = bVar47 >> 4;
        auVar60[0xd] = bVar48 >> 4;
        auVar60[0xe] = bVar49 >> 4;
        auVar60[0xf] = bVar50 >> 4;
        auVar53._0_8_ = CONCAT71(uStack_cf,local_d0) & 0xf0f0f0f0f0f0f0f;
        auVar53[8] = bVar43 & 0xf;
        auVar53[9] = bVar44 & 0xf;
        auVar53[10] = bVar45 & 0xf;
        auVar53[0xb] = bVar46 & 0xf;
        auVar53[0xc] = bVar47 & 0xf;
        auVar53[0xd] = bVar48 & 0xf;
        auVar53[0xe] = bVar49 & 0xf;
        auVar53[0xf] = bVar50 & 0xf;
        auVar35[0] = bVar34 >> 4;
        auVar35[1] = bVar37 >> 4;
        auVar35[2] = bVar38 >> 4;
        auVar35[3] = bVar39 >> 4;
        auVar35[4] = bVar40 >> 4;
        auVar35[5] = bVar41 >> 4;
        auVar35[6] = bVar42 >> 4;
        auVar35[7] = bVar43 >> 4;
        auVar35[8] = bVar44 >> 4;
        auVar35[9] = bVar45 >> 4;
        auVar35[10] = bVar46 >> 4;
        auVar35[0xb] = bVar47 >> 4;
        auVar35[0xc] = bVar48 >> 4;
        auVar35[0xd] = bVar49 >> 4;
        auVar35[0xe] = bVar50 >> 4;
        auVar35[0xf] = bStack_c0 >> 4;
        auVar123 = a64_TBL(ZEXT816(0),auVar15,auVar60);
        auVar52 = a64_TBL(ZEXT816(0),auVar14,auVar53);
        auVar11[9] = (char)((ulong)uVar26 >> 8);
        auVar11[10] = (char)((ulong)uVar26 >> 0x10);
        auVar11[0xb] = (char)((ulong)uVar26 >> 0x18);
        auVar11[0xc] = (char)((ulong)uVar26 >> 0x20);
        auVar11[0xd] = (char)((ulong)uVar26 >> 0x28);
        auVar11[0xe] = (char)((ulong)uVar26 >> 0x30);
        auVar11[0xf] = (char)((ulong)uVar26 >> 0x38);
        auVar73 = a64_TBL(ZEXT816(0),auVar11,auVar35);
        auVar61[0] = -((byte)(auVar52[0] & auVar123[0] & auVar73[0]) != 0);
        auVar61[1] = -((byte)(auVar52[1] & auVar123[1] & auVar73[1]) != 0);
        auVar61[2] = -((byte)(auVar52[2] & auVar123[2] & auVar73[2]) != 0);
        auVar61[3] = -((byte)(auVar52[3] & auVar123[3] & auVar73[3]) != 0);
        auVar61[4] = -((byte)(auVar52[4] & auVar123[4] & auVar73[4]) != 0);
        auVar61[5] = -((byte)(auVar52[5] & auVar123[5] & auVar73[5]) != 0);
        auVar61[6] = -((byte)(auVar52[6] & auVar123[6] & auVar73[6]) != 0);
        auVar61[7] = -((byte)(auVar52[7] & auVar123[7] & auVar73[7]) != 0);
        auVar61[8] = -((byte)(auVar52[8] & auVar123[8] & auVar73[8]) != 0);
        auVar61[9] = -((byte)(auVar52[9] & auVar123[9] & auVar73[9]) != 0);
        auVar61[10] = -((byte)(auVar52[10] & auVar123[10] & auVar73[10]) != 0);
        auVar61[0xb] = -((byte)(auVar52[0xb] & auVar123[0xb] & auVar73[0xb]) != 0);
        auVar61[0xc] = -((byte)(auVar52[0xc] & auVar123[0xc] & auVar73[0xc]) != 0);
        auVar61[0xd] = -((byte)(auVar52[0xd] & auVar123[0xd] & auVar73[0xd]) != 0);
        auVar61[0xe] = -((byte)(auVar52[0xe] & auVar123[0xe] & auVar73[0xe]) != 0);
        auVar61[0xf] = -((byte)(auVar52[0xf] & auVar123[0xf] & auVar73[0xf]) != 0);
        iVar70 = NEON_umaxv(auVar61,4);
        if (iVar70 == 0) {
          auVar5[1] = bVar56;
          auVar5[0] = bVar75;
          auVar5[2] = bVar63;
          auVar5[3] = bVar64;
          auVar5[4] = bVar65;
          auVar5[5] = bVar66;
          auVar5[6] = bVar67;
          auVar5[7] = bVar68;
          auVar5[8] = bVar69;
          auVar5[9] = bVar74;
          auVar5[10] = bVar76;
          auVar5[0xb] = bVar77;
          auVar5[0xc] = bVar78;
          auVar5[0xd] = bVar79;
          auVar5[0xe] = bVar80;
          auVar5[0xf] = bVar81;
          auVar73 = NEON_ext(auVar5,ZEXT816(0),0xf,1);
          auVar52 = NEON_ext(auVar126,ZEXT816(0),0xe,1);
          auVar8[1] = bVar83;
          auVar8[0] = bVar82;
          auVar8[2] = bVar84;
          auVar8[3] = bVar85;
          auVar8[4] = bVar86;
          auVar8[5] = bVar87;
          auVar8[6] = bVar88;
          auVar8[7] = bVar89;
          auVar8[8] = bVar90;
          auVar8[9] = bVar91;
          auVar8[10] = bVar92;
          auVar8[0xb] = bVar93;
          auVar8[0xc] = bVar94;
          auVar8[0xd] = bVar95;
          auVar8[0xe] = bVar96;
          auVar8[0xf] = bVar97;
          auVar123 = NEON_ext(auVar8,ZEXT816(0),0xd,1);
          local_a0 = auVar52[0] | auVar73[0] | auVar123[0];
          bStack_9f = auVar52[1] | auVar73[1] | auVar123[1];
          bStack_9e = auVar52[2] | auVar73[2] | auVar123[2];
          bStack_9d = auVar52[3] | auVar73[3] | auVar123[3];
          bStack_9c = auVar52[4] | auVar73[4] | auVar123[4];
          bStack_9b = auVar52[5] | auVar73[5] | auVar123[5];
          bStack_9a = auVar52[6] | auVar73[6] | auVar123[6];
          bStack_99 = auVar52[7] | auVar73[7] | auVar123[7];
          bStack_98 = auVar52[8] | auVar73[8] | auVar123[8];
          bStack_97 = auVar52[9] | auVar73[9] | auVar123[9];
          bStack_96 = auVar52[10] | auVar73[10] | auVar123[10];
          bStack_95 = auVar52[0xb] | auVar73[0xb] | auVar123[0xb];
          bStack_94 = auVar52[0xc] | auVar73[0xc] | auVar123[0xc];
          bStack_93 = auVar52[0xd] | auVar73[0xd] | auVar123[0xd];
          bStack_92 = auVar52[0xe] | auVar73[0xe] | auVar123[0xe];
          bStack_91 = auVar52[0xf] | auVar73[0xf] | auVar123[0xf];
          uStack_68 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar79,CONCAT14(bVar78,CONCAT13(
                                                  bVar77,CONCAT12(bVar76,CONCAT11(bVar74,bVar69)))))
                                              ));
          local_70 = CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(bVar64
                                                  ,CONCAT12(bVar63,CONCAT11(bVar56,bVar75)))))));
          goto LAB__text__003e3da0;
        }
        auVar36[9] = bVar107;
        auVar36[8] = bVar106;
        auVar36[10] = bVar108;
        auVar36[0xb] = bVar109;
        auVar36[0xc] = bVar110;
        auVar36[0xd] = bVar111;
        auVar36[0xe] = bVar112;
        auVar36[0xf] = bVar113;
        auVar36[1] = bVar99;
        auVar36[0] = bVar98;
        auVar36[2] = bVar100;
        auVar36[3] = bVar101;
        auVar36[4] = bVar102;
        auVar36[5] = bVar103;
        auVar36[6] = bVar104;
        auVar36[7] = bVar105;
        auVar54[9] = bVar91;
        auVar54[8] = bVar90;
        auVar54[10] = bVar92;
        auVar54[0xb] = bVar93;
        auVar54[0xc] = bVar94;
        auVar54[0xd] = bVar95;
        auVar54[0xe] = bVar96;
        auVar54[0xf] = bVar97;
        auVar54[1] = bVar83;
        auVar54[0] = bVar82;
        auVar54[2] = bVar84;
        auVar54[3] = bVar85;
        auVar54[4] = bVar86;
        auVar54[5] = bVar87;
        auVar54[6] = bVar88;
        auVar54[7] = bVar89;
        FUN__text__003e41c0(auVar36,auVar54,&local_b0);
joined_r0x003e3b08:
        uVar27 = local_b0 & 0xffffffff;
      }
      else {
        auVar62[9] = bVar107;
        auVar62[8] = bVar106;
        auVar62[10] = bVar108;
        auVar62[0xb] = bVar109;
        auVar62[0xc] = bVar110;
        auVar62[0xd] = bVar111;
        auVar62[0xe] = bVar112;
        auVar62[0xf] = bVar113;
        auVar62[1] = bVar99;
        auVar62[0] = bVar98;
        auVar62[2] = bVar100;
        auVar62[3] = bVar101;
        auVar62[4] = bVar102;
        auVar62[5] = bVar103;
        auVar62[6] = bVar104;
        auVar62[7] = bVar105;
        FUN__text__003e4010(auVar17,auVar16,auVar62,&local_b0);
        uVar27 = local_b0 & 0xffffffff;
      }
joined_r0x003e3ba8:
      if ((param_3 != (ulong *)0x0) && (0 < (int)uVar27)) {
        if (puVar1 < (ulong *)((long)__dest + uVar27)) {
          lVar28 = FUN__text__003e3f40(__dest,puVar1,param_5 + uVar33,param_5 + uVar33 + uVar27);
          *param_2 = lVar28 + uVar33;
          *param_1 = (long)__dest + (lVar28 - (long)param_3);
          return 0x22;
        }
        memcpy(__dest,(void *)(param_5 + uVar33),uVar27);
        uVar27 = local_b0 & 0xffffffff;
      }
      uVar33 = uVar33 + (long)(int)uVar27;
      __dest = (ulong *)((long)__dest + (long)(int)uVar27);
      if (uVar33 < param_6) {
        puVar30 = __dest;
        if (param_7 == 1) {
          if (param_3 == (ulong *)0x0) {
            do {
              iVar70 = FUN__text__003e45d0(&local_d0,auStack_d4,param_5 + uVar33,param_6 - uVar33);
              puVar30 = __dest;
              if (iVar70 != 0x54) goto LAB__text__003e3d20;
              __dest = (ulong *)((long)__dest + 3);
              uVar33 = CONCAT71(uStack_cf,local_d0) + uVar33;
            } while (uVar33 < param_6);
          }
          else {
            do {
              iVar70 = FUN__text__003e45d0(&local_d0,auStack_d4,param_5 + uVar33,param_6 - uVar33);
              if (iVar70 != 0x54) {
                if (iVar70 != 0) {
                  uVar31 = 0;
                  goto LAB__text__003e3ec0;
                }
                __dest = puVar30;
                break;
              }
              __dest = (ulong *)((long)puVar30 + 3);
              if (puVar1 < __dest) goto LAB__text__003e3ec0;
              *(undefined2 *)puVar30 = 0xbfef;
              uVar33 = CONCAT71(uStack_cf,local_d0) + uVar33;
              *(undefined1 *)((long)puVar30 + 2) = 0xbd;
              puVar30 = __dest;
            } while (uVar33 < param_6);
          }
        }
        else {
          do {
            iVar70 = FUN__text__003e45d0(&local_d0,auStack_d4,param_5 + uVar33,param_6 - uVar33);
            if (iVar70 != 0x54) goto LAB__text__003e3d20;
            uVar33 = CONCAT71(uStack_cf,local_d0) + uVar33;
          } while (uVar33 < param_6);
        }
      }
      goto LAB__text__003e3cdc;
    }
    auVar20[1] = bStack_9f;
    auVar20[0] = local_a0;
    auVar20[2] = bStack_9e;
    auVar20[3] = bStack_9d;
    auVar20[4] = bStack_9c;
    auVar20[5] = bStack_9b;
    auVar20[6] = bStack_9a;
    auVar20[7] = bStack_99;
    auVar20[8] = bStack_98;
    auVar20[9] = bStack_97;
    auVar20[10] = bStack_96;
    auVar20[0xb] = bStack_95;
    auVar20[0xc] = bStack_94;
    auVar20[0xd] = bStack_93;
    auVar20[0xe] = bStack_92;
    auVar20[0xf] = bStack_91;
    iVar70 = NEON_umaxv(auVar20,4);
    if (iVar70 != 0) {
      local_b0 = CONCAT35(local_b0._5_3_,0x100000000);
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      uVar2 = (uint)LZCOUNT(CONCAT17((char)(uStack_68._6_2_ >> 4),
                                     CONCAT16((char)(uStack_68._4_2_ >> 4),
                                              CONCAT15((char)(uStack_68._2_2_ >> 4),
                                                       CONCAT14((char)((ushort)uStack_68 >> 4),
                                                                CONCAT13((char)(local_70._6_2_ >> 4)
                                                                         ,CONCAT12((char)(local_70.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(local_70._2_2_ >> 4),
                                                           (char)((ushort)local_70 >> 4))))))))) >>
              2;
      local_b0 = CONCAT44(local_b0._4_4_,uVar2) ^ 0xffffffff;
      uVar27 = (ulong)(uVar2 ^ 0xffffffff);
      goto joined_r0x003e3ba8;
    }
LAB__text__003e3da0:
    if (param_3 != (ulong *)0x0) {
      if ((ulong *)((long)__dest + (param_6 - uVar33)) <= puVar1) {
        memcpy(__dest,(void *)(param_5 + uVar33),__n);
        goto LAB__text__003e3dc8;
      }
LAB__text__003e3f10:
      lVar28 = FUN__text__003e3f40(__dest,puVar1,param_5 + uVar33,param_5 + param_6);
      *param_2 = lVar28 + uVar33;
      puVar29 = (undefined2 *)((long)__dest + lVar28);
      goto LAB__text__003e3f2c;
    }
LAB__text__003e3dc8:
    __dest = (ulong *)((long)__dest + __n);
  }
LAB__text__003e3dcc:
  auVar21[1] = bStack_9f;
  auVar21[0] = local_a0;
  auVar21[2] = bStack_9e;
  auVar21[3] = bStack_9d;
  auVar21[4] = bStack_9c;
  auVar21[5] = bStack_9b;
  auVar21[6] = bStack_9a;
  auVar21[7] = bStack_99;
  auVar21[8] = bStack_98;
  auVar21[9] = bStack_97;
  auVar21[10] = bStack_96;
  auVar21[0xb] = bStack_95;
  auVar21[0xc] = bStack_94;
  auVar21[0xd] = bStack_93;
  auVar21[0xe] = bStack_92;
  auVar21[0xf] = bStack_91;
  iVar70 = NEON_umaxv(auVar21,4);
  if (iVar70 == 0) {
    uVar32 = 0;
    *param_2 = param_6;
    lVar28 = (long)__dest - (long)param_3;
  }
  else {
    lVar28 = (long)(int)((uint)LZCOUNT(CONCAT17((char)(uStack_68._6_2_ >> 4),
                                                CONCAT16((char)(uStack_68._4_2_ >> 4),
                                                         CONCAT15((char)(uStack_68._2_2_ >> 4),
                                                                  CONCAT14((char)((ushort)uStack_68
                                                                                 >> 4),
                                                                           CONCAT13((char)(local_70.
                                                  _6_2_ >> 4),
                                                  CONCAT12((char)(local_70._4_2_ >> 4),
                                                           CONCAT11((char)(local_70._2_2_ >> 4),
                                                                    (char)((ushort)local_70 >> 4))))
                                                  ))))) >> 2 ^ 0xffffffff);
    uVar33 = lVar28 + param_6;
    puVar29 = (undefined2 *)((long)__dest + lVar28);
    if (((&DAT_007247e0)[*(byte *)(param_5 + uVar33) >> 4] &
         (&DAT_00724ad0)[(ulong)*(byte *)(param_5 + uVar33) & 0xf] & 0x21) == 0) {
      *param_2 = uVar33;
    }
    else {
      if (param_7 == 1) {
        if (param_3 != (ulong *)0x0) {
          if (puVar1 < (ulong *)((long)puVar29 + 3)) {
            *param_2 = uVar33;
LAB__text__003e3f2c:
            lVar28 = (long)puVar29 - (long)param_3;
            uVar32 = 0x22;
            goto LAB__text__003e3de8;
          }
          *puVar29 = 0xbfef;
          *(undefined1 *)(puVar29 + 1) = 0xbd;
        }
        puVar29 = (undefined2 *)((long)puVar29 + 3);
      }
      *param_2 = param_6;
    }
    uVar32 = 0;
    lVar28 = (long)puVar29 - (long)param_3;
  }
LAB__text__003e3de8:
  *param_1 = lVar28;
  return uVar32;
LAB__text__003e3d20:
  __dest = puVar30;
  if (iVar70 != 0) {
    uVar31 = 0;
LAB__text__003e3ec0:
    *param_2 = uVar33;
    *param_1 = (long)puVar30 - (long)param_3;
    return uVar31;
  }
LAB__text__003e3cdc:
  bStack_98 = 0;
  bStack_97 = 0;
  bStack_96 = 0;
  bStack_95 = 0;
  bStack_94 = 0;
  bStack_93 = 0;
  bStack_92 = 0;
  bStack_91 = 0;
  local_a0 = 0;
  bStack_9f = 0;
  bStack_9e = 0;
  bStack_9d = 0;
  bStack_9c = 0;
  bStack_9b = 0;
  bStack_9a = 0;
  bStack_99 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
joined_r0x003e38ec:
  if (param_6 <= uVar33) goto LAB__text__003e3dcc;
  goto LAB__text__003e38f0;
}


