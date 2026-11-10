/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f92c; name: FUN_.text__0054f92c
 */


void FUN__text__0054f92c(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN__text__0055511c(param_1,param_2);
  return;
}


