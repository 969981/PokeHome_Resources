/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00422770; name: FUN_.text__00422770
 */


void FUN__text__00422770(long param_1,long param_2,long param_3,long param_4,long param_5,
                        long param_6,undefined4 param_7,uint param_8)

{
  for (; 7 < param_8; param_8 = param_8 - 8) {
    FUN__text__004229c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = param_4 + 0x40;
    param_5 = param_5 + 0x40;
    param_6 = param_6 + 0x40;
  }
  if (param_8 - 1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0042280c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00422818 + (ulong)*(byte *)((ulong)(param_8 - 1) + 0x73b154) * 4))();
    return;
  }
  return;
}


