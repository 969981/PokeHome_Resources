/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbb18; name: FUN_.text__003fbb18
 */


void FUN__text__003fbb18(long *param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  
  pMVar1 = (MutexType *)(param_1 + 5);
  nn::os::LockMutex(pMVar1);
  *(undefined4 *)(param_1 + 0x15) = 4;
  if (((char)param_1[0xd] == '\0') ||
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    if (*(char *)((long)param_1 + 0x6a) != '\0') {
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      FUN__text__003fe00c(param_1[10]);
    }
  }
  else if (*(char *)((long)param_1 + 0x6a) == '\0') {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    FUN__text__003fdfb8(param_1[10]);
  }
  if ((param_1[1] == 0) || ((*(uint *)(param_1 + 0x15) | 2) == 2)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  FUN__text__003fe208(param_1[10],param_1);
  nn::os::UnlockMutex(pMVar1);
  return;
}


