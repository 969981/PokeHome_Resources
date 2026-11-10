/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ddc9c; name: FUN_.text__001ddc9c
 */


void FUN__text__001ddc9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001beccc(*(long *)(param_1 + 8) + 0x110,lVar1,*(undefined8 *)(lVar1 + 0x48),
                      param_1 + (ulong)*(uint *)(param_1 + 0x8a04) * 200 + 0x48);
  return;
}


