/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001301f0; name: FUN_.text__001301f0
 */


void FUN__text__001301f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)(param_3 + 0x58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__001314ec(&local_40,param_3,&local_38,0,param_1,param_4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = *(long *)(param_3 + 0x58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__00131760(&local_48,param_3,&local_38,0,param_2,param_4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(long *)(local_40 + 0x7c8) = local_48;
  if ((local_48 == 0) ||
     ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48)), local_40 != 0)) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    return;
  }
  return;
}


