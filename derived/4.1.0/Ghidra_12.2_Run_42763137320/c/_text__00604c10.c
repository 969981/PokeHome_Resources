/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604c10; name: FUN_.text__00604c10
 */


uint FUN__text__00604c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [328];
  
  FUN__text__00645888(auStack_178,auStack_188,param_2,param_3);
  uVar1 = FUN__text__0060c840(param_1,auStack_178,auStack_188);
  if ((uVar1 & 1) != 0) {
    FUN__text__006305fc(param_1);
  }
  return uVar1 & 1;
}


