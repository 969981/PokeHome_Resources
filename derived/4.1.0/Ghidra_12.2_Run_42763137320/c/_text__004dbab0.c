/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dbab0; name: FUN_.text__004dbab0
 */


void FUN__text__004dbab0(long *param_1,int param_2)

{
  if (param_2 != 2) {
    (**(code **)(*(long *)param_1[0x1a] + 0x18))();
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  FUN__text__004dad08(param_1,param_2);
  return;
}


