/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024591c; name: FUN_.text__0024591c
 */


void FUN__text__0024591c(long param_1,void *param_2,uint param_3)

{
  void *__src;
  
  if (*(uint *)(param_1 + 0x718) <= param_3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  __src = (void *)FUN__text__00323c30(*(undefined4 *)(param_1 + (ulong)param_3 * 4 + 0x71c),
                                      param_1 + 0x6d8);
  memcpy(param_2,__src,0x9c);
  return;
}


