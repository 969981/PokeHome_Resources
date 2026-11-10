/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b010; name: FUN_.text__0045b010
 */


long FUN__text__0045b010(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = DAT_00ae9a38;
  if ((*(ushort *)(param_1 + 0x19c) >> 6 & 1) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x1a0);
    if (lVar11 == 0) {
      uVar5 = *(uint *)(param_1 + 0x18c);
      if (uVar5 == 0) {
        return 0;
      }
      piVar1 = (int *)(DAT_00ae9a38 + 0x2d0);
      pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x2e0);
      while( true ) {
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB__text__0045b0bc;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar2);
        if (*piVar1 < 0) break;
        nn::os::UnlockMutex(pMVar2);
      }
LAB__text__0045b0bc:
      uVar6 = *(uint *)(lVar10 + 0x338);
      if (uVar6 == 0) {
        lVar11 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        for (lVar11 = *(long *)(*(long *)(lVar10 + 0x330) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
            lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint *)(lVar11 + 0x10) == uVar5) {
            piVar3 = (int *)(lVar11 + 0x14);
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
LAB__text__0045b180:
          *(long *)(param_1 + 0x1a0) = lVar11;
          return lVar11;
        }
        while (*piVar1 == iVar4) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar10 + 0x300))) {
              nn::os::SignalEvent((EventType *)(lVar10 + 0x308));
            }
            goto LAB__text__0045b180;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  return lVar11;
}


