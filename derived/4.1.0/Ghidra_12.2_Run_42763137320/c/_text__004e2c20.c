/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2c20; name: FUN_.text__004e2c20
 */


bool FUN__text__004e2c20(long param_1,void *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2;
  if (param_3 <= iVar2) {
    iVar1 = param_3;
  }
  memcpy(param_2,(void *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18)),(long)iVar1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  *param_4 = iVar1;
  return param_3 <= iVar2;
}


