/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131ef8; name: FUN_.text__00131ef8
 */


void FUN__text__00131ef8(long param_1)

{
  FUN__text__003c4754(*(undefined8 *)(param_1 + 0x640));
  if (*(long *)(param_1 + 0x650) == 0 && *(long *)(param_1 + 0x670) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x690) = 0;
  FUN__text__0012bca0(param_1 + 0x110,0);
  return;
}


