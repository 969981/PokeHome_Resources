/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7494; name: FUN_.text__003b7494
 */


undefined8 FUN__text__003b7494(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2 / iVar1;
    }
    return CONCAT44(iVar2,param_2 - iVar2 * iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_2 / iVar1;
  }
  return CONCAT44(param_2 - iVar2 * iVar1,iVar2);
}


