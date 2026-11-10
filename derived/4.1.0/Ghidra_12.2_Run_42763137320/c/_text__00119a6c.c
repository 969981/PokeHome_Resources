/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00119a6c; name: FUN_.text__00119a6c
 */


bool FUN__text__00119a6c(long param_1,ulong param_2)

{
  return ((*(ulong *)(param_1 + 0xa8) | *(ulong *)(param_1 + 0x98)) & param_2) != 0;
}


