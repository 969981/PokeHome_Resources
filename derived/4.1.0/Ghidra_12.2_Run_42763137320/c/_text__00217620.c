/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217620; name: FUN_.text__00217620
 */


undefined4 FUN__text__00217620(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((*(byte *)(*param_3 + 0x13) >> 1 & 1) == 0) {
    return 1;
  }
  uVar1 = FUN__text__005fc76c();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


