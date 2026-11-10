/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0d80; name: FUN_.text__006c0d80
 */


int FUN__text__006c0d80(int *param_1,int param_2,ulong param_3,void *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar3 = 0;
    param_1 = param_1 + 1;
    do {
      uVar1 = (ulong)(uint)param_1[1];
      if ((*param_1 == param_2 && uVar1 == param_3) &&
         (iVar2 = memcmp(param_1 + 2,param_4,uVar1 * 4), iVar2 == 0)) {
        return iVar3;
      }
      param_1 = param_1 + 2 + uVar1;
      iVar3 = iVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}


