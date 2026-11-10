/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ace50; name: FUN_.text__002ace50
 */


uint * FUN__text__002ace50(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined3 uStack_53;
  undefined5 local_50;
  undefined1 local_48;
  undefined3 uStack_23;
  undefined5 uStack_20;
  
  if (param_1 != param_2) {
    uVar10 = (long)param_2 - (long)param_1;
    uVar11 = ((long)uVar10 >> 4) * -0x5555555555555555;
    if ((0x30 < (long)uVar10) && (0x5f < uVar10)) {
      uVar13 = uVar11 - 2 >> 1;
      uVar9 = uVar13;
      do {
        if ((long)uVar9 <= (long)uVar13) {
          uVar2 = uVar9 << 1 | 1;
          uVar16 = uVar9 * 2 + 2;
          puVar12 = param_1 + uVar2 * 0xc;
          if ((long)uVar16 < (long)uVar11) {
            uVar23 = *puVar12;
            uVar4 = puVar12[0xc];
            uVar25 = uVar23;
            if (uVar23 <= uVar4) {
              uVar25 = uVar4;
            }
            puVar6 = puVar12 + 0xc;
            if (uVar4 <= uVar23) {
              uVar16 = uVar2;
              puVar6 = puVar12;
            }
            puVar12 = puVar6;
            puVar6 = param_1 + uVar9 * 0xc;
            uVar23 = *puVar6;
            if (uVar23 <= uVar25) goto LAB__text__002ad3b4;
          }
          else {
            puVar6 = param_1 + uVar9 * 0xc;
            uVar23 = *puVar6;
            uVar16 = uVar2;
            if (uVar23 <= *puVar12) {
LAB__text__002ad3b4:
              uVar19 = *(undefined8 *)(puVar6 + 5);
              uVar17 = *(undefined8 *)(puVar6 + 7);
              uStack_53 = (undefined3)((ulong)uVar17 >> 0x28);
              uVar18 = *(undefined8 *)(puVar6 + 1);
              local_50 = (undefined5)*(undefined8 *)(puVar6 + 9);
              uVar20 = *(undefined8 *)(puVar6 + 3);
              do {
                while( true ) {
                  puVar8 = puVar12;
                  uVar21 = *(undefined8 *)(puVar8 + 2);
                  *(undefined8 *)puVar6 = *(undefined8 *)puVar8;
                  *(undefined8 *)(puVar6 + 2) = uVar21;
                  uVar14 = *(undefined8 *)(puVar8 + 8);
                  uVar21 = *(undefined8 *)(puVar8 + 4);
                  uVar3 = *(undefined8 *)(puVar8 + 6);
                  *(char *)(puVar6 + 10) = (char)puVar8[10];
                  *(undefined8 *)(puVar6 + 6) = uVar3;
                  *(undefined8 *)(puVar6 + 8) = uVar14;
                  *(undefined8 *)(puVar6 + 4) = uVar21;
                  if ((long)uVar13 < (long)uVar16) goto LAB__text__002ad310;
                  uVar2 = uVar16 << 1 | 1;
                  uVar16 = uVar16 * 2 + 2;
                  puVar22 = param_1 + uVar2 * 0xc;
                  puVar6 = puVar8;
                  if ((long)uVar16 < (long)uVar11) break;
                  uVar16 = uVar2;
                  puVar12 = puVar22;
                  if (*puVar22 < uVar23) goto LAB__text__002ad310;
                }
                uVar4 = *puVar22;
                uVar5 = puVar22[0xc];
                uVar25 = uVar4;
                if (uVar4 <= uVar5) {
                  uVar25 = uVar5;
                }
                puVar12 = puVar22 + 0xc;
                if (uVar5 <= uVar4) {
                  uVar16 = uVar2;
                  puVar12 = puVar22;
                }
              } while (uVar23 <= uVar25);
LAB__text__002ad310:
              *puVar8 = uVar23;
              *(undefined8 *)(puVar8 + 1) = uVar18;
              *(ulong *)((long)puVar8 + 0x21) = CONCAT53(local_50,uStack_53);
              *(undefined8 *)(puVar8 + 7) = uVar17;
              *(undefined8 *)(puVar8 + 5) = uVar19;
              *(undefined8 *)(puVar8 + 3) = uVar20;
            }
          }
        }
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    puVar12 = param_2;
    if (param_2 != param_3) {
      if ((long)uVar10 < 0x60) {
        do {
          if (*puVar12 < *param_1) {
            uVar17 = *(undefined8 *)(puVar12 + 4);
            uVar20 = *(undefined8 *)(puVar12 + 6);
            uVar18 = *(undefined8 *)(puVar12 + 8);
            uVar19 = *(undefined8 *)puVar12;
            uVar21 = *(undefined8 *)(puVar12 + 2);
            uVar3 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)param_1;
            *(undefined8 *)(puVar12 + 2) = uVar3;
            uVar23 = param_1[10];
            uVar3 = *(undefined8 *)(param_1 + 8);
            uVar14 = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)(puVar12 + 8) = uVar3;
            local_48 = (undefined1)*(undefined8 *)(puVar12 + 10);
            *(char *)(puVar12 + 10) = (char)uVar23;
            *(undefined8 *)(puVar12 + 4) = uVar14;
            *(undefined1 *)(param_1 + 10) = local_48;
            *(undefined8 *)(param_1 + 8) = uVar18;
            *(undefined8 *)(param_1 + 4) = uVar17;
            *(undefined8 *)(param_1 + 6) = uVar20;
            *(undefined8 *)param_1 = uVar19;
            *(undefined8 *)(param_1 + 2) = uVar21;
          }
          puVar12 = puVar12 + 0xc;
        } while (puVar12 != param_3);
      }
      else {
        do {
          if (*puVar12 < *param_1) {
            uVar17 = *(undefined8 *)(puVar12 + 4);
            uVar21 = *(undefined8 *)(puVar12 + 6);
            uVar20 = *(undefined8 *)(param_1 + 2);
            uVar18 = *(undefined8 *)(puVar12 + 8);
            uVar19 = *(undefined8 *)puVar12;
            uVar3 = *(undefined8 *)(puVar12 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)param_1;
            *(undefined8 *)(puVar12 + 2) = uVar20;
            uVar23 = param_1[10];
            uVar20 = *(undefined8 *)(param_1 + 6);
            uVar14 = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar20;
            *(undefined8 *)(puVar12 + 8) = uVar14;
            local_48 = (undefined1)*(undefined8 *)(puVar12 + 10);
            *(char *)(puVar12 + 10) = (char)uVar23;
            uVar23 = param_1[0xc];
            *(undefined1 *)(param_1 + 10) = local_48;
            *(undefined8 *)(param_1 + 8) = uVar18;
            *(undefined8 *)(param_1 + 4) = uVar17;
            *(undefined8 *)(param_1 + 6) = uVar21;
            *(undefined8 *)param_1 = uVar19;
            *(undefined8 *)(param_1 + 2) = uVar3;
            if (uVar11 < 3) {
              uVar9 = 1;
              uVar25 = *param_1;
              puVar6 = param_1 + 0xc;
              if (uVar25 <= uVar23) goto LAB__text__002ad024;
            }
            else {
              uVar25 = param_1[0x18];
              uVar4 = uVar23;
              if (uVar23 <= uVar25) {
                uVar4 = uVar25;
              }
              puVar6 = param_1 + 0x18;
              if (uVar25 <= uVar23) {
                puVar6 = param_1 + 0xc;
              }
              uVar9 = 1;
              if (uVar25 > uVar23) {
                uVar9 = 2;
              }
              uVar25 = *param_1;
              if (uVar25 <= uVar4) {
LAB__text__002ad024:
                uVar17 = *(undefined8 *)(param_1 + 5);
                uVar19 = *(undefined8 *)(param_1 + 7);
                uStack_53 = (undefined3)((ulong)uVar19 >> 0x28);
                uVar18 = *(undefined8 *)(param_1 + 1);
                uVar20 = *(undefined8 *)(param_1 + 3);
                local_50 = (undefined5)*(undefined8 *)(param_1 + 9);
                puVar8 = param_1;
                do {
                  while( true ) {
                    puVar22 = puVar6;
                    uVar21 = *(undefined8 *)(puVar22 + 2);
                    *(undefined8 *)puVar8 = *(undefined8 *)puVar22;
                    *(undefined8 *)(puVar8 + 2) = uVar21;
                    uVar14 = *(undefined8 *)(puVar22 + 8);
                    uVar21 = *(undefined8 *)(puVar22 + 4);
                    uVar3 = *(undefined8 *)(puVar22 + 6);
                    *(char *)(puVar8 + 10) = (char)puVar22[10];
                    *(undefined8 *)(puVar8 + 6) = uVar3;
                    *(undefined8 *)(puVar8 + 8) = uVar14;
                    *(undefined8 *)(puVar8 + 4) = uVar21;
                    if ((long)(uVar11 - 2 >> 1) < (long)uVar9) goto LAB__text__002acf40;
                    uVar13 = uVar9 << 1 | 1;
                    uVar9 = uVar9 * 2 + 2;
                    puVar7 = param_1 + uVar13 * 0xc;
                    puVar8 = puVar22;
                    if ((long)uVar9 < (long)uVar11) break;
                    puVar6 = puVar7;
                    uVar9 = uVar13;
                    if (*puVar7 < uVar25) goto LAB__text__002acf40;
                  }
                  uVar4 = *puVar7;
                  uVar5 = puVar7[0xc];
                  uVar23 = uVar4;
                  if (uVar4 <= uVar5) {
                    uVar23 = uVar5;
                  }
                  puVar6 = puVar7 + 0xc;
                  if (uVar5 <= uVar4) {
                    uVar9 = uVar13;
                    puVar6 = puVar7;
                  }
                } while (uVar25 <= uVar23);
LAB__text__002acf40:
                *puVar22 = uVar25;
                *(undefined8 *)(puVar22 + 1) = uVar18;
                *(ulong *)((long)puVar22 + 0x21) = CONCAT53(local_50,uStack_53);
                *(undefined8 *)(puVar22 + 7) = uVar19;
                *(undefined8 *)(puVar22 + 5) = uVar17;
                *(undefined8 *)(puVar22 + 3) = uVar20;
              }
            }
          }
          puVar12 = puVar12 + 0xc;
        } while (puVar12 != param_3);
      }
      puVar12 = param_3;
    }
    param_3 = puVar12;
    if (0x30 < (long)uVar10) {
      uVar10 = uVar10 / 0x30;
      do {
        uVar17 = *(undefined8 *)(param_1 + 4);
        uVar20 = *(undefined8 *)(param_1 + 6);
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar21 = *(undefined8 *)(param_1 + 10);
        uVar19 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 2);
        puVar12 = param_1;
        uVar11 = 0;
        do {
          uVar13 = uVar11 << 1 | 1;
          uVar9 = uVar11 * 2 + 2;
          puVar6 = puVar12 + uVar11 * 0xc + 0xc;
          uVar16 = uVar13;
          if ((long)uVar9 < (long)uVar10) {
            uVar16 = uVar9;
            puVar8 = puVar12 + uVar11 * 0xc + 0x18;
            if (puVar12[uVar11 * 0xc + 0x18] <= *puVar6) {
              uVar16 = uVar13;
              puVar8 = puVar6;
            }
            puVar6 = puVar8;
          }
          uVar14 = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar12 + 2) = uVar14;
          uVar24 = *(undefined8 *)(puVar6 + 8);
          uVar14 = *(undefined8 *)(puVar6 + 4);
          uVar15 = *(undefined8 *)(puVar6 + 6);
          *(char *)(puVar12 + 10) = (char)puVar6[10];
          *(undefined8 *)(puVar12 + 6) = uVar15;
          *(undefined8 *)(puVar12 + 8) = uVar24;
          *(undefined8 *)(puVar12 + 4) = uVar14;
          puVar12 = puVar6;
          uVar11 = uVar16;
        } while ((long)uVar16 <= (long)(uVar10 - 2 >> 1));
        puVar12 = param_2 + -0xc;
        local_48 = (undefined1)uVar21;
        if (puVar6 == puVar12) {
          *(undefined8 *)puVar6 = uVar19;
          *(undefined8 *)(puVar6 + 2) = uVar3;
          *(undefined1 *)(puVar6 + 10) = local_48;
          *(undefined8 *)(puVar6 + 6) = uVar20;
          *(undefined8 *)(puVar6 + 8) = uVar18;
          *(undefined8 *)(puVar6 + 4) = uVar17;
        }
        else {
          uVar21 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar6 + 2) = uVar21;
          uVar15 = *(undefined8 *)(param_2 + -4);
          uVar21 = *(undefined8 *)(param_2 + -8);
          uVar14 = *(undefined8 *)(param_2 + -6);
          *(char *)(puVar6 + 10) = (char)param_2[-2];
          *(undefined8 *)(puVar6 + 6) = uVar14;
          *(undefined8 *)(puVar6 + 8) = uVar15;
          *(undefined8 *)(puVar6 + 4) = uVar21;
          *(undefined8 *)(param_2 + -4) = uVar18;
          *(undefined8 *)(param_2 + -8) = uVar17;
          *(undefined8 *)(param_2 + -6) = uVar20;
          *(undefined1 *)(param_2 + -2) = local_48;
          *(undefined8 *)puVar12 = uVar19;
          *(undefined8 *)(param_2 + -10) = uVar3;
          uVar11 = (long)puVar6 + (0x30 - (long)param_1);
          if (0x30 < (long)uVar11) {
            uVar23 = *puVar6;
            uVar11 = uVar11 / 0x30 - 2 >> 1;
            if (param_1[uVar11 * 0xc] < uVar23) {
              uVar17 = *(undefined8 *)(puVar6 + 1);
              uVar19 = *(undefined8 *)(puVar6 + 3);
              uVar18 = *(undefined8 *)(puVar6 + 5);
              uVar20 = *(undefined8 *)(puVar6 + 7);
              uStack_23 = (undefined3)((ulong)uVar20 >> 0x28);
              uStack_20 = (undefined5)*(undefined8 *)(puVar6 + 9);
              puVar8 = param_1 + uVar11 * 0xc;
              do {
                puVar22 = puVar8;
                uVar21 = *(undefined8 *)(puVar22 + 2);
                *(undefined8 *)puVar6 = *(undefined8 *)puVar22;
                *(undefined8 *)(puVar6 + 2) = uVar21;
                uVar21 = *(undefined8 *)(puVar22 + 4);
                uVar3 = *(undefined8 *)(puVar22 + 6);
                uVar14 = *(undefined8 *)(puVar22 + 8);
                *(char *)(puVar6 + 10) = (char)puVar22[10];
                *(undefined8 *)(puVar6 + 4) = uVar21;
                *(undefined8 *)(puVar6 + 6) = uVar3;
                *(undefined8 *)(puVar6 + 8) = uVar14;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                puVar6 = puVar22;
                puVar8 = param_1 + uVar11 * 0xc;
              } while (param_1[uVar11 * 0xc] < uVar23);
              *puVar22 = uVar23;
              *(undefined8 *)(puVar22 + 5) = uVar18;
              *(undefined8 *)(puVar22 + 3) = uVar19;
              *(undefined8 *)(puVar22 + 7) = uVar20;
              *(undefined8 *)(puVar22 + 1) = uVar17;
              *(ulong *)((long)puVar22 + 0x21) = CONCAT53(uStack_20,uStack_23);
            }
          }
        }
        bVar1 = 2 < (long)uVar10;
        param_2 = puVar12;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  return param_3;
}


