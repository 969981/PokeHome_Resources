/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1b7c; name: FUN_.text__004a1b7c
 */


void FUN__text__004a1b7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x68) >> 1 & 1) != 0) {
    FUN__text__00400fc0(0,*(undefined8 *)(param_1 + 0x20));
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfd;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


