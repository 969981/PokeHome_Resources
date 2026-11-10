/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683768; name: FUN_.text__00683768
 */


bool FUN__text__00683768(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x20) != *(long *)(lVar1 + 0x18);
}


