/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00130104; name: FUN_.text__00130104
 */


void FUN__text__00130104(undefined8 param_1,undefined8 param_2,long param_3)

{
  long local_40;
  long local_38;
  long local_18;
  
  local_18 = *(long *)(param_3 + 0x58);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__00130c00(&local_38,param_3,&local_18,0,param_1);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  local_18 = *(long *)(param_3 + 0x58);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__00131198(&local_40,param_3,&local_18,0,param_2);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  *(long *)(local_38 + 0x7c8) = local_40;
  if ((local_40 == 0) ||
     ((**(code **)(*(long *)(local_40 + 0x48) + 0x18))((long *)(local_40 + 0x48)), local_38 != 0)) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    return;
  }
  return;
}


