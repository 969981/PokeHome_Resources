/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006512cc; name: FUN_.text__006512cc
 */


void FUN__text__006512cc(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN__text__00656b90((long *)(param_1 + 0x10),plVar1,0);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x660) = 0;
  return;
}


