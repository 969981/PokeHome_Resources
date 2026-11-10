/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ad10; name: FUN_.text__0044ad10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044ad10(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (undefined4 *)DAT_00ae9e10;
  bVar5 = DAT_00ae9e18 != 0;
  plVar4 = param_1;
  param_1[3] = (long)DAT_00ae9e10;
  DAT_00ae9e10 = plVar4;
  lVar2 = _DAT_008a4b28;
  DAT_00ae9e08 = DAT_00ae9e08 + 1;
  puVar1 = &DAT_00ae9e08;
  if (bVar5) {
    puVar1 = puVar3;
  }
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = lVar2 + 0x10;
  *(byte *)((long)param_1 + 0x3a) = *(byte *)((long)param_1 + 0x3a) & 0xf8;
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) | 1;
  return;
}


