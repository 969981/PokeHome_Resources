/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065cab0; name: FUN_.text__0065cab0
 */


void FUN__text__0065cab0(long param_1,byte param_2)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     ((lVar1 = *(long *)(param_1 + 0xe0), lVar1 != 0 ||
      (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)))) {
    *(byte *)(lVar1 + 0x1e0) = param_2 & 1;
  }
  return;
}


