/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c1d4; name: FUN_.text__0039c1d4
 */


undefined8 FUN__text__0039c1d4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170));
  if (*(long *)(param_1 + 0x150) != 0) {
    plVar1 = (long *)FUN__text__0039fa84();
    if (*plVar1 == *param_2) {
      FUN__text__0039fa88(*(undefined8 *)(param_1 + 0x150));
      uVar2 = 1;
      goto LAB__text__0039c228;
    }
  }
  uVar2 = 0;
LAB__text__0039c228:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170));
  return uVar2;
}


