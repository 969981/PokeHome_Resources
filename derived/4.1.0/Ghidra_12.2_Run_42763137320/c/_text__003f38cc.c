/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f38cc; name: FUN_.text__003f38cc
 */


undefined4 FUN__text__003f38cc(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  plVar3 = *(long **)(param_2 + 0x30);
  if (plVar3 == (long *)0x0) {
    uVar2 = FUN__text__003f46c0(param_1 + -8,param_2);
  }
  else {
    iVar1 = (int)plVar3[10] + -1;
    *(int *)(plVar3 + 10) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    uVar2 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return uVar2;
}


