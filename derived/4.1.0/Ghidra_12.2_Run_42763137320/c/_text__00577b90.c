/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00577b90; name: FUN_.text__00577b90
 */


undefined8 FUN__text__00577b90(long param_1,long *param_2)

{
  undefined1 (*__s) [12];
  undefined1 (*pauVar1) [12];
  int *piVar2;
  undefined1 (*__dest) [12];
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  bool bVar26;
  bool bVar27;
  undefined1 (*__src) [12];
  byte bVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [12];
  undefined1 (*pauVar38) [12];
  undefined1 (*pauVar39) [12];
  uint uVar40;
  ulong uVar41;
  byte bVar42;
  ulong uVar43;
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
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
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
  undefined1 (*local_e8) [12];
  undefined1 (*local_e0) [12];
  undefined1 (*local_d0) [12];
  undefined1 (*local_c8) [12];
  undefined1 (*local_b8 [5]) [12];
  
  uVar7 = *(uint *)(param_2 + 1);
  bVar26 = *(char *)(*(long *)(param_1 + 0x158) + 0x99) == '\0';
  uVar6 = uVar7 & 0x210000;
  bVar27 = uVar6 == 0;
  lVar45 = 0;
  if (!bVar27 && !bVar26) {
    lVar45 = 2;
  }
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),
                     ((ulong)*(byte *)(param_1 + 0x138) + lVar45) * 0x400 + 0x1800,0x715356,0x4d5);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar48 = 0x34;
  }
  else {
    __s = (undefined1 (*) [12])(__src[0xaa] + 8);
    puVar4 = __src[0x1aa] + 8;
    pauVar1 = __src + 0x100;
    puVar3 = __src[0x155] + 4;
    if (*(char *)(param_1 + 0x138) == '\0') {
      pauVar37 = (undefined1 (*) [12])0x0;
      pauVar39 = (undefined1 (*) [12])0x0;
      local_d0 = (undefined1 (*) [12])0x0;
      local_c8 = (undefined1 (*) [12])0x0;
    }
    else {
      local_c8 = __src + 0x200;
      local_d0 = (undefined1 (*) [12])(__src[0x255] + 4);
      if (bVar27 || bVar26) {
        pauVar37 = (undefined1 (*) [12])0x0;
        pauVar39 = (undefined1 (*) [12])0x0;
      }
      else {
        pauVar37 = (undefined1 (*) [12])(__src[0x2aa] + 8);
        pauVar39 = __src + 0x300;
      }
    }
    fVar63 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
    fVar54 = 1.0 - fVar63 * fVar63;
    fVar58 = SQRT(fVar54);
    if (fVar54 <= 0.0) {
      fVar58 = 0.0;
    }
    fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar54 = 1.0 - fVar62 * fVar62;
    fVar50 = SQRT(fVar54);
    if (fVar54 <= 0.0) {
      fVar50 = 0.0;
    }
    if (uVar6 == 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x3c) = 0x3f800000;
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x40) = 0x3f800000;
    }
    uVar32 = (uint)*(ushort *)((long)param_2 + 0x12);
    local_b8[0] = __s;
    local_b8[1] = pauVar1;
    local_b8[2] = (undefined1 (*) [12])puVar3;
    local_b8[3] = (undefined1 (*) [12])puVar4;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      piVar2 = (int *)(param_1 + 0xb8);
      uVar40 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      do {
        uVar34 = uVar32;
        if (0xff < uVar32) {
          uVar34 = 0x100;
        }
        uVar41 = (ulong)uVar34;
        FUN__text__0057e570(param_2,uVar41,uVar40,__src);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar28 = *(byte *)(param_1 + 0x134), bVar28 != 0)) {
          iVar8 = 4 - (uVar34 & 3);
          uVar43 = 0;
          do {
            lVar45 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar45 + uVar43 * 0xa0 + 0x90) == 3) {
              uVar44 = uVar41;
              if ((uVar34 & 3) != 0) {
                memset(*__src + (ulong)uVar34 * 4,0,(ulong)(uint)(iVar8 * 4));
                uVar44 = (ulong)(iVar8 + uVar34);
              }
              pfVar29 = (float *)(lVar45 + uVar43 * 0xa0);
              uVar35 = 0;
              fVar76 = pfVar29[2];
              fVar74 = pfVar29[3];
              fVar54 = pfVar29[4];
              fVar59 = pfVar29[5];
              fVar24 = pfVar29[6];
              fVar25 = pfVar29[7];
              uVar56 = *(undefined8 *)(pfVar29 + 0x12);
              uVar55 = *(undefined8 *)(pfVar29 + 0x10);
              uVar60 = *(undefined8 *)(pfVar29 + 0x16);
              uVar57 = *(undefined8 *)(pfVar29 + 0x14);
              uVar64 = *(undefined8 *)(pfVar29 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar29 + 0x18);
              uVar66 = *(undefined8 *)(pfVar29 + 0x1e);
              uVar65 = *(undefined8 *)(pfVar29 + 0x1c);
              uVar68 = *(undefined8 *)(pfVar29 + 0x22);
              uVar67 = *(undefined8 *)(pfVar29 + 0x20);
              fVar77 = pfVar29[8];
              fVar75 = pfVar29[9];
              fVar47 = pfVar29[10];
              fVar71 = pfVar29[0xb];
              uVar51 = *(undefined8 *)(pfVar29 + 0xe);
              uVar48 = *(undefined8 *)(pfVar29 + 0xc);
              pauVar38 = __src;
              fVar73 = *pfVar29;
              fVar79 = pfVar29[1];
              do {
                fVar81 = (float)*(undefined8 *)(*pauVar38 + 8);
                fVar82 = (float)((ulong)*(undefined8 *)(*pauVar38 + 8) >> 0x20);
                auVar23 = *pauVar38;
                auVar22 = *pauVar38;
                fVar78 = (float)*(undefined8 *)*pauVar38;
                fVar80 = (float)((ulong)*(undefined8 *)*pauVar38 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar46 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                fVar70 = fVar78 * fVar54 + (float)uVar57 * fVar73 + (float)uVar61 * fVar79 +
                         fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar55 * fVar78 +
                         (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                fVar72 = fVar80 * fVar59 + (float)((ulong)uVar57 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                         (float)((ulong)uVar48 >> 0x20) * fVar80 +
                         (float)((ulong)uVar55 >> 0x20) * fVar78 +
                         (float)((ulong)uVar65 >> 0x20) * fVar76 +
                         (float)((ulong)uVar67 >> 0x20) * fVar74;
                fVar74 = fVar81 * fVar24 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                         fVar47 * fVar81 + (float)uVar51 * fVar80 + (float)uVar56 * fVar78 +
                         (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                fVar76 = fVar82 * fVar25 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                         (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                         (float)((ulong)uVar51 >> 0x20) * fVar80 +
                         (float)((ulong)uVar56 >> 0x20) * fVar78 +
                         (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar46;
                *(ulong *)(*pauVar38 + 8) = CONCAT44(fVar76,fVar74);
                *(ulong *)*pauVar38 = CONCAT44(fVar72,fVar70);
                pauVar38 = (undefined1 (*) [12])(pauVar38[1] + 4);
                fVar73 = fVar82;
                fVar79 = fVar81;
              } while (uVar35 < uVar44);
              auVar49._12_4_ = fVar82;
              auVar49._0_12_ = auVar22;
              auVar15._12_4_ = fVar82;
              auVar15._0_12_ = auVar23;
              auVar49 = NEON_ext(auVar49,auVar15,8,1);
              auVar52._4_4_ = fVar72;
              auVar52._0_4_ = fVar70;
              auVar52._8_4_ = fVar74;
              auVar52._12_4_ = fVar76;
              auVar53._4_4_ = fVar72;
              auVar53._0_4_ = fVar70;
              auVar53._8_4_ = fVar74;
              auVar53._12_4_ = fVar76;
              auVar52 = NEON_ext(auVar52,auVar53,8,1);
              uVar48 = NEON_rev64(auVar49._0_8_,4);
              uVar51 = NEON_rev64(auVar52._0_8_,4);
              *(undefined8 *)pfVar29 = uVar48;
              *(undefined8 *)(pfVar29 + 2) = uVar51;
              bVar28 = *(byte *)(param_1 + 0x134);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 < bVar28);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar34 << 2));
          iVar8 = *piVar2;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar34);
          iVar8 = *piVar2;
        }
        if (iVar8 != 0) {
          FUN__text__0057c820(piVar2,__src,uVar34);
        }
        if (*(char *)(param_1 + 0x138) == '\0') {
LAB__text__00578178:
          local_e8 = pauVar39;
          local_e0 = pauVar37;
        }
        else {
          FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,local_c8,local_d0,uVar34);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar28 = *(byte *)(param_1 + 0x134), bVar28 != 0)) {
            uVar5 = uVar34 & 3;
            uVar43 = 0;
            uVar35 = (ulong)((4 - uVar5) * 4);
            uVar44 = (ulong)((4 - uVar5) + uVar34);
            bVar42 = 0;
            do {
              lVar45 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar45 + uVar43 * 0xa0 + 0x90) == 1) {
                uVar33 = uVar41;
                if (uVar5 != 0) {
                  memset(*local_c8 + uVar41 * 4,0,uVar35);
                  uVar33 = uVar44;
                }
                pfVar29 = (float *)(lVar45 + uVar43 * 0xa0);
                uVar36 = 0;
                fVar76 = pfVar29[2];
                fVar74 = pfVar29[3];
                fVar54 = pfVar29[4];
                fVar59 = pfVar29[5];
                fVar24 = pfVar29[6];
                fVar25 = pfVar29[7];
                uVar56 = *(undefined8 *)(pfVar29 + 0x12);
                uVar55 = *(undefined8 *)(pfVar29 + 0x10);
                uVar60 = *(undefined8 *)(pfVar29 + 0x16);
                uVar57 = *(undefined8 *)(pfVar29 + 0x14);
                uVar64 = *(undefined8 *)(pfVar29 + 0x1a);
                uVar61 = *(undefined8 *)(pfVar29 + 0x18);
                uVar66 = *(undefined8 *)(pfVar29 + 0x1e);
                uVar65 = *(undefined8 *)(pfVar29 + 0x1c);
                uVar68 = *(undefined8 *)(pfVar29 + 0x22);
                uVar67 = *(undefined8 *)(pfVar29 + 0x20);
                fVar77 = pfVar29[8];
                fVar75 = pfVar29[9];
                fVar47 = pfVar29[10];
                fVar71 = pfVar29[0xb];
                uVar51 = *(undefined8 *)(pfVar29 + 0xe);
                uVar48 = *(undefined8 *)(pfVar29 + 0xc);
                pauVar38 = local_c8;
                fVar73 = *pfVar29;
                fVar79 = pfVar29[1];
                do {
                  fVar81 = (float)*(undefined8 *)(*pauVar38 + 8);
                  fVar82 = (float)((ulong)*(undefined8 *)(*pauVar38 + 8) >> 0x20);
                  auVar23 = *pauVar38;
                  auVar22 = *pauVar38;
                  fVar78 = (float)*(undefined8 *)*pauVar38;
                  fVar80 = (float)((ulong)*(undefined8 *)*pauVar38 >> 0x20);
                  uVar36 = uVar36 + 4;
                  fVar46 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                  fVar70 = fVar78 * fVar54 + (float)uVar57 * fVar73 + (float)uVar61 * fVar79 +
                           fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar55 * fVar78 +
                           (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                  fVar72 = fVar80 * fVar59 + (float)((ulong)uVar57 >> 0x20) * fVar73 +
                           (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                           (float)((ulong)uVar48 >> 0x20) * fVar80 +
                           (float)((ulong)uVar55 >> 0x20) * fVar78 +
                           (float)((ulong)uVar65 >> 0x20) * fVar76 +
                           (float)((ulong)uVar67 >> 0x20) * fVar74;
                  fVar74 = fVar81 * fVar24 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                           fVar47 * fVar81 + (float)uVar51 * fVar80 + (float)uVar56 * fVar78 +
                           (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                  fVar76 = fVar82 * fVar25 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                           (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                           (float)((ulong)uVar51 >> 0x20) * fVar80 +
                           (float)((ulong)uVar56 >> 0x20) * fVar78 +
                           (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar46;
                  *(ulong *)(*pauVar38 + 8) = CONCAT44(fVar76,fVar74);
                  *(ulong *)*pauVar38 = CONCAT44(fVar72,fVar70);
                  pauVar38 = (undefined1 (*) [12])(pauVar38[1] + 4);
                  fVar73 = fVar82;
                  fVar79 = fVar81;
                } while (uVar36 < uVar33);
                auVar16._12_4_ = fVar82;
                auVar16._0_12_ = auVar22;
                auVar17._12_4_ = fVar82;
                auVar17._0_12_ = auVar23;
                auVar52 = NEON_ext(auVar16,auVar17,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)pfVar29 = uVar48;
                auVar9._4_4_ = fVar72;
                auVar9._0_4_ = fVar70;
                auVar9._8_4_ = fVar74;
                auVar9._12_4_ = fVar76;
                auVar10._4_4_ = fVar72;
                auVar10._0_4_ = fVar70;
                auVar10._8_4_ = fVar74;
                auVar10._12_4_ = fVar76;
                auVar52 = NEON_ext(auVar9,auVar10,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(pfVar29 + 2) = uVar48;
                lVar45 = *(long *)(param_1 + 0x148);
                uVar33 = uVar41;
                if (uVar5 != 0) {
                  memset(*local_d0 + uVar41 * 4,0,uVar35);
                  uVar33 = uVar44;
                }
                lVar45 = lVar45 + uVar43 * 0xa0;
                uVar43 = 0;
                uVar55 = *(undefined8 *)(lVar45 + 0xa0);
                fVar54 = *(float *)(lVar45 + 0xb0);
                fVar59 = *(float *)(lVar45 + 0xb4);
                fVar24 = *(float *)(lVar45 + 0xb8);
                fVar25 = *(float *)(lVar45 + 0xbc);
                fVar77 = (float)*(undefined8 *)(lVar45 + 0xa8);
                fVar75 = (float)((ulong)*(undefined8 *)(lVar45 + 0xa8) >> 0x20);
                uVar69 = *(undefined8 *)(lVar45 + 0x128);
                uVar68 = *(undefined8 *)(lVar45 + 0x120);
                uVar57 = *(undefined8 *)(lVar45 + 0xe8);
                uVar56 = *(undefined8 *)(lVar45 + 0xe0);
                uVar61 = *(undefined8 *)(lVar45 + 0xf8);
                uVar60 = *(undefined8 *)(lVar45 + 0xf0);
                uVar65 = *(undefined8 *)(lVar45 + 0x108);
                uVar64 = *(undefined8 *)(lVar45 + 0x100);
                uVar67 = *(undefined8 *)(lVar45 + 0x118);
                uVar66 = *(undefined8 *)(lVar45 + 0x110);
                auVar52 = *(undefined1 (*) [16])(lVar45 + 0xc0);
                uVar51 = *(undefined8 *)(lVar45 + 0xd8);
                uVar48 = *(undefined8 *)(lVar45 + 0xd0);
                pauVar38 = local_d0;
                fVar76 = (float)uVar55;
                fVar74 = (float)((ulong)uVar55 >> 0x20);
                do {
                  fVar70 = (float)*(undefined8 *)(*pauVar38 + 8);
                  fVar72 = (float)((ulong)*(undefined8 *)(*pauVar38 + 8) >> 0x20);
                  auVar23 = *pauVar38;
                  auVar22 = *pauVar38;
                  fVar79 = (float)*(undefined8 *)*pauVar38;
                  fVar46 = (float)((ulong)*(undefined8 *)*pauVar38 >> 0x20);
                  uVar43 = uVar43 + 4;
                  fVar47 = (float)((ulong)uVar69 >> 0x20) * fVar75;
                  fVar71 = fVar79 * fVar54 + (float)uVar60 * fVar76 + (float)uVar64 * fVar74 +
                           auVar52._0_4_ * fVar70 + (float)uVar48 * fVar46 + (float)uVar56 * fVar79
                           + (float)uVar66 * fVar77 + (float)uVar68 * fVar75;
                  fVar73 = fVar46 * fVar59 + (float)((ulong)uVar60 >> 0x20) * fVar76 +
                           (float)((ulong)uVar64 >> 0x20) * fVar74 + auVar52._4_4_ * fVar70 +
                           (float)((ulong)uVar48 >> 0x20) * fVar46 +
                           (float)((ulong)uVar56 >> 0x20) * fVar79 +
                           (float)((ulong)uVar66 >> 0x20) * fVar77 +
                           (float)((ulong)uVar68 >> 0x20) * fVar75;
                  fVar75 = fVar70 * fVar24 + (float)uVar61 * fVar76 + (float)uVar65 * fVar74 +
                           auVar52._8_4_ * fVar70 + (float)uVar51 * fVar46 + (float)uVar57 * fVar79
                           + (float)uVar67 * fVar77 + (float)uVar69 * fVar75;
                  fVar77 = fVar72 * fVar25 + (float)((ulong)uVar61 >> 0x20) * fVar76 +
                           (float)((ulong)uVar65 >> 0x20) * fVar74 + auVar52._12_4_ * fVar70 +
                           (float)((ulong)uVar51 >> 0x20) * fVar46 +
                           (float)((ulong)uVar57 >> 0x20) * fVar79 +
                           (float)((ulong)uVar67 >> 0x20) * fVar77 + fVar47;
                  *(ulong *)(*pauVar38 + 8) = CONCAT44(fVar77,fVar75);
                  *(ulong *)*pauVar38 = CONCAT44(fVar73,fVar71);
                  pauVar38 = (undefined1 (*) [12])(pauVar38[1] + 4);
                  fVar76 = fVar72;
                  fVar74 = fVar70;
                } while (uVar43 < uVar33);
                auVar18._12_4_ = fVar72;
                auVar18._0_12_ = auVar22;
                auVar19._12_4_ = fVar72;
                auVar19._0_12_ = auVar23;
                auVar52 = NEON_ext(auVar18,auVar19,8,1);
                bVar42 = bVar42 + 1;
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar45 + 0xa0) = uVar48;
                auVar11._4_4_ = fVar73;
                auVar11._0_4_ = fVar71;
                auVar11._8_4_ = fVar75;
                auVar11._12_4_ = fVar77;
                auVar12._4_4_ = fVar73;
                auVar12._0_4_ = fVar71;
                auVar12._8_4_ = fVar75;
                auVar12._12_4_ = fVar77;
                auVar52 = NEON_ext(auVar11,auVar12,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar45 + 0xa8) = uVar48;
                bVar28 = *(byte *)(param_1 + 0x134);
              }
              bVar42 = bVar42 + 1;
              uVar43 = (ulong)bVar42;
            } while (bVar42 < bVar28);
          }
          if (bVar27 || bVar26) goto LAB__text__00578178;
          local_e8 = local_d0;
          local_e0 = local_c8;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN__text__0057c9c0((int *)(param_1 + 0xe8),local_c8,pauVar37,uVar34);
            FUN__text__0057c9c0(param_1 + 0x100,local_d0,pauVar39,uVar34);
            local_e8 = pauVar39;
            local_e0 = pauVar37;
          }
        }
        FUN__text__0057e400(param_1 + 8,__dest,uVar34);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar34);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar34);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar34);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar28 = *(byte *)(param_1 + 0x134), bVar28 != 0)) {
          iVar8 = 4 - (uVar34 & 3);
          uVar43 = 0;
          do {
            lVar45 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar45 + uVar43 * 0xa0 + 0x90) == 2) {
              uVar44 = uVar41;
              if ((uVar34 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar34 * 4),0,(ulong)(uint)(iVar8 * 4));
                uVar44 = (ulong)(iVar8 + uVar34);
              }
              pfVar29 = (float *)(lVar45 + uVar43 * 0xa0);
              uVar35 = 0;
              fVar76 = pfVar29[2];
              fVar74 = pfVar29[3];
              fVar54 = pfVar29[4];
              fVar59 = pfVar29[5];
              fVar24 = pfVar29[6];
              fVar25 = pfVar29[7];
              uVar56 = *(undefined8 *)(pfVar29 + 0x12);
              uVar55 = *(undefined8 *)(pfVar29 + 0x10);
              uVar60 = *(undefined8 *)(pfVar29 + 0x16);
              uVar57 = *(undefined8 *)(pfVar29 + 0x14);
              uVar64 = *(undefined8 *)(pfVar29 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar29 + 0x18);
              uVar66 = *(undefined8 *)(pfVar29 + 0x1e);
              uVar65 = *(undefined8 *)(pfVar29 + 0x1c);
              uVar68 = *(undefined8 *)(pfVar29 + 0x22);
              uVar67 = *(undefined8 *)(pfVar29 + 0x20);
              fVar77 = pfVar29[8];
              fVar75 = pfVar29[9];
              fVar47 = pfVar29[10];
              fVar71 = pfVar29[0xb];
              uVar51 = *(undefined8 *)(pfVar29 + 0xe);
              uVar48 = *(undefined8 *)(pfVar29 + 0xc);
              pauVar37 = __dest;
              fVar73 = *pfVar29;
              fVar79 = pfVar29[1];
              do {
                uVar69 = *(undefined8 *)((long)*pauVar37 + 8);
                fVar81 = (float)uVar69;
                fVar82 = (float)((ulong)uVar69 >> 0x20);
                auVar23 = *pauVar37;
                auVar22 = *pauVar37;
                fVar78 = (float)*(undefined8 *)*pauVar37;
                fVar80 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar46 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                fVar70 = fVar78 * fVar54 + (float)uVar57 * fVar73 + (float)uVar61 * fVar79 +
                         fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar55 * fVar78 +
                         (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                fVar72 = fVar80 * fVar59 + (float)((ulong)uVar57 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                         (float)((ulong)uVar48 >> 0x20) * fVar80 +
                         (float)((ulong)uVar55 >> 0x20) * fVar78 +
                         (float)((ulong)uVar65 >> 0x20) * fVar76 +
                         (float)((ulong)uVar67 >> 0x20) * fVar74;
                fVar74 = fVar81 * fVar24 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                         fVar47 * fVar81 + (float)uVar51 * fVar80 + (float)uVar56 * fVar78 +
                         (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                fVar76 = fVar82 * fVar25 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                         (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                         (float)((ulong)uVar51 >> 0x20) * fVar80 +
                         (float)((ulong)uVar56 >> 0x20) * fVar78 +
                         (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar46;
                *(ulong *)((long)*pauVar37 + 8) = CONCAT44(fVar76,fVar74);
                *(ulong *)*pauVar37 = CONCAT44(fVar72,fVar70);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar73 = fVar82;
                fVar79 = fVar81;
              } while (uVar35 < uVar44);
              auVar20._12_4_ = fVar82;
              auVar20._0_12_ = auVar22;
              auVar21._12_4_ = fVar82;
              auVar21._0_12_ = auVar23;
              auVar52 = NEON_ext(auVar20,auVar21,8,1);
              auVar13._4_4_ = fVar72;
              auVar13._0_4_ = fVar70;
              auVar13._8_4_ = fVar74;
              auVar13._12_4_ = fVar76;
              auVar14._4_4_ = fVar72;
              auVar14._0_4_ = fVar70;
              auVar14._8_4_ = fVar74;
              auVar14._12_4_ = fVar76;
              auVar53 = NEON_ext(auVar13,auVar14,8,1);
              uVar48 = NEON_rev64(auVar52._0_8_,4);
              uVar51 = NEON_rev64(auVar53._0_8_,4);
              *(undefined8 *)pfVar29 = uVar48;
              *(undefined8 *)(pfVar29 + 2) = uVar51;
              bVar28 = *(byte *)(param_1 + 0x134);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 < bVar28);
        }
        memset(__s,0,0x1000);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar45 = 0;
          uVar41 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar45 + 0x90,__dest,uVar34);
            FUN__text__0057da00(*(long *)(param_1 + 0x140) + lVar45,__dest,local_b8[uVar41 & 1],
                                local_b8[(uVar41 & 1) + 2],uVar34);
            uVar41 = uVar41 + 1;
            lVar45 = lVar45 + 0xa8;
          } while (uVar41 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,__s,uVar34);
        FUN__text__0055f3a0(param_1 + 0x7c,pauVar1,uVar34);
        FUN__text__0055f3a0(param_1 + 0x88,puVar3,uVar34);
        FUN__text__0055f3a0(param_1 + 0x94,puVar4,uVar34);
        if ((uVar7 >> 0xc & 1) == 0) {
          lVar45 = 0;
        }
        else {
          lVar45 = *param_2 + (ulong)uVar40 * 4;
          lVar30 = *(long *)(param_1 + 0x158);
          fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
          fVar59 = *(float *)(lVar30 + 0x54) * *(float *)(lVar30 + 0x3c);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar30 + 0x4c),
                              fVar54 * fVar63,fVar59 * fVar62,fVar54 * fVar58,fVar59 * fVar50,lVar45
                              ,__s,pauVar1,uVar34);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
            fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar63,fVar59 * fVar62,
                                fVar54 * fVar58,fVar59 * fVar50,lVar45,local_c8,local_d0,uVar34);
          }
          lVar45 = 1;
        }
        if ((uVar7 >> 0xd & 1) != 0) {
          fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
          lVar30 = *param_2 + lVar45 * (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar40 * 4;
          lVar31 = *(long *)(param_1 + 0x158);
          fVar59 = *(float *)(lVar31 + 0x54) * *(float *)(lVar31 + 0x3c);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar31 + 0x4c),
                              fVar54 * fVar58,fVar59 * fVar50,fVar54 * fVar63,fVar59 * fVar62,lVar30
                              ,__s,pauVar1,uVar34);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
            fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar58,fVar59 * fVar50,
                                fVar54 * fVar63,fVar59 * fVar62,lVar30,local_c8,local_d0,uVar34);
          }
          lVar45 = lVar45 + 1;
        }
        if ((uVar7 >> 0xe & 1) != 0) {
          FUN__text__0057e7f0(*param_2 + lVar45 * (ulong)*(ushort *)(param_2 + 2) * 4 +
                              (ulong)uVar40 * 4,puVar3,puVar4,uVar34);
          lVar45 = lVar45 + 1;
        }
        if (uVar6 != 0) {
          fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
          lVar30 = *param_2 + lVar45 * (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar40 * 4;
          lVar31 = *(long *)(param_1 + 0x158);
          fVar59 = *(float *)(lVar31 + 0x54) * *(float *)(lVar31 + 0x40);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar31 + 0x4c),
                              fVar54 * fVar63,fVar59 * fVar62,fVar54 * fVar58,fVar59 * fVar50,lVar30
                              ,puVar3,puVar4,uVar34);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
            fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x40);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar63,fVar59 * fVar62,
                                fVar54 * fVar58,fVar59 * fVar50,lVar30,local_e0,local_e8,uVar34);
          }
          fVar54 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
          lVar30 = *param_2 +
                   ((ulong)*(ushort *)(param_2 + 2) + (ulong)*(ushort *)(param_2 + 2) * lVar45) * 4
                   + (ulong)uVar40 * 4;
          lVar31 = *(long *)(param_1 + 0x158);
          fVar59 = *(float *)(lVar31 + 0x54) * *(float *)(lVar31 + 0x40);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar31 + 0x4c),
                              fVar54 * fVar58,fVar59 * fVar50,fVar54 * fVar63,fVar59 * fVar62,lVar30
                              ,puVar3,puVar4,uVar34);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar54 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
            fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x40);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar54 * fVar58,fVar59 * fVar50,
                                fVar54 * fVar63,fVar59 * fVar62,lVar30,local_e0,local_e8,uVar34);
          }
          lVar45 = lVar45 + 2;
        }
        if ((uVar7 >> 0xf & 1) != 0) {
          FUN__text__0057e7f0(*param_2 + lVar45 * (ulong)*(ushort *)(param_2 + 2) * 4 +
                              (ulong)uVar40 * 4,puVar3,puVar4,uVar34);
        }
        lVar45 = *(long *)(param_1 + 0x158);
        uVar40 = uVar34 + uVar40;
        uVar32 = uVar32 - uVar34;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar45 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar45 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar45 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar45 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar45 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar45 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar45 + 0x48);
        pauVar37 = local_e0;
        pauVar39 = local_e8;
        fVar63 = fVar62;
        fVar58 = fVar50;
      } while (uVar32 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar48 = 1;
  }
  return uVar48;
}


