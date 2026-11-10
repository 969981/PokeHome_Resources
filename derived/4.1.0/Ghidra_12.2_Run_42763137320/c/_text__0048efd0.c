/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048efd0; name: FUN_.text__0048efd0
 */


undefined8 FUN__text__0048efd0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 6));
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB__text__0048f030:
    if (piVar3 != piVar2 + (ulong)uVar1 * 6) {
      *param_3 = *(undefined8 *)(piVar3 + 4);
      (**(code **)(piVar3 + 2))(param_3);
      uVar5 = 1;
      goto LAB__text__0048f060;
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x18;
    do {
      if (*piVar3 == param_2) goto LAB__text__0048f030;
      piVar3 = piVar3 + 6;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  uVar5 = 0;
LAB__text__0048f060:
  nn::os::UnlockMutex((MutexType *)(param_1 + 6));
  return uVar5;
}


