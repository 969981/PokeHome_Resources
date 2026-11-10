/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e36c; name: FUN_.text__0063e36c
 */


bool FUN__text__0063e36c(uint param_1,uint param_2)

{
  return ((param_2 ^ param_1) & 0xfff8 ^ (param_2 ^ param_1) >> 0x10) < 8;
}


