/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fdd20; name: FUN_.text__003fdd20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003fdd20(long *param_1)

{
  *param_1 = _DAT_008a4418 + 0x10;
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x48));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x44));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x41));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d));
  return;
}


