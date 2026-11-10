/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019cbec; name: FUN_.text__0019cbec
 */


void FUN__text__0019cbec(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x458));
  if (*(char *)(param_1 + 0x454) != '\0') {
    *(undefined2 *)(param_1 + 0x454) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x458));
  return;
}


