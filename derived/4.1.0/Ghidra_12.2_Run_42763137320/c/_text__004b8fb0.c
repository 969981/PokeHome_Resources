/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8fb0; name: FUN_.text__004b8fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b8fb0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) &&
     (iVar9 = FUN__text__0047c040(*_DAT_008a4650), iVar9 == 1)) {
    *(long *)(param_1 + 0x50) = *param_2;
    uVar4 = *(uint *)(param_2 + 1);
    piVar11 = (int *)*_DAT_008a45c8;
    *(uint *)(param_1 + 0x58) = uVar4;
    pMVar1 = (MutexType *)(piVar11 + 4);
    while( true ) {
      while (iVar9 = *piVar11, -1 < iVar9) {
        while (*piVar11 == iVar9) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar7) {
            *piVar11 = iVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__004b9074;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar1);
      if (*piVar11 < 0) break;
      nn::os::UnlockMutex(pMVar1);
    }
LAB__text__004b9074:
    uVar5 = piVar11[0x1a];
    if (uVar5 == 0) {
      lVar12 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar4 / uVar5;
      }
      lVar12 = *(long *)(*(long *)(piVar11 + 0x18) + (ulong)(uVar4 - uVar8 * uVar5) * 8);
      if (lVar12 != 0) {
LAB__text__004b9090:
        if (*(uint *)(lVar12 + 0x10) != uVar4) goto code_r0x004b909c;
        piVar2 = (int *)(lVar12 + 0x14);
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
LAB__text__004b90cc:
    while (iVar9 = *piVar11, -1 < iVar9) {
      while (*piVar11 == iVar9) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = iVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if ((iVar9 + -1 == 0) && (0 < piVar11[0xc])) {
            nn::os::SignalEvent((EventType *)(piVar11 + 0xe));
          }
          goto LAB__text__004b911c;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
LAB__text__004b911c:
    lVar3 = 0;
    if (lVar12 != 0) {
      lVar3 = lVar12 + -0x10;
    }
    *(long *)(param_1 + 0xf0) = lVar3;
  }
  if (lVar10 != 0) {
    piVar11 = (int *)(lVar10 + 0x24);
    do {
      iVar9 = *piVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar7) {
        *piVar11 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004b9164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar10 + 0x10) + 0x20))((long *)(lVar10 + 0x10));
      return;
    }
  }
  return;
code_r0x004b909c:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__004b90cc;
  goto LAB__text__004b9090;
}


