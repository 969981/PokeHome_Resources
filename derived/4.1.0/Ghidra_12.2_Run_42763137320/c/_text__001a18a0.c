/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a18a0; name: FUN_.text__001a18a0
 */


bool FUN__text__001a18a0(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + (long)param_2 * 4 + 0x1bc);
  if (iVar2 == 0) {
    return false;
  }
  param_1 = param_1 + (long)param_2 * 0x20;
  plVar1 = (long *)(param_1 + 0x68);
  if (iVar2 == 4) {
    plVar1 = (long *)(param_1 + 0xa8);
  }
  return *(char *)(*plVar1 + 0x4c9) != '\0';
}


