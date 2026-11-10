/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041a360; name: FUN_.text__0041a360
 */


undefined1  [16] FUN__text__0041a360(uint param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (param_1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0041a37c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0041a388 + (ulong)*(byte *)((ulong)param_1 + 0x73b104) * 4))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}


