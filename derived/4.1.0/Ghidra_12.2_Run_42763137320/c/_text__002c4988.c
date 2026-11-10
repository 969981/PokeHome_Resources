/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c4988; name: FUN_.text__002c4988
 */


void FUN__text__002c4988(long param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x388));
  if (*(long *)(param_1 + 0x360) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x360) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  FUN__text__005e8798(param_1 + -0x48);
  return;
}


