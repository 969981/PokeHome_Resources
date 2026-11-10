/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464fec; name: FUN_.text__00464fec
 */


void FUN__text__00464fec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 200) >> 1 & 1) == 0)) || (*(short *)(lVar1 + 0xc4) != 0))
  {
    return;
  }
  FUN__text__00471000();
  *(byte *)(*(long *)(param_1 + 0x70) + 200) = *(byte *)(*(long *)(param_1 + 0x70) + 200) & 0xfd;
  return;
}


