/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068434c; name: FUN_.text__0068434c
 */


long FUN__text__0068434c(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    lVar2 = param_3;
    do {
      FUN__text__00679974(param_1,puVar1[-1]);
      FUN__text__0067999c(param_1 + 2,*puVar1);
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return param_3 * 6;
}


