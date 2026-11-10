/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006378fc; name: FUN_.text__006378fc
 */


int FUN__text__006378fc(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  if (param_1 == 0x124) {
    return 1;
  }
  return (((param_3 & 0xffff) * 2 + (param_4 & 0xffff) + ((param_5 & 0xfffc) >> 2)) *
         (param_2 & 0xff)) / 100 + (param_2 & 0xff) + 10;
}


