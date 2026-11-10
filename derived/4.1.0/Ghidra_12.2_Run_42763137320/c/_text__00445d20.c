/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445d20; name: FUN_.text__00445d20
 */


void FUN__text__00445d20(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN__text__00447104();
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + 0x24);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(*(long *)(lVar4 + 0x10) + 0x20))();
    }
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    *piVar5 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN__text__004459e0(piVar5);
      FUN__text__00400fc0(0,piVar5);
      return;
    }
  }
  return;
}


