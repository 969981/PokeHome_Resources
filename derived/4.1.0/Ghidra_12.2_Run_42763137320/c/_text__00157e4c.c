/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00157e4c; name: FUN_.text__00157e4c
 */


void FUN__text__00157e4c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc08) != param_2) {
    *(int *)(param_1 + 0xc08) = param_2;
  }
  return;
}


