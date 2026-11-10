/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d170; name: FUN_.text__0046d170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046d170(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                        undefined8 param_5)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar13 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar13 + 0x348);
  pMVar2 = (MutexType *)(lVar13 + 0x358);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__0046d208;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__0046d208:
  uVar5 = *(uint *)(lVar13 + 0x3b0);
  if (uVar5 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = param_3 / uVar5;
    }
    for (plVar11 = *(long **)(*(long *)(lVar13 + 0x3a8) + (ulong)(param_3 - uVar8 * uVar5) * 8);
        plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
      if (*(uint *)(plVar11 + 2) == param_3) {
        piVar3 = (int *)((long)plVar11 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        break;
      }
    }
  }
  do {
    iVar4 = *piVar1;
    if (iVar4 < 0) {
      nn::os::UnlockMutex(pMVar2);
joined_r0x0046d37c:
      if (plVar11 != (long *)0x0) {
        local_78 = *param_2;
        uStack_70 = 0;
        local_68 = *(undefined4 *)(param_2 + 2);
        uVar9 = (ulong)*(uint *)(plVar11 + 10);
        if (*(uint *)(plVar11 + 10) != 0) {
          puVar10 = (undefined8 *)plVar11[9];
          puVar12 = puVar10;
          do {
            if (*(char *)((long)*puVar12 + 0xd) == '\x04') {
              FUN__text__0046d170(param_1,&local_78,*(undefined4 *)*puVar12,param_4,param_5);
              puVar10 = (undefined8 *)plVar11[9];
              uVar9 = (ulong)*(uint *)(plVar11 + 10);
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar10 + uVar9);
        }
        FUN__text__0046d088(param_1,plVar11,param_2,param_4,param_5);
        piVar1 = (int *)((long)plVar11 + 0x14);
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
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
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
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar13 + 0x378))) {
          nn::os::SignalEvent((EventType *)(lVar13 + 0x380));
        }
        goto joined_r0x0046d37c;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


