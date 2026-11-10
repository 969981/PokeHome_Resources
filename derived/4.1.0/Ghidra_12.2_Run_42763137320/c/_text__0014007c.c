/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014007c; name: FUN_.text__0014007c
 */


void FUN__text__0014007c(void)

{
  uint uVar1;
  int in_w3;
  uint in_w4;
  
  if (in_w3 == 0) {
    return;
  }
  uVar1 = (in_w4 & 0xff) - 2;
  if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
                    /* WARNING: Could not emulate address calculation at 0x001400e0 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__001400f8 + (ulong)*(byte *)((ulong)uVar1 + 0x724390) * 4))();
  return;
}


