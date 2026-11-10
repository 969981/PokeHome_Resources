/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c61c; name: FUN_.text__0051c61c
 */


bool FUN__text__0051c61c(long *param_1)

{
  return param_1[1] == 0 ||
         param_1[1] == *(long *)*param_1 + (ulong)*(uint *)((long *)*param_1 + 1) * 8;
}


