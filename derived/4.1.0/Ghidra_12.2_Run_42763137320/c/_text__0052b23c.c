/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b23c; name: FUN_.text__0052b23c
 */


void FUN__text__0052b23c(long *param_1)

{
  if (*(char *)((long)param_1 + 0x29) != '\0') {
    (**(code **)(*param_1 + 0x28))();
    *(undefined1 *)((long)param_1 + 0x29) = 0;
  }
  return;
}


