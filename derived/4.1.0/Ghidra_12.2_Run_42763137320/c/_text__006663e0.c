/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006663e0; name: FUN_.text__006663e0
 */


void FUN__text__006663e0(undefined8 param_1,int param_2)

{
  FUN__text__0066c6a8();
  if (param_2 - 1U < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00666410 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0066641c + (ulong)*(byte *)((ulong)(param_2 - 1U) + 0x760648) * 4))();
    return;
  }
  return;
}


