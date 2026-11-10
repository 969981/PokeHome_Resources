/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005794a0; name: FUN_.text__005794a0
 */


undefined8 FUN__text__005794a0(long param_1,long *param_2)

{
  undefined1 (*__dest) [12];
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 (*pauVar22) [12];
  undefined1 (*pauVar23) [12];
  undefined1 *puVar24;
  undefined1 (*__src) [12];
  byte bVar25;
  float *pfVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [12];
  undefined1 (*pauVar33) [12];
  float *pfVar34;
  float *pfVar35;
  undefined1 (*pauVar36) [12];
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  uint uVar43;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
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
  undefined1 (*local_108) [12];
  undefined1 (*local_100) [12];
  undefined1 (*local_f0) [12];
  undefined1 (*local_e8) [12];
  undefined1 (*local_d8 [4]) [12];
  undefined1 (*local_b8) [12];
  undefined1 *local_b0;
  
  uVar3 = *(uint *)(param_2 + 1);
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),(ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000,
                     0x715356,0x70c);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar48 = 0x34;
  }
  else {
    local_d8[0] = (undefined1 (*) [12])(__src[0xaa] + 8);
    local_d8[1] = __src + 0x100;
    local_d8[2] = (undefined1 (*) [12])(__src[0x155] + 4);
    local_d8[3] = (undefined1 (*) [12])(__src[0x1aa] + 8);
    local_b8 = __src + 0x200;
    local_b0 = __src[0x255] + 4;
    if (*(char *)(param_1 + 0x138) == '\0') {
      pauVar36 = (undefined1 (*) [12])0x0;
      pauVar32 = (undefined1 (*) [12])0x0;
      local_f0 = (undefined1 (*) [12])0x0;
      local_e8 = (undefined1 (*) [12])0x0;
    }
    else {
      local_e8 = (undefined1 (*) [12])(__src[0x2aa] + 8);
      local_f0 = __src + 0x300;
      pauVar32 = (undefined1 (*) [12])(__src[0x355] + 4);
      pauVar36 = (undefined1 (*) [12])(__src[0x3aa] + 8);
    }
    uVar38 = (uint)*(ushort *)((long)param_2 + 0x12);
    fVar63 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar47 = 1.0 - fVar63 * fVar63;
    fVar19 = SQRT(fVar47);
    if (fVar47 <= 0.0) {
      fVar19 = 0.0;
    }
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar43 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      uVar2 = uVar3 + ((int)(uVar3 << 0x10) >> 0x1f) & 0xff;
      piVar1 = (int *)(param_1 + 0xb8);
      fVar62 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar50 = 1.0 - fVar62 * fVar62;
      fVar47 = SQRT(fVar50);
      if (fVar50 <= 0.0) {
        fVar47 = 0.0;
      }
      do {
        uVar28 = uVar38;
        if (0xff < uVar38) {
          uVar28 = 0x100;
        }
        uVar42 = (ulong)uVar28;
        FUN__text__0057e570(param_2,uVar42,uVar43,__src);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar25 = *(byte *)(param_1 + 0x134), bVar25 != 0)) {
          iVar5 = 4 - (uVar28 & 3);
          uVar37 = 0;
          do {
            lVar41 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar41 + uVar37 * 0xa0 + 0x90) == 3) {
              uVar40 = uVar42;
              if ((uVar28 & 3) != 0) {
                memset(*__src + (ulong)uVar28 * 4,0,(ulong)(uint)(iVar5 * 4));
                uVar40 = (ulong)(iVar5 + uVar28);
              }
              pfVar26 = (float *)(lVar41 + uVar37 * 0xa0);
              uVar30 = 0;
              fVar76 = pfVar26[2];
              fVar74 = pfVar26[3];
              fVar50 = pfVar26[4];
              fVar59 = pfVar26[5];
              fVar54 = pfVar26[6];
              fVar55 = pfVar26[7];
              uVar57 = *(undefined8 *)(pfVar26 + 0x12);
              uVar56 = *(undefined8 *)(pfVar26 + 0x10);
              uVar60 = *(undefined8 *)(pfVar26 + 0x16);
              uVar58 = *(undefined8 *)(pfVar26 + 0x14);
              uVar64 = *(undefined8 *)(pfVar26 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar26 + 0x18);
              uVar66 = *(undefined8 *)(pfVar26 + 0x1e);
              uVar65 = *(undefined8 *)(pfVar26 + 0x1c);
              uVar68 = *(undefined8 *)(pfVar26 + 0x22);
              uVar67 = *(undefined8 *)(pfVar26 + 0x20);
              fVar77 = pfVar26[8];
              fVar75 = pfVar26[9];
              fVar46 = pfVar26[10];
              fVar71 = pfVar26[0xb];
              uVar51 = *(undefined8 *)(pfVar26 + 0xe);
              uVar48 = *(undefined8 *)(pfVar26 + 0xc);
              pauVar33 = __src;
              fVar73 = *pfVar26;
              fVar79 = pfVar26[1];
              do {
                fVar81 = (float)*(undefined8 *)(*pauVar33 + 8);
                fVar82 = (float)((ulong)*(undefined8 *)(*pauVar33 + 8) >> 0x20);
                auVar21 = *pauVar33;
                auVar20 = *pauVar33;
                fVar78 = (float)*(undefined8 *)*pauVar33;
                fVar80 = (float)((ulong)*(undefined8 *)*pauVar33 >> 0x20);
                uVar30 = uVar30 + 4;
                fVar45 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                fVar70 = fVar78 * fVar50 + (float)uVar58 * fVar73 + (float)uVar61 * fVar79 +
                         fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar56 * fVar78 +
                         (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                fVar72 = fVar80 * fVar59 + (float)((ulong)uVar58 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                         (float)((ulong)uVar48 >> 0x20) * fVar80 +
                         (float)((ulong)uVar56 >> 0x20) * fVar78 +
                         (float)((ulong)uVar65 >> 0x20) * fVar76 +
                         (float)((ulong)uVar67 >> 0x20) * fVar74;
                fVar74 = fVar81 * fVar54 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                         fVar46 * fVar81 + (float)uVar51 * fVar80 + (float)uVar57 * fVar78 +
                         (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                fVar76 = fVar82 * fVar55 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                         (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                         (float)((ulong)uVar51 >> 0x20) * fVar80 +
                         (float)((ulong)uVar57 >> 0x20) * fVar78 +
                         (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar45;
                *(ulong *)(*pauVar33 + 8) = CONCAT44(fVar76,fVar74);
                *(ulong *)*pauVar33 = CONCAT44(fVar72,fVar70);
                pauVar33 = (undefined1 (*) [12])(pauVar33[1] + 4);
                fVar73 = fVar82;
                fVar79 = fVar81;
              } while (uVar30 < uVar40);
              auVar49._12_4_ = fVar82;
              auVar49._0_12_ = auVar20;
              auVar12._12_4_ = fVar82;
              auVar12._0_12_ = auVar21;
              auVar49 = NEON_ext(auVar49,auVar12,8,1);
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
              *(undefined8 *)pfVar26 = uVar48;
              *(undefined8 *)(pfVar26 + 2) = uVar51;
              bVar25 = *(byte *)(param_1 + 0x134);
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < bVar25);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar28 << 2));
          iVar5 = *piVar1;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar28);
          iVar5 = *piVar1;
        }
        if (iVar5 != 0) {
          FUN__text__0057c820(piVar1,__src,uVar28);
        }
        if (*(char *)(param_1 + 0x138) == '\0') {
          local_108 = pauVar32;
          local_100 = pauVar36;
        }
        else {
          FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,local_e8,local_f0,uVar28);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar25 = *(byte *)(param_1 + 0x134), bVar25 != 0)) {
            uVar39 = uVar28 & 3;
            uVar30 = 0;
            uVar40 = (ulong)((4 - uVar39) * 4);
            uVar37 = (ulong)((4 - uVar39) + uVar28);
            bVar44 = 0;
            do {
              lVar41 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar41 + uVar30 * 0xa0 + 0x90) == 1) {
                uVar29 = uVar42;
                if (uVar39 != 0) {
                  memset(*local_e8 + uVar42 * 4,0,uVar40);
                  uVar29 = uVar37;
                }
                pfVar26 = (float *)(lVar41 + uVar30 * 0xa0);
                uVar31 = 0;
                fVar76 = pfVar26[2];
                fVar74 = pfVar26[3];
                fVar50 = pfVar26[4];
                fVar59 = pfVar26[5];
                fVar54 = pfVar26[6];
                fVar55 = pfVar26[7];
                uVar57 = *(undefined8 *)(pfVar26 + 0x12);
                uVar56 = *(undefined8 *)(pfVar26 + 0x10);
                uVar60 = *(undefined8 *)(pfVar26 + 0x16);
                uVar58 = *(undefined8 *)(pfVar26 + 0x14);
                uVar64 = *(undefined8 *)(pfVar26 + 0x1a);
                uVar61 = *(undefined8 *)(pfVar26 + 0x18);
                uVar66 = *(undefined8 *)(pfVar26 + 0x1e);
                uVar65 = *(undefined8 *)(pfVar26 + 0x1c);
                uVar68 = *(undefined8 *)(pfVar26 + 0x22);
                uVar67 = *(undefined8 *)(pfVar26 + 0x20);
                fVar77 = pfVar26[8];
                fVar75 = pfVar26[9];
                fVar46 = pfVar26[10];
                fVar71 = pfVar26[0xb];
                uVar51 = *(undefined8 *)(pfVar26 + 0xe);
                uVar48 = *(undefined8 *)(pfVar26 + 0xc);
                pauVar33 = local_e8;
                fVar73 = *pfVar26;
                fVar79 = pfVar26[1];
                do {
                  fVar81 = (float)*(undefined8 *)(*pauVar33 + 8);
                  fVar82 = (float)((ulong)*(undefined8 *)(*pauVar33 + 8) >> 0x20);
                  auVar21 = *pauVar33;
                  auVar20 = *pauVar33;
                  fVar78 = (float)*(undefined8 *)*pauVar33;
                  fVar80 = (float)((ulong)*(undefined8 *)*pauVar33 >> 0x20);
                  uVar31 = uVar31 + 4;
                  fVar45 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                  fVar70 = fVar78 * fVar50 + (float)uVar58 * fVar73 + (float)uVar61 * fVar79 +
                           fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar56 * fVar78 +
                           (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                  fVar72 = fVar80 * fVar59 + (float)((ulong)uVar58 >> 0x20) * fVar73 +
                           (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                           (float)((ulong)uVar48 >> 0x20) * fVar80 +
                           (float)((ulong)uVar56 >> 0x20) * fVar78 +
                           (float)((ulong)uVar65 >> 0x20) * fVar76 +
                           (float)((ulong)uVar67 >> 0x20) * fVar74;
                  fVar74 = fVar81 * fVar54 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                           fVar46 * fVar81 + (float)uVar51 * fVar80 + (float)uVar57 * fVar78 +
                           (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                  fVar76 = fVar82 * fVar55 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                           (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                           (float)((ulong)uVar51 >> 0x20) * fVar80 +
                           (float)((ulong)uVar57 >> 0x20) * fVar78 +
                           (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar45;
                  *(ulong *)(*pauVar33 + 8) = CONCAT44(fVar76,fVar74);
                  *(ulong *)*pauVar33 = CONCAT44(fVar72,fVar70);
                  pauVar33 = (undefined1 (*) [12])(pauVar33[1] + 4);
                  fVar73 = fVar82;
                  fVar79 = fVar81;
                } while (uVar31 < uVar29);
                auVar13._12_4_ = fVar82;
                auVar13._0_12_ = auVar20;
                auVar14._12_4_ = fVar82;
                auVar14._0_12_ = auVar21;
                auVar52 = NEON_ext(auVar13,auVar14,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)pfVar26 = uVar48;
                auVar6._4_4_ = fVar72;
                auVar6._0_4_ = fVar70;
                auVar6._8_4_ = fVar74;
                auVar6._12_4_ = fVar76;
                auVar7._4_4_ = fVar72;
                auVar7._0_4_ = fVar70;
                auVar7._8_4_ = fVar74;
                auVar7._12_4_ = fVar76;
                auVar52 = NEON_ext(auVar6,auVar7,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(pfVar26 + 2) = uVar48;
                lVar41 = *(long *)(param_1 + 0x148);
                uVar29 = uVar42;
                if (uVar39 != 0) {
                  memset(*local_f0 + uVar42 * 4,0,uVar40);
                  uVar29 = uVar37;
                }
                lVar41 = lVar41 + uVar30 * 0xa0;
                uVar30 = 0;
                uVar56 = *(undefined8 *)(lVar41 + 0xa0);
                fVar50 = *(float *)(lVar41 + 0xb0);
                fVar59 = *(float *)(lVar41 + 0xb4);
                fVar54 = *(float *)(lVar41 + 0xb8);
                fVar55 = *(float *)(lVar41 + 0xbc);
                fVar77 = (float)*(undefined8 *)(lVar41 + 0xa8);
                fVar75 = (float)((ulong)*(undefined8 *)(lVar41 + 0xa8) >> 0x20);
                uVar69 = *(undefined8 *)(lVar41 + 0x128);
                uVar68 = *(undefined8 *)(lVar41 + 0x120);
                uVar58 = *(undefined8 *)(lVar41 + 0xe8);
                uVar57 = *(undefined8 *)(lVar41 + 0xe0);
                uVar61 = *(undefined8 *)(lVar41 + 0xf8);
                uVar60 = *(undefined8 *)(lVar41 + 0xf0);
                uVar65 = *(undefined8 *)(lVar41 + 0x108);
                uVar64 = *(undefined8 *)(lVar41 + 0x100);
                uVar67 = *(undefined8 *)(lVar41 + 0x118);
                uVar66 = *(undefined8 *)(lVar41 + 0x110);
                auVar52 = *(undefined1 (*) [16])(lVar41 + 0xc0);
                uVar51 = *(undefined8 *)(lVar41 + 0xd8);
                uVar48 = *(undefined8 *)(lVar41 + 0xd0);
                pauVar33 = local_f0;
                fVar76 = (float)uVar56;
                fVar74 = (float)((ulong)uVar56 >> 0x20);
                do {
                  fVar70 = (float)*(undefined8 *)(*pauVar33 + 8);
                  fVar72 = (float)((ulong)*(undefined8 *)(*pauVar33 + 8) >> 0x20);
                  auVar21 = *pauVar33;
                  auVar20 = *pauVar33;
                  fVar79 = (float)*(undefined8 *)*pauVar33;
                  fVar45 = (float)((ulong)*(undefined8 *)*pauVar33 >> 0x20);
                  uVar30 = uVar30 + 4;
                  fVar46 = (float)((ulong)uVar69 >> 0x20) * fVar75;
                  fVar71 = fVar79 * fVar50 + (float)uVar60 * fVar76 + (float)uVar64 * fVar74 +
                           auVar52._0_4_ * fVar70 + (float)uVar48 * fVar45 + (float)uVar57 * fVar79
                           + (float)uVar66 * fVar77 + (float)uVar68 * fVar75;
                  fVar73 = fVar45 * fVar59 + (float)((ulong)uVar60 >> 0x20) * fVar76 +
                           (float)((ulong)uVar64 >> 0x20) * fVar74 + auVar52._4_4_ * fVar70 +
                           (float)((ulong)uVar48 >> 0x20) * fVar45 +
                           (float)((ulong)uVar57 >> 0x20) * fVar79 +
                           (float)((ulong)uVar66 >> 0x20) * fVar77 +
                           (float)((ulong)uVar68 >> 0x20) * fVar75;
                  fVar75 = fVar70 * fVar54 + (float)uVar61 * fVar76 + (float)uVar65 * fVar74 +
                           auVar52._8_4_ * fVar70 + (float)uVar51 * fVar45 + (float)uVar58 * fVar79
                           + (float)uVar67 * fVar77 + (float)uVar69 * fVar75;
                  fVar77 = fVar72 * fVar55 + (float)((ulong)uVar61 >> 0x20) * fVar76 +
                           (float)((ulong)uVar65 >> 0x20) * fVar74 + auVar52._12_4_ * fVar70 +
                           (float)((ulong)uVar51 >> 0x20) * fVar45 +
                           (float)((ulong)uVar58 >> 0x20) * fVar79 +
                           (float)((ulong)uVar67 >> 0x20) * fVar77 + fVar46;
                  *(ulong *)(*pauVar33 + 8) = CONCAT44(fVar77,fVar75);
                  *(ulong *)*pauVar33 = CONCAT44(fVar73,fVar71);
                  pauVar33 = (undefined1 (*) [12])(pauVar33[1] + 4);
                  fVar76 = fVar72;
                  fVar74 = fVar70;
                } while (uVar30 < uVar29);
                auVar15._12_4_ = fVar72;
                auVar15._0_12_ = auVar20;
                auVar16._12_4_ = fVar72;
                auVar16._0_12_ = auVar21;
                auVar52 = NEON_ext(auVar15,auVar16,8,1);
                bVar44 = bVar44 + 1;
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar41 + 0xa0) = uVar48;
                auVar8._4_4_ = fVar73;
                auVar8._0_4_ = fVar71;
                auVar8._8_4_ = fVar75;
                auVar8._12_4_ = fVar77;
                auVar9._4_4_ = fVar73;
                auVar9._0_4_ = fVar71;
                auVar9._8_4_ = fVar75;
                auVar9._12_4_ = fVar77;
                auVar52 = NEON_ext(auVar8,auVar9,8,1);
                uVar48 = NEON_rev64(auVar52._0_8_,4);
                *(undefined8 *)(lVar41 + 0xa8) = uVar48;
                bVar25 = *(byte *)(param_1 + 0x134);
              }
              bVar44 = bVar44 + 1;
              uVar30 = (ulong)bVar44;
            } while (bVar44 < bVar25);
          }
          local_100 = local_f0;
          local_108 = local_e8;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN__text__0057c9c0((int *)(param_1 + 0xe8),local_e8,pauVar32,uVar28);
            FUN__text__0057c9c0(param_1 + 0x100,local_f0,pauVar36,uVar28);
            local_108 = pauVar32;
            local_100 = pauVar36;
          }
        }
        FUN__text__0057e400(param_1 + 8,__dest,uVar42);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar28);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar28);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar28);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar25 = *(byte *)(param_1 + 0x134), bVar25 != 0)) {
          iVar5 = 4 - (uVar28 & 3);
          uVar37 = 0;
          do {
            lVar41 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar41 + uVar37 * 0xa0 + 0x90) == 2) {
              uVar40 = uVar42;
              if ((uVar28 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar28 * 4),0,(ulong)(uint)(iVar5 * 4));
                uVar40 = (ulong)(iVar5 + uVar28);
              }
              pfVar26 = (float *)(lVar41 + uVar37 * 0xa0);
              uVar30 = 0;
              fVar76 = pfVar26[2];
              fVar74 = pfVar26[3];
              fVar50 = pfVar26[4];
              fVar59 = pfVar26[5];
              fVar54 = pfVar26[6];
              fVar55 = pfVar26[7];
              uVar57 = *(undefined8 *)(pfVar26 + 0x12);
              uVar56 = *(undefined8 *)(pfVar26 + 0x10);
              uVar60 = *(undefined8 *)(pfVar26 + 0x16);
              uVar58 = *(undefined8 *)(pfVar26 + 0x14);
              uVar64 = *(undefined8 *)(pfVar26 + 0x1a);
              uVar61 = *(undefined8 *)(pfVar26 + 0x18);
              uVar66 = *(undefined8 *)(pfVar26 + 0x1e);
              uVar65 = *(undefined8 *)(pfVar26 + 0x1c);
              uVar68 = *(undefined8 *)(pfVar26 + 0x22);
              uVar67 = *(undefined8 *)(pfVar26 + 0x20);
              fVar77 = pfVar26[8];
              fVar75 = pfVar26[9];
              fVar46 = pfVar26[10];
              fVar71 = pfVar26[0xb];
              uVar51 = *(undefined8 *)(pfVar26 + 0xe);
              uVar48 = *(undefined8 *)(pfVar26 + 0xc);
              pauVar32 = __dest;
              fVar73 = *pfVar26;
              fVar79 = pfVar26[1];
              do {
                uVar69 = *(undefined8 *)((long)*pauVar32 + 8);
                fVar81 = (float)uVar69;
                fVar82 = (float)((ulong)uVar69 >> 0x20);
                auVar21 = *pauVar32;
                auVar20 = *pauVar32;
                fVar78 = (float)*(undefined8 *)*pauVar32;
                fVar80 = (float)((ulong)*(undefined8 *)*pauVar32 >> 0x20);
                uVar30 = uVar30 + 4;
                fVar45 = (float)((ulong)uVar68 >> 0x20) * fVar74;
                fVar70 = fVar78 * fVar50 + (float)uVar58 * fVar73 + (float)uVar61 * fVar79 +
                         fVar77 * fVar81 + (float)uVar48 * fVar80 + (float)uVar56 * fVar78 +
                         (float)uVar65 * fVar76 + (float)uVar67 * fVar74;
                fVar72 = fVar80 * fVar59 + (float)((ulong)uVar58 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar79 + fVar75 * fVar81 +
                         (float)((ulong)uVar48 >> 0x20) * fVar80 +
                         (float)((ulong)uVar56 >> 0x20) * fVar78 +
                         (float)((ulong)uVar65 >> 0x20) * fVar76 +
                         (float)((ulong)uVar67 >> 0x20) * fVar74;
                fVar74 = fVar81 * fVar54 + (float)uVar60 * fVar73 + (float)uVar64 * fVar79 +
                         fVar46 * fVar81 + (float)uVar51 * fVar80 + (float)uVar57 * fVar78 +
                         (float)uVar66 * fVar76 + (float)uVar68 * fVar74;
                fVar76 = fVar82 * fVar55 + (float)((ulong)uVar60 >> 0x20) * fVar73 +
                         (float)((ulong)uVar64 >> 0x20) * fVar79 + fVar71 * fVar81 +
                         (float)((ulong)uVar51 >> 0x20) * fVar80 +
                         (float)((ulong)uVar57 >> 0x20) * fVar78 +
                         (float)((ulong)uVar66 >> 0x20) * fVar76 + fVar45;
                *(ulong *)((long)*pauVar32 + 8) = CONCAT44(fVar76,fVar74);
                *(ulong *)*pauVar32 = CONCAT44(fVar72,fVar70);
                pauVar32 = (undefined1 (*) [12])(pauVar32[1] + 4);
                fVar73 = fVar82;
                fVar79 = fVar81;
              } while (uVar30 < uVar40);
              auVar17._12_4_ = fVar82;
              auVar17._0_12_ = auVar20;
              auVar18._12_4_ = fVar82;
              auVar18._0_12_ = auVar21;
              auVar52 = NEON_ext(auVar17,auVar18,8,1);
              auVar10._4_4_ = fVar72;
              auVar10._0_4_ = fVar70;
              auVar10._8_4_ = fVar74;
              auVar10._12_4_ = fVar76;
              auVar11._4_4_ = fVar72;
              auVar11._0_4_ = fVar70;
              auVar11._8_4_ = fVar74;
              auVar11._12_4_ = fVar76;
              auVar53 = NEON_ext(auVar10,auVar11,8,1);
              uVar48 = NEON_rev64(auVar52._0_8_,4);
              uVar51 = NEON_rev64(auVar53._0_8_,4);
              *(undefined8 *)pfVar26 = uVar48;
              *(undefined8 *)(pfVar26 + 2) = uVar51;
              bVar25 = *(byte *)(param_1 + 0x134);
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < bVar25);
        }
        pauVar32 = local_d8[0];
        memset(local_d8[0],0,0x1800);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar41 = 0;
          uVar37 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar41 + 0x90,__dest,uVar28);
            FUN__text__0057de44(*(long *)(param_1 + 0x140) + lVar41,__dest,local_d8[uVar37 & 1],
                                local_d8[(uint)uVar37 & 1 | 2],local_d8[(uint)uVar37 & 1 | 4],uVar28
                               );
            uVar37 = uVar37 + 1;
            lVar41 = lVar41 + 0xa8;
          } while (uVar37 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,pauVar32,uVar28);
        pauVar36 = local_d8[1];
        FUN__text__0055f3a0(param_1 + 0x7c,local_d8[1],uVar28);
        pauVar33 = local_d8[2];
        FUN__text__0055f3a0(param_1 + 0x88,local_d8[2],uVar28);
        pauVar22 = local_d8[3];
        FUN__text__0055f3a0(param_1 + 0x94,local_d8[3],uVar28);
        pauVar23 = local_b8;
        FUN__text__0055f3a0(param_1 + 0xa0,local_b8,uVar28);
        puVar24 = local_b0;
        FUN__text__0055f3a0(param_1 + 0xac,local_b0,uVar28);
        lVar41 = *param_2 + (ulong)uVar43 * 4;
        lVar27 = *(long *)(param_1 + 0x158);
        fVar50 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        fVar59 = *(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x3c);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar27 + 0x4c),
                            fVar50 * fVar62,fVar59 * fVar63,fVar50 * fVar47,fVar59 * fVar19,lVar41,
                            pauVar32,pauVar36,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar50 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          FUN__text__0057e7f0(ZEXT816(0x3f800000),ZEXT816(0x3f800000),fVar50 * fVar62,
                              fVar59 * fVar63,fVar50 * fVar47,fVar59 * fVar19,lVar41,local_e8,
                              local_f0,uVar28);
        }
        uVar37 = (ulong)uVar43;
        fVar50 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        lVar41 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 4 + uVar37 * 4;
        lVar27 = *(long *)(param_1 + 0x158);
        fVar59 = *(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x3c);
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar27 + 0x4c),
                            fVar50 * fVar47,fVar59 * fVar19,fVar50 * fVar62,fVar59 * fVar63,lVar41,
                            pauVar32,pauVar36,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar50 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          FUN__text__0057e7f0(ZEXT816(0x3f800000),ZEXT816(0x3f800000),fVar50 * fVar47,
                              fVar59 * fVar19,fVar50 * fVar62,fVar59 * fVar63,lVar41,local_e8,
                              local_f0,uVar28);
        }
        if ((uVar3 >> 0xe & 1) == 0) {
          uVar39 = 2;
        }
        else {
          FUN__text__0057e7f0(*param_2 + (ulong)*(ushort *)(param_2 + 2) * 8 + uVar37 * 4,pauVar33,
                              pauVar22,uVar28);
          uVar39 = 3;
        }
        uVar4 = uVar39 * 4;
        lVar27 = *(long *)(param_1 + 0x158);
        fVar59 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        fVar55 = *(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x40);
        fVar76 = fVar59 * fVar62;
        fVar59 = fVar59 * fVar47;
        fVar74 = fVar55 * fVar63;
        fVar55 = fVar55 * fVar19;
        fVar50 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar54 = *(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x40);
        fVar62 = fVar50 * fVar62;
        fVar50 = fVar50 * fVar47;
        lVar41 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * (ulong)uVar4 + uVar37 * 4;
        fVar47 = fVar54 * fVar63;
        fVar54 = fVar54 * fVar19;
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar27 + 0x4c),fVar76,
                            fVar74,fVar59,fVar55,lVar41,pauVar23,puVar24,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar62,fVar47,fVar50,fVar54,lVar41,local_108,
                              local_100,uVar28);
        }
        lVar41 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * (ulong)(uVar4 + 4) + uVar37 * 4;
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),fVar59,fVar55,fVar76,
                            fVar74,lVar41,pauVar23,puVar24,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar50,fVar54,fVar62,fVar47,lVar41,local_108,
                              local_100,uVar28);
        }
        lVar41 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * (ulong)(uVar4 + 8) + uVar37 * 4;
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),fVar76,fVar74,fVar59,
                            fVar55,lVar41,pauVar23,puVar24,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(0x3f800000,0x3f800000,fVar62,fVar47,fVar50,fVar54,lVar41,local_108,
                              local_100,uVar28);
        }
        lVar41 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * (ulong)(uVar4 + 0xc) + uVar37 * 4;
        FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),fVar59,fVar55,fVar76,
                            fVar74,lVar41,pauVar23,puVar24,uVar28);
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN__text__0057e7f0(ZEXT816(0x3f800000),ZEXT816(0x3f800000),fVar50,fVar54,fVar62,fVar47,
                              lVar41,local_108,local_100,uVar28);
        }
        uVar40 = (ulong)(uVar39 | 4);
        if ((uVar39 | 4) < uVar2) {
          uVar39 = uVar28 & 0x1fc;
          uVar30 = (ulong)uVar39;
          do {
            fVar47 = *(float *)(param_1 + 0x1ac);
            pfVar26 = (float *)(*param_2 + uVar40 * *(ushort *)(param_2 + 2) * 4 + uVar37 * 4);
            fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
            if (fVar62 == fVar47) {
              if (fVar47 != 1.0) {
                if ((uVar28 < 4) || (uVar39 == 0)) {
                  pfVar35 = pfVar26;
                  if (pfVar26 < pfVar26 + uVar42) {
LAB__text__0057a320:
                    do {
                      pfVar34 = pfVar35 + 1;
                      *pfVar35 = *pfVar35 * fVar47;
                      pfVar35 = pfVar34;
                    } while (pfVar34 < pfVar26 + uVar42);
                  }
                }
                else {
                  pfVar34 = pfVar26;
                  do {
                    pfVar35 = pfVar34 + 4;
                    *(ulong *)(pfVar34 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) * fVar47,
                                  (float)*(undefined8 *)(pfVar34 + 2) * fVar47);
                    *(ulong *)pfVar34 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar47,
                                  (float)*(undefined8 *)pfVar34 * fVar47);
                    pfVar34 = pfVar35;
                  } while (pfVar35 < pfVar26 + uVar30);
                  if (pfVar35 < pfVar26 + uVar42) goto LAB__text__0057a320;
                }
              }
            }
            else if ((uVar28 < 4) || (uVar39 == 0)) {
              pfVar34 = pfVar26;
              if (pfVar26 < pfVar26 + uVar42) goto LAB__text__0057a2c0;
            }
            else {
              fVar76 = (fVar62 - fVar47) * (1.0 / (float)uVar30);
              fVar54 = fVar76 + fVar47;
              fVar59 = fVar76 * 4.0;
              fVar55 = fVar54 + fVar76;
              fVar76 = fVar55 + fVar76;
              pfVar35 = pfVar26;
              fVar50 = fVar47;
              do {
                fVar74 = (float)*(undefined8 *)pfVar35 * fVar50;
                fVar77 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) * fVar54;
                fVar75 = (float)*(undefined8 *)(pfVar35 + 2) * fVar55;
                fVar46 = (float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) * fVar76;
                fVar50 = fVar50 + fVar59;
                fVar54 = fVar54 + fVar59;
                fVar55 = fVar55 + fVar59;
                fVar76 = fVar76 + fVar59;
                pfVar34 = pfVar35 + 4;
                *(ulong *)(pfVar35 + 2) = CONCAT44(fVar46,fVar75);
                *(ulong *)pfVar35 = CONCAT44(fVar77,fVar74);
                pfVar35 = pfVar34;
              } while (pfVar34 < pfVar26 + uVar30);
              if (pfVar34 < pfVar26 + uVar42) {
LAB__text__0057a2c0:
                fVar62 = fVar62 - fVar47;
                do {
                  fVar50 = *pfVar34 * fVar47;
                  fVar47 = fVar47 + fVar62 * (1.0 / (float)uVar28);
                  pfVar35 = pfVar34 + 1;
                  *pfVar34 = fVar50;
                  pfVar34 = pfVar35;
                } while (pfVar35 < pfVar26 + uVar42);
              }
            }
            uVar40 = uVar40 + 1;
          } while (uVar40 != uVar2);
        }
        if ((uVar3 >> 0xf & 1) != 0) {
          if ((*(uint *)(param_2 + 1) >> 0xf & 1) == 0) {
            lVar41 = 0;
          }
          else {
            lVar41 = *param_2 +
                     (ulong)*(ushort *)(param_2 + 2) * (ulong)((*(uint *)(param_2 + 1) & 0xff) - 1)
                     * 4;
          }
          FUN__text__0057e7f0(lVar41 + uVar37 * 4,local_d8[2],local_d8[3],uVar42);
        }
        lVar41 = *(long *)(param_1 + 0x158);
        uVar43 = uVar43 + uVar28;
        uVar38 = uVar38 - uVar28;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar41 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar41 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar41 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar41 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar41 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar41 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar41 + 0x48);
        pauVar32 = local_108;
        pauVar36 = local_100;
        fVar62 = fVar63;
        fVar47 = fVar19;
      } while (uVar38 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar48 = 1;
  }
  return uVar48;
}


