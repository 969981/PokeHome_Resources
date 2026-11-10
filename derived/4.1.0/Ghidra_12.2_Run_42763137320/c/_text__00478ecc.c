/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00478ecc; name: FUN_.text__00478ecc
 */


void FUN__text__00478ecc(long param_1)

{
  if (*(long **)(param_1 + 0x1d8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00478edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1d8) + 0x38))();
  return;
}


