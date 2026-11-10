/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dbe60; name: FUN_.text__002dbe60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002dbe60(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = _DAT_008a2890;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar1 = FUN__text__005f52b0();
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[8] = lVar1;
  param_1[9] = 0x199999999999999;
  lVar1 = FUN__text__005f52b0();
  uVar2 = param_1[3];
  param_1[0x1a] = 0;
  param_1[0x14] = lVar1;
  param_1[0x15] = 0x199999999999999;
  if ((param_1[4] - uVar2 != 0) &&
     (uVar3 = ((long)(param_1[4] - uVar2) >> 3) * 0x19, uVar3 % 0x19 != 0)) {
    uVar3 = uVar2 + (uVar3 / 0x19) * 8;
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 <= uVar3);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar1 = FUN__text__005f52b0();
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x24] = lVar1;
  param_1[0x25] = 0xe38e38e38e38e3;
  param_1[0x2e] = 0;
  lVar1 = FUN__text__005f52b0();
  uVar2 = param_1[0x1f];
  param_1[0x36] = 0;
  param_1[0x30] = lVar1;
  param_1[0x31] = 0xe38e38e38e38e3;
  uVar3 = param_1[0x20] - uVar2;
  if (((uVar3 & 0x7fffffffffffffff) != 0) && ((uVar3 & 7) != 0)) {
    uVar3 = uVar2 + (uVar3 & 0x7ffffffffffffff8);
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 <= uVar3);
  }
  FUN__text__005e927c(param_1 + 0x3a,_DAT_008a2898);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}


