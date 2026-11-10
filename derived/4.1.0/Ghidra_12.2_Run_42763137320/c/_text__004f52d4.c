/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f52d4; name: FUN_.text__004f52d4
 */


long FUN__text__004f52d4(long *param_1,long param_2)

{
  return (param_2 - *(long *)(*param_1 + 8)) + (ulong)*(uint *)(param_1[1] + 0x88);
}


