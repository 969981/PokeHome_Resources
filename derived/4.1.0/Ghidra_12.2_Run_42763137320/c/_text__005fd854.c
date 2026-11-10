/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd854; name: FUN_.text__005fd854
 */


undefined2 FUN__text__005fd854(long param_1,ushort param_2)

{
  if (0xf < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x160) + (ulong)param_2 * 2 + 0x20);
}


