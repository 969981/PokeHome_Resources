/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd370; name: FUN_.text__005cd370
 */


void FUN__text__005cd370(long param_1)

{
  if (*(long *)(param_1 + 0x278) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x278) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x270) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}


