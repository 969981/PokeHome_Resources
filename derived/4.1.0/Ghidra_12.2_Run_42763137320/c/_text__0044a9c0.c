/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a9c0; name: FUN_.text__0044a9c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0044a9c0(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  MutexType *pMVar10;
  int *piVar11;
  long lVar12;
  
  piVar11 = (int *)*_DAT_008a45c8;
  if ((char)param_1[1] == '\0') {
    uVar5 = *param_1;
    pMVar10 = (MutexType *)(piVar11 + 4);
    while( true ) {
      while (iVar4 = *piVar11, -1 < iVar4) {
        while (*piVar11 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar8) {
            *piVar11 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__0044aad8;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar10);
      if (*piVar11 < 0) break;
      nn::os::UnlockMutex(pMVar10);
    }
LAB__text__0044aad8:
    uVar6 = piVar11[0x1a];
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      lVar12 = *(long *)(*(long *)(piVar11 + 0x18) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (lVar12 != 0) {
LAB__text__0044aaf4:
        if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x0044ab00;
        piVar2 = (int *)(lVar12 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
LAB__text__0044ab98:
    while (iVar4 = *piVar11, -1 < iVar4) {
      while (*piVar11 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar8) {
          *piVar11 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar11[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar11 + 0xe));
          }
          goto LAB__text__0044abe0;
        }
      }
      ClearExclusiveLocal();
    }
  }
  else {
    uVar5 = *param_1;
    piVar2 = piVar11 + 0x1e;
    pMVar10 = (MutexType *)(piVar11 + 0x22);
    while( true ) {
      while (iVar4 = *piVar2, -1 < iVar4) {
        while (*piVar2 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__0044aa48;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar10);
      if (*piVar2 < 0) break;
      nn::os::UnlockMutex(pMVar10);
    }
LAB__text__0044aa48:
    uVar6 = piVar11[0x38];
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      lVar12 = *(long *)(*(long *)(piVar11 + 0x36) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (lVar12 != 0) {
LAB__text__0044aa64:
        if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x0044aa70;
        piVar1 = (int *)(lVar12 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
LAB__text__0044ab38:
    while (iVar4 = *piVar2, -1 < iVar4) {
      while (*piVar2 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar11[0x2a])) {
            nn::os::SignalEvent((EventType *)(piVar11 + 0x2c));
          }
          goto LAB__text__0044abe0;
        }
      }
      ClearExclusiveLocal();
    }
  }
  nn::os::UnlockMutex(pMVar10);
LAB__text__0044abe0:
  lVar3 = 0;
  if (lVar12 != 0) {
    lVar3 = lVar12 + -0x10;
  }
  return lVar3;
code_r0x0044ab00:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__0044ab98;
  goto LAB__text__0044aaf4;
code_r0x0044aa70:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__0044ab38;
  goto LAB__text__0044aa64;
}


