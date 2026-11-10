/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595420; name: FUN_.text__00595420
 */


long FUN__text__00595420(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x50,0x71f773,0x1a);
  if (lVar1 != 0) {
    FUN__text__0059551c(lVar1);
  }
  return lVar1;
}


