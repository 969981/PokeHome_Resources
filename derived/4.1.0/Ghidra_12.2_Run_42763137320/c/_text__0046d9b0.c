/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d9b0; name: FUN_.text__0046d9b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046d9b0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar10 + 0x348);
  pMVar2 = (MutexType *)(lVar10 + 0x358);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__0046da38;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__0046da38:
  uVar5 = *(uint *)(lVar10 + 0x3b0);
  if (uVar5 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = param_2 / uVar5;
    }
    for (plVar9 = *(long **)(*(long *)(lVar10 + 0x3a8) + (ulong)(param_2 - uVar8 * uVar5) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == param_2) {
        piVar3 = (int *)((long)plVar9 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        break;
      }
    }
  }
  do {
    iVar4 = *piVar1;
    if (iVar4 < 0) {
      nn::os::UnlockMutex(pMVar2);
joined_r0x0046db2c:
      if (plVar9 != (long *)0x0) {
        FUN__text__0043ee10(plVar9,param_3);
        piVar1 = (int *)((long)plVar9 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0046db20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x20))(plVar9);
          return;
        }
      }
      return;
    }
    while (*piVar1 == iVar4) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar10 + 0x378))) {
          nn::os::SignalEvent((EventType *)(lVar10 + 0x380));
        }
        goto joined_r0x0046db2c;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


