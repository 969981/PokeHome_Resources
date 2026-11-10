/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d63a0; name: FUN_.text__004d63a0
 */


void FUN__text__004d63a0(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  char *pcVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x1b0) == 1) {
    *(undefined2 *)(param_1 + 0x1aa) = *(undefined2 *)(param_1 + 0x1a8);
  }
  lVar24 = *(long *)(param_1 + 8);
  if (lVar24 != 0) {
    uVar18 = (ulong)*(uint *)(param_2 + 1);
    if (*(uint *)(param_2 + 1) != 0) {
      uVar3 = (uint)(*(long *)(lVar24 + 0x1a0) != 0) & (uint)(*(ushort *)(lVar24 + 0x19c) >> 6);
      uVar5 = *(uint *)(lVar24 + 0x200);
      lVar23 = *param_2;
      uVar8 = uVar5 + uVar3;
      if (uVar8 == 0) {
        if (uVar3 != 0) {
          lVar26 = lVar23;
          do {
            lVar19 = *(long *)(lVar23 + 0x18);
            uVar8 = *(uint *)(lVar19 + 0x68);
            if (uVar8 != 0) {
              piVar12 = *(int **)(lVar19 + 0x60);
              lVar20 = (ulong)uVar8 * 0x18;
              piVar13 = piVar12;
              do {
                if (*piVar13 == 0x3850009) {
                  if (lVar20 != 0) {
                    if (piVar13 < piVar12 + (ulong)uVar8 * 6 + -6) {
                      uVar15 = *(undefined8 *)(piVar12 + (ulong)uVar8 * 6 + -6);
                      uVar21 = *(undefined8 *)(piVar12 + (ulong)uVar8 * 6 + -2);
                      *(undefined8 *)(piVar13 + 2) =
                           *(undefined8 *)(piVar12 + (ulong)uVar8 * 6 + -4);
                      *(undefined8 *)(piVar13 + 4) = uVar21;
                      *(undefined8 *)piVar13 = uVar15;
                      uVar8 = *(uint *)(lVar19 + 0x68);
                    }
                    *(uint *)(lVar19 + 0x68) = uVar8 - 1;
                    lVar26 = *param_2;
                    uVar18 = (ulong)*(uint *)(param_2 + 1);
                  }
                  break;
                }
                piVar13 = piVar13 + 6;
                lVar20 = lVar20 + -0x18;
              } while (lVar20 != 0);
            }
            lVar23 = lVar23 + 0x30;
          } while (lVar23 != lVar26 + uVar18 * 0x30);
        }
      }
      else {
        do {
          lVar26 = *(long *)(lVar23 + 0x18);
          if (uVar3 == 0) {
            uVar18 = (ulong)*(uint *)(lVar26 + 0x68);
LAB__text__004d6494:
            uVar31 = (uint)uVar18 + uVar8;
            if ((CARRY4((uint)uVar18,uVar8)) || (uVar31 <= *(uint *)(lVar26 + 0x6c)))
            goto LAB__text__004d6608;
LAB__text__004d64c0:
            lVar19 = **(long **)(lVar26 + 0x58);
            if (*(long *)(lVar26 + 0x60) == 0) {
              puVar9 = (undefined8 *)
                       (**(code **)(lVar19 + 0x10))
                                 (*(long **)(lVar26 + 0x58),(ulong)uVar31 * 0x18,0x70d345,0xcc);
              if (puVar9 != (undefined8 *)0x0) {
                puVar11 = *(undefined8 **)(lVar26 + 0x60);
                if ((puVar11 != (undefined8 *)0x0) && (puVar11 != puVar9)) {
                  if ((int)uVar18 != 0) {
                    if ((int)uVar18 == 1) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = 0;
                      lVar19 = 0x18;
                      puVar11 = puVar9;
                      do {
                        uVar17 = uVar17 + 2;
                        lVar20 = *(long *)(lVar26 + 0x60) + lVar19;
                        uVar15 = *(undefined8 *)(lVar20 + -0x18);
                        uVar21 = *(undefined8 *)(lVar20 + -8);
                        puVar11[1] = *(undefined8 *)(lVar20 + -0x10);
                        puVar11[2] = uVar21;
                        *puVar11 = uVar15;
                        puVar2 = (undefined8 *)(*(long *)(lVar26 + 0x60) + lVar19);
                        lVar19 = lVar19 + 0x30;
                        uVar15 = *puVar2;
                        uVar21 = puVar2[2];
                        puVar11[4] = puVar2[1];
                        puVar11[5] = uVar21;
                        puVar11[3] = uVar15;
                        puVar11 = puVar11 + 6;
                      } while ((uVar18 & 0xfffffffe) != uVar17);
                    }
                    if ((uVar18 & 1) != 0) {
                      puVar11 = puVar9 + uVar17 * 3;
                      puVar2 = (undefined8 *)(*(long *)(lVar26 + 0x60) + uVar17 * 0x18);
                      uVar15 = *puVar2;
                      uVar21 = puVar2[2];
                      puVar11[1] = puVar2[1];
                      puVar11[2] = uVar21;
                      *puVar11 = uVar15;
                    }
                    puVar11 = *(undefined8 **)(lVar26 + 0x60);
                  }
                  (**(code **)(**(long **)(lVar26 + 0x58) + 0x18))
                            (*(long **)(lVar26 + 0x58),puVar11);
                }
                goto LAB__text__004d6600;
              }
            }
            else {
              puVar9 = (undefined8 *)(**(code **)(lVar19 + 0x28))();
              if (puVar9 != (undefined8 *)0x0) {
LAB__text__004d6600:
                *(undefined8 **)(lVar26 + 0x60) = puVar9;
                *(uint *)(lVar26 + 0x6c) = uVar31;
                goto LAB__text__004d6608;
              }
            }
          }
          else {
            uVar31 = *(uint *)(lVar26 + 0x68);
            uVar18 = (ulong)uVar31;
            if (uVar31 != 0) {
              piVar12 = *(int **)(lVar26 + 0x60);
              lVar19 = uVar18 * 0x18;
              piVar13 = piVar12;
              do {
                if (*piVar13 == 0x3850009) {
                  if (lVar19 != 0) {
                    if (piVar13 < piVar12 + (ulong)uVar31 * 6 + -6) {
                      uVar15 = *(undefined8 *)(piVar12 + (ulong)uVar31 * 6 + -6);
                      uVar21 = *(undefined8 *)(piVar12 + (ulong)uVar31 * 6 + -2);
                      *(undefined8 *)(piVar13 + 2) =
                           *(undefined8 *)(piVar12 + (ulong)uVar31 * 6 + -4);
                      *(undefined8 *)(piVar13 + 4) = uVar21;
                      *(undefined8 *)piVar13 = uVar15;
                      uVar31 = *(uint *)(lVar26 + 0x68);
                    }
                    uVar18 = (ulong)(uVar31 - 1);
                    *(uint *)(lVar26 + 0x68) = uVar31 - 1;
                  }
                  break;
                }
                piVar13 = piVar13 + 6;
                lVar19 = lVar19 + -0x18;
              } while (lVar19 != 0);
              goto LAB__text__004d6494;
            }
            uVar31 = uVar8;
            if (*(uint *)(lVar26 + 0x6c) < uVar8) goto LAB__text__004d64c0;
LAB__text__004d6608:
            *(uint *)(lVar26 + 0x68) = uVar31;
            FUN__text__0047b0a0(lVar24,*(long *)(lVar26 + 0x60) + uVar18 * 0x18,uVar5);
            if (uVar3 != 0) {
              puVar14 = (undefined4 *)(*(long *)(lVar26 + 0x60) + (ulong)uVar5 * 0x18);
              *puVar14 = 0x3850009;
              puVar14[4] = 0;
              *(long *)(puVar14 + 2) = lVar24 + 0x68;
            }
          }
          lVar23 = lVar23 + 0x30;
        } while (lVar23 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30);
      }
    }
    for (lVar23 = *(long *)(param_1 + 0x30); lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x20)) {
      if (*(int *)(lVar23 + 0x148) != 0) {
        lVar26 = *(long *)(lVar23 + 0x140);
        do {
          *(undefined4 *)(lVar26 + 0x10c) = 0;
          lVar26 = lVar26 + 0x118;
        } while (lVar26 != *(long *)(lVar23 + 0x140) + (ulong)*(uint *)(lVar23 + 0x148) * 0x118);
      }
      uVar8 = FUN__text__0045c058(lVar23);
      if ((((uVar8 & 0xf00) == 0x300) && (1 < *(uint *)(lVar24 + 0x1b0))) &&
         (*(int *)(lVar23 + 0x194) != 3)) {
        uVar18 = (ulong)*(uint *)(param_2 + 1);
        if (*(uint *)(param_2 + 1) != 0) {
          lVar19 = *param_2;
          uVar17 = 1;
          lVar20 = *(long *)(lVar23 + 0x170);
          lVar26 = lVar19;
          do {
            if (*(uint *)(lVar23 + 0x148) != 0) {
              lVar16 = (ulong)*(uint *)(lVar23 + 0x148) * 0x118;
              plVar10 = *(long **)(lVar23 + 0x140);
              do {
                if (**(long **)(lVar26 + 0x18) == *plVar10) {
                  uVar8 = *(uint *)(plVar10 + 0x18) >> 8 & 0xf;
                  if ((uVar8 < 4) &&
                     ((uVar22 = 0, (*(uint *)(plVar10 + 0x18) & 0xff) != 0 || (uVar8 == 3))))
                  goto LAB__text__004d6a54;
                }
                plVar10 = plVar10 + 0x23;
                lVar16 = lVar16 + -0x118;
              } while (lVar16 != 0);
            }
            uVar22 = 1;
LAB__text__004d6a54:
            if ((int)uVar17 != 0) {
              uVar18 = 0;
              do {
                lVar19 = *(long *)(lVar24 + 0x1a8) + uVar18 * 0x88;
                if (lVar20 == *(long *)(lVar19 + 0x70)) {
                  uVar8 = *(uint *)(lVar23 + 0x148);
                  if (uVar8 != 0) {
                    lVar16 = (ulong)uVar8 * 0x118;
                    plVar10 = *(long **)(lVar23 + 0x140);
                    do {
                      if ((*plVar10 == **(long **)(lVar26 + 0x18)) &&
                         ((int)plVar10[2] == *(int *)(lVar19 + 0x68))) {
                        if (plVar10 != *(long **)(lVar23 + 0x140) + (ulong)uVar8 * 0x23)
                        goto LAB__text__004d6b0c;
                        break;
                      }
                      plVar10 = plVar10 + 0x23;
                      lVar16 = lVar16 + -0x118;
                    } while (lVar16 != 0);
                  }
                  plVar10 = (long *)FUN__text__0045bc90(lVar23);
LAB__text__004d6b0c:
                  if (plVar10 != (long *)0x0) {
                    uVar32 = *(undefined4 *)(lVar26 + 8);
                    *(undefined1 *)(plVar10 + 0x22) = 0;
                    plVar10[3] = lVar26;
                    *(undefined4 *)((long)plVar10 + 0x10c) = uVar32;
                    lVar25 = *(long *)(lVar26 + 0x18);
                    plVar10[5] = *(long *)(lVar25 + 8);
                    lVar19 = *(long *)(lVar25 + 0x10);
                    lVar16 = *(long *)(lVar25 + 0x18);
                    lVar27 = *(long *)(lVar25 + 0x28);
                    plVar10[8] = *(long *)(lVar25 + 0x20);
                    plVar10[9] = lVar27;
                    plVar10[6] = lVar19;
                    plVar10[7] = lVar16;
                    lVar19 = *(long *)(lVar25 + 0x30);
                    lVar16 = *(long *)(lVar25 + 0x38);
                    lVar27 = *(long *)(lVar25 + 0x48);
                    plVar10[0xc] = *(long *)(lVar25 + 0x40);
                    plVar10[0xd] = lVar27;
                    plVar10[10] = lVar19;
                    plVar10[0xb] = lVar16;
                    lVar19 = *(long *)(lVar25 + 0x50);
                    *(undefined4 *)(plVar10 + 0x11) = 0;
                    plVar10[0xe] = lVar19;
                    uVar8 = *(uint *)(lVar25 + 0x68);
                    if (*(uint *)((long)plVar10 + 0x8c) < uVar8) {
                      lVar19 = *(long *)plVar10[0xf];
                      if (plVar10[0x10] == 0) {
                        lVar19 = (**(code **)(lVar19 + 0x10))
                                           ((long *)plVar10[0xf],(ulong)uVar8 * 0x18,0x70d345,0xcc);
                        if (lVar19 != 0) {
                          if ((plVar10[0x10] != 0) && (plVar10[0x10] != lVar19)) {
                            (**(code **)(*(long *)plVar10[0xf] + 0x18))();
                          }
                          goto LAB__text__004d6bf0;
                        }
                      }
                      else {
                        lVar19 = (**(code **)(lVar19 + 0x28))();
                        if (lVar19 != 0) {
LAB__text__004d6bf0:
                          plVar10[0x10] = lVar19;
                          *(uint *)((long)plVar10 + 0x8c) = uVar8;
                          goto LAB__text__004d6bf8;
                        }
                      }
                    }
                    else {
LAB__text__004d6bf8:
                      *(uint *)(plVar10 + 0x11) = uVar8;
                      if (*(int *)(lVar25 + 0x68) != 0) {
                        lVar19 = 0;
                        uVar17 = 0;
                        do {
                          uVar17 = uVar17 + 1;
                          puVar9 = (undefined8 *)(*(long *)(lVar25 + 0x60) + lVar19);
                          puVar11 = (undefined8 *)(plVar10[0x10] + lVar19);
                          lVar19 = lVar19 + 0x18;
                          uVar15 = *puVar9;
                          uVar21 = puVar9[2];
                          puVar11[1] = puVar9[1];
                          puVar11[2] = uVar21;
                          *puVar11 = uVar15;
                        } while (uVar17 < *(uint *)(lVar25 + 0x68));
                      }
                    }
                    *(undefined4 *)(plVar10 + 0x12) = *(undefined4 *)(lVar25 + 0x70);
                    lVar19 = *(long *)(lVar25 + 0x80);
                    if ((plVar10[0x14] != 0) && ((char)plVar10[0x15] != '\0')) {
                      (**(code **)(*(long *)plVar10[0x13] + 0x18))();
                      *(undefined1 *)(plVar10 + 0x15) = 0;
                    }
                    plVar10[0x14] = lVar19;
                    plVar10[0x13] = *(long *)(lVar25 + 0x78);
                    uVar7 = *(undefined1 *)(lVar25 + 0x90);
                    *(undefined1 *)(plVar10 + 0x21) = uVar22;
                    *(undefined1 *)(plVar10 + 0x16) = uVar7;
                  }
                }
                uVar17 = (ulong)*(uint *)(lVar24 + 0x1b0);
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar17);
              lVar19 = *param_2;
              uVar18 = (ulong)*(uint *)(param_2 + 1);
            }
            lVar26 = lVar26 + 0x30;
          } while (lVar26 != lVar19 + uVar18 * 0x30);
        }
      }
      else {
        uVar8 = FUN__text__0045c058(lVar23);
        if (((uVar8 & 0xf00) == 0x300) && (*(int *)(*(long *)(param_1 + 8) + 0x1b0) != 0)) {
          iVar29 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x1a8) + 0x68);
          iVar6 = (int)param_2[1];
        }
        else {
          iVar29 = 0;
          iVar6 = (int)param_2[1];
        }
        if (iVar6 != 0) {
          lVar26 = *param_2;
          do {
            uVar8 = *(uint *)(lVar23 + 0x148);
            if (uVar8 != 0) {
              lVar19 = (ulong)uVar8 * 0x118;
              plVar10 = *(long **)(lVar23 + 0x140);
              do {
                if ((*plVar10 == **(long **)(lVar26 + 0x18)) && ((int)plVar10[2] == iVar29)) {
                  if (plVar10 != *(long **)(lVar23 + 0x140) + (ulong)uVar8 * 0x23)
                  goto LAB__text__004d6850;
                  break;
                }
                plVar10 = plVar10 + 0x23;
                lVar19 = lVar19 + -0x118;
              } while (lVar19 != 0);
            }
            plVar10 = (long *)FUN__text__0045bc90(lVar23,**(long **)(lVar26 + 0x18),iVar29);
LAB__text__004d6850:
            if (plVar10 != (long *)0x0) {
              uVar32 = *(undefined4 *)(lVar26 + 8);
              *(undefined1 *)(plVar10 + 0x22) = 0;
              plVar10[3] = lVar26;
              *(undefined4 *)((long)plVar10 + 0x10c) = uVar32;
              lVar27 = *(long *)(lVar26 + 0x18);
              plVar10[5] = *(long *)(lVar27 + 8);
              lVar19 = *(long *)(lVar27 + 0x10);
              lVar20 = *(long *)(lVar27 + 0x18);
              lVar16 = *(long *)(lVar27 + 0x28);
              plVar10[8] = *(long *)(lVar27 + 0x20);
              plVar10[9] = lVar16;
              plVar10[6] = lVar19;
              plVar10[7] = lVar20;
              lVar19 = *(long *)(lVar27 + 0x30);
              lVar20 = *(long *)(lVar27 + 0x38);
              lVar16 = *(long *)(lVar27 + 0x48);
              plVar10[0xc] = *(long *)(lVar27 + 0x40);
              plVar10[0xd] = lVar16;
              plVar10[10] = lVar19;
              plVar10[0xb] = lVar20;
              lVar19 = *(long *)(lVar27 + 0x50);
              *(undefined4 *)(plVar10 + 0x11) = 0;
              plVar10[0xe] = lVar19;
              uVar8 = *(uint *)(lVar27 + 0x68);
              if (*(uint *)((long)plVar10 + 0x8c) < uVar8) {
                lVar19 = *(long *)plVar10[0xf];
                if (plVar10[0x10] == 0) {
                  lVar19 = (**(code **)(lVar19 + 0x10))
                                     ((long *)plVar10[0xf],(ulong)uVar8 * 0x18,0x70d345,0xcc);
                  if (lVar19 != 0) {
                    if ((plVar10[0x10] != 0) && (plVar10[0x10] != lVar19)) {
                      (**(code **)(*(long *)plVar10[0xf] + 0x18))();
                    }
                    goto LAB__text__004d6934;
                  }
                }
                else {
                  lVar19 = (**(code **)(lVar19 + 0x28))();
                  if (lVar19 != 0) {
LAB__text__004d6934:
                    plVar10[0x10] = lVar19;
                    *(uint *)((long)plVar10 + 0x8c) = uVar8;
                    goto LAB__text__004d693c;
                  }
                }
              }
              else {
LAB__text__004d693c:
                *(uint *)(plVar10 + 0x11) = uVar8;
                if (*(int *)(lVar27 + 0x68) != 0) {
                  lVar19 = 0;
                  uVar18 = 0;
                  do {
                    uVar18 = uVar18 + 1;
                    puVar9 = (undefined8 *)(*(long *)(lVar27 + 0x60) + lVar19);
                    puVar11 = (undefined8 *)(plVar10[0x10] + lVar19);
                    lVar19 = lVar19 + 0x18;
                    uVar15 = *puVar9;
                    uVar21 = puVar9[2];
                    puVar11[1] = puVar9[1];
                    puVar11[2] = uVar21;
                    *puVar11 = uVar15;
                  } while (uVar18 < *(uint *)(lVar27 + 0x68));
                }
              }
              *(undefined4 *)(plVar10 + 0x12) = *(undefined4 *)(lVar27 + 0x70);
              lVar19 = *(long *)(lVar27 + 0x80);
              if ((plVar10[0x14] != 0) && ((char)plVar10[0x15] != '\0')) {
                (**(code **)(*(long *)plVar10[0x13] + 0x18))();
                *(undefined1 *)(plVar10 + 0x15) = 0;
              }
              plVar10[0x14] = lVar19;
              plVar10[0x13] = *(long *)(lVar27 + 0x78);
              *(undefined1 *)(plVar10 + 0x16) = *(undefined1 *)(lVar27 + 0x90);
              *(undefined1 *)(plVar10 + 0x21) = 1;
            }
            lVar26 = lVar26 + 0x30;
          } while (lVar26 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30);
        }
      }
      uVar8 = *(uint *)(lVar23 + 0x148);
      while (uVar8 != 0) {
        lVar26 = *(long *)(lVar23 + 0x140);
        uVar8 = uVar8 - 1;
        plVar10 = (long *)(lVar26 + (ulong)uVar8 * 0x118);
        uVar3 = *(uint *)((long)plVar10 + 0x10c) >> 8 & 0xf;
        if ((3 < uVar3) || ((*(uint *)((long)plVar10 + 0x10c) & 0xff) == 0 && uVar3 != 3)) {
          lVar19 = lVar26 + (ulong)uVar8 * 0x118;
          if ((*(char *)(lVar19 + 0x110) == '\0') && (*(uint *)(param_2 + 1) != 0)) {
            puVar1 = (undefined1 *)(lVar19 + 0x110);
            lVar19 = *param_2;
            lVar20 = (ulong)*(uint *)(param_2 + 1) * 0x30;
            while (*plVar10 != **(long **)(lVar19 + 0x18)) {
              lVar19 = lVar19 + 0x30;
              lVar20 = lVar20 + -0x30;
              if (lVar20 == 0) goto LAB__text__004d6ce0;
            }
            uVar32 = *(undefined4 *)(lVar19 + 8);
            lVar20 = lVar26 + (ulong)uVar8 * 0x118;
            *puVar1 = 0;
            *(long *)(lVar20 + 0x18) = lVar19;
            *(undefined4 *)((long)plVar10 + 0x10c) = uVar32;
            lVar19 = *(long *)(lVar19 + 0x18);
            *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar19 + 8);
            uVar15 = *(undefined8 *)(lVar19 + 0x10);
            uVar21 = *(undefined8 *)(lVar19 + 0x18);
            uVar4 = *(undefined8 *)(lVar19 + 0x28);
            *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar19 + 0x20);
            *(undefined8 *)(lVar20 + 0x48) = uVar4;
            *(undefined8 *)(lVar20 + 0x30) = uVar15;
            *(undefined8 *)(lVar20 + 0x38) = uVar21;
            uVar15 = *(undefined8 *)(lVar19 + 0x30);
            uVar21 = *(undefined8 *)(lVar19 + 0x38);
            uVar4 = *(undefined8 *)(lVar19 + 0x48);
            *(undefined8 *)(lVar20 + 0x60) = *(undefined8 *)(lVar19 + 0x40);
            *(undefined8 *)(lVar20 + 0x68) = uVar4;
            *(undefined8 *)(lVar20 + 0x50) = uVar15;
            *(undefined8 *)(lVar20 + 0x58) = uVar21;
            uVar15 = *(undefined8 *)(lVar19 + 0x50);
            *(uint *)(lVar20 + 0x88) = 0;
            *(undefined8 *)(lVar20 + 0x70) = uVar15;
            uVar3 = *(uint *)(lVar19 + 0x68);
            if (*(uint *)(lVar20 + 0x8c) < uVar3) {
              plVar10 = *(long **)(lVar20 + 0x78);
              lVar16 = *plVar10;
              plVar28 = (long *)(lVar26 + (ulong)uVar8 * 0x118 + 0x80);
              if (*plVar28 == 0) {
                lVar16 = (**(code **)(lVar16 + 0x10))(plVar10,(ulong)uVar3 * 0x18,0x70d345,0xcc);
                if (lVar16 == 0) goto LAB__text__004d6f14;
                if ((*plVar28 != 0) && (*plVar28 != lVar16)) {
                  (**(code **)(**(long **)(lVar20 + 0x78) + 0x18))();
                }
              }
              else {
                lVar16 = (**(code **)(lVar16 + 0x28))();
                if (lVar16 == 0) goto LAB__text__004d6f14;
              }
              *plVar28 = lVar16;
              *(uint *)(lVar20 + 0x8c) = uVar3;
            }
            *(uint *)(lVar20 + 0x88) = uVar3;
            if (*(int *)(lVar19 + 0x68) != 0) {
              lVar20 = 0;
              uVar18 = 0;
              do {
                uVar18 = uVar18 + 1;
                puVar9 = (undefined8 *)(*(long *)(lVar19 + 0x60) + lVar20);
                puVar11 = (undefined8 *)(*(long *)(lVar26 + (ulong)uVar8 * 0x118 + 0x80) + lVar20);
                lVar20 = lVar20 + 0x18;
                uVar15 = *puVar9;
                uVar21 = puVar9[2];
                puVar11[1] = puVar9[1];
                puVar11[2] = uVar21;
                *puVar11 = uVar15;
              } while (uVar18 < *(uint *)(lVar19 + 0x68));
            }
LAB__text__004d6f14:
            lVar20 = lVar26 + (ulong)uVar8 * 0x118;
            *(undefined4 *)(lVar20 + 0x90) = *(undefined4 *)(lVar19 + 0x70);
            lVar16 = *(long *)(lVar19 + 0x80);
            if ((*(long *)(lVar20 + 0xa0) != 0) &&
               (pcVar30 = (char *)(lVar26 + (ulong)uVar8 * 0x118 + 0xa8), *pcVar30 != '\0')) {
              (**(code **)(**(long **)(lVar20 + 0x98) + 0x18))();
              *pcVar30 = '\0';
            }
            *(long *)(lVar20 + 0xa0) = lVar16;
            lVar26 = lVar26 + (ulong)uVar8 * 0x118;
            *(undefined8 *)(lVar20 + 0x98) = *(undefined8 *)(lVar19 + 0x78);
            uVar22 = *(undefined1 *)(lVar19 + 0x90);
            *(undefined1 *)(lVar26 + 0x108) = 0;
            *(undefined1 *)(lVar26 + 0xb0) = uVar22;
            *puVar1 = 1;
          }
          else {
LAB__text__004d6ce0:
            uVar18 = (ulong)*(uint *)(lVar23 + 0x148);
            if (plVar10 < (long *)((lVar26 + uVar18 * 0x118) - 0x118)) {
              FUN__text__0045ba54();
              lVar26 = *(long *)(lVar23 + 0x140);
              uVar18 = (ulong)*(uint *)(lVar23 + 0x148);
            }
            lVar26 = lVar26 + uVar18 * 0x118;
            FUN__text__0045cc00(lVar26 + -0x30);
            FUN__text__00451d7c(lVar26 + -0x58);
            FUN__text__00451cdc(lVar26 + -0x58);
            if (*(long *)(lVar26 + -0x98) != 0) {
              *(undefined4 *)(lVar26 + -0x90) = 0;
              (**(code **)(**(long **)(lVar26 + -0xa0) + 0x18))();
              *(undefined8 *)(lVar26 + -0x98) = 0;
              *(undefined4 *)(lVar26 + -0x8c) = 0;
            }
            if ((*(long *)(lVar26 + -0x78) != 0) && (*(char *)(lVar26 + -0x70) != '\0')) {
              (**(code **)(**(long **)(lVar26 + -0x80) + 0x18))();
              *(undefined1 *)(lVar26 + -0x70) = 0;
            }
            *(undefined8 *)(lVar26 + -0x78) = 0;
            *(int *)(lVar23 + 0x148) = *(int *)(lVar23 + 0x148) + -1;
          }
        }
      }
    }
    local_64 = 0;
    puVar14 = (undefined4 *)0x0;
    if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
      puVar14 = &local_64;
    }
    FUN__text__0045acd0(0x3f800000,param_1,lVar24,0,puVar14);
    uVar32 = *(undefined4 *)(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x58) & 2) != 0) {
      uVar32 = *(undefined4 *)(param_1 + 0x8c);
    }
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 2;
    *(undefined4 *)(param_1 + 0x88) = uVar32;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


