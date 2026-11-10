/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042dd40; name: FUN_.text__0042dd40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0042dd40(long param_1,uint param_2,int param_3,uint param_4)

{
  MutexType *pMVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *local_58;
  
  lVar11 = *_DAT_008a45c8;
  piVar7 = (int *)(lVar11 + 0xf0);
  pMVar1 = (MutexType *)(lVar11 + 0x100);
  while( true ) {
    while (iVar2 = *piVar7, -1 < iVar2) {
      while (*piVar7 == iVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB__text__0042ddd8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar7 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__0042ddd8:
  uVar9 = *(uint *)(lVar11 + 0x158);
  if (uVar9 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = param_2 / uVar9;
    }
    plVar10 = *(long **)(*(long *)(lVar11 + 0x150) + (ulong)(param_2 - uVar5 * uVar9) * 8);
    if (plVar10 != (long *)0x0) {
LAB__text__0042ddf4:
      if (*(uint *)(plVar10 + 2) != param_2) goto code_r0x0042de00;
      piVar8 = (int *)((long)plVar10 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
LAB__text__0042de38:
  while (iVar2 = *piVar7, -1 < iVar2) {
    while (*piVar7 == iVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar11 + 0x120))) {
          nn::os::SignalEvent((EventType *)(lVar11 + 0x128));
        }
        piVar7 = *(int **)(param_1 + 0x28);
        uVar9 = *(uint *)(param_1 + 0x30);
        goto joined_r0x0042dec0;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar1);
  piVar7 = *(int **)(param_1 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x30);
joined_r0x0042dec0:
  piVar8 = piVar7;
  if (uVar9 == 0) {
LAB__text__0042dec8:
    if (piVar8 != piVar7 + (ulong)uVar9 * 4) {
      if (plVar10 == *(long **)(piVar8 + 2)) {
        if (plVar10 == (long *)0x0) {
          return 1;
        }
        piVar7 = (int *)((long)plVar10 + 0x14);
        do {
          iVar2 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 0x20))(plVar10);
          return 1;
        }
        return 1;
      }
      FUN__text__00432270();
      plVar6 = *(long **)(piVar8 + 2);
      piVar7 = (int *)((long)plVar6 + 0x14);
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      piVar8 = *(int **)(param_1 + 0x28);
      uVar9 = *(uint *)(param_1 + 0x30);
      piVar7 = piVar8;
      if (uVar9 == 0) {
LAB__text__0042df80:
        if (piVar7 != piVar8 + (ulong)uVar9 * 4) {
          uVar9 = uVar9 - 1;
          if (piVar7 < piVar8 + (ulong)uVar9 * 4) {
            memmove(piVar7,piVar7 + 4,
                    (ulong)(uint)((int)(piVar8 + (ulong)uVar9 * 4) - (int)piVar7) & 0xfffffff0);
            uVar9 = *(int *)(param_1 + 0x30) - 1;
          }
          *(uint *)(param_1 + 0x30) = uVar9;
        }
      }
      else {
        lVar11 = (ulong)uVar9 << 4;
        do {
          if (*piVar7 == param_3) goto LAB__text__0042df80;
          piVar7 = piVar7 + 4;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
    }
  }
  else {
    lVar11 = (ulong)uVar9 << 4;
    do {
      if (*piVar8 == param_3) goto LAB__text__0042dec8;
      piVar8 = piVar8 + 4;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  if (plVar10 == (long *)0x0) {
    return 0x10;
  }
  local_58 = plVar10;
  lVar11 = FUN__text__0042ecf0(param_1 + 0x28,param_3,&local_58);
  if (lVar11 != 0) {
    FUN__text__00432268(plVar10,*(undefined8 *)(param_1 + 0x18));
    if ((param_4 & 1) != 0) {
      FUN__text__0042d4a0(*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
  piVar7 = (int *)((long)plVar10 + 0x14);
  do {
    iVar2 = *piVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar4) {
      *piVar7 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 1) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return 0x34;
code_r0x0042de00:
  plVar10 = (long *)plVar10[1];
  if (plVar10 == (long *)0x0) goto LAB__text__0042de38;
  goto LAB__text__0042ddf4;
}


