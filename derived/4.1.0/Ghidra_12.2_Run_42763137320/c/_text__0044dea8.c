/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044dea8; name: FUN_.text__0044dea8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044dea8(long *param_1)

{
  long lVar1;
  
  param_1[4] = 0;
  param_1[2] = -0x3a80000000000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 1;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar1 = _DAT_008a4f28 + 0x10;
  param_1[0xc] = _DAT_008a4f28 + 0xa8;
  *param_1 = lVar1;
  param_1[1] = 0;
  FUN__text__0044dd4c(param_1 + 0xe);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfc;
  *(undefined8 *)((long)param_1 + 300) = 0x2b;
  *(undefined8 *)((long)param_1 + 0x13c) = 0x3f800000ffffffff;
  *(undefined8 *)((long)param_1 + 0x144) = 0x1ffffffff;
  *(undefined8 *)((long)param_1 + 0x154) = 0x7f7fffff7f7fffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}


