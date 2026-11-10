/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8c30; name: FUN_.text__003a8c30
 */


void FUN__text__003a8c30(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_88;
  long local_80;
  undefined4 local_74;
  undefined1 local_70 [16];
  long *local_58;
  undefined1 local_50 [16];
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_50._8_8_ = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408));
  local_70._0_8_ = (long *)0x0;
  local_50._0_8_ = local_70;
  FUN__text__003aa1c0(param_1,local_50,0);
  uVar1 = local_70._0_8_;
  local_50._8_8_ = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),param_3);
  local_70._0_8_ = (long *)0x0;
  local_50._0_8_ = local_70;
  FUN__text__003aa1c0(param_1,local_50,0);
  uVar2 = local_70._0_8_;
  local_58 = (long *)local_70._0_8_;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_50 = (**(code **)(**(long **)(param_1 + 0x3e0) + 0x40))();
  local_70 = (**(code **)(*(long *)uVar2 + 0x40))(uVar2);
  local_28 = 6;
  local_74 = 2;
  local_80 = FUN__text__003aa48c(&uStack_21,uVar3,param_1 + 0x3e0,local_50,local_70,&local_28,
                                 &local_74);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  FUN__text__003c24d0(*(undefined8 *)(param_1 + 0x3d0),&local_80,0x40);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  auVar4 = (**(code **)(*(long *)uVar2 + 0x40))(uVar2);
  *(undefined1 (*) [16])(param_1 + 0x3f0) = auVar4;
  uVar3 = *(undefined8 *)(param_1 + 8);
  auVar4 = (**(code **)(*(long *)uVar2 + 0x40))(uVar2);
  local_50 = auVar4;
  auVar4 = (**(code **)(*(long *)uVar1 + 0x40))(uVar1);
  local_28 = 6;
  local_74 = 2;
  local_70 = auVar4;
  local_88 = FUN__text__003aa48c(&uStack_21,uVar3,&local_58,local_50,local_70,&local_28,&local_74);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  FUN__text__003c24d0(*(undefined8 *)(param_1 + 0x3d0),&local_88,0x40);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  local_50._0_8_ = local_58[0x11];
  (**(code **)(**(long **)(param_1 + 0x98) + 0xd0))
            (*(long **)(param_1 + 0x98),param_1 + 0x3d8,local_50);
  local_50._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88);
  (**(code **)(**(long **)(param_1 + 0x98) + 0xd0))
            (*(long **)(param_1 + 0x98),param_1 + 0x3d8,local_50);
  return;
}


