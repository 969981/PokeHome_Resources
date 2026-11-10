/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdaa8; name: FUN_.text__004cdaa8
 */


byte FUN__text__004cdaa8(long param_1,uint param_2)

{
  return *(byte *)(*(long *)(param_1 + 0x28) + (((ulong)param_2 & 0xfff8) >> 3)) >>
         (ulong)(param_2 & 7) & 1;
}


