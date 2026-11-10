/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b19e8; name: FUN_.text__006b19e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b19e8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = _DAT_008a6910;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  *param_1 = lVar1 + 0x10;
  FUN__text__006b1a20(param_1,0,0,param_2,param_3);
  return;
}


