/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fdf4c; name: FUN_.text__003fdf4c
 */


void FUN__text__003fdf4c(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  *(undefined1 *)(param_1 + 0x268) = 0;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x208));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  if (*(char *)(param_1 + 0x50) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0x10));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x10));
    if (*(long *)(param_1 + 0x1d8) != 0) {
      free(*(void **)(param_1 + 0x1d0));
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  return;
}


