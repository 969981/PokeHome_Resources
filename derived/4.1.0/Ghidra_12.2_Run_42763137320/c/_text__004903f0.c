/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004903f0; name: FUN_.text__004903f0
 */


bool FUN__text__004903f0(long param_1)

{
  if (*(float *)(param_1 + 100) <= 0.0) {
    return false;
  }
  if (*(int *)(param_1 + 0xa8) < 1) {
    return *(int *)(param_1 + 0x60) != 0;
  }
  return true;
}


