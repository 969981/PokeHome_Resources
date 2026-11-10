/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1bc8; name: FUN_.text__005a1bc8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1bc8(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xe8) == *(long *)(param_1 + 0xf0)) {
    return;
  }
  FUN__text__006ede7c(*(long *)(param_2 + 0x58) + (long)*_DAT_008a0300 * 0x168,param_1 + 0x58);
  return;
}


