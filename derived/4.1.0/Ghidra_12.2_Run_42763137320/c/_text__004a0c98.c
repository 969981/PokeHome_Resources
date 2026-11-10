/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0c98; name: FUN_.text__004a0c98
 */


long FUN__text__004a0c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                        undefined8 param_5)

{
  long lVar1;
  
  if (*param_4 != 1) {
    lVar1 = FUN__text__004a13ec(param_1,param_2,param_3,param_4,param_5);
    return lVar1;
  }
  lVar1 = FUN__text__00400f80(0,1000);
  if (lVar1 != 0) {
    FUN__text__004be9c0(lVar1,param_4,param_2,param_3,param_5);
  }
  return lVar1;
}


