/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498810; name: FUN_.text__00498810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00498810(uint *param_1,long param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  int *piVar11;
  
  if (*(long *)(param_1 + 2) != 0) {
    return 1;
  }
  uVar3 = *param_1;
  piVar11 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar11 + 4);
  while( true ) {
    while (iVar8 = *piVar11, -1 < iVar8) {
      while (*piVar11 == iVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB__text__004988b8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar11 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__004988b8:
  uVar4 = piVar11[0x1a];
  if (uVar4 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    plVar10 = *(long **)(*(long *)(piVar11 + 0x18) + (ulong)(uVar3 - uVar7 * uVar4) * 8);
    if (plVar10 != (long *)0x0) {
LAB__text__004988d4:
      if (*(uint *)(plVar10 + 2) != uVar3) goto code_r0x004988e0;
      piVar2 = (int *)((long)plVar10 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
LAB__text__00498918:
  while (iVar8 = *piVar11, -1 < iVar8) {
    while (*piVar11 == iVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if ((iVar8 + -1 == 0) && (0 < piVar11[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar11 + 0xe));
        }
        goto joined_r0x00498954;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar1);
joined_r0x00498954:
  if (plVar10 == (long *)0x0) {
    return 1;
  }
  if ((*(long *)(param_2 + 0x40) != 0) && (plVar10[0xd] != 0)) {
    if (plVar10[0xd] != *(long *)(param_2 + 0x40)) {
      uVar9 = 2;
      goto LAB__text__004989dc;
    }
    uVar9 = *(undefined8 *)(param_1 + 2);
    *(long **)(param_1 + 2) = plVar10 + -2;
    iVar8 = FUN__text__00496000(plVar10 + -2,param_2);
    if (iVar8 == 1) {
      FUN__text__0049a1f0(*(undefined8 *)(param_2 + 0x40),param_2,param_1,uVar9);
    }
    else {
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  uVar9 = 1;
LAB__text__004989dc:
  piVar11 = (int *)((long)plVar10 + 0x14);
  do {
    iVar8 = *piVar11;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar6) {
      *piVar11 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    return uVar9;
  }
  return uVar9;
code_r0x004988e0:
  plVar10 = (long *)plVar10[1];
  if (plVar10 == (long *)0x0) goto LAB__text__00498918;
  goto LAB__text__004988d4;
}


