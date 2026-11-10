/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f92f0; name: FUN_.text__001f92f0
 */


void FUN__text__001f92f0(long param_1)

{
  if (4 < *(uint *)(param_1 + 0x78)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
                    /* WARNING: Could not emulate address calculation at 0x001f9318 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__001f9328 +
            (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x78) + 0x726f10) * 4))();
  return;
}


