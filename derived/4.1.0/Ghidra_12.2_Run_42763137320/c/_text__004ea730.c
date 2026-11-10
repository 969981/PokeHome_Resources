/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea730; name: FUN_.text__004ea730
 */


void FUN__text__004ea730(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)(param_1 + 0x40);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5;
    do {
      plVar7 = (long *)*plVar6;
      plVar1 = plVar4;
      if (plVar5 != plVar6) {
        plVar1 = (long *)0x0;
      }
      *plVar1 = (long)plVar7;
      iVar2 = (int)plVar6[6] + -1;
      *(int *)(plVar6 + 6) = iVar2;
      if (iVar2 == 0) {
        lVar3 = plVar6[1];
        plVar6[1] = 0;
        if (lVar3 != 0) {
          FUN__text__004eb980();
          if (plVar6[1] != 0) {
            FUN__text__004eb980();
            plVar6[1] = 0;
          }
        }
        FUN__text__00400fc0(0,plVar6);
      }
      plVar5 = (long *)*plVar4;
      plVar6 = plVar7;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


