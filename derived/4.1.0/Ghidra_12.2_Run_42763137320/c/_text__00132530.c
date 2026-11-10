/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00132530; name: FUN_.text__00132530
 */


undefined4 FUN__text__00132530(long param_1)

{
  if (*(long *)(param_1 + 0x650) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x5c);
  }
  if (*(long *)(param_1 + 0x670) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x670) + 0x54);
}


