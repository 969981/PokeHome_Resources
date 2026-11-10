/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069de50; name: FUN_.text__0069de50
 */


void FUN__text__0069de50(long param_1)

{
  if ((*(byte *)(param_1 + 0x194) >> 6 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xbf;
  FUN__text__006d5b3c(*(undefined8 *)(param_1 + 0xb8));
  return;
}


