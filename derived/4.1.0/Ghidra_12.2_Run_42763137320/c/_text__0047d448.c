/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d448; name: FUN_.text__0047d448
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047d448(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (undefined4 *)DAT_00ae9e30;
  bVar5 = DAT_00ae9e38 != 0;
  plVar4 = param_1;
  param_1[3] = (long)DAT_00ae9e30;
  DAT_00ae9e30 = plVar4;
  lVar2 = _DAT_008a4478;
  DAT_00ae9e28 = DAT_00ae9e28 + 1;
  puVar1 = &DAT_00ae9e28;
  if (bVar5) {
    puVar1 = puVar3;
  }
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  *param_1 = lVar2 + 0x10;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f80000000000000;
  return;
}


