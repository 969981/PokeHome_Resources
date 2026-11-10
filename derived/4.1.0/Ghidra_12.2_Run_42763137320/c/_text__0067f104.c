/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f104; name: FUN_.text__0067f104
 */


bool FUN__text__0067f104(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) != 0) {
    return false;
  }
  lVar2 = FUN__text__006809c0();
  if (lVar2 == *(long *)(param_1 + 0x910) + *(long *)(param_1 + 0x908)) {
    bVar1 = (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


