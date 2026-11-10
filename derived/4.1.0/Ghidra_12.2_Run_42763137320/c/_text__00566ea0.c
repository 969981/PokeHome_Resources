/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00566ea0; name: FUN_.text__00566ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00566ea0(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  uint uVar50;
  long lVar51;
  float *pfVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float *local_a0;
  float *local_98;
  
  fVar12 = fRam000000000072494c;
  fVar11 = fRam0000000000724948;
  fVar10 = fRam0000000000724944;
  fVar9 = _DAT_00724940;
  fVar80 = (float)*(undefined8 *)(param_1 + 0x54);
  fVar81 = (float)*(undefined8 *)(param_1 + 0x240);
  pfVar52 = *(float **)(param_1 + 0x38);
  uVar50 = (uint)*(ushort *)((long)param_2 + 0x12);
  uVar70 = *(undefined8 *)(param_1 + 0x208);
  uVar67 = *(undefined8 *)(param_1 + 0x200);
  uVar76 = *(undefined8 *)(param_1 + 0x218);
  uVar73 = *(undefined8 *)(param_1 + 0x210);
  fVar65 = (float)*(undefined8 *)(param_1 + 0x244);
  pfVar26 = *(float **)(param_1 + 0x138);
  pfVar27 = *(float **)(param_1 + 0x140);
  pfVar30 = *(float **)(param_1 + 0x148);
  pfVar31 = *(float **)(param_1 + 0x150);
  pfVar33 = *(float **)(param_1 + 0x98);
  local_98 = *(float **)(param_1 + 0xa0);
  pfVar35 = *(float **)(param_1 + 0xa8);
  pfVar37 = *(float **)(param_1 + 0xb0);
  pfVar39 = *(float **)(param_1 + 0xb8);
  pfVar41 = *(float **)(param_1 + 0xc0);
  pfVar15 = *(float **)(param_1 + 200);
  pfVar17 = *(float **)(param_1 + 0xd0);
  pfVar19 = *(float **)(param_1 + 0xd8);
  pfVar21 = *(float **)(param_1 + 0xe0);
  pfVar23 = *(float **)(param_1 + 0xe8);
  pfVar25 = *(float **)(param_1 + 0xf0);
  pfVar43 = *(float **)(param_1 + 0xf8);
  pfVar45 = *(float **)(param_1 + 0x100);
  pfVar47 = *(float **)(param_1 + 0x108);
  pfVar49 = *(float **)(param_1 + 0x110);
  uVar57 = *(undefined8 *)(param_1 + 0x228);
  uVar54 = *(undefined8 *)(param_1 + 0x220);
  uVar63 = *(undefined8 *)(param_1 + 0x238);
  uVar60 = *(undefined8 *)(param_1 + 0x230);
  if (*(ushort *)((long)param_2 + 0x12) != 0) {
    lVar51 = *(long *)(param_1 + 0x18);
    uVar89 = *(undefined8 *)(param_1 + 0x248);
    fVar109 = (float)((ulong)*(undefined8 *)(param_1 + 0x24c) >> 0x20);
    pfVar28 = *(float **)(param_1 + 0x30);
    fVar106 = *(float *)(lVar51 + 0x14) - fVar109;
    pfVar29 = *(float **)(param_1 + 0x40);
    pfVar1 = *(float **)(param_1 + 0x118);
    pfVar5 = *(float **)(param_1 + 0x120);
    fVar111 = (float)NEON_ucvtf(*(undefined4 *)(lVar51 + 0x18));
    uVar79 = *(undefined8 *)(param_1 + 0x4c);
    pfVar2 = *(float **)(param_1 + 0x128);
    pfVar6 = *(float **)(param_1 + 0x130);
    pfVar3 = *(float **)(param_1 + 0x158);
    pfVar7 = *(float **)(param_1 + 0x160);
    fVar108 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 2));
    fVar110 = (float)*(undefined8 *)(param_1 + 0x24c);
    fVar107 = *(float *)(lVar51 + 0x10) - fVar110;
    pfVar4 = *(float **)(param_1 + 0x168);
    pfVar8 = *(float **)(param_1 + 0x170);
    uVar91 = *(undefined8 *)(param_1 + 0x188);
    uVar90 = *(undefined8 *)(param_1 + 0x180);
    uVar93 = *(undefined8 *)(param_1 + 0x198);
    uVar92 = *(undefined8 *)(param_1 + 400);
    uVar95 = *(undefined8 *)(param_1 + 0x1a8);
    uVar94 = *(undefined8 *)(param_1 + 0x1a0);
    uVar97 = *(undefined8 *)(param_1 + 0x1b8);
    uVar96 = *(undefined8 *)(param_1 + 0x1b0);
    uVar99 = *(undefined8 *)(param_1 + 0x1c8);
    uVar98 = *(undefined8 *)(param_1 + 0x1c0);
    uVar101 = *(undefined8 *)(param_1 + 0x1d8);
    uVar100 = *(undefined8 *)(param_1 + 0x1d0);
    uVar103 = *(undefined8 *)(param_1 + 0x1e8);
    uVar102 = *(undefined8 *)(param_1 + 0x1e0);
    uVar105 = *(undefined8 *)(param_1 + 0x1f8);
    uVar104 = *(undefined8 *)(param_1 + 0x1f0);
    fVar78 = fVar80;
    fVar82 = fVar81;
    local_a0 = (float *)*param_2;
    do {
      pfVar32 = pfVar33 + 4;
      pfVar13 = local_98 + 4;
      pfVar38 = pfVar39 + 4;
      pfVar40 = pfVar41 + 4;
      pfVar18 = pfVar19 + 4;
      pfVar20 = pfVar21 + 4;
      pfVar42 = pfVar43 + 4;
      pfVar44 = pfVar45 + 4;
      pfVar34 = pfVar35 + 4;
      pfVar14 = pfVar15 + 4;
      pfVar22 = pfVar23 + 4;
      pfVar46 = pfVar47 + 4;
      pfVar36 = pfVar37 + 4;
      fVar66 = (float)uVar67 * (float)uVar98 + (float)uVar90 * *pfVar33;
      fVar68 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar98 >> 0x20) +
               (float)((ulong)uVar90 >> 0x20) * *local_98;
      uVar67 = CONCAT44(fVar68,fVar66);
      fVar69 = (float)uVar70 * (float)uVar99 + (float)uVar91 * *pfVar35;
      fVar71 = (float)((ulong)uVar70 >> 0x20) * (float)((ulong)uVar99 >> 0x20) +
               (float)((ulong)uVar91 >> 0x20) * *pfVar37;
      uVar70 = CONCAT44(fVar71,fVar69);
      pfVar16 = pfVar17 + 4;
      pfVar24 = pfVar25 + 4;
      pfVar48 = pfVar49 + 4;
      fVar72 = (float)uVar73 * (float)uVar100 + (float)uVar92 * *pfVar39;
      fVar74 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar100 >> 0x20) +
               (float)((ulong)uVar92 >> 0x20) * *pfVar41;
      uVar73 = CONCAT44(fVar74,fVar72);
      fVar75 = (float)uVar76 * (float)uVar101 + (float)uVar93 * *pfVar15;
      fVar77 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar101 >> 0x20) +
               (float)((ulong)uVar93 >> 0x20) * *pfVar17;
      uVar76 = CONCAT44(fVar77,fVar75);
      fVar53 = (float)uVar54 * (float)uVar102 + (float)uVar94 * *pfVar19;
      fVar55 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar102 >> 0x20) +
               (float)((ulong)uVar94 >> 0x20) * *pfVar21;
      uVar54 = CONCAT44(fVar55,fVar53);
      fVar56 = (float)uVar57 * (float)uVar103 + (float)uVar95 * *pfVar23;
      fVar58 = (float)((ulong)uVar57 >> 0x20) * (float)((ulong)uVar103 >> 0x20) +
               (float)((ulong)uVar95 >> 0x20) * *pfVar25;
      uVar57 = CONCAT44(fVar58,fVar56);
      fVar59 = (float)uVar60 * (float)uVar104 + (float)uVar96 * *pfVar43;
      fVar61 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar104 >> 0x20) +
               (float)((ulong)uVar96 >> 0x20) * *pfVar45;
      uVar60 = CONCAT44(fVar61,fVar59);
      fVar62 = (float)uVar63 * (float)uVar105 + (float)uVar97 * *pfVar47;
      fVar64 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar105 >> 0x20) +
               (float)((ulong)uVar97 >> 0x20) * *pfVar49;
      uVar63 = CONCAT44(fVar64,fVar62);
      pfVar33 = pfVar32;
      if (pfVar3 <= pfVar32) {
        pfVar33 = pfVar1;
      }
      local_98 = pfVar13;
      if (pfVar3 <= pfVar13) {
        local_98 = pfVar1 + 1;
      }
      pfVar35 = pfVar34;
      if (pfVar3 <= pfVar34) {
        pfVar35 = pfVar1 + 2;
      }
      pfVar37 = pfVar36;
      if (pfVar3 <= pfVar36) {
        pfVar37 = pfVar1 + 3;
      }
      pfVar39 = pfVar38;
      if (pfVar7 <= pfVar38) {
        pfVar39 = pfVar5;
      }
      pfVar41 = pfVar40;
      if (pfVar7 <= pfVar40) {
        pfVar41 = pfVar5 + 1;
      }
      pfVar15 = pfVar14;
      if (pfVar7 <= pfVar14) {
        pfVar15 = pfVar5 + 2;
      }
      pfVar17 = pfVar16;
      if (pfVar7 <= pfVar16) {
        pfVar17 = pfVar5 + 3;
      }
      fVar109 = fVar109 + fVar106 / fVar108;
      pfVar19 = pfVar18;
      if (pfVar4 <= pfVar18) {
        pfVar19 = pfVar2;
      }
      pfVar21 = pfVar20;
      if (pfVar4 <= pfVar20) {
        pfVar21 = pfVar2 + 1;
      }
      fVar110 = fVar110 + fVar107 / fVar108;
      pfVar23 = pfVar22;
      if (pfVar4 <= pfVar22) {
        pfVar23 = pfVar2 + 2;
      }
      pfVar25 = pfVar24;
      if (pfVar4 <= pfVar24) {
        pfVar25 = pfVar2 + 3;
      }
      pfVar43 = pfVar42;
      if (pfVar8 <= pfVar42) {
        pfVar43 = pfVar6;
      }
      pfVar45 = pfVar44;
      if (pfVar8 <= pfVar44) {
        pfVar45 = pfVar6 + 1;
      }
      pfVar47 = pfVar46;
      if (pfVar8 <= pfVar46) {
        pfVar47 = pfVar6 + 2;
      }
      pfVar49 = pfVar48;
      if (pfVar8 <= pfVar48) {
        pfVar49 = pfVar6 + 3;
      }
      fVar81 = *local_a0;
      *local_a0 = (fVar71 * fVar12 + fVar12 * fVar77 + fVar12 * fVar58 + fVar12 * fVar64 +
                   fVar68 * fVar10 + fVar10 * fVar74 + fVar10 * fVar55 + fVar10 * fVar61 +
                  fVar69 * fVar11 + fVar11 * fVar75 + fVar11 * fVar56 + fVar11 * fVar62 +
                  fVar66 * fVar9 + fVar9 * fVar72 + fVar9 * fVar53 + fVar9 * fVar59) * fVar109 +
                  fVar110 * fVar81;
      fVar65 = -fVar82 + fVar65 * (float)uVar89 + fVar81;
      if (pfVar28 == (float *)0x0) {
        fVar80 = fVar65;
      }
      else {
        fVar80 = *pfVar52;
        pfVar13 = pfVar52 + 1;
        *pfVar52 = fVar65;
        pfVar52 = pfVar28;
        if (pfVar13 != pfVar29) {
          pfVar52 = pfVar13;
        }
      }
      fVar78 = fVar78 * (float)((ulong)uVar79 >> 0x20) + fVar80 * (float)uVar79;
      fVar82 = (fVar77 + fVar71 + fVar58 + fVar64 + fVar74 + fVar68 + fVar55 + fVar61 +
               fVar75 + fVar69 + fVar56 + fVar62 + fVar72 + fVar66 + fVar53 + fVar59) *
               (-2.0 / fVar111);
      auVar84._0_4_ = fVar82 + fVar66;
      auVar84._4_4_ = fVar82 + fVar68;
      auVar84._8_4_ = fVar82 + fVar69;
      auVar84._12_4_ = fVar82 + fVar71;
      auVar86._0_4_ = fVar82 + fVar59;
      auVar86._4_4_ = fVar82 + fVar61;
      auVar86._8_4_ = fVar82 + fVar62;
      auVar86._12_4_ = fVar82 + fVar64;
      auVar85._0_4_ = fVar82 + fVar72;
      auVar85._4_4_ = fVar82 + fVar74;
      auVar85._8_4_ = fVar82 + fVar75;
      auVar85._12_4_ = fVar82 + fVar77;
      auVar88 = NEON_ext(auVar84,auVar85,4,1);
      auVar83._4_4_ = fVar82 + fVar55;
      auVar83._0_4_ = fVar82 + fVar53;
      auVar83._8_4_ = fVar82 + fVar56;
      auVar83._12_4_ = fVar82 + fVar58;
      auVar83 = NEON_ext(auVar85,auVar83,4,1);
      auVar85 = NEON_ext(auVar86,auVar84,4,1);
      auVar87._4_4_ = fVar82 + fVar55;
      auVar87._0_4_ = fVar82 + fVar53;
      auVar87._8_4_ = fVar82 + fVar56;
      auVar87._12_4_ = fVar82 + fVar58;
      auVar87 = NEON_ext(auVar87,auVar86,4,1);
      pfVar13 = pfVar26 + 4;
      *(ulong *)(pfVar26 + 2) = CONCAT44(fVar78 + auVar88._12_4_,fVar78 + auVar88._8_4_);
      *(ulong *)pfVar26 = CONCAT44(fVar78 + auVar88._4_4_,fVar78 + auVar88._0_4_);
      pfVar26 = pfVar13;
      if (pfVar3 <= pfVar13) {
        pfVar26 = pfVar1;
      }
      pfVar13 = pfVar27 + 4;
      pfVar27[2] = fVar78 + auVar83._8_4_;
      pfVar27[3] = fVar78 + auVar83._12_4_;
      *pfVar27 = fVar78 + auVar83._0_4_;
      pfVar27[1] = fVar78 + auVar83._4_4_;
      pfVar27 = pfVar13;
      if (pfVar7 <= pfVar13) {
        pfVar27 = pfVar5;
      }
      pfVar13 = pfVar30 + 4;
      pfVar30[2] = fVar78 + auVar87._8_4_;
      pfVar30[3] = fVar78 + auVar87._12_4_;
      *pfVar30 = fVar78 + auVar87._0_4_;
      pfVar30[1] = fVar78 + auVar87._4_4_;
      pfVar30 = pfVar13;
      if (pfVar4 <= pfVar13) {
        pfVar30 = pfVar2;
      }
      pfVar13 = pfVar31 + 4;
      *(ulong *)(pfVar31 + 2) = CONCAT44(fVar78 + auVar85._12_4_,fVar78 + auVar85._8_4_);
      *(ulong *)pfVar31 = CONCAT44(fVar78 + auVar85._4_4_,fVar78 + auVar85._0_4_);
      pfVar31 = pfVar13;
      if (pfVar8 <= pfVar13) {
        pfVar31 = pfVar6;
      }
      uVar50 = uVar50 - 1;
      fVar78 = fVar80;
      fVar82 = fVar81;
      local_a0 = local_a0 + 1;
    } while (uVar50 != 0);
  }
  *(float *)(param_1 + 0x54) = fVar80;
  *(float **)(param_1 + 0x138) = pfVar26;
  *(float **)(param_1 + 0x140) = pfVar27;
  *(float **)(param_1 + 0x38) = pfVar52;
  *(ulong *)(param_1 + 0x240) = CONCAT44(fVar65,fVar81);
  *(float **)(param_1 + 0xf8) = pfVar43;
  *(float **)(param_1 + 0x100) = pfVar45;
  *(float **)(param_1 + 0x108) = pfVar47;
  *(float **)(param_1 + 0x110) = pfVar49;
  *(undefined8 *)(param_1 + 0x208) = uVar70;
  *(undefined8 *)(param_1 + 0x200) = uVar67;
  *(undefined8 *)(param_1 + 0x218) = uVar76;
  *(undefined8 *)(param_1 + 0x210) = uVar73;
  *(float **)(param_1 + 0x148) = pfVar30;
  *(float **)(param_1 + 0x150) = pfVar31;
  *(float **)(param_1 + 0x98) = pfVar33;
  *(float **)(param_1 + 0xa0) = local_98;
  *(float **)(param_1 + 0xa8) = pfVar35;
  *(float **)(param_1 + 0xb0) = pfVar37;
  *(float **)(param_1 + 0xb8) = pfVar39;
  *(float **)(param_1 + 0xc0) = pfVar41;
  *(float **)(param_1 + 200) = pfVar15;
  *(float **)(param_1 + 0xd0) = pfVar17;
  *(float **)(param_1 + 0xd8) = pfVar19;
  *(float **)(param_1 + 0xe0) = pfVar21;
  *(float **)(param_1 + 0xe8) = pfVar23;
  *(float **)(param_1 + 0xf0) = pfVar25;
  *(undefined8 *)(param_1 + 0x228) = uVar57;
  *(undefined8 *)(param_1 + 0x220) = uVar54;
  *(undefined8 *)(param_1 + 0x238) = uVar63;
  *(undefined8 *)(param_1 + 0x230) = uVar60;
  return;
}


