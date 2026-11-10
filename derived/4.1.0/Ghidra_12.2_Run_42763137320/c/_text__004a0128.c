/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0128; name: FUN_.text__004a0128
 */


void FUN__text__004a0128(long param_1)

{
  if (*(long **)(param_1 + 0x108) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a0138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  return;
}


