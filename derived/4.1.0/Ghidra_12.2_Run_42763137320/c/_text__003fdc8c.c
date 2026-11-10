/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fdc8c; name: FUN_.text__003fdc8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003fdc8c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a4418;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *param_1 = lVar1 + 0x10;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3d),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x41));
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x44),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x48));
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


