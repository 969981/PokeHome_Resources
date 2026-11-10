/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fccb0; name: FUN_.text__004fccb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fccb0(long param_1,uint param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  
  piVar11 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar11 + 4);
  while( true ) {
    while (iVar3 = *piVar11, -1 < iVar3) {
      while (*piVar11 == iVar3) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB__text__004fcd38;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar11 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__004fcd38:
  uVar4 = piVar11[0x1a];
  if (uVar4 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = param_2 / uVar4;
    }
    for (plVar10 = *(long **)(*(long *)(piVar11 + 0x18) + (ulong)(param_2 - uVar7 * uVar4) * 8);
        plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == param_2) {
        piVar2 = (int *)((long)plVar10 + 0x14);
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
    iVar3 = *piVar11;
    if (iVar3 < 0) {
      nn::os::UnlockMutex(pMVar1);
joined_r0x004fce54:
      if (plVar10 == (long *)0x0) {
        return 0;
      }
      lVar9 = *(long *)(param_1 + 0x60);
      uVar8 = (**(code **)(plVar10[-2] + 0x290))
                        (plVar10 + -2,param_1,*(undefined8 *)(lVar9 + 0x30),lVar9 + 0x18,
                         *(undefined1 *)(lVar9 + 0x38));
      piVar11 = (int *)((long)plVar10 + 0x14);
      do {
        iVar3 = *piVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      return uVar8;
    }
    while (*piVar11 == iVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if ((iVar3 + -1 == 0) && (0 < piVar11[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar11 + 0xe));
        }
        goto joined_r0x004fce54;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


