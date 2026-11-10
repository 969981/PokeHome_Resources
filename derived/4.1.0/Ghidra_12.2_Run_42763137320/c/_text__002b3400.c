/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b3400; name: FUN_.text__002b3400
 */


void FUN__text__002b3400(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  plVar3 = (long *)(param_1 + 8);
  lVar5 = *plVar3;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar5 != lVar2) {
    do {
      if (*(long *)(lVar5 + 8) != 0 && *(long *)(lVar5 + 0x10) != 0) {
        plVar4 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar4 + 0x18))(plVar4,*(long *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x18));
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
      }
      lVar5 = lVar5 + 0x30;
    } while (lVar5 != lVar2);
    lVar5 = *plVar3;
  }
  *(long *)(param_1 + 0x10) = lVar5;
  FUN__text__002b4db0(plVar3);
  nn::os::UnlockMutex(pMVar1);
  return;
}


