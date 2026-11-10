/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413c78; name: FUN_.text__00413c78
 */


void FUN__text__00413c78(long param_1,ulong param_2,long param_3)

{
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN__text__00413460(*(long *)(param_1 + 8) + (param_2 & 0xffffffff) * 8,
                      *(undefined8 *)(param_3 + 8));
  return;
}


