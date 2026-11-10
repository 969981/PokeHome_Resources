/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e330; name: FUN_.text__0063e330
 */


bool FUN__text__0063e330(long param_1,uint param_2)

{
  if (param_2 < 4) {
    return ((uint)*(byte *)(*(long *)(param_1 + 8) + 0x1b) << (ulong)((param_2 & 3) << 3) &
           0x8020401) != 0;
  }
  return false;
}


