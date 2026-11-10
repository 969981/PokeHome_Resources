/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b79a8; name: FUN_.text__004b79a8
 */


undefined4 FUN__text__004b79a8(long param_1)

{
  undefined4 uVar1;
  undefined1 uStack_21;
  
  FUN__text__0040af70(1,0);
  FUN__text__00411c2c(&uStack_21);
  if (DAT_00ae9b1d == '\0') {
    FUN__text__00406184();
    uVar1 = 1;
  }
  else {
    uVar1 = FUN__text__004b86dc(param_1 + 0x90);
  }
  FUN__text__00411c70(&uStack_21);
  FUN__text__004b0020(param_1,0,0);
  return uVar1;
}


