/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d418; name: FUN_.text__0035d418
 */


byte FUN__text__0035d418(long param_1,uint param_2)

{
  return param_2 < 6 & *(byte *)(param_1 + 0x56c) >> (ulong)(param_2 & 0x1f);
}


