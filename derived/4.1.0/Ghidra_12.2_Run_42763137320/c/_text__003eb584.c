/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb584; name: FUN_.text__003eb584
 */


void FUN__text__003eb584(long param_1,byte param_2)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
  *(byte *)(param_1 + 3) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x003eb5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


