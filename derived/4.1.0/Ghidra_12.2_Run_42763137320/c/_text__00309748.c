/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309748; name: FUN_.text__00309748
 */


undefined8 FUN__text__00309748(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200));
  lVar1 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return 1;
}


