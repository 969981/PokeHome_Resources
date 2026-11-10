/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e384; name: FUN_.text__0063e384
 */


undefined8 FUN__text__0063e384(int param_1)

{
  if (param_1 < 0x7f) {
    if (0x37 < param_1 - 0xfU) {
      return 0;
    }
    if ((1L << ((ulong)(param_1 - 0xfU) & 0x3f) & 0x80040000000011U) == 0) {
      return 0;
    }
  }
  else if (param_1 < 0xf9) {
    if ((param_1 != 0x7f) && (param_1 != 0x94)) {
      return 0;
    }
  }
  else if ((param_1 != 0xf9) && (param_1 != 0x123)) {
    return 0;
  }
  return 1;
}


