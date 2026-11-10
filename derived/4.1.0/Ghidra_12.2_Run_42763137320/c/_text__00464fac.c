/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464fac; name: FUN_.text__00464fac
 */


void FUN__text__00464fac(long param_1)

{
  if ((*(long *)(param_1 + 0x70) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x70) + 200) >> 1 & 1) == 0)) {
    FUN__text__00470fa0();
    *(byte *)(*(long *)(param_1 + 0x70) + 200) = *(byte *)(*(long *)(param_1 + 0x70) + 200) | 2;
  }
  return;
}


