/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a9034; name: FUN_.text__006a9034
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a9034(long *param_1)

{
  long lVar1;
  
  FUN__text__006a8030();
  lVar1 = _DAT_008a6828;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = lVar1 + 0x10;
  return;
}


