/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9cfc; name: FUN_.text__006b9cfc
 */


long FUN__text__006b9cfc(long *param_1,int param_2)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x50))();
  lVar1 = param_1[0x1b];
  if (param_2 != 0) {
    lVar1 = 0;
  }
  return lVar1;
}


