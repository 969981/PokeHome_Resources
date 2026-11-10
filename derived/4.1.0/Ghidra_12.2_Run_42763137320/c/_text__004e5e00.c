/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5e00; name: FUN_.text__004e5e00
 */


void FUN__text__004e5e00(long param_1)

{
  if ((*(long *)(param_1 + 0xd8) != 0) && ((*(byte *)(param_1 + 0x194) & 1) != 0)) {
    FUN__text__004c3390(*(long *)(param_1 + 0xd8),param_1);
  }
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xfe;
  return;
}


