/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfad8; name: FUN_.text__005cfad8
 */


undefined4 FUN__text__005cfad8(long *param_1)

{
  undefined4 uVar1;
  long local_28;
  
  (**(code **)(*param_1 + 0x48))(&local_28);
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
  }
  param_1[0x32] = local_28;
  FUN__text__005d8e38(param_1);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__005d8f14(param_1);
  FUN__text__005cfb60(param_1[0x33],param_1[0x34]);
  return uVar1;
}


