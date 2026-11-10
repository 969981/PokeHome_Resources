/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464a20; name: FUN_.text__00464a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00464a20(uint param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  
  piVar9 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar9 + 4);
  while( true ) {
    while (iVar3 = *piVar9, -1 < iVar3) {
      while (*piVar9 == iVar3) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB__text__00464a98;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar9 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__00464a98:
  uVar4 = piVar9[0x1a];
  if (uVar4 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = param_1 / uVar4;
    }
    for (plVar8 = *(long **)(*(long *)(piVar9 + 0x18) + (ulong)(param_1 - uVar7 * uVar4) * 8);
        plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      if (*(uint *)(plVar8 + 2) == param_1) {
        piVar2 = (int *)((long)plVar8 + 0x14);
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
    iVar3 = *piVar9;
    if (iVar3 < 0) {
      nn::os::UnlockMutex(pMVar1);
joined_r0x00464bac:
      if (plVar8 != (long *)0x0) {
        (**(code **)(plVar8[-2] + 0x140))(plVar8 + -2);
        piVar9 = (int *)((long)plVar8 + 0x14);
        do {
          iVar3 = *piVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        do {
          iVar3 = *piVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00464ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x20))(plVar8);
          return;
        }
      }
      return;
    }
    while (*piVar9 == iVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar6) {
        *piVar9 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if ((iVar3 + -1 == 0) && (0 < piVar9[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar9 + 0xe));
        }
        goto joined_r0x00464bac;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


