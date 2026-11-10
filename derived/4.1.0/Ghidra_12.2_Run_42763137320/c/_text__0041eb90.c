/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041eb90; name: FUN_.text__0041eb90
 */


void FUN__text__0041eb90(void)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = (long *)(&DAT_00aea318)[lVar2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN__text__00400fc0(5);
    }
    (&DAT_00aea318)[lVar2] = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x24);
  return;
}


