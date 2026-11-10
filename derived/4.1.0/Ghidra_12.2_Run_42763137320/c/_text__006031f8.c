/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006031f8; name: FUN_.text__006031f8
 */


bool FUN__text__006031f8(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if (0xfb < param_1) {
    if (param_1 - 0x115 < 0x87) {
      param_1 = *(uint *)(&DAT_00759044 + (ulong)(param_1 - 0x115) * 4);
    }
    else {
      param_1 = 0;
    }
  }
  return ((param_1 == 0x182 || param_1 - 0xf9 < 2) || (param_1 & 0xfffffffe) == 0x17c) ||
         param_1 == 0x97;
}


