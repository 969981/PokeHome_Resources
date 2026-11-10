/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059786c; name: FUN_.text__0059786c
 */


void FUN__text__0059786c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0xa74a33755f81f190;
  uStack_38 = 0x70d491;
  local_30 = 9;
  local_28 = 0;
  FUN__text__005bc9a0(*(undefined8 *)(param_1 + 0x260),&local_40,param_2,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0xa74a34755f81f343;
  uStack_38 = 0x721137;
  local_30 = 9;
  local_28 = 0;
  FUN__text__005bc9a0(*(undefined8 *)(param_1 + 0x260),&local_40,param_3,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


