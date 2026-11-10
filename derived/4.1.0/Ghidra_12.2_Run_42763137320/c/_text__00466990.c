/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466990; name: FUN_.text__00466990
 */


void FUN__text__00466990(long param_1,long *param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  
  lVar10 = DAT_00ae9a38;
  do {
    lVar16 = param_1;
    if (((*(byte *)(lVar16 + 0xd3) >> 5 & 1) != 0) || (*(long *)(lVar16 + 0x78) == 0)) break;
    param_1 = *(long *)(lVar16 + 0x78);
  } while (*(long *)(lVar16 + 0x80) == 0);
  pbVar13 = *(byte **)(lVar16 + 0x90);
  if (pbVar13 == (byte *)0x0) {
LAB__text__00466ac8:
    plVar11 = (long *)*param_2;
    *param_2 = 0;
    if (plVar11 != (long *)0x0) {
      piVar1 = (int *)((long)plVar11 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
LAB__text__00466b98:
        (**(code **)(*plVar11 + 0x20))();
        *(undefined2 *)(param_2 + 1) = 0;
        return;
      }
    }
LAB__text__00466af4:
    *(undefined2 *)(param_2 + 1) = 0;
    return;
  }
  bVar6 = *pbVar13;
  uVar15 = (uint)bVar6;
  if (bVar6 < 2) {
    uVar15 = 1;
  }
  uVar12 = (ulong)uVar15;
  puVar14 = (uint *)(pbVar13 + ((ulong)bVar6 & 0xfc));
  while( true ) {
    puVar14 = puVar14 + 1;
    pbVar13 = pbVar13 + 1;
    if (*pbVar13 == 0x39) break;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB__text__00466ac8;
  }
  uVar15 = *puVar14;
  if (uVar15 == 0xffffffff) goto LAB__text__00466ac8;
  piVar1 = (int *)(DAT_00ae9a38 + 0x4b0);
  pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x4c0);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') goto LAB__text__00466a88;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__00466a88:
  uVar5 = *(uint *)(lVar10 + 0x518);
  if (uVar5 == 0) {
    lVar16 = 0;
  }
  else {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar15 / uVar5;
    }
    for (lVar16 = *(long *)(*(long *)(lVar10 + 0x510) + (ulong)(uVar15 - uVar9 * uVar5) * 8);
        lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
      if (*(uint *)(lVar16 + 0x10) == uVar15) {
        piVar3 = (int *)(lVar16 + 0x14);
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
  while (iVar4 = *piVar1, -1 < iVar4) {
    while (*piVar1 == iVar4) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar10 + 0x4e0))) {
          nn::os::SignalEvent((EventType *)(lVar10 + 0x4e8));
        }
        plVar11 = (long *)*param_2;
        *param_2 = lVar16;
        if (plVar11 == (long *)0x0) goto LAB__text__00466af4;
        goto LAB__text__00466b80;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar2);
  plVar11 = (long *)*param_2;
  *param_2 = lVar16;
  if (plVar11 != (long *)0x0) {
LAB__text__00466b80:
    piVar1 = (int *)((long)plVar11 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 != 0) goto LAB__text__00466af4;
    goto LAB__text__00466b98;
  }
  goto LAB__text__00466af4;
}


