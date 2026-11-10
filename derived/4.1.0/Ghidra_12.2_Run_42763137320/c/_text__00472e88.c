/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472e88; name: FUN_.text__00472e88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472e88(void)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  
  puVar5 = _DAT_008a48f0;
  *_DAT_008a48f0 = 0;
  puVar5[1] = 0;
  plVar4 = _DAT_008a48e8;
  plVar6 = (long *)*_DAT_008a48e8;
  while (plVar6 != (long *)0x0) {
    while( true ) {
      *plVar4 = *plVar6;
      if ((long *)plVar4[1] == plVar6) {
        plVar4[1] = 0;
      }
      if ((plVar6 < (long *)plVar4[3]) ||
         ((long *)plVar4[3] + (ulong)*(uint *)(plVar4 + 4) * 3 <= plVar6)) break;
      *plVar6 = plVar4[2];
      plVar4[2] = (long)plVar6;
      plVar6 = (long *)*plVar4;
      *(int *)((long)plVar4 + 0x24) = *(int *)((long)plVar4 + 0x24) + -1;
      if (plVar6 == (long *)0x0) goto LAB__text__00472f40;
    }
    FUN__text__00400fc0(5);
    plVar6 = (long *)*plVar4;
    *(int *)((long)plVar4 + 0x24) = *(int *)((long)plVar4 + 0x24) + -1;
  }
LAB__text__00472f40:
  puVar3 = (ulong *)plVar4[2];
  while (puVar3 != (ulong *)0x0) {
    puVar7 = (ulong *)*puVar3;
    bVar1 = puVar3 < (ulong)plVar4[3];
    bVar2 = plVar4[3] + (ulong)*(uint *)(plVar4 + 4) * 0x18 <= puVar3;
    puVar3 = puVar7;
    if (bVar1 || bVar2) {
      FUN__text__00400fc0(5);
    }
  }
  if (plVar4[3] != 0) {
    FUN__text__00400fc0(5);
    plVar4[3] = 0;
  }
  *(undefined4 *)(plVar4 + 4) = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  return;
}


