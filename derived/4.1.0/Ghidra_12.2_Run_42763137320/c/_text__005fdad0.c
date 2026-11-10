/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fdad0; name: FUN_.text__005fdad0
 */


long FUN__text__005fdad0(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  while( true ) {
    if (*(int *)(lVar1 * 4 + 0x758014) == param_1) {
      return lVar1;
    }
    if (*(int *)(lVar1 * 4 + 0x758018) == param_1) break;
    lVar1 = lVar1 + 2;
    if (lVar1 == 0x402) {
      return 0;
    }
  }
  return lVar1 + 1;
}


