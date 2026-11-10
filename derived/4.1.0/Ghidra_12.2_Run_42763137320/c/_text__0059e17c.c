/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059e17c; name: FUN_.text__0059e17c
 */


void FUN__text__0059e17c(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + -0x90) = 0x897448;
  *(undefined8 *)(param_1 + -0x48) = 0x8974c8;
  *(undefined8 *)(param_1 + -0x40) = 0x897538;
  if (*(long *)(param_1 + -0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + -0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + -0x28) = 0;
  }
  *(undefined8 *)(param_1 + -0x90) = 0x894dc0;
  *(undefined8 *)(param_1 + -0x48) = 0x894e00;
  *(undefined8 *)(param_1 + -0x40) = 0x894e70;
  if (*(long *)(param_1 + -0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + -0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + -0x38) = 0;
  }
  return;
}


