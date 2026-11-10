/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dabf4; name: FUN_.text__004dabf4
 */


void FUN__text__004dabf4(long param_1,long param_2,long param_3)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = (param_2 - param_3) + *(long *)(param_1 + 0x80);
  }
  return;
}


