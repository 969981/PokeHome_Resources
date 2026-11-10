/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484bf0; name: FUN_.text__00484bf0
 */


undefined8 FUN__text__00484bf0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB__text__00484c50:
    if (piVar4 != piVar3 + (ulong)uVar1 * 4) {
      uVar2 = *(undefined8 *)(piVar4 + 2);
      goto LAB__text__00484c74;
    }
  }
  else {
    lVar5 = (ulong)uVar1 << 4;
    do {
      if (*piVar4 == param_2) goto LAB__text__00484c50;
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  uVar2 = FUN__text__004896b0(param_1,param_2);
LAB__text__00484c74:
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return uVar2;
}


