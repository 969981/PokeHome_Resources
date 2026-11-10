/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00397bf0; name: FUN_.text__00397bf0
 */


byte FUN__text__00397bf0(long param_1)

{
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0xa0) + 0x25a) & 1;
}


