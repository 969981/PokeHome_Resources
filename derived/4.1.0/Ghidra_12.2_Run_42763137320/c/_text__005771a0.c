/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005771a0; name: FUN_.text__005771a0
 */


undefined8 FUN__text__005771a0(long param_1,long *param_2)

{
  long lVar1;
  undefined1 (*__s) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*__dest) [12];
  int *piVar3;
  uint uVar4;
  undefined1 (*pauVar5) [12];
  undefined1 (*pauVar6) [12];
  int iVar7;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  float fVar28;
  bool bVar29;
  undefined1 (*__src) [12];
  byte bVar30;
  float *pfVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [12];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  byte bVar41;
  long lVar42;
  ulong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
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
  undefined1 (*local_a8 [3]) [12];
  
  __src = (undefined1 (*) [12])
          (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                    (*(long **)(param_1 + 0x160),(ulong)*(byte *)(param_1 + 0x138) * 0x400 + 0x1000,
                     0x715356,0x3fa);
  if (__src == (undefined1 (*) [12])0x0) {
    uVar47 = 0x34;
  }
  else {
    __s = (undefined1 (*) [12])(__src[0xaa] + 8);
    pauVar2 = __src + 0x100;
    bVar29 = *(char *)(param_1 + 0x138) != '\0';
    pauVar5 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      pauVar5 = (undefined1 (*) [12])(__src[0x1aa] + 8);
    }
    pauVar6 = (undefined1 (*) [12])0x0;
    if (bVar29) {
      pauVar6 = (undefined1 (*) [12])(__src[0x155] + 4);
    }
    uVar34 = (uint)*(ushort *)((long)param_2 + 0x12);
    fVar59 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar46 = 1.0 - fVar59 * fVar59;
    fVar22 = SQRT(fVar46);
    if (fVar46 <= 0.0) {
      fVar22 = 0.0;
    }
    local_a8[0] = __s;
    local_a8[1] = pauVar2;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar38 = 0;
      __dest = (undefined1 (*) [12])(__src[0x55] + 4);
      piVar3 = (int *)(param_1 + 0xb8);
      fVar46 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar49 = 1.0 - fVar46 * fVar46;
      fVar23 = SQRT(fVar49);
      if (fVar49 <= 0.0) {
        fVar23 = 0.0;
      }
      do {
        uVar32 = uVar34;
        if (0xff < uVar34) {
          uVar32 = 0x100;
        }
        uVar43 = (ulong)uVar32;
        FUN__text__0057e570(param_2,uVar43,uVar38);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar30 = *(byte *)(param_1 + 0x134), bVar30 != 0)) {
          iVar7 = 4 - (uVar32 & 3);
          uVar39 = 0;
          do {
            lVar42 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar42 + uVar39 * 0xa0 + 0x90) == 3) {
              uVar40 = uVar43;
              if ((uVar32 & 3) != 0) {
                memset(*__src + (ulong)uVar32 * 4,0,(ulong)(uint)(iVar7 * 4));
                uVar40 = (ulong)(iVar7 + uVar32);
              }
              pfVar31 = (float *)(lVar42 + uVar39 * 0xa0);
              uVar35 = 0;
              fVar72 = pfVar31[2];
              fVar70 = pfVar31[3];
              fVar49 = pfVar31[4];
              fVar26 = pfVar31[5];
              fVar27 = pfVar31[6];
              fVar28 = pfVar31[7];
              uVar53 = *(undefined8 *)(pfVar31 + 0x12);
              uVar52 = *(undefined8 *)(pfVar31 + 0x10);
              uVar57 = *(undefined8 *)(pfVar31 + 0x16);
              uVar54 = *(undefined8 *)(pfVar31 + 0x14);
              uVar60 = *(undefined8 *)(pfVar31 + 0x1a);
              uVar58 = *(undefined8 *)(pfVar31 + 0x18);
              uVar62 = *(undefined8 *)(pfVar31 + 0x1e);
              uVar61 = *(undefined8 *)(pfVar31 + 0x1c);
              uVar64 = *(undefined8 *)(pfVar31 + 0x22);
              uVar63 = *(undefined8 *)(pfVar31 + 0x20);
              auVar48 = *(undefined1 (*) [16])(pfVar31 + 8);
              uVar50 = *(undefined8 *)(pfVar31 + 0xe);
              uVar47 = *(undefined8 *)(pfVar31 + 0xc);
              pauVar37 = __src;
              fVar55 = *pfVar31;
              fVar56 = pfVar31[1];
              do {
                fVar67 = (float)*(undefined8 *)(*pauVar37 + 8);
                fVar69 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                auVar25 = *pauVar37;
                auVar24 = *pauVar37;
                fVar71 = (float)*(undefined8 *)*pauVar37;
                fVar45 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar44 = (float)((ulong)uVar64 >> 0x20) * fVar70;
                fVar66 = fVar71 * fVar49 + (float)uVar54 * fVar55 + (float)uVar58 * fVar56 +
                         auVar48._0_4_ * fVar67 + (float)uVar47 * fVar45 + (float)uVar52 * fVar71 +
                         (float)uVar61 * fVar72 + (float)uVar63 * fVar70;
                fVar68 = fVar45 * fVar26 + (float)((ulong)uVar54 >> 0x20) * fVar55 +
                         (float)((ulong)uVar58 >> 0x20) * fVar56 + auVar48._4_4_ * fVar67 +
                         (float)((ulong)uVar47 >> 0x20) * fVar45 +
                         (float)((ulong)uVar52 >> 0x20) * fVar71 +
                         (float)((ulong)uVar61 >> 0x20) * fVar72 +
                         (float)((ulong)uVar63 >> 0x20) * fVar70;
                fVar70 = fVar67 * fVar27 + (float)uVar57 * fVar55 + (float)uVar60 * fVar56 +
                         auVar48._8_4_ * fVar67 + (float)uVar50 * fVar45 + (float)uVar53 * fVar71 +
                         (float)uVar62 * fVar72 + (float)uVar64 * fVar70;
                fVar72 = fVar69 * fVar28 + (float)((ulong)uVar57 >> 0x20) * fVar55 +
                         (float)((ulong)uVar60 >> 0x20) * fVar56 + auVar48._12_4_ * fVar67 +
                         (float)((ulong)uVar50 >> 0x20) * fVar45 +
                         (float)((ulong)uVar53 >> 0x20) * fVar71 +
                         (float)((ulong)uVar62 >> 0x20) * fVar72 + fVar44;
                *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar72,fVar70);
                *(ulong *)*pauVar37 = CONCAT44(fVar68,fVar66);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar55 = fVar69;
                fVar56 = fVar67;
              } while (uVar35 < uVar40);
              auVar14._12_4_ = fVar69;
              auVar14._0_12_ = auVar24;
              auVar15._12_4_ = fVar69;
              auVar15._0_12_ = auVar25;
              auVar48 = NEON_ext(auVar14,auVar15,8,1);
              uVar47 = NEON_rev64(auVar48._0_8_,4);
              *(undefined8 *)pfVar31 = uVar47;
              auVar48._4_4_ = fVar68;
              auVar48._0_4_ = fVar66;
              auVar48._8_4_ = fVar70;
              auVar48._12_4_ = fVar72;
              auVar51._4_4_ = fVar68;
              auVar51._0_4_ = fVar66;
              auVar51._8_4_ = fVar70;
              auVar51._12_4_ = fVar72;
              auVar48 = NEON_ext(auVar48,auVar51,8,1);
              uVar47 = NEON_rev64(auVar48._0_8_,4);
              *(undefined8 *)(pfVar31 + 2) = uVar47;
              bVar30 = *(byte *)(param_1 + 0x134);
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 < bVar30);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(__dest,__src,(ulong)(uVar32 << 2));
          iVar7 = *piVar3;
        }
        else {
          FUN__text__0057c9c0((int *)(param_1 + 0xd0),__src,__dest,uVar32);
          iVar7 = *piVar3;
        }
        if (iVar7 != 0) {
          FUN__text__0057c820(piVar3,__src,uVar32);
        }
        if (((*(char *)(param_1 + 0x138) != '\0') &&
            (FUN__text__0057ce60(*(undefined8 *)(param_1 + 0x150),__src,pauVar6,pauVar5,uVar32),
            *(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0')) &&
           (bVar30 = *(byte *)(param_1 + 0x134), bVar30 != 0)) {
          uVar4 = uVar32 & 3;
          uVar40 = 0;
          uVar39 = (ulong)((4 - uVar4) * 4);
          uVar35 = (ulong)((4 - uVar4) + uVar32);
          bVar41 = 0;
          do {
            lVar42 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar42 + uVar40 * 0xa0 + 0x90) == 1) {
              uVar33 = uVar43;
              if (uVar4 != 0) {
                memset(*pauVar6 + uVar43 * 4,0,uVar39);
                uVar33 = uVar35;
              }
              pfVar31 = (float *)(lVar42 + uVar40 * 0xa0);
              uVar36 = 0;
              fVar72 = pfVar31[2];
              fVar70 = pfVar31[3];
              fVar49 = pfVar31[4];
              fVar26 = pfVar31[5];
              fVar27 = pfVar31[6];
              fVar28 = pfVar31[7];
              uVar53 = *(undefined8 *)(pfVar31 + 0x12);
              uVar52 = *(undefined8 *)(pfVar31 + 0x10);
              uVar57 = *(undefined8 *)(pfVar31 + 0x16);
              uVar54 = *(undefined8 *)(pfVar31 + 0x14);
              uVar60 = *(undefined8 *)(pfVar31 + 0x1a);
              uVar58 = *(undefined8 *)(pfVar31 + 0x18);
              uVar62 = *(undefined8 *)(pfVar31 + 0x1e);
              uVar61 = *(undefined8 *)(pfVar31 + 0x1c);
              uVar64 = *(undefined8 *)(pfVar31 + 0x22);
              uVar63 = *(undefined8 *)(pfVar31 + 0x20);
              fVar55 = pfVar31[8];
              fVar56 = pfVar31[9];
              fVar44 = pfVar31[10];
              fVar66 = pfVar31[0xb];
              uVar50 = *(undefined8 *)(pfVar31 + 0xe);
              uVar47 = *(undefined8 *)(pfVar31 + 0xc);
              pauVar37 = pauVar6;
              fVar68 = *pfVar31;
              fVar71 = pfVar31[1];
              do {
                fVar75 = (float)*(undefined8 *)(*pauVar37 + 8);
                fVar76 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                auVar25 = *pauVar37;
                auVar24 = *pauVar37;
                fVar73 = (float)*(undefined8 *)*pauVar37;
                fVar74 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar36 = uVar36 + 4;
                fVar45 = (float)((ulong)uVar64 >> 0x20) * fVar70;
                fVar67 = fVar73 * fVar49 + (float)uVar54 * fVar68 + (float)uVar58 * fVar71 +
                         fVar55 * fVar75 + (float)uVar47 * fVar74 + (float)uVar52 * fVar73 +
                         (float)uVar61 * fVar72 + (float)uVar63 * fVar70;
                fVar69 = fVar74 * fVar26 + (float)((ulong)uVar54 >> 0x20) * fVar68 +
                         (float)((ulong)uVar58 >> 0x20) * fVar71 + fVar56 * fVar75 +
                         (float)((ulong)uVar47 >> 0x20) * fVar74 +
                         (float)((ulong)uVar52 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar72 +
                         (float)((ulong)uVar63 >> 0x20) * fVar70;
                fVar70 = fVar75 * fVar27 + (float)uVar57 * fVar68 + (float)uVar60 * fVar71 +
                         fVar44 * fVar75 + (float)uVar50 * fVar74 + (float)uVar53 * fVar73 +
                         (float)uVar62 * fVar72 + (float)uVar64 * fVar70;
                fVar72 = fVar76 * fVar28 + (float)((ulong)uVar57 >> 0x20) * fVar68 +
                         (float)((ulong)uVar60 >> 0x20) * fVar71 + fVar66 * fVar75 +
                         (float)((ulong)uVar50 >> 0x20) * fVar74 +
                         (float)((ulong)uVar53 >> 0x20) * fVar73 +
                         (float)((ulong)uVar62 >> 0x20) * fVar72 + fVar45;
                *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar72,fVar70);
                *(ulong *)*pauVar37 = CONCAT44(fVar69,fVar67);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar68 = fVar76;
                fVar71 = fVar75;
              } while (uVar36 < uVar33);
              auVar16._12_4_ = fVar76;
              auVar16._0_12_ = auVar24;
              auVar17._12_4_ = fVar76;
              auVar17._0_12_ = auVar25;
              auVar48 = NEON_ext(auVar16,auVar17,8,1);
              auVar8._4_4_ = fVar69;
              auVar8._0_4_ = fVar67;
              auVar8._8_4_ = fVar70;
              auVar8._12_4_ = fVar72;
              auVar9._4_4_ = fVar69;
              auVar9._0_4_ = fVar67;
              auVar9._8_4_ = fVar70;
              auVar9._12_4_ = fVar72;
              auVar51 = NEON_ext(auVar8,auVar9,8,1);
              uVar47 = NEON_rev64(auVar48._0_8_,4);
              uVar50 = NEON_rev64(auVar51._0_8_,4);
              *(undefined8 *)pfVar31 = uVar47;
              *(undefined8 *)(pfVar31 + 2) = uVar50;
              lVar42 = *(long *)(param_1 + 0x148);
              uVar33 = uVar43;
              if (uVar4 != 0) {
                memset(*pauVar5 + uVar43 * 4,0,uVar39);
                uVar33 = uVar35;
              }
              lVar42 = lVar42 + uVar40 * 0xa0;
              uVar40 = 0;
              uVar52 = *(undefined8 *)(lVar42 + 0xa0);
              fVar49 = *(float *)(lVar42 + 0xb0);
              fVar26 = *(float *)(lVar42 + 0xb4);
              fVar27 = *(float *)(lVar42 + 0xb8);
              fVar28 = *(float *)(lVar42 + 0xbc);
              fVar68 = (float)*(undefined8 *)(lVar42 + 0xa8);
              fVar71 = (float)((ulong)*(undefined8 *)(lVar42 + 0xa8) >> 0x20);
              uVar65 = *(undefined8 *)(lVar42 + 0x128);
              uVar64 = *(undefined8 *)(lVar42 + 0x120);
              uVar54 = *(undefined8 *)(lVar42 + 0xe8);
              uVar53 = *(undefined8 *)(lVar42 + 0xe0);
              uVar58 = *(undefined8 *)(lVar42 + 0xf8);
              uVar57 = *(undefined8 *)(lVar42 + 0xf0);
              uVar61 = *(undefined8 *)(lVar42 + 0x108);
              uVar60 = *(undefined8 *)(lVar42 + 0x100);
              uVar63 = *(undefined8 *)(lVar42 + 0x118);
              uVar62 = *(undefined8 *)(lVar42 + 0x110);
              fVar72 = *(float *)(lVar42 + 0xc0);
              fVar70 = *(float *)(lVar42 + 0xc4);
              fVar55 = *(float *)(lVar42 + 200);
              fVar56 = *(float *)(lVar42 + 0xcc);
              uVar50 = *(undefined8 *)(lVar42 + 0xd8);
              uVar47 = *(undefined8 *)(lVar42 + 0xd0);
              pauVar37 = pauVar5;
              fVar44 = (float)uVar52;
              fVar66 = (float)((ulong)uVar52 >> 0x20);
              do {
                fVar75 = (float)*(undefined8 *)(*pauVar37 + 8);
                fVar76 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                auVar25 = *pauVar37;
                auVar24 = *pauVar37;
                fVar73 = (float)*(undefined8 *)*pauVar37;
                fVar74 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar40 = uVar40 + 4;
                fVar45 = (float)((ulong)uVar65 >> 0x20) * fVar71;
                fVar67 = fVar73 * fVar49 + (float)uVar57 * fVar44 + (float)uVar60 * fVar66 +
                         fVar72 * fVar75 + (float)uVar47 * fVar74 + (float)uVar53 * fVar73 +
                         (float)uVar62 * fVar68 + (float)uVar64 * fVar71;
                fVar69 = fVar74 * fVar26 + (float)((ulong)uVar57 >> 0x20) * fVar44 +
                         (float)((ulong)uVar60 >> 0x20) * fVar66 + fVar70 * fVar75 +
                         (float)((ulong)uVar47 >> 0x20) * fVar74 +
                         (float)((ulong)uVar53 >> 0x20) * fVar73 +
                         (float)((ulong)uVar62 >> 0x20) * fVar68 +
                         (float)((ulong)uVar64 >> 0x20) * fVar71;
                fVar71 = fVar75 * fVar27 + (float)uVar58 * fVar44 + (float)uVar61 * fVar66 +
                         fVar55 * fVar75 + (float)uVar50 * fVar74 + (float)uVar54 * fVar73 +
                         (float)uVar63 * fVar68 + (float)uVar65 * fVar71;
                fVar68 = fVar76 * fVar28 + (float)((ulong)uVar58 >> 0x20) * fVar44 +
                         (float)((ulong)uVar61 >> 0x20) * fVar66 + fVar56 * fVar75 +
                         (float)((ulong)uVar50 >> 0x20) * fVar74 +
                         (float)((ulong)uVar54 >> 0x20) * fVar73 +
                         (float)((ulong)uVar63 >> 0x20) * fVar68 + fVar45;
                *(ulong *)(*pauVar37 + 8) = CONCAT44(fVar68,fVar71);
                *(ulong *)*pauVar37 = CONCAT44(fVar69,fVar67);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar44 = fVar76;
                fVar66 = fVar75;
              } while (uVar40 < uVar33);
              auVar18._12_4_ = fVar76;
              auVar18._0_12_ = auVar24;
              auVar19._12_4_ = fVar76;
              auVar19._0_12_ = auVar25;
              auVar48 = NEON_ext(auVar18,auVar19,8,1);
              auVar10._4_4_ = fVar69;
              auVar10._0_4_ = fVar67;
              auVar10._8_4_ = fVar71;
              auVar10._12_4_ = fVar68;
              auVar11._4_4_ = fVar69;
              auVar11._0_4_ = fVar67;
              auVar11._8_4_ = fVar71;
              auVar11._12_4_ = fVar68;
              auVar51 = NEON_ext(auVar10,auVar11,8,1);
              bVar41 = bVar41 + 1;
              uVar47 = NEON_rev64(auVar48._0_8_,4);
              uVar50 = NEON_rev64(auVar51._0_8_,4);
              *(undefined8 *)(lVar42 + 0xa0) = uVar47;
              *(undefined8 *)(lVar42 + 0xa8) = uVar50;
              bVar30 = *(byte *)(param_1 + 0x134);
            }
            bVar41 = bVar41 + 1;
            uVar40 = (ulong)bVar41;
          } while (bVar41 < bVar30);
        }
        FUN__text__0057e400(param_1 + 8,__dest,uVar32);
        FUN__text__0057e400(param_1 + 0x20,__dest,uVar32);
        FUN__text__0057e400(param_1 + 0x38,__dest,uVar32);
        FUN__text__0057e400(param_1 + 0x50,__dest,uVar32);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar30 = *(byte *)(param_1 + 0x134), bVar30 != 0)) {
          iVar7 = 4 - (uVar32 & 3);
          uVar39 = 0;
          do {
            lVar42 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar42 + uVar39 * 0xa0 + 0x90) == 2) {
              uVar40 = uVar43;
              if ((uVar32 & 3) != 0) {
                memset((void *)((long)*__dest + (ulong)uVar32 * 4),0,(ulong)(uint)(iVar7 * 4));
                uVar40 = (ulong)(iVar7 + uVar32);
              }
              pfVar31 = (float *)(lVar42 + uVar39 * 0xa0);
              uVar35 = 0;
              fVar72 = pfVar31[2];
              fVar70 = pfVar31[3];
              fVar49 = pfVar31[4];
              fVar26 = pfVar31[5];
              fVar27 = pfVar31[6];
              fVar28 = pfVar31[7];
              uVar53 = *(undefined8 *)(pfVar31 + 0x12);
              uVar52 = *(undefined8 *)(pfVar31 + 0x10);
              uVar57 = *(undefined8 *)(pfVar31 + 0x16);
              uVar54 = *(undefined8 *)(pfVar31 + 0x14);
              uVar60 = *(undefined8 *)(pfVar31 + 0x1a);
              uVar58 = *(undefined8 *)(pfVar31 + 0x18);
              uVar62 = *(undefined8 *)(pfVar31 + 0x1e);
              uVar61 = *(undefined8 *)(pfVar31 + 0x1c);
              uVar64 = *(undefined8 *)(pfVar31 + 0x22);
              uVar63 = *(undefined8 *)(pfVar31 + 0x20);
              fVar55 = pfVar31[8];
              fVar56 = pfVar31[9];
              fVar44 = pfVar31[10];
              fVar66 = pfVar31[0xb];
              uVar50 = *(undefined8 *)(pfVar31 + 0xe);
              uVar47 = *(undefined8 *)(pfVar31 + 0xc);
              pauVar37 = __dest;
              fVar68 = *pfVar31;
              fVar71 = pfVar31[1];
              do {
                uVar65 = *(undefined8 *)((long)*pauVar37 + 8);
                fVar75 = (float)uVar65;
                fVar76 = (float)((ulong)uVar65 >> 0x20);
                auVar25 = *pauVar37;
                auVar24 = *pauVar37;
                fVar73 = (float)*(undefined8 *)*pauVar37;
                fVar74 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
                uVar35 = uVar35 + 4;
                fVar45 = (float)((ulong)uVar64 >> 0x20) * fVar70;
                fVar67 = fVar73 * fVar49 + (float)uVar54 * fVar68 + (float)uVar58 * fVar71 +
                         fVar55 * fVar75 + (float)uVar47 * fVar74 + (float)uVar52 * fVar73 +
                         (float)uVar61 * fVar72 + (float)uVar63 * fVar70;
                fVar69 = fVar74 * fVar26 + (float)((ulong)uVar54 >> 0x20) * fVar68 +
                         (float)((ulong)uVar58 >> 0x20) * fVar71 + fVar56 * fVar75 +
                         (float)((ulong)uVar47 >> 0x20) * fVar74 +
                         (float)((ulong)uVar52 >> 0x20) * fVar73 +
                         (float)((ulong)uVar61 >> 0x20) * fVar72 +
                         (float)((ulong)uVar63 >> 0x20) * fVar70;
                fVar70 = fVar75 * fVar27 + (float)uVar57 * fVar68 + (float)uVar60 * fVar71 +
                         fVar44 * fVar75 + (float)uVar50 * fVar74 + (float)uVar53 * fVar73 +
                         (float)uVar62 * fVar72 + (float)uVar64 * fVar70;
                fVar72 = fVar76 * fVar28 + (float)((ulong)uVar57 >> 0x20) * fVar68 +
                         (float)((ulong)uVar60 >> 0x20) * fVar71 + fVar66 * fVar75 +
                         (float)((ulong)uVar50 >> 0x20) * fVar74 +
                         (float)((ulong)uVar53 >> 0x20) * fVar73 +
                         (float)((ulong)uVar62 >> 0x20) * fVar72 + fVar45;
                *(ulong *)((long)*pauVar37 + 8) = CONCAT44(fVar72,fVar70);
                *(ulong *)*pauVar37 = CONCAT44(fVar69,fVar67);
                pauVar37 = (undefined1 (*) [12])(pauVar37[1] + 4);
                fVar68 = fVar76;
                fVar71 = fVar75;
              } while (uVar35 < uVar40);
              auVar20._12_4_ = fVar76;
              auVar20._0_12_ = auVar24;
              auVar21._12_4_ = fVar76;
              auVar21._0_12_ = auVar25;
              auVar48 = NEON_ext(auVar20,auVar21,8,1);
              auVar12._4_4_ = fVar69;
              auVar12._0_4_ = fVar67;
              auVar12._8_4_ = fVar70;
              auVar12._12_4_ = fVar72;
              auVar13._4_4_ = fVar69;
              auVar13._0_4_ = fVar67;
              auVar13._8_4_ = fVar70;
              auVar13._12_4_ = fVar72;
              auVar51 = NEON_ext(auVar12,auVar13,8,1);
              uVar47 = NEON_rev64(auVar48._0_8_,4);
              uVar50 = NEON_rev64(auVar51._0_8_,4);
              *(undefined8 *)pfVar31 = uVar47;
              *(undefined8 *)(pfVar31 + 2) = uVar50;
              bVar30 = *(byte *)(param_1 + 0x134);
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 < bVar30);
        }
        memset(__s,0,0x800);
        if (*(int *)(param_1 + 0x128) != 0) {
          lVar42 = 0;
          uVar43 = 0;
          do {
            FUN__text__0057c820(*(long *)(param_1 + 0x140) + lVar42 + 0x90,__dest,uVar32);
            FUN__text__0057d600(*(long *)(param_1 + 0x140) + lVar42,__dest,local_a8[uVar43 & 1],
                                uVar32);
            uVar43 = uVar43 + 1;
            lVar42 = lVar42 + 0xa8;
          } while (uVar43 < *(uint *)(param_1 + 0x128));
        }
        FUN__text__0055f3a0(param_1 + 0x70,__s,uVar32);
        FUN__text__0055f3a0(param_1 + 0x7c,pauVar2,uVar32);
        uVar4 = *(uint *)(param_2 + 1);
        if ((uVar4 >> 0xc & 1) == 0) {
          lVar42 = 0;
        }
        else {
          lVar42 = *param_2 + (ulong)uVar38 * 4;
          fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              *(float *)(param_1 + 0x1b4) * fVar46,fVar49 * fVar59,
                              *(float *)(param_1 + 0x1b4) * fVar23,fVar49 * fVar22,lVar42,__s,
                              pauVar2,uVar32);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,*(float *)(param_1 + 0x1b0) * fVar46,
                                fVar49 * fVar59,*(float *)(param_1 + 0x1b0) * fVar23,fVar49 * fVar22
                                ,lVar42,pauVar6,pauVar5,uVar32);
          }
          lVar42 = 1;
        }
        if ((uVar4 >> 0xd & 1) != 0) {
          lVar1 = *param_2 + lVar42 * (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar38 * 4;
          fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          FUN__text__0057e7f0(*(undefined4 *)(param_1 + 0x1ac),
                              *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                              *(float *)(param_1 + 0x1b4) * fVar23,fVar49 * fVar22,
                              *(float *)(param_1 + 0x1b4) * fVar46,fVar49 * fVar59,lVar1,__s,pauVar2
                              ,uVar32);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            FUN__text__0057e7f0(0x3f800000,0x3f800000,*(float *)(param_1 + 0x1b0) * fVar23,
                                fVar49 * fVar22,*(float *)(param_1 + 0x1b0) * fVar46,fVar49 * fVar59
                                ,lVar1,pauVar6,pauVar5,uVar32);
          }
          lVar42 = lVar42 + 1;
        }
        if ((uVar4 >> 0xe & 1) != 0) {
          lVar1 = *param_2 + lVar42 * (ulong)*(ushort *)(param_2 + 2) * 4 + (ulong)uVar38 * 4;
          FUN__text__0057e7f0(lVar1,__s,pauVar2,uVar32);
          if (*(char *)(param_1 + 0x138) != '\0') {
            FUN__text__0057e7f0(lVar1,pauVar6,pauVar5,uVar32);
          }
          lVar42 = lVar42 + 1;
        }
        if ((uVar4 >> 0xf & 1) != 0) {
          FUN__text__0057e7f0(*param_2 + lVar42 * (ulong)*(ushort *)(param_2 + 2) * 4 +
                              (ulong)uVar38 * 4,__s,pauVar2,uVar32);
        }
        lVar42 = *(long *)(param_1 + 0x158);
        uVar38 = uVar32 + uVar38;
        uVar34 = uVar34 - uVar32;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar42 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar42 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar42 + 0x54);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar42 + 0x48);
        fVar46 = fVar59;
        fVar23 = fVar22;
      } while (uVar34 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar47 = 1;
  }
  return uVar47;
}


