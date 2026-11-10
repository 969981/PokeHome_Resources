/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004508d8; name: FUN_.text__004508d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004508d8(long *param_1)

{
  long lVar1;
  
  *param_1 = _DAT_008a4ed8 + 0x10;
  param_1[1] = 0;
  FUN__text__004d91c8(param_1 + 2);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar1 = _DAT_008a4f38 + 0x58;
  param_1[7] = _DAT_008a4f38 + 0x10;
  param_1[8] = lVar1;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar1 = _DAT_008a4ee8 + 0x10;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *param_1 = lVar1;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0x2b;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0x1ffffffff;
  param_1[0x23] = 0x2b00000000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0x1ffffffff;
  *(undefined8 *)((long)param_1 + 0xfc) = 0x3f800000ffffffff;
  *(undefined8 *)((long)param_1 + 300) = 0x3f800000ffffffff;
  return;
}


