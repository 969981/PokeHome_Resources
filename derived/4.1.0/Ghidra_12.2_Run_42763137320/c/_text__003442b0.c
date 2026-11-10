/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003442b0; name: FUN_.text__003442b0
 */


undefined4 FUN__text__003442b0(byte param_1)

{
  if (3 < param_1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return *(undefined4 *)((long)(char)param_1 * 4 + 0x724b30);
}


