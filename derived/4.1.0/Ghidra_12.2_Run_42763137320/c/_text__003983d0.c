/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003983d0; name: FUN_.text__003983d0
 */


void FUN__text__003983d0(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    plVar3 = (long *)(param_1 + 8);
    lVar4 = *plVar3;
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar4 != lVar2) {
      do {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                  (*(long **)(param_1 + 0x38),*(undefined8 *)(lVar4 + 8),
                   *(undefined8 *)(lVar4 + 0x10));
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar2);
      lVar4 = *plVar3;
    }
    *(long *)(param_1 + 0x10) = lVar4;
    FUN__text__003986e0(plVar3);
  }
  else if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


