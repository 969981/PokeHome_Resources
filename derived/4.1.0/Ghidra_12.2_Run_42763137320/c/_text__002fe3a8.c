/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fe3a8; name: FUN_.text__002fe3a8
 */


void FUN__text__002fe3a8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x408);
  iVar1 = *param_2;
  if (*param_2 <= iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(*(long *)(param_1 + 0x20) + 0x408) = iVar1;
  return;
}


