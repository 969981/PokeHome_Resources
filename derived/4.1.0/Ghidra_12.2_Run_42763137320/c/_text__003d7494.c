/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7494; name: FUN_.text__003d7494
 */


ulong FUN__text__003d7494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    FUN__text__003d6818(param_1);
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == *(long *)(param_1 + 0x18)) {
      return 0xffffffff;
    }
  }
  return (ulong)*(byte *)(*(long *)(param_1 + 0x28) + lVar1);
}


