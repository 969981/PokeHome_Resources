/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ced00; name: FUN_.text__006ced00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ced00(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  lVar1 = _DAT_008a6af0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = lVar1 + 0x10;
  FUN__text__006ce130(param_1 + 8,param_4);
  param_1[0x11] = param_4;
  param_1[0x12] = (long)(param_1 + 0x12);
  param_1[0x13] = (long)(param_1 + 0x12);
  return;
}


