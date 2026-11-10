/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7744; name: FUN_.text__003e7744
 */


void FUN__text__003e7744(long param_1)

{
  undefined8 local_8;
  
  *(undefined4 *)(param_1 + 0x88) = 1;
  FUN__text__003e7858(&local_8,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = local_8;
  FUN__text__006a0f40(8,8,0x10,4);
  FUN__text__003e795c(&local_8,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x50) = local_8;
  return;
}


