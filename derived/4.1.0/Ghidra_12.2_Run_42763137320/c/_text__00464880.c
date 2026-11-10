/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464880; name: FUN_.text__00464880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00464880(uint param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  int *piVar10;
  
  piVar10 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar10 + 4);
  while( true ) {
    while (iVar8 = *piVar10, -1 < iVar8) {
      while (*piVar10 == iVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar6) {
          *piVar10 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB__text__004648f8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar10 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__004648f8:
  uVar4 = piVar10[0x1a];
  if (uVar4 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = param_1 / uVar4;
    }
    for (plVar9 = *(long **)(*(long *)(piVar10 + 0x18) + (ulong)(param_1 - uVar7 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == param_1) {
        piVar2 = (int *)((long)plVar9 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        break;
      }
    }
  }
  do {
    iVar8 = *piVar10;
    if (iVar8 < 0) {
      nn::os::UnlockMutex(pMVar1);
joined_r0x00464a00:
      if (plVar9 == (long *)0x0) {
        return 2;
      }
      iVar8 = (**(code **)(plVar9[-2] + 0x138))();
      if (iVar8 != 1) {
        piVar10 = (int *)((long)plVar9 + 0x14);
        do {
          iVar3 = *piVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar6) {
            *piVar10 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      return iVar8;
    }
    while (*piVar10 == iVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if ((iVar8 + -1 == 0) && (0 < piVar10[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar10 + 0xe));
        }
        goto joined_r0x00464a00;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


