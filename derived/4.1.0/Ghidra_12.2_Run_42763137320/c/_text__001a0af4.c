/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0af4; name: FUN_.text__001a0af4
 */


void FUN__text__001a0af4(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (**(int **)(*(long *)(param_1 + 0x18) + 0x50) != 0) {
    FUN__text__001bdb60(*(undefined8 *)(param_1 + 0x68));
    FUN__text__001bdb60(*(undefined8 *)(param_1 + 0x88));
  }
  FUN__text__001a0a70(param_1);
  return;
}


