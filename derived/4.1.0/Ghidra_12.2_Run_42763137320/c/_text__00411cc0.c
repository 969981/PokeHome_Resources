/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411cc0; name: FUN_.text__00411cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00411cc0(void)

{
  long *plVar1;
  
  plVar1 = _DAT_008a4878;
  if (_DAT_008a4878[0xc] != 0) {
    FUN__text__00400fc0(5);
    plVar1[0xc] = 0;
  }
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  if (plVar1[8] != 0) {
    FUN__text__00400fc0(5);
    plVar1[8] = 0;
  }
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  if (plVar1[4] != 0) {
    FUN__text__00400fc0(5);
    plVar1[4] = 0;
  }
  plVar1[6] = 0;
  plVar1[7] = 0;
  if (*plVar1 != 0) {
    FUN__text__00400fc0(5);
    *plVar1 = 0;
  }
  plVar1[2] = 0;
  plVar1[3] = 0;
  return;
}


