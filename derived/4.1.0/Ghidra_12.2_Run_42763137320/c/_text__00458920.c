/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458920; name: FUN_.text__00458920
 */


void FUN__text__00458920(long *param_1)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if ((*(int *)(param_1 + 3) != 0) && (*(char *)(param_1 + 4) != '\0')) {
      *(short *)(param_1[1] + 0xdc) = *(short *)(param_1[1] + 0xdc) + -1;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}


