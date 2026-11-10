/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa568; name: FUN_.text__002fa568
 */


uint FUN__text__002fa568(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    plVar2 = (long *)FUN__text__002ff034();
    if (*plVar2 == *param_2) {
      uVar1 = FUN__text__002ff090(*(undefined8 *)(param_1 + 0x1a8));
      goto LAB__text__002fa5bc;
    }
  }
  uVar1 = 0;
LAB__text__002fa5bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
  return uVar1 & 1;
}


