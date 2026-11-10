/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00565654; name: FUN_.text__00565654
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00565654(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = _DAT_008a3d70 + 0x10;
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = lVar1;
  lVar1 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  lVar6 = *(long *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  lVar3 = *(long *)(param_2 + 0x28);
  lVar7 = *(long *)(param_2 + 0x18);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar3;
  param_1[3] = lVar7;
  lVar3 = *(long *)(param_2 + 0x30);
  lVar4 = *(long *)(param_2 + 0x38);
  lVar7 = *(long *)(param_2 + 0x40);
  lVar5 = *(long *)(param_2 + 0x48);
  param_1[10] = lVar6;
  param_1[0xb] = lVar1;
  param_1[0xc] = lVar2;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[8] = lVar7;
  param_1[9] = lVar5;
  param_1[6] = lVar3;
  param_1[7] = lVar4;
  return;
}


