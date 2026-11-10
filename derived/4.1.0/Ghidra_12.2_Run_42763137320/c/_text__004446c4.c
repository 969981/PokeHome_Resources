/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004446c4; name: FUN_.text__004446c4
 */


void FUN__text__004446c4(long param_1,int param_2)

{
  if ((1 < *(int *)(param_1 + 0xc0) - 3U) && (*(int *)(param_1 + 0xb4) == 0x7fffffff)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb8) + param_2;
    *(undefined4 *)(param_1 + 0xc0) = 2;
  }
  return;
}


