/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604704; name: FUN_.text__00604704
 */


uint FUN__text__00604704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  uint uVar1;
  undefined1 auStack_2d6 [662];
  
  memset(auStack_2d6,0,0x296);
  FUN__text__006303f4(auStack_2d6,param_3);
  uVar1 = FUN__text__0060af70(param_1,param_2,auStack_2d6,param_4);
  if ((uVar1 & 1) != 0) {
    FUN__text__0063fc20(param_1,param_2);
  }
  return uVar1 & 1;
}


