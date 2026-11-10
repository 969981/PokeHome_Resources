/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c673c; name: FUN_.text__003c673c
 */


undefined1 FUN__text__003c673c(long param_1)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x170);
}


