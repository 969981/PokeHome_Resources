/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622f2c; name: FUN_.text__00622f2c
 */


uint FUN__text__00622f2c(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_40 [32];
  
  FUN__text__0060eea4(auStack_40);
  FUN__text__0060efe0(auStack_40,param_1);
  uVar1 = FUN__text__0060f6e0(auStack_40,param_2);
  FUN__text__0060eef8(auStack_40);
  return uVar1 & 1;
}


