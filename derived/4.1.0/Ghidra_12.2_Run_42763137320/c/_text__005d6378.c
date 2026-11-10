/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d6378; name: FUN_.text__005d6378
 */


void FUN__text__005d6378(undefined8 *param_1)

{
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)(param_1[0x33] + 0x48) + 0x18))();
    param_1[0x33] = 0;
  }
  *param_1 = 0x8850e8;
  param_1[9] = 0x885148;
  param_1[10] = 0x885188;
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  FUN__text__00114698(param_1);
  return;
}


