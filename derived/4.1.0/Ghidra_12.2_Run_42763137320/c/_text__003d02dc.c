/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d02dc; name: FUN_.text__003d02dc
 */


undefined2 FUN__text__003d02dc(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x358) >> 1) {
    return *(undefined2 *)(*(long *)(param_1 + 0x350) + (ulong)param_2 * 2);
  }
  return 0;
}


