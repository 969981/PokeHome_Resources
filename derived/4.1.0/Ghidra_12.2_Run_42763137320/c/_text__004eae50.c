/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eae50; name: FUN_.text__004eae50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__004eae50(long param_1,uint param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 auStack_5c [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  byte local_44;
  
  piVar10 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar10 + 4);
  while( true ) {
    while (iVar7 = *piVar10, -1 < iVar7) {
      while (*piVar10 == iVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__004eaed8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar10 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__004eaed8:
  uVar3 = piVar10[0x1a];
  if (uVar3 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    for (plVar9 = *(long **)(*(long *)(piVar10 + 0x18) + (ulong)(param_2 - uVar6 * uVar3) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == param_2) {
        piVar2 = (int *)((long)plVar9 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        break;
      }
    }
  }
  do {
    iVar7 = *piVar10;
    if (iVar7 < 0) {
      nn::os::UnlockMutex(pMVar1);
joined_r0x004eb040:
      if (plVar9 == (long *)0x0) {
        plVar8 = (long *)0x0;
        *param_3 = 0;
      }
      else {
        plVar8 = (long *)(**(code **)(plVar9[-2] + 0x290))
                                   (plVar9 + -2,*(undefined8 *)(param_1 + 0x10),
                                    *(undefined8 *)(param_1 + 0x30),param_1 + 0x18,0);
        if (plVar8 != (long *)0x0) {
          local_50 = 0;
          local_58[0] = 0;
          local_48 = 0;
          local_6c = 0;
          local_44 = local_44 & 7 | 0x40;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          iVar7 = (**(code **)(*plVar8 + 0xb0))(plVar8,local_58,0,&local_6c,param_3,auStack_5c,0,0);
          if (iVar7 == 0) {
            FUN__text__004ec13c(plVar8);
            plVar8 = (long *)0x0;
          }
        }
        piVar10 = (int *)((long)plVar9 + 0x14);
        do {
          iVar7 = *piVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      return plVar8;
    }
    while (*piVar10 == iVar7) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if ((iVar7 + -1 == 0) && (0 < piVar10[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar10 + 0xe));
        }
        goto joined_r0x004eb040;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


