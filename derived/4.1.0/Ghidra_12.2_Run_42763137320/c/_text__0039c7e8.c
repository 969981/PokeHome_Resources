/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c7e8; name: FUN_.text__0039c7e8
 */


undefined8 FUN__text__0039c7e8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b0));
  if (*(long *)(param_1 + 400) != 0) {
    plVar1 = (long *)FUN__text__003a0754();
    if (*plVar1 == *param_2) {
      FUN__text__005dd758(param_1 + 0xa8);
      uVar2 = 1;
      goto LAB__text__0039c83c;
    }
  }
  uVar2 = 0;
LAB__text__0039c83c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b0));
  return uVar2;
}


