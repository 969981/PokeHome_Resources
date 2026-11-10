/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f1080; name: FUN_.text__002f1080
 */


undefined4 FUN__text__002f1080(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (DAT_008e52b8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = FUN__text__002cc000(DAT_008e52b8,0x70b9ad);
  uVar2 = 0x1f;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x20;
  }
  return uVar2;
}


