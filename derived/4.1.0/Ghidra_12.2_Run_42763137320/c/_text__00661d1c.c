/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661d1c; name: FUN_.text__00661d1c
 */


undefined8 FUN__text__00661d1c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar7 = param_2[0xf] - param_2[0x10];
  uVar2 = FUN__text__0067d808(*param_2,param_2[0xe] + param_2[0x10],uVar7);
  if ((long)uVar2 < 0) {
    uVar3 = FUN__text__00679b60(uVar2 & 0xffffffff);
    FUN__text__0066713c(uVar6,0x714012,uVar2,uVar3);
    uVar4 = 0x38;
  }
  else {
    if (uVar7 == uVar2) {
      lVar5 = 0;
      param_2[0xf] = 0;
    }
    else {
      lVar5 = param_2[0x10] + uVar2;
    }
    param_2[0x10] = lVar5;
    iVar1 = FUN__text__00662b8c(uVar6,*param_2);
    if (iVar1 == 0) {
      uVar6 = FUN__text__00662c1c(param_2);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        FUN__text__00650d38(param_1,1);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x10;
      }
    }
    else {
      uVar4 = 0x37;
    }
  }
  *param_3 = uVar4;
  return 0xffffffff;
}


