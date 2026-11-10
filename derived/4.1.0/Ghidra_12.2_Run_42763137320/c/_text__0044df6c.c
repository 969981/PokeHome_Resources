/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044df6c; name: FUN_.text__0044df6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044df6c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a4f28 + 0xa8;
  *param_1 = _DAT_008a4f28 + 0x10;
  param_1[0xc] = lVar1;
  FUN__text__00457928(param_1 + 0x19);
  param_1[0xe] = _DAT_008a4ef0 + 0x10;
  FUN__text__00451cdc(param_1 + 0x10);
  FUN__text__00458e90(param_1);
  return;
}


