/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1934; name: FUN_.text__001c1934
 */


void FUN__text__001c1934(long *param_1)

{
  long lVar1;
  int local_30 [4];
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != *(int *)(*(long *)(lVar1 + 0x38) + 0x1c4)) {
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[1] = 3;
    local_30[0] = *(int *)(lVar1 + 0x30);
    FUN__text__0019e97c(*(long *)(lVar1 + 0x38),local_30,0,0);
  }
  if ((*(long *)(lVar1 + 8) == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001c3230(*(long *)(lVar1 + 8),*(long *)(lVar1 + 0x18),1);
  return;
}


