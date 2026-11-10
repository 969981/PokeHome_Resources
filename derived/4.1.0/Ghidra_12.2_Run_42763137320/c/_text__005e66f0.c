/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e66f0; name: FUN_.text__005e66f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e66f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  
  lVar22 = _DAT_008a5b20 + 0x10;
  lVar17 = _DAT_008a5b20 + 0xa0;
  param_1[9] = _DAT_008a5b20 + 0x60;
  param_1[10] = lVar17;
  *param_1 = lVar22;
  plVar19 = (long *)param_1[0xc];
  plVar1 = (long *)param_1[0xd];
  do {
    if (plVar19 == plVar1) {
      plVar19 = (long *)param_1[0x12];
      plVar1 = (long *)param_1[0x13];
      do {
        if (plVar19 == plVar1) {
          nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x49));
          puVar16 = (undefined8 *)param_1[0x43];
          if (puVar16 != (undefined8 *)0x0) {
            puVar5 = puVar16;
            puVar8 = (undefined8 *)param_1[0x44];
            if ((undefined8 *)param_1[0x44] != puVar16) {
              do {
                pcVar12 = (code *)puVar8[-0xf];
                puVar5 = puVar8 + -0x10;
                if (pcVar12 != (code *)0x0) {
                  puVar8[-0xe] = 0;
                  puVar8[-0xd] = 0;
                  *puVar5 = 0;
                  puVar8[-0xf] = 0;
                  (*pcVar12)(puVar8 + -0xc);
                }
                puVar8 = puVar5;
              } while (puVar5 != puVar16);
              puVar5 = (undefined8 *)param_1[0x43];
            }
            param_1[0x44] = (long)puVar16;
            (**(code **)(*(long *)param_1[0x46] + 0x18))
                      ((long *)param_1[0x46],puVar5,param_1[0x45] - (long)puVar5,0x10);
          }
          puVar16 = (undefined8 *)param_1[0x3c];
          if (puVar16 != (undefined8 *)0x0) {
            puVar5 = puVar16;
            puVar8 = (undefined8 *)param_1[0x3d];
            if ((undefined8 *)param_1[0x3d] != puVar16) {
              do {
                pcVar12 = (code *)puVar8[-0xf];
                puVar5 = puVar8 + -0x10;
                if (pcVar12 != (code *)0x0) {
                  puVar8[-0xe] = 0;
                  puVar8[-0xd] = 0;
                  *puVar5 = 0;
                  puVar8[-0xf] = 0;
                  (*pcVar12)(puVar8 + -0xc);
                }
                puVar8 = puVar5;
              } while (puVar5 != puVar16);
              puVar5 = (undefined8 *)param_1[0x3c];
            }
            param_1[0x3d] = (long)puVar16;
            (**(code **)(*(long *)param_1[0x3f] + 0x18))
                      ((long *)param_1[0x3f],puVar5,param_1[0x3e] - (long)puVar5,0x10);
          }
          nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x39));
          puVar16 = (undefined8 *)param_1[0x33];
          if (puVar16 != (undefined8 *)0x0) {
            puVar5 = puVar16;
            puVar8 = (undefined8 *)param_1[0x34];
            if ((undefined8 *)param_1[0x34] != puVar16) {
              do {
                pcVar12 = (code *)puVar8[-0xf];
                puVar5 = puVar8 + -0x10;
                if (pcVar12 != (code *)0x0) {
                  puVar8[-0xe] = 0;
                  puVar8[-0xd] = 0;
                  *puVar5 = 0;
                  puVar8[-0xf] = 0;
                  (*pcVar12)(puVar8 + -0xc);
                }
                puVar8 = puVar5;
              } while (puVar5 != puVar16);
              puVar5 = (undefined8 *)param_1[0x33];
            }
            param_1[0x34] = (long)puVar16;
            (**(code **)(*(long *)param_1[0x36] + 0x18))
                      ((long *)param_1[0x36],puVar5,param_1[0x35] - (long)puVar5,0x10);
          }
          puVar16 = (undefined8 *)param_1[0x2c];
          if (puVar16 != (undefined8 *)0x0) {
            puVar5 = puVar16;
            puVar8 = (undefined8 *)param_1[0x2d];
            if ((undefined8 *)param_1[0x2d] != puVar16) {
              do {
                pcVar12 = (code *)puVar8[-0xf];
                puVar5 = puVar8 + -0x10;
                if (pcVar12 != (code *)0x0) {
                  puVar8[-0xe] = 0;
                  puVar8[-0xd] = 0;
                  *puVar5 = 0;
                  puVar8[-0xf] = 0;
                  (*pcVar12)(puVar8 + -0xc);
                }
                puVar8 = puVar5;
              } while (puVar5 != puVar16);
              puVar5 = (undefined8 *)param_1[0x2c];
            }
            param_1[0x2d] = (long)puVar16;
            (**(code **)(*(long *)param_1[0x2f] + 0x18))
                      ((long *)param_1[0x2f],puVar5,param_1[0x2e] - (long)puVar5,0x10);
          }
          nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x144));
          if (param_1[0x25] != 0) {
            (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
            param_1[0x25] = 0;
          }
          if (param_1[0x24] != 0) {
            (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
            param_1[0x24] = 0;
          }
          lVar22 = param_1[0x1e];
          if (lVar22 != 0) {
            param_1[0x1f] = lVar22;
            (**(code **)(*(long *)param_1[0x21] + 0x18))
                      ((long *)param_1[0x21],lVar22,param_1[0x20] - lVar22,8);
          }
          lVar22 = param_1[0x18];
          if (lVar22 != 0) {
            param_1[0x19] = lVar22;
            (**(code **)(*(long *)param_1[0x1b] + 0x18))
                      ((long *)param_1[0x1b],lVar22,param_1[0x1a] - lVar22,8);
          }
          lVar22 = param_1[0x12];
          if (lVar22 != 0) {
            param_1[0x13] = lVar22;
            (**(code **)(*(long *)param_1[0x15] + 0x18))
                      ((long *)param_1[0x15],lVar22,param_1[0x14] - lVar22,8);
          }
          lVar22 = param_1[0xc];
          if (lVar22 != 0) {
            param_1[0xd] = lVar22;
            (**(code **)(*(long *)param_1[0xf] + 0x18))
                      ((long *)param_1[0xf],lVar22,param_1[0xe] - lVar22,8);
          }
          *param_1 = 0x867b90;
          param_1[9] = 0x867bd0;
          param_1[10] = 0x867c10;
          if (param_1[0xb] != 0) {
            (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
            param_1[0xb] = 0;
          }
          return;
        }
        lVar22 = *plVar19;
        puVar16 = *(undefined8 **)(lVar22 + 0x60);
        puVar5 = *(undefined8 **)(lVar22 + 0x68);
        if (puVar16 != puVar5) {
          do {
            if ((long *)*puVar16 == param_1) goto LAB__text__005e6ba0;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar5);
          puVar16 = puVar5;
        }
LAB__text__005e6ba0:
        if (puVar16 != puVar5) {
          sVar3 = (long)puVar5 - (long)(puVar16 + 1);
          if (sVar3 != 0) {
            memmove(puVar16,puVar16 + 1,sVar3);
          }
          *(size_t *)(lVar22 + 0x68) = (long)puVar16 + sVar3;
        }
        plVar19 = plVar19 + 1;
      } while( true );
    }
    lVar22 = *plVar19;
    puVar5 = *(undefined8 **)(lVar22 + 0x98);
    plVar15 = (long *)(lVar22 + 0x90);
    puVar16 = (undefined8 *)*plVar15;
    if (puVar16 != puVar5) {
      do {
        if ((long *)*puVar16 == param_1) goto LAB__text__005e678c;
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar5);
      puVar16 = puVar5;
    }
LAB__text__005e678c:
    if (puVar16 != puVar5) {
      sVar3 = (long)puVar5 - (long)(puVar16 + 1);
      if (sVar3 != 0) {
        memmove(puVar16,puVar16 + 1,sVar3);
      }
      *(size_t *)(lVar22 + 0x98) = (long)puVar16 + sVar3;
    }
    plVar18 = (long *)param_1[0x12];
    plVar2 = (long *)param_1[0x13];
joined_r0x005e67bc:
    if (plVar18 != plVar2) {
      do {
        lVar17 = *plVar18;
        plVar6 = *(long **)(lVar17 + 0x68);
        plVar20 = (long *)(lVar17 + 0x60);
        plVar9 = (long *)*plVar20;
        plVar7 = plVar9;
        if (plVar9 != plVar6) {
          do {
            if (*plVar7 == lVar22) goto LAB__text__005e6810;
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar6);
          plVar7 = plVar6;
        }
LAB__text__005e6810:
        if (plVar7 == plVar6) {
          if (plVar6 == *(long **)(lVar17 + 0x70)) {
            uVar13 = (long)plVar6 - (long)plVar9;
            uVar10 = ((long)uVar13 >> 3) + 1;
            if (uVar10 >> 0x3d != 0) goto LAB__text__005e6eb0;
            uVar11 = (long)uVar13 >> 2;
            if ((ulong)((long)uVar13 >> 2) <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7ffffffffffffff7 < uVar13) {
              uVar11 = 0x1fffffffffffffff;
            }
            if (uVar11 == 0) {
LAB__text__005e6a5c:
              lVar21 = 0;
            }
            else {
              lVar21 = (**(code **)(**(long **)(lVar17 + 0x78) + 0x10))
                                 (*(long **)(lVar17 + 0x78),uVar11 << 3,8);
              if (lVar21 == 0) {
                (**(code **)(**(long **)(lVar17 + 0x78) + 0xb8))();
                goto LAB__text__005e6a5c;
              }
            }
            uVar10 = tpidr_el0;
            uVar10 = uVar10 & 0xffffffffffffe000;
            if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__005e6c1c;
            plVar7 = (long *)(lVar21 + ((long)uVar13 >> 3) * 8);
            *(undefined8 *)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) =
                 *(undefined8 *)(lVar17 + 0x78);
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            plVar14 = plVar7 + 1;
            *plVar7 = lVar22;
            lVar4 = *(long *)(uVar10 + 0x98) + -1;
            *(long *)(uVar10 + 0x98) = lVar4;
            plVar6 = *(long **)(lVar17 + 0x60);
            plVar9 = *(long **)(lVar17 + 0x68);
            if (plVar9 != plVar6) {
              do {
                if (lVar4 == 0x10) goto LAB__text__005e6c1c;
                *(undefined8 *)(uVar10 + 0x18 + lVar4 * 8) = *(undefined8 *)(lVar17 + 0x78);
                *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
                plVar9 = plVar9 + -1;
                plVar7 = plVar7 + -1;
                *plVar7 = *plVar9;
                lVar4 = *(long *)(uVar10 + 0x98) + -1;
                *(long *)(uVar10 + 0x98) = lVar4;
              } while (plVar9 != plVar6);
              plVar9 = (long *)*plVar20;
            }
            *(long **)(lVar17 + 0x60) = plVar7;
            *(long **)(lVar17 + 0x68) = plVar14;
            lVar4 = *(long *)(lVar17 + 0x70);
            *(ulong *)(lVar17 + 0x70) = lVar21 + uVar11 * 8;
            if (plVar9 != (long *)0x0) {
              (**(code **)(**(long **)(lVar17 + 0x78) + 0x18))
                        (*(long **)(lVar17 + 0x78),plVar9,lVar4 - (long)plVar9,8);
            }
          }
          else {
            uVar10 = tpidr_el0;
            uVar10 = uVar10 & 0xffffffffffffe000;
            if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__005e6c1c;
            *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) =
                 *(undefined8 *)(lVar17 + 0x78);
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            *plVar6 = lVar22;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
            *(long **)(lVar17 + 0x68) = plVar6 + 1;
          }
        }
        plVar6 = *(long **)(lVar22 + 0x90);
        plVar9 = *(long **)(lVar22 + 0x98);
        plVar7 = plVar6;
        if (plVar6 != plVar9) {
          do {
            if (*plVar7 == lVar17) goto LAB__text__005e67c4;
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar9);
          plVar7 = plVar9;
        }
LAB__text__005e67c4:
        if (plVar7 == plVar9) {
          if (plVar9 < *(long **)(lVar22 + 0xa0)) goto code_r0x005e687c;
          lVar21 = (long)plVar9 - (long)plVar6 >> 3;
          uVar10 = lVar21 + 1;
          if (uVar10 >> 0x3d != 0) {
            FUN__text__005e4ff4(plVar15);
LAB__text__005e6eb0:
            FUN__text__005e4ff4(plVar20);
                    /* WARNING: Does not return */
            pcVar12 = (code *)UndefinedInstructionException(0,0x5e6eb8);
            (*pcVar12)();
          }
          uVar11 = (long)*(long **)(lVar22 + 0xa0) - (long)plVar6;
          uVar13 = (long)uVar11 >> 2;
          if (uVar13 <= uVar10) {
            uVar13 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
LAB__text__005e6930:
            lVar4 = 0;
          }
          else {
            lVar4 = (**(code **)(**(long **)(lVar22 + 0xa8) + 0x10))
                              (*(long **)(lVar22 + 0xa8),uVar13 << 3,8);
            if (lVar4 == 0) {
              (**(code **)(**(long **)(lVar22 + 0xa8) + 0xb8))();
              goto LAB__text__005e6930;
            }
          }
          uVar10 = tpidr_el0;
          uVar10 = uVar10 & 0xffffffffffffe000;
          if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__005e6c1c;
          plVar7 = (long *)(lVar4 + lVar21 * 8);
          *(undefined8 *)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) =
               *(undefined8 *)(lVar22 + 0xa8);
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
          plVar20 = plVar7 + 1;
          *plVar7 = lVar17;
          lVar17 = *(long *)(uVar10 + 0x98) + -1;
          *(long *)(uVar10 + 0x98) = lVar17;
          plVar6 = *(long **)(lVar22 + 0x90);
          plVar9 = *(long **)(lVar22 + 0x98);
          if (plVar9 != plVar6) {
            do {
              if (lVar17 == 0x10) goto LAB__text__005e6c1c;
              *(undefined8 *)(uVar10 + 0x18 + lVar17 * 8) = *(undefined8 *)(lVar22 + 0xa8);
              *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
              plVar9 = plVar9 + -1;
              plVar7 = plVar7 + -1;
              *plVar7 = *plVar9;
              lVar17 = *(long *)(uVar10 + 0x98) + -1;
              *(long *)(uVar10 + 0x98) = lVar17;
            } while (plVar9 != plVar6);
            plVar9 = (long *)*plVar15;
          }
          *(long **)(lVar22 + 0x90) = plVar7;
          *(long **)(lVar22 + 0x98) = plVar20;
          lVar17 = *(long *)(lVar22 + 0xa0);
          *(ulong *)(lVar22 + 0xa0) = lVar4 + uVar13 * 8;
          if (plVar9 != (long *)0x0) {
            (**(code **)(**(long **)(lVar22 + 0xa8) + 0x18))
                      (*(long **)(lVar22 + 0xa8),plVar9,lVar17 - (long)plVar9,8);
          }
        }
        plVar18 = plVar18 + 1;
        if (plVar18 == plVar2) break;
      } while( true );
    }
    plVar19 = plVar19 + 1;
  } while( true );
code_r0x005e687c:
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  if (*(long *)(uVar10 + 0x98) == 0x10) {
LAB__text__005e6c1c:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar18 = plVar18 + 1;
  *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar22 + 0xa8);
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
  *plVar9 = lVar17;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
  *(long **)(lVar22 + 0x98) = plVar9 + 1;
  goto joined_r0x005e67bc;
}


