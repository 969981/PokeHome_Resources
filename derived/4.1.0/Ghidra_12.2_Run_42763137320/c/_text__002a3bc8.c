/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a3bc8; name: FUN_.text__002a3bc8
 */


void FUN__text__002a3bc8(long param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_2 < 0x28) && (param_3 < 0x1e)) {
    FUN__text__006377dc(param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x54,
                        param_4 & 1);
    return;
  }
  return;
}


