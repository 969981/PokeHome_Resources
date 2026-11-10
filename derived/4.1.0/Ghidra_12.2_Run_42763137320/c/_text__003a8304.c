/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8304; name: FUN_.text__003a8304
 */


void FUN__text__003a8304(long param_1,int *param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if ((param_4 & 1) != 0) {
    FUN__text__003a9d10(param_1,0);
  }
  lVar3 = *(long *)(param_1 + 0x408);
  if (*(int *)(lVar3 + 0x1c) == 0) {
    uVar1 = *(undefined4 *)(lVar3 + 8);
    iVar2 = *param_2 + *(int *)(lVar3 + 0xc) * param_2[1];
    *(int *)(lVar3 + 8) = iVar2;
  }
  else {
    iVar2 = param_2[1] + *(int *)(lVar3 + 0x10) * *param_2;
    uVar1 = *(undefined4 *)(lVar3 + 8);
    *(int *)(lVar3 + 8) = iVar2;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN__text__003a8394(param_1,iVar2,uVar1,0);
  return;
}


