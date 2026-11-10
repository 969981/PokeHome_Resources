/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1d00; name: FUN_.text__006c1d00
 */


void FUN__text__006c1d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN__text__0069de6c(param_1,param_3,param_4 & 0xff);
  if ((uVar1 & 1) != 0) {
    FUN__text__006b1924(param_3,param_2,param_4);
  }
  FUN__text__0069de50(param_1,param_2);
  return;
}


