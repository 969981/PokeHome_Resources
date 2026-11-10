/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c80c0; name: FUN_.text__003c80c0
 */


undefined1  [16] FUN__text__003c80c0(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 0x2c0);
  lVar5 = *(long *)(param_1 + 0x2c8);
  plVar4 = plVar3 + lVar5 * 3;
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x18;
    do {
      if (*plVar3 == *param_2) goto LAB__text__003c810c;
      plVar3 = plVar3 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    plVar3 = plVar4;
  }
LAB__text__003c810c:
  plVar1 = (long *)0x0;
  if (plVar3 != plVar4) {
    plVar1 = plVar3 + 1;
  }
  uVar2 = FUN__text__003e9e24(*plVar1,(int)plVar1[1]);
  if ((uVar2 & 1) == 0) {
    return ZEXT816(0);
  }
  auVar6 = FUN__text__003e9ef0(*plVar1,(int)plVar1[1]);
  return auVar6;
}


