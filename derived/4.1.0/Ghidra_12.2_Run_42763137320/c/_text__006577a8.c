/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006577a8; name: FUN_.text__006577a8
 */


void FUN__text__006577a8(long param_1)

{
  if (*(FILE **)(param_1 + 0x48) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


