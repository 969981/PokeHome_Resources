/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6a10; name: FUN_.text__003d6a10
 */


undefined8 FUN__text__003d6a10(long param_1)

{
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x5f;
      return 0;
    }
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != -1) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x20);
    return 1;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x22;
    return 0;
  }
  return 0;
}


