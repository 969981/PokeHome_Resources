/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664e2c; name: FUN_.text__00664e2c
 */


undefined8 FUN__text__00664e2c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__00664288();
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN__text__0066713c(*param_1,0x71bc6a,lVar1);
    FUN__text__006783e4(lVar1);
    uVar2 = 0x3d;
  }
  return uVar2;
}


