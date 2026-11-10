/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7434; name: FUN_.text__003b7434
 */


uint FUN__text__003b7434(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x28) != 0;
  piVar1 = (int *)(param_1 + 0x20);
  if (bVar5) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  iVar2 = *piVar1;
  if (bVar5) {
    param_2 = param_2 + 1;
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x14) / iVar2;
  }
  iVar3 = *(int *)(param_1 + 0x14) - iVar4 * iVar2;
  iVar4 = *param_2;
  if (0 < iVar4) {
    return (uint)(iVar2 <= iVar4 + iVar3);
  }
  if (iVar4 < 0) {
    return (uint)(iVar4 + iVar3) >> 0x1f;
  }
  return 0;
}


