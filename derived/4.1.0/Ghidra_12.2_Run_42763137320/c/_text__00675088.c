/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675088; name: FUN_.text__00675088
 */


long FUN__text__00675088(FILE *param_1)

{
  int iVar1;
  long __off;
  long lVar2;
  
  __off = ftell(param_1);
  if ((__off == -1) || (iVar1 = fseek(param_1,0,2), iVar1 != 0)) {
    lVar2 = -1;
  }
  else {
    lVar2 = ftell(param_1);
    if (lVar2 != -1) {
      fseek(param_1,__off,0);
    }
  }
  return lVar2;
}


