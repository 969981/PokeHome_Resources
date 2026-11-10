/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685da8; name: FUN_.text__00685da8
 */


bool FUN__text__00685da8(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return false;
  }
  return (*(byte *)(param_1 + 0xe4) & 0xc) != 0;
}


