/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cea4; name: FUN_.text__0055cea4
 */


undefined8 FUN__text__0055cea4(undefined8 *param_1,long *param_2)

{
  FUN__text__0055d580(param_1 + 4);
  FUN__text__0055d580(param_1 + 6,param_2);
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[3] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


