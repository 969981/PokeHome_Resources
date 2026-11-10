/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fca74; name: FUN_.text__003fca74
 */


undefined4 FUN__text__003fca74(long param_1)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc2) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(bool *)(param_1 + 0x6c) =
         *(char *)(param_1 + 0x67) == '\0' && *(char *)(param_1 + 0x68) == '\0';
    FUN__text__003fc6a8(param_1);
    *(undefined1 *)(param_1 + 0xc4) = 1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x270);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
    pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
    nn::os::LockMutex(pMVar1);
    FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x50));
    nn::os::UnlockMutex(pMVar1);
  }
  uVar2 = 1;
  if (*(char *)(param_1 + 0xc3) != '\0') {
    uVar2 = 2;
  }
  return uVar2;
}


