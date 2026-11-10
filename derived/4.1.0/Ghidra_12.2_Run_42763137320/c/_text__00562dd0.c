/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562dd0; name: FUN_.text__00562dd0
 */


void FUN__text__00562dd0(undefined8 param_1,long param_2,uint param_3,ulong param_4,long param_5,
                        undefined8 param_6,uint param_7,uint param_8,undefined8 param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  
  lVar1 = param_2 + 0xe8;
  if (*(char *)(lVar1 + (param_4 & 0xffffffff) * 0x1c + 0x18) == '\0') {
    return;
  }
  FUN__text__00555b10(param_2 + (param_4 & 0xffffffff) * 0x50,param_1,param_7,param_8 & 1,param_3,
                      param_5,param_9);
  if (*(int *)(lVar1 + (param_4 & 0xffffffff) * 0x1c) != 0) {
    lVar3 = param_2 + (param_4 & 0xffffffff) * 0x20;
    plVar2 = (long *)(lVar3 + 0xa0);
    uVar11 = param_7;
    if ((param_7 & 3) != 0) {
      iVar7 = 4 - (param_7 & 3);
      memset((void *)(param_5 + (ulong)param_7 * 4),0,(ulong)(uint)(iVar7 * 4));
      uVar11 = iVar7 + param_7;
    }
    uVar12 = *(uint *)(lVar3 + 0xac);
    uVar6 = param_3 >> 2;
    uVar4 = param_3 & 3;
    uVar14 = uVar12 & 1;
    if ((uVar12 - 1 == param_3) && (uVar14 != 0)) {
      uVar5 = uVar6;
      if (1 < uVar4 && uVar12 != 1) {
        uVar5 = uVar6 + 1;
      }
      pfVar10 = (float *)(*plVar2 + (ulong)(uVar5 << 4) * 4);
      pfVar15 = pfVar10 + 1;
      pfVar16 = pfVar10 + 2;
      pfVar17 = pfVar10 + 3;
    }
    else {
      pfVar10 = (float *)(*plVar2 + (ulong)(uVar6 << 4) * 4 + (ulong)uVar4 * 4);
      pfVar15 = pfVar10 + 4;
      pfVar16 = pfVar10 + 8;
      pfVar17 = pfVar10 + 0xc;
    }
    fVar25 = *pfVar10;
    fVar23 = *pfVar15;
    fVar48 = *pfVar16;
    puVar9 = (undefined8 *)0x0;
    if ((*(byte *)(lVar3 + 0xbc) & 1) != 0) {
      puVar9 = *(undefined8 **)(lVar3 + 0xb0);
    }
    fVar47 = *pfVar17;
    if (uVar11 != 0) {
      uVar28 = puVar9[1];
      uVar27 = *puVar9;
      uVar30 = puVar9[3];
      uVar29 = puVar9[2];
      uVar13 = 0;
      uVar32 = puVar9[5];
      uVar31 = puVar9[4];
      uVar34 = puVar9[7];
      uVar33 = puVar9[6];
      uVar36 = puVar9[9];
      uVar35 = puVar9[8];
      uVar38 = puVar9[0xb];
      uVar37 = puVar9[10];
      uVar40 = puVar9[0xd];
      uVar39 = puVar9[0xc];
      uVar42 = puVar9[0xf];
      uVar41 = puVar9[0xe];
      fVar26 = fVar25;
      fVar24 = fVar23;
      do {
        lVar8 = uVar13 * 4;
        uVar14 = (int)uVar13 + 4;
        uVar13 = (ulong)uVar14;
        puVar9 = (undefined8 *)(param_5 + lVar8);
        uVar46 = puVar9[1];
        uVar44 = *puVar9;
        fVar43 = (float)uVar44;
        fVar45 = (float)((ulong)uVar44 >> 0x20);
        fVar23 = (float)uVar46;
        fVar25 = (float)((ulong)uVar46 >> 0x20);
        fVar18 = (float)uVar39 * fVar48;
        fVar20 = (float)((ulong)uVar39 >> 0x20) * fVar48;
        fVar19 = (float)uVar41 * fVar47;
        fVar21 = (float)((ulong)uVar41 >> 0x20) * fVar47;
        fVar22 = (float)((ulong)uVar42 >> 0x20) * fVar47;
        fVar47 = fVar23 * (float)uVar28 + (float)uVar36 * fVar26 + (float)uVar38 * fVar24 +
                 (float)uVar30 * fVar23 + (float)uVar32 * fVar45 + (float)uVar34 * fVar43 +
                 (float)uVar40 * fVar48 + (float)uVar42 * fVar47;
        fVar48 = fVar25 * (float)((ulong)uVar28 >> 0x20) + (float)((ulong)uVar36 >> 0x20) * fVar26 +
                 (float)((ulong)uVar38 >> 0x20) * fVar24 + (float)((ulong)uVar30 >> 0x20) * fVar23 +
                 (float)((ulong)uVar32 >> 0x20) * fVar45 + (float)((ulong)uVar34 >> 0x20) * fVar43 +
                 (float)((ulong)uVar40 >> 0x20) * fVar48 + fVar22;
        puVar9 = (undefined8 *)(param_5 + lVar8);
        puVar9[1] = CONCAT44(fVar48,fVar47);
        *puVar9 = CONCAT44(fVar45 * (float)((ulong)uVar27 >> 0x20) +
                           (float)((ulong)uVar35 >> 0x20) * fVar26 +
                           (float)((ulong)uVar37 >> 0x20) * fVar24 +
                           (float)((ulong)uVar29 >> 0x20) * fVar23 +
                           (float)((ulong)uVar31 >> 0x20) * fVar45 +
                           (float)((ulong)uVar33 >> 0x20) * fVar43 + fVar20 + fVar21,
                           fVar43 * (float)uVar27 + (float)uVar35 * fVar26 + (float)uVar37 * fVar24
                           + (float)uVar29 * fVar23 + (float)uVar31 * fVar45 +
                           (float)uVar33 * fVar43 + fVar18 + fVar19);
        fVar26 = fVar25;
        fVar24 = fVar23;
      } while (uVar14 < uVar11);
      uVar12 = *(uint *)(lVar3 + 0xac);
      uVar14 = uVar12 & 1;
    }
    if ((uVar14 == 0) || (uVar12 - 1 != param_3)) {
      lVar3 = (ulong)(uVar6 << 4) * 4;
      lVar8 = (ulong)uVar4 * 4;
      *(float *)(*plVar2 + lVar3 + lVar8) = fVar25;
      lVar3 = lVar3 + lVar8;
      *(float *)(*plVar2 + lVar3 + 0x10) = fVar23;
      *(float *)(*plVar2 + lVar3 + 0x20) = fVar48;
      pfVar10 = (float *)(*plVar2 + lVar3 + 0x30);
    }
    else {
      if (1 < uVar4 && uVar12 != 1) {
        uVar6 = uVar6 + 1;
      }
      lVar3 = (ulong)(uVar6 << 4) * 4;
      *(float *)(*plVar2 + lVar3) = fVar25;
      *(float *)(*plVar2 + lVar3 + 4) = fVar23;
      *(float *)(*plVar2 + lVar3 + 8) = fVar48;
      pfVar10 = (float *)(*plVar2 + lVar3 + 0xc);
    }
    *pfVar10 = fVar47;
  }
  lVar3 = (param_4 & 0xffffffff) * 0x1c;
  FUN__text__0054f710(0x3f800000,0x3f800000,*(undefined4 *)(param_2 + lVar3 + 0x148),
                      *(undefined4 *)(lVar1 + lVar3 + 0x14),param_6,param_5,param_7);
  return;
}


