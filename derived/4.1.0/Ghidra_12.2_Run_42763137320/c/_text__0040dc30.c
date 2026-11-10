/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040dc30; name: FUN_.text__0040dc30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0040dc30(void)

{
  int iVar1;
  
  if (((DAT_00ae9e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00ae9e50), iVar1 != 0)) {
    DAT_00ae9e48 = _DAT_008a4670 + 0x10;
    __cxa_guard_release(&DAT_00ae9e50);
    return &DAT_00ae9e48;
  }
  return &DAT_00ae9e48;
}


