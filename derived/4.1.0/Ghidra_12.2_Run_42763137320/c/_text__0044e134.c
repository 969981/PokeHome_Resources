/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044e134; name: FUN_.text__0044e134
 */


void FUN__text__0044e134(long param_1)

{
  if (*(int *)(param_1 + 0xf8) == 0) {
    FUN__text__00428558(*(undefined8 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xf8) = 1;
    return;
  }
  if (*(int *)(param_1 + 0xf8) != 2) {
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN__text__004286a0();
    }
    *(undefined4 *)(param_1 + 0xf8) = 2;
    *(undefined4 *)(param_1 + 300) = 0x11;
  }
  return;
}


