/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00135c44; name: FUN_.text__00135c44
 */


void FUN__text__00135c44(undefined8 param_1,uint param_2)

{
  if (param_2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00135c74 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00135c8c + (ulong)*(byte *)((ulong)param_2 + 0x7219d0) * 4))();
    return;
  }
  return;
}


