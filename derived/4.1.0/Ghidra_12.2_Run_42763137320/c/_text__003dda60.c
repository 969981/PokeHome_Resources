/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dda60; name: FUN_.text__003dda60
 */


undefined8 FUN__text__003dda60(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  FUN__text__003d83e0();
  iVar1 = FUN__text__003d7a74(param_1);
  do {
    if (iVar1 != 0x2f) {
      return 0;
    }
    uVar2 = FUN__text__003d8118(param_1,0x71f664,2);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN__text__003d8118(param_1,0x721017,2);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      while (iVar1 = FUN__text__003d7b98(param_1), -1 < iVar1) {
        if ((iVar1 == 0x2a) &&
           ((iVar1 = FUN__text__003d7b98(param_1), iVar1 < 0 || (iVar1 == 0x2f)))) break;
      }
    }
    else {
      do {
        iVar1 = FUN__text__003d7b98(param_1);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
    }
    FUN__text__003d83e0(param_1);
    iVar1 = FUN__text__003d7a74(param_1);
  } while( true );
}


