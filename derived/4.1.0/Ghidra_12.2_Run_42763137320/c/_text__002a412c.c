/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a412c; name: FUN_.text__002a412c
 */


void FUN__text__002a412c(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 < 99) {
    param_1 = param_1 + (ulong)param_2 * 4;
    *(undefined4 *)(param_1 + 0x54) = param_3;
    *(undefined4 *)(param_1 + 0x1e0) = param_4;
  }
  return;
}


