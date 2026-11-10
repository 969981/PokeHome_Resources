/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00652a04; name: FUN_.text__00652a04
 */


void FUN__text__00652a04(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = FUN__text__00679878(0);
  lVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + lVar4 * 8);
    plVar3 = (long *)*plVar1;
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)0x0;
      do {
        plVar6 = (long *)*plVar3;
        if (plVar3[6] == 0 || lVar2 <= plVar3[6]) {
          plVar5 = plVar3;
        }
        else {
          plVar3 = plVar1;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          *plVar3 = (long)plVar6;
          *(long *)(param_1 + 0x810) = *(long *)(param_1 + 0x810) + -1;
          FUN__text__00652864();
        }
        plVar3 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  return;
}


