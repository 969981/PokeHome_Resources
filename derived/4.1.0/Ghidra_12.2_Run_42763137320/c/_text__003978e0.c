/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003978e0; name: FUN_.text__003978e0
 */


uint FUN__text__003978e0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 local_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == *(long *)(param_1 + 0x10)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      plVar4 = (long *)(lVar7 + 0x18);
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + *plVar4 + 4;
    } while (lVar7 != *(long *)(param_1 + 0x10));
  }
  nn::os::UnlockMutex(pMVar1);
  plVar4 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,plVar4[1]);
  if ((uVar3 & 1) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    for (puVar9 = *(undefined4 **)(param_1 + 8); puVar9 != puVar2; puVar9 = puVar9 + 8) {
      local_54 = *puVar9;
      plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,4,plVar4[1]);
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_54,4,0);
      }
      lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 4;
      lVar8 = *(long *)(puVar9 + 2);
      lVar7 = *(long *)(puVar9 + 6);
      plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar8 != 0) {
        plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
        uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,plVar4[1]);
        if ((uVar6 & 1) != 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,lVar7,0);
        }
      }
      lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + lVar7;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar3 & 1;
}


