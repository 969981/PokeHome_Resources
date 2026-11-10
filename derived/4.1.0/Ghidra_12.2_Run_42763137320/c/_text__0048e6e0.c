/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e6e0; name: FUN_.text__0048e6e0
 */


void FUN__text__0048e6e0(int param_1,undefined8 *param_2,int param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  
  pMVar1 = (MutexType *)(param_2 + 4);
  nn::os::LockMutex(pMVar1);
  piVar3 = (int *)*param_2;
  uVar2 = *(uint *)(param_2 + 1);
  piVar5 = piVar3;
  if (uVar2 == 0) {
LAB__text__0048e76c:
    if (piVar5 != piVar3 + (ulong)uVar2 * 0xc) {
      uVar4 = param_2[8];
      piVar5[7] = param_1;
      *(undefined8 *)(piVar5 + 4) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      if (*piVar5 == param_3 && *(long *)(piVar5 + 2) == param_4) goto LAB__text__0048e76c;
      piVar5 = piVar5 + 0xc;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


