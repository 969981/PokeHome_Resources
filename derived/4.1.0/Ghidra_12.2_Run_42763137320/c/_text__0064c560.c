/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c560; name: FUN_.text__0064c560
 */


bool FUN__text__0064c560(long param_1)

{
  MutexType *pMVar1;
  byte bVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0xcc0);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0xce0) == 0) {
    nn::os::UnlockMutex(pMVar1);
    return false;
  }
  bVar2 = *(byte *)(*(long *)(param_1 + 0xce0) + 0x25a);
  nn::os::UnlockMutex(pMVar1);
  return (bVar2 & 1) == 0;
}


