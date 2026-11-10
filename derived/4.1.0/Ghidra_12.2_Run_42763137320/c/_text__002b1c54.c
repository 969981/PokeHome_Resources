/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1c54; name: FUN_.text__002b1c54
 */


undefined4 FUN__text__002b1c54(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x178));
  if ((*(long *)(param_1 + 0x158) == 0) || (iVar1 = FUN__text__002c44a8(), iVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN__text__002c4538(*(undefined8 *)(param_1 + 0x158));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x178));
  return uVar2;
}


