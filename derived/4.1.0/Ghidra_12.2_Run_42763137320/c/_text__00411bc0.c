/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411bc0; name: FUN_.text__00411bc0
 */


void FUN__text__00411bc0(void)

{
  nn::os::LockMutex((MutexType *)&DAT_00ae9e78);
  DAT_00ae9e98 = nn::os::GetCurrentThread();
  return;
}


