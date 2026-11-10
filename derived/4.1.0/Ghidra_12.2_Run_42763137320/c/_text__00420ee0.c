/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00420ee0; name: FUN_.text__00420ee0
 */


void FUN__text__00420ee0(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                        uint param_6)

{
  for (; 7 < param_6; param_6 = param_6 - 8) {
    FUN__text__004213f0(param_1,param_2,param_3,param_4,param_5);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = param_4 + 0x40;
  }
  if (param_6 - 1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00420f60 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00420f6c + (ulong)*(byte *)((ulong)(param_6 - 1) + 0x73b14d) * 4))();
    return;
  }
  return;
}


