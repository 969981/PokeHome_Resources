/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d2f0c; name: FUN_.text__004d2f0c
 */


undefined8
FUN__text__004d2f0c(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__0040a740(param_3 + -0x30);
  if (lVar1 == 0) {
    return 2;
  }
  uVar2 = FUN__text__00488200(param_1,param_2,lVar1 + 200,param_4,param_5);
  return uVar2;
}


