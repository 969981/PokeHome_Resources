/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048fa0c; name: FUN_.text__0048fa0c
 */


void FUN__text__0048fa0c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  DAT_00aea8f8 = DAT_00aea8f8 + 1;
  puVar1 = &DAT_00aea8f8;
  if (DAT_00aea908 != 0) {
    puVar1 = (undefined4 *)DAT_00aea900;
  }
  puVar2 = param_1;
  param_1[3] = DAT_00aea900;
  DAT_00aea900 = puVar2;
  *(undefined8 **)(puVar1 + 4) = param_1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *param_1 = 0x889d78;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0x18] = 0x10100000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}


