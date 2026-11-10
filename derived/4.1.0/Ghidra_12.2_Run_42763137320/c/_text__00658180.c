/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658180; name: FUN_.text__00658180
 */


undefined8 FUN__text__00658180(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_f0 [128];
  
  lVar1 = FUN__text__00659bb0(param_2,auStack_f0 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN__text__0066bc6c(*param_1,lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      return 0;
    }
    FUN__text__006783e4(lVar1);
  }
  return 0x1b;
}


