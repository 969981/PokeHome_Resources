/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e353c; name: FUN_.text__004e353c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e353c(long *param_1)

{
  ushort uVar1;
  
  FUN__text__004e2f08();
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *param_1 = _DAT_008a4fe0 + 0x10;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  uVar1 = DAT_00ae9794;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 4) = (uint)uVar1;
  memset(param_1 + 8,0,0x1a8);
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x2b;
  return;
}


