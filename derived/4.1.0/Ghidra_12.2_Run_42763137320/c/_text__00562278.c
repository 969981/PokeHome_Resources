/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562278; name: FUN_.text__00562278
 */


void FUN__text__00562278(long param_1)

{
  if (*(uint *)(param_1 + 0x138) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00562290 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0056229c +
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x138) + 0x73e414) * 4))();
    return;
  }
  return;
}


