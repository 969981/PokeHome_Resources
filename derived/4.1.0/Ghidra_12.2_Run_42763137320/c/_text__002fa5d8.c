/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa5d8; name: FUN_.text__002fa5d8
 */


undefined4 FUN__text__002fa5d8(long param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    plVar2 = (long *)FUN__text__002ff034();
    if (*plVar2 == *param_2) {
      uVar1 = FUN__text__002ff0b0(*(undefined8 *)(param_1 + 0x1a8));
      goto LAB__text__002fa62c;
    }
  }
  uVar1 = 0;
LAB__text__002fa62c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
  return uVar1;
}


