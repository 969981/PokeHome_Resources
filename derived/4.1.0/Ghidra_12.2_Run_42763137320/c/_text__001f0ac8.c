/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f0ac8; name: FUN_.text__001f0ac8
 */


void FUN__text__001f0ac8(long param_1)

{
  long lVar1;
  
  lVar1 = DAT_008e2080;
  if (DAT_008e2080 != 0) {
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(DAT_008e2080 + 0xc4);
    lVar1 = *(long *)(lVar1 + 0x68);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x2ac) = *(uint *)(lVar1 + 0x2ac) & 0xfffffffd;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


