/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00581270; name: FUN_.text__00581270
 */


long FUN__text__00581270(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x10,0x70f10a,0x30);
  if (lVar1 != 0) {
    FUN__text__00581254(lVar1,param_1);
  }
  return lVar1;
}


