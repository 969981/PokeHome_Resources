/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fd264; name: FUN_.text__003fd264
 */


undefined4 FUN__text__003fd264(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
  *(undefined1 *)((long)param_1 + 0xc2) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  FUN__text__003fc6a8(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return uVar1;
}


