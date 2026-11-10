/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c36dc; name: FUN_.text__001c36dc
 */


void FUN__text__001c36dc(long param_1)

{
  FUN__text__0019e41c(*(undefined8 *)(param_1 + 0x6f8));
  if (*(undefined8 **)(param_1 + 0x640) != (undefined8 *)0x0) {
    if (*(int *)**(undefined8 **)(param_1 + 0x640) != 2) {
      return;
    }
    if (*(long *)(param_1 + 0x698) != 0) {
      FUN__text__001c5878(*(long *)(param_1 + 0x698),6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


