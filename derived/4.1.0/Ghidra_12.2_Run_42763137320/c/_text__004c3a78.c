/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3a78; name: FUN_.text__004c3a78
 */


void FUN__text__004c3a78(long param_1)

{
  if ((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x70) >> 2 & 1) == 0)) {
    FUN__text__004c3280(*(long *)(param_1 + 0x58),param_1);
  }
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 4;
  return;
}


