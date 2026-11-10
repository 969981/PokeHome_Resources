/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060911c; name: FUN_.text__0060911c
 */


uint FUN__text__0060911c(uint param_1)

{
  if ((param_1 & 0xffff) == 0) {
    return 0xffff;
  }
  if ((param_1 & 0xffff) == 0x292) {
    param_1 = 0;
  }
  return param_1;
}


