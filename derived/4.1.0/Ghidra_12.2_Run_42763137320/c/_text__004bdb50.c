/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bdb50; name: FUN_.text__004bdb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004bdb50(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar10 = _DAT_008a45c0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN__text__004b42a0(*puVar10,*(undefined4 *)(param_1 + 0x6c));
  piVar2 = DAT_00ae9a38;
  if ((param_2 == 0) && (uVar5 = *(uint *)(param_1 + 0x90), uVar5 != 0)) {
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 4);
    while( true ) {
      while (iVar4 = *piVar2, -1 < iVar4) {
        while (*piVar2 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__004bdc08;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar2 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__004bdc08:
    uVar6 = piVar2[0x1a];
    if (uVar6 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      plVar12 = *(long **)(*(long *)(piVar2 + 0x18) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (plVar12 != (long *)0x0) {
LAB__text__004bdc24:
        if (*(uint *)(plVar12 + 2) != uVar5) goto code_r0x004bdc30;
        piVar3 = (int *)((long)plVar12 + 0x14);
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
LAB__text__004bdc68:
    while (iVar4 = *piVar2, -1 < iVar4) {
      while (*piVar2 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar2[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar2 + 0xe));
          }
          goto joined_r0x004bdca4;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
joined_r0x004bdca4:
    if (plVar12 != (long *)0x0) {
      FUN__text__0046469c(plVar12 + -2,*(undefined8 *)(param_1 + 0x50),
                          *(undefined4 *)(param_1 + 0x6c),param_3,param_4);
      piVar2 = (int *)((long)plVar12 + 0x14);
      do {
        iVar4 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  piVar2 = DAT_00ae9a38;
  uVar5 = *(uint *)(param_1 + 0x78);
  if (uVar5 != 0) {
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 4);
    while( true ) {
      while (iVar4 = *piVar2, -1 < iVar4) {
        while (*piVar2 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__004bdd68;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar2 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__004bdd68:
    uVar6 = piVar2[0x1a];
    if (uVar6 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      plVar12 = *(long **)(*(long *)(piVar2 + 0x18) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (plVar12 != (long *)0x0) {
LAB__text__004bdd84:
        if (*(uint *)(plVar12 + 2) != uVar5) goto code_r0x004bdd90;
        piVar3 = (int *)((long)plVar12 + 0x14);
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
LAB__text__004bddc8:
    while (iVar4 = *piVar2, -1 < iVar4) {
      while (*piVar2 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < piVar2[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar2 + 0xe));
          }
          if (plVar12 == (long *)0x0) {
            return 1;
          }
          goto LAB__text__004bde08;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
    if (plVar12 != (long *)0x0) {
LAB__text__004bde08:
      plVar11 = plVar12 + -2;
      if (param_2 == 0) {
        FUN__text__0046469c(plVar11,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),
                            param_3,param_4);
      }
      else {
        (**(code **)(*plVar11 + 0xb0))(plVar11,*(undefined8 *)(param_1 + 0x50),plVar11);
      }
      piVar2 = (int *)((long)plVar12 + 0x14);
      do {
        iVar4 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
  }
  return 1;
code_r0x004bdc30:
  plVar12 = (long *)plVar12[1];
  if (plVar12 == (long *)0x0) goto LAB__text__004bdc68;
  goto LAB__text__004bdc24;
code_r0x004bdd90:
  plVar12 = (long *)plVar12[1];
  if (plVar12 == (long *)0x0) goto LAB__text__004bddc8;
  goto LAB__text__004bdd84;
}


