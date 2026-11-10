/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d1c0; name: FUN_.text__0047d1c0
 */


long * FUN__text__0047d1c0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  plVar4 = *(long **)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0x90);
  plVar3 = plVar4;
  if (uVar7 == 0) {
LAB__text__0047d210:
    if (plVar3 != plVar4 + (ulong)uVar7 * 6) {
      plVar4 = (long *)FUN__text__0047d8d4(param_2);
      goto joined_r0x0047d22c;
    }
  }
  else {
    lVar5 = (ulong)uVar7 * 0x30;
    do {
      if (*plVar3 == param_2) goto LAB__text__0047d210;
      plVar3 = plVar3 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  if (*(uint *)(param_1 + 0x94) <= uVar7) {
    uVar2 = FUN__text__0047d360();
    if ((uVar2 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)(param_1 + 0x94) <= uVar7) {
      return (long *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 0x90);
    plVar4 = *(long **)(param_1 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar7 + 1;
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = plVar4 + (ulong)uVar7 * 6;
  *plVar3 = param_2;
  plVar4 = (long *)FUN__text__0047d8d4(param_2);
joined_r0x0047d22c:
  if (plVar4 != (long *)0x0) {
    plVar3[1] = *plVar4;
    lVar6 = plVar4[3];
    lVar5 = plVar4[1];
    lVar1 = plVar4[2];
    *(int *)(plVar3 + 5) = (int)plVar4[4];
    plVar3[3] = lVar1;
    plVar3[4] = lVar6;
    plVar3[2] = lVar5;
    return plVar3 + 1;
  }
  plVar4 = *(long **)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0x90);
  plVar3 = plVar4;
  if (uVar7 == 0) {
LAB__text__0047d2f0:
    if (plVar3 != plVar4 + (ulong)uVar7 * 6) {
      uVar7 = uVar7 - 1;
      if (plVar3 < plVar4 + (ulong)uVar7 * 6) {
        memmove(plVar3,plVar3 + 6,(ulong)(uint)((int)(plVar4 + (ulong)uVar7 * 6) - (int)plVar3));
        uVar7 = *(int *)(param_1 + 0x90) - 1;
      }
      *(uint *)(param_1 + 0x90) = uVar7;
      return (long *)0x0;
    }
  }
  else {
    lVar5 = (ulong)uVar7 * 0x30;
    do {
      if (*plVar3 == param_2) goto LAB__text__0047d2f0;
      plVar3 = plVar3 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  return (long *)0x0;
}


