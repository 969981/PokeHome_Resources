/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3034; name: FUN_.text__004d3034
 */


undefined4
FUN__text__004d3034(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                   long *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x30,0x71f681,199);
  if (lVar2 != 0) {
    FUN__text__0048b74c(lVar2);
    iVar1 = FUN__text__0048bec0(lVar2,param_2,param_4);
    if (iVar1 == 1) {
      FUN__text__0048c190(lVar2,param_3,param_4);
    }
    else {
      FUN__text__0048b760(lVar2);
      (**(code **)(*param_2 + 0x18))(param_2,lVar2);
      lVar2 = 0;
    }
  }
  *param_5 = lVar2;
  uVar3 = 1;
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}


