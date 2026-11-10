/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a7128; name: FUN_.text__003a7128
 */


void FUN__text__003a7128(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != -0x340d631b7bddd9bb && *(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))();
  }
                    /* WARNING: Could not recover jumptable at 0x003a7188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0x88,1);
  return;
}


