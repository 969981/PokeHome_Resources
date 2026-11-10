/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063df04; name: FUN_.text__0063df04
 */


bool FUN__text__0063df04(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x13) >> 1 & 1) == 0) {
    return false;
  }
  return ((*(long *)(param_1 + 0x10) != 0 && *(long *)(param_1 + 0x18) != 0) &&
         *(long *)(param_1 + 0x20) != 0) && *(long *)(param_1 + 0x28) != 0;
}


