/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f370; name: FUN_.text__0045f370
 */


undefined8 FUN__text__0045f370(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  plVar4 = (long *)param_2[0x10];
  if (plVar4 != (long *)0x0) {
    if (plVar4 == param_1) {
      return 1;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
  }
  uVar5 = (**(code **)(*param_1 + 0x270))(param_1,param_2);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  if ((*(byte *)((long)param_2 + 0xd4) >> 1 & 1) == 0) {
    plVar4 = (long *)FUN__text__00462fa0(param_1 + 0x1b,(int)param_2[4],&uStack_21);
  }
  else {
    plVar4 = (long *)FUN__text__00462fa0(param_1 + 0x1f,(int)param_2[4],&uStack_22);
  }
  if (plVar4 == (long *)0x0) {
    return 0x34;
  }
  *plVar4 = (long)param_2;
  (**(code **)(*param_2 + 0x38))(param_2,param_1);
  piVar1 = (int *)((long)param_1 + 0x24);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}


