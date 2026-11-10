/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad1c8; name: FUN_.text__003ad1c8
 */


void FUN__text__003ad1c8(long param_1,void *param_2)

{
  memcpy((void *)(param_1 + 0x6c0),param_2,0x88);
  *(bool *)(*(long *)(param_1 + 0x800) + 0x2c) = *(int *)(param_1 + 0x6c4) != 0;
  return;
}


