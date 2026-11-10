/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0538; name: FUN_.text__001a0538
 */


void FUN__text__001a0538(long param_1)

{
  if (*(int *)(param_1 + 0x1e8) == 4) {
    *(undefined4 *)(param_1 + 0x1e8) = 5;
  }
  FUN__text__001a41a4(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x20) != '\0') {
    FUN__text__001bd208(*(long *)(param_1 + 0x68),1);
  }
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x20) != '\0') {
    FUN__text__001bd208(*(long *)(param_1 + 0x88),1);
  }
  if (*(char *)(*(long *)(param_1 + 0xa8) + 0x20) != '\0') {
    FUN__text__001d102c(*(long *)(param_1 + 0xa8),1);
  }
  if (*(char *)(*(long *)(param_1 + 200) + 0x20) == '\0') {
    return;
  }
  FUN__text__001d102c(*(long *)(param_1 + 200),1);
  return;
}


