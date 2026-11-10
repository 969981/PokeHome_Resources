/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00137978; name: FUN_.text__00137978
 */


void FUN__text__00137978(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long local_40;
  long local_38;
  
  local_38 = *(long *)(param_2 + 0x58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__00137a0c(&local_40,param_2,&local_38,0,param_1,param_3);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined4 *)(local_40 + 0x64c) = param_4;
  (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  return;
}


