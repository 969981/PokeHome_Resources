/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065d7c8; name: FUN_.text__0065d7c8
 */


bool FUN__text__0065d7c8(long param_1)

{
  if (*(long *)(param_1 + 0x658) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x658) + 0x4020) != 2;
}


