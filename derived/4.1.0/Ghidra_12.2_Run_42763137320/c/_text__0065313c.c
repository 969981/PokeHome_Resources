/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065313c; name: FUN_.text__0065313c
 */


void FUN__text__0065313c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 != 0) {
    lVar5 = 0;
    do {
      plVar3 = *(long **)(param_1 + lVar5 * 8);
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3;
        plVar6 = plVar3;
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
          plVar7 = plVar6;
          if (plVar2[6] == 0) {
            plVar7 = plVar3;
            if (plVar6 != plVar2) {
              plVar7 = plVar6;
            }
            bVar1 = plVar4 != plVar2;
            plVar2 = plVar3;
            if (bVar1) {
              *plVar4 = (long)plVar3;
              plVar2 = plVar4;
            }
            FUN__text__00652864();
            *(long *)(param_1 + 0x810) = *(long *)(param_1 + 0x810) + -1;
          }
          plVar4 = plVar2;
          plVar6 = plVar7;
        } while (plVar3 != (long *)0x0);
        *(long **)(param_1 + lVar5 * 8) = plVar7;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x100);
  }
  return;
}


