/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b068; name: FUN_.text__0042b068
 */


undefined1 FUN__text__0042b068(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    return *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0x20);
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x24);
}


