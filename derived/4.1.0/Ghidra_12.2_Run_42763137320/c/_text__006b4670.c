/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4670; name: FUN_.text__006b4670
 */


int FUN__text__006b4670(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return (uint)*(ushort *)(*(long *)(param_1 + 0xa8) + 8) - (uint)(*(int *)(param_1 + 0x60) != 0);
}


