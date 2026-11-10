/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d63bc; name: FUN_.text__002d63bc
 */


ushort FUN__text__002d63bc(long param_1,uint param_2)

{
  return *(ushort *)(param_1 + 48000) >> (ulong)(param_2 & 0x1f) & 1;
}


