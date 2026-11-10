/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f993c; name: FUN_.text__003f993c
 */


bool FUN__text__003f993c(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0xd8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return lVar1 == 0;
}


