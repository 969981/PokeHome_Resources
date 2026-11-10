/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b220; name: FUN_.text__0016b220
 */


undefined8 FUN__text__0016b220(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((int)param_1 == 0) {
    return 0;
  }
  if (param_2 - 1U < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0016b23c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0016b248 + (ulong)*(byte *)((ulong)(param_2 - 1U) + 0x72548f) * 4
                      ))();
    return uVar1;
  }
  return param_1;
}


