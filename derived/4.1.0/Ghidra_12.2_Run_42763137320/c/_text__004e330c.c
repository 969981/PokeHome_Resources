/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e330c; name: FUN_.text__004e330c
 */


long FUN__text__004e330c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x10,0x720378,0x27);
  if (lVar1 != 0) {
    FUN__text__004e32e4(lVar1,param_1);
  }
  return lVar1;
}


