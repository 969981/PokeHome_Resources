/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00368664; name: FUN_.text__00368664
 */


void FUN__text__00368664(undefined8 *param_1)

{
  FUN__text__0011bfb0(param_1 + 5);
  param_1[-9] = 0x867b90;
  *param_1 = 0x867bd0;
  param_1[1] = 0x867c10;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


