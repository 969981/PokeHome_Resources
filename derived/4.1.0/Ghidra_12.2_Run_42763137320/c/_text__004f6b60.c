/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6b60; name: FUN_.text__004f6b60
 */


void FUN__text__004f6b60(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  piVar5 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar8 = piVar5;
  if (uVar3 == 0) {
LAB__text__004f6bd0:
    if (piVar8 != piVar5 + (ulong)uVar3 * 0xe) {
      *(undefined8 *)(piVar8 + 2) = *param_3;
      uVar7 = param_3[3];
      uVar4 = param_3[1];
      uVar2 = param_3[2];
      piVar8[10] = *(int *)(param_3 + 4);
      *(undefined8 *)(piVar8 + 6) = uVar2;
      *(undefined8 *)(piVar8 + 8) = uVar7;
      *(undefined8 *)(piVar8 + 4) = uVar4;
      uVar4 = nn::os::GetSystemTick();
      *(undefined8 *)(piVar8 + 0xc) = uVar4;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar6 = (ulong)uVar3 * 0x38;
    do {
      if (*piVar8 == param_2) goto LAB__text__004f6bd0;
      piVar8 = piVar8 + 0xe;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


