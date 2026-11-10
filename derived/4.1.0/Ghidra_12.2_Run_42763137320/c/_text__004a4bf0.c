/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a4bf0; name: FUN_.text__004a4bf0
 */


undefined8 FUN__text__004a4bf0(long param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_34 [4];
  
  param_3 = param_3 & 0xffffffff;
  if (*(int *)(param_2 + 0x34) == 0) {
    iVar1 = (int)(param_3 / 0xc) * 0xc;
    if ((param_4 & 1) == 0) {
      lVar3 = FUN__text__00400f80(0,iVar1);
      *(long *)(param_2 + 0x20) = lVar3;
      if (lVar3 != 0) {
        *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 2;
        FUN__text__004aecec(param_1 + 8,lVar3,iVar1);
        uVar2 = 1;
        if (*(long *)(param_2 + 0x20) == 0) {
          return 1;
        }
        goto LAB__text__004a4cdc;
      }
      uVar2 = 0x34;
      lVar3 = *(long *)(param_2 + 0x20);
    }
    else {
      uVar2 = FUN__text__004ae940(param_1 + 8,iVar1);
      if (*(long *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x20) = uVar2;
      }
      FUN__text__004aecbc(param_1 + 8);
      uVar2 = 1;
      lVar3 = *(long *)(param_2 + 0x20);
    }
    if (lVar3 != 0) {
LAB__text__004a4cdc:
      *(int *)(param_2 + 0x38) = (int)(param_3 / 0xc);
      return uVar2;
    }
  }
  else {
    FUN__text__004ae7a0(param_1 + 8,param_3,auStack_34);
    uVar2 = 1;
  }
  return uVar2;
}


