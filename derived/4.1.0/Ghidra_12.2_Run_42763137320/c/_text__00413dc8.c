/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413dc8; name: FUN_.text__00413dc8
 */


void FUN__text__00413dc8(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  *param_2 = 0;
  return;
}


