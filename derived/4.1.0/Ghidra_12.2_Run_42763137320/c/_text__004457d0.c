/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004457d0; name: FUN_.text__004457d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004457d0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  *param_1 = _DAT_008a4988 + 0x10;
  plVar5 = (long *)param_1[0xd];
  piVar1 = (int *)((long)plVar5 + 0x14);
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
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN__text__00400fc0(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    FUN__text__00400fc0(0);
    param_1[9] = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
  }
  FUN__text__004335d0(param_1);
  return;
}


