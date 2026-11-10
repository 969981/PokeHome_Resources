/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00568550; name: FUN_.text__00568550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00568550(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float *pfVar27;
  uint uVar28;
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
  long lVar45;
  float *pfVar46;
  ulong uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
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
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
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
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  uVar26 = uRam0000000000724d18;
  uVar25 = _DAT_00724d10;
  fVar24 = fRam0000000000724c8c;
  fVar23 = fRam0000000000724c88;
  fVar22 = fRam0000000000724c84;
  fVar21 = _DAT_00724c80;
  uVar20 = uRam0000000000724c58;
  uVar19 = _DAT_00724c50;
  uVar18 = uRam0000000000724a28;
  uVar17 = _DAT_00724a20;
  uVar16 = uRam00000000007249c8;
  uVar15 = _DAT_007249c0;
  uVar14 = uRam0000000000724948;
  uVar13 = _DAT_00724940;
  uVar12 = uRam00000000007247c8;
  uVar11 = _DAT_007247c0;
  fVar59 = (float)*(undefined8 *)(param_1 + 0x54);
  fVar53 = (float)*(undefined8 *)(param_1 + 0x240);
  uVar50 = *(undefined8 *)(param_1 + 0x208);
  uVar49 = *(undefined8 *)(param_1 + 0x200);
  uVar52 = *(undefined8 *)(param_1 + 0x218);
  uVar51 = *(undefined8 *)(param_1 + 0x210);
  pfVar33 = *(float **)(param_1 + 0x38);
  fVar54 = (float)*(undefined8 *)(param_1 + 0x244);
  uVar28 = (uint)*(ushort *)((long)param_2 + 0x12);
  pfVar31 = *(float **)(param_1 + 0x138);
  pfVar32 = *(float **)(param_1 + 0x140);
  pfVar34 = *(float **)(param_1 + 0x98);
  pfVar36 = *(float **)(param_1 + 0xa0);
  pfVar37 = *(float **)(param_1 + 0xa8);
  pfVar38 = *(float **)(param_1 + 0xb0);
  pfVar40 = *(float **)(param_1 + 0xb8);
  pfVar41 = *(float **)(param_1 + 0xc0);
  pfVar42 = *(float **)(param_1 + 200);
  pfVar44 = *(float **)(param_1 + 0xd0);
  if (*(ushort *)((long)param_2 + 0x12) != 0) {
    lVar45 = *(long *)(param_1 + 0x18);
    fVar79 = (float)((ulong)*(undefined8 *)(param_1 + 0x24c) >> 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x248);
    uVar56 = *(undefined8 *)(param_1 + 0x4c);
    pfVar1 = *(float **)(param_1 + 0x118);
    pfVar3 = *(float **)(param_1 + 0x120);
    fVar77 = *(float *)(lVar45 + 0x14) - fVar79;
    pfVar29 = *(float **)(param_1 + 0x30);
    fVar93 = (float)NEON_ucvtf(*(undefined4 *)(lVar45 + 0x18));
    fVar81 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 2));
    uVar7 = *(undefined8 *)(param_1 + 0x180);
    uVar8 = *(undefined8 *)(param_1 + 0x188);
    uVar74 = *(undefined8 *)(param_1 + 0x1c8);
    uVar73 = *(undefined8 *)(param_1 + 0x1c0);
    uVar76 = *(undefined8 *)(param_1 + 0x1d8);
    uVar75 = *(undefined8 *)(param_1 + 0x1d0);
    uVar9 = *(undefined8 *)(param_1 + 400);
    uVar10 = *(undefined8 *)(param_1 + 0x198);
    pfVar30 = *(float **)(param_1 + 0x40);
    pfVar2 = *(float **)(param_1 + 0x158);
    pfVar4 = *(float **)(param_1 + 0x160);
    pfVar46 = (float *)*param_2;
    fVar80 = (float)*(undefined8 *)(param_1 + 0x24c);
    fVar78 = *(float *)(lVar45 + 0x10) - fVar80;
    fVar55 = fVar59;
    do {
      pfVar27 = pfVar34 + 4;
      fVar59 = *pfVar34;
      pfVar35 = pfVar36 + 4;
      fVar61 = *pfVar36;
      local_c0 = (float)uVar7;
      fStack_bc = (float)((ulong)uVar7 >> 0x20);
      fStack_b8 = (float)uVar8;
      fStack_b4 = (float)((ulong)uVar8 >> 0x20);
      uVar47 = (ulong)*(ushort *)(param_2 + 2);
      pfVar39 = pfVar40 + 4;
      fVar60 = *pfVar40;
      pfVar34 = pfVar27;
      if (pfVar2 <= pfVar27) {
        pfVar34 = pfVar1;
      }
      pfVar27 = pfVar41 + 4;
      fVar64 = *pfVar41;
      pfVar36 = pfVar35;
      if (pfVar2 <= pfVar35) {
        pfVar36 = pfVar1 + 1;
      }
      pfVar40 = pfVar37 + 4;
      fVar62 = *pfVar37;
      pfVar37 = pfVar40;
      if (pfVar2 <= pfVar40) {
        pfVar37 = pfVar1 + 2;
      }
      pfVar35 = pfVar42 + 4;
      fVar65 = *pfVar42;
      pfVar40 = pfVar38 + 4;
      fVar63 = *pfVar38;
      pfVar43 = pfVar44 + 4;
      fVar66 = *pfVar44;
      pfVar38 = pfVar40;
      if (pfVar2 <= pfVar40) {
        pfVar38 = pfVar1 + 3;
      }
      fVar79 = fVar79 + fVar77 / fVar81;
      fVar80 = fVar80 + fVar78 / fVar81;
      pfVar40 = pfVar39;
      if (pfVar4 <= pfVar39) {
        pfVar40 = pfVar3;
      }
      pfVar41 = pfVar27;
      if (pfVar4 <= pfVar27) {
        pfVar41 = pfVar3 + 1;
      }
      pfVar42 = pfVar35;
      if (pfVar4 <= pfVar35) {
        pfVar42 = pfVar3 + 2;
      }
      pfVar44 = pfVar43;
      if (pfVar4 <= pfVar43) {
        pfVar44 = pfVar3 + 3;
      }
      fVar48 = (float)uVar49 * (float)uVar73 + local_c0 * fVar59;
      fVar61 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar73 >> 0x20) + fStack_bc * fVar61;
      uVar49 = CONCAT44(fVar61,fVar48);
      fVar62 = (float)uVar50 * (float)uVar74 + fStack_b8 * fVar62;
      fVar63 = (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar74 >> 0x20) + fStack_b4 * fVar63;
      uVar50 = CONCAT44(fVar63,fVar62);
      local_d0 = (float)uVar9;
      fStack_cc = (float)((ulong)uVar9 >> 0x20);
      fStack_c8 = (float)uVar10;
      fStack_c4 = (float)((ulong)uVar10 >> 0x20);
      fVar60 = (float)uVar51 * (float)uVar75 + local_d0 * fVar60;
      fVar64 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar75 >> 0x20) + fStack_cc * fVar64;
      uVar51 = CONCAT44(fVar64,fVar60);
      fVar65 = (float)uVar52 * (float)uVar76 + fStack_c8 * fVar65;
      fVar66 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar76 >> 0x20) + fStack_c4 * fVar66;
      uVar52 = CONCAT44(fVar66,fVar65);
      fVar59 = (float)uVar13;
      fVar82 = (float)((ulong)uVar13 >> 0x20);
      fVar83 = (float)uVar14;
      fVar84 = (float)((ulong)uVar14 >> 0x20);
      fVar85 = (float)uVar17;
      fVar86 = (float)((ulong)uVar17 >> 0x20);
      fVar87 = (float)uVar18;
      fVar88 = (float)((ulong)uVar18 >> 0x20);
      fVar89 = (float)uVar25;
      fVar90 = (float)((ulong)uVar25 >> 0x20);
      fVar91 = (float)uVar26;
      fVar92 = (float)((ulong)uVar26 >> 0x20);
      fVar67 = *pfVar46;
      fVar68 = pfVar46[uVar47];
      fVar70 = pfVar46[uVar47 * 2];
      fVar71 = pfVar46[uVar47 * 4];
      fVar69 = pfVar46[uVar47 * 3];
      *pfVar46 = (fVar63 * fVar84 + fVar84 * fVar66 + fVar61 * fVar82 + fVar82 * fVar64 +
                 fVar62 * fVar83 + fVar83 * fVar65 + fVar48 * fVar59 + fVar59 * fVar60) * fVar79 +
                 fVar80 * fVar67;
      pfVar46[*(ushort *)(param_2 + 2)] =
           (fVar63 * fVar88 + fVar88 * fVar66 + fVar61 * fVar86 + fVar86 * fVar64 +
           fVar62 * fVar87 + fVar87 * fVar65 + fVar48 * fVar85 + fVar85 * fVar60) * fVar79 +
           fVar80 * fVar68;
      fVar59 = -fVar53;
      fVar53 = fVar69 + fVar70 + fVar68 + fVar67 + fVar71;
      pfVar46[(ulong)*(ushort *)(param_2 + 2) * 2] =
           (fVar63 * fVar92 + fVar92 * fVar66 + fVar61 * fVar90 + fVar90 * fVar64 +
           fVar62 * fVar91 + fVar91 * fVar65 + fVar48 * fVar89 + fVar89 * fVar60) * fVar79 +
           fVar80 * fVar70;
      pfVar46[(ulong)*(ushort *)(param_2 + 2) * 3] =
           (fVar63 * (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar16 >> 0x20) * fVar66 +
            fVar61 * (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar15 >> 0x20) * fVar64 +
           fVar62 * (float)uVar12 + (float)uVar16 * fVar65 +
           fVar48 * (float)uVar11 + (float)uVar15 * fVar60) * fVar79 + fVar80 * fVar69;
      pfVar46[(ulong)*(ushort *)(param_2 + 2) * 4] =
           (fVar63 * (float)((ulong)uVar20 >> 0x20) + fVar24 * fVar66 +
            fVar61 * (float)((ulong)uVar19 >> 0x20) + fVar22 * fVar64 +
           fVar62 * (float)uVar20 + fVar23 * fVar65 + fVar48 * (float)uVar19 + fVar21 * fVar60) *
           fVar79 + fVar80 * fVar71;
      fVar54 = fVar59 + fVar54 * (float)uVar6 + fVar53;
      if (pfVar29 == (float *)0x0) {
        fVar59 = fVar54;
      }
      else {
        fVar59 = *pfVar33;
        pfVar27 = pfVar33 + 1;
        *pfVar33 = fVar54;
        pfVar33 = pfVar29;
        if (pfVar27 != pfVar30) {
          pfVar33 = pfVar27;
        }
      }
      pfVar46 = pfVar46 + 1;
      fVar55 = fVar55 * (float)((ulong)uVar56 >> 0x20) + fVar59 * (float)uVar56;
      fVar67 = (fVar66 + fVar63 + fVar64 + fVar61 + fVar65 + fVar62 + fVar60 + fVar48) *
               (-2.0 / fVar93);
      auVar57._0_4_ = fVar67 + fVar60;
      auVar57._4_4_ = fVar67 + fVar64;
      auVar57._8_4_ = fVar67 + fVar65;
      auVar57._12_4_ = fVar67 + fVar66;
      auVar58._4_4_ = fVar67 + fVar61;
      auVar58._0_4_ = fVar67 + fVar48;
      auVar58._8_4_ = fVar67 + fVar62;
      auVar58._12_4_ = fVar67 + fVar63;
      auVar72 = NEON_ext(auVar57,auVar58,4,1);
      auVar5._4_4_ = fVar67 + fVar61;
      auVar5._0_4_ = fVar67 + fVar48;
      auVar5._8_4_ = fVar67 + fVar62;
      auVar5._12_4_ = fVar67 + fVar63;
      auVar58 = NEON_ext(auVar5,auVar57,4,1);
      pfVar27 = pfVar31 + 4;
      pfVar31[2] = fVar55 + auVar58._8_4_;
      pfVar31[3] = fVar55 + auVar58._12_4_;
      *pfVar31 = fVar55 + auVar58._0_4_;
      pfVar31[1] = fVar55 + auVar58._4_4_;
      pfVar31 = pfVar27;
      if (pfVar2 <= pfVar27) {
        pfVar31 = pfVar1;
      }
      pfVar27 = pfVar32 + 4;
      *(ulong *)(pfVar32 + 2) = CONCAT44(fVar55 + auVar72._12_4_,fVar55 + auVar72._8_4_);
      *(ulong *)pfVar32 = CONCAT44(fVar55 + auVar72._4_4_,fVar55 + auVar72._0_4_);
      pfVar32 = pfVar27;
      if (pfVar4 <= pfVar27) {
        pfVar32 = pfVar3;
      }
      uVar28 = uVar28 - 1;
      fVar55 = fVar59;
    } while (uVar28 != 0);
  }
  *(float *)(param_1 + 0x54) = fVar59;
  *(float **)(param_1 + 0x38) = pfVar33;
  *(ulong *)(param_1 + 0x240) = CONCAT44(fVar54,fVar53);
  *(float **)(param_1 + 0x138) = pfVar31;
  *(float **)(param_1 + 0x140) = pfVar32;
  *(float **)(param_1 + 0x98) = pfVar34;
  *(float **)(param_1 + 0xa0) = pfVar36;
  *(float **)(param_1 + 0xa8) = pfVar37;
  *(float **)(param_1 + 0xb0) = pfVar38;
  *(float **)(param_1 + 0xb8) = pfVar40;
  *(float **)(param_1 + 0xc0) = pfVar41;
  *(float **)(param_1 + 200) = pfVar42;
  *(float **)(param_1 + 0xd0) = pfVar44;
  *(undefined8 *)(param_1 + 0x208) = uVar50;
  *(undefined8 *)(param_1 + 0x200) = uVar49;
  *(undefined8 *)(param_1 + 0x218) = uVar52;
  *(undefined8 *)(param_1 + 0x210) = uVar51;
  return;
}


