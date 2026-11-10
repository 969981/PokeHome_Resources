/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00649828; name: FUN_.text__00649828
 */


uint FUN__text__00649828(uint param_1,uint param_2)

{
  if (0xf < ((param_2 ^ param_1) & 0xfff0 ^ (param_2 ^ param_1) >> 0x10)) {
    param_2 = param_2 & 0xffff | (param_1 ^ param_1 >> 0x10 ^ param_2) << 0x10;
  }
  return param_2;
}


