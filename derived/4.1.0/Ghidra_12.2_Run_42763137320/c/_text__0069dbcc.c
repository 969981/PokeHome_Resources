/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069dbcc; name: FUN_.text__0069dbcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0069dbcc(void)

{
  int iVar1;
  
  if (((*_DAT_008a68a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(_DAT_008a68a8), iVar1 != 0)) {
    *_DAT_008a68b0 = 0;
    __cxa_guard_release(_DAT_008a68a8);
    return _DAT_008a68b0;
  }
  return _DAT_008a68b0;
}


