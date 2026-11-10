/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003019dc; name: FUN_.text__003019dc
 */


uint FUN__text__003019dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_28;
  
  local_28 = param_3;
  FUN__text__002a32ac(&local_48,param_3,&local_28);
  FUN__text__002a33c8(&local_50,local_28,&local_48);
  lVar2 = *param_2;
  local_58 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_60 = local_50;
  if (local_50 == 0) {
    uVar1 = FUN__text__003016a0(param_1,&local_58,&local_60,param_4,param_5);
  }
  else {
    plVar3 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN__text__003016a0(param_1,&local_58,&local_60,param_4,param_5);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


