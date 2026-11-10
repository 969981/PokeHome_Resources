/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049d9d0; name: FUN_.text__0049d9d0
 */


void FUN__text__0049d9d0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x24);
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
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x20))();
    }
    param_1[3] = 0;
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x24);
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
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x20))();
    }
    *param_1 = 0;
  }
  return;
}


