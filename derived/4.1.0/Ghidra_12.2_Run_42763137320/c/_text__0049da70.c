/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049da70; name: FUN_.text__0049da70
 */


long * FUN__text__0049da70(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 != param_1) {
    lVar7 = *param_2;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x24);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = *param_1;
    *param_1 = lVar7;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
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
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
      }
    }
    plVar8 = (long *)param_2[1];
    if (plVar8 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      uVar5 = FUN__text__004a0128(*param_1);
      lVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar5);
    }
    param_1[1] = lVar7;
    lVar7 = param_2[2];
    *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
    *(short *)(param_1 + 2) = (short)lVar7;
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x24);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = param_1[3];
    param_1[3] = lVar7;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
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
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
      }
    }
    param_1[4] = param_2[4];
  }
  return param_1;
}


