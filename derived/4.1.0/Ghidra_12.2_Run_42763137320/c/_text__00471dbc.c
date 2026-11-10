/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471dbc; name: FUN_.text__00471dbc
 */


void FUN__text__00471dbc(long param_1)

{
  long *plVar1;
  
  *(undefined8 *)(param_1 + 0x240) = 0;
  DAT_00aea718 = DAT_00aea718 + 1;
  plVar1 = &DAT_00aea728;
  if (DAT_00aea728 != 0) {
    plVar1 = (long *)(DAT_00aea720 + 0x240);
  }
  DAT_00aea720 = param_1;
  *plVar1 = param_1;
  return;
}


