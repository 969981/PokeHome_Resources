/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2a20; name: FUN_.text__004f2a20
 */


long FUN__text__004f2a20(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if ((*(byte *)(lVar1 + 0x11c) >> 2 & 1) != 0) break;
    param_1 = *(long *)(lVar1 + 0x78);
  } while (*(long *)(lVar1 + 0x78) != 0);
  return lVar1 + 0x108;
}


