/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0478; name: FUN_.text__004e0478
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN__text__004e0478(void)

{
  int iVar1;
  
  if (((DAT_00aeabf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00aeabf8), iVar1 != 0)) {
    FUN__text__004e04fc(&DAT_00aeac00);
    FUN__text__001001d0(_DAT_008a4748,&DAT_00aeac00,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00aeabf8);
    return &DAT_00aeac00;
  }
  return &DAT_00aeac00;
}


