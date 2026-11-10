/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c4c04; name: FUN_.text__002c4c04
 */


void FUN__text__002c4c04(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN__text__002b3fd0(*(undefined8 *)(param_1 + 0x370),*(undefined8 *)(param_1 + 8),
                              param_1 + 0x378);
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar2 = 2;
  if ((uVar1 & 1) == 0) {
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 0x3a8) = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  FUN__text__005e8c48(param_1);
  return;
}


