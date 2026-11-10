/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036876c; name: FUN_.text__0036876c
 */


void FUN__text__0036876c(undefined8 *param_1)

{
  FUN__text__0011bfb0(param_1 + 4);
  param_1[-10] = 0x867b90;
  param_1[-1] = 0x867bd0;
  *param_1 = 0x867c10;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


