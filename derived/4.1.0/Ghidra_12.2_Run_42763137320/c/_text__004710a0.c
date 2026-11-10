/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004710a0; name: FUN_.text__004710a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004710a0(void)

{
  long *plVar1;
  long *plVar2;
  
  FUN__text__00405e28();
  while (plVar2 = DAT_00aea728, DAT_00aea728 != (long *)0x0) {
    if ((long *)DAT_00aea728[0x48] == (long *)0x0) {
      DAT_00aea720 = 0;
    }
    plVar1 = DAT_00aea728 + 0x48;
    DAT_00aea728 = (long *)DAT_00aea728[0x48];
    *plVar1 = 0;
    DAT_00aea718 = DAT_00aea718 + -1;
    FUN__text__00472fc0(plVar2);
    (**(code **)(*plVar2 + 0x20))(plVar2,0);
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN__text__00400fc0(0,plVar2);
  }
  DAT_00aea718 = 0;
  DAT_00aea720 = 0;
  DAT_00aea728 = (long *)0x0;
  FUN__text__00471190(_DAT_008a4ce0);
  if (DAT_00aea7c0 != 0) {
    DAT_00aea7c8 = 0;
    FUN__text__00400fc0(0);
    DAT_00aea7c0 = 0;
    DAT_00aea7cc = 0;
  }
  if (DAT_00aea7b0 != 0) {
    DAT_00aea7b8 = 0;
    FUN__text__00400fc0(0);
    DAT_00aea7b0 = 0;
    DAT_00aea7bc = 0;
  }
  return;
}


