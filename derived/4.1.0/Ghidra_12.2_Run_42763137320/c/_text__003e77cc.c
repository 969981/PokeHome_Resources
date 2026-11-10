/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e77cc; name: FUN_.text__003e77cc
 */


void FUN__text__003e77cc(long param_1,undefined4 *param_2)

{
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x88) = *param_2;
  FUN__text__003e7858(&local_28,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = local_28;
  FUN__text__006a0f40(param_2[1],param_2[2],param_2[3],param_2[4]);
  FUN__text__003e795c(&local_28,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x50) = local_28;
  return;
}


