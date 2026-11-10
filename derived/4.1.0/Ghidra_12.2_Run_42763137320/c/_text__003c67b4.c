/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c67b4; name: FUN_.text__003c67b4
 */


void FUN__text__003c67b4(long param_1)

{
  undefined8 local_8;
  
  FUN__text__003c4944(&local_8,*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x170) = local_8;
  FUN__text__003e705c(local_8,param_1 + 0x60);
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170));
  return;
}


