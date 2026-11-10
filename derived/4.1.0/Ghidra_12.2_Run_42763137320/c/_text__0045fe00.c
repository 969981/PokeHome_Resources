/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fe00; name: FUN_.text__0045fe00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045fe00(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  plVar11 = _DAT_008a45c8;
  plVar14 = *(long **)(param_1 + 0x120);
  do {
    if (plVar14 == (long *)0x0) {
      return;
    }
    lVar15 = *plVar11;
    piVar1 = (int *)(lVar15 + 0x78);
    uVar6 = *(uint *)(plVar14 + 1);
    pMVar2 = (MutexType *)(lVar15 + 0x88);
    while( true ) {
      while (iVar5 = *piVar1, -1 < iVar5) {
        while (*piVar1 == iVar5) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__0045fea0;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__0045fea0:
    uVar7 = *(uint *)(lVar15 + 0xe0);
    if (uVar7 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar6 / uVar7;
      }
      plVar13 = *(long **)(*(long *)(lVar15 + 0xd8) + (ulong)(uVar6 - uVar10 * uVar7) * 8);
      if (plVar13 != (long *)0x0) {
LAB__text__0045fec0:
        if (*(uint *)(plVar13 + 2) != uVar6) break;
        piVar3 = (int *)((long)plVar13 + 0x14);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
    }
LAB__text__0045ff08:
    while (iVar5 = *piVar1, -1 < iVar5) {
      while (*piVar1 == iVar5) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') {
          if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar15 + 0xa8))) {
            nn::os::SignalEvent((EventType *)(lVar15 + 0xb0));
          }
          goto joined_r0x0045ff44;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
joined_r0x0045ff44:
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + -2;
      bVar4 = *(byte *)(param_1 + 0x19c) & 7;
      if (bVar4 == 2) {
        FUN__text__0045fce0(plVar12,*(undefined4 *)(param_1 + 0x20));
      }
      else if (bVar4 == 1) {
        FUN__text__0045f8d0(*(undefined4 *)((long)plVar14 + 0xc),plVar12,
                            *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(plVar14 + 2),
                            *(undefined4 *)(plVar14 + 3),*(undefined4 *)((long)plVar14 + 0x1c));
      }
      else if ((*(byte *)(param_1 + 0x19c) & 7) == 0) {
        FUN__text__0045fb20(plVar12,*(undefined4 *)(param_1 + 0x20),
                            *(undefined4 *)((long)plVar14 + 0x14),*(undefined4 *)(plVar14 + 3),
                            *(undefined4 *)((long)plVar14 + 0x1c));
      }
      piVar1 = (int *)((long)plVar13 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    plVar14 = (long *)*plVar14;
  } while( true );
  plVar13 = (long *)plVar13[1];
  if (plVar13 == (long *)0x0) goto LAB__text__0045ff08;
  goto LAB__text__0045fec0;
}


