/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db230; name: FUN_.text__004db230
 */


void FUN__text__004db230(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  *(undefined1 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x004db268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


