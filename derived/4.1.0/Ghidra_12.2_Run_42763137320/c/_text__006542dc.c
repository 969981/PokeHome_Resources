/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006542dc; name: FUN_.text__006542dc
 */


undefined8 FUN__text__006542dc(long *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xa5) = param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = *param_1;
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN__text__00667a44(lVar3,3,2);
      }
      lVar2 = FUN__text__00654728(lVar3,param_3,param_1[0xa2],(int)param_1[0xa3]);
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN__text__00667a8c(lVar3,3);
      }
      if (lVar2 != 0) goto LAB__text__006542fc;
      FUN__text__00651770(param_3);
    }
    uVar1 = 0x1b;
  }
  else {
    lVar2 = 0;
LAB__text__006542fc:
    uVar1 = 0;
  }
  param_1[0xa4] = lVar2;
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  return uVar1;
}


