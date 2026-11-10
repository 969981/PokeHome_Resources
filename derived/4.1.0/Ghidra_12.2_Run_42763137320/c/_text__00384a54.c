/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00384a54; name: FUN_.text__00384a54
 */


uint FUN__text__00384a54(long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_28;
  
  local_48 = *(undefined8 *)(param_1 + 8);
  FUN__text__0020bb18(&local_28,local_48,&local_48);
  lVar2 = *param_2;
  local_50 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_58 = local_28;
  if (local_28 == 0) {
    uVar1 = FUN__text__00384b5c(param_1,&local_50,&local_58,param_3,param_4);
  }
  else {
    plVar3 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN__text__00384b5c(param_1,&local_50,&local_58,param_3,param_4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


