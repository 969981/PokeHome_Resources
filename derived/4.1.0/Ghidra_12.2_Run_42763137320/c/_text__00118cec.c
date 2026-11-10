/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118cec; name: FUN_.text__00118cec
 */


void FUN__text__00118cec(undefined8 param_1,uint param_2,int *param_3)

{
  FUN__text__0011911c();
  if (*param_3 == 0x20 || 5 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00118d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__00118d50 + (ulong)*(byte *)((ulong)param_2 + 0x721763) * 4))();
  return;
}


