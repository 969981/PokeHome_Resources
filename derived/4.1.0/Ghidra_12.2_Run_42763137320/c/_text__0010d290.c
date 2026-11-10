/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010d290; name: FUN_.text__0010d290
 */


void FUN__text__0010d290(long param_1)

{
  if (*(uint *)(param_1 + 0x28) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0010d2b4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0010d2c4 +
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x28) + 0x7216ba) * 4))();
    return;
  }
  return;
}


