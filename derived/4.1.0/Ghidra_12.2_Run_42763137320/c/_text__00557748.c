/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00557748; name: FUN_.text__00557748
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00557748(long *param_1)

{
  long lVar1;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x800;
  lVar1 = _DAT_008a3b38;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3c23d70a3f800000;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[9] = 0;
  param_1[10] = 0x3c23d70a3f800000;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0;
  param_1[7] = 0x80000000000;
  param_1[8] = 0;
  FUN__text__0055815c(param_1 + 0xe);
  FUN__text__0054f860(param_1 + 0x1a);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return;
}


