/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee624; name: FUN_.text__006ee624
 */


void FUN__text__006ee624(long param_1,long *param_2,int param_3)

{
  if (*(byte *)(param_1 + 1) - 1 < 2) {
    *param_2 = (long)param_3;
    return;
  }
  if (*(byte *)(param_1 + 1) == 0) {
    *param_2 = *(long *)(param_1 + 0x10) + (long)param_3 * 0x10;
    return;
  }
  nn::detail::UnexpectedDefaultImpl();
  return;
}


