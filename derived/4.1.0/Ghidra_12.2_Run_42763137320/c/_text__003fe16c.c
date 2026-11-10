/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe16c; name: FUN_.text__003fe16c
 */


undefined4 FUN__text__003fe16c(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  uVar1 = *(undefined4 *)(param_1 + 0x21c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  return uVar1;
}


