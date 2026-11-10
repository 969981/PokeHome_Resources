/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e3ed0; name: FUN_.text__004e3ed0
 */


long FUN__text__004e3ed0(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x20,0x71ddb1,0x16);
  if (lVar1 != 0) {
    FUN__text__004e3fcc(lVar1);
  }
  return lVar1;
}


