/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce86c; name: FUN_.text__003ce86c
 */


void FUN__text__003ce86c(long *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 0x72) != (param_2 & 1)) {
    if ((param_2 & 1) == 0) {
      uVar3 = 3;
      uVar2 = 5;
    }
    else {
      *(byte *)(param_1[0x71] + 0x58) = *(byte *)(param_1[0x71] + 0x58) | 1;
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,4);
      FUN__text__003c4b88(0,param_1,uVar1,1,1);
      uVar3 = 5;
      uVar2 = 3;
    }
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar2);
    FUN__text__003c4b88(0,param_1,uVar1,1,param_2 & 1);
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar3);
    FUN__text__003c4c40(param_1,uVar1);
    *(byte *)(param_1 + 0x72) = param_2 & 1;
  }
  return;
}


