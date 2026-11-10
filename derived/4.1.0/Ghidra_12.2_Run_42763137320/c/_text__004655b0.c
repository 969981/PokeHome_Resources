/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004655b0; name: FUN_.text__004655b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004655b0(long *param_1,long param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  plVar11 = _DAT_008a45c8;
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar15 = 0;
    do {
      plVar4 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
      lVar14 = *(long *)(param_2 + 8);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      uVar7 = *(uint *)(lVar14 + uVar15 * 8);
      if (uVar7 == 0) {
        plVar13 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar13 != (long *)0x0) {
          piVar1 = (int *)((long)plVar13 + 0x14);
          do {
            bVar12 = *piVar1 + -1 == 0;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = *piVar1 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          goto LAB__text__004658b4;
        }
      }
      else {
        lVar16 = *plVar11;
        if (*(char *)(lVar14 + uVar15 * 8 + 5) == '\0') {
          piVar1 = (int *)(lVar16 + 0x4b0);
          pMVar2 = (MutexType *)(lVar16 + 0x4c0);
          while( true ) {
            while (iVar5 = *piVar1, -1 < iVar5) {
              while (*piVar1 == iVar5) {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = iVar5 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB__text__00465770;
              }
              ClearExclusiveLocal();
            }
            nn::os::LockMutex(pMVar2);
            if (*piVar1 < 0) break;
            nn::os::UnlockMutex(pMVar2);
          }
LAB__text__00465770:
          uVar6 = *(uint *)(lVar16 + 0x518);
          if (uVar6 == 0) {
            lVar14 = 0;
          }
          else {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar7 / uVar6;
            }
            lVar14 = *(long *)(*(long *)(lVar16 + 0x510) + (ulong)(uVar7 - uVar10 * uVar6) * 8);
            if (lVar14 != 0) {
LAB__text__00465790:
              if (*(uint *)(lVar14 + 0x10) != uVar7) goto code_r0x0046579c;
              piVar3 = (int *)(lVar14 + 0x14);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar9) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
          }
LAB__text__00465858:
          while (iVar5 = *piVar1, -1 < iVar5) {
            while (*piVar1 == iVar5) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar5 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar16 + 0x4e0))) {
                  nn::os::SignalEvent((EventType *)(lVar16 + 0x4e8));
                }
                plVar13 = (long *)*plVar4;
                *plVar4 = lVar14;
                if (plVar13 == (long *)0x0) goto LAB__text__004655f0;
                goto LAB__text__004658a0;
              }
            }
            ClearExclusiveLocal();
          }
          nn::os::UnlockMutex(pMVar2);
          plVar13 = (long *)*plVar4;
          *plVar4 = lVar14;
          if (plVar13 != (long *)0x0) {
LAB__text__004658a0:
            piVar1 = (int *)((long)plVar13 + 0x14);
            do {
              bVar12 = *piVar1 + -1 == 0;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            goto LAB__text__004658b4;
          }
        }
        else {
          piVar1 = (int *)(lVar16 + 0x528);
          pMVar2 = (MutexType *)(lVar16 + 0x538);
          while( true ) {
            while (iVar5 = *piVar1, -1 < iVar5) {
              while (*piVar1 == iVar5) {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = iVar5 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB__text__004656a0;
              }
              ClearExclusiveLocal();
            }
            nn::os::LockMutex(pMVar2);
            if (*piVar1 < 0) break;
            nn::os::UnlockMutex(pMVar2);
          }
LAB__text__004656a0:
          uVar6 = *(uint *)(lVar16 + 0x590);
          if (uVar6 == 0) {
            lVar14 = 0;
          }
          else {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar7 / uVar6;
            }
            lVar14 = *(long *)(*(long *)(lVar16 + 0x588) + (ulong)(uVar7 - uVar10 * uVar6) * 8);
            if (lVar14 != 0) {
LAB__text__004656c0:
              if (*(uint *)(lVar14 + 0x10) != uVar7) goto code_r0x004656cc;
              piVar3 = (int *)(lVar14 + 0x14);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar9) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
          }
LAB__text__004657d8:
          while (iVar5 = *piVar1, -1 < iVar5) {
            while (*piVar1 == iVar5) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar5 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar16 + 0x558))) {
                  nn::os::SignalEvent((EventType *)(lVar16 + 0x560));
                }
                plVar13 = (long *)*plVar4;
                *plVar4 = lVar14;
                if (plVar13 == (long *)0x0) goto LAB__text__004655f0;
                goto LAB__text__00465820;
              }
            }
            ClearExclusiveLocal();
          }
          nn::os::UnlockMutex(pMVar2);
          plVar13 = (long *)*plVar4;
          *plVar4 = lVar14;
          if (plVar13 != (long *)0x0) {
LAB__text__00465820:
            piVar1 = (int *)((long)plVar13 + 0x14);
            do {
              bVar12 = *piVar1 + -1 == 0;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
LAB__text__004658b4:
            if (bVar12) {
              (**(code **)(*plVar13 + 0x20))();
            }
          }
        }
      }
LAB__text__004655f0:
      *(undefined2 *)(plVar4 + 1) = 0;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_2 + 0x10));
  }
  return;
code_r0x0046579c:
  lVar14 = *(long *)(lVar14 + 8);
  if (lVar14 == 0) goto LAB__text__00465858;
  goto LAB__text__00465790;
code_r0x004656cc:
  lVar14 = *(long *)(lVar14 + 8);
  if (lVar14 == 0) goto LAB__text__004657d8;
  goto LAB__text__004656c0;
}


