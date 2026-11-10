/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004feb9c; name: FUN_.text__004feb9c
 */


void FUN__text__004feb9c(long param_1)

{
  if ((*(char *)(param_1 + 0x36) == '\0') && (*(long *)(param_1 + 8) != 0)) {
    FUN__text__004feb9c();
    *(undefined1 *)(param_1 + 0x36) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}


