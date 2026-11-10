/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00699bc0; name: FUN_.text__00699bc0
 */


byte FUN__text__00699bc0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x10) + 0x1c) & 1;
}


