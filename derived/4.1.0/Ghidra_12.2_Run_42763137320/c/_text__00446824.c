/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446824; name: FUN_.text__00446824
 */


undefined8 FUN__text__00446824(long param_1)

{
  if ((*(char *)(param_1 + 0x28) == -0x70 && *(char *)(param_1 + 0x2d) != '\0') &&
     ((*(byte *)(param_1 + 0x38) & 6) == 2)) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf8 | 4;
    *(undefined1 *)(param_1 + 0x28) = 0x80;
    return 1;
  }
  return 0;
}


