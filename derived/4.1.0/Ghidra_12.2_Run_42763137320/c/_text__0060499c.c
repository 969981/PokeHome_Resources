/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060499c; name: FUN_.text__0060499c
 */


uint FUN__text__0060499c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  uint uVar1;
  undefined1 auStack_2d6 [662];
  
  memset(auStack_2d6,0,0x296);
  FUN__text__006303f4(auStack_2d6,param_3);
  uVar1 = FUN__text__0060cd30(param_1,param_2,auStack_2d6,param_4);
  if ((uVar1 & 1) != 0) {
    FUN__text__006458e0(param_1,param_2);
  }
  return uVar1 & 1;
}


