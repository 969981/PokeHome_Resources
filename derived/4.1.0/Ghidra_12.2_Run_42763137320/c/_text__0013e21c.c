/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013e21c; name: FUN_.text__0013e21c
 */


void FUN__text__0013e21c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x64c) != 1) {
    return;
  }
  lVar1 = FUN__text__0012cb14(param_1 + 0x110,0x723a38);
  if (lVar1 != 0) {
    FUN__text__003a14c4(lVar1,0);
    lVar1 = FUN__text__0012cb14(param_1 + 0x110,0x723a40);
    if (lVar1 != 0) {
      FUN__text__003a14c4(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


