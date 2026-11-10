/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055e7a0; name: FUN_.text__0055e7a0
 */


void FUN__text__0055e7a0(int *param_1)

{
  if (*param_1 - 1U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0055e7d4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0055e7e4 + (ulong)*(byte *)((ulong)(*param_1 - 1U) + 0x73e3ea) * 4))();
    return;
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}


