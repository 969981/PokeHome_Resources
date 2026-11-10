/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585b80; name: FUN_.text__00585b80
 */


void FUN__text__00585b80(long param_1)

{
  FUN__text__00585f10(param_1 + 0x18);
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN__text__00400fc0(5);
      *(undefined1 *)(param_1 + 0xda) = 0;
      *(long *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}


