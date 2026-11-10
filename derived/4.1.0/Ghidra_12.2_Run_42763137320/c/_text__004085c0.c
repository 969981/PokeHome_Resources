/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004085c0; name: FUN_.text__004085c0
 */


void FUN__text__004085c0(long *param_1,long param_2,ulong param_3)

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
  long lVar10;
  long *plVar11;
  long lVar12;
  long local_48;
  
  *param_1 = 0;
  lVar10 = DAT_00ae9a38;
  uVar5 = *(uint *)(param_2 + (param_3 & 0xffffffff) * 4 + 0x10);
  if (uVar5 == 0) {
    if (*(long *)(param_2 + 0x430) != 0) {
      FUN__text__0042b090(&local_48);
      *param_1 = local_48;
      return;
    }
  }
  else {
    piVar1 = (int *)(DAT_00ae9a38 + 0x528);
    pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x538);
    while( true ) {
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__00408658;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__00408658:
    uVar6 = *(uint *)(lVar10 + 0x590);
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0x588) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (lVar12 != 0) {
LAB__text__00408674:
        if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x00408680;
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
LAB__text__004086e8:
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar10 + 0x558))) {
            nn::os::SignalEvent((EventType *)(lVar10 + 0x560));
          }
          plVar11 = (long *)*param_1;
          *param_1 = lVar12;
          goto joined_r0x00408778;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
    plVar11 = (long *)*param_1;
    *param_1 = lVar12;
joined_r0x00408778:
    if (plVar11 != (long *)0x0) {
      piVar1 = (int *)((long)plVar11 + 0x14);
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
                    /* WARNING: Could not recover jumptable at 0x00408764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x20))();
        return;
      }
    }
  }
  return;
code_r0x00408680:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__004086e8;
  goto LAB__text__00408674;
}


