/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5c4c; name: FUN_.text__004c5c4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c5c4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a4be8;
  lVar1 = _DAT_008a4be8 + 0x2a8;
  *param_1 = _DAT_008a4be8 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2 + 0x2c0;
  param_1[5] = lVar2 + 0x300;
  FUN__text__004c57f0(param_1 + 0x1e);
  thunk_FUN__text__0049392c(param_1);
  return;
}


