/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fdfb8; name: FUN_.text__003fdfb8
 */


void FUN__text__003fdfb8(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x1e8);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x210);
  *(int *)(param_1 + 0x210) = iVar2 + 1;
  if (iVar2 == 0) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x208));
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


