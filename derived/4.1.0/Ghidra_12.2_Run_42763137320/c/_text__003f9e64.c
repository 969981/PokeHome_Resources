/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f9e64; name: FUN_.text__003f9e64
 */


long FUN__text__003f9e64(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x51));
    if (param_1[0x4f] == 0) {
      param_1[0x4f] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      *(long *)(lVar1 + 0x10) = param_1[0x4f];
      param_1[0x4f] = lVar1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x51));
  }
  return lVar1;
}


