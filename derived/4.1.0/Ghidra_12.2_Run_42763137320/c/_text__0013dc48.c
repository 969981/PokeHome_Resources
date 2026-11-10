/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013dc48; name: FUN_.text__0013dc48
 */


void FUN__text__0013dc48(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0xda0) = param_2;
  uVar1 = 0x723a18;
  if (*(int *)(param_1 + 0x64c) != 0) {
    uVar1 = 0x723a20;
  }
  lVar2 = FUN__text__0012cdb0(param_1 + 0x110,uVar1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__003ae340(lVar2,param_2,1);
  FUN__text__0013d0c4(param_1);
  return;
}


