/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00495c50; name: FUN_.text__00495c50
 */


byte FUN__text__00495c50(long param_1,uint *param_2)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if ((*(byte *)(lVar1 + 0xd3) >> 4 & 1) != 0) break;
    param_1 = *(long *)(lVar1 + 0x78);
  } while (*(long *)(lVar1 + 0x78) != 0);
  *param_2 = *(byte *)(lVar1 + 0xe8) >> 3 & 7;
  return *(byte *)(lVar1 + 0xe9) & 0xf;
}


