/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00524250; name: FUN_.text__00524250
 */


bool FUN__text__00524250(long param_1)

{
  if (*(char *)(param_1 + 0x68) != '\0') {
    return true;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0xb0) + 0x40) != '\0';
}


