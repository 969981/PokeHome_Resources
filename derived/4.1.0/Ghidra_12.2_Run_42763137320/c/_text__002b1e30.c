/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1e30; name: FUN_.text__002b1e30
 */


undefined4 FUN__text__002b1e30(long param_1,int param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = nn::fs::IsSaveDataExisting(0x1001f5010dfa000,param_1 + 0x260);
  if ((uVar4 & 1) == 0) {
    return 4;
  }
  uVar4 = FUN__text__002b1730(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  pMVar1 = (MutexType *)(param_1 + 0x138);
  nn::os::LockMutex(pMVar1);
  if ((*(long *)(param_1 + 0x118) != 0) && (iVar2 = FUN__text__002c3534(), iVar2 == param_2)) {
    FUN__text__002c353c(*(undefined8 *)(param_1 + 0x118));
  }
  nn::os::UnlockMutex(pMVar1);
  do {
    nn::os::LockMutex(pMVar1);
    if ((*(long *)(param_1 + 0x118) == 0) || (iVar2 = FUN__text__002c3534(), iVar2 != param_2)) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar4 = FUN__text__002c355c(*(undefined8 *)(param_1 + 0x118));
      nn::os::UnlockMutex(pMVar1);
      if ((uVar4 & 1) != 0) {
        nn::os::LockMutex(pMVar1);
        if ((*(long *)(param_1 + 0x118) == 0) || (iVar2 = FUN__text__002c3534(), iVar2 != param_2))
        {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN__text__002c357c(*(undefined8 *)(param_1 + 0x118));
        }
        nn::os::UnlockMutex(pMVar1);
        FUN__text__002b1908(param_1,param_2);
        return uVar3;
      }
    }
    nn::os::SleepThread(&DAT_00989680);
  } while( true );
}


