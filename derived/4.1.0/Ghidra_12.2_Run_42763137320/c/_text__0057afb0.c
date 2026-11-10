/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057afb0; name: FUN_.text__0057afb0
 */


undefined8 FUN__text__0057afb0(long param_1,long *param_2)

{
  undefined1 (*__s) [12];
  undefined1 (*pauVar1) [12];
  int *piVar2;
  undefined1 (*__dest) [12];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [12];
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  int iVar10;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  undefined1 (*pauVar28) [12];
  bool bVar29;
  undefined1 (*__src) [12];
  uint uVar30;
  byte bVar31;
  float *pfVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [12];
  undefined1 (*pauVar38) [12];
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  byte bVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
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
  undefined1 (*local_100) [12];
  undefined1 (*local_d8 [4]) [12];
  undefined1 (*local_b8) [12];
  undefined1 *local_b0;
  
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),(ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000,
                     0x715356,0x998);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar48 = 0x34;
  }
  else {
    __s = (undefined1 (*) [12])(__src[0xaa] + 8);
    pauVar1 = __src + 0x100;
    uVar39 = (uint)*(ushort *)((long)param_2 + 0x12);
    puVar3 = __src[0x155] + 4;
    puVar4 = __src[0x1aa] + 8;
    pauVar5 = __src + 0x200;
    puVar6 = __src[0x255] + 4;
    bVar29 = *(char *)(param_1 + 0x138) != '\0';
    pauVar38 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      pauVar38 = (undefined1 (*) [12])(__src[0x3aa] + 8);
    }
    local_100 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      local_100 = (undefined1 (*) [12])(__src[0x355] + 4);
    }
    pauVar8 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      pauVar8 = __src + 0x300;
    }
    pauVar9 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      pauVar9 = (undefined1 (*) [12])(__src[0x2aa] + 8);
    }
    local_d8[0] = __s;
    local_d8[1] = pauVar1;
    local_d8[2] = (undefined1 (*) [12])puVar3;
    local_d8[3] = (undefined1 (*) [12])puVar4;
    local_b8 = pauVar5;
    local_b0 = puVar6;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      piVar2 = (int *)(param_1 + 0xb8);
      fVar50 = *(float *)(*(long *)(param_1 + 0x158) + 0x14);
      fVar64 = SQRT(fVar50 * 0.0027777778);
      uVar30 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      fVar65 = fVar50 * 0.003928371;
      fVar63 = fVar64 + fVar64;
      fVar59 = *(float *)(param_1 + 0x174) * 0.003928371;
      fVar62 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
      do {
        uVar33 = uVar39;
        if (0xff < uVar39) {
          uVar33 = 0x100;
        }
        uVar41 = (ulong)uVar33;
        FUN__text__0057e570(param_2,uVar41,uVar30,__src);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar31 = *(byte *)(param_1 + 0x134), bVar31 != 0)) {
          iVar10 = 4 - (uVar33 & 3);
          uVar40 = 0;
          do {
            lVar45 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar45 + uVar40 * 0xa0 + 0x90) == 3) {
              uVar44 = uVar41;
              if ((uVar33 & 3) != 0) {
                memset(*__src + (ulong)uVar33 * 4,0,(ulong)(uint)(iVar10 * 4));
                uVar44 = (ulong)(iVar10 + uVar33);
              }
              pfVar32 = (float *)(lVar45 + uVar40 * 0xa0);
              uVar35 = 0;
              fVar78 = pfVar32[2];
              fVar76 = pfVar32[3];
              fVar57 = pfVar32[4];
              fVar58 = pfVar32[5];
              fVar26 = pfVar32[6];
              fVar27 = pfVar32[7];
              uVar55 = *(undefined8 *)(pfVar32 + 0x12);
              uVar54 = *(undefined8 *)(pfVar32 + 0x10);
              uVar60 = *(undefined8 *)(pfVar32 + 0x16);
              uVar56 = *(undefined8 *)(pfVar32 + 0x14);
              uVar66 = *(undefined8 *)(pfVar32 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar32 + 0x18);
              uVar68 = *(undefined8 *)(pfVar32 + 0x1e);
              uVar67 = *(undefined8 *)(pfVar32 + 0x1c);
              uVar70 = *(undefined8 *)(pfVar32 + 0x22);
              uVar69 = *(undefined8 *)(pfVar32 + 0x20);
              fVar79 = pfVar32[8];
              fVar77 = pfVar32[9];
              fVar47 = pfVar32[10];
              fVar73 = pfVar32[0xb];
              uVar51 = *(undefined8 *)(pfVar32 + 0xe);
              uVar48 = *(undefined8 *)(pfVar32 + 0xc);
              pauVar37 = __src;
              fVar75 = *pfVar32;
              fVar81 = pfVar32[1];
              do {
                fVar83 = (float)*(undefined8 *)(*pauVar37 + 8);
                fVar84 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                auVar25 = *pauVar37;
                auVar24 = *pauVar37;
                fVar80 = (float)*(undefined8 *)*pauVar37;
                fVar82 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar46 = (float)((ulong)uVar70 >> 0x20) * fVar76;
                fVar72 = fVar80 * fVar57 + (float)uVar56 * fVar75 + (float)uVar61 * fVar81 +
                         fVar79 * fVar83 + (float)uVar48 * fVar82 + (float)uVar54 * fVar80 +
                         (float)uVar67 * fVar78 + (float)uVar69 * fVar76;
                fVar74 = fVar82 * fVar58 + (float)((ulong)uVar56 >> 0x20) * fVar75 +
                         (float)((ulong)uVar61 >> 0x20) * fVar81 + fVar77 * fVar83 +
                         (float)((ulong)uVar48 >> 0x20) * fVar82 +
                         (float)((ulong)uVar54 >> 0x20) * fVar80 +
                         (float)((ulong)uVar67 >> 0x20) * fVar78 +
                         (float)((ulong)uVar69 >> 0x20) * fVar76;
                fVar76 = fVar83 * fVar26 + (float)uVar60 * fVar75 + (float)uVar66 * fVar81 +
                         fVar47 * fVar83 + (float)uVar51 * fVar82 + (float)uVar55 * fVar80 +
                         (float)uVar68 * fVar78 + (float)uVar70 * fVar76;
                fVar78 = fVar84 * fVar27 + (float)((ulong)uVar60 >> 0x20) * fVar75 +
                         (float)((ulong)uVar66 >> 0x20) * fVar81 + fVar73 * fVar83 +
                         (float)((ulong)uVar51 >> 0x20) * fVar82 +
                         (float)((ulong)uVar55 >> 0x20) * fVar80 +
                         (float)((ulong)uVar68 >> 0x20) * fVar78 + fVar46;
                *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar78,fVar76);
                *(ulong *)*pauVar37 = CONCAT44(fVar74,fVar72);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar75 = fVar84;
                fVar81 = fVar83;
              } while (uVar35 < uVar44);
              auVar49._12_4_ = fVar84;
              auVar49._0_12_ = auVar24;
              auVar17._12_4_ = fVar84;
              auVar17._0_12_ = auVar25;
              auVar49 = NEON_ext(auVar49,auVar17,8,1);
              auVar52._4_4_ = fVar74;
              auVar52._0_4_ = fVar72;
              auVar52._8_4_ = fVar76;
              auVar52._12_4_ = fVar78;
              auVar53._4_4_ = fVar74;
              auVar53._0_4_ = fVar72;
              auVar53._8_4_ = fVar76;
              auVar53._12_4_ = fVar78;
              auVar52 = NEON_ext(auVar52,auVar53,8,1);
              uVar48 = NEON_rev64(auVar49._0_8_,4);
              uVar51 = NEON_rev64(auVar52._0_8_,4);
              *(undefined8 *)pfVar32 = uVar48;
              *(undefined8 *)(pfVar32 + 2) = uVar51;
              bVar31 = *(byte *)(param_1 + 0x134);
            }
            uVar40 = uVar40 + 1;
          } while (uVar40 < bVar31);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar33 << 2));
          iVar10 = *piVar2;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar33);
          iVar10 = *piVar2;
        }
        if (iVar10 != 0) {
          FUN__text__0057c820(piVar2,__src,uVar33);
        }
        if (*(char *)(param_1 + 0x138) == '\0') {
          pauVar37 = pauVar38;
          pauVar28 = local_100;
        }
        else {
          FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,pauVar9,pauVar8,uVar33);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar31 = *(byte *)(param_1 + 0x134), bVar31 != 0)) {
            uVar7 = uVar33 & 3;
            uVar40 = 0;
            uVar44 = (ulong)((4 - uVar7) * 4);
            uVar35 = (ulong)((4 - uVar7) + uVar33);
            bVar42 = 0;
            do {
              lVar45 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar45 + uVar40 * 0xa0 + 0x90) == 1) {
                uVar34 = uVar41;
                if (uVar7 != 0) {
                  memset(*pauVar9 + uVar41 * 4,0,uVar44);
                  uVar34 = uVar35;
                }
                pfVar32 = (float *)(lVar45 + uVar40 * 0xa0);
                uVar36 = 0;
                fVar78 = pfVar32[2];
                fVar76 = pfVar32[3];
                fVar57 = pfVar32[4];
                fVar58 = pfVar32[5];
                fVar26 = pfVar32[6];
                fVar27 = pfVar32[7];
                uVar55 = *(undefined8 *)(pfVar32 + 0x12);
                uVar54 = *(undefined8 *)(pfVar32 + 0x10);
                uVar60 = *(undefined8 *)(pfVar32 + 0x16);
                uVar56 = *(undefined8 *)(pfVar32 + 0x14);
                uVar66 = *(undefined8 *)(pfVar32 + 0x1a);
                uVar61 = *(undefined8 *)(pfVar32 + 0x18);
                uVar68 = *(undefined8 *)(pfVar32 + 0x1e);
                uVar67 = *(undefined8 *)(pfVar32 + 0x1c);
                uVar70 = *(undefined8 *)(pfVar32 + 0x22);
                uVar69 = *(undefined8 *)(pfVar32 + 0x20);
                fVar79 = pfVar32[8];
                fVar77 = pfVar32[9];
                fVar47 = pfVar32[10];
                fVar73 = pfVar32[0xb];
                uVar51 = *(undefined8 *)(pfVar32 + 0xe);
                uVar48 = *(undefined8 *)(pfVar32 + 0xc);
                pauVar37 = pauVar9;
                fVar75 = *pfVar32;
                fVar81 = pfVar32[1];
                do {
                  fVar83 = (float)*(undefined8 *)(*pauVar37 + 8);
                  fVar84 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                  auVar25 = *pauVar37;
                  auVar24 = *pauVar37;
                  fVar80 = (float)*(undefined8 *)*pauVar37;
                  fVar82 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                  uVar36 = uVar36 + 4;
                  fVar46 = (float)((ulong)uVar70 >> 0x20) * fVar76;
                  fVar72 = fVar80 * fVar57 + (float)uVar56 * fVar75 + (float)uVar61 * fVar81 +
                           fVar79 * fVar83 + (float)uVar48 * fVar82 + (float)uVar54 * fVar80 +
                           (float)uVar67 * fVar78 + (float)uVar69 * fVar76;
                  fVar74 = fVar82 * fVar58 + (float)((ulong)uVar56 >> 0x20) * fVar75 +
                           (float)((ulong)uVar61 >> 0x20) * fVar81 + fVar77 * fVar83 +
                           (float)((ulong)uVar48 >> 0x20) * fVar82 +
                           (float)((ulong)uVar54 >> 0x20) * fVar80 +
                           (float)((ulong)uVar67 >> 0x20) * fVar78 +
                           (float)((ulong)uVar69 >> 0x20) * fVar76;
                  fVar76 = fVar83 * fVar26 + (float)uVar60 * fVar75 + (float)uVar66 * fVar81 +
                           fVar47 * fVar83 + (float)uVar51 * fVar82 + (float)uVar55 * fVar80 +
                           (float)uVar68 * fVar78 + (float)uVar70 * fVar76;
                  fVar78 = fVar84 * fVar27 + (float)((ulong)uVar60 >> 0x20) * fVar75 +
                           (float)((ulong)uVar66 >> 0x20) * fVar81 + fVar73 * fVar83 +
                           (float)((ulong)uVar51 >> 0x20) * fVar82 +
                           (float)((ulong)uVar55 >> 0x20) * fVar80 +
                           (float)((ulong)uVar68 >> 0x20) * fVar78 + fVar46;
                  *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar78,fVar76);
                  *(ulong *)*pauVar37 = CONCAT44(fVar74,fVar72);
                  pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                  fVar75 = fVar84;
                  fVar81 = fVar83;
                } while (uVar36 < uVar34);
                auVar18._12_4_ = fVar84;
                auVar18._0_12_ = auVar24;
                auVar19._12_4_ = fVar84;
                auVar19._0_12_ = auVar25;
                auVar52 = NEON_ext(auVar18,auVar19,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)pfVar32 = uVar48;
                auVar11._4_4_ = fVar74;
                auVar11._0_4_ = fVar72;
                auVar11._8_4_ = fVar76;
                auVar11._12_4_ = fVar78;
                auVar12._4_4_ = fVar74;
                auVar12._0_4_ = fVar72;
                auVar12._8_4_ = fVar76;
                auVar12._12_4_ = fVar78;
                auVar52 = NEON_ext(auVar11,auVar12,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(pfVar32 + 2) = uVar48;
                lVar45 = *(long *)(param_1 + 0x148);
                uVar34 = uVar41;
                if (uVar7 != 0) {
                  memset(*pauVar8 + uVar41 * 4,0,uVar44);
                  uVar34 = uVar35;
                }
                lVar45 = lVar45 + uVar40 * 0xa0;
                uVar40 = 0;
                uVar54 = *(undefined8 *)(lVar45 + 0xa0);
                fVar57 = *(float *)(lVar45 + 0xb0);
                fVar58 = *(float *)(lVar45 + 0xb4);
                fVar26 = *(float *)(lVar45 + 0xb8);
                fVar27 = *(float *)(lVar45 + 0xbc);
                fVar79 = (float)*(undefined8 *)(lVar45 + 0xa8);
                fVar77 = (float)((ulong)*(undefined8 *)(lVar45 + 0xa8) >> 0x20);
                uVar71 = *(undefined8 *)(lVar45 + 0x128);
                uVar70 = *(undefined8 *)(lVar45 + 0x120);
                uVar56 = *(undefined8 *)(lVar45 + 0xe8);
                uVar55 = *(undefined8 *)(lVar45 + 0xe0);
                uVar61 = *(undefined8 *)(lVar45 + 0xf8);
                uVar60 = *(undefined8 *)(lVar45 + 0xf0);
                uVar67 = *(undefined8 *)(lVar45 + 0x108);
                uVar66 = *(undefined8 *)(lVar45 + 0x100);
                uVar69 = *(undefined8 *)(lVar45 + 0x118);
                uVar68 = *(undefined8 *)(lVar45 + 0x110);
                auVar52 = *(undefined1 (*) [16])(lVar45 + 0xc0);
                uVar51 = *(undefined8 *)(lVar45 + 0xd8);
                uVar48 = *(undefined8 *)(lVar45 + 0xd0);
                pauVar37 = pauVar8;
                fVar78 = (float)uVar54;
                fVar76 = (float)((ulong)uVar54 >> 0x20);
                do {
                  fVar72 = (float)*(undefined8 *)(*pauVar37 + 8);
                  fVar74 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                  auVar25 = *pauVar37;
                  auVar24 = *pauVar37;
                  fVar81 = (float)*(undefined8 *)*pauVar37;
                  fVar46 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                  uVar40 = uVar40 + 4;
                  fVar47 = (float)((ulong)uVar71 >> 0x20) * fVar77;
                  fVar73 = fVar81 * fVar57 + (float)uVar60 * fVar78 + (float)uVar66 * fVar76 +
                           auVar52._0_4_ * fVar72 + (float)uVar48 * fVar46 + (float)uVar55 * fVar81
                           + (float)uVar68 * fVar79 + (float)uVar70 * fVar77;
                  fVar75 = fVar46 * fVar58 + (float)((ulong)uVar60 >> 0x20) * fVar78 +
                           (float)((ulong)uVar66 >> 0x20) * fVar76 + auVar52._4_4_ * fVar72 +
                           (float)((ulong)uVar48 >> 0x20) * fVar46 +
                           (float)((ulong)uVar55 >> 0x20) * fVar81 +
                           (float)((ulong)uVar68 >> 0x20) * fVar79 +
                           (float)((ulong)uVar70 >> 0x20) * fVar77;
                  fVar77 = fVar72 * fVar26 + (float)uVar61 * fVar78 + (float)uVar67 * fVar76 +
                           auVar52._8_4_ * fVar72 + (float)uVar51 * fVar46 + (float)uVar56 * fVar81
                           + (float)uVar69 * fVar79 + (float)uVar71 * fVar77;
                  fVar79 = fVar74 * fVar27 + (float)((ulong)uVar61 >> 0x20) * fVar78 +
                           (float)((ulong)uVar67 >> 0x20) * fVar76 + auVar52._12_4_ * fVar72 +
                           (float)((ulong)uVar51 >> 0x20) * fVar46 +
                           (float)((ulong)uVar56 >> 0x20) * fVar81 +
                           (float)((ulong)uVar69 >> 0x20) * fVar79 + fVar47;
                  *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar79,fVar77);
                  *(ulong *)*pauVar37 = CONCAT44(fVar75,fVar73);
                  pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                  fVar78 = fVar74;
                  fVar76 = fVar72;
                } while (uVar40 < uVar34);
                auVar20._12_4_ = fVar74;
                auVar20._0_12_ = auVar24;
                auVar21._12_4_ = fVar74;
                auVar21._0_12_ = auVar25;
                auVar52 = NEON_ext(auVar20,auVar21,8,1);
                bVar42 = bVar42 + 1;
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar45 + 0xa0) = uVar48;
                auVar13._4_4_ = fVar75;
                auVar13._0_4_ = fVar73;
                auVar13._8_4_ = fVar77;
                auVar13._12_4_ = fVar79;
                auVar14._4_4_ = fVar75;
                auVar14._0_4_ = fVar73;
                auVar14._8_4_ = fVar77;
                auVar14._12_4_ = fVar79;
                auVar52 = NEON_ext(auVar13,auVar14,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar45 + 0xa8) = uVar48;
                bVar31 = *(byte *)(param_1 + 0x134);
              }
              bVar42 = bVar42 + 1;
              uVar40 = (ulong)bVar42;
            } while (bVar42 < bVar31);
          }
          pauVar37 = pauVar8;
          pauVar28 = pauVar9;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN__text__0057c9c0((int *)(param_1 + 0xe8),pauVar9,local_100,uVar33);
            FUN__text__0057c9c0(param_1 + 0x100,pauVar8,pauVar38,uVar33);
            pauVar37 = pauVar38;
            pauVar28 = local_100;
          }
        }
        local_100 = pauVar28;
        FUN__text__0057e400(param_1 + 8,__dest,uVar33);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar33);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar33);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar33);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar31 = *(byte *)(param_1 + 0x134), bVar31 != 0)) {
          iVar10 = 4 - (uVar33 & 3);
          uVar40 = 0;
          do {
            lVar45 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar45 + uVar40 * 0xa0 + 0x90) == 2) {
              uVar44 = uVar41;
              if ((uVar33 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar33 * 4),0,(ulong)(uint)(iVar10 * 4));
                uVar44 = (ulong)(iVar10 + uVar33);
              }
              pfVar32 = (float *)(lVar45 + uVar40 * 0xa0);
              uVar35 = 0;
              fVar78 = pfVar32[2];
              fVar76 = pfVar32[3];
              fVar57 = pfVar32[4];
              fVar58 = pfVar32[5];
              fVar26 = pfVar32[6];
              fVar27 = pfVar32[7];
              uVar55 = *(undefined8 *)(pfVar32 + 0x12);
              uVar54 = *(undefined8 *)(pfVar32 + 0x10);
              uVar60 = *(undefined8 *)(pfVar32 + 0x16);
              uVar56 = *(undefined8 *)(pfVar32 + 0x14);
              uVar66 = *(undefined8 *)(pfVar32 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar32 + 0x18);
              uVar68 = *(undefined8 *)(pfVar32 + 0x1e);
              uVar67 = *(undefined8 *)(pfVar32 + 0x1c);
              uVar70 = *(undefined8 *)(pfVar32 + 0x22);
              uVar69 = *(undefined8 *)(pfVar32 + 0x20);
              fVar79 = pfVar32[8];
              fVar77 = pfVar32[9];
              fVar47 = pfVar32[10];
              fVar73 = pfVar32[0xb];
              uVar51 = *(undefined8 *)(pfVar32 + 0xe);
              uVar48 = *(undefined8 *)(pfVar32 + 0xc);
              pauVar38 = __dest;
              fVar75 = *pfVar32;
              fVar81 = pfVar32[1];
              do {
                uVar71 = *(undefined8 *)((long)*pauVar38 + 8);
                fVar83 = (float)uVar71;
                fVar84 = (float)((ulong)uVar71 >> 0x20);
                auVar25 = *pauVar38;
                auVar24 = *pauVar38;
                fVar80 = (float)*(undefined8 *)*pauVar38;
                fVar82 = (float)((ulong)*(undefined8 *)*pauVar38 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar46 = (float)((ulong)uVar70 >> 0x20) * fVar76;
                fVar72 = fVar80 * fVar57 + (float)uVar56 * fVar75 + (float)uVar61 * fVar81 +
                         fVar79 * fVar83 + (float)uVar48 * fVar82 + (float)uVar54 * fVar80 +
                         (float)uVar67 * fVar78 + (float)uVar69 * fVar76;
                fVar74 = fVar82 * fVar58 + (float)((ulong)uVar56 >> 0x20) * fVar75 +
                         (float)((ulong)uVar61 >> 0x20) * fVar81 + fVar77 * fVar83 +
                         (float)((ulong)uVar48 >> 0x20) * fVar82 +
                         (float)((ulong)uVar54 >> 0x20) * fVar80 +
                         (float)((ulong)uVar67 >> 0x20) * fVar78 +
                         (float)((ulong)uVar69 >> 0x20) * fVar76;
                fVar76 = fVar83 * fVar26 + (float)uVar60 * fVar75 + (float)uVar66 * fVar81 +
                         fVar47 * fVar83 + (float)uVar51 * fVar82 + (float)uVar55 * fVar80 +
                         (float)uVar68 * fVar78 + (float)uVar70 * fVar76;
                fVar78 = fVar84 * fVar27 + (float)((ulong)uVar60 >> 0x20) * fVar75 +
                         (float)((ulong)uVar66 >> 0x20) * fVar81 + fVar73 * fVar83 +
                         (float)((ulong)uVar51 >> 0x20) * fVar82 +
                         (float)((ulong)uVar55 >> 0x20) * fVar80 +
                         (float)((ulong)uVar68 >> 0x20) * fVar78 + fVar46;
                *(ulong *)((long)*pauVar38 + 8) = CONCAT44(fVar78,fVar76);
                *(ulong *)*pauVar38 = CONCAT44(fVar74,fVar72);
                pauVar38 = (undefined1 (*) [12])(pauVar38[1] + 4);
                fVar75 = fVar84;
                fVar81 = fVar83;
              } while (uVar35 < uVar44);
              auVar22._12_4_ = fVar84;
              auVar22._0_12_ = auVar24;
              auVar23._12_4_ = fVar84;
              auVar23._0_12_ = auVar25;
              auVar52 = NEON_ext(auVar22,auVar23,8,1);
              auVar15._4_4_ = fVar74;
              auVar15._0_4_ = fVar72;
              auVar15._8_4_ = fVar76;
              auVar15._12_4_ = fVar78;
              auVar16._4_4_ = fVar74;
              auVar16._0_4_ = fVar72;
              auVar16._8_4_ = fVar76;
              auVar16._12_4_ = fVar78;
              auVar53 = NEON_ext(auVar15,auVar16,8,1);
              uVar48 = NEON_rev64(auVar52._0_8_,4);
              uVar51 = NEON_rev64(auVar53._0_8_,4);
              *(undefined8 *)pfVar32 = uVar48;
              *(undefined8 *)(pfVar32 + 2) = uVar51;
              bVar31 = *(byte *)(param_1 + 0x134);
            }
            uVar40 = uVar40 + 1;
          } while (uVar40 < bVar31);
        }
        memset(__s,0,0x1800);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar45 = 0;
          uVar41 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar45 + 0x90,__dest,uVar33);
            FUN__text__0057de44(*(long *)(param_1 + 0x140) + lVar45,__dest,local_d8[uVar41 & 1],
                                local_d8[(uint)uVar41 & 1 | 2],local_d8[(uint)uVar41 & 1 | 4],uVar33
                               );
            uVar41 = uVar41 + 1;
            lVar45 = lVar45 + 0xa8;
          } while (uVar41 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,local_d8[0],uVar33);
        FUN__text__0055f3a0(param_1 + 0x7c,local_d8[1],uVar33);
        FUN__text__0055f3a0(param_1 + 0x88,local_d8[2],uVar33);
        FUN__text__0055f3a0(param_1 + 0x94,local_d8[3],uVar33);
        FUN__text__0055f3a0(param_1 + 0xa0,local_b8,uVar33);
        FUN__text__0055f3a0(param_1 + 0xac,local_b0,uVar33);
        lVar45 = *param_2 + (ulong)uVar30 * 4;
        FUN__text__0057e7f0(lVar45,__s,pauVar1,uVar33);
        FUN__text__0057e7f0(lVar45,puVar3,puVar4,uVar33);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(lVar45,pauVar9,pauVar8,uVar33);
          FUN__text__0057e7f0(lVar45,local_100,pauVar37,uVar33);
        }
        lVar45 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar30 * 4;
        fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            *(float *)(param_1 + 0x1b4) * fVar62,fVar57 * fVar64,
                            -(fVar62 * *(float *)(param_1 + 0x1b4)),fVar57 * -fVar64,lVar45,__s,
                            pauVar1,uVar33);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,
                              *(float *)(param_1 + 0x1b0) * fVar59 * *(float *)(param_1 + 0x19c),
                              fVar58 * fVar65 * fVar57,
                              -(fVar59 * *(float *)(param_1 + 0x19c)) * *(float *)(param_1 + 0x1b0),
                              fVar50 * -0.003928371 * fVar57 * fVar58,lVar45,pauVar9,pauVar8,uVar33)
          ;
          fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          FUN__text__0057e7f0(0x3f800000,0x3f800000,
                              *(float *)(param_1 + 0x1b0) * fVar59 * *(float *)(param_1 + 0x1a0),
                              fVar58 * fVar65 * fVar57,
                              -(fVar59 * *(float *)(param_1 + 0x1a0)) * *(float *)(param_1 + 0x1b0),
                              fVar50 * -0.003928371 * fVar57 * fVar58,lVar45,local_100,pauVar37,
                              uVar33);
        }
        lVar43 = (ulong)uVar30 * 4;
        fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            *(float *)(param_1 + 0x1b4) * fVar62,fVar59 * fVar64,
                            *(float *)(param_1 + 0x1b4) * -fVar62,fVar59 * -fVar64,
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 8 + lVar43,puVar3,puVar4,
                            uVar33);
        lVar45 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0xc + lVar43;
        FUN__text__0057e7f0(lVar45,__s,pauVar1,uVar33);
        FUN__text__0057e7f0(lVar45,puVar3,puVar4,uVar33);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(lVar45,pauVar9,pauVar8,uVar33);
          FUN__text__0057e7f0(lVar45,local_100,pauVar37,uVar33);
        }
        fVar62 = fVar62 + fVar62;
        FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            fVar62 * *(float *)(param_1 + 0x1b4),
                            fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x10 + lVar43,pauVar5,
                            uVar33);
        FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            fVar62 * *(float *)(param_1 + 0x1b4),
                            fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x14 + lVar43,puVar6,uVar33
                           );
        FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            fVar62 * *(float *)(param_1 + 0x1b4),
                            fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x18 + lVar43,__s,uVar33);
        FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            fVar62 * *(float *)(param_1 + 0x1b4),
                            fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x1c + lVar43,pauVar1,
                            uVar33);
        FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                            fVar62 * *(float *)(param_1 + 0x1b4),
                            fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                            *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x20 + lVar43,puVar3,uVar33
                           );
        if (9 < (*(uint *)(param_2 + 1) & 0xfe)) {
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x24 + lVar43,puVar4,
                              uVar33);
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x28 + lVar43,pauVar5,
                              uVar33);
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x2c + lVar43,puVar6,
                              uVar33);
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x30 + lVar43,__s,uVar33)
          ;
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x34 + lVar43,pauVar1,
                              uVar33);
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x38 + lVar43,puVar3,
                              uVar33);
          FUN__text__0054f710(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              fVar62 * *(float *)(param_1 + 0x1b4),
                              fVar63 * *(float *)(*(long *)(param_1 + 0x158) + 0x54),
                              *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x3c + lVar43,puVar4,
                              uVar33);
        }
        lVar45 = *(long *)(param_1 + 0x158);
        uVar30 = uVar30 + uVar33;
        uVar39 = uVar39 - uVar33;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar45 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar45 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar45 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar45 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar45 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar45 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar45 + 0x48);
        pauVar38 = pauVar37;
        fVar59 = fVar65;
        fVar62 = fVar64;
      } while (uVar39 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar48 = 1;
  }
  return uVar48;
}


