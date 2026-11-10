/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d57a4; name: FUN_.text__003d57a4
 */


long FUN__text__003d57a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1b8);
  if (lVar1 < 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1 >> 1;
}


