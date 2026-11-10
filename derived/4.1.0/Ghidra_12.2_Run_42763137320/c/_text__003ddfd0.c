/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ddfd0; name: FUN_.text__003ddfd0
 */


void FUN__text__003ddfd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003de024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__003de028 +
            (ulong)*(byte *)((ulong)*(uint *)(*(long *)(param_1 + 0x10) +
                                             *(long *)(param_1 + 0x18) * 8) + 0x73ab90) * 4))
            (*(undefined8 *)(param_1 + 0x40));
  return;
}


