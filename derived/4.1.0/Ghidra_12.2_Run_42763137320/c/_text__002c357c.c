/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c357c; name: FUN_.text__002c357c
 */


undefined4 FUN__text__002c357c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x3d0));
    uVar1 = *(undefined4 *)(lVar2 + 0x3c8);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x3d0));
  }
  return uVar1;
}


