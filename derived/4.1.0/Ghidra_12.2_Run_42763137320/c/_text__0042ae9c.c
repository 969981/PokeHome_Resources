/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042ae9c; name: FUN_.text__0042ae9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042ae9c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a4810;
  *param_1 = _DAT_008a4810 + 0x10;
  param_1[3] = lVar1 + 0x68;
  param_1[0x13] = lVar1 + 0x100;
  FUN__text__004ce9e0(param_1 + 0x16);
  FUN__text__004ce540(param_1 + 0x14);
  FUN__text__00429c68(param_1);
  return;
}


