/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638884; name: FUN_.text__00638884
 */


int FUN__text__00638884(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                       )

{
  if (param_1 == 0x124) {
    return 1;
  }
  param_6 = param_6 & 0xff;
  if (9 < param_6) {
    param_6 = 10;
  }
  return (int)(*(float *)((ulong)param_6 * 4 + 0x75aca0) *
              (float)((((param_3 & 0xffff) * 2 + (param_4 & 0xffff) + ((param_5 & 0xfffc) >> 2)) *
                      (param_2 & 0xff)) / 100 + (param_2 & 0xff) + 10 & 0xffff));
}


