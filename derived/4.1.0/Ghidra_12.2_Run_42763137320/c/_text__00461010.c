/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461010; name: FUN_.text__00461010
 */


long FUN__text__00461010(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_38;
  
  lVar6 = FUN__text__004cf6e0(param_1 + 0xb8,param_2,param_4);
  if (lVar6 == 0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN__text__004ce250(&local_38);
    plVar8 = local_38;
    if (local_38 != (long *)0x0) {
      plVar7 = (long *)*param_3;
      local_38 = (long *)0x0;
      *param_3 = (long)plVar8;
      if (plVar7 != (long *)0x0) {
        piVar1 = (int *)((long)plVar7 + 0x14);
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
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      uVar5 = FUN__text__00468bb0(param_1,param_2 & 0xffffffff,param_4);
      goto LAB__text__004610e8;
    }
  }
  plVar8 = (long *)*param_3;
  *param_3 = 0;
  uVar5 = 0;
  if (plVar8 != (long *)0x0) {
    piVar1 = (int *)((long)plVar8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 0x20))();
    }
    uVar5 = 0;
  }
LAB__text__004610e8:
  *(undefined2 *)(param_3 + 1) = uVar5;
  if (local_38 != (long *)0x0) {
    piVar1 = (int *)((long)local_38 + 0x14);
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return param_1;
}


