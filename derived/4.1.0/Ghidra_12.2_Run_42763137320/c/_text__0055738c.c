/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055738c; name: FUN_.text__0055738c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0055738c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_008a3b48;
  *(undefined4 *)(param_1 + 1) = 0x800;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3c23d70a3f800000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[3] = lVar2;
  param_1[4] = lVar3;
  param_1[2] = lVar1;
  return;
}


