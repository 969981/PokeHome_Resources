/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e8c0; name: FUN_.text__0048e8c0
 */


void FUN__text__0048e8c0(undefined8 *param_1,int param_2,long param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  
  pMVar1 = (MutexType *)(param_1 + 4);
  nn::os::LockMutex(pMVar1);
  piVar3 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar2 = piVar3;
  if (uVar4 == 0) {
LAB__text__0048e938:
    if (piVar2 != piVar3 + (ulong)uVar4 * 0xc) {
      uVar4 = uVar4 - 1;
      if (piVar2 < piVar3 + (ulong)uVar4 * 0xc) {
        memmove(piVar2,piVar2 + 0xc,(ulong)(uint)((int)(piVar3 + (ulong)uVar4 * 0xc) - (int)piVar2))
        ;
        uVar4 = *(int *)(param_1 + 1) - 1;
      }
      *(uint *)(param_1 + 1) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar5 = (ulong)uVar4 * 0x30;
    do {
      if (*piVar2 == param_2 && *(long *)(piVar2 + 2) == param_3) goto LAB__text__0048e938;
      piVar2 = piVar2 + 0xc;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


