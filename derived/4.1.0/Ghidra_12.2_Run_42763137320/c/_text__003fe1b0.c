/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe1b0; name: FUN_.text__003fe1b0
 */


void FUN__text__003fe1b0(long param_1,long param_2)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0x220);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_2 + 8) != 0) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x240),pMVar1);
    } while (*(long *)(param_2 + 8) != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


