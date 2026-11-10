/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477aa0; name: FUN_.text__00477aa0
 */


void FUN__text__00477aa0(long param_1)

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
  undefined8 *puVar11;
  long lVar12;
  char local_44 [4];
  
  local_44[0] = '\x01';
  if (*(int *)(param_1 + 0x1e8) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x1e0);
    do {
      FUN__text__00432ba0(param_1 + 0x58,puVar11[2],local_44);
      if (local_44[0] == '\0') {
        FUN__text__00433930(param_1,*puVar11);
      }
      puVar11 = puVar11 + 3;
    } while (puVar11 !=
             (undefined8 *)(*(long *)(param_1 + 0x1e0) + (ulong)*(uint *)(param_1 + 0x1e8) * 0x18));
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  lVar10 = DAT_00ae9a38;
  if (*(long *)(param_1 + 0x1a0) == 0) {
    uVar5 = *(uint *)(param_1 + 0x18c);
    if (uVar5 == 0) goto LAB__text__00477b34;
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
          if (cVar7 == '\0') goto LAB__text__00477be8;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__00477be8:
    uVar6 = *(uint *)(lVar10 + 0x338);
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0x330) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
      if (lVar12 != 0) {
LAB__text__00477c04:
        if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x00477c10;
        piVar3 = (int *)(lVar12 + 0x14);
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
LAB__text__00477c48:
    while (iVar4 = *piVar1, -1 < iVar4) {
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
          *(long *)(param_1 + 0x1a0) = lVar12;
          goto joined_r0x00477c88;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
    *(long *)(param_1 + 0x1a0) = lVar12;
joined_r0x00477c88:
    if (lVar12 == 0) goto LAB__text__00477b34;
  }
  FUN__text__0047b3d0(param_1 + 0x188);
LAB__text__00477b34:
  lVar10 = *(long *)(param_1 + 0x1c8);
  if (lVar10 != 0) {
    FUN__text__0047b438(lVar10);
    FUN__text__00400fc0(5,lVar10);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  *(ushort *)(param_1 + 0x208) = *(ushort *)(param_1 + 0x208) | 0x20;
  return;
code_r0x00477c10:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__00477c48;
  goto LAB__text__00477c04;
}


