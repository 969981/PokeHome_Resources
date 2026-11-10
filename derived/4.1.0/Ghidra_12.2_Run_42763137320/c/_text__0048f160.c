/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f160; name: FUN_.text__0048f160
 */


bool FUN__text__0048f160(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 6));
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2 + (ulong)uVar1 * 6;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * 0x18;
    do {
      if (*piVar2 == param_2) goto LAB__text__0048f1bc;
      piVar2 = piVar2 + 6;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    piVar2 = piVar3;
  }
LAB__text__0048f1bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 6));
  return piVar2 != piVar3;
}


