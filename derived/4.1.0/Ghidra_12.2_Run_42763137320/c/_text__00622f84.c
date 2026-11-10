/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622f84; name: FUN_.text__00622f84
 */


undefined8 FUN__text__00622f84(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN__text__00616c70();
  uVar1 = FUN__text__006300e0();
  uVar2 = FUN__text__0060f6e0(param_1,uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
    uVar2 = FUN__text__0060f6e0(param_1,1);
    if ((uVar2 & 1) == 0) {
      uVar1 = 2;
      uVar2 = FUN__text__0060f6e0(param_1,2);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar3 = FUN__text__00618760(param_1,uVar1);
  return uVar3;
}


