/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fcbb8; name: FUN_.text__003fcbb8
 */


ulong FUN__text__003fcbb8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x78);
  }
  else {
    uVar2 = **(long **)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = **(ulong **)(param_1 + 0x20) <= uVar2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar2;
}


