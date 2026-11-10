/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305a4c; name: FUN_.text__00305a4c
 */


byte FUN__text__00305a4c(long param_1,uint param_2)

{
  if (param_2 >> 3 < 0x465) {
    return *(byte *)(param_1 + (ulong)(param_2 >> 3) + 8) >> (ulong)(param_2 & 7) & 1;
  }
  return 0;
}


