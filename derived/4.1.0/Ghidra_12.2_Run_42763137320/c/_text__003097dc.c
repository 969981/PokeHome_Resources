/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003097dc; name: FUN_.text__003097dc
 */


void FUN__text__003097dc(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e4));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}


