/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f3790; name: FUN_.text__003f3790
 */


undefined8 FUN__text__003f3790(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  plVar4 = *(long **)(param_1 + 0x30);
  while (plVar3 = plVar4, plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[1];
    plVar1 = (long *)(param_1 + 0x30);
    if (*(long **)(param_1 + 0x30) != plVar3) {
      plVar1 = (long *)&DAT_00000008;
    }
    *plVar1 = (long)plVar4;
    if (*(long **)(param_1 + 0x28) == plVar3) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    iVar2 = (int)plVar3[10] + -1;
    *(int *)(plVar3 + 10) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return 1;
}


