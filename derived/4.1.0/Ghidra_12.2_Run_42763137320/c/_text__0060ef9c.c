/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060ef9c; name: FUN_.text__0060ef9c
 */


void FUN__text__0060ef9c(long param_1)

{
  long lVar1;
  
  FUN__text__0060e7dc();
  *(undefined2 *)(param_1 + 0x10) = 0;
  lVar1 = FUN__text__0060e7c4(param_1);
  if (lVar1 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


