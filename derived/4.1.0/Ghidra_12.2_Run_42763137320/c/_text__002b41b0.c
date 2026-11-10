/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b41b0; name: FUN_.text__002b41b0
 */


uint FUN__text__002b41b0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined4 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 local_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_1 + 0x98);
  nn::os::LockMutex(pMVar2);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  nn::os::LockMutex(pMVar1);
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == *(long *)(param_1 + 0x10)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      plVar5 = (long *)(lVar8 + 0x20);
      lVar8 = lVar8 + 0x30;
      lVar9 = lVar9 + *plVar5 + 4;
    } while (lVar8 != *(long *)(param_1 + 0x10));
  }
  nn::os::UnlockMutex(pMVar1);
  plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
  uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,plVar5[1]);
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb9) = 0;
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    for (lVar8 = *(long *)(param_1 + 8); lVar8 != lVar9; lVar8 = lVar8 + 0x30) {
      if (((*(char *)(lVar8 + 0x28) != '\0') && (*(void **)(lVar8 + 8) != (void *)0x0)) &&
         (*(void **)(lVar8 + 0x10) != (void *)0x0)) {
        memcpy(*(void **)(lVar8 + 0x10),*(void **)(lVar8 + 8),*(size_t *)(lVar8 + 0x20));
        *(undefined1 *)(lVar8 + 0x28) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0xb9) = 0;
    nn::os::UnlockMutex(pMVar2);
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    for (puVar10 = *(undefined4 **)(param_1 + 8); puVar10 != puVar3; puVar10 = puVar10 + 0xc) {
      local_54 = *puVar10;
      plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
      uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,4,plVar5[1]);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_54,4,0);
      }
      lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 4;
      lVar9 = *(long *)(puVar10 + 4);
      lVar8 = *(long *)(puVar10 + 8);
      plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar9 != 0) {
        plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
        uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,plVar5[1]);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8,0);
        }
      }
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + lVar8;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar4 & 1;
}


