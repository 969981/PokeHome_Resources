/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a16ac; name: FUN_.text__001a16ac
 */


void FUN__text__001a16ac(long param_1)

{
  FUN__text__001bdef0(*(undefined8 *)(param_1 + 0x68));
  FUN__text__001bdef0(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  **(undefined4 **)(*(long *)(param_1 + 0x18) + 0x50) = 0;
  return;
}


