/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7128; name: FUN_.text__003b7128
 */


int FUN__text__003b7128(long param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return *param_2 + *(int *)(param_1 + 0x20) * param_2[1] + *(int *)(param_1 + 0x14);
  }
  return param_2[1] + *(int *)(param_1 + 0x24) * *param_2 + *(int *)(param_1 + 0x14);
}


