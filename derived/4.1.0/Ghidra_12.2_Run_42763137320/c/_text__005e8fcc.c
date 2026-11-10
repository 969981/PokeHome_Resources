/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8fcc; name: FUN_.text__005e8fcc
 */


int * FUN__text__005e8fcc(MutexType *param_1)

{
  int *piVar1;
  int iVar2;
  
  nn::os::LockMutex(param_1);
  if (*(int *)(param_1 + 0x28) == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 0x2000);
  iVar2 = *piVar1;
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 == -1) {
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    nn::os::UnlockMutex(param_1);
    return piVar1;
  }
  nn::os::UnlockMutex(param_1);
  return piVar1;
}


