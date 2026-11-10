/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679e4c; name: FUN_.text__00679e4c
 */


long FUN__text__00679e4c(uint param_1)

{
  if (param_1 < 0xe) {
    return (long)*(int *)((long)(int)param_1 * 4 + 0x761868) + 0x761868;
  }
  return 0x70fc72;
}


