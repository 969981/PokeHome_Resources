/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f3fc; name: FUN_.text__0019f3fc
 */


void FUN__text__0019f3fc(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 8), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  memcpy((void *)(lVar1 + 0x4c),(void *)(*(long *)(param_1 + 0x168) + 0x20),600);
  return;
}


