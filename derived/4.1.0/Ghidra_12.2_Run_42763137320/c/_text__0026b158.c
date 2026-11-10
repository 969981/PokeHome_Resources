/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026b158; name: FUN_.text__0026b158
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0026b158(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a1518;
  *param_1 = _DAT_008a1518 + 0x10;
  param_1[9] = lVar1 + 0xf0;
  param_1[10] = lVar1 + 0x130;
  FUN__text__00172b90(param_1 + 0xba);
  FUN__text__001257d8(param_1);
  return;
}


