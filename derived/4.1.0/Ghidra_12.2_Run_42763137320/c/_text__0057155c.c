/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057155c; name: FUN_.text__0057155c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0057155c(long *param_1)

{
  long lVar1;
  
  *param_1 = _DAT_008a3bb0 + 0x10;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (param_1[5] != 0) {
      FUN__text__00573fc0();
      lVar1 = param_1[4];
    }
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
  }
  return;
}


