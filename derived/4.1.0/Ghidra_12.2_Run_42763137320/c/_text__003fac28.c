/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fac28; name: FUN_.text__003fac28
 */


uint FUN__text__003fac28(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,auStack_28,auStack_30,&uStack_31,1);
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar2,1,0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  return uVar1 & 1;
}


