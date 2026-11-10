/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af950; name: FUN_.text__004af950
 */


void FUN__text__004af950(long param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  
  FUN__text__004afb00();
  FUN__text__004afde0(param_1);
  FUN__text__004aff00(param_1);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN__text__00400fc0(0x10);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    do {
      plVar3 = plVar5;
      *(long *)(param_1 + 0x38) = *plVar3;
      if (*(long **)(param_1 + 0x40) == plVar3) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *plVar3 = *(long *)(param_1 + 0x48);
      *(long **)(param_1 + 0x48) = plVar3;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar5 = *(long **)(param_1 + 0x38);
      if (*(long **)(param_1 + 0x38) == (long *)0x0) goto LAB__text__004af9b8;
    } while( true );
  }
  plVar3 = (long *)*(long *)(param_1 + 0x48);
  while (plVar3 != (long *)0x0) {
LAB__text__004af9b8:
    plVar5 = (long *)*plVar3;
    bVar1 = plVar3 < *(long **)(param_1 + 0x50);
    bVar2 = *(long **)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 3 <= plVar3;
    plVar3 = plVar5;
    if (bVar1 || bVar2) {
      FUN__text__00400fc0(0);
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar6 = *(ulong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (puVar6 == (ulong *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x70);
    if (puVar4 == (ulong *)0x0) goto LAB__text__004afad0;
  }
  else {
    do {
      puVar4 = puVar6;
      *(ulong *)(param_1 + 0x60) = *puVar4;
      if (*(ulong **)(param_1 + 0x68) == puVar4) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      *puVar4 = *(ulong *)(param_1 + 0x70);
      *(ulong **)(param_1 + 0x70) = puVar4;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      puVar6 = *(ulong **)(param_1 + 0x60);
    } while (*(ulong **)(param_1 + 0x60) != (ulong *)0x0);
  }
  do {
    uVar7 = *puVar4;
    if (puVar4 < *(ulong *)(param_1 + 0x78) ||
        *(ulong *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 0x80) * 0x18 <= puVar4) {
      FUN__text__00400fc0(0);
    }
    puVar4 = (ulong *)uVar7;
  } while (uVar7 != 0);
LAB__text__004afad0:
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}


