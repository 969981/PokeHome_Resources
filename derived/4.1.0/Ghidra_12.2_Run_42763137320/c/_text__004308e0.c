/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004308e0; name: FUN_.text__004308e0
 */


void FUN__text__004308e0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  
  plVar4 = (long *)*param_1;
  while (plVar4 != (long *)0x0) {
    while( true ) {
      *param_1 = *plVar4;
      if ((long *)param_1[1] == plVar4) {
        param_1[1] = 0;
      }
      if ((plVar4 < (long *)param_1[3]) ||
         ((long *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 3 <= plVar4)) break;
      *plVar4 = param_1[2];
      param_1[2] = (long)plVar4;
      plVar4 = (long *)*param_1;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
      if (plVar4 == (long *)0x0) goto LAB__text__00430974;
    }
    FUN__text__00400fc0(0);
    plVar4 = (long *)*param_1;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
  }
LAB__text__00430974:
  puVar3 = (ulong *)param_1[2];
  while (puVar3 != (ulong *)0x0) {
    puVar5 = (ulong *)*puVar3;
    bVar1 = puVar3 < (ulong)param_1[3];
    bVar2 = param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18 <= puVar3;
    puVar3 = puVar5;
    if (bVar1 || bVar2) {
      FUN__text__00400fc0(0);
    }
  }
  if (param_1[3] != 0) {
    FUN__text__00400fc0(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


