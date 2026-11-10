/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055e170; name: FUN_.text__0055e170
 */


void FUN__text__0055e170(long param_1,uint param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [12];
  undefined1 (*pauVar11) [12];
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  long *plVar37;
  ulong __n;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
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
  
  uVar29 = *(uint *)((long)param_4 + 0xc);
  uVar26 = (ulong)uVar29;
  if ((param_2 & 3) != 0) {
    iVar25 = 4 - (param_2 & 3);
    if (uVar29 != 0) {
      __n = (ulong)(uint)(iVar25 * 4);
      uVar38 = uVar26 & 3;
      if (uVar29 < 4) {
        lVar27 = 0;
      }
      else {
        lVar27 = 0;
        plVar37 = (long *)(param_1 + 0x10);
        lVar31 = (ulong)param_2 * 4;
        do {
          memset((void *)(plVar37[-2] + lVar31),0,__n);
          memset((void *)(plVar37[-1] + lVar31),0,__n);
          memset((void *)(*plVar37 + lVar31),0,__n);
          memset((void *)(plVar37[1] + lVar31),0,__n);
          lVar27 = lVar27 + -4;
          plVar37 = plVar37 + 4;
        } while (-lVar27 != (uVar26 & 0xfffffffc));
        lVar27 = -lVar27;
      }
      if ((uVar29 & 3) != 0) {
        plVar37 = (long *)(param_1 + lVar27 * 8);
        do {
          memset((void *)(*plVar37 + (ulong)param_2 * 4),0,__n);
          uVar38 = uVar38 - 1;
          plVar37 = plVar37 + 1;
        } while (uVar38 != 0);
      }
      uVar26 = (ulong)*(uint *)((long)param_4 + 0xc);
    }
    param_2 = iVar25 + param_2;
  }
  puVar28 = (undefined8 *)*param_4;
  uVar29 = *(uint *)((long)param_3 + 0xc);
  lVar27 = *param_3;
  if ((((uVar29 >> 2 & 1) != 0) && (3 < (uint)uVar26)) && (lVar27 != 0)) {
    do {
      fVar69 = (float)puVar28[1];
      fVar70 = (float)((ulong)puVar28[1] >> 0x20);
      fVar67 = (float)*puVar28;
      fVar71 = (float)((ulong)*puVar28 >> 0x20);
      fVar40 = (float)puVar28[3];
      fVar41 = (float)((ulong)puVar28[3] >> 0x20);
      fVar72 = (float)puVar28[2];
      fVar89 = (float)((ulong)puVar28[2] >> 0x20);
      lVar27 = 0;
      if ((*(uint *)((long)param_3 + 0xc) & 2) != 0) {
        lVar27 = 0x60;
      }
      fVar43 = *(float *)(puVar28 + 4);
      fVar52 = *(float *)((long)puVar28 + 0x24);
      fVar53 = *(float *)(puVar28 + 5);
      fVar54 = *(float *)((long)puVar28 + 0x2c);
      fVar59 = (float)puVar28[7];
      fVar60 = (float)((ulong)puVar28[7] >> 0x20);
      fVar55 = (float)puVar28[6];
      fVar57 = (float)((ulong)puVar28[6] >> 0x20);
      if (param_2 != 0) {
        uVar38 = 0;
        plVar37 = (long *)(param_1 + (ulong)(uint)(*(int *)((long)param_4 + 0xc) - (int)uVar26) * 8)
        ;
        pfVar33 = (float *)(*param_3 + ((ulong)*(uint *)((long)param_3 + 0xc) & 1) * 0x80 + lVar27);
        fVar61 = *pfVar33;
        fVar68 = pfVar33[1];
        fVar74 = pfVar33[3];
        fVar79 = pfVar33[4];
        fVar93 = pfVar33[2];
        lVar27 = *plVar37;
        lVar3 = plVar37[1];
        lVar31 = plVar37[2];
        lVar4 = plVar37[3];
        fVar84 = fVar67;
        fVar85 = fVar71;
        fVar86 = fVar69;
        fVar87 = fVar70;
        do {
          lVar7 = uVar38 * 4;
          fVar88 = fVar72 * fVar93;
          fVar90 = fVar89 * fVar93;
          fVar91 = fVar40 * fVar93;
          fVar92 = fVar41 * fVar93;
          pauVar8 = (undefined1 (*) [12])(lVar27 + lVar7);
          fVar67 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
          fVar94 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
          pauVar9 = (undefined1 (*) [12])(lVar3 + lVar7);
          fVar71 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
          fVar95 = (float)*(undefined8 *)*pauVar9;
          fVar96 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
          uVar29 = (int)uVar38 + 4;
          uVar38 = (ulong)uVar29;
          pauVar10 = (undefined1 (*) [12])(lVar31 + lVar7);
          fVar69 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar97 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          pauVar11 = (undefined1 (*) [12])(lVar4 + lVar7);
          fVar70 = (float)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
          fVar98 = (float)*(undefined8 *)*pauVar11;
          fVar99 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
          fVar72 = SUB124(*pauVar8,8);
          fVar89 = SUB124(*pauVar9,8);
          fVar40 = SUB124(*pauVar10,8);
          fVar41 = SUB124(*pauVar11,8);
          fVar39 = (float)*(undefined8 *)*pauVar8;
          fVar42 = (float)*(undefined8 *)*pauVar10;
          fVar88 = fVar88 + fVar84 * fVar68 + fVar39 * fVar61 + fVar55 * fVar79 + fVar43 * fVar74;
          fVar90 = fVar90 + fVar85 * fVar68 + fVar95 * fVar61 + fVar57 * fVar79 + fVar52 * fVar74;
          fVar91 = fVar91 + fVar86 * fVar68 + fVar42 * fVar61 + fVar59 * fVar79 + fVar53 * fVar74;
          fVar92 = fVar92 + fVar87 * fVar68 + fVar98 * fVar61 + fVar60 * fVar79 + fVar54 * fVar74;
          fVar84 = fVar84 * fVar93 + fVar39 * fVar68 + fVar94 * fVar61 + fVar43 * fVar79 +
                   fVar88 * fVar74;
          fVar85 = fVar85 * fVar93 + fVar95 * fVar68 + fVar96 * fVar61 + fVar52 * fVar79 +
                   fVar90 * fVar74;
          fVar86 = fVar86 * fVar93 + fVar42 * fVar68 + fVar97 * fVar61 + fVar53 * fVar79 +
                   fVar91 * fVar74;
          fVar87 = fVar87 * fVar93 + fVar98 * fVar68 + fVar99 * fVar61 + fVar54 * fVar79 +
                   fVar92 * fVar74;
          fVar55 = fVar39 * fVar93 + fVar94 * fVar68 + fVar72 * fVar61 + fVar88 * fVar79 +
                   fVar84 * fVar74;
          fVar57 = fVar95 * fVar93 + fVar96 * fVar68 + fVar89 * fVar61 + fVar90 * fVar79 +
                   fVar85 * fVar74;
          fVar59 = fVar42 * fVar93 + fVar97 * fVar68 + fVar40 * fVar61 + fVar91 * fVar79 +
                   fVar86 * fVar74;
          fVar60 = fVar98 * fVar93 + fVar99 * fVar68 + fVar41 * fVar61 + fVar92 * fVar79 +
                   fVar87 * fVar74;
          fVar43 = fVar94 * fVar93 + fVar72 * fVar68 + fVar67 * fVar61 + fVar84 * fVar79 +
                   fVar55 * fVar74;
          fVar52 = fVar96 * fVar93 + fVar89 * fVar68 + fVar71 * fVar61 + fVar85 * fVar79 +
                   fVar57 * fVar74;
          fVar53 = fVar97 * fVar93 + fVar40 * fVar68 + fVar69 * fVar61 + fVar86 * fVar79 +
                   fVar59 * fVar74;
          fVar54 = fVar99 * fVar93 + fVar41 * fVar68 + fVar70 * fVar61 + fVar87 * fVar79 +
                   fVar60 * fVar74;
          puVar12 = (undefined8 *)(lVar27 + lVar7);
          puVar12[1] = CONCAT44(fVar43,fVar55);
          *puVar12 = CONCAT44(fVar84,fVar88);
          puVar12 = (undefined8 *)(lVar3 + lVar7);
          puVar12[1] = CONCAT44(fVar52,fVar57);
          *puVar12 = CONCAT44(fVar85,fVar90);
          puVar12 = (undefined8 *)(lVar31 + lVar7);
          puVar12[1] = CONCAT44(fVar53,fVar59);
          *puVar12 = CONCAT44(fVar86,fVar91);
          puVar12 = (undefined8 *)(lVar4 + lVar7);
          puVar12[1] = CONCAT44(fVar54,fVar60);
          *puVar12 = CONCAT44(fVar87,fVar92);
          fVar84 = fVar67;
          fVar85 = fVar71;
          fVar86 = fVar69;
          fVar87 = fVar70;
        } while (uVar29 < param_2);
      }
      uVar29 = (int)uVar26 - 4;
      uVar26 = (ulong)uVar29;
      puVar28[1] = CONCAT44(fVar70,fVar69);
      *puVar28 = CONCAT44(fVar71,fVar67);
      puVar28[3] = CONCAT44(fVar41,fVar40);
      puVar28[2] = CONCAT44(fVar89,fVar72);
      *(float *)(puVar28 + 5) = fVar53;
      *(float *)((long)puVar28 + 0x2c) = fVar54;
      *(float *)(puVar28 + 4) = fVar43;
      *(float *)((long)puVar28 + 0x24) = fVar52;
      puVar28[7] = CONCAT44(fVar60,fVar59);
      puVar28[6] = CONCAT44(fVar57,fVar55);
      puVar28 = puVar28 + 8;
    } while (3 < uVar29);
    uVar29 = *(uint *)((long)param_3 + 0xc);
    lVar27 = *param_3;
  }
  pfVar33 = (float *)0x0;
  if ((uVar29 & 2) != 0) {
    pfVar33 = (float *)(lVar27 + (ulong)((uVar29 & 1) << 5) * 4);
  }
  uVar24 = (uint)uVar26;
  if ((1 < uVar24) && (pfVar33 != (float *)0x0)) {
    uVar44 = (undefined4)*puVar28;
    auVar66._4_4_ = uVar44;
    auVar66._0_4_ = uVar44;
    uVar56 = (undefined4)puVar28[2];
    uVar58 = (undefined4)((ulong)puVar28[2] >> 0x20);
    uVar44 = (undefined4)((ulong)*puVar28 >> 0x20);
    auVar66._12_4_ = uVar44;
    auVar66._8_4_ = uVar44;
    auVar51._4_4_ = uVar56;
    auVar51._0_4_ = uVar56;
    auVar51._12_4_ = uVar58;
    auVar51._8_4_ = uVar58;
    fVar67 = (float)puVar28[4];
    fVar71 = (float)((ulong)puVar28[4] >> 0x20);
    fVar69 = (float)puVar28[6];
    fVar70 = (float)((ulong)puVar28[6] >> 0x20);
    if (param_2 != 0) {
      uVar26 = 0;
      fVar72 = *pfVar33;
      fVar89 = pfVar33[1];
      fVar40 = pfVar33[2];
      fVar41 = pfVar33[3];
      uVar77 = *(undefined8 *)(pfVar33 + 6);
      uVar75 = *(undefined8 *)(pfVar33 + 4);
      uVar82 = *(undefined8 *)(pfVar33 + 10);
      uVar80 = *(undefined8 *)(pfVar33 + 8);
      fVar53 = (float)*(undefined8 *)(pfVar33 + 0xe);
      fVar54 = (float)((ulong)*(undefined8 *)(pfVar33 + 0xe) >> 0x20);
      fVar43 = (float)*(undefined8 *)(pfVar33 + 0xc);
      fVar52 = (float)((ulong)*(undefined8 *)(pfVar33 + 0xc) >> 0x20);
      plVar37 = (long *)(param_1 + (ulong)(*(int *)((long)param_4 + 0xc) - uVar24) * 8);
      lVar27 = *plVar37;
      lVar31 = plVar37[1];
      fVar59 = (float)*(undefined8 *)(pfVar33 + 0x12);
      fVar60 = (float)((ulong)*(undefined8 *)(pfVar33 + 0x12) >> 0x20);
      fVar55 = (float)*(undefined8 *)(pfVar33 + 0x10);
      fVar57 = (float)((ulong)*(undefined8 *)(pfVar33 + 0x10) >> 0x20);
      fVar85 = (float)*(undefined8 *)(pfVar33 + 0x16);
      fVar86 = (float)((ulong)*(undefined8 *)(pfVar33 + 0x16) >> 0x20);
      fVar93 = (float)*(undefined8 *)(pfVar33 + 0x14);
      fVar84 = (float)((ulong)*(undefined8 *)(pfVar33 + 0x14) >> 0x20);
      do {
        lVar3 = uVar26 * 4;
        fVar88 = (float)uVar80;
        fVar90 = (float)((ulong)uVar80 >> 0x20);
        fVar91 = (float)uVar82;
        fVar92 = (float)((ulong)uVar82 >> 0x20);
        pauVar8 = (undefined1 (*) [12])(lVar27 + lVar3);
        fVar96 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
        fVar94 = (float)*(undefined8 *)*pauVar8;
        fVar95 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
        fVar87 = auVar51._0_4_;
        fVar61 = auVar51._4_4_;
        fVar68 = auVar51._8_4_;
        auVar46._12_4_ = auVar51._12_4_;
        pauVar9 = (undefined1 (*) [12])(lVar31 + lVar3);
        fVar99 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
        fVar97 = (float)*(undefined8 *)*pauVar9;
        fVar98 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
        uVar29 = (int)uVar26 + 4;
        uVar26 = (ulong)uVar29;
        fVar100 = SUB124(*pauVar8,8);
        fVar101 = SUB124(*pauVar9,8);
        auVar73._4_12_ = auVar51._4_12_;
        auVar73._0_4_ = fVar94;
        auVar46._0_8_ = auVar73._0_8_;
        auVar46._8_4_ = fVar97;
        auVar45._8_8_ = auVar46._8_8_;
        auVar45._4_4_ = fVar94;
        auVar45._0_4_ = fVar94;
        auVar47._0_12_ = auVar45._0_12_;
        auVar47._12_4_ = fVar97;
        fVar74 = (float)uVar75;
        fVar79 = (float)((ulong)uVar75 >> 0x20);
        fVar39 = (float)uVar77;
        fVar42 = (float)((ulong)uVar77 >> 0x20);
        auVar48._4_12_ = auVar47._4_12_;
        auVar48._0_4_ = fVar100;
        auVar50._0_8_ = auVar48._0_8_;
        auVar50._8_4_ = fVar101;
        auVar50._12_4_ = fVar97;
        auVar49._8_8_ = auVar50._8_8_;
        auVar49._4_4_ = fVar100;
        auVar49._0_4_ = fVar100;
        auVar51._0_12_ = auVar49._0_12_;
        auVar51._12_4_ = fVar101;
        fVar87 = auVar66._0_4_ * fVar88 + fVar43 * fVar87 + fVar72 * fVar94 + fVar74 * fVar94 +
                 fVar55 * fVar67 + fVar93 * fVar69;
        fVar67 = auVar66._4_4_ * fVar90 + fVar52 * fVar61 + fVar89 * fVar95 + fVar79 * fVar94 +
                 fVar57 * fVar67 + fVar84 * fVar69;
        auVar62._0_8_ = CONCAT44(fVar67,fVar87);
        auVar62._8_4_ =
             auVar66._8_4_ * fVar91 + fVar53 * fVar68 + fVar40 * fVar97 + fVar39 * fVar97 +
             fVar59 * fVar71 + fVar85 * fVar70;
        auVar62._12_4_ =
             auVar66._12_4_ * fVar92 + fVar54 * auVar46._12_4_ + fVar41 * fVar98 + fVar42 * fVar97 +
             fVar60 * fVar71 + fVar86 * fVar70;
        fVar69 = fVar95 * fVar88 + fVar43 * fVar94 + fVar72 * fVar100 + fVar74 * fVar100 +
                 fVar55 * fVar67 + fVar93 * fVar87;
        fVar67 = fVar95 * fVar90 + fVar52 * fVar94 + fVar89 * fVar96 + fVar79 * fVar100 +
                 fVar57 * fVar67 + fVar84 * fVar87;
        fVar70 = fVar98 * fVar91 + fVar53 * fVar97 + fVar40 * fVar101 + fVar39 * fVar101 +
                 fVar59 * auVar62._12_4_ + fVar85 * auVar62._8_4_;
        fVar71 = fVar98 * fVar92 + fVar54 * fVar97 + fVar41 * fVar99 + fVar42 * fVar101 +
                 fVar60 * auVar62._12_4_ + fVar86 * auVar62._8_4_;
        auVar63._4_12_ = auVar62._4_12_;
        auVar63._0_4_ = fVar96;
        auVar65._0_8_ = auVar63._0_8_;
        auVar65._8_4_ = fVar99;
        auVar65._12_4_ = auVar62._12_4_;
        auVar64._8_8_ = auVar65._8_8_;
        auVar64._4_4_ = fVar96;
        auVar64._0_4_ = fVar96;
        auVar66._0_12_ = auVar64._0_12_;
        auVar66._12_4_ = fVar99;
        puVar12 = (undefined8 *)(lVar27 + lVar3);
        puVar12[1] = CONCAT44(fVar67,fVar69);
        *puVar12 = auVar62._0_8_;
        puVar12 = (undefined8 *)(lVar31 + lVar3);
        puVar12[1] = CONCAT44(fVar71,fVar70);
        uVar17 = CONCAT44(auVar62._12_4_,auVar62._8_4_);
        *puVar12 = uVar17;
      } while (uVar29 < param_2);
    }
    auVar73 = NEON_ext(auVar66,auVar66,8,1);
    uVar26 = (ulong)(uVar24 - 2);
    *puVar28 = CONCAT44(auVar73._0_4_,auVar66._0_4_);
    auVar66 = NEON_ext(auVar51,auVar51,8,1);
    puVar28[2] = CONCAT44(auVar66._0_4_,auVar51._0_4_);
    auVar15._4_4_ = fVar67;
    auVar15._0_4_ = fVar67;
    auVar15._8_4_ = fVar71;
    auVar15._12_4_ = fVar71;
    auVar16._4_4_ = fVar67;
    auVar16._0_4_ = fVar67;
    auVar16._8_4_ = fVar71;
    auVar16._12_4_ = fVar71;
    auVar51 = NEON_ext(auVar15,auVar16,8,1);
    puVar28[4] = CONCAT44(auVar51._0_4_,fVar67);
    auVar13._4_4_ = fVar69;
    auVar13._0_4_ = fVar69;
    auVar13._8_4_ = fVar70;
    auVar13._12_4_ = fVar70;
    auVar14._4_4_ = fVar69;
    auVar14._0_4_ = fVar69;
    auVar14._8_4_ = fVar70;
    auVar14._12_4_ = fVar70;
    auVar51 = NEON_ext(auVar13,auVar14,8,1);
    puVar28[6] = CONCAT44(auVar51._0_4_,fVar69);
    uVar29 = *(uint *)((long)param_3 + 0xc);
    lVar27 = *param_3;
  }
  if ((((int)uVar26 != 0) && ((uVar29 & 1) != 0)) && (lVar27 != 0)) {
    do {
      while( true ) {
        uVar30 = *(uint *)((long)param_4 + 0xc);
        iVar25 = (int)uVar26;
        uVar6 = uVar30 - iVar25;
        uVar32 = uVar30 - 1;
        uVar29 = uVar30 & 1;
        uVar5 = uVar6 >> 2;
        uVar24 = uVar6 & 3;
        if (uVar32 == uVar6 && uVar29 != 0) {
          uVar1 = uVar5;
          if (uVar30 != 1 && 1 < uVar24) {
            uVar1 = uVar5 + 1;
          }
          pfVar33 = (float *)(*param_4 + (ulong)(uVar1 << 4) * 4);
          pfVar34 = pfVar33 + 1;
          pfVar35 = pfVar33 + 2;
          pfVar36 = pfVar33 + 3;
        }
        else {
          pfVar33 = (float *)(*param_4 + (ulong)(uVar5 << 4) * 4 + (ulong)uVar24 * 4);
          pfVar34 = pfVar33 + 4;
          pfVar35 = pfVar33 + 8;
          pfVar36 = pfVar33 + 0xc;
        }
        fVar67 = *pfVar33;
        fVar71 = *pfVar34;
        fVar69 = *pfVar35;
        pauVar2 = (undefined1 (*) [16])0x0;
        if ((*(byte *)((long)param_3 + 0xc) & 1) != 0) {
          pauVar2 = (undefined1 (*) [16])*param_3;
        }
        fVar70 = *pfVar36;
        if (param_2 != 0) {
          auVar51 = *pauVar2;
          uVar78 = *(undefined8 *)(pauVar2[1] + 8);
          uVar76 = *(undefined8 *)pauVar2[1];
          uVar26 = 0;
          uVar83 = *(undefined8 *)(pauVar2[2] + 8);
          uVar81 = *(undefined8 *)pauVar2[2];
          uVar77 = *(undefined8 *)(pauVar2[3] + 8);
          uVar75 = *(undefined8 *)pauVar2[3];
          uVar82 = *(undefined8 *)(pauVar2[4] + 8);
          uVar80 = *(undefined8 *)pauVar2[4];
          uVar18 = *(undefined8 *)(pauVar2[5] + 8);
          uVar17 = *(undefined8 *)pauVar2[5];
          uVar20 = *(undefined8 *)(pauVar2[6] + 8);
          uVar19 = *(undefined8 *)pauVar2[6];
          uVar22 = *(undefined8 *)(pauVar2[7] + 8);
          uVar21 = *(undefined8 *)pauVar2[7];
          fVar72 = fVar67;
          fVar89 = fVar71;
          do {
            lVar31 = *(long *)(param_1 + (ulong)uVar6 * 8);
            lVar27 = uVar26 * 4;
            uVar29 = (int)uVar26 + 4;
            uVar26 = (ulong)uVar29;
            puVar28 = (undefined8 *)(lVar31 + lVar27);
            uVar23 = puVar28[1];
            fVar71 = (float)uVar23;
            fVar67 = (float)((ulong)uVar23 >> 0x20);
            uVar23 = *puVar28;
            fVar54 = (float)uVar23;
            fVar55 = (float)((ulong)uVar23 >> 0x20);
            fVar40 = (float)uVar19 * fVar69;
            fVar43 = (float)((ulong)uVar19 >> 0x20) * fVar69;
            fVar41 = (float)uVar21 * fVar70;
            fVar52 = (float)((ulong)uVar21 >> 0x20) * fVar70;
            fVar53 = (float)((ulong)uVar22 >> 0x20) * fVar70;
            fVar70 = fVar71 * auVar51._8_4_ + (float)uVar82 * fVar72 + (float)uVar18 * fVar89 +
                     (float)uVar78 * fVar71 + (float)uVar83 * fVar55 + (float)uVar77 * fVar54 +
                     (float)uVar20 * fVar69 + (float)uVar22 * fVar70;
            fVar69 = fVar67 * auVar51._12_4_ + (float)((ulong)uVar82 >> 0x20) * fVar72 +
                     (float)((ulong)uVar18 >> 0x20) * fVar89 +
                     (float)((ulong)uVar78 >> 0x20) * fVar71 +
                     (float)((ulong)uVar83 >> 0x20) * fVar55 +
                     (float)((ulong)uVar77 >> 0x20) * fVar54 +
                     (float)((ulong)uVar20 >> 0x20) * fVar69 + fVar53;
            puVar28 = (undefined8 *)(lVar31 + lVar27);
            puVar28[1] = CONCAT44(fVar69,fVar70);
            *puVar28 = CONCAT44(fVar55 * auVar51._4_4_ + (float)((ulong)uVar80 >> 0x20) * fVar72 +
                                (float)((ulong)uVar17 >> 0x20) * fVar89 +
                                (float)((ulong)uVar76 >> 0x20) * fVar71 +
                                (float)((ulong)uVar81 >> 0x20) * fVar55 +
                                (float)((ulong)uVar75 >> 0x20) * fVar54 + fVar43 + fVar52,
                                fVar54 * auVar51._0_4_ + (float)uVar80 * fVar72 +
                                (float)uVar17 * fVar89 + (float)uVar76 * fVar71 +
                                (float)uVar81 * fVar55 + (float)uVar75 * fVar54 + fVar40 + fVar41);
            fVar72 = fVar67;
            fVar89 = fVar71;
          } while (uVar29 < param_2);
          uVar30 = *(uint *)((long)param_4 + 0xc);
          uVar32 = uVar30 - 1;
          uVar29 = uVar30 & 1;
        }
        if ((uVar32 != uVar6) || (uVar29 == 0)) break;
        if (1 < uVar24 && uVar30 != 1) {
          uVar5 = uVar5 + 1;
        }
        lVar27 = (ulong)(uVar5 << 4) * 4;
        *(float *)(*param_4 + lVar27) = fVar67;
        *(float *)(*param_4 + lVar27 + 4) = fVar71;
        *(float *)(*param_4 + lVar27 + 8) = fVar69;
        uVar26 = (ulong)(iVar25 - 1U);
        *(float *)(*param_4 + lVar27 + 0xc) = fVar70;
        if (iVar25 - 1U == 0) {
          return;
        }
      }
      lVar27 = (ulong)uVar24 * 4;
      lVar31 = (ulong)(uVar5 << 4) * 4;
      *(float *)(*param_4 + lVar31 + lVar27) = fVar67;
      *(float *)(*param_4 + lVar27 + lVar31 + 0x10) = fVar71;
      *(float *)(*param_4 + lVar27 + lVar31 + 0x20) = fVar69;
      uVar26 = (ulong)(iVar25 - 1U);
      *(float *)(*param_4 + lVar27 + lVar31 + 0x30) = fVar70;
    } while (iVar25 - 1U != 0);
  }
  return;
}


