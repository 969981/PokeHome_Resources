/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604a24; name: FUN_.text__00604a24
 */


uint FUN__text__00604a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  uint uVar1;
  undefined1 auStack_134 [28];
  undefined1 auStack_118 [232];
  
  FUN__text__0063fbb0(auStack_118,auStack_134,param_2,param_3);
  uVar1 = FUN__text__0060aa70(param_1,auStack_118,auStack_134,param_4);
  if ((uVar1 & 1) != 0) {
    FUN__text__006305fc(param_1);
  }
  return uVar1 & 1;
}


