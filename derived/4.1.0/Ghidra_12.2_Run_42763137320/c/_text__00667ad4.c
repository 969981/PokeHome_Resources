/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667ad4; name: FUN_.text__00667ad4
 */


undefined8 FUN__text__00667ad4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN__text__006783e4(*param_1);
  *param_1 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN__text__00678404(param_2);
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    else {
      uVar2 = 0;
      *param_1 = lVar1;
    }
  }
  return uVar2;
}


