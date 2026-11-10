/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bbc50; name: FUN_.text__003bbc50
 */


void FUN__text__003bbc50(long param_1)

{
  if (*(code **)(param_1 + 0x280) != (code *)0x0) {
    *(undefined1 *)(param_1 + 0x86) = 1;
    (**(code **)(param_1 + 0x280))(param_1 + 0x2a0);
  }
  *(undefined1 *)(param_1 + 0x500) = 1;
  return;
}


