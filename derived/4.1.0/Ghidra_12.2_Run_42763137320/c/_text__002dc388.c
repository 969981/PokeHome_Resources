/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc388; name: FUN_.text__002dc388
 */


void FUN__text__002dc388(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  if (*(uint *)(param_1 + 1) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x002dc3c0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__002dc3cc + (ulong)*(byte *)((ulong)*(uint *)(param_1 + 1) + 0x733920) * 4
              ))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002dc4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


