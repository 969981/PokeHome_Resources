/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006449c0; name: FUN_.text__006449c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006449c0(void)

{
  long *plVar1;
  
  plVar1 = _DAT_008a6448;
  _DAT_008a6448[0x14] = 0;
  plVar1[0x15] = 0;
  plVar1[0x12] = 0;
  plVar1[0x13] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  *plVar1 = _DAT_0089f6e0 + 0x10;
  plVar1[1] = 0;
  FUN__text__001001d0(_DAT_008a6378,plVar1,&__DT_FINI_ARRAY);
  FUN__text__001001d0(FUN__text__00644920,0,&__DT_FINI_ARRAY);
  return;
}


