/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463bc0; name: FUN_.text__00463bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00463bc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_008a4ab0 + 0x10;
  *param_1 = _DAT_008a4aa8 + 0x10;
  param_1[1] = lVar1;
  FUN__text__0042ce54(param_1 + 2);
  param_1[2] = _DAT_008a4a78 + 0x10;
  FUN__text__004a1458(param_1 + 5);
  lVar3 = _DAT_008a4ab8;
  lVar1 = _DAT_008a4ab8 + 0x10;
  lVar2 = _DAT_008a4ab8 + 0x288;
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
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[5] = lVar3 + 0x2e0;
  param_1[2] = lVar3 + 0x2a0;
  param_1[0x17] = (long)(param_1 + 0x15);
  *(uint *)((long)param_1 + 0xd2) = *(uint *)((long)param_1 + 0xd2) & 0xe0010000 | 0x4000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = (long)param_1;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


