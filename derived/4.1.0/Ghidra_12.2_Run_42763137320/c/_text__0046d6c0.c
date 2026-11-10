/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d6c0; name: FUN_.text__0046d6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN__text__0046d6c0(uint param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar11 + 0x348);
  pMVar2 = (MutexType *)(lVar11 + 0x358);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') goto LAB__text__0046d748;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__0046d748:
  uVar5 = *(uint *)(lVar11 + 0x3b0);
  if (uVar5 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = param_1 / uVar5;
    }
    for (plVar10 = *(long **)(*(long *)(lVar11 + 0x3a8) + (ulong)(param_1 - uVar9 * uVar5) * 8);
        plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == param_1) {
        piVar3 = (int *)((long)plVar10 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        break;
      }
    }
  }
  do {
    iVar4 = *piVar1;
    if (iVar4 < 0) {
      nn::os::UnlockMutex(pMVar2);
joined_r0x0046d838:
      if (plVar10 == (long *)0x0) {
        return 0;
      }
      bVar6 = *(byte *)((long)plVar10 + 0x94);
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
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      return bVar6 & 1;
    }
    while (*piVar1 == iVar4) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x378))) {
          nn::os::SignalEvent((EventType *)(lVar11 + 0x380));
        }
        goto joined_r0x0046d838;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


