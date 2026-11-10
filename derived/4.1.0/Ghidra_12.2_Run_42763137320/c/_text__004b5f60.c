/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b5f60; name: FUN_.text__004b5f60
 */


void FUN__text__004b5f60(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  for (plVar2 = *(long **)(param_1 + 0x60); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar3 = plVar2[2];
    if (*(long *)(lVar3 + 8) == param_2) {
      *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    }
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while (plVar4 = plVar2, *(long *)(plVar4[2] + 8) == param_2) {
        FUN__text__004b5db0(param_1,*(undefined4 *)(param_2 + 0x30),plVar4[2],0);
        plVar2 = (long *)*plVar4;
        plVar1 = (long *)(param_1 + 0x38);
        if (*(long **)(param_1 + 0x38) != plVar4) {
          plVar1 = plVar5;
        }
        *plVar1 = (long)plVar2;
        if (*(long **)(param_1 + 0x40) == plVar4) {
          *(long **)(param_1 + 0x40) = plVar5;
        }
        *plVar4 = *(long *)(param_1 + 0x48);
        *(long **)(param_1 + 0x48) = plVar4;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        if (plVar2 == (long *)0x0) {
          return;
        }
      }
      plVar2 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  return;
}


