/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601734; name: FUN_.text__00601734
 */


undefined4 FUN__text__00601734(long param_1,uint param_2)

{
  param_2 = param_2 & 0xffff;
  if (99 < param_2) {
    param_2 = 100;
  }
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0xc);
}


