/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6d50; name: FUN_.text__004f6d50
 */


void FUN__text__004f6d50(undefined8 *param_1,int param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  piVar3 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar2 = piVar3;
  if (uVar4 == 0) {
LAB__text__004f6dc0:
    if (piVar2 != piVar3 + (ulong)uVar4 * 0xe) {
      uVar4 = uVar4 - 1;
      if (piVar2 < piVar3 + (ulong)uVar4 * 0xe) {
        memmove(piVar2,piVar2 + 0xe,(ulong)(uint)((int)(piVar3 + (ulong)uVar4 * 0xe) - (int)piVar2))
        ;
        uVar4 = *(int *)(param_1 + 1) - 1;
      }
      *(uint *)(param_1 + 1) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar5 = (ulong)uVar4 * 0x38;
    do {
      if (*piVar2 == param_2) goto LAB__text__004f6dc0;
      piVar2 = piVar2 + 0xe;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


