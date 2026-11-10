/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049b860; name: FUN_.text__0049b860
 */


void FUN__text__0049b860(long param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  
  if ((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0xc4) == 1)) {
    FUN__text__00464fec(param_1);
    if (*(ulong *)(param_1 + 0x128) != 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulong *)(param_1 + 0x128);
      do {
        auVar1 = FUN__text__00499940(param_1,auVar1._0_8_,auVar1._8_8_);
      } while (auVar1._0_8_ != 0);
    }
  }
  FUN__text__00469848(param_1,param_2);
  return;
}


