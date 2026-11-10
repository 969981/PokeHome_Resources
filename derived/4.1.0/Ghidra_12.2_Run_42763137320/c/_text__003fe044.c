/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe044; name: FUN_.text__003fe044
 */


void FUN__text__003fe044(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  iVar1 = *(int *)(param_1 + 0x214);
  *(int *)(param_1 + 0x214) = iVar1 + 1;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x218) == '\0')) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x208));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  return;
}


