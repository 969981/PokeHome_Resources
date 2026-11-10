/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00384990; name: FUN_.text__00384990
 */


void FUN__text__00384990(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4
                        )

{
  long lVar1;
  long *plVar2;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_40 = param_4;
  FUN__text__002a32ac(&local_48,param_4,&local_40);
  lVar1 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN__text__0063116c(lVar1);
  local_38 = lVar1;
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__00384dac(param_1,&local_38,param_2,param_3);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


