/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678648; name: FUN_.text__00678648
 */


void FUN__text__00678648(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298), lVar2 != 0)) {
    lVar1 = param_1 + (long)param_2 * 0x18 + 0x290;
    FUN__text__00678fd0(lVar1);
    if (*(char *)(lVar2 + 0x108) == '\0') {
      FUN__text__00679028(lVar1);
      return;
    }
  }
  return;
}


