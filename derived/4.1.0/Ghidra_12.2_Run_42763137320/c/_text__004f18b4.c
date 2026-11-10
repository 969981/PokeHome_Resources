/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f18b4; name: FUN_.text__004f18b4
 */


void FUN__text__004f18b4(undefined8 param_1,uint param_2)

{
  if (param_2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x004f18e4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__004f18f8 + (ulong)*(byte *)((ulong)param_2 + 0x73e32d) * 4))();
    return;
  }
  return;
}


