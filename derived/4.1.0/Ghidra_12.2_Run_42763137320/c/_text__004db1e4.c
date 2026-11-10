/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db1e4; name: FUN_.text__004db1e4
 */


void FUN__text__004db1e4(long param_1)

{
  if (*(long *)(param_1 + 0xd8) == 0) {
    if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004db22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      return;
    }
  }
  else {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}


