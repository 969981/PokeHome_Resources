/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e21c8; name: FUN_.text__005e21c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e21c8(long *param_1)

{
  long lVar1;
  
  memset(param_1,0,0x26d);
  FUN__text__005e6444(param_1);
  param_1[0x4c] = 0;
  lVar1 = _DAT_008a5ad8;
  *(undefined4 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x68;
  param_1[10] = lVar1 + 0xa8;
  return;
}


