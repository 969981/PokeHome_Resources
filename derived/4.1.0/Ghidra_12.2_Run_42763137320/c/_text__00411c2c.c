/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411c2c; name: FUN_.text__00411c2c
 */


void FUN__text__00411c2c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_00ae9e98;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar1 == lVar2) {
    return;
  }
  nn::os::LockMutex((MutexType *)&DAT_00ae9e58);
  return;
}


