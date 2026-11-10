/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023e320; name: FUN_.text__0023e320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0023e320(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a16b8;
  *param_1 = _DAT_008a16b8 + 0x10;
  param_1[9] = lVar1 + 0xf0;
  param_1[10] = lVar1 + 0x130;
  FUN__text__0017add0(param_1 + 0xbf);
  param_1[0xba] = _DAT_008a04f8 + 0x10;
  FUN__text__001257d8(param_1);
  return;
}


