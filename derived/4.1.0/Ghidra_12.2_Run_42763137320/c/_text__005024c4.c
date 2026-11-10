/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005024c4; name: FUN_.text__005024c4
 */


undefined4 FUN__text__005024c4(long *param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uStack_11;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (((*(byte *)(param_3 + 0x14) & 6) == 2) && (*(int *)(param_4 + 0x10) != 0)) {
      lVar2 = FUN__text__00502594(param_1,*(byte *)(param_3 + 0x14) & 7,param_4);
      goto LAB__text__00502578;
    }
  }
  if (param_2 == 0) {
    lVar2 = param_1[0x10];
  }
  else {
    FUN__text__004f5550(param_1);
    iVar1 = FUN__text__00500320(param_1 + 0x13,param_2,param_4);
    if (iVar1 == 1) {
      lVar2 = FUN__text__00502238(param_1,&uStack_11);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) == 0)) {
        FUN__text__004f5550(param_1);
        lVar2 = 0;
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x120))(param_1);
    }
  }
LAB__text__00502578:
  uVar3 = 1;
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}


