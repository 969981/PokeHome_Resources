/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144a80; name: FUN_.text__00144a80
 */


void FUN__text__00144a80(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 8) + 400), *param_1 = lVar1, lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  param_1[1] = *(ulong *)(*(long *)(param_2 + 8) + 0x180) >> 3;
  return;
}


