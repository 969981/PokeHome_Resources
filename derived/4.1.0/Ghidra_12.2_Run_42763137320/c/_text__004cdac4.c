/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdac4; name: FUN_.text__004cdac4
 */


void FUN__text__004cdac4(long param_1,long param_2)

{
  memset(*(void **)(param_1 + 0x28),0,param_2 + 7U >> 2 & 0x1fffffffe);
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}


