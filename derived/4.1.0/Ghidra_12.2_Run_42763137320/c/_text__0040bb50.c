/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040bb50; name: FUN_.text__0040bb50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0040bb50(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                       undefined4 param_9)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int *local_98;
  undefined1 auStack_8c [4];
  undefined8 local_88;
  int local_80;
  undefined4 uStack_7c;
  int *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (DAT_00ae9ab0 != '\0') {
    lVar14 = *_DAT_008a45c8;
    piVar1 = (int *)(lVar14 + 0x168);
    pMVar2 = (MutexType *)(lVar14 + 0x178);
    while( true ) {
      while (iVar9 = *piVar1, -1 < iVar9) {
        while (*piVar1 == iVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__0040bc08;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__0040bc08:
    uVar4 = *(uint *)(lVar14 + 0x1d0);
    if (uVar4 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = param_2 / uVar4;
      }
      plVar12 = *(long **)(*(long *)(lVar14 + 0x1c8) + (ulong)(param_2 - uVar7 * uVar4) * 8);
      if (plVar12 != (long *)0x0) {
LAB__text__0040bc30:
        if (*(uint *)(plVar12 + 2) != param_2) goto code_r0x0040bc3c;
        piVar3 = (int *)((long)plVar12 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
LAB__text__0040bc74:
    while (iVar9 = *piVar1, -1 < iVar9) {
      while (*piVar1 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar14 + 0x198))) {
            nn::os::SignalEvent((EventType *)(lVar14 + 0x1a0));
          }
          goto joined_r0x0040bcb0;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
joined_r0x0040bcb0:
    if (plVar12 == (long *)0x0) {
      return 0;
    }
    if (param_7 == 0) {
      local_68 = 0;
      local_78 = (int *)0x0;
      local_70 = 0;
      piVar1 = _DAT_008a45d0;
    }
    else {
      local_70 = 0;
      local_68 = 0;
      iVar9 = FUN__text__0040be90(param_7,param_8,&local_98,auStack_8c);
      if (iVar9 != 1) {
        return 0;
      }
      local_78 = local_98;
      piVar1 = _DAT_008a45d0;
    }
    do {
      local_80 = *piVar1 + 1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = local_80;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puVar8 = _DAT_008a45d8;
    } while (cVar5 != '\0');
    uStack_7c = param_9;
    local_88 = param_3;
    iVar9 = FUN__text__0048cd94(*_DAT_008a45d8,&local_88,param_5,param_6,param_4,(int)plVar12[2]);
    if (iVar9 == 1) {
      FUN__text__00411c2c(&local_98);
      uVar10 = FUN__text__00447b30(DAT_00ae9a50,local_88);
      FUN__text__004b27a0(plVar12,uVar10,local_88,local_80,uStack_7c,&local_78,0,0);
      FUN__text__0048e190(*puVar8,local_80);
      piVar1 = (int *)((long)plVar12 + 0x14);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      piVar1 = local_78;
      if ((local_78 != (int *)0x0) && (iVar9 = *local_78, *local_78 = iVar9 + -1, iVar9 + -1 == 0))
      {
        uVar11 = (ulong)(uint)local_78[1];
        if (local_78[1] != 0) {
          uVar13 = 0;
          plVar12 = (long *)(local_78 + 4);
          do {
            if (*plVar12 != 0) {
              FUN__text__00400fc0(0);
              uVar11 = (ulong)(uint)piVar1[1];
            }
            uVar13 = uVar13 + 1;
            plVar12 = plVar12 + 4;
          } while (uVar13 < uVar11);
        }
        FUN__text__00400fc0(0,piVar1);
      }
      iVar9 = local_80;
      FUN__text__00411c70(&local_98);
      return iVar9;
    }
    piVar1 = (int *)((long)plVar12 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 1) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return 0;
code_r0x0040bc3c:
  plVar12 = (long *)plVar12[1];
  if (plVar12 == (long *)0x0) goto LAB__text__0040bc74;
  goto LAB__text__0040bc30;
}


