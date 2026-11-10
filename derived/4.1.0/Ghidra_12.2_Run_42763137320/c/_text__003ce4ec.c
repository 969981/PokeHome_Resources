/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce4ec; name: FUN_.text__003ce4ec
 */


bool FUN__text__003ce4ec(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 0x110 + 0x58);
  if (lVar1 == 0) {
    return false;
  }
  return *(char *)(lVar1 + 0x170) != '\0';
}


