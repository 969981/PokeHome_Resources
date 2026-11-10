/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00578830; name: FUN_.text__00578830
 */


undefined8 FUN__text__00578830(long param_1,long *param_2)

{
  undefined1 (*__s) [12];
  undefined1 (*pauVar1) [12];
  undefined1 (*__dest) [12];
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [12];
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  float fVar29;
  float fVar30;
  undefined1 (*pauVar31) [12];
  bool bVar32;
  undefined1 (*__src) [12];
  uint uVar33;
  byte bVar34;
  float *pfVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined1 (*pauVar43) [12];
  byte bVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
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
  undefined1 (*local_f0) [12];
  undefined1 (*local_e8) [12];
  undefined1 (*local_c8 [4]) [12];
  undefined1 (*local_a8) [12];
  undefined1 *puStack_a0;
  
  uVar10 = *(uint *)(param_2 + 1);
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),(ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000,
                     0x715356,0x5f3);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar52 = 0x34;
  }
  else {
    __s = (undefined1 (*) [12])(__src[0xaa] + 8);
    pauVar1 = __src + 0x100;
    puVar3 = __src[0x155] + 4;
    puVar4 = __src[0x1aa] + 8;
    pauVar5 = __src + 0x200;
    puVar6 = __src[0x255] + 4;
    bVar32 = *(char *)(param_1 + 0x138) != '\0';
    pauVar8 = (undefined1 (*) [12])0x0;
    if (bVar32) {
      pauVar8 = __src + 0x300;
    }
    local_e8 = (undefined1 (*) [12])0x0;
    if (bVar32) {
      local_e8 = (undefined1 (*) [12])(__src[0x3aa] + 8);
    }
    local_f0 = (undefined1 (*) [12])0x0;
    if (bVar32) {
      local_f0 = (undefined1 (*) [12])(__src[0x355] + 4);
    }
    uVar40 = (uint)*(ushort *)((long)param_2 + 0x12);
    pauVar9 = (undefined1 (*) [12])0x0;
    if (bVar32) {
      pauVar9 = (undefined1 (*) [12])(__src[0x2aa] + 8);
    }
    fVar64 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar51 = 1.0 - fVar64 * fVar64;
    fVar25 = SQRT(fVar51);
    if (fVar51 <= 0.0) {
      fVar25 = 0.0;
    }
    local_c8[0] = __s;
    local_c8[1] = pauVar1;
    local_c8[2] = (undefined1 (*) [12])puVar3;
    local_c8[3] = (undefined1 (*) [12])puVar4;
    local_a8 = pauVar5;
    puStack_a0 = puVar6;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar33 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      piVar2 = (int *)(param_1 + 0xb8);
      fVar51 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar54 = 1.0 - fVar51 * fVar51;
      fVar26 = SQRT(fVar54);
      if (fVar54 <= 0.0) {
        fVar26 = 0.0;
      }
      do {
        uVar38 = uVar40;
        if (0xff < uVar40) {
          uVar38 = 0x100;
        }
        uVar48 = (ulong)uVar38;
        FUN__text__0057e570(param_2,uVar48);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar34 = *(byte *)(param_1 + 0x134), bVar34 != 0)) {
          iVar11 = 4 - (uVar38 & 3);
          uVar45 = 0;
          do {
            lVar47 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar47 + uVar45 * 0xa0 + 0x90) == 3) {
              uVar46 = uVar48;
              if ((uVar38 & 3) != 0) {
                memset(*__src + (ulong)uVar38 * 4,0,(ulong)(uint)(iVar11 * 4));
                uVar46 = (ulong)(iVar11 + uVar38);
              }
              pfVar35 = (float *)(lVar47 + uVar45 * 0xa0);
              uVar41 = 0;
              fVar77 = pfVar35[2];
              fVar75 = pfVar35[3];
              fVar54 = pfVar35[4];
              fVar61 = pfVar35[5];
              fVar29 = pfVar35[6];
              fVar30 = pfVar35[7];
              uVar59 = *(undefined8 *)(pfVar35 + 0x12);
              uVar58 = *(undefined8 *)(pfVar35 + 0x10);
              uVar62 = *(undefined8 *)(pfVar35 + 0x16);
              uVar60 = *(undefined8 *)(pfVar35 + 0x14);
              uVar65 = *(undefined8 *)(pfVar35 + 0x1a);
              uVar63 = *(undefined8 *)(pfVar35 + 0x18);
              uVar67 = *(undefined8 *)(pfVar35 + 0x1e);
              uVar66 = *(undefined8 *)(pfVar35 + 0x1c);
              uVar69 = *(undefined8 *)(pfVar35 + 0x22);
              uVar68 = *(undefined8 *)(pfVar35 + 0x20);
              fVar78 = pfVar35[8];
              fVar76 = pfVar35[9];
              fVar50 = pfVar35[10];
              fVar72 = pfVar35[0xb];
              uVar55 = *(undefined8 *)(pfVar35 + 0xe);
              uVar52 = *(undefined8 *)(pfVar35 + 0xc);
              pauVar43 = __src;
              fVar74 = *pfVar35;
              fVar80 = pfVar35[1];
              do {
                fVar82 = (float)*(undefined8 *)(*pauVar43 + 8);
                fVar83 = (float)((ulong)*(undefined8 *)(*pauVar43 + 8) >> 0x20);
                auVar28 = *pauVar43;
                auVar27 = *pauVar43;
                fVar79 = (float)*(undefined8 *)*pauVar43;
                fVar81 = (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20);
                uVar41 = uVar41 + 4;
                fVar49 = (float)((ulong)uVar69 >> 0x20) * fVar75;
                fVar71 = fVar79 * fVar54 + (float)uVar60 * fVar74 + (float)uVar63 * fVar80 +
                         fVar78 * fVar82 + (float)uVar52 * fVar81 + (float)uVar58 * fVar79 +
                         (float)uVar66 * fVar77 + (float)uVar68 * fVar75;
                fVar73 = fVar81 * fVar61 + (float)((ulong)uVar60 >> 0x20) * fVar74 +
                         (float)((ulong)uVar63 >> 0x20) * fVar80 + fVar76 * fVar82 +
                         (float)((ulong)uVar52 >> 0x20) * fVar81 +
                         (float)((ulong)uVar58 >> 0x20) * fVar79 +
                         (float)((ulong)uVar66 >> 0x20) * fVar77 +
                         (float)((ulong)uVar68 >> 0x20) * fVar75;
                fVar75 = fVar82 * fVar29 + (float)uVar62 * fVar74 + (float)uVar65 * fVar80 +
                         fVar50 * fVar82 + (float)uVar55 * fVar81 + (float)uVar59 * fVar79 +
                         (float)uVar67 * fVar77 + (float)uVar69 * fVar75;
                fVar77 = fVar83 * fVar30 + (float)((ulong)uVar62 >> 0x20) * fVar74 +
                         (float)((ulong)uVar65 >> 0x20) * fVar80 + fVar72 * fVar82 +
                         (float)((ulong)uVar55 >> 0x20) * fVar81 +
                         (float)((ulong)uVar59 >> 0x20) * fVar79 +
                         (float)((ulong)uVar67 >> 0x20) * fVar77 + fVar49;
                *(ulong *)(*pauVar43 + 8) = CONCAT44(fVar77,fVar75);
                *(ulong *)*pauVar43 = CONCAT44(fVar73,fVar71);
                pauVar43 = (undefined1 (*) [12])(pauVar43[1] + 4);
                fVar74 = fVar83;
                fVar80 = fVar82;
              } while (uVar41 < uVar46);
              auVar53._12_4_ = fVar83;
              auVar53._0_12_ = auVar27;
              auVar18._12_4_ = fVar83;
              auVar18._0_12_ = auVar28;
              auVar53 = NEON_ext(auVar53,auVar18,8,1);
              auVar56._4_4_ = fVar73;
              auVar56._0_4_ = fVar71;
              auVar56._8_4_ = fVar75;
              auVar56._12_4_ = fVar77;
              auVar57._4_4_ = fVar73;
              auVar57._0_4_ = fVar71;
              auVar57._8_4_ = fVar75;
              auVar57._12_4_ = fVar77;
              auVar56 = NEON_ext(auVar56,auVar57,8,1);
              uVar52 = NEON_rev64(auVar53._0_8_,4);
              uVar55 = NEON_rev64(auVar56._0_8_,4);
              *(undefined8 *)pfVar35 = uVar52;
              *(undefined8 *)(pfVar35 + 2) = uVar55;
              bVar34 = *(byte *)(param_1 + 0x134);
            }
            uVar45 = uVar45 + 1;
          } while (uVar45 < bVar34);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar38 << 2));
          iVar11 = *piVar2;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar38);
          iVar11 = *piVar2;
        }
        if (iVar11 != 0) {
          FUN__text__0057c820(piVar2,__src,uVar38);
        }
        if (*(char *)(param_1 + 0x138) == '\0') {
          pauVar43 = local_f0;
          pauVar31 = local_e8;
        }
        else {
          FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,pauVar9,pauVar8,uVar38);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar34 = *(byte *)(param_1 + 0x134), bVar34 != 0)) {
            uVar7 = uVar38 & 3;
            uVar45 = 0;
            uVar46 = (ulong)((4 - uVar7) * 4);
            uVar41 = (ulong)((4 - uVar7) + uVar38);
            bVar44 = 0;
            do {
              lVar47 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar47 + uVar45 * 0xa0 + 0x90) == 1) {
                uVar39 = uVar48;
                if (uVar7 != 0) {
                  memset(*pauVar9 + uVar48 * 4,0,uVar46);
                  uVar39 = uVar41;
                }
                pfVar35 = (float *)(lVar47 + uVar45 * 0xa0);
                uVar42 = 0;
                fVar77 = pfVar35[2];
                fVar75 = pfVar35[3];
                fVar54 = pfVar35[4];
                fVar61 = pfVar35[5];
                fVar29 = pfVar35[6];
                fVar30 = pfVar35[7];
                uVar59 = *(undefined8 *)(pfVar35 + 0x12);
                uVar58 = *(undefined8 *)(pfVar35 + 0x10);
                uVar62 = *(undefined8 *)(pfVar35 + 0x16);
                uVar60 = *(undefined8 *)(pfVar35 + 0x14);
                uVar65 = *(undefined8 *)(pfVar35 + 0x1a);
                uVar63 = *(undefined8 *)(pfVar35 + 0x18);
                uVar67 = *(undefined8 *)(pfVar35 + 0x1e);
                uVar66 = *(undefined8 *)(pfVar35 + 0x1c);
                uVar69 = *(undefined8 *)(pfVar35 + 0x22);
                uVar68 = *(undefined8 *)(pfVar35 + 0x20);
                fVar78 = pfVar35[8];
                fVar76 = pfVar35[9];
                fVar50 = pfVar35[10];
                fVar72 = pfVar35[0xb];
                uVar55 = *(undefined8 *)(pfVar35 + 0xe);
                uVar52 = *(undefined8 *)(pfVar35 + 0xc);
                pauVar43 = pauVar9;
                fVar74 = *pfVar35;
                fVar80 = pfVar35[1];
                do {
                  fVar82 = (float)*(undefined8 *)(*pauVar43 + 8);
                  fVar83 = (float)((ulong)*(undefined8 *)(*pauVar43 + 8) >> 0x20);
                  auVar28 = *pauVar43;
                  auVar27 = *pauVar43;
                  fVar79 = (float)*(undefined8 *)*pauVar43;
                  fVar81 = (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20);
                  uVar42 = uVar42 + 4;
                  fVar49 = (float)((ulong)uVar69 >> 0x20) * fVar75;
                  fVar71 = fVar79 * fVar54 + (float)uVar60 * fVar74 + (float)uVar63 * fVar80 +
                           fVar78 * fVar82 + (float)uVar52 * fVar81 + (float)uVar58 * fVar79 +
                           (float)uVar66 * fVar77 + (float)uVar68 * fVar75;
                  fVar73 = fVar81 * fVar61 + (float)((ulong)uVar60 >> 0x20) * fVar74 +
                           (float)((ulong)uVar63 >> 0x20) * fVar80 + fVar76 * fVar82 +
                           (float)((ulong)uVar52 >> 0x20) * fVar81 +
                           (float)((ulong)uVar58 >> 0x20) * fVar79 +
                           (float)((ulong)uVar66 >> 0x20) * fVar77 +
                           (float)((ulong)uVar68 >> 0x20) * fVar75;
                  fVar75 = fVar82 * fVar29 + (float)uVar62 * fVar74 + (float)uVar65 * fVar80 +
                           fVar50 * fVar82 + (float)uVar55 * fVar81 + (float)uVar59 * fVar79 +
                           (float)uVar67 * fVar77 + (float)uVar69 * fVar75;
                  fVar77 = fVar83 * fVar30 + (float)((ulong)uVar62 >> 0x20) * fVar74 +
                           (float)((ulong)uVar65 >> 0x20) * fVar80 + fVar72 * fVar82 +
                           (float)((ulong)uVar55 >> 0x20) * fVar81 +
                           (float)((ulong)uVar59 >> 0x20) * fVar79 +
                           (float)((ulong)uVar67 >> 0x20) * fVar77 + fVar49;
                  *(ulong *)(*pauVar43 + 8) = CONCAT44(fVar77,fVar75);
                  *(ulong *)*pauVar43 = CONCAT44(fVar73,fVar71);
                  pauVar43 = (undefined1 (*) [12])(pauVar43[1] + 4);
                  fVar74 = fVar83;
                  fVar80 = fVar82;
                } while (uVar42 < uVar39);
                auVar19._12_4_ = fVar83;
                auVar19._0_12_ = auVar27;
                auVar20._12_4_ = fVar83;
                auVar20._0_12_ = auVar28;
                auVar56 = NEON_ext(auVar19,auVar20,8,1);
                uVar52 = NEON_rev64(auVar56._0_8_,4);
                *(undefined8 *)pfVar35 = uVar52;
                auVar12._4_4_ = fVar73;
                auVar12._0_4_ = fVar71;
                auVar12._8_4_ = fVar75;
                auVar12._12_4_ = fVar77;
                auVar13._4_4_ = fVar73;
                auVar13._0_4_ = fVar71;
                auVar13._8_4_ = fVar75;
                auVar13._12_4_ = fVar77;
                auVar56 = NEON_ext(auVar12,auVar13,8,1);
                uVar52 = NEON_rev64(auVar56._0_8_,4);
                *(undefined8 *)(pfVar35 + 2) = uVar52;
                lVar47 = *(long *)(param_1 + 0x148);
                uVar39 = uVar48;
                if (uVar7 != 0) {
                  memset(*pauVar8 + uVar48 * 4,0,uVar46);
                  uVar39 = uVar41;
                }
                lVar47 = lVar47 + uVar45 * 0xa0;
                uVar45 = 0;
                uVar58 = *(undefined8 *)(lVar47 + 0xa0);
                fVar54 = *(float *)(lVar47 + 0xb0);
                fVar61 = *(float *)(lVar47 + 0xb4);
                fVar29 = *(float *)(lVar47 + 0xb8);
                fVar30 = *(float *)(lVar47 + 0xbc);
                fVar78 = (float)*(undefined8 *)(lVar47 + 0xa8);
                fVar76 = (float)((ulong)*(undefined8 *)(lVar47 + 0xa8) >> 0x20);
                uVar70 = *(undefined8 *)(lVar47 + 0x128);
                uVar69 = *(undefined8 *)(lVar47 + 0x120);
                uVar60 = *(undefined8 *)(lVar47 + 0xe8);
                uVar59 = *(undefined8 *)(lVar47 + 0xe0);
                uVar63 = *(undefined8 *)(lVar47 + 0xf8);
                uVar62 = *(undefined8 *)(lVar47 + 0xf0);
                uVar66 = *(undefined8 *)(lVar47 + 0x108);
                uVar65 = *(undefined8 *)(lVar47 + 0x100);
                uVar68 = *(undefined8 *)(lVar47 + 0x118);
                uVar67 = *(undefined8 *)(lVar47 + 0x110);
                auVar56 = *(undefined1 (*) [16])(lVar47 + 0xc0);
                uVar55 = *(undefined8 *)(lVar47 + 0xd8);
                uVar52 = *(undefined8 *)(lVar47 + 0xd0);
                pauVar43 = pauVar8;
                fVar77 = (float)uVar58;
                fVar75 = (float)((ulong)uVar58 >> 0x20);
                do {
                  fVar71 = (float)*(undefined8 *)(*pauVar43 + 8);
                  fVar73 = (float)((ulong)*(undefined8 *)(*pauVar43 + 8) >> 0x20);
                  auVar28 = *pauVar43;
                  auVar27 = *pauVar43;
                  fVar80 = (float)*(undefined8 *)*pauVar43;
                  fVar49 = (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20);
                  uVar45 = uVar45 + 4;
                  fVar50 = (float)((ulong)uVar70 >> 0x20) * fVar76;
                  fVar72 = fVar80 * fVar54 + (float)uVar62 * fVar77 + (float)uVar65 * fVar75 +
                           auVar56._0_4_ * fVar71 + (float)uVar52 * fVar49 + (float)uVar59 * fVar80
                           + (float)uVar67 * fVar78 + (float)uVar69 * fVar76;
                  fVar74 = fVar49 * fVar61 + (float)((ulong)uVar62 >> 0x20) * fVar77 +
                           (float)((ulong)uVar65 >> 0x20) * fVar75 + auVar56._4_4_ * fVar71 +
                           (float)((ulong)uVar52 >> 0x20) * fVar49 +
                           (float)((ulong)uVar59 >> 0x20) * fVar80 +
                           (float)((ulong)uVar67 >> 0x20) * fVar78 +
                           (float)((ulong)uVar69 >> 0x20) * fVar76;
                  fVar76 = fVar71 * fVar29 + (float)uVar63 * fVar77 + (float)uVar66 * fVar75 +
                           auVar56._8_4_ * fVar71 + (float)uVar55 * fVar49 + (float)uVar60 * fVar80
                           + (float)uVar68 * fVar78 + (float)uVar70 * fVar76;
                  fVar78 = fVar73 * fVar30 + (float)((ulong)uVar63 >> 0x20) * fVar77 +
                           (float)((ulong)uVar66 >> 0x20) * fVar75 + auVar56._12_4_ * fVar71 +
                           (float)((ulong)uVar55 >> 0x20) * fVar49 +
                           (float)((ulong)uVar60 >> 0x20) * fVar80 +
                           (float)((ulong)uVar68 >> 0x20) * fVar78 + fVar50;
                  *(ulong *)(*pauVar43 + 8) = CONCAT44(fVar78,fVar76);
                  *(ulong *)*pauVar43 = CONCAT44(fVar74,fVar72);
                  pauVar43 = (undefined1 (*) [12])(pauVar43[1] + 4);
                  fVar77 = fVar73;
                  fVar75 = fVar71;
                } while (uVar45 < uVar39);
                auVar21._12_4_ = fVar73;
                auVar21._0_12_ = auVar27;
                auVar22._12_4_ = fVar73;
                auVar22._0_12_ = auVar28;
                auVar56 = NEON_ext(auVar21,auVar22,8,1);
                bVar44 = bVar44 + 1;
                uVar52 = NEON_rev64(auVar56._0_8_,4);
                *(undefined8 *)(lVar47 + 0xa0) = uVar52;
                auVar14._4_4_ = fVar74;
                auVar14._0_4_ = fVar72;
                auVar14._8_4_ = fVar76;
                auVar14._12_4_ = fVar78;
                auVar15._4_4_ = fVar74;
                auVar15._0_4_ = fVar72;
                auVar15._8_4_ = fVar76;
                auVar15._12_4_ = fVar78;
                auVar56 = NEON_ext(auVar14,auVar15,8,1);
                uVar52 = NEON_rev64(auVar56._0_8_,4);
                *(undefined8 *)(lVar47 + 0xa8) = uVar52;
                bVar34 = *(byte *)(param_1 + 0x134);
              }
              bVar44 = bVar44 + 1;
              uVar45 = (ulong)bVar44;
            } while (bVar44 < bVar34);
          }
          pauVar43 = pauVar9;
          pauVar31 = pauVar8;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN__text__0057c9c0((int *)(param_1 + 0xe8),pauVar9,local_f0,uVar38);
            FUN__text__0057c9c0(param_1 + 0x100,pauVar8,local_e8,uVar38);
            pauVar43 = local_f0;
            pauVar31 = local_e8;
          }
        }
        local_e8 = pauVar31;
        local_f0 = pauVar43;
        FUN__text__0057e400(param_1 + 8,__dest,uVar38);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar38);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar38);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar38);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar34 = *(byte *)(param_1 + 0x134), bVar34 != 0)) {
          iVar11 = 4 - (uVar38 & 3);
          uVar45 = 0;
          do {
            lVar47 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar47 + uVar45 * 0xa0 + 0x90) == 2) {
              uVar46 = uVar48;
              if ((uVar38 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar38 * 4),0,(ulong)(uint)(iVar11 * 4));
                uVar46 = (ulong)(iVar11 + uVar38);
              }
              pfVar35 = (float *)(lVar47 + uVar45 * 0xa0);
              uVar41 = 0;
              fVar77 = pfVar35[2];
              fVar75 = pfVar35[3];
              fVar54 = pfVar35[4];
              fVar61 = pfVar35[5];
              fVar29 = pfVar35[6];
              fVar30 = pfVar35[7];
              uVar59 = *(undefined8 *)(pfVar35 + 0x12);
              uVar58 = *(undefined8 *)(pfVar35 + 0x10);
              uVar62 = *(undefined8 *)(pfVar35 + 0x16);
              uVar60 = *(undefined8 *)(pfVar35 + 0x14);
              uVar65 = *(undefined8 *)(pfVar35 + 0x1a);
              uVar63 = *(undefined8 *)(pfVar35 + 0x18);
              uVar67 = *(undefined8 *)(pfVar35 + 0x1e);
              uVar66 = *(undefined8 *)(pfVar35 + 0x1c);
              uVar69 = *(undefined8 *)(pfVar35 + 0x22);
              uVar68 = *(undefined8 *)(pfVar35 + 0x20);
              fVar78 = pfVar35[8];
              fVar76 = pfVar35[9];
              fVar50 = pfVar35[10];
              fVar72 = pfVar35[0xb];
              uVar55 = *(undefined8 *)(pfVar35 + 0xe);
              uVar52 = *(undefined8 *)(pfVar35 + 0xc);
              pauVar43 = __dest;
              fVar74 = *pfVar35;
              fVar80 = pfVar35[1];
              do {
                uVar70 = *(undefined8 *)((long)*pauVar43 + 8);
                fVar82 = (float)uVar70;
                fVar83 = (float)((ulong)uVar70 >> 0x20);
                auVar28 = *pauVar43;
                auVar27 = *pauVar43;
                fVar79 = (float)*(undefined8 *)*pauVar43;
                fVar81 = (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20);
                uVar41 = uVar41 + 4;
                fVar49 = (float)((ulong)uVar69 >> 0x20) * fVar75;
                fVar71 = fVar79 * fVar54 + (float)uVar60 * fVar74 + (float)uVar63 * fVar80 +
                         fVar78 * fVar82 + (float)uVar52 * fVar81 + (float)uVar58 * fVar79 +
                         (float)uVar66 * fVar77 + (float)uVar68 * fVar75;
                fVar73 = fVar81 * fVar61 + (float)((ulong)uVar60 >> 0x20) * fVar74 +
                         (float)((ulong)uVar63 >> 0x20) * fVar80 + fVar76 * fVar82 +
                         (float)((ulong)uVar52 >> 0x20) * fVar81 +
                         (float)((ulong)uVar58 >> 0x20) * fVar79 +
                         (float)((ulong)uVar66 >> 0x20) * fVar77 +
                         (float)((ulong)uVar68 >> 0x20) * fVar75;
                fVar75 = fVar82 * fVar29 + (float)uVar62 * fVar74 + (float)uVar65 * fVar80 +
                         fVar50 * fVar82 + (float)uVar55 * fVar81 + (float)uVar59 * fVar79 +
                         (float)uVar67 * fVar77 + (float)uVar69 * fVar75;
                fVar77 = fVar83 * fVar30 + (float)((ulong)uVar62 >> 0x20) * fVar74 +
                         (float)((ulong)uVar65 >> 0x20) * fVar80 + fVar72 * fVar82 +
                         (float)((ulong)uVar55 >> 0x20) * fVar81 +
                         (float)((ulong)uVar59 >> 0x20) * fVar79 +
                         (float)((ulong)uVar67 >> 0x20) * fVar77 + fVar49;
                *(ulong *)((long)*pauVar43 + 8) = CONCAT44(fVar77,fVar75);
                *(ulong *)*pauVar43 = CONCAT44(fVar73,fVar71);
                pauVar43 = (undefined1 (*) [12])(pauVar43[1] + 4);
                fVar74 = fVar83;
                fVar80 = fVar82;
              } while (uVar41 < uVar46);
              auVar23._12_4_ = fVar83;
              auVar23._0_12_ = auVar27;
              auVar24._12_4_ = fVar83;
              auVar24._0_12_ = auVar28;
              auVar56 = NEON_ext(auVar23,auVar24,8,1);
              auVar16._4_4_ = fVar73;
              auVar16._0_4_ = fVar71;
              auVar16._8_4_ = fVar75;
              auVar16._12_4_ = fVar77;
              auVar17._4_4_ = fVar73;
              auVar17._0_4_ = fVar71;
              auVar17._8_4_ = fVar75;
              auVar17._12_4_ = fVar77;
              auVar57 = NEON_ext(auVar16,auVar17,8,1);
              uVar52 = NEON_rev64(auVar56._0_8_,4);
              uVar55 = NEON_rev64(auVar57._0_8_,4);
              *(undefined8 *)pfVar35 = uVar52;
              *(undefined8 *)(pfVar35 + 2) = uVar55;
              bVar34 = *(byte *)(param_1 + 0x134);
            }
            uVar45 = uVar45 + 1;
          } while (uVar45 < bVar34);
        }
        memset(__s,0,0x1800);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar47 = 0;
          uVar48 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar47 + 0x90,__dest,uVar38);
            FUN__text__0057de44(*(long *)(param_1 + 0x140) + lVar47,__dest,local_c8[uVar48 & 1],
                                local_c8[(uint)uVar48 & 1 | 2],local_c8[(uint)uVar48 & 1 | 4],uVar38
                               );
            uVar48 = uVar48 + 1;
            lVar47 = lVar47 + 0xa8;
          } while (uVar48 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,__s,uVar38);
        FUN__text__0055f3a0(param_1 + 0x7c,pauVar1,uVar38);
        FUN__text__0055f3a0(param_1 + 0x88,puVar3,uVar38);
        FUN__text__0055f3a0(param_1 + 0x94,puVar4,uVar38);
        FUN__text__0055f3a0(param_1 + 0xa0,pauVar5,uVar38);
        FUN__text__0055f3a0(param_1 + 0xac,puVar6,uVar38);
        fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        lVar47 = *param_2 + (ulong)uVar33 * 4;
        lVar36 = *(long *)(param_1 + 0x158);
        fVar61 = *(float *)(lVar36 + 0x54) * *(float *)(lVar36 + 0x3c);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar36 + 0x4c),
                            fVar54 * fVar51,fVar61 * fVar64,fVar54 * fVar26,fVar61 * fVar25,lVar47,
                            __s,pauVar1,uVar38);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar51,fVar61 * fVar64,fVar54 * fVar26,
                              fVar61 * fVar25,lVar47,pauVar9,pauVar8,uVar38);
        }
        uVar48 = (ulong)uVar33;
        fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        lVar47 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 4 + uVar48 * 4;
        lVar36 = *(long *)(param_1 + 0x158);
        fVar61 = *(float *)(lVar36 + 0x54) * *(float *)(lVar36 + 0x3c);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar36 + 0x4c),
                            fVar54 * fVar26,fVar61 * fVar25,fVar54 * fVar51,fVar61 * fVar64,lVar47,
                            __s,pauVar1,uVar38);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar26,fVar61 * fVar25,fVar54 * fVar51,
                              fVar61 * fVar64,lVar47,pauVar9,pauVar8,uVar38);
        }
        lVar47 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 8;
        if ((uVar10 >> 0xe & 1) == 0) {
          lVar36 = 0xc;
        }
        else {
          FUN__text__0057e7f0(lVar47 + uVar48 * 4,puVar3,puVar4,uVar38);
          lVar36 = 0x10;
          lVar47 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0xc;
        }
        lVar47 = lVar47 + uVar48 * 4;
        lVar37 = *(long *)(param_1 + 0x158);
        fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        fVar61 = *(float *)(lVar37 + 0x54) * *(float *)(lVar37 + 0x40);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar37 + 0x4c),
                            fVar54 * fVar51,fVar61 * fVar64,fVar54 * fVar26,fVar61 * fVar25,lVar47,
                            pauVar5,puVar6,uVar38);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar51,fVar61 * fVar64,fVar54 * fVar26,
                              fVar61 * fVar25,lVar47,local_f0,local_e8,uVar38);
        }
        fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar47 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * lVar36 + uVar48 * 4;
        lVar37 = *(long *)(param_1 + 0x158);
        fVar61 = *(float *)(lVar37 + 0x54) * *(float *)(lVar37 + 0x40);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar37 + 0x4c),
                            fVar54 * fVar26,fVar61 * fVar25,fVar54 * fVar51,fVar61 * fVar64,lVar47,
                            pauVar5,puVar6,uVar38);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar26,fVar61 * fVar25,fVar54 * fVar51,
                              fVar61 * fVar64,lVar47,local_f0,local_e8,uVar38);
        }
        if ((uVar10 >> 0xf & 1) != 0) {
          FUN__text__0057e7f0(*param_2 + (ulong)*(ushort *)(param_2 + 2) * (lVar36 + 4) + uVar48 * 4
                              ,puVar3,puVar4,uVar38);
        }
        lVar47 = *(long *)(param_1 + 0x158);
        uVar33 = uVar38 + uVar33;
        uVar40 = uVar40 - uVar38;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar47 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar47 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar47 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar47 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar47 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar47 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar47 + 0x48);
        fVar51 = fVar64;
        fVar26 = fVar25;
      } while (uVar40 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar52 = 1;
  }
  return uVar52;
}


