/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057a3b0; name: FUN_.text__0057a3b0
 */


undefined8 FUN__text__0057a3b0(long param_1,long *param_2)

{
  undefined1 (*__s) [12];
  undefined1 (*pauVar1) [12];
  int *piVar2;
  undefined1 (*__dest) [12];
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  float fVar24;
  float fVar25;
  undefined1 (*pauVar26) [12];
  bool bVar27;
  undefined1 (*__src) [12];
  uint uVar28;
  byte bVar29;
  float *pfVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [12];
  undefined1 (*pauVar36) [12];
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  byte bVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
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
  undefined1 (*local_e8) [12];
  undefined1 (*local_c8 [5]) [12];
  
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),(ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x1800,
                     0x715356,0x86d);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar46 = 0x34;
  }
  else {
    puVar3 = __src[0x155] + 4;
    puVar4 = __src[0x1aa] + 8;
    uVar37 = (uint)*(ushort *)((long)param_2 + 0x12);
    bVar27 = *(char *)(param_1 + 0x138) != '\0';
    local_e8 = (undefined1 (*) [12])0x0;
    if (bVar27) {
      local_e8 = (undefined1 (*) [12])(__src[0x2aa] + 8);
    }
    __s = (undefined1 (*) [12])(__src[0xaa] + 8);
    pauVar1 = __src + 0x100;
    pauVar36 = (undefined1 (*) [12])0x0;
    if (bVar27) {
      pauVar36 = __src + 0x300;
    }
    pauVar6 = (undefined1 (*) [12])0x0;
    if (bVar27) {
      pauVar6 = (undefined1 (*) [12])(__src[0x255] + 4);
    }
    pauVar7 = (undefined1 (*) [12])0x0;
    if (bVar27) {
      pauVar7 = __src + 0x200;
    }
    local_c8[0] = __s;
    local_c8[1] = pauVar1;
    local_c8[2] = (undefined1 (*) [12])puVar3;
    local_c8[3] = (undefined1 (*) [12])puVar4;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      piVar2 = (int *)(param_1 + 0xb8);
      fVar45 = *(float *)(*(long *)(param_1 + 0x158) + 0x14);
      uVar28 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      fVar59 = SQRT(fVar45 * 0.0027777778);
      fVar61 = fVar45 * 0.003928371;
      fVar56 = *(float *)(param_1 + 0x174) * 0.003928371;
      fVar60 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
      do {
        uVar31 = uVar37;
        if (0xff < uVar37) {
          uVar31 = 0x100;
        }
        uVar39 = (ulong)uVar31;
        FUN__text__0057e570(param_2,uVar39);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar29 = *(byte *)(param_1 + 0x134), bVar29 != 0)) {
          iVar8 = 4 - (uVar31 & 3);
          uVar38 = 0;
          do {
            lVar42 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar42 + uVar38 * 0xa0 + 0x90) == 3) {
              uVar40 = uVar39;
              if ((uVar31 & 3) != 0) {
                memset(*__src + (ulong)uVar31 * 4,0,(ulong)(uint)(iVar8 * 4));
                uVar40 = (ulong)(iVar8 + uVar31);
              }
              pfVar30 = (float *)(lVar42 + uVar38 * 0xa0);
              uVar33 = 0;
              fVar74 = pfVar30[2];
              fVar72 = pfVar30[3];
              fVar54 = pfVar30[4];
              fVar55 = pfVar30[5];
              fVar24 = pfVar30[6];
              fVar25 = pfVar30[7];
              uVar52 = *(undefined8 *)(pfVar30 + 0x12);
              uVar51 = *(undefined8 *)(pfVar30 + 0x10);
              uVar57 = *(undefined8 *)(pfVar30 + 0x16);
              uVar53 = *(undefined8 *)(pfVar30 + 0x14);
              uVar62 = *(undefined8 *)(pfVar30 + 0x1a);
              uVar58 = *(undefined8 *)(pfVar30 + 0x18);
              uVar64 = *(undefined8 *)(pfVar30 + 0x1e);
              uVar63 = *(undefined8 *)(pfVar30 + 0x1c);
              uVar66 = *(undefined8 *)(pfVar30 + 0x22);
              uVar65 = *(undefined8 *)(pfVar30 + 0x20);
              fVar75 = pfVar30[8];
              fVar73 = pfVar30[9];
              fVar44 = pfVar30[10];
              fVar69 = pfVar30[0xb];
              uVar48 = *(undefined8 *)(pfVar30 + 0xe);
              uVar46 = *(undefined8 *)(pfVar30 + 0xc);
              pauVar35 = __src;
              fVar71 = *pfVar30;
              fVar77 = pfVar30[1];
              do {
                fVar79 = (float)*(undefined8 *)(*pauVar35 + 8);
                fVar80 = (float)((ulong)*(undefined8 *)(*pauVar35 + 8) >> 0x20);
                auVar23 = *pauVar35;
                auVar22 = *pauVar35;
                fVar76 = (float)*(undefined8 *)*pauVar35;
                fVar78 = (float)((ulong)*(undefined8 *)*pauVar35 >> 0x20);
                uVar33 = uVar33 + 4;
                fVar43 = (float)((ulong)uVar66 >> 0x20) * fVar72;
                fVar68 = fVar76 * fVar54 + (float)uVar53 * fVar71 + (float)uVar58 * fVar77 +
                         fVar75 * fVar79 + (float)uVar46 * fVar78 + (float)uVar51 * fVar76 +
                         (float)uVar63 * fVar74 + (float)uVar65 * fVar72;
                fVar70 = fVar78 * fVar55 + (float)((ulong)uVar53 >> 0x20) * fVar71 +
                         (float)((ulong)uVar58 >> 0x20) * fVar77 + fVar73 * fVar79 +
                         (float)((ulong)uVar46 >> 0x20) * fVar78 +
                         (float)((ulong)uVar51 >> 0x20) * fVar76 +
                         (float)((ulong)uVar63 >> 0x20) * fVar74 +
                         (float)((ulong)uVar65 >> 0x20) * fVar72;
                fVar72 = fVar79 * fVar24 + (float)uVar57 * fVar71 + (float)uVar62 * fVar77 +
                         fVar44 * fVar79 + (float)uVar48 * fVar78 + (float)uVar52 * fVar76 +
                         (float)uVar64 * fVar74 + (float)uVar66 * fVar72;
                fVar74 = fVar80 * fVar25 + (float)((ulong)uVar57 >> 0x20) * fVar71 +
                         (float)((ulong)uVar62 >> 0x20) * fVar77 + fVar69 * fVar79 +
                         (float)((ulong)uVar48 >> 0x20) * fVar78 +
                         (float)((ulong)uVar52 >> 0x20) * fVar76 +
                         (float)((ulong)uVar64 >> 0x20) * fVar74 + fVar43;
                *(ulong *)(*pauVar35 + 8) = CONCAT44(fVar74,fVar72);
                *(ulong *)*pauVar35 = CONCAT44(fVar70,fVar68);
                pauVar35 = (undefined1 (*) [12])(pauVar35[1] + 4);
                fVar71 = fVar80;
                fVar77 = fVar79;
              } while (uVar33 < uVar40);
              auVar47._12_4_ = fVar80;
              auVar47._0_12_ = auVar22;
              auVar15._12_4_ = fVar80;
              auVar15._0_12_ = auVar23;
              auVar47 = NEON_ext(auVar47,auVar15,8,1);
              auVar49._4_4_ = fVar70;
              auVar49._0_4_ = fVar68;
              auVar49._8_4_ = fVar72;
              auVar49._12_4_ = fVar74;
              auVar50._4_4_ = fVar70;
              auVar50._0_4_ = fVar68;
              auVar50._8_4_ = fVar72;
              auVar50._12_4_ = fVar74;
              auVar49 = NEON_ext(auVar49,auVar50,8,1);
              uVar46 = NEON_rev64(auVar47._0_8_,4);
              uVar48 = NEON_rev64(auVar49._0_8_,4);
              *(undefined8 *)pfVar30 = uVar46;
              *(undefined8 *)(pfVar30 + 2) = uVar48;
              bVar29 = *(byte *)(param_1 + 0x134);
            }
            uVar38 = uVar38 + 1;
          } while (uVar38 < bVar29);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar31 << 2));
          iVar8 = *piVar2;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar31);
          iVar8 = *piVar2;
        }
        if (iVar8 != 0) {
          FUN__text__0057c820(piVar2,__src,uVar31);
        }
        if (*(char *)(param_1 + 0x138) == '\0') {
          pauVar35 = pauVar36;
          pauVar26 = local_e8;
        }
        else {
          FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,pauVar7,pauVar6,uVar31);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar29 = *(byte *)(param_1 + 0x134), bVar29 != 0)) {
            uVar5 = uVar31 & 3;
            uVar38 = 0;
            uVar40 = (ulong)((4 - uVar5) * 4);
            uVar33 = (ulong)((4 - uVar5) + uVar31);
            bVar41 = 0;
            do {
              lVar42 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar42 + uVar38 * 0xa0 + 0x90) == 1) {
                uVar32 = uVar39;
                if (uVar5 != 0) {
                  memset(*pauVar7 + uVar39 * 4,0,uVar40);
                  uVar32 = uVar33;
                }
                pfVar30 = (float *)(lVar42 + uVar38 * 0xa0);
                uVar34 = 0;
                fVar74 = pfVar30[2];
                fVar72 = pfVar30[3];
                fVar54 = pfVar30[4];
                fVar55 = pfVar30[5];
                fVar24 = pfVar30[6];
                fVar25 = pfVar30[7];
                uVar52 = *(undefined8 *)(pfVar30 + 0x12);
                uVar51 = *(undefined8 *)(pfVar30 + 0x10);
                uVar57 = *(undefined8 *)(pfVar30 + 0x16);
                uVar53 = *(undefined8 *)(pfVar30 + 0x14);
                uVar62 = *(undefined8 *)(pfVar30 + 0x1a);
                uVar58 = *(undefined8 *)(pfVar30 + 0x18);
                uVar64 = *(undefined8 *)(pfVar30 + 0x1e);
                uVar63 = *(undefined8 *)(pfVar30 + 0x1c);
                uVar66 = *(undefined8 *)(pfVar30 + 0x22);
                uVar65 = *(undefined8 *)(pfVar30 + 0x20);
                fVar75 = pfVar30[8];
                fVar73 = pfVar30[9];
                fVar44 = pfVar30[10];
                fVar69 = pfVar30[0xb];
                uVar48 = *(undefined8 *)(pfVar30 + 0xe);
                uVar46 = *(undefined8 *)(pfVar30 + 0xc);
                pauVar35 = pauVar7;
                fVar71 = *pfVar30;
                fVar77 = pfVar30[1];
                do {
                  fVar79 = (float)*(undefined8 *)(*pauVar35 + 8);
                  fVar80 = (float)((ulong)*(undefined8 *)(*pauVar35 + 8) >> 0x20);
                  auVar23 = *pauVar35;
                  auVar22 = *pauVar35;
                  fVar76 = (float)*(undefined8 *)*pauVar35;
                  fVar78 = (float)((ulong)*(undefined8 *)*pauVar35 >> 0x20);
                  uVar34 = uVar34 + 4;
                  fVar43 = (float)((ulong)uVar66 >> 0x20) * fVar72;
                  fVar68 = fVar76 * fVar54 + (float)uVar53 * fVar71 + (float)uVar58 * fVar77 +
                           fVar75 * fVar79 + (float)uVar46 * fVar78 + (float)uVar51 * fVar76 +
                           (float)uVar63 * fVar74 + (float)uVar65 * fVar72;
                  fVar70 = fVar78 * fVar55 + (float)((ulong)uVar53 >> 0x20) * fVar71 +
                           (float)((ulong)uVar58 >> 0x20) * fVar77 + fVar73 * fVar79 +
                           (float)((ulong)uVar46 >> 0x20) * fVar78 +
                           (float)((ulong)uVar51 >> 0x20) * fVar76 +
                           (float)((ulong)uVar63 >> 0x20) * fVar74 +
                           (float)((ulong)uVar65 >> 0x20) * fVar72;
                  fVar72 = fVar79 * fVar24 + (float)uVar57 * fVar71 + (float)uVar62 * fVar77 +
                           fVar44 * fVar79 + (float)uVar48 * fVar78 + (float)uVar52 * fVar76 +
                           (float)uVar64 * fVar74 + (float)uVar66 * fVar72;
                  fVar74 = fVar80 * fVar25 + (float)((ulong)uVar57 >> 0x20) * fVar71 +
                           (float)((ulong)uVar62 >> 0x20) * fVar77 + fVar69 * fVar79 +
                           (float)((ulong)uVar48 >> 0x20) * fVar78 +
                           (float)((ulong)uVar52 >> 0x20) * fVar76 +
                           (float)((ulong)uVar64 >> 0x20) * fVar74 + fVar43;
                  *(ulong *)(*pauVar35 + 8) = CONCAT44(fVar74,fVar72);
                  *(ulong *)*pauVar35 = CONCAT44(fVar70,fVar68);
                  pauVar35 = (undefined1 (*) [12])(pauVar35[1] + 4);
                  fVar71 = fVar80;
                  fVar77 = fVar79;
                } while (uVar34 < uVar32);
                auVar16._12_4_ = fVar80;
                auVar16._0_12_ = auVar22;
                auVar17._12_4_ = fVar80;
                auVar17._0_12_ = auVar23;
                auVar49 = NEON_ext(auVar16,auVar17,8,1);
                uVar46 = NEON_rev64(auVar49._0_8_,4);
                *(undefined8 *)pfVar30 = uVar46;
                auVar9._4_4_ = fVar70;
                auVar9._0_4_ = fVar68;
                auVar9._8_4_ = fVar72;
                auVar9._12_4_ = fVar74;
                auVar10._4_4_ = fVar70;
                auVar10._0_4_ = fVar68;
                auVar10._8_4_ = fVar72;
                auVar10._12_4_ = fVar74;
                auVar49 = NEON_ext(auVar9,auVar10,8,1);
                uVar46 = NEON_rev64(auVar49._0_8_,4);
                *(undefined8 *)(pfVar30 + 2) = uVar46;
                lVar42 = *(long *)(param_1 + 0x148);
                uVar32 = uVar39;
                if (uVar5 != 0) {
                  memset(*pauVar6 + uVar39 * 4,0,uVar40);
                  uVar32 = uVar33;
                }
                lVar42 = lVar42 + uVar38 * 0xa0;
                uVar38 = 0;
                uVar51 = *(undefined8 *)(lVar42 + 0xa0);
                fVar54 = *(float *)(lVar42 + 0xb0);
                fVar55 = *(float *)(lVar42 + 0xb4);
                fVar24 = *(float *)(lVar42 + 0xb8);
                fVar25 = *(float *)(lVar42 + 0xbc);
                fVar75 = (float)*(undefined8 *)(lVar42 + 0xa8);
                fVar73 = (float)((ulong)*(undefined8 *)(lVar42 + 0xa8) >> 0x20);
                uVar67 = *(undefined8 *)(lVar42 + 0x128);
                uVar66 = *(undefined8 *)(lVar42 + 0x120);
                uVar53 = *(undefined8 *)(lVar42 + 0xe8);
                uVar52 = *(undefined8 *)(lVar42 + 0xe0);
                uVar58 = *(undefined8 *)(lVar42 + 0xf8);
                uVar57 = *(undefined8 *)(lVar42 + 0xf0);
                uVar63 = *(undefined8 *)(lVar42 + 0x108);
                uVar62 = *(undefined8 *)(lVar42 + 0x100);
                uVar65 = *(undefined8 *)(lVar42 + 0x118);
                uVar64 = *(undefined8 *)(lVar42 + 0x110);
                auVar49 = *(undefined1 (*) [16])(lVar42 + 0xc0);
                uVar48 = *(undefined8 *)(lVar42 + 0xd8);
                uVar46 = *(undefined8 *)(lVar42 + 0xd0);
                pauVar35 = pauVar6;
                fVar74 = (float)uVar51;
                fVar72 = (float)((ulong)uVar51 >> 0x20);
                do {
                  fVar68 = (float)*(undefined8 *)(*pauVar35 + 8);
                  fVar70 = (float)((ulong)*(undefined8 *)(*pauVar35 + 8) >> 0x20);
                  auVar23 = *pauVar35;
                  auVar22 = *pauVar35;
                  fVar77 = (float)*(undefined8 *)*pauVar35;
                  fVar43 = (float)((ulong)*(undefined8 *)*pauVar35 >> 0x20);
                  uVar38 = uVar38 + 4;
                  fVar44 = (float)((ulong)uVar67 >> 0x20) * fVar73;
                  fVar69 = fVar77 * fVar54 + (float)uVar57 * fVar74 + (float)uVar62 * fVar72 +
                           auVar49._0_4_ * fVar68 + (float)uVar46 * fVar43 + (float)uVar52 * fVar77
                           + (float)uVar64 * fVar75 + (float)uVar66 * fVar73;
                  fVar71 = fVar43 * fVar55 + (float)((ulong)uVar57 >> 0x20) * fVar74 +
                           (float)((ulong)uVar62 >> 0x20) * fVar72 + auVar49._4_4_ * fVar68 +
                           (float)((ulong)uVar46 >> 0x20) * fVar43 +
                           (float)((ulong)uVar52 >> 0x20) * fVar77 +
                           (float)((ulong)uVar64 >> 0x20) * fVar75 +
                           (float)((ulong)uVar66 >> 0x20) * fVar73;
                  fVar73 = fVar68 * fVar24 + (float)uVar58 * fVar74 + (float)uVar63 * fVar72 +
                           auVar49._8_4_ * fVar68 + (float)uVar48 * fVar43 + (float)uVar53 * fVar77
                           + (float)uVar65 * fVar75 + (float)uVar67 * fVar73;
                  fVar75 = fVar70 * fVar25 + (float)((ulong)uVar58 >> 0x20) * fVar74 +
                           (float)((ulong)uVar63 >> 0x20) * fVar72 + auVar49._12_4_ * fVar68 +
                           (float)((ulong)uVar48 >> 0x20) * fVar43 +
                           (float)((ulong)uVar53 >> 0x20) * fVar77 +
                           (float)((ulong)uVar65 >> 0x20) * fVar75 + fVar44;
                  *(ulong *)(*pauVar35 + 8) = CONCAT44(fVar75,fVar73);
                  *(ulong *)*pauVar35 = CONCAT44(fVar71,fVar69);
                  pauVar35 = (undefined1 (*) [12])(pauVar35[1] + 4);
                  fVar74 = fVar70;
                  fVar72 = fVar68;
                } while (uVar38 < uVar32);
                auVar18._12_4_ = fVar70;
                auVar18._0_12_ = auVar22;
                auVar19._12_4_ = fVar70;
                auVar19._0_12_ = auVar23;
                auVar49 = NEON_ext(auVar18,auVar19,8,1);
                bVar41 = bVar41 + 1;
                uVar46 = NEON_rev64(auVar49._0_8_,4);
                *(undefined8 *)(lVar42 + 0xa0) = uVar46;
                auVar11._4_4_ = fVar71;
                auVar11._0_4_ = fVar69;
                auVar11._8_4_ = fVar73;
                auVar11._12_4_ = fVar75;
                auVar12._4_4_ = fVar71;
                auVar12._0_4_ = fVar69;
                auVar12._8_4_ = fVar73;
                auVar12._12_4_ = fVar75;
                auVar49 = NEON_ext(auVar11,auVar12,8,1);
                uVar46 = NEON_rev64(auVar49._0_8_,4);
                *(undefined8 *)(lVar42 + 0xa8) = uVar46;
                bVar29 = *(byte *)(param_1 + 0x134);
              }
              bVar41 = bVar41 + 1;
              uVar38 = (ulong)bVar41;
            } while (bVar41 < bVar29);
          }
          pauVar35 = pauVar6;
          pauVar26 = pauVar7;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN__text__0057c9c0((int *)(param_1 + 0xe8),pauVar7,local_e8,uVar31);
            FUN__text__0057c9c0(param_1 + 0x100,pauVar6,pauVar36,uVar31);
            pauVar35 = pauVar36;
            pauVar26 = local_e8;
          }
        }
        local_e8 = pauVar26;
        FUN__text__0057e400(param_1 + 8,__dest,uVar31);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar31);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar31);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar31);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar29 = *(byte *)(param_1 + 0x134), bVar29 != 0)) {
          iVar8 = 4 - (uVar31 & 3);
          uVar38 = 0;
          do {
            lVar42 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar42 + uVar38 * 0xa0 + 0x90) == 2) {
              uVar40 = uVar39;
              if ((uVar31 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar31 * 4),0,(ulong)(uint)(iVar8 * 4));
                uVar40 = (ulong)(iVar8 + uVar31);
              }
              pfVar30 = (float *)(lVar42 + uVar38 * 0xa0);
              uVar33 = 0;
              fVar74 = pfVar30[2];
              fVar72 = pfVar30[3];
              fVar54 = pfVar30[4];
              fVar55 = pfVar30[5];
              fVar24 = pfVar30[6];
              fVar25 = pfVar30[7];
              uVar52 = *(undefined8 *)(pfVar30 + 0x12);
              uVar51 = *(undefined8 *)(pfVar30 + 0x10);
              uVar57 = *(undefined8 *)(pfVar30 + 0x16);
              uVar53 = *(undefined8 *)(pfVar30 + 0x14);
              uVar62 = *(undefined8 *)(pfVar30 + 0x1a);
              uVar58 = *(undefined8 *)(pfVar30 + 0x18);
              uVar64 = *(undefined8 *)(pfVar30 + 0x1e);
              uVar63 = *(undefined8 *)(pfVar30 + 0x1c);
              uVar66 = *(undefined8 *)(pfVar30 + 0x22);
              uVar65 = *(undefined8 *)(pfVar30 + 0x20);
              fVar75 = pfVar30[8];
              fVar73 = pfVar30[9];
              fVar44 = pfVar30[10];
              fVar69 = pfVar30[0xb];
              uVar48 = *(undefined8 *)(pfVar30 + 0xe);
              uVar46 = *(undefined8 *)(pfVar30 + 0xc);
              pauVar36 = __dest;
              fVar71 = *pfVar30;
              fVar77 = pfVar30[1];
              do {
                uVar67 = *(undefined8 *)((long)*pauVar36 + 8);
                fVar79 = (float)uVar67;
                fVar80 = (float)((ulong)uVar67 >> 0x20);
                auVar23 = *pauVar36;
                auVar22 = *pauVar36;
                fVar76 = (float)*(undefined8 *)*pauVar36;
                fVar78 = (float)((ulong)*(undefined8 *)*pauVar36 >> 0x20);
                uVar33 = uVar33 + 4;
                fVar43 = (float)((ulong)uVar66 >> 0x20) * fVar72;
                fVar68 = fVar76 * fVar54 + (float)uVar53 * fVar71 + (float)uVar58 * fVar77 +
                         fVar75 * fVar79 + (float)uVar46 * fVar78 + (float)uVar51 * fVar76 +
                         (float)uVar63 * fVar74 + (float)uVar65 * fVar72;
                fVar70 = fVar78 * fVar55 + (float)((ulong)uVar53 >> 0x20) * fVar71 +
                         (float)((ulong)uVar58 >> 0x20) * fVar77 + fVar73 * fVar79 +
                         (float)((ulong)uVar46 >> 0x20) * fVar78 +
                         (float)((ulong)uVar51 >> 0x20) * fVar76 +
                         (float)((ulong)uVar63 >> 0x20) * fVar74 +
                         (float)((ulong)uVar65 >> 0x20) * fVar72;
                fVar72 = fVar79 * fVar24 + (float)uVar57 * fVar71 + (float)uVar62 * fVar77 +
                         fVar44 * fVar79 + (float)uVar48 * fVar78 + (float)uVar52 * fVar76 +
                         (float)uVar64 * fVar74 + (float)uVar66 * fVar72;
                fVar74 = fVar80 * fVar25 + (float)((ulong)uVar57 >> 0x20) * fVar71 +
                         (float)((ulong)uVar62 >> 0x20) * fVar77 + fVar69 * fVar79 +
                         (float)((ulong)uVar48 >> 0x20) * fVar78 +
                         (float)((ulong)uVar52 >> 0x20) * fVar76 +
                         (float)((ulong)uVar64 >> 0x20) * fVar74 + fVar43;
                *(ulong *)((long)*pauVar36 + 8) = CONCAT44(fVar74,fVar72);
                *(ulong *)*pauVar36 = CONCAT44(fVar70,fVar68);
                pauVar36 = (undefined1 (*) [12])(pauVar36[1] + 4);
                fVar71 = fVar80;
                fVar77 = fVar79;
              } while (uVar33 < uVar40);
              auVar20._12_4_ = fVar80;
              auVar20._0_12_ = auVar22;
              auVar21._12_4_ = fVar80;
              auVar21._0_12_ = auVar23;
              auVar49 = NEON_ext(auVar20,auVar21,8,1);
              auVar13._4_4_ = fVar70;
              auVar13._0_4_ = fVar68;
              auVar13._8_4_ = fVar72;
              auVar13._12_4_ = fVar74;
              auVar14._4_4_ = fVar70;
              auVar14._0_4_ = fVar68;
              auVar14._8_4_ = fVar72;
              auVar14._12_4_ = fVar74;
              auVar50 = NEON_ext(auVar13,auVar14,8,1);
              uVar46 = NEON_rev64(auVar49._0_8_,4);
              uVar48 = NEON_rev64(auVar50._0_8_,4);
              *(undefined8 *)pfVar30 = uVar46;
              *(undefined8 *)(pfVar30 + 2) = uVar48;
              bVar29 = *(byte *)(param_1 + 0x134);
            }
            uVar38 = uVar38 + 1;
          } while (uVar38 < bVar29);
        }
        memset(__s,0,0x1000);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar42 = 0;
          uVar39 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar42 + 0x90,__dest,uVar31);
            FUN__text__0057da00(*(long *)(param_1 + 0x140) + lVar42,__dest,local_c8[uVar39 & 1],
                                local_c8[(uVar39 & 1) + 2],uVar31);
            uVar39 = uVar39 + 1;
            lVar42 = lVar42 + 0xa8;
          } while (uVar39 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,__s,uVar31);
        FUN__text__0055f3a0(param_1 + 0x7c,pauVar1,uVar31);
        FUN__text__0055f3a0(param_1 + 0x88,puVar3,uVar31);
        FUN__text__0055f3a0(param_1 + 0x94,puVar4,uVar31);
        lVar42 = *param_2 + (ulong)uVar28 * 4;
        FUN__text__0057e7f0(lVar42,__s,pauVar1,uVar31);
        FUN__text__0057e7f0(lVar42,puVar3,puVar4,uVar31);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(lVar42,pauVar7,pauVar6,uVar31);
          FUN__text__0057e7f0(lVar42,local_e8,pauVar35,uVar31);
        }
        if ((*(byte *)(param_2 + 1) & 0xfe) != 0) {
          lVar42 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar28 * 4;
          fVar54 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              *(float *)(param_1 + 0x1b4) * fVar60,fVar54 * fVar59,
                              -(fVar60 * *(float *)(param_1 + 0x1b4)),fVar54 * -fVar59,lVar42,__s,
                              pauVar1,uVar31);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar54 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
            fVar55 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,
                                *(float *)(param_1 + 0x1b0) * fVar56 * *(float *)(param_1 + 0x19c),
                                fVar55 * fVar61 * fVar54,
                                -(fVar56 * *(float *)(param_1 + 0x19c)) *
                                *(float *)(param_1 + 0x1b0),fVar45 * -0.003928371 * fVar54 * fVar55,
                                lVar42,pauVar7,pauVar6,uVar31);
            fVar54 = *(float *)(*(long *)(param_1 + 0x158) + 0x40);
            fVar55 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,
                                *(float *)(param_1 + 0x1b0) * fVar56 * *(float *)(param_1 + 0x1a0),
                                fVar55 * fVar61 * fVar54,
                                -(fVar56 * *(float *)(param_1 + 0x1a0)) *
                                *(float *)(param_1 + 0x1b0),fVar45 * -0.003928371 * fVar54 * fVar55,
                                lVar42,local_e8,pauVar35,uVar31);
          }
          lVar42 = (ulong)uVar28 * 4;
          fVar56 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              *(float *)(param_1 + 0x1b4) * fVar60,fVar56 * fVar59,
                              *(float *)(param_1 + 0x1b4) * -fVar60,fVar56 * -fVar59,
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 8 + lVar42,puVar3,puVar4,
                              uVar31);
          lVar42 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0xc + lVar42;
          FUN__text__0057e7f0(lVar42,__s,pauVar1,uVar31);
          FUN__text__0057e7f0(lVar42,puVar3,puVar4,uVar31);
          if (*(char *)(param_1 + 0x138) != '\0') {
            FUN__text__0057e7f0(lVar42,pauVar7,pauVar6,uVar31);
            FUN__text__0057e7f0(lVar42,local_e8,pauVar35,uVar31);
          }
        }
        lVar42 = *(long *)(param_1 + 0x158);
        uVar28 = uVar31 + uVar28;
        uVar37 = uVar37 - uVar31;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar42 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar42 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar42 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar42 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar42 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar42 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar42 + 0x48);
        pauVar36 = pauVar35;
        fVar56 = fVar61;
        fVar60 = fVar59;
      } while (uVar37 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar46 = 1;
  }
  return uVar46;
}


