/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004715c8; name: FUN_.text__004715c8
 */


bool FUN__text__004715c8(long *param_1,long param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_14 [4];
  
  iVar1 = FUN__text__00495c50(param_1,auStack_14);
  *param_3 = iVar1;
  if (iVar1 == 3) {
    if ((param_2 == 0) || (iVar1 = (**(code **)(param_1[2] + 0x10))(), iVar1 == 9)) {
      iVar1 = 2;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 600))(param_1,param_2);
      iVar1 = 1;
      if ((uVar2 & 1) != 0) {
        iVar1 = 2;
      }
    }
    *param_3 = iVar1;
  }
  return iVar1 != 1;
}


