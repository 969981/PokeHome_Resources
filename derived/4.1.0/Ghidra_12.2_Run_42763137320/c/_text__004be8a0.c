/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004be8a0; name: FUN_.text__004be8a0
 */


void FUN__text__004be8a0(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x50) == param_3)) {
    if (param_2 == 2) {
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) {
        if (*(int *)(param_1 + 0x48) != 1) {
          FUN__text__004bd630(param_1,0,4);
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0x28));
        iVar2 = *(int *)(param_1 + 0xac);
        iVar1 = *(int *)(DAT_00ae9a40 + 0x88);
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
        return;
      }
    }
    else if (param_2 == 1) {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar2 + 1, iVar2 == 0)) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(DAT_00ae9a40 + 0x88);
        return;
      }
    }
    else if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
      return;
    }
  }
  return;
}


