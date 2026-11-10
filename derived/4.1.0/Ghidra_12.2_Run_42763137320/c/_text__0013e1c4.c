/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013e1c4; name: FUN_.text__0013e1c4
 */


void FUN__text__0013e1c4(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__0012cb14(param_1 + 0x110,(param_2 & 0xffffffff) * 8 + 0x724300);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return;
}


