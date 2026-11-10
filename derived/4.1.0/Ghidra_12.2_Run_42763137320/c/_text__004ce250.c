/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce250; name: FUN_.text__004ce250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ce250(long *param_1,uint *param_2)

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
  
  uVar5 = *param_2;
  *param_1 = 0;
  if (uVar5 != 0) {
    lVar11 = *_DAT_008a45c8;
    if (*(char *)((long)param_2 + 5) == '\0') {
      piVar1 = (int *)(lVar11 + 0x4b0);
      pMVar2 = (MutexType *)(lVar11 + 0x4c0);
      while( true ) {
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB__text__004ce378;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__004ce378:
      uVar6 = *(uint *)(lVar11 + 0x518);
      if (uVar6 == 0) {
        lVar12 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar11 + 0x510) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
        if (lVar12 != 0) {
LAB__text__004ce394:
          if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x004ce3a0;
          piVar3 = (int *)(lVar12 + 0x14);
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
LAB__text__004ce458:
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x4e0))) {
              nn::os::SignalEvent((EventType *)(lVar11 + 0x4e8));
            }
            plVar10 = (long *)*param_1;
            *param_1 = lVar12;
            goto joined_r0x004ce49c;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      plVar10 = (long *)*param_1;
      *param_1 = lVar12;
joined_r0x004ce49c:
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
      piVar1 = (int *)(lVar11 + 0x528);
      pMVar2 = (MutexType *)(lVar11 + 0x538);
      while( true ) {
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB__text__004ce2e8;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__004ce2e8:
      uVar6 = *(uint *)(lVar11 + 0x590);
      if (uVar6 == 0) {
        lVar12 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar11 + 0x588) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
        if (lVar12 != 0) {
LAB__text__004ce304:
          if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x004ce310;
          piVar3 = (int *)(lVar12 + 0x14);
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
LAB__text__004ce3d8:
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x558))) {
              nn::os::SignalEvent((EventType *)(lVar11 + 0x560));
            }
            plVar10 = (long *)*param_1;
            *param_1 = lVar12;
            goto joined_r0x004ce41c;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      plVar10 = (long *)*param_1;
      *param_1 = lVar12;
joined_r0x004ce41c:
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
                    /* WARNING: Could not recover jumptable at 0x004ce4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))();
      return;
    }
  }
  return;
code_r0x004ce3a0:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__004ce458;
  goto LAB__text__004ce394;
code_r0x004ce310:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__004ce3d8;
  goto LAB__text__004ce304;
}


