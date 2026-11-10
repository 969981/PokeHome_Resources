/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308998; name: FUN_.text__00308998
 */


void FUN__text__00308998(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    bVar1 = FUN__text__00635c20();
    *(byte *)(param_1 + 0x55) = bVar1 & 1;
    if (*(long *)(param_1 + 0x58) != 0) {
      if (*(char *)(param_1 + 0x54) == '\0') {
        bVar1 = FUN__text__00635c78();
      }
      else {
        bVar1 = *(char *)(param_1 + 0x56) != '\0';
      }
      *(byte *)(param_1 + 0x56) = bVar1 & 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


