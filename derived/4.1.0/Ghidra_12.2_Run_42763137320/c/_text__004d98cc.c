/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d98cc; name: FUN_.text__004d98cc
 */


undefined * FUN__text__004d98cc(void)

{
  int iVar1;
  
  if (((DAT_00aeabd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00aeabd0), iVar1 != 0)) {
    FUN__text__004d9934(&DAT_00aeabd8);
    __cxa_guard_release(&DAT_00aeabd0);
    return &DAT_00aeabd8;
  }
  return &DAT_00aeabd8;
}


