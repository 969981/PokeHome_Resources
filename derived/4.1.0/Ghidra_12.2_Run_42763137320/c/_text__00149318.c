/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00149318; name: FUN_.text__00149318
 */


void FUN__text__00149318(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN__text__00147b00(param_1);
  return;
}


