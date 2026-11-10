/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00198b64; name: FUN_.text__00198b64
 */


void FUN__text__00198b64(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x00198b90 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00198ba4 + (ulong)*(ushort *)((ulong)param_3 * 2 + 0x725b2a) * 4))();
    return;
  }
  return;
}


