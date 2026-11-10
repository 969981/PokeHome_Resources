/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048eb20; name: FUN_.text__0048eb20
 */


void FUN__text__0048eb20(long param_1,int param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  piVar3 = *(int **)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x18);
  piVar2 = piVar3;
  if (uVar4 == 0) {
LAB__text__0048eb90:
    if (piVar2 != piVar3 + (ulong)uVar4 * 6) {
      uVar4 = uVar4 - 1;
      if (piVar2 < piVar3 + (ulong)uVar4 * 6) {
        memmove(piVar2,piVar2 + 6,(ulong)(uint)((int)(piVar3 + (ulong)uVar4 * 6) - (int)piVar2));
        uVar4 = *(int *)(param_1 + 0x18) - 1;
      }
      *(uint *)(param_1 + 0x18) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar5 = (ulong)uVar4 * 0x18;
    do {
      if (*piVar2 == param_2) goto LAB__text__0048eb90;
      piVar2 = piVar2 + 6;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


