/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c6d8; name: FUN_.text__0066c6d8
 */


int FUN__text__0066c6d8(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_3;
  if (0x20c49a < param_1) {
    return 0x7fffffff;
  }
  if (param_1 < -0x20c49a) {
    return -0x80000000;
  }
  return (param_2 - param_4) / 1000 + param_1 * 1000;
}


