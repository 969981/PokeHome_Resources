/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060342c; name: FUN_.text__0060342c
 */


void FUN__text__0060342c(uint *param_1,uint param_2)

{
  if ((param_2 & 0xff) < 8) {
    *param_1 = *param_1 | 1 << (ulong)(param_2 & 0x1f);
  }
  return;
}


