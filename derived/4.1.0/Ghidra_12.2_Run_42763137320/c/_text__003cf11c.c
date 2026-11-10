/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf11c; name: FUN_.text__003cf11c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cf11c(long *param_1)

{
  long lVar1;
  
  *param_1 = _DAT_008a36f0 + 0x10;
  memset(param_1 + 1,0,0x20014);
  lVar1 = _DAT_008a36f8;
  param_1[0x4004] = 0;
  param_1[0x4005] = 0;
  *(undefined4 *)(param_1 + 0x4008) = 0;
  param_1[0x4009] = 0;
  param_1[0x400a] = 0;
  param_1[0x400b] = 0;
  *(undefined1 *)(param_1 + 0x400c) = 0;
  param_1[0x4006] = lVar1 + 0x10;
  param_1[0x4007] = -1;
  return;
}


