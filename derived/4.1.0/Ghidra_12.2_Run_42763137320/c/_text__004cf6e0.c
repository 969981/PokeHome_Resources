/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cf6e0; name: FUN_.text__004cf6e0
 */


long FUN__text__004cf6e0(long *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar3 = (long *)*plVar5;
    uVar2 = *(uint *)(plVar5 + 1);
    plVar5 = plVar3;
    if (uVar2 == 0) {
LAB__text__004cf720:
      if (plVar5 != plVar3 + (ulong)uVar2 * 2) {
        return plVar5[1] + (ulong)param_2 * 8 + 0x24;
      }
    }
    else {
      lVar6 = (ulong)uVar2 << 4;
      do {
        if (*plVar5 == param_3) goto LAB__text__004cf720;
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  if (param_1[1] != 0) {
    return param_1[1] + (ulong)param_2 * 8 + 0x24;
  }
  lVar4 = *(long *)(*param_1 + 8);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + 4;
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar6 + (ulong)param_2 * 8;
  }
  return lVar1;
}


