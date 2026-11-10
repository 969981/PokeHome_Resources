/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b2900; name: FUN_.text__005b2900
 */


LightEventType * FUN__text__005b2900(LightEventType *param_1,ulong param_2,long param_3)

{
  LightEventType *pLVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  LightEventType LVar5;
  undefined8 uVar6;
  bool bVar7;
  long *plVar8;
  LightEventType *pLVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  LightEventType *pLVar15;
  LightEventType *pLVar16;
  ulong uVar17;
  LightEventType *pLVar18;
  LightEventType *pLVar19;
  LightEventType *pLVar20;
  ulong uVar21;
  LightEventType *pLVar22;
  ulong local_58;
  ulong local_38;
  
  uVar6 = tpidr_el0;
  LVar5 = (LightEventType)((byte)((uint)uVar6 >> 0xd) & 0x4f);
  pLVar1 = param_1 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar7) {
      *pLVar1 = LVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005b29c4;
  }
  pLVar9 = param_1 + 3;
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pLVar9,0x10);
    if (bVar7) {
      *pLVar9 = (LightEventType)((char)*pLVar9 + '\x01');
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pLVar1 != (LightEventType)0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(param_1);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar7) {
            *pLVar1 = LVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005b29b4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar7) {
      *pLVar1 = LVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b29b4:
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pLVar9,0x10);
    if (bVar7) {
      *pLVar9 = (LightEventType)((char)*pLVar9 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b29c4:
  pLVar19 = param_1 + 0xa0;
  pLVar9 = *(LightEventType **)pLVar19;
  if (pLVar9 != (LightEventType *)0x0) {
    pLVar20 = pLVar19;
    do {
      pLVar22 = pLVar9;
      pLVar18 = pLVar9 + 8;
      if (*(ulong *)(pLVar9 + 0x28) < param_2) {
        pLVar22 = pLVar20;
        pLVar18 = pLVar9 + 0x10;
      }
      pLVar9 = *(LightEventType **)pLVar18;
      pLVar20 = pLVar22;
    } while (pLVar9 != (LightEventType *)0x0);
    if (pLVar22 != pLVar19) {
      do {
        uVar13 = *(ulong *)(pLVar22 + 0x20);
        uVar3 = *(ulong *)(pLVar22 + 0x28);
        uVar10 = (uVar3 + uVar13) - param_2 & -param_3;
        if ((long)uVar13 <= (long)uVar10) {
          if (pLVar22 != pLVar19) {
            uVar21 = (uVar3 + uVar13) - uVar10;
            if ((uVar13 & param_3 - 1U) == 0) {
              uVar17 = uVar3 - uVar21;
              if ((uVar3 < 0x101) && (uVar17 < uVar21)) {
LAB__text__005b2aa4:
                uVar10 = uVar13;
                uVar21 = uVar3;
              }
              else if (uVar17 < 0x81) {
                if (uVar17 * 2 < uVar21) goto LAB__text__005b2aa4;
              }
            }
            if (pLVar22 != pLVar19) {
              pLVar9 = pLVar22 + -0x10;
              if (*(ulong *)(pLVar22 + 0x28) == uVar21) {
                lVar11 = *(long *)(pLVar22 + 0x10);
                if (lVar11 == 0) {
                  pLVar20 = pLVar22;
                  do {
                    bVar7 = pLVar20 == *(LightEventType **)(*(LightEventType **)pLVar20 + 0x10);
                    pLVar20 = *(LightEventType **)pLVar20;
                  } while (bVar7);
                }
                else {
                  do {
                    lVar11 = *(long *)(lVar11 + 8);
                  } while (lVar11 != 0);
                }
                FUN__text__005b4ab0(pLVar19,pLVar22);
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
                *(undefined8 *)(pLVar22 + 8) = 0;
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(undefined8 *)pLVar22 = 0;
              }
              else {
                lVar11 = *(long *)pLVar9;
                pLVar9 = *(LightEventType **)(param_1 + 0x88);
                local_58 = uVar21;
                local_38 = uVar10;
                if ((pLVar9 == (LightEventType *)0x0) || (pLVar9 == param_1 + 0x88)) {
                  FUN__text__005b3ba0(param_1 + 8,&local_38,&local_58);
                  uVar13 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
                  pLVar9 = (LightEventType *)
                           (*(long *)(*(long *)(param_1 + 0x10) + (uVar13 / 0x38) * 8) +
                           (uVar13 % 0x38) * 0x48);
                }
                else {
                  pLVar9 = *(LightEventType **)(param_1 + 0x90);
                  *(ulong *)(pLVar9 + 0x30) = uVar10;
                  *(ulong *)(pLVar9 + 0x38) = uVar21;
                  plVar12 = *(long **)(param_1 + 0x90);
                  lVar2 = *plVar12;
                  plVar8 = (long *)plVar12[1];
                  *plVar8 = lVar2;
                  *(long **)(lVar2 + 8) = plVar8;
                  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
                  *plVar12 = 0;
                  plVar12[1] = 0;
                }
                puVar14 = *(undefined8 **)(lVar11 + 8);
                *(long *)pLVar9 = lVar11;
                *(undefined8 **)(pLVar9 + 8) = puVar14;
                *(LightEventType **)(lVar11 + 8) = pLVar9;
                *puVar14 = pLVar9;
                *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
                lVar11 = *(long *)(pLVar22 + 0x10);
                if (lVar11 == 0) {
                  pLVar20 = pLVar22;
                  do {
                    bVar7 = pLVar20 == *(LightEventType **)(*(LightEventType **)pLVar20 + 0x10);
                    pLVar20 = *(LightEventType **)pLVar20;
                  } while (bVar7);
                }
                else {
                  do {
                    lVar11 = *(long *)(lVar11 + 8);
                  } while (lVar11 != 0);
                }
                FUN__text__005b4ab0(pLVar19,pLVar22);
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
                *(undefined8 *)(pLVar22 + 8) = 0;
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(undefined8 *)pLVar22 = 0;
                uVar21 = *(long *)(pLVar22 + 0x28) - uVar21;
                *(ulong *)(pLVar22 + 0x28) = uVar21;
                pLVar20 = *(LightEventType **)(param_1 + 0xa0);
                if (*(LightEventType **)(param_1 + 0xa0) == (LightEventType *)0x0) {
LAB__text__005b2cc0:
                  *(LightEventType **)(param_1 + 0xa0) = pLVar22;
                  pLVar20 = param_1 + 0xa8;
                  *(LightEventType **)(param_1 + 0xb0) = pLVar22;
                  pLVar15 = pLVar19;
LAB__text__005b2cd0:
                  *(LightEventType **)pLVar20 = pLVar22;
                }
                else {
                  do {
                    pLVar15 = pLVar20;
                    pLVar18 = pLVar15 + 8;
                    if (*(ulong *)(pLVar15 + 0x28) <= uVar21) {
                      pLVar18 = pLVar15 + 0x10;
                    }
                    pLVar20 = *(LightEventType **)pLVar18;
                  } while (*(LightEventType **)pLVar18 != (LightEventType *)0x0);
                  if (pLVar15 == pLVar19) goto LAB__text__005b2cc0;
                  if (uVar21 < *(ulong *)(pLVar15 + 0x28)) {
                    *(LightEventType **)(pLVar15 + 8) = pLVar22;
                    pLVar20 = param_1 + 0xa8;
                    pLVar18 = *(LightEventType **)pLVar20;
                  }
                  else {
                    *(LightEventType **)(pLVar15 + 0x10) = pLVar22;
                    pLVar20 = param_1 + 0xb0;
                    pLVar18 = *(LightEventType **)pLVar20;
                  }
                  if (pLVar15 == pLVar18) goto LAB__text__005b2cd0;
                }
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(LightEventType **)pLVar22 = pLVar15;
                *(undefined8 *)(pLVar22 + 8) = 0;
                FUN__text__005b4940(pLVar19,pLVar22);
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
              }
              if (param_1[0xc0] == (LightEventType)0x0) goto LAB__text__005b2ae4;
              pLVar20 = param_1 + 0x70;
              pLVar22 = *(LightEventType **)pLVar20;
              if (pLVar22 == pLVar20) {
                lVar11 = 0;
LAB__text__005b2d58:
                if (lVar11 == *(long *)(param_1 + 200)) {
                  pLVar18 = *(LightEventType **)(param_1 + 0xa8);
                  if (pLVar18 == pLVar19) goto LAB__text__005b2ae4;
                  uVar13 = 0;
                  while( true ) {
                    uVar10 = *(ulong *)(pLVar18 + 0x28);
                    uVar3 = uVar10;
                    if (uVar10 <= uVar13) {
                      uVar3 = uVar13;
                    }
                    if (uVar10 < uVar13) break;
                    pLVar15 = *(LightEventType **)(pLVar18 + 0x10);
                    if (*(LightEventType **)(pLVar18 + 0x10) == (LightEventType *)0x0) {
                      do {
                        pLVar15 = pLVar18;
                        pLVar16 = *(LightEventType **)pLVar15;
                        pLVar18 = pLVar16;
                      } while (pLVar15 == *(LightEventType **)(pLVar16 + 0x10));
                      pLVar18 = pLVar15;
                      if (*(LightEventType **)(pLVar15 + 0x10) != pLVar16) {
                        pLVar18 = pLVar16;
                      }
                    }
                    else {
                      do {
                        pLVar18 = pLVar15;
                        pLVar15 = *(LightEventType **)(pLVar18 + 8);
                      } while (*(LightEventType **)(pLVar18 + 8) != (LightEventType *)0x0);
                    }
                    uVar13 = uVar3;
                    if (pLVar18 == pLVar19) goto LAB__text__005b2ae4;
                  }
                }
              }
              else {
                lVar11 = 0;
                pLVar18 = pLVar22;
                while (*(long *)(pLVar18 + 0x30) == lVar11) {
                  lVar11 = *(long *)(pLVar18 + 0x38) + lVar11;
                  pLVar18 = *(LightEventType **)pLVar18;
                  if (pLVar18 == pLVar20) goto LAB__text__005b2d58;
                }
              }
              for (; pLVar22 != pLVar20; pLVar22 = *(LightEventType **)pLVar22) {
                if (-1 < *(int *)(pLVar22 + 0x40)) {
                  plVar8 = (long *)FUN__text__005f53a0();
                  (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined4 *)(pLVar22 + 0x40));
                }
              }
              pLVar20 = *(LightEventType **)(param_1 + 0xa8);
              while (pLVar20 != pLVar19) {
                pLVar22 = *(LightEventType **)(pLVar20 + 0x10);
                if (*(LightEventType **)(pLVar20 + 0x10) == (LightEventType *)0x0) {
                  do {
                    pLVar22 = pLVar20;
                    pLVar18 = *(LightEventType **)pLVar22;
                    pLVar20 = pLVar18;
                  } while (pLVar22 == *(LightEventType **)(pLVar18 + 0x10));
                  pLVar20 = pLVar22;
                  if (*(LightEventType **)(pLVar22 + 0x10) != pLVar18) {
                    pLVar20 = pLVar18;
                  }
                }
                else {
                  do {
                    pLVar20 = pLVar22;
                    pLVar22 = *(LightEventType **)(pLVar20 + 8);
                  } while (*(LightEventType **)(pLVar20 + 8) != (LightEventType *)0x0);
                }
              }
              goto LAB__text__005b2ae4;
            }
          }
          break;
        }
        pLVar9 = *(LightEventType **)(pLVar22 + 0x10);
        if (*(LightEventType **)(pLVar22 + 0x10) == (LightEventType *)0x0) {
          do {
            pLVar9 = pLVar22;
            pLVar20 = *(LightEventType **)pLVar9;
            pLVar22 = pLVar20;
          } while (pLVar9 == *(LightEventType **)(pLVar20 + 0x10));
          pLVar22 = pLVar9;
          if (*(LightEventType **)(pLVar9 + 0x10) != pLVar20) {
            pLVar22 = pLVar20;
          }
        }
        else {
          do {
            pLVar22 = pLVar9;
            pLVar9 = *(LightEventType **)(pLVar22 + 8);
          } while (*(LightEventType **)(pLVar22 + 8) != (LightEventType *)0x0);
        }
      } while (pLVar22 != pLVar19);
    }
  }
  pLVar9 = (LightEventType *)0x0;
LAB__text__005b2ae4:
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar7) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (param_1[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(param_1);
  }
  return pLVar9;
}


