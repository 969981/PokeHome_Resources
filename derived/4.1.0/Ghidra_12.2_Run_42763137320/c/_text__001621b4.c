/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001621b4; name: FUN_.text__001621b4
 */


void FUN__text__001621b4(uint *param_1,uint param_2)

{
  *param_1 = param_2;
  if (param_2 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x001621e4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001621fc + (ulong)*(byte *)((ulong)param_2 + 0x7252a0) * 4))();
    return;
  }
  return;
}


