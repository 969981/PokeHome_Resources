/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195844; name: FUN_.text__00195844
 */


undefined8 FUN__text__00195844(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(*(long *)(param_1 + 0x40) + 8)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x20 + 0x10);
  }
  return 0;
}


