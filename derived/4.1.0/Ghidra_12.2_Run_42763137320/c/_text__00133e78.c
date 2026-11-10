/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00133e78; name: FUN_.text__00133e78
 */


void FUN__text__00133e78(undefined8 param_1,long param_2,undefined8 param_3)

{
  long local_38;
  long local_18;
  
  local_18 = *(long *)(param_2 + 0x58);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__00131760(&local_38,param_2,&local_18,0,param_1,param_3);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


