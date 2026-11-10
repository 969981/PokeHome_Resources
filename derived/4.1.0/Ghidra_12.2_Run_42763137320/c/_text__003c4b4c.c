/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4b4c; name: FUN_.text__003c4b4c
 */


void FUN__text__003c4b4c(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN__text__005f4f64();
    *(uint *)(param_1 + 0xe8) = (uint)(param_2 != 0) << 2;
  }
  return;
}


