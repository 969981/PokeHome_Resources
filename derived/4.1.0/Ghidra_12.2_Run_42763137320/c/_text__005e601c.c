/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e601c; name: FUN_.text__005e601c
 */


void FUN__text__005e601c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x3c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3c8) = 0;
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x3c0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3a0));
  lVar1 = *(long *)(param_1 + 0x370);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x378) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x388) + 0x18))
              (*(long **)(param_1 + 0x388),lVar1,*(long *)(param_1 + 0x380) - lVar1,8);
  }
  FUN__text__005e8798(param_1);
  return;
}


