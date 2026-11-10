/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006048a8; name: FUN_.text__006048a8
 */


uint FUN__text__006048a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  FUN__text__006303f4(auStack_2c6,param_2);
  uVar1 = FUN__text__0060c330(param_1,auStack_2c6);
  if ((uVar1 & 1) != 0) {
    FUN__text__00643fa4(param_1);
  }
  return uVar1 & 1;
}


