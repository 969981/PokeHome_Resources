/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d74e8; name: FUN_.text__003d74e8
 */


void FUN__text__003d74e8(undefined8 *param_1)

{
  *param_1 = 0x884ea8;
  if (param_1[1] != 0) {
    FUN__text__003d7520();
    if ((void *)param_1[1] != (void *)0x0) {
      operator_delete((void *)param_1[1]);
      return;
    }
  }
  return;
}


