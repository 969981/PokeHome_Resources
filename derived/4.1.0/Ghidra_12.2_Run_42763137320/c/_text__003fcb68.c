/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fcb68; name: FUN_.text__003fcb68
 */


undefined8 FUN__text__003fcb68(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + -0x48));
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  FUN__text__003fc040(param_1 + -0x70);
  nn::os::UnlockMutex((MutexType *)(param_1 + -0x48));
  return 1;
}


