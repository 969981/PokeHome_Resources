/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00645570; name: FUN_.text__00645570
 */


long FUN__text__00645570(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  while( true ) {
    if (*(int *)(lVar1 * 4 + 0x75f3b0) == param_1) {
      return lVar1;
    }
    if (*(int *)(lVar1 * 4 + 0x75f3b4) == param_1) break;
    lVar1 = lVar1 + 2;
    if (lVar1 == 0x154) {
      return 0xffffffff;
    }
  }
  return lVar1 + 1;
}


