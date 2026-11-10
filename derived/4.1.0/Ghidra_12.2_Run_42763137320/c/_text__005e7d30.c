/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e7d30; name: FUN_.text__005e7d30
 */


bool FUN__text__005e7d30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
    return true;
  }
  piVar1 = (int *)(param_1 + 0x140);
  iVar5 = *(int *)(param_1 + 0x140) + 1;
  iVar6 = *piVar1;
  if (iVar6 == *(int *)(param_1 + 0x140)) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB__text__005e7d7c:
      return (long)iVar5 == *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    iVar5 = iVar6 + 1;
    if (iVar2 == iVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB__text__005e7d7c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = iVar2;
  } while( true );
}


