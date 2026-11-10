/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fe9d0; name: FUN_.text__002fe9d0
 */


undefined4 FUN__text__002fe9d0(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar1 = *(undefined4 *)(param_1 + 0x3a8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return uVar1;
}


