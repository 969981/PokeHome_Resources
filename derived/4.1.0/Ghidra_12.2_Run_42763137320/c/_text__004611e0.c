/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004611e0; name: FUN_.text__004611e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004611e0(long param_1,long *param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  plVar10 = (long *)*param_2;
  *param_2 = 0;
  if (plVar10 != (long *)0x0) {
    piVar1 = (int *)((long)plVar10 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar11 = *(long *)(param_1 + 0xf0);
  if ((lVar11 != 0) && (uVar5 = *(uint *)(lVar11 + 4), uVar5 != 0)) {
    lVar12 = *_DAT_008a45c8;
    if (*(char *)(lVar11 + 9) == '\0') {
      piVar1 = (int *)(lVar12 + 0x4b0);
      pMVar2 = (MutexType *)(lVar12 + 0x4c0);
      while( true ) {
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB__text__0046133c;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__0046133c:
      uVar6 = *(uint *)(lVar12 + 0x518);
      if (uVar6 == 0) {
        lVar11 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x510) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
        if (lVar11 != 0) {
LAB__text__00461360:
          if (*(uint *)(lVar11 + 0x10) != uVar5) goto code_r0x0046136c;
          piVar3 = (int *)(lVar11 + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = *piVar3 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
      }
LAB__text__00461428:
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar12 + 0x4e0))) {
              nn::os::SignalEvent((EventType *)(lVar12 + 0x4e8));
            }
            plVar10 = (long *)*param_2;
            *param_2 = lVar11;
            goto joined_r0x0046146c;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      plVar10 = (long *)*param_2;
      *param_2 = lVar11;
joined_r0x0046146c:
      if (plVar10 == (long *)0x0) {
        return;
      }
      piVar1 = (int *)((long)plVar10 + 0x14);
      do {
        iVar4 = *piVar1 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    else {
      piVar1 = (int *)(lVar12 + 0x528);
      pMVar2 = (MutexType *)(lVar12 + 0x538);
      while( true ) {
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB__text__004612b8;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__004612b8:
      uVar6 = *(uint *)(lVar12 + 0x590);
      if (uVar6 == 0) {
        lVar11 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x588) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
        if (lVar11 != 0) {
LAB__text__004612d4:
          if (*(uint *)(lVar11 + 0x10) != uVar5) goto code_r0x004612e0;
          piVar3 = (int *)(lVar11 + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = *piVar3 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
      }
LAB__text__004613a8:
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar12 + 0x558))) {
              nn::os::SignalEvent((EventType *)(lVar12 + 0x560));
            }
            plVar10 = (long *)*param_2;
            *param_2 = lVar11;
            goto joined_r0x004613ec;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      plVar10 = (long *)*param_2;
      *param_2 = lVar11;
joined_r0x004613ec:
      if (plVar10 == (long *)0x0) {
        return;
      }
      piVar1 = (int *)((long)plVar10 + 0x14);
      do {
        iVar4 = *piVar1 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004614a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))();
      return;
    }
  }
  return;
code_r0x0046136c:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == 0) goto LAB__text__00461428;
  goto LAB__text__00461360;
code_r0x004612e0:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == 0) goto LAB__text__004613a8;
  goto LAB__text__004612d4;
}


