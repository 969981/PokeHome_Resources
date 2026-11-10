/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e7dd0; name: FUN_.text__005e7dd0
 */


void FUN__text__005e7dd0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
LAB__text__005e7e3c:
    FUN__text__005e2890(param_1 + 0x158,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x98);
    for (puVar8 = *(undefined8 **)(param_1 + 0x90); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x38))((long *)*puVar8,param_2);
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 8);
    FUN__text__005e2890(param_1 + 0x1d8,param_2);
    return;
  }
  piVar1 = (int *)(param_1 + 0x140);
  iVar6 = *(int *)(param_1 + 0x140) + 1;
  iVar7 = *piVar1;
  if (iVar7 == *(int *)(param_1 + 0x140)) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB__text__005e7e2c:
      if ((long)iVar6 != *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) {
        return;
      }
      goto LAB__text__005e7e3c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar1;
    iVar6 = iVar7 + 1;
    if (iVar3 == iVar7) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB__text__005e7e2c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar3;
  } while( true );
}


