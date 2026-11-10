/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044bf10; name: FUN_.text__0044bf10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044bf10(float param_1,undefined4 param_2,undefined4 param_3,long param_4,
                        long *param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float fVar18;
  
  pfVar10 = _DAT_008a4f40;
  if (*(int *)(param_4 + 0x28) != 0) {
    plVar15 = *(long **)(param_4 + 0x20);
    do {
      fVar18 = *(float *)(plVar15 + 2) * param_1;
      if (*pfVar10 < fVar18) {
        if (*plVar15 == -1) {
          if (*(int *)(param_6 + 0x18) != 0) {
            puVar16 = *(undefined8 **)(param_6 + 0x10);
            do {
              uVar6 = *(uint *)(param_5 + 1);
              uVar17 = (ulong)uVar6;
              uVar7 = *(uint *)((long)param_5 + 0xc);
              lVar14 = *param_5;
              if (uVar6 < uVar7) {
                *(uint *)(param_5 + 1) = uVar6 + 1;
                if (lVar14 == 0) goto LAB__text__0044c060;
LAB__text__0044c03c:
                puVar5 = (undefined8 *)(lVar14 + uVar17 * 0x20);
                *puVar5 = *puVar16;
                lVar14 = plVar15[1];
                *(float *)((long)puVar5 + 0xc) = fVar18;
                *(undefined4 *)((long)puVar5 + 0x14) = param_2;
                *(undefined4 *)(puVar5 + 3) = param_3;
                *(undefined4 *)(puVar5 + 2) = 1;
                *(int *)(puVar5 + 1) = (int)lVar14;
              }
              else {
                iVar1 = uVar7 + (uVar7 >> 1);
                if (uVar7 == 0) {
                  iVar1 = 1;
                }
                uVar7 = iVar1 + uVar7;
                if (lVar14 == 0) {
                  lVar14 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
                  if (lVar14 != 0) {
                    lVar11 = *param_5;
                    if ((lVar11 != 0) && (lVar11 != lVar14)) {
                      if (uVar6 != 0) {
                        if (uVar6 < 4) {
                          lVar12 = 0;
                        }
                        else {
                          lVar11 = 0;
                          lVar12 = 0;
                          do {
                            puVar5 = (undefined8 *)(lVar14 + lVar11);
                            lVar12 = lVar12 + -4;
                            puVar3 = (undefined8 *)(*param_5 + lVar11);
                            uVar13 = puVar3[2];
                            uVar8 = *puVar3;
                            uVar9 = puVar3[1];
                            *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar3 + 3);
                            puVar5[1] = uVar9;
                            puVar5[2] = uVar13;
                            *puVar5 = uVar8;
                            lVar4 = *param_5 + lVar11;
                            uVar8 = *(undefined8 *)(lVar4 + 0x20);
                            uVar9 = *(undefined8 *)(lVar4 + 0x28);
                            uVar13 = *(undefined8 *)(lVar4 + 0x30);
                            *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar4 + 0x38);
                            puVar5[4] = uVar8;
                            puVar5[5] = uVar9;
                            puVar5[6] = uVar13;
                            lVar4 = *param_5 + lVar11;
                            uVar8 = *(undefined8 *)(lVar4 + 0x40);
                            uVar9 = *(undefined8 *)(lVar4 + 0x48);
                            uVar13 = *(undefined8 *)(lVar4 + 0x50);
                            *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(lVar4 + 0x58);
                            puVar5[9] = uVar9;
                            puVar5[10] = uVar13;
                            puVar5[8] = uVar8;
                            lVar4 = *param_5 + lVar11;
                            lVar11 = lVar11 + 0x80;
                            uVar8 = *(undefined8 *)(lVar4 + 0x60);
                            uVar9 = *(undefined8 *)(lVar4 + 0x68);
                            uVar13 = *(undefined8 *)(lVar4 + 0x70);
                            *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(lVar4 + 0x78);
                            puVar5[0xc] = uVar8;
                            puVar5[0xd] = uVar9;
                            puVar5[0xe] = uVar13;
                          } while (-lVar12 != (uVar17 & 0xfffffffc));
                          lVar12 = -lVar12;
                        }
                        if ((uVar6 & 3) != 0) {
                          uVar17 = uVar17 & 3;
                          lVar12 = lVar12 << 5;
                          do {
                            puVar5 = (undefined8 *)(lVar14 + lVar12);
                            uVar17 = uVar17 - 1;
                            puVar3 = (undefined8 *)(*param_5 + lVar12);
                            lVar12 = lVar12 + 0x20;
                            uVar13 = puVar3[2];
                            uVar8 = *puVar3;
                            uVar9 = puVar3[1];
                            *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar3 + 3);
                            puVar5[1] = uVar9;
                            puVar5[2] = uVar13;
                            *puVar5 = uVar8;
                          } while (uVar17 != 0);
                        }
                        lVar11 = *param_5;
                      }
                      FUN__text__00400fc0(0,lVar11);
                    }
                    goto LAB__text__0044c1f0;
                  }
                }
                else {
                  lVar14 = FUN__text__00400fa0(0,lVar14);
                  if (lVar14 != 0) {
LAB__text__0044c1f0:
                    *param_5 = lVar14;
                    *(uint *)((long)param_5 + 0xc) = uVar7;
                    if (uVar6 < uVar7) {
                      uVar17 = (ulong)*(uint *)(param_5 + 1);
                      *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
                      goto LAB__text__0044c03c;
                    }
                  }
                }
              }
LAB__text__0044c060:
              puVar16 = puVar16 + 1;
            } while (puVar16 !=
                     (undefined8 *)
                     (*(long *)(param_6 + 0x10) + (ulong)*(uint *)(param_6 + 0x18) * 8));
          }
        }
        else {
          uVar6 = *(uint *)(param_5 + 1);
          uVar17 = (ulong)uVar6;
          uVar7 = *(uint *)((long)param_5 + 0xc);
          lVar14 = *param_5;
          if (uVar6 < uVar7) {
            *(uint *)(param_5 + 1) = uVar6 + 1;
            if (lVar14 != 0) {
LAB__text__0044bf74:
              plVar2 = (long *)(lVar14 + uVar17 * 0x20);
              *plVar2 = *plVar15;
              lVar14 = plVar15[1];
              *(float *)((long)plVar2 + 0xc) = fVar18;
              *(undefined4 *)((long)plVar2 + 0x14) = param_2;
              *(undefined4 *)(plVar2 + 3) = param_3;
              *(undefined4 *)(plVar2 + 2) = 1;
              *(int *)(plVar2 + 1) = (int)lVar14;
            }
          }
          else {
            iVar1 = uVar7 + (uVar7 >> 1);
            if (uVar7 == 0) {
              iVar1 = 1;
            }
            uVar7 = iVar1 + uVar7;
            if (lVar14 == 0) {
              lVar14 = FUN__text__00400f80(0,(ulong)uVar7 << 5);
              if (lVar14 != 0) {
                lVar11 = *param_5;
                if ((lVar11 != 0) && (lVar11 != lVar14)) {
                  if (uVar6 != 0) {
                    if (uVar6 < 4) {
                      lVar12 = 0;
                    }
                    else {
                      lVar11 = 0;
                      lVar12 = 0;
                      do {
                        puVar16 = (undefined8 *)(lVar14 + lVar11);
                        lVar12 = lVar12 + -4;
                        puVar5 = (undefined8 *)(*param_5 + lVar11);
                        uVar13 = puVar5[2];
                        uVar8 = *puVar5;
                        uVar9 = puVar5[1];
                        *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar5 + 3);
                        puVar16[1] = uVar9;
                        puVar16[2] = uVar13;
                        *puVar16 = uVar8;
                        lVar4 = *param_5 + lVar11;
                        uVar8 = *(undefined8 *)(lVar4 + 0x20);
                        uVar9 = *(undefined8 *)(lVar4 + 0x28);
                        uVar13 = *(undefined8 *)(lVar4 + 0x30);
                        *(undefined4 *)(puVar16 + 7) = *(undefined4 *)(lVar4 + 0x38);
                        puVar16[4] = uVar8;
                        puVar16[5] = uVar9;
                        puVar16[6] = uVar13;
                        lVar4 = *param_5 + lVar11;
                        uVar8 = *(undefined8 *)(lVar4 + 0x40);
                        uVar9 = *(undefined8 *)(lVar4 + 0x48);
                        uVar13 = *(undefined8 *)(lVar4 + 0x50);
                        *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(lVar4 + 0x58);
                        puVar16[9] = uVar9;
                        puVar16[10] = uVar13;
                        puVar16[8] = uVar8;
                        lVar4 = *param_5 + lVar11;
                        lVar11 = lVar11 + 0x80;
                        uVar8 = *(undefined8 *)(lVar4 + 0x60);
                        uVar9 = *(undefined8 *)(lVar4 + 0x68);
                        uVar13 = *(undefined8 *)(lVar4 + 0x70);
                        *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)(lVar4 + 0x78);
                        puVar16[0xc] = uVar8;
                        puVar16[0xd] = uVar9;
                        puVar16[0xe] = uVar13;
                      } while (-lVar12 != (uVar17 & 0xfffffffc));
                      lVar12 = -lVar12;
                    }
                    if ((uVar6 & 3) != 0) {
                      uVar17 = uVar17 & 3;
                      lVar12 = lVar12 << 5;
                      do {
                        puVar16 = (undefined8 *)(lVar14 + lVar12);
                        uVar17 = uVar17 - 1;
                        puVar5 = (undefined8 *)(*param_5 + lVar12);
                        lVar12 = lVar12 + 0x20;
                        uVar13 = puVar5[2];
                        uVar8 = *puVar5;
                        uVar9 = puVar5[1];
                        *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar5 + 3);
                        puVar16[1] = uVar9;
                        puVar16[2] = uVar13;
                        *puVar16 = uVar8;
                      } while (uVar17 != 0);
                    }
                    lVar11 = *param_5;
                  }
                  FUN__text__00400fc0(0,lVar11);
                }
                goto LAB__text__0044c340;
              }
            }
            else {
              lVar14 = FUN__text__00400fa0(0,lVar14);
              if (lVar14 != 0) {
LAB__text__0044c340:
                *param_5 = lVar14;
                *(uint *)((long)param_5 + 0xc) = uVar7;
                if (uVar6 < uVar7) {
                  uVar17 = (ulong)*(uint *)(param_5 + 1);
                  *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
                  goto LAB__text__0044bf74;
                }
              }
            }
          }
        }
      }
      plVar15 = plVar15 + 3;
    } while (plVar15 !=
             (long *)(*(long *)(param_4 + 0x20) + (ulong)*(uint *)(param_4 + 0x28) * 0x18));
  }
  return;
}


