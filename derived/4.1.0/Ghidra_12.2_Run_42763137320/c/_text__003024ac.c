/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003024ac; name: FUN_.text__003024ac
 */


undefined4
FUN__text__003024ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  FUN__text__002a32ac(&local_40,param_3,&local_38);
  FUN__text__002a33c8(&local_48,local_38,&local_40);
  local_50 = local_48;
  if (local_48 == 0) {
    uVar1 = FUN__text__00302180(param_1,param_2,&local_50,param_4 & 1);
  }
  else {
    plVar2 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN__text__00302180(param_1,param_2,&local_50,param_4 & 1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return uVar1;
}


