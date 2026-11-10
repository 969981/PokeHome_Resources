/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057ce60; name: FUN_.text__0057ce60
 */


void FUN__text__0057ce60(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                        uint param_5)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  if (param_5 != 0) {
    lVar13 = *(long *)(param_1 + 2);
    uVar14 = *param_1;
    uVar15 = (ulong)*(ushort *)((long)param_1 + 0x316);
    uVar2 = (uint)(ushort)param_1[0xc6];
    if ((uint)*(ushort *)((long)param_1 + 0x31a) <= (uint)(ushort)param_1[0xc6]) {
      uVar2 = (uint)*(ushort *)((long)param_1 + 0x31a);
    }
    uVar16 = param_1[4];
    do {
      uVar19 = (ulong)(ushort)param_1[0xc5];
      uVar5 = uVar14 - *(ushort *)((long)param_1 + (uVar15 & 0xffff) * 2 + 0x294);
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar19 * 2 + 0x214);
      uVar6 = uVar14 - uVar12;
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      uVar5 = uVar14 - uVar16;
      if (uVar6 <= uVar14 - uVar16) {
        uVar5 = uVar6;
      }
      uVar6 = param_5;
      if (uVar5 <= param_5) {
        uVar6 = uVar5;
      }
      if (uVar6 < 4) {
        if (uVar14 == uVar12) goto LAB__text__0057d124;
LAB__text__0057cf00:
        uVar15 = (ulong)*(ushort *)((long)param_1 + 0x316);
        lVar18 = (long)param_1 + uVar15 * 2;
        if (uVar14 == *(ushort *)(lVar18 + 0x294)) goto LAB__text__0057d15c;
LAB__text__0057cf14:
        uVar16 = param_1[4];
        if (uVar16 == uVar14) {
LAB__text__0057d18c:
          uVar16 = 0;
          param_1[4] = 0;
        }
      }
      else {
        puVar9 = param_2;
        puVar10 = param_3;
        puVar11 = param_4;
        uVar14 = uVar6;
        do {
          param_2 = puVar9 + 2;
          uVar21 = *puVar9;
          puVar8 = (undefined8 *)(lVar13 + (ulong)param_1[4] * 4);
          puVar8[1] = puVar9[1];
          *puVar8 = uVar21;
          param_1[4] = param_1[4] + 4;
          uVar15 = 0;
          if ((uVar2 & 0xfffc) == 0) {
            uVar22 = 0;
            uVar21 = 0;
            uVar24 = 0;
            uVar23 = 0;
            uVar19 = 0;
            if ((short)param_1[0xc6] != 0) goto LAB__text__0057d080;
          }
          else {
            uVar24 = 0;
            uVar23 = 0;
            uVar22 = 0;
            uVar21 = 0;
            pfVar17 = (float *)(param_1 + 0x45);
            puVar20 = (ushort *)((long)param_1 + 0x29a);
            do {
              uVar15 = uVar15 + 4;
              fVar25 = pfVar17[-0x40];
              fVar34 = pfVar17[-0x3f];
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-0x43] * 4);
              uVar39 = puVar9[1];
              uVar37 = *puVar9;
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-3] * 4);
              uVar42 = puVar9[1];
              uVar41 = *puVar9;
              fVar26 = *pfVar17;
              fVar36 = pfVar17[1];
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-0x42] * 4);
              uVar31 = puVar9[1];
              uVar28 = *puVar9;
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-2] * 4);
              uVar32 = puVar9[1];
              uVar29 = *puVar9;
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-0x41] * 4);
              uVar40 = puVar9[1];
              uVar38 = *puVar9;
              fVar27 = pfVar17[-0x3e];
              fVar35 = pfVar17[-0x3d];
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-0x40] * 4);
              uVar33 = puVar9[1];
              uVar30 = *puVar9;
              uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                (float)((ulong)uVar37 >> 0x20) * fVar25 +
                                (float)((ulong)uVar28 >> 0x20) * fVar34 +
                                (float)((ulong)uVar38 >> 0x20) * fVar27 +
                                (float)((ulong)uVar30 >> 0x20) * fVar35,
                                (float)uVar23 + (float)uVar37 * fVar25 + (float)uVar28 * fVar34 +
                                (float)uVar38 * fVar27 + (float)uVar30 * fVar35);
              uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                (float)((ulong)uVar39 >> 0x20) * fVar25 +
                                (float)((ulong)uVar31 >> 0x20) * fVar34 +
                                (float)((ulong)uVar40 >> 0x20) * fVar27 +
                                (float)((ulong)uVar33 >> 0x20) * fVar35,
                                (float)uVar24 + (float)uVar39 * fVar25 + (float)uVar31 * fVar34 +
                                (float)uVar40 * fVar27 + (float)uVar33 * fVar35);
              puVar9 = (undefined8 *)(lVar13 + (ulong)puVar20[-1] * 4);
              uVar31 = puVar9[1];
              uVar28 = *puVar9;
              fVar25 = pfVar17[2];
              fVar27 = pfVar17[3];
              pfVar17 = pfVar17 + 4;
              puVar9 = (undefined8 *)(lVar13 + (ulong)*puVar20 * 4);
              uVar33 = puVar9[1];
              uVar30 = *puVar9;
              puVar20[-0x43] = puVar20[-0x43] + 4;
              puVar20[-0x42] = puVar20[-0x42] + 4;
              puVar20[-0x41] = puVar20[-0x41] + 4;
              puVar20[-0x40] = puVar20[-0x40] + 4;
              puVar20[-3] = puVar20[-3] + 4;
              puVar20[-2] = puVar20[-2] + 4;
              uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                                (float)((ulong)uVar41 >> 0x20) * fVar26 +
                                (float)((ulong)uVar29 >> 0x20) * fVar36 +
                                (float)((ulong)uVar28 >> 0x20) * fVar25 +
                                (float)((ulong)uVar30 >> 0x20) * fVar27,
                                (float)uVar21 + (float)uVar41 * fVar26 + (float)uVar29 * fVar36 +
                                (float)uVar28 * fVar25 + (float)uVar30 * fVar27);
              uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                (float)((ulong)uVar42 >> 0x20) * fVar26 +
                                (float)((ulong)uVar32 >> 0x20) * fVar36 +
                                (float)((ulong)uVar31 >> 0x20) * fVar25 +
                                (float)((ulong)uVar33 >> 0x20) * fVar27,
                                (float)uVar22 + (float)uVar42 * fVar26 + (float)uVar32 * fVar36 +
                                (float)uVar31 * fVar25 + (float)uVar33 * fVar27);
              puVar20[-1] = puVar20[-1] + 4;
              *puVar20 = *puVar20 + 4;
              puVar20 = puVar20 + 4;
            } while (uVar15 < (uVar2 & 0xfffc));
            uVar15 = uVar15 & 0xffffffff;
            uVar19 = uVar15;
            if (uVar15 < (ushort)param_1[0xc6]) {
LAB__text__0057d080:
              do {
                uVar4 = *(ushort *)((long)param_1 + uVar19 * 2 + 0x214);
                puVar9 = (undefined8 *)(lVar13 + (ulong)uVar4 * 4);
                uVar29 = puVar9[1];
                uVar28 = *puVar9;
                uVar1 = uVar19 + 1;
                fVar25 = (float)param_1[uVar19 + 5];
                *(ushort *)((long)param_1 + uVar19 * 2 + 0x214) = uVar4 + 4;
                uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                  (float)((ulong)uVar28 >> 0x20) * fVar25,
                                  (float)uVar23 + (float)uVar28 * fVar25);
                uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                  (float)((ulong)uVar29 >> 0x20) * fVar25,
                                  (float)uVar24 + (float)uVar29 * fVar25);
                uVar19 = uVar1;
              } while (uVar1 < (ushort)param_1[0xc6]);
            }
          }
          for (; uVar15 < *(ushort *)((long)param_1 + 0x31a); uVar15 = uVar15 + 1) {
            uVar4 = *(ushort *)((long)param_1 + uVar15 * 2 + 0x294);
            puVar9 = (undefined8 *)(lVar13 + (ulong)uVar4 * 4);
            uVar29 = puVar9[1];
            uVar28 = *puVar9;
            fVar25 = (float)param_1[uVar15 + 0x45];
            *(ushort *)((long)param_1 + uVar15 * 2 + 0x294) = uVar4 + 4;
            uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                              (float)((ulong)uVar28 >> 0x20) * fVar25,
                              (float)uVar21 + (float)uVar28 * fVar25);
            uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                              (float)((ulong)uVar29 >> 0x20) * fVar25,
                              (float)uVar22 + (float)uVar29 * fVar25);
          }
          uVar14 = uVar14 - 4;
          param_3 = puVar10 + 2;
          puVar10[1] = uVar24;
          *puVar10 = uVar23;
          param_4 = puVar11 + 2;
          puVar11[1] = uVar22;
          *puVar11 = uVar21;
          puVar9 = param_2;
          puVar10 = param_3;
          puVar11 = param_4;
        } while (3 < uVar14);
        uVar19 = (ulong)(ushort)param_1[0xc5];
        uVar14 = *param_1;
        if (uVar14 != *(ushort *)((long)param_1 + uVar19 * 2 + 0x214)) goto LAB__text__0057cf00;
LAB__text__0057d124:
        *(undefined2 *)((long)param_1 + uVar19 * 2 + 0x214) = 0;
        uVar3 = (ushort)param_1[0xc6];
        uVar4 = (short)param_1[0xc5] + 1;
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar4 / uVar3;
        }
        *(ushort *)(param_1 + 0xc5) = uVar4 - uVar7 * uVar3;
        uVar15 = (ulong)*(ushort *)((long)param_1 + 0x316);
        lVar18 = (long)param_1 + uVar15 * 2;
        if (uVar14 != *(ushort *)(lVar18 + 0x294)) goto LAB__text__0057cf14;
LAB__text__0057d15c:
        *(undefined2 *)(lVar18 + 0x294) = 0;
        uVar4 = *(ushort *)((long)param_1 + 0x31a);
        uVar16 = *(ushort *)((long)param_1 + 0x316) + 1 & 0xffff;
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar16 / uVar4;
        }
        uVar16 = uVar16 - uVar5 * uVar4;
        uVar15 = (ulong)uVar16;
        *(short *)((long)param_1 + 0x316) = (short)uVar16;
        uVar16 = param_1[4];
        if (uVar16 == uVar14) goto LAB__text__0057d18c;
      }
      param_5 = param_5 - uVar6;
    } while (param_5 != 0);
  }
  return;
}


