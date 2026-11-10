/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065ca34; name: FUN_.text__0065ca34
 */


void FUN__text__0065ca34(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x12d8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*(int *)(*plVar1 + 0x28) == param_2) {
        FUN__text__00656b90(param_1 + 0x12d8,plVar1,0);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


