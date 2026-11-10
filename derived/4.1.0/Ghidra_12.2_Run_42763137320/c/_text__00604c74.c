/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604c74; name: FUN_.text__00604c74
 */


uint FUN__text__00604c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  
  FUN__text__00604cdc(auStack_58,param_3);
  uVar1 = FUN__text__0060a460(param_1,param_2,param_3,auStack_58);
  if ((uVar1 & 1) != 0) {
    FUN__text__006305fc(param_1);
  }
  return uVar1 & 1;
}


