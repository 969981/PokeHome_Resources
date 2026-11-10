/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428760; name: FUN_.text__00428760
 */


undefined4 FUN__text__00428760(long *param_1,uint *param_2)

{
  long local_50 [2];
  undefined2 local_40;
  ushort local_3e;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_50[0] = 0;
  local_50[1] = 0x2b00000000;
  local_34 = 0x3f800000ffffffff;
  local_3e = 0;
  local_2c = 0x1ffffffff;
  local_3c = 0;
  local_40 = (undefined2)*param_2;
  (**(code **)(*param_1 + 0x78))(param_1,local_50);
  if (local_50[0] == 0) {
    *param_2 = 0;
    return local_24;
  }
  *param_2 = (uint)local_3e;
  (**(code **)(*param_1 + 0x18))(param_1);
  return local_24;
}


