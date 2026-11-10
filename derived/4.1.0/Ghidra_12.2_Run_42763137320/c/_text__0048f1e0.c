/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f1e0; name: FUN_.text__0048f1e0
 */


undefined1 FUN__text__0048f1e0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined1 uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  piVar2 = *(int **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB__text__0048f240:
    if (piVar3 != piVar2 + (ulong)uVar1 * 8) {
      uVar5 = (undefined1)piVar3[4];
      goto LAB__text__0048f258;
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 5;
    do {
      if (*piVar3 == param_2) goto LAB__text__0048f240;
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  uVar5 = 0;
LAB__text__0048f258:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return uVar5;
}


