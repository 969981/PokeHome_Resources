/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b440; name: FUN_.text__0041b440
 */


void FUN__text__0041b440(long param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN__text__00400fc0(5);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN__text__00400fc0(5);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


