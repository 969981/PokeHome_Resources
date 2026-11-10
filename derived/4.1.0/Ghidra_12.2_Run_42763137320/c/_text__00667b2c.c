/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667b2c; name: FUN_.text__00667b2c
 */


undefined8 FUN__text__00667b2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [128];
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar1 = FUN__text__00667ba0(param_1,param_2,auStack_d0 + 0x80);
  }
  return uVar1;
}


