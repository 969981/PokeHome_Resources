/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013dbf8; name: FUN_.text__0013dbf8
 */


void FUN__text__0013dbf8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x723a18;
  if (*(int *)(param_1 + 0x64c) != 0) {
    uVar1 = 0x723a20;
  }
  lVar2 = FUN__text__0012cdb0(param_1 + 0x110,uVar1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__003ae2a0();
  FUN__text__0013d0c4(param_1);
  return;
}


