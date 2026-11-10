/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065680c; name: FUN_.text__0065680c
 */


byte FUN__text__0065680c(uint param_1)

{
  if (param_1 < 0x80) {
    return *(byte *)((ulong)param_1 + 0x760156) & 8;
  }
  return 0;
}


