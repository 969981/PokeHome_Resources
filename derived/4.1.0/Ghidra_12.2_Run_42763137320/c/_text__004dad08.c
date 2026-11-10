/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dad08; name: FUN_.text__004dad08
 */


void FUN__text__004dad08(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  else if (*(char *)(param_1 + 200) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


