/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2b44; name: FUN_.text__006f2b44
 */


undefined * FUN__text__006f2b44(void)

{
  int iVar1;
  
  if (((DAT_00c60f70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c60f70), iVar1 != 0)) {
    FUN__text__006f2bac(&DAT_00c60f78);
    __cxa_guard_release(&DAT_00c60f70);
    return &DAT_00c60f78;
  }
  return &DAT_00c60f78;
}


