/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af76c; name: FUN_.text__003af76c
 */


undefined8 FUN__text__003af76c(long param_1)

{
  if (*(long *)(param_1 + 0x800) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x800) + 0x20);
}


