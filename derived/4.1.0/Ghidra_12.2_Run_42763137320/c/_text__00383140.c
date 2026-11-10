/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00383140; name: FUN_.text__00383140
 */


uint * FUN__text__00383140(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint *puVar24;
  
  if (param_1 != param_2) {
    uVar8 = (long)param_2 - (long)param_1;
    lVar9 = (long)uVar8 >> 5;
    if ((0x20 < (long)uVar8) && (0x3f < uVar8)) {
      uVar13 = lVar9 - 2U >> 1;
      uVar12 = uVar13;
      do {
        if ((long)uVar12 <= (long)uVar13) {
          uVar14 = uVar12 << 1 | 1;
          uVar18 = uVar12 * 2 + 2;
          puVar10 = param_1 + uVar14 * 8;
          if ((long)uVar18 < lVar9) {
            uVar20 = *puVar10;
            uVar22 = puVar10[8];
            uVar6 = uVar20;
            if (uVar20 <= uVar22) {
              uVar6 = uVar22;
            }
            puVar11 = puVar10 + 8;
            if (uVar22 <= uVar20) {
              uVar18 = uVar14;
              puVar11 = puVar10;
            }
            puVar10 = puVar11;
            puVar11 = param_1 + uVar12 * 8;
            uVar20 = *puVar11;
            if (uVar20 <= uVar6) goto LAB__text__00383564;
          }
          else {
            puVar11 = param_1 + uVar12 * 8;
            uVar20 = *puVar11;
            uVar18 = uVar14;
            if (uVar20 <= *puVar10) {
LAB__text__00383564:
              uVar17 = *(undefined8 *)(puVar11 + 1);
              uVar19 = *(undefined8 *)(puVar11 + 3);
              uVar21 = *(undefined8 *)(puVar11 + 5);
              uVar6 = puVar11[7];
              do {
                while( true ) {
                  puVar24 = puVar10;
                  uVar23 = *(undefined8 *)puVar24;
                  uVar3 = *(undefined8 *)(puVar24 + 2);
                  uVar16 = *(undefined8 *)(puVar24 + 6);
                  *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar24 + 4);
                  *(undefined8 *)(puVar11 + 6) = uVar16;
                  *(undefined8 *)puVar11 = uVar23;
                  *(undefined8 *)(puVar11 + 2) = uVar3;
                  if ((long)uVar13 < (long)uVar18) goto LAB__text__003834d0;
                  uVar14 = uVar18 << 1 | 1;
                  uVar18 = uVar18 * 2 + 2;
                  puVar15 = param_1 + uVar14 * 8;
                  puVar11 = puVar24;
                  if ((long)uVar18 < lVar9) break;
                  puVar10 = puVar15;
                  uVar18 = uVar14;
                  if (*puVar15 < uVar20) goto LAB__text__003834d0;
                }
                uVar5 = *puVar15;
                uVar7 = puVar15[8];
                uVar22 = uVar5;
                if (uVar5 <= uVar7) {
                  uVar22 = uVar7;
                }
                puVar10 = puVar15 + 8;
                if (uVar7 <= uVar5) {
                  uVar18 = uVar14;
                  puVar10 = puVar15;
                }
              } while (uVar20 <= uVar22);
LAB__text__003834d0:
              *puVar24 = uVar20;
              puVar24[7] = uVar6;
              *(undefined8 *)(puVar24 + 5) = uVar21;
              *(undefined8 *)(puVar24 + 3) = uVar19;
              *(undefined8 *)(puVar24 + 1) = uVar17;
            }
          }
        }
        bVar1 = 0 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    puVar10 = param_2;
    if (param_2 != param_3) {
      if ((long)uVar8 < 0x40) {
        do {
          if (*puVar10 < *param_1) {
            uVar21 = *(undefined8 *)(param_1 + 6);
            uVar17 = *(undefined8 *)(puVar10 + 4);
            uVar3 = *(undefined8 *)(puVar10 + 6);
            uVar19 = *(undefined8 *)param_1;
            uVar16 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(puVar10 + 6) = uVar21;
            uVar21 = *(undefined8 *)puVar10;
            uVar23 = *(undefined8 *)(puVar10 + 2);
            *(undefined8 *)puVar10 = uVar19;
            *(undefined8 *)(puVar10 + 2) = uVar16;
            *(undefined8 *)(param_1 + 4) = uVar17;
            *(undefined8 *)(param_1 + 6) = uVar3;
            *(undefined8 *)param_1 = uVar21;
            *(undefined8 *)(param_1 + 2) = uVar23;
          }
          puVar10 = puVar10 + 8;
        } while (puVar10 != param_3);
      }
      else {
        do {
          if (*puVar10 < *param_1) {
            uVar21 = *(undefined8 *)(param_1 + 6);
            uVar17 = *(undefined8 *)param_1;
            uVar3 = *(undefined8 *)(param_1 + 2);
            uVar19 = *(undefined8 *)(puVar10 + 4);
            uVar16 = *(undefined8 *)(puVar10 + 6);
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(puVar10 + 6) = uVar21;
            uVar21 = *(undefined8 *)puVar10;
            uVar23 = *(undefined8 *)(puVar10 + 2);
            *(undefined8 *)puVar10 = uVar17;
            *(undefined8 *)(puVar10 + 2) = uVar3;
            *(undefined8 *)(param_1 + 4) = uVar19;
            *(undefined8 *)(param_1 + 6) = uVar16;
            *(undefined8 *)param_1 = uVar21;
            *(undefined8 *)(param_1 + 2) = uVar23;
            uVar20 = param_1[8];
            if (uVar8 == 0x40) {
              uVar12 = 1;
              uVar22 = *param_1;
              puVar11 = param_1 + 8;
              if (uVar22 <= uVar20) goto LAB__text__00383280;
            }
            else {
              uVar22 = param_1[0x10];
              uVar6 = uVar20;
              if (uVar20 <= uVar22) {
                uVar6 = uVar22;
              }
              puVar11 = param_1 + 0x10;
              if (uVar22 <= uVar20) {
                puVar11 = param_1 + 8;
              }
              uVar12 = 1;
              if (uVar22 > uVar20) {
                uVar12 = 2;
              }
              uVar22 = *param_1;
              if (uVar22 <= uVar6) {
LAB__text__00383280:
                uVar17 = *(undefined8 *)(param_1 + 1);
                uVar19 = *(undefined8 *)(param_1 + 3);
                uVar21 = *(undefined8 *)(param_1 + 5);
                uVar20 = param_1[7];
                puVar24 = param_1;
                do {
                  while( true ) {
                    puVar15 = puVar11;
                    uVar23 = *(undefined8 *)puVar15;
                    uVar3 = *(undefined8 *)(puVar15 + 2);
                    uVar16 = *(undefined8 *)(puVar15 + 6);
                    *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar15 + 4);
                    *(undefined8 *)(puVar24 + 6) = uVar16;
                    *(undefined8 *)puVar24 = uVar23;
                    *(undefined8 *)(puVar24 + 2) = uVar3;
                    if ((long)(lVar9 - 2U >> 1) < (long)uVar12) goto LAB__text__003831e0;
                    uVar13 = uVar12 << 1 | 1;
                    uVar12 = uVar12 * 2 + 2;
                    puVar2 = param_1 + uVar13 * 8;
                    puVar24 = puVar15;
                    if ((long)uVar12 < lVar9) break;
                    uVar12 = uVar13;
                    puVar11 = puVar2;
                    if (*puVar2 < uVar22) goto LAB__text__003831e0;
                  }
                  uVar5 = *puVar2;
                  uVar7 = puVar2[8];
                  uVar6 = uVar5;
                  if (uVar5 <= uVar7) {
                    uVar6 = uVar7;
                  }
                  puVar11 = puVar2 + 8;
                  if (uVar7 <= uVar5) {
                    uVar12 = uVar13;
                    puVar11 = puVar2;
                  }
                } while (uVar22 <= uVar6);
LAB__text__003831e0:
                *puVar15 = uVar22;
                puVar15[7] = uVar20;
                *(undefined8 *)(puVar15 + 5) = uVar21;
                *(undefined8 *)(puVar15 + 3) = uVar19;
                *(undefined8 *)(puVar15 + 1) = uVar17;
              }
            }
          }
          puVar10 = puVar10 + 8;
        } while (puVar10 != param_3);
      }
      puVar10 = param_3;
    }
    param_3 = puVar10;
    if (0x20 < (long)uVar8) {
      uVar8 = uVar8 >> 5;
      do {
        uVar17 = *(undefined8 *)param_1;
        uVar21 = *(undefined8 *)(param_1 + 2);
        uVar19 = *(undefined8 *)(param_1 + 4);
        uVar3 = *(undefined8 *)(param_1 + 6);
        puVar10 = param_1;
        uVar12 = 0;
        do {
          uVar18 = uVar12 << 1 | 1;
          uVar13 = uVar12 * 2 + 2;
          puVar11 = puVar10 + uVar12 * 8 + 8;
          uVar14 = uVar18;
          if ((long)uVar13 < (long)uVar8) {
            uVar14 = uVar13;
            puVar24 = puVar10 + uVar12 * 8 + 0x10;
            if (puVar10[uVar12 * 8 + 0x10] <= *puVar11) {
              uVar14 = uVar18;
              puVar24 = puVar11;
            }
            puVar11 = puVar24;
          }
          uVar16 = *(undefined8 *)puVar11;
          uVar23 = *(undefined8 *)(puVar11 + 2);
          uVar4 = *(undefined8 *)(puVar11 + 6);
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar11 + 4);
          *(undefined8 *)(puVar10 + 6) = uVar4;
          *(undefined8 *)puVar10 = uVar16;
          *(undefined8 *)(puVar10 + 2) = uVar23;
          puVar10 = puVar11;
          uVar12 = uVar14;
        } while ((long)uVar14 <= (long)(uVar8 - 2 >> 1));
        puVar10 = param_2 + -8;
        if (puVar11 == puVar10) {
          *(undefined8 *)(puVar11 + 4) = uVar19;
          *(undefined8 *)(puVar11 + 6) = uVar3;
          *(undefined8 *)puVar11 = uVar17;
          *(undefined8 *)(puVar11 + 2) = uVar21;
        }
        else {
          uVar16 = *(undefined8 *)puVar10;
          uVar23 = *(undefined8 *)(param_2 + -6);
          uVar4 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar11 + 6) = uVar4;
          *(undefined8 *)puVar11 = uVar16;
          *(undefined8 *)(puVar11 + 2) = uVar23;
          *(undefined8 *)puVar10 = uVar17;
          *(undefined8 *)(param_2 + -6) = uVar21;
          *(undefined8 *)(param_2 + -4) = uVar19;
          *(undefined8 *)(param_2 + -2) = uVar3;
          uVar12 = (long)puVar11 + (0x20 - (long)param_1);
          if (0x20 < (long)uVar12) {
            uVar20 = *puVar11;
            uVar12 = (uVar12 >> 5) - 2 >> 1;
            if (param_1[uVar12 * 8] < uVar20) {
              uVar17 = *(undefined8 *)(puVar11 + 1);
              uVar19 = *(undefined8 *)(puVar11 + 3);
              uVar21 = *(undefined8 *)(puVar11 + 5);
              uVar6 = puVar11[7];
              puVar24 = param_1 + uVar12 * 8;
              do {
                puVar15 = puVar24;
                uVar16 = *(undefined8 *)puVar15;
                uVar3 = *(undefined8 *)(puVar15 + 2);
                uVar23 = *(undefined8 *)(puVar15 + 6);
                *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar15 + 4);
                *(undefined8 *)(puVar11 + 6) = uVar23;
                *(undefined8 *)puVar11 = uVar16;
                *(undefined8 *)(puVar11 + 2) = uVar3;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                puVar11 = puVar15;
                puVar24 = param_1 + uVar12 * 8;
              } while (param_1[uVar12 * 8] < uVar20);
              *puVar15 = uVar20;
              *(undefined8 *)(puVar15 + 1) = uVar17;
              *(undefined8 *)(puVar15 + 3) = uVar19;
              *(undefined8 *)(puVar15 + 5) = uVar21;
              puVar15[7] = uVar6;
            }
          }
        }
        bVar1 = 2 < (long)uVar8;
        param_2 = puVar10;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
  }
  return param_3;
}


