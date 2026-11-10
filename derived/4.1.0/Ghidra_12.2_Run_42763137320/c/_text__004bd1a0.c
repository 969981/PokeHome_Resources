/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd1a0; name: FUN_.text__004bd1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004bd1a0(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_440 [128];
  
  if (*(char *)(param_2 + 8) == '\0') {
    return;
  }
  lVar12 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar12 + 0x3c0);
  pMVar2 = (MutexType *)(lVar12 + 0x3d0);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__004bd228;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__004bd228:
  if (*(uint *)(lVar12 + 0x430) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (long)alStack_440 +
             (0x400 - ((ulong)*(uint *)(lVar12 + 0x430) * 8 + 0xf & 0xffffffff0));
    if (*(int *)(lVar12 + 0x428) != 0) {
      lVar10 = **(long **)(lVar12 + 0x420);
      if (lVar10 == 0) {
        uVar9 = 0;
        do {
          if (*(int *)(lVar12 + 0x428) - 1 == uVar9) goto LAB__text__004bd268;
          lVar10 = (*(long **)(lVar12 + 0x420))[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (lVar10 == 0);
      }
      else {
        uVar9 = 0;
      }
      uVar13 = 0;
      do {
        do {
          piVar3 = (int *)(lVar10 + 0x14);
          *(long *)(lVar11 + uVar13 * 8) = lVar10;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = *piVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          lVar10 = *(long *)(lVar10 + 8);
          uVar13 = uVar13 + 1;
        } while (lVar10 != 0);
        uVar5 = *(uint *)(lVar12 + 0x428);
        if (uVar5 <= (int)uVar9 + 1U) {
          uVar5 = (int)uVar9 + 1;
        }
        do {
          if (uVar5 - 1 == (int)uVar9) goto LAB__text__004bd304;
          uVar9 = (ulong)((int)uVar9 + 1);
          lVar10 = *(long *)(*(long *)(lVar12 + 0x420) + uVar9 * 8);
        } while (lVar10 == 0);
      } while( true );
    }
  }
LAB__text__004bd268:
  uVar13 = 0;
LAB__text__004bd304:
  do {
    iVar4 = *piVar1;
    if (iVar4 < 0) {
      nn::os::UnlockMutex(pMVar2);
joined_r0x004bd3ac:
      if ((int)uVar13 == 0) {
        return;
      }
      uVar9 = 0;
      do {
        FUN__text__004be8a0(*(undefined8 *)(lVar11 + uVar9 * 8),*param_2,
                            *(undefined8 *)(param_2 + 2));
        plVar8 = *(long **)(lVar11 + uVar9 * 8);
        piVar1 = (int *)((long)plVar8 + 0x14);
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
          (**(code **)(*plVar8 + 0x20))();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != (uVar13 & 0xffffffff));
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
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar12 + 0x3f0))) {
          nn::os::SignalEvent((EventType *)(lVar12 + 0x3f8));
        }
        goto joined_r0x004bd3ac;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


