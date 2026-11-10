/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c09a8; name: FUN_.text__006c09a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c09a8(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _DAT_008a6a68;
  param_1[2] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = -1;
  lVar1 = FUN__text__006c1db0(param_2);
  param_1[2] = lVar1;
  return;
}


