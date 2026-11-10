/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce944; name: FUN_.text__003ce944
 */


void FUN__text__003ce944(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + 0x330) != (param_2 & 1)) {
    lVar3 = param_1 + -0x60;
    if ((param_2 & 1) == 0) {
      uVar4 = 3;
      uVar2 = 5;
    }
    else {
      *(byte *)(*(long *)(param_1 + 0x328) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x328) + 0x58) | 1;
      uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,4);
      FUN__text__003c4b88(0,lVar3,uVar1,1,1);
      uVar4 = 5;
      uVar2 = 3;
    }
    uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,uVar2);
    FUN__text__003c4b88(0,lVar3,uVar1,1,param_2 & 1);
    uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,uVar4);
    FUN__text__003c4c40(lVar3,uVar1);
    *(byte *)(param_1 + 0x330) = param_2 & 1;
  }
  return;
}


