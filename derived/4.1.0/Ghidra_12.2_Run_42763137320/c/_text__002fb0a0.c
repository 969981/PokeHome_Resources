/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fb0a0; name: FUN_.text__002fb0a0
 */


void FUN__text__002fb0a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  for (plVar2 = *(long **)(lVar1 + 0x138); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN__text__002f95a0(lVar1,plVar2 + 2);
    FUN__text__002f3c18();
  }
  return;
}


