/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa648; name: FUN_.text__002fa648
 */


undefined8 FUN__text__002fa648(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    plVar1 = (long *)FUN__text__002ff034();
    if (*plVar1 == *param_2) {
      FUN__text__005dd758(param_1 + 0xc0);
      uVar2 = 1;
      goto LAB__text__002fa69c;
    }
  }
  uVar2 = 0;
LAB__text__002fa69c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
  return uVar2;
}


