/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d8f0; name: FUN_.text__0069d8f0
 */


long FUN__text__0069d8f0(long param_1,ushort param_2)

{
  return *(long *)(param_1 + 0x10) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4 + 0xc);
}


