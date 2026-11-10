/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00653e64; name: FUN_.text__00653e64
 */


void FUN__text__00653e64(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  FUN__text__006783e4(param_2);
  return;
}


