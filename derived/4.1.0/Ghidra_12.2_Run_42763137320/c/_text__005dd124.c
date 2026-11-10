/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd124; name: FUN_.text__005dd124
 */


void FUN__text__005dd124(long *param_1)

{
  if ((param_1[3] != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = 0x70f683;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


