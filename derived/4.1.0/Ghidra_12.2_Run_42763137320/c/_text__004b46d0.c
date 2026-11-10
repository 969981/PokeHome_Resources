/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b46d0; name: FUN_.text__004b46d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__004b46d0(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  MutexType *pMVar9;
  int *piVar10;
  long lVar11;
  
  piVar10 = (int *)*_DAT_008a45c8;
  if (param_2 == 0) {
    pMVar9 = (MutexType *)(piVar10 + 4);
    while( true ) {
      while (iVar4 = *piVar10, -1 < iVar4) {
        while (*piVar10 == iVar4) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar7) {
            *piVar10 = iVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__004b47e8;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar9);
      if (*piVar10 < 0) break;
      nn::os::UnlockMutex(pMVar9);
    }
LAB__text__004b47e8:
    uVar5 = piVar10[0x1a];
    if (uVar5 == 0) {
      lVar11 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = param_1 / uVar5;
      }
      lVar11 = *(long *)(*(long *)(piVar10 + 0x18) + (ulong)(param_1 - uVar8 * uVar5) * 8);
      if (lVar11 != 0) {
LAB__text__004b4804:
        if (*(uint *)(lVar11 + 0x10) != param_1) goto code_r0x004b4810;
        piVar2 = (int *)(lVar11 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
LAB__text__004b48a8:
    while (iVar4 = *piVar10, -1 < iVar4) {
      while (*piVar10 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar10[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar10 + 0xe));
          }
          goto LAB__text__004b48f0;
        }
      }
      ClearExclusiveLocal();
    }
  }
  else {
    piVar2 = piVar10 + 0x1e;
    pMVar9 = (MutexType *)(piVar10 + 0x22);
    while( true ) {
      while (iVar4 = *piVar2, -1 < iVar4) {
        while (*piVar2 == iVar4) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__004b4758;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar9);
      if (*piVar2 < 0) break;
      nn::os::UnlockMutex(pMVar9);
    }
LAB__text__004b4758:
    uVar5 = piVar10[0x38];
    if (uVar5 == 0) {
      lVar11 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = param_1 / uVar5;
      }
      lVar11 = *(long *)(*(long *)(piVar10 + 0x36) + (ulong)(param_1 - uVar8 * uVar5) * 8);
      if (lVar11 != 0) {
LAB__text__004b4774:
        if (*(uint *)(lVar11 + 0x10) != param_1) goto code_r0x004b4780;
        piVar1 = (int *)(lVar11 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
LAB__text__004b4848:
    while (iVar4 = *piVar2, -1 < iVar4) {
      while (*piVar2 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar10[0x2a])) {
            nn::os::SignalEvent((EventType *)(piVar10 + 0x2c));
          }
          goto LAB__text__004b48f0;
        }
      }
      ClearExclusiveLocal();
    }
  }
  nn::os::UnlockMutex(pMVar9);
LAB__text__004b48f0:
  lVar3 = 0;
  if (lVar11 != 0) {
    lVar3 = lVar11 + -0x10;
  }
  return lVar3;
code_r0x004b4810:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == 0) goto LAB__text__004b48a8;
  goto LAB__text__004b4804;
code_r0x004b4780:
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 == 0) goto LAB__text__004b4848;
  goto LAB__text__004b4774;
}


