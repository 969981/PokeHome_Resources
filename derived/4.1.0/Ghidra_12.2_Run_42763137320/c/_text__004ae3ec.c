/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae3ec; name: FUN_.text__004ae3ec
 */


undefined8 FUN__text__004ae3ec(undefined8 *param_1)

{
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x58))();
    (**(code **)(*(long *)param_1[8] + 0x10))();
    param_1[8] = 0;
  }
  param_1[10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}


