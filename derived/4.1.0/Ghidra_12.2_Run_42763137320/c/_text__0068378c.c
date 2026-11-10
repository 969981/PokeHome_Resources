/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068378c; name: FUN_.text__0068378c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0068378c(byte *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    param_2 = param_2 + -1;
    lVar1 = lVar1 + (ulong)*(uint *)(_DAT_008a6608 + (ulong)*param_1 * 8);
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return lVar1 + 7U >> 3;
}


