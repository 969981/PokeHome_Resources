/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458c10; name: FUN_.text__00458c10
 */


void FUN__text__00458c10(long *param_1,int param_2,undefined8 param_3)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if (*(int *)(param_1[1] + 0xc4) == param_2) {
      FUN__text__004582c0(param_3);
    }
  }
  return;
}


