/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a14e8; name: FUN_.text__003a14e8
 */


void FUN__text__003a14e8(long *param_1,byte param_2)

{
  if (*(byte *)((long)param_1 + 0x84) == (param_2 & 1)) {
    return;
  }
  *(byte *)((long)param_1 + 0x84) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x003a1508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}


