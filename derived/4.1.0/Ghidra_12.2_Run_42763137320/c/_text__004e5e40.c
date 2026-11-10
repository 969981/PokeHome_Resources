/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5e40; name: FUN_.text__004e5e40
 */


void FUN__text__004e5e40(long param_1)

{
  if ((*(long *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0x13c) & 1) != 0)) {
    FUN__text__004c3390(*(long *)(param_1 + 0x80),param_1 + -0x58);
  }
  *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xfe;
  return;
}


