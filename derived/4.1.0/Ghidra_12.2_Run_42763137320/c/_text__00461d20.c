/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461d20; name: FUN_.text__00461d20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00461d20(void)

{
  ulong uVar1;
  long *local_40;
  undefined1 local_38;
  
  if (DAT_00aea6c8 != '\0') {
    return;
  }
  DAT_00aea6c8 = 1;
  nn::os::LockMutex(_DAT_008a4710);
  if (DAT_00aea6b0 != 0) {
    uVar1 = 0;
    do {
      local_40 = *(long **)(DAT_00aea6a8 + uVar1 * 8);
      local_38 = 0x6d;
      (**(code **)(*local_40 + 200))(0,local_40,&local_40,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_00aea6b0);
  }
  if (DAT_00ae9b20 != (code *)0x0) {
    (*DAT_00ae9b20)(DAT_00aea6c8,DAT_00ae9b28);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aea6d0);
  return;
}


