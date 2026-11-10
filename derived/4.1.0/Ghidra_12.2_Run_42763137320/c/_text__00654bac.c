/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654bac; name: FUN_.text__00654bac
 */


void FUN__text__00654bac(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN__text__00654490(param_2);
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN__text__00667a44(param_1,3,2);
  }
  FUN__text__00654490(param_2);
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  FUN__text__00667a8c(param_1,3);
  return;
}


