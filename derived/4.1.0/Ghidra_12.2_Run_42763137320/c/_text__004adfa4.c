/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004adfa4; name: FUN_.text__004adfa4
 */


void FUN__text__004adfa4(undefined8 param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                        undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  
  if (param_2 != (code *)0x0) {
    lVar1 = FUN__text__004ae320(param_1,param_6);
    if (lVar1 != 0) {
      (*param_2)(param_3,param_4,param_5,param_6);
      FUN__text__004ae220(param_1,param_6);
      return;
    }
  }
  return;
}


