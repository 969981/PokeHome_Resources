/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00560e80; name: FUN_.text__00560e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00560e80(long param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  void *__s;
  undefined4 *puVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar39;
  undefined8 uVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar50;
  undefined8 uVar49;
  float fVar51;
  float fVar53;
  undefined8 uVar52;
  float fVar54;
  float fVar56;
  undefined8 uVar55;
  float fVar57;
  float fVar59;
  undefined8 uVar58;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    param_2 = param_2 << 2;
  }
  uVar19 = (ulong)param_2;
  lVar15 = param_4 + uVar19 * 4;
  lVar2 = lVar15 + uVar19 * 4;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(float *)(param_1 + 0xb8) == 0.0) {
      bVar13 = *(float *)(param_1 + 0xb4) != 0.0;
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = false;
  }
  pcVar5 = _DAT_008a39a8;
  pcVar6 = _DAT_008a39a0;
  if (*(float *)(param_1 + 0x4c) == 50.0 && *(float *)(param_1 + 0x50) == *(float *)(param_1 + 0x4c)
     ) {
    pcVar5 = _DAT_008a3998;
    pcVar6 = _DAT_008a3990;
  }
  if (!bVar13) {
    pcVar5 = pcVar6;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    if (*(float *)(param_1 + 0xb8) == 0.0) {
      bVar13 = *(float *)(param_1 + 0xb4) != 0.0;
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = false;
  }
  pcVar6 = _DAT_008a39a8;
  pcVar12 = _DAT_008a39a0;
  if (*(float *)(param_1 + 0x8c) == 50.0 && *(float *)(param_1 + 0x90) == *(float *)(param_1 + 0x8c)
     ) {
    pcVar6 = _DAT_008a3998;
    pcVar12 = _DAT_008a3990;
  }
  if (!bVar13) {
    pcVar6 = pcVar12;
  }
  (*pcVar6)(*(undefined4 *)(param_1 + 0x390),param_1,uVar19,(int *)(param_1 + 0x58),param_4,0,lVar2)
  ;
  (*pcVar5)(*(undefined4 *)(param_1 + 0x390),param_1,uVar19,(int *)(param_1 + 0x18),lVar15,param_4,
            lVar2);
  cVar8 = *(char *)(param_1 + 0x14);
  lVar7 = param_3;
  if (cVar8 != '\0') {
    lVar7 = lVar2;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    if (param_2 != 0) {
      fVar33 = *(float *)(param_1 + 0x3c);
      uVar17 = 0;
      fVar27 = *(float *)(param_1 + 0x7c);
      fVar24 = fVar33 * 4.0;
      fVar28 = fVar27 * 4.0;
      fVar25 = *(float *)(param_1 + 0x84) + fVar27;
      fVar40 = fVar25 + fVar27;
      fVar41 = fVar40 + fVar27;
      fVar27 = fVar41 + fVar27;
      fVar29 = *(float *)(param_1 + 0x44) + fVar33;
      fVar42 = fVar29 + fVar33;
      fVar43 = fVar42 + fVar33;
      fVar33 = fVar43 + fVar33;
      do {
        iVar16 = (int)uVar17;
        lVar9 = uVar17 * 4;
        uVar14 = iVar16 + 8;
        uVar17 = (ulong)uVar14;
        lVar10 = (ulong)(iVar16 + 4) * 4;
        fVar34 = fVar29 + fVar24;
        fVar36 = fVar42 + fVar24;
        fVar37 = fVar43 + fVar24;
        fVar39 = fVar33 + fVar24;
        uVar38 = ((undefined8 *)(lVar15 + lVar9))[1];
        uVar35 = *(undefined8 *)(lVar15 + lVar9);
        uVar45 = ((undefined8 *)(lVar15 + lVar10))[1];
        uVar44 = *(undefined8 *)(lVar15 + lVar10);
        uVar47 = ((undefined8 *)(param_4 + lVar10))[1];
        uVar46 = *(undefined8 *)(param_4 + lVar10);
        fVar48 = fVar25 + fVar28;
        fVar50 = fVar40 + fVar28;
        fVar51 = fVar41 + fVar28;
        fVar53 = fVar27 + fVar28;
        fVar20 = fVar25 * fVar29;
        fVar21 = fVar40 * fVar42;
        fVar22 = fVar41 * fVar43;
        fVar23 = fVar27 * fVar33;
        uVar32 = ((undefined8 *)(param_4 + lVar9))[1];
        uVar31 = *(undefined8 *)(param_4 + lVar9);
        fVar29 = fVar34 + fVar24;
        fVar42 = fVar36 + fVar24;
        fVar43 = fVar37 + fVar24;
        fVar33 = fVar39 + fVar24;
        fVar25 = fVar48 + fVar28;
        fVar40 = fVar50 + fVar28;
        fVar41 = fVar51 + fVar28;
        fVar27 = fVar53 + fVar28;
        ((undefined8 *)(lVar7 + lVar9))[1] =
             CONCAT44(fVar23 * (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar32 >> 0x20),
                      fVar22 * (float)uVar38 * (float)uVar32);
        *(undefined8 *)(lVar7 + lVar9) =
             CONCAT44(fVar21 * (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar31 >> 0x20),
                      fVar20 * (float)uVar35 * (float)uVar31);
        ((undefined8 *)(lVar7 + lVar10))[1] =
             CONCAT44(fVar53 * fVar39 *
                      (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar47 >> 0x20),
                      fVar51 * fVar37 * (float)uVar45 * (float)uVar47);
        *(undefined8 *)(lVar7 + lVar10) =
             CONCAT44(fVar50 * fVar36 *
                      (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar46 >> 0x20),
                      fVar48 * fVar34 * (float)uVar44 * (float)uVar46);
      } while (uVar14 < param_2);
    }
  }
  else if (param_2 != 0) {
    fVar33 = *(float *)(param_1 + 0x3c);
    uVar17 = 0;
    fVar27 = *(float *)(param_1 + 0x7c);
    fVar24 = fVar33 * 4.0;
    fVar28 = fVar27 * 4.0;
    fVar25 = *(float *)(param_1 + 0x84) + fVar27;
    fVar40 = fVar25 + fVar27;
    fVar41 = fVar40 + fVar27;
    fVar27 = fVar41 + fVar27;
    fVar29 = *(float *)(param_1 + 0x44) + fVar33;
    fVar42 = fVar29 + fVar33;
    fVar43 = fVar42 + fVar33;
    fVar33 = fVar43 + fVar33;
    do {
      iVar16 = (int)uVar17;
      lVar9 = uVar17 * 4;
      uVar14 = iVar16 + 8;
      uVar17 = (ulong)uVar14;
      lVar10 = (ulong)(iVar16 + 4) * 4;
      fVar48 = fVar29 + fVar24;
      fVar50 = fVar42 + fVar24;
      fVar51 = fVar43 + fVar24;
      fVar53 = fVar33 + fVar24;
      uVar32 = ((undefined8 *)(lVar15 + lVar9))[1];
      uVar31 = *(undefined8 *)(lVar15 + lVar9);
      uVar38 = ((undefined8 *)(param_4 + lVar9))[1];
      uVar35 = *(undefined8 *)(param_4 + lVar9);
      uVar45 = ((undefined8 *)(lVar15 + lVar10))[1];
      uVar44 = *(undefined8 *)(lVar15 + lVar10);
      uVar47 = ((undefined8 *)(param_4 + lVar10))[1];
      uVar46 = *(undefined8 *)(param_4 + lVar10);
      fVar54 = fVar25 + fVar28;
      fVar56 = fVar40 + fVar28;
      fVar57 = fVar41 + fVar28;
      fVar59 = fVar27 + fVar28;
      fVar34 = (float)uVar31 * fVar29;
      fVar36 = (float)((ulong)uVar31 >> 0x20) * fVar42;
      fVar37 = (float)uVar32 * fVar43;
      fVar39 = (float)((ulong)uVar32 >> 0x20) * fVar33;
      fVar20 = (float)uVar35 * fVar25;
      fVar21 = (float)((ulong)uVar35 >> 0x20) * fVar40;
      fVar22 = (float)uVar38 * fVar41;
      fVar23 = (float)((ulong)uVar38 >> 0x20) * fVar27;
      fVar25 = fVar54 + fVar28;
      fVar40 = fVar56 + fVar28;
      fVar41 = fVar57 + fVar28;
      fVar27 = fVar59 + fVar28;
      fVar29 = fVar48 + fVar24;
      fVar42 = fVar50 + fVar24;
      fVar43 = fVar51 + fVar24;
      fVar33 = fVar53 + fVar24;
      ((undefined8 *)(lVar7 + lVar9))[1] = CONCAT44(fVar39 + fVar23,fVar37 + fVar22);
      *(undefined8 *)(lVar7 + lVar9) = CONCAT44(fVar36 + fVar21,fVar34 + fVar20);
      ((undefined8 *)(lVar7 + lVar10))[1] =
           CONCAT44((float)((ulong)uVar45 >> 0x20) * fVar53 +
                    (float)((ulong)uVar47 >> 0x20) * fVar59,
                    (float)uVar45 * fVar51 + (float)uVar47 * fVar57);
      *(undefined8 *)(lVar7 + lVar10) =
           CONCAT44((float)((ulong)uVar44 >> 0x20) * fVar50 +
                    (float)((ulong)uVar46 >> 0x20) * fVar56,
                    (float)uVar44 * fVar48 + (float)uVar46 * fVar54);
    } while (uVar14 < param_2);
  }
  if (cVar8 != '\0') {
    uVar4 = param_2 & 3;
    uVar14 = param_2;
    if ((param_2 & 3) != 0) {
      memset((void *)(lVar2 + uVar19 * 4),0,(ulong)((4 - uVar4) * 4));
      uVar14 = (4 - uVar4) + param_2;
    }
    fVar40 = (float)*(undefined8 *)(param_1 + 0xc0);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 200);
    fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
    if (uVar14 != 0) {
      uVar32 = *(undefined8 *)(param_1 + 0xd8);
      uVar31 = *(undefined8 *)(param_1 + 0xd0);
      uVar38 = *(undefined8 *)(param_1 + 0xe8);
      uVar35 = *(undefined8 *)(param_1 + 0xe0);
      uVar17 = 0;
      uVar45 = *(undefined8 *)(param_1 + 0xf8);
      uVar44 = *(undefined8 *)(param_1 + 0xf0);
      uVar47 = *(undefined8 *)(param_1 + 0x108);
      uVar46 = *(undefined8 *)(param_1 + 0x100);
      uVar52 = *(undefined8 *)(param_1 + 0x118);
      uVar49 = *(undefined8 *)(param_1 + 0x110);
      uVar58 = *(undefined8 *)(param_1 + 0x128);
      uVar55 = *(undefined8 *)(param_1 + 0x120);
      uVar61 = *(undefined8 *)(param_1 + 0x138);
      uVar60 = *(undefined8 *)(param_1 + 0x130);
      uVar63 = *(undefined8 *)(param_1 + 0x148);
      uVar62 = *(undefined8 *)(param_1 + 0x140);
      fVar27 = fVar40;
      fVar28 = fVar24;
      do {
        lVar15 = uVar17 * 4;
        uVar1 = (int)uVar17 + 4;
        uVar17 = (ulong)uVar1;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        uVar65 = puVar11[1];
        uVar64 = *puVar11;
        fVar21 = (float)uVar64;
        fVar22 = (float)((ulong)uVar64 >> 0x20);
        fVar24 = (float)uVar65;
        fVar40 = (float)((ulong)uVar65 >> 0x20);
        fVar29 = (float)uVar60 * fVar25;
        fVar43 = (float)((ulong)uVar60 >> 0x20) * fVar25;
        fVar42 = (float)uVar62 * fVar41;
        fVar33 = (float)((ulong)uVar62 >> 0x20) * fVar41;
        fVar20 = (float)((ulong)uVar63 >> 0x20) * fVar41;
        fVar41 = fVar24 * (float)uVar32 + (float)uVar52 * fVar27 + (float)uVar58 * fVar28 +
                 (float)uVar38 * fVar24 + (float)uVar45 * fVar22 + (float)uVar47 * fVar21 +
                 (float)uVar61 * fVar25 + (float)uVar63 * fVar41;
        fVar25 = fVar40 * (float)((ulong)uVar32 >> 0x20) + (float)((ulong)uVar52 >> 0x20) * fVar27 +
                 (float)((ulong)uVar58 >> 0x20) * fVar28 + (float)((ulong)uVar38 >> 0x20) * fVar24 +
                 (float)((ulong)uVar45 >> 0x20) * fVar22 + (float)((ulong)uVar47 >> 0x20) * fVar21 +
                 (float)((ulong)uVar61 >> 0x20) * fVar25 + fVar20;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        puVar11[1] = CONCAT44(fVar25,fVar41);
        *puVar11 = CONCAT44(fVar22 * (float)((ulong)uVar31 >> 0x20) +
                            (float)((ulong)uVar49 >> 0x20) * fVar27 +
                            (float)((ulong)uVar55 >> 0x20) * fVar28 +
                            (float)((ulong)uVar35 >> 0x20) * fVar24 +
                            (float)((ulong)uVar44 >> 0x20) * fVar22 +
                            (float)((ulong)uVar46 >> 0x20) * fVar21 + fVar43 + fVar33,
                            fVar21 * (float)uVar31 + (float)uVar49 * fVar27 + (float)uVar55 * fVar28
                            + (float)uVar35 * fVar24 + (float)uVar44 * fVar22 +
                            (float)uVar46 * fVar21 + fVar29 + fVar42);
        fVar27 = fVar40;
        fVar28 = fVar24;
      } while (uVar1 < uVar14);
    }
    __s = (void *)(lVar7 + uVar19 * 4);
    *(ulong *)(param_1 + 0xc0) = CONCAT44(fVar24,fVar40);
    *(ulong *)(param_1 + 200) = CONCAT44(fVar41,fVar25);
    uVar14 = param_2;
    if (uVar4 != 0) {
      memset(__s,0,(ulong)((4 - uVar4) * 4));
      uVar14 = (4 - uVar4) + param_2;
    }
    fVar40 = (float)*(undefined8 *)(param_1 + 0x150);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x158);
    fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
    if (uVar14 != 0) {
      uVar32 = *(undefined8 *)(param_1 + 0x168);
      uVar31 = *(undefined8 *)(param_1 + 0x160);
      uVar38 = *(undefined8 *)(param_1 + 0x178);
      uVar35 = *(undefined8 *)(param_1 + 0x170);
      uVar19 = 0;
      uVar45 = *(undefined8 *)(param_1 + 0x188);
      uVar44 = *(undefined8 *)(param_1 + 0x180);
      uVar47 = *(undefined8 *)(param_1 + 0x198);
      uVar46 = *(undefined8 *)(param_1 + 400);
      uVar52 = *(undefined8 *)(param_1 + 0x1a8);
      uVar49 = *(undefined8 *)(param_1 + 0x1a0);
      uVar58 = *(undefined8 *)(param_1 + 0x1b8);
      uVar55 = *(undefined8 *)(param_1 + 0x1b0);
      uVar61 = *(undefined8 *)(param_1 + 0x1c8);
      uVar60 = *(undefined8 *)(param_1 + 0x1c0);
      uVar63 = *(undefined8 *)(param_1 + 0x1d8);
      uVar62 = *(undefined8 *)(param_1 + 0x1d0);
      fVar27 = fVar40;
      fVar28 = fVar24;
      do {
        lVar15 = uVar19 * 4;
        uVar1 = (int)uVar19 + 4;
        uVar19 = (ulong)uVar1;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        uVar65 = puVar11[1];
        uVar64 = *puVar11;
        fVar21 = (float)uVar64;
        fVar22 = (float)((ulong)uVar64 >> 0x20);
        fVar24 = (float)uVar65;
        fVar40 = (float)((ulong)uVar65 >> 0x20);
        fVar29 = (float)uVar60 * fVar25;
        fVar43 = (float)((ulong)uVar60 >> 0x20) * fVar25;
        fVar42 = (float)uVar62 * fVar41;
        fVar33 = (float)((ulong)uVar62 >> 0x20) * fVar41;
        fVar20 = (float)((ulong)uVar63 >> 0x20) * fVar41;
        fVar41 = fVar24 * (float)uVar32 + (float)uVar52 * fVar27 + (float)uVar58 * fVar28 +
                 (float)uVar38 * fVar24 + (float)uVar45 * fVar22 + (float)uVar47 * fVar21 +
                 (float)uVar61 * fVar25 + (float)uVar63 * fVar41;
        fVar25 = fVar40 * (float)((ulong)uVar32 >> 0x20) + (float)((ulong)uVar52 >> 0x20) * fVar27 +
                 (float)((ulong)uVar58 >> 0x20) * fVar28 + (float)((ulong)uVar38 >> 0x20) * fVar24 +
                 (float)((ulong)uVar45 >> 0x20) * fVar22 + (float)((ulong)uVar47 >> 0x20) * fVar21 +
                 (float)((ulong)uVar61 >> 0x20) * fVar25 + fVar20;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        puVar11[1] = CONCAT44(fVar25,fVar41);
        *puVar11 = CONCAT44(fVar22 * (float)((ulong)uVar31 >> 0x20) +
                            (float)((ulong)uVar49 >> 0x20) * fVar27 +
                            (float)((ulong)uVar55 >> 0x20) * fVar28 +
                            (float)((ulong)uVar35 >> 0x20) * fVar24 +
                            (float)((ulong)uVar44 >> 0x20) * fVar22 +
                            (float)((ulong)uVar46 >> 0x20) * fVar21 + fVar43 + fVar33,
                            fVar21 * (float)uVar31 + (float)uVar49 * fVar27 + (float)uVar55 * fVar28
                            + (float)uVar35 * fVar24 + (float)uVar44 * fVar22 +
                            (float)uVar46 * fVar21 + fVar29 + fVar42);
        fVar27 = fVar40;
        fVar28 = fVar24;
      } while (uVar1 < uVar14);
    }
    *(ulong *)(param_1 + 0x150) = CONCAT44(fVar24,fVar40);
    *(ulong *)(param_1 + 0x158) = CONCAT44(fVar41,fVar25);
    uVar14 = param_2;
    if (uVar4 != 0) {
      memset(__s,0,(ulong)((4 - uVar4) * 4));
      uVar14 = (4 - uVar4) + param_2;
    }
    fVar40 = (float)*(undefined8 *)(param_1 + 0x1e0);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x1e8);
    fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
    if (uVar14 != 0) {
      uVar32 = *(undefined8 *)(param_1 + 0x1f8);
      uVar31 = *(undefined8 *)(param_1 + 0x1f0);
      uVar38 = *(undefined8 *)(param_1 + 0x208);
      uVar35 = *(undefined8 *)(param_1 + 0x200);
      uVar19 = 0;
      uVar45 = *(undefined8 *)(param_1 + 0x218);
      uVar44 = *(undefined8 *)(param_1 + 0x210);
      uVar47 = *(undefined8 *)(param_1 + 0x228);
      uVar46 = *(undefined8 *)(param_1 + 0x220);
      uVar52 = *(undefined8 *)(param_1 + 0x238);
      uVar49 = *(undefined8 *)(param_1 + 0x230);
      uVar58 = *(undefined8 *)(param_1 + 0x248);
      uVar55 = *(undefined8 *)(param_1 + 0x240);
      uVar61 = *(undefined8 *)(param_1 + 600);
      uVar60 = *(undefined8 *)(param_1 + 0x250);
      uVar63 = *(undefined8 *)(param_1 + 0x268);
      uVar62 = *(undefined8 *)(param_1 + 0x260);
      fVar27 = fVar40;
      fVar28 = fVar24;
      do {
        lVar15 = uVar19 * 4;
        uVar4 = (int)uVar19 + 4;
        uVar19 = (ulong)uVar4;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        uVar65 = puVar11[1];
        uVar64 = *puVar11;
        fVar21 = (float)uVar64;
        fVar22 = (float)((ulong)uVar64 >> 0x20);
        fVar24 = (float)uVar65;
        fVar40 = (float)((ulong)uVar65 >> 0x20);
        fVar29 = (float)uVar60 * fVar25;
        fVar43 = (float)((ulong)uVar60 >> 0x20) * fVar25;
        fVar42 = (float)uVar62 * fVar41;
        fVar33 = (float)((ulong)uVar62 >> 0x20) * fVar41;
        fVar20 = (float)((ulong)uVar63 >> 0x20) * fVar41;
        fVar41 = fVar24 * (float)uVar32 + (float)uVar52 * fVar27 + (float)uVar58 * fVar28 +
                 (float)uVar38 * fVar24 + (float)uVar45 * fVar22 + (float)uVar47 * fVar21 +
                 (float)uVar61 * fVar25 + (float)uVar63 * fVar41;
        fVar25 = fVar40 * (float)((ulong)uVar32 >> 0x20) + (float)((ulong)uVar52 >> 0x20) * fVar27 +
                 (float)((ulong)uVar58 >> 0x20) * fVar28 + (float)((ulong)uVar38 >> 0x20) * fVar24 +
                 (float)((ulong)uVar45 >> 0x20) * fVar22 + (float)((ulong)uVar47 >> 0x20) * fVar21 +
                 (float)((ulong)uVar61 >> 0x20) * fVar25 + fVar20;
        puVar11 = (undefined8 *)(lVar7 + lVar15);
        puVar11[1] = CONCAT44(fVar25,fVar41);
        *puVar11 = CONCAT44(fVar22 * (float)((ulong)uVar31 >> 0x20) +
                            (float)((ulong)uVar49 >> 0x20) * fVar27 +
                            (float)((ulong)uVar55 >> 0x20) * fVar28 +
                            (float)((ulong)uVar35 >> 0x20) * fVar24 +
                            (float)((ulong)uVar44 >> 0x20) * fVar22 +
                            (float)((ulong)uVar46 >> 0x20) * fVar21 + fVar43 + fVar33,
                            fVar21 * (float)uVar31 + (float)uVar49 * fVar27 + (float)uVar55 * fVar28
                            + (float)uVar35 * fVar24 + (float)uVar44 * fVar22 +
                            (float)uVar46 * fVar21 + fVar29 + fVar42);
        fVar27 = fVar40;
        fVar28 = fVar24;
      } while (uVar4 < uVar14);
    }
    *(ulong *)(param_1 + 0x1e0) = CONCAT44(fVar24,fVar40);
    *(ulong *)(param_1 + 0x1e8) = CONCAT44(fVar41,fVar25);
    if (param_2 != 0) {
      lVar15 = 0;
      puVar18 = (undefined4 *)(lVar7 + 0x2c);
      do {
        puVar3 = (undefined4 *)(param_3 + lVar15);
        lVar15 = lVar15 + 0x10;
        uVar26 = puVar18[-4];
        *puVar3 = puVar18[-8];
        puVar3[1] = uVar26;
        uVar26 = *puVar18;
        uVar30 = puVar18[4];
        puVar18 = puVar18 + 0x10;
        puVar3[2] = uVar26;
        puVar3[3] = uVar30;
      } while ((uint)lVar15 < param_2);
    }
  }
  return;
}


