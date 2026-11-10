/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d4950; name: FUN_.text__006d4950
 */


void FUN__text__006d4950(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x150) != param_1) {
    *(float *)(param_2 + 0x150) = param_1;
    *(byte *)(param_2 + 0x158) = *(byte *)(param_2 + 0x158) | 1;
  }
  return;
}


