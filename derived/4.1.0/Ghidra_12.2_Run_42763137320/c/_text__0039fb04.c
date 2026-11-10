/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039fb04; name: FUN_.text__0039fb04
 */


void FUN__text__0039fb04(long param_1)

{
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


