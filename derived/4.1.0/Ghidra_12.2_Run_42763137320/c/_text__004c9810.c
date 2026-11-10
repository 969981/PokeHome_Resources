/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c9810; name: FUN_.text__004c9810
 */


void FUN__text__004c9810(long param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x24);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN__text__004c9640(param_1,param_2);
  if ((*(char *)((long)param_2 + 0x1f) != '\0') && (*(char *)((long)param_2 + 0x1d) != '\0')) {
    if (*param_2 < 3) {
      FUN__text__0042eb90(param_1 + 0x28,*param_2 & 1);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x004c98a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x20))((long *)(param_1 + 0x10));
    return;
  }
  return;
}


