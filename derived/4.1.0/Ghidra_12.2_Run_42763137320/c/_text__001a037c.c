/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a037c; name: FUN_.text__001a037c
 */


void FUN__text__001a037c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    lVar1 = param_1 + (long)*(int *)(param_1 + 0x1c4) * 0x20;
    if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x1c4) * 4 + 0x1bc) == 4) {
      FUN__text__001cbb44(*(undefined8 *)(lVar1 + 0xa8),param_1 + 0x1cc,1);
      return;
    }
    FUN__text__001b2160(*(undefined8 *)(lVar1 + 0x68),param_1 + 0x1cc,1);
    return;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
  return;
}


