/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cc618; name: FUN_.text__001cc618
 */


void FUN__text__001cc618(long param_1)

{
  if (*(char *)(param_1 + 0x5824) != '\0') {
    *(char *)(param_1 + 0x5824) = '\0';
    *(int *)(param_1 + 0x582c) = *(int *)(param_1 + 0x582c) + 1;
  }
  FUN__text__001cc670(param_1);
  FUN__text__001ccd40(param_1);
  FUN__text__001cd230(param_1);
  FUN__text__001cd650(param_1);
  return;
}


