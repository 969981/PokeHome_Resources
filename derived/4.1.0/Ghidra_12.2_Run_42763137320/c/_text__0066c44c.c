/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c44c; name: FUN_.text__0066c44c
 */


long FUN__text__0066c44c(uint param_1)

{
  if (param_1 < 100) {
    return (long)*(int *)((long)(int)param_1 * 4 + 0x760aac) + 0x760aac;
  }
  return 0x70ea30;
}


