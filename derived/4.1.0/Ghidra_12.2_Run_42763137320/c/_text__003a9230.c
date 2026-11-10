/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9230; name: FUN_.text__003a9230
 */


void FUN__text__003a9230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 uStack_31;
  
  local_50._8_8_ =
       FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x3c8));
  local_50._0_8_ = local_60;
  local_60._0_8_ = (long *)0x0;
  FUN__text__003aa1c0(param_1,local_50,0);
  uVar1 = local_60._0_8_;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_50 = (**(code **)(**(long **)(param_1 + 0x3e0) + 0x40))();
  local_60 = (**(code **)(*(long *)uVar1 + 0x40))(uVar1);
  local_68 = 2;
  uStack_64 = 6;
  local_70 = FUN__text__003aa48c(&uStack_31,uVar2,param_1 + 0x3e0,local_50,local_60,&uStack_64,
                                 &local_68);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN__text__003c24d0(*(undefined8 *)(param_1 + 0x3d0),&local_70,0x40);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  *(undefined1 *)(param_1 + 0x85) = 0;
  FUN__text__003a1648(param_1,1);
  return;
}


