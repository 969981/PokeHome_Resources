/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa250; name: FUN_.text__003fa250
 */


void FUN__text__003fa250(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  
  if (*(byte *)(param_2 + 100) == param_3) {
    return;
  }
  if (param_3 < 0x65) {
    *(byte *)(param_2 + 100) = param_3;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  for (plVar1 = *(long **)(param_1 + 0x280); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return;
}


