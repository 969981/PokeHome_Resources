/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192b40; name: FUN_.text__00192b40
 */


undefined8 FUN__text__00192b40(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 0x20 + 0x10);
  }
  return 0;
}


