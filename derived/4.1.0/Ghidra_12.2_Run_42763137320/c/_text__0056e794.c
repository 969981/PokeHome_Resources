/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056e794; name: FUN_.text__0056e794
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0056e794(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  *param_1 = _DAT_008a3c68 + 0x10;
  param_1[1] = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar4;
  param_1[2] = lVar1;
  param_1[3] = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined2 *)((long)param_1 + 0x4c) = 0x101;
  *(undefined1 *)((long)param_1 + 0x4e) = 1;
  *(undefined4 *)(param_1 + 9) = uVar3;
  param_1[7] = lVar2;
  param_1[8] = lVar4;
  param_1[6] = lVar1;
  return;
}


