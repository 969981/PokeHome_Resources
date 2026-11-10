/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bdde0; name: FUN_.text__005bdde0
 */


void FUN__text__005bdde0(long param_1,undefined8 param_2)

{
  undefined8 local_58 [4];
  long local_38;
  undefined4 local_14;
  
  local_14 = 1;
  FUN__text__005bea64(local_58,param_2,&local_14);
  if (*(long *)(param_1 + 0x618) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x618) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x618) = local_58[0];
  local_38 = *(long *)(param_1 + 0x610);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__005a15b0(local_58[0],0,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN__text__005a2048(local_58,param_2,1);
  FUN__text__005a1860(*(undefined8 *)(param_1 + 0x618),local_58);
  return;
}


