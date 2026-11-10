/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458840; name: FUN_.text__00458840
 */


void FUN__text__00458840(long *param_1)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    *(int *)(param_1[1] + 0xd8) = *(int *)(param_1[1] + 0xd8) + -1;
  }
  return;
}


