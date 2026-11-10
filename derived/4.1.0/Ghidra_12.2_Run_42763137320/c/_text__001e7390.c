/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e7390; name: FUN_.text__001e7390
 */


void FUN__text__001e7390(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long local_58;
  long local_50 [2];
  
  if (param_3 + 0x30 < 0x2f) {
    FUN__text__001e8fe0(param_1,param_2);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(lVar4 + 8) = param_2[3];
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2));
  if (*(int *)(param_2 + 1) == 0) {
    FUN__text__0013a0d0(*param_2,0,*(undefined4 *)(param_2 + 2));
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60);
    if (lVar1 == 0) goto LAB__text__001e7478;
LAB__text__001e741c:
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (param_3 < 0x402) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      local_50[1] = 0x786a1e4480312115;
      local_58 = lVar1;
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
LAB__text__001e7518:
      FUN__text__001ac594(uVar2,param_2 + 4,&local_58,local_50 + 1,0,param_3);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      goto LAB__text__001e754c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    local_50[1] = 0xd12268633d3eed0d;
    local_50[0] = lVar1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(plVar3);
  }
  else {
    FUN__text__0013a1b8();
    lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60);
    if (lVar1 != 0) goto LAB__text__001e741c;
LAB__text__001e7478:
    if (param_3 < 0x402) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      local_50[1] = 0x786a1e4480312115;
      local_58 = lVar1;
      goto LAB__text__001e7518;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    local_50[0] = 0;
    local_50[1] = 0xd12268633d3eed0d;
  }
  FUN__text__001ac1fc(uVar2,param_2 + 4,local_50,local_50 + 1);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
    local_50[0] = 0;
  }
LAB__text__001e754c:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  *(undefined8 *)(lVar4 + 8) = 0;
  return;
}


