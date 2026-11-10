/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059cecc; name: FUN_.text__0059cecc
 */


void FUN__text__0059cecc(undefined8 *param_1)

{
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  param_1[-9] = 0x897448;
  *param_1 = 0x8974c8;
  param_1[1] = 0x897538;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  param_1[-9] = 0x894dc0;
  *param_1 = 0x894e00;
  param_1[1] = 0x894e70;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


