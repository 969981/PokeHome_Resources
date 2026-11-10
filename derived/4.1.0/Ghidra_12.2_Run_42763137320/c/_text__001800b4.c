/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001800b4; name: FUN_.text__001800b4
 */


void FUN__text__001800b4(long param_1)

{
  if (*(long *)(param_1 + 0x650) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x650) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x650) = 0;
  }
  FUN__text__00128620(param_1);
  return;
}


