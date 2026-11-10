/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00410a80; name: FUN_.text__00410a80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00410a80(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  if (DAT_00ae9ab0 == '\0') {
    return 0x66;
  }
  if (param_1 == 0) {
    return 0xe;
  }
  lVar11 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar11 + 0x5a0);
  pMVar2 = (MutexType *)(lVar11 + 0x5b0);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__00410b28;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__00410b28:
  uVar5 = *(uint *)(lVar11 + 0x608);
  if (uVar5 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = param_1 / uVar5;
    }
    for (plVar10 = *(long **)(*(long *)(lVar11 + 0x600) + (ulong)(param_1 - uVar8 * uVar5) * 8);
        plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == param_1) {
        piVar3 = (int *)((long)plVar10 + 0x14);
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
joined_r0x00410c54:
      if (plVar10 == (long *)0x0) {
        return 0xf;
      }
      uVar5 = *(uint *)(plVar10 + 6);
      piVar1 = (int *)((long)plVar10 + 0x14);
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
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      uVar9 = FUN__text__00410910(uVar5 >> 4 & 0xfff,uVar5 >> 0x10,param_2,param_3);
      return uVar9;
    }
    while (*piVar1 == iVar4) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x5d0))) {
          nn::os::SignalEvent((EventType *)(lVar11 + 0x5d8));
        }
        goto joined_r0x00410c54;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


