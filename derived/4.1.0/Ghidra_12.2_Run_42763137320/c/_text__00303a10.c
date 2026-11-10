/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303a10; name: FUN_.text__00303a10
 */


void FUN__text__00303a10(long param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_2d6 [662];
  
  memset(auStack_2d6,0,0x296);
  nn::os::LockMutex((MutexType *)(param_1 + 0x703008));
  if (param_3 - 1U < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00303a70 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00303a7c + (ulong)*(byte *)((ulong)(param_3 - 1U) + 0x733b29) * 4))();
    return;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x703008));
  return;
}


