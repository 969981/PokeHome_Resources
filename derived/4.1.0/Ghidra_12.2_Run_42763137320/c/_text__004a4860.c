/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a4860; name: FUN_.text__004a4860
 */


int FUN__text__004a4860(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_14;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = 0x20000003;
  if ((*(byte *)(param_3 + 0x68) & 8) != 0) {
    uVar1 = 0x60000003;
  }
  lVar3 = FUN__text__00400f90(uVar1,param_2,*(undefined4 *)(param_3 + 0x6c));
  *(long *)(param_3 + 0x18) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  *(int *)(param_3 + 0x28) = param_2;
  local_14 = 0;
  iVar2 = FUN__text__004aea70(param_1 + 8,lVar3,param_2,&local_14,0xffffffff);
  iVar4 = 7;
  if (local_14 == param_2) {
    iVar4 = 1;
  }
  if (iVar2 != 1) {
    iVar4 = iVar2;
  }
  return iVar4;
}


