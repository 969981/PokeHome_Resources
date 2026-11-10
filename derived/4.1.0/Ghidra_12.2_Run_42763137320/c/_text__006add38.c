/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006add38; name: FUN_.text__006add38
 */


long FUN__text__006add38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + (ulong)*(uint *)(param_1 + 0x30);
  }
  return lVar1;
}


