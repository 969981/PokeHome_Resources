/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030e444; name: FUN_.text__0030e444
 */


void FUN__text__0030e444(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x50) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


