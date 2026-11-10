/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00490de0; name: FUN_.text__00490de0
 */


void FUN__text__00490de0(float param_1,long param_2,long *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  float fVar19;
  
  uVar16 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  iVar5 = *(int *)(param_2 + 0x60);
  if (param_4 != 0) {
    iVar5 = param_4;
  }
  if (*(char *)(param_2 + 0xc6) != '\0' && iVar5 != 0) {
    uVar6 = *(uint *)(param_3 + 1);
    uVar18 = (ulong)uVar6;
    uVar7 = *(uint *)((long)param_3 + 0xc);
    lVar15 = *param_3;
    if (uVar6 < uVar7) {
      *(uint *)(param_3 + 1) = uVar6 + 1;
      if (lVar15 == 0) goto LAB__text__00490f9c;
    }
    else {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      if (lVar15 == 0) {
        lVar15 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
        if (lVar15 == 0) goto LAB__text__00490f9c;
        lVar10 = *param_3;
        if ((lVar10 != 0) && (lVar10 != lVar15)) {
          if (uVar6 != 0) {
            if (uVar6 == 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              lVar10 = 0x20;
              puVar13 = (undefined8 *)(lVar15 + 0x20);
              do {
                uVar11 = uVar11 + 2;
                lVar12 = *param_3 + lVar10;
                uVar8 = *(undefined8 *)(lVar12 + -0x20);
                uVar9 = *(undefined8 *)(lVar12 + -0x18);
                uVar14 = *(undefined8 *)(lVar12 + -0x10);
                *(undefined4 *)(puVar13 + -1) = *(undefined4 *)(lVar12 + -8);
                puVar13[-3] = uVar9;
                puVar13[-2] = uVar14;
                puVar13[-4] = uVar8;
                puVar4 = (undefined8 *)(*param_3 + lVar10);
                lVar10 = lVar10 + 0x40;
                uVar8 = *puVar4;
                uVar9 = puVar4[1];
                uVar14 = puVar4[2];
                *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar4 + 3);
                puVar13[1] = uVar9;
                puVar13[2] = uVar14;
                *puVar13 = uVar8;
                puVar13 = puVar13 + 8;
              } while ((uVar18 & 0xfffffffe) != uVar11);
            }
            if ((uVar6 & 1) != 0) {
              puVar13 = (undefined8 *)(*param_3 + uVar11 * 0x20);
              puVar4 = (undefined8 *)(lVar15 + uVar11 * 0x20);
              uVar8 = *puVar13;
              uVar9 = puVar13[1];
              uVar14 = puVar13[2];
              *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar13 + 3);
              puVar4[1] = uVar9;
              puVar4[2] = uVar14;
              *puVar4 = uVar8;
            }
            lVar10 = *param_3;
          }
          FUN__text__00400fc0(0,lVar10);
        }
      }
      else {
        lVar15 = FUN__text__00400fa0(0,lVar15);
        if (lVar15 == 0) goto LAB__text__00490f9c;
      }
      *param_3 = lVar15;
      *(uint *)((long)param_3 + 0xc) = uVar7;
      if (uVar7 <= uVar6) goto LAB__text__00490f9c;
      uVar18 = (ulong)*(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
    }
    puVar13 = (undefined8 *)(lVar15 + uVar18 * 0x20);
    *(int *)(puVar13 + 1) = iVar5;
    fVar19 = *(float *)(param_2 + 100);
    *puVar13 = uVar16;
    *(undefined8 *)((long)puVar13 + 0x14) = 0;
    *(undefined4 *)(puVar13 + 2) = 3;
    *(float *)((long)puVar13 + 0xc) = fVar19 * param_1;
  }
LAB__text__00490f9c:
  if (*(int *)(param_2 + 0x38) != 0) {
    piVar17 = *(int **)(param_2 + 0x30);
    do {
      iVar1 = param_4;
      if (*piVar17 != 0) {
        iVar1 = *piVar17;
      }
      if (((iVar1 != iVar5 || iVar5 == 0) || *(char *)(param_2 + 0xc6) == '\0') && iVar1 != 0) {
        uVar6 = *(uint *)(param_3 + 1);
        uVar18 = (ulong)uVar6;
        uVar7 = *(uint *)((long)param_3 + 0xc);
        lVar15 = *param_3;
        if (uVar6 < uVar7) {
          *(uint *)(param_3 + 1) = uVar6 + 1;
          if (lVar15 != 0) {
LAB__text__00490fbc:
            puVar13 = (undefined8 *)(lVar15 + uVar18 * 0x20);
            *puVar13 = uVar16;
            *(int *)(puVar13 + 1) = iVar1;
            fVar19 = *(float *)(param_2 + 100);
            *(undefined8 *)((long)puVar13 + 0x14) = 0;
            *(undefined4 *)(puVar13 + 2) = 3;
            *(float *)((long)puVar13 + 0xc) = fVar19 * param_1;
          }
        }
        else {
          iVar2 = uVar7 + (uVar7 >> 1);
          if (uVar7 == 0) {
            iVar2 = 1;
          }
          uVar7 = iVar2 + uVar7;
          if (lVar15 == 0) {
            lVar15 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
            if (lVar15 != 0) {
              lVar10 = *param_3;
              if ((lVar10 != 0) && (lVar10 != lVar15)) {
                if (uVar6 != 0) {
                  if (uVar6 < 4) {
                    lVar12 = 0;
                  }
                  else {
                    lVar10 = 0;
                    lVar12 = 0;
                    do {
                      puVar13 = (undefined8 *)(lVar15 + lVar10);
                      lVar12 = lVar12 + -4;
                      puVar4 = (undefined8 *)(*param_3 + lVar10);
                      uVar14 = puVar4[2];
                      uVar8 = *puVar4;
                      uVar9 = puVar4[1];
                      *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar4 + 3);
                      puVar13[1] = uVar9;
                      puVar13[2] = uVar14;
                      *puVar13 = uVar8;
                      lVar3 = *param_3 + lVar10;
                      uVar8 = *(undefined8 *)(lVar3 + 0x20);
                      uVar9 = *(undefined8 *)(lVar3 + 0x28);
                      uVar14 = *(undefined8 *)(lVar3 + 0x30);
                      *(undefined4 *)(puVar13 + 7) = *(undefined4 *)(lVar3 + 0x38);
                      puVar13[4] = uVar8;
                      puVar13[5] = uVar9;
                      puVar13[6] = uVar14;
                      lVar3 = *param_3 + lVar10;
                      uVar8 = *(undefined8 *)(lVar3 + 0x40);
                      uVar9 = *(undefined8 *)(lVar3 + 0x48);
                      uVar14 = *(undefined8 *)(lVar3 + 0x50);
                      *(undefined4 *)(puVar13 + 0xb) = *(undefined4 *)(lVar3 + 0x58);
                      puVar13[9] = uVar9;
                      puVar13[10] = uVar14;
                      puVar13[8] = uVar8;
                      lVar3 = *param_3 + lVar10;
                      lVar10 = lVar10 + 0x80;
                      uVar8 = *(undefined8 *)(lVar3 + 0x60);
                      uVar9 = *(undefined8 *)(lVar3 + 0x68);
                      uVar14 = *(undefined8 *)(lVar3 + 0x70);
                      *(undefined4 *)(puVar13 + 0xf) = *(undefined4 *)(lVar3 + 0x78);
                      puVar13[0xc] = uVar8;
                      puVar13[0xd] = uVar9;
                      puVar13[0xe] = uVar14;
                    } while (-lVar12 != (uVar18 & 0xfffffffc));
                    lVar12 = -lVar12;
                  }
                  if ((uVar6 & 3) != 0) {
                    uVar18 = uVar18 & 3;
                    lVar12 = lVar12 << 5;
                    do {
                      puVar13 = (undefined8 *)(lVar15 + lVar12);
                      uVar18 = uVar18 - 1;
                      puVar4 = (undefined8 *)(*param_3 + lVar12);
                      lVar12 = lVar12 + 0x20;
                      uVar14 = puVar4[2];
                      uVar8 = *puVar4;
                      uVar9 = puVar4[1];
                      *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar4 + 3);
                      puVar13[1] = uVar9;
                      puVar13[2] = uVar14;
                      *puVar13 = uVar8;
                    } while (uVar18 != 0);
                  }
                  lVar10 = *param_3;
                }
                FUN__text__00400fc0(0,lVar10);
              }
              goto LAB__text__00491190;
            }
          }
          else {
            lVar15 = FUN__text__00400fa0(0,lVar15);
            if (lVar15 != 0) {
LAB__text__00491190:
              *param_3 = lVar15;
              *(uint *)((long)param_3 + 0xc) = uVar7;
              if (uVar6 < uVar7) {
                uVar18 = (ulong)*(uint *)(param_3 + 1);
                *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
                goto LAB__text__00490fbc;
              }
            }
          }
        }
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != (int *)(*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 4));
  }
  return;
}


