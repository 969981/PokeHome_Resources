/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7094; name: FUN_.text__003b7094
 */


bool FUN__text__003b7094(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = *param_2 + *(int *)(param_1 + 0x20) * param_2[1];
  }
  else {
    iVar2 = param_2[1] + *(int *)(param_1 + 0x24) * *param_2;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 0x14);
  if (iVar2 < 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    return iVar2 <= *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + -1;
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  return iVar2 <= *(int *)(param_1 + 8) + ~(*piVar1 * *(int *)(param_1 + 0xc));
}


