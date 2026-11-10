/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371aac; name: FUN_.text__00371aac
 */


undefined8 FUN__text__00371aac(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x198));
  if ((*(long *)(param_1 + 0x178) == 0) || (iVar1 = FUN__text__0037ad60(), iVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    FUN__text__005dd758(param_1 + 0xa8);
    uVar2 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x198));
  return uVar2;
}


