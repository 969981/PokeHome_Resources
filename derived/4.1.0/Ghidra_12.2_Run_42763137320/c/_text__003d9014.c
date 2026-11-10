/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9014; name: FUN_.text__003d9014
 */


long FUN__text__003d9014(uint *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)param_1[1] - 1;
  if (uVar2 < *param_1) {
    return *(long *)(param_1 + 2) + uVar2 * 8;
  }
  iVar1 = (int)uVar2 - *param_1;
  lVar3 = LZCOUNT(iVar1 + 0x10);
  return *(long *)(*(long *)(param_1 + 4) + (0x1b - lVar3) * 8 + 8) +
         (ulong)(uint)(iVar1 - *(int *)((0x1c - lVar3) * 4 + 0x734874)) * 8;
}


