/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a01f8; name: FUN_.text__003a01f8
 */


void FUN__text__003a01f8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN__text__005dd2a0(param_1 + 0x378);
  if (iVar1 == 1) {
    uVar2 = FUN__text__00396ce8(*(undefined8 *)(param_1 + 0x370),*(undefined8 *)(param_1 + 8),
                                param_1 + 0x378);
    nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
    uVar3 = 4;
  }
  *(undefined4 *)(param_1 + 0x3a8) = uVar3;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  FUN__text__005e8c48(param_1);
  return;
}


