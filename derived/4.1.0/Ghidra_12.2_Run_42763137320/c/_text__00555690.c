/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555690; name: FUN_.text__00555690
 */


void FUN__text__00555690(int *param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    memset(*(void **)(param_1 + 4),0,(ulong)(uint)(*param_1 << 2));
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


