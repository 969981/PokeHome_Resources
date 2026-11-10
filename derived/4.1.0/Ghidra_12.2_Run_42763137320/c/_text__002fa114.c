/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa114; name: FUN_.text__002fa114
 */


undefined4 FUN__text__002fa114(long param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(long *)(param_1 + 0x168) != 0) {
    plVar2 = (long *)FUN__text__002fe1f4();
    if (*plVar2 == *param_2) {
      uVar1 = FUN__text__002fe238(*(undefined8 *)(param_1 + 0x168));
      goto LAB__text__002fa168;
    }
  }
  uVar1 = 0;
LAB__text__002fa168:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return uVar1;
}


