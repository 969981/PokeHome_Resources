/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001507b4; name: FUN_.text__001507b4
 */


void FUN__text__001507b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0xa0) = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_4 + 0x580) = 0x3f800000;
  (**(code **)(*(long *)(param_4 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x130) = param_4;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN__text__005c5e00(param_2,param_1);
  return;
}


