/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e190; name: FUN_.text__0048e190
 */


void FUN__text__0048e190(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) {
        *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
        FUN__text__0048d040(param_1,param_2);
        return;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


