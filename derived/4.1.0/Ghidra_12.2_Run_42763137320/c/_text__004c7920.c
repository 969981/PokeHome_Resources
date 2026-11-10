/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c7920; name: FUN_.text__004c7920
 */


void FUN__text__004c7920(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar7 = *(long **)(param_1 + 0x138);
  if (plVar7 != (long *)0x0) {
    do {
      if ((long *)plVar7[3] != (long *)0x0) {
        *(undefined4 *)(plVar7 + 4) = 0;
        if ((long *)plVar7[3] != plVar7 + 2) {
          FUN__text__00400fc0(0);
        }
        plVar7[3] = 0;
        *(undefined4 *)((long)plVar7 + 0x24) = 0;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    puVar6 = *(undefined8 **)(param_1 + 0x138);
    while (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x138) = *puVar6;
      if (*(undefined8 **)(param_1 + 0x140) == puVar6) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      *puVar6 = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 **)(param_1 + 0x148) = puVar6;
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
      puVar6 = *(undefined8 **)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  plVar7 = *(long **)(param_1 + 0x160);
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    do {
      plVar4 = plVar7;
      *(long *)(param_1 + 0x160) = *plVar4;
      if (*(long **)(param_1 + 0x168) == plVar4) {
        *(undefined8 *)(param_1 + 0x168) = 0;
      }
      *plVar4 = *(long *)(param_1 + 0x170);
      *(long **)(param_1 + 0x170) = plVar4;
      *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + -1;
      plVar7 = *(long **)(param_1 + 0x160);
      if (*(long **)(param_1 + 0x160) == (long *)0x0) goto LAB__text__004c79a8;
    } while( true );
  }
  plVar4 = (long *)*(long *)(param_1 + 0x170);
  while (plVar4 != (long *)0x0) {
LAB__text__004c79a8:
    plVar7 = (long *)*plVar4;
    bVar1 = plVar4 < *(long **)(param_1 + 0x178);
    bVar2 = *(long **)(param_1 + 0x178) + (ulong)*(uint *)(param_1 + 0x180) * 3 <= plVar4;
    plVar4 = plVar7;
    if (bVar1 || bVar2) {
      FUN__text__00400fc0(0);
    }
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  puVar3 = *(ulong **)(param_1 + 0x138);
  if (*(ulong **)(param_1 + 0x138) == (ulong *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x148);
    if (puVar5 == (ulong *)0x0) goto LAB__text__004c7b00;
  }
  else {
    do {
      puVar5 = puVar3;
      *(ulong *)(param_1 + 0x138) = *puVar5;
      if (*(ulong **)(param_1 + 0x140) == puVar5) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      *puVar5 = *(ulong *)(param_1 + 0x148);
      *(ulong **)(param_1 + 0x148) = puVar5;
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
      puVar3 = *(ulong **)(param_1 + 0x138);
    } while (*(ulong **)(param_1 + 0x138) != (ulong *)0x0);
  }
  do {
    uVar8 = *puVar5;
    if (puVar5 < *(ulong *)(param_1 + 0x150) ||
        *(ulong *)(param_1 + 0x150) + (ulong)*(uint *)(param_1 + 0x158) * 0x28 <= puVar5) {
      FUN__text__00400fc0(0);
    }
    puVar5 = (ulong *)uVar8;
  } while (uVar8 != 0);
LAB__text__004c7b00:
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(long *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN__text__0049cd14(param_1);
  return;
}


