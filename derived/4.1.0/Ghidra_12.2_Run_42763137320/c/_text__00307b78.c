/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307b78; name: FUN_.text__00307b78
 */


ulong FUN__text__00307b78(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar1 = FUN__text__00635c78(*(long *)(param_1 + 0x58));
    return uVar1;
  }
  return (ulong)*(byte *)(param_1 + 0x56);
}


