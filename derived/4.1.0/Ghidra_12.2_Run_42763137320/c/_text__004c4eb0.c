/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4eb0; name: FUN_.text__004c4eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c4eb0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  *param_1 = _DAT_008a47c8 + 0x10;
  FUN__text__004c4910();
  while (plVar5 = (long *)param_1[3], plVar5 != (long *)0x0) {
    param_1[3] = plVar5[3];
    piVar1 = (int *)((long)plVar5 + 0x14);
    plVar5[3] = 0;
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  param_1[3] = 0;
  FUN__text__0042ce74(param_1);
  return;
}


