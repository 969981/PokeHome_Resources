/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042c560; name: FUN_.text__0042c560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042c560(long param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  
  FUN__text__00433a20(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0xff;
    *(undefined1 *)(param_1 + 0x30) = 0xff;
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar9 = *(long **)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((plVar9 != (long *)0x0) && ((int)plVar9[0xd] != 0)) {
    puVar10 = (undefined2 *)plVar9[0xc];
    do {
      if (*(char *)(puVar10 + 1) != '\0') {
        FUN__text__0042bf90(*(undefined4 *)(puVar10 + 2),param_1,*puVar10);
        plVar9 = *(long **)(param_1 + 0x58);
      }
      puVar10 = puVar10 + 4;
    } while (puVar10 != (undefined2 *)(plVar9[0xc] + (ulong)*(uint *)(plVar9 + 0xd) * 8));
  }
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,_DAT_008a47f0);
    plVar9 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (plVar9 != (long *)0x0) {
    pMVar1 = (MutexType *)(plVar9 + 0xe);
    nn::os::LockMutex(pMVar1);
    lVar8 = 0;
    plVar6 = plVar9 + 0x12;
    do {
      lVar7 = lVar8;
      lVar8 = *plVar6;
      plVar6 = (long *)(lVar8 + 0x70);
    } while (lVar8 != 0 && lVar8 != param_1);
    if (lVar8 == 0) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      plVar6 = plVar9 + 0x12;
      if (plVar9[0x12] != lVar8) {
        plVar6 = (long *)(lVar7 + 0x70);
      }
      *plVar6 = *(long *)(lVar8 + 0x70);
      nn::os::UnlockMutex(pMVar1);
      piVar2 = (int *)((long)plVar9 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}


