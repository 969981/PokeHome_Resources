/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a18b4; name: FUN_.text__004a18b4
 */


void FUN__text__004a18b4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN__text__00400fc0(0,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


