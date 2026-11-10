/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054b4d4; name: FUN_.text__0054b4d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0054b4d4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = _DAT_008a3e10 + 0x10;
  lVar3 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  param_1[7] = *(long *)(param_2 + 0x38);
  param_1[8] = lVar3;
  lVar3 = *(long *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  *(undefined1 *)((long)param_1 + 0x47) = 1;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  param_1[3] = lVar2;
  param_1[4] = lVar6;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  return;
}


