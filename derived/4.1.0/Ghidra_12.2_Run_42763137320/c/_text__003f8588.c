/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f8588; name: FUN_.text__003f8588
 */


void FUN__text__003f8588(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN__text__003fb6f8(param_1,3);
  if (*(long *)(param_1 + 0xb8) == 0 && *(long *)(param_1 + 0xc0) == 0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  FUN__text__003fdc68(param_1);
  FUN__text__003f87d0(param_1,param_1 + 0xb0,1);
  nn::os::UnlockMutex(pMVar1);
  FUN__text__003fe1b0(*(undefined8 *)(param_1 + 0x50),param_1);
  return;
}


