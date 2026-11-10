/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054dea4; name: FUN_.text__0054dea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0054dea4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = _DAT_008a3a70 + 0x10;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[5] = lVar2;
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  param_1[3] = lVar4;
  param_1[4] = lVar1;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  return;
}


