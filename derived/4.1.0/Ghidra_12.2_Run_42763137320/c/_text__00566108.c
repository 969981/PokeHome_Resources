/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00566108; name: FUN_.text__00566108
 */


undefined8 FUN__text__00566108(undefined8 *param_1,long *param_2)

{
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[6] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


