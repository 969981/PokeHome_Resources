/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00450b10; name: FUN_.text__00450b10
 */


void FUN__text__00450b10(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_30;
  undefined2 local_28;
  
  lVar6 = *(long *)(param_1 + 0xe0);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      local_30 = (long *)0x0;
      plVar5 = *(long **)(*(long *)(lVar6 + 0x18) + 0x1e8);
      (**(code **)(*plVar5 + 0x1c8))
                (plVar5,0,&local_30,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20));
      *(undefined2 *)(lVar7 + 0xca) = local_28;
      if (local_30 != (long *)0x0) {
        piVar1 = (int *)((long)local_30 + 0x14);
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
          (**(code **)(*local_30 + 0x20))();
        }
      }
      lVar6 = *(long *)(param_1 + 0xe0);
      if (lVar6 == 0) {
        return;
      }
    }
    lVar7 = *(long *)(param_1 + 0xb0);
    if (lVar7 != 0) {
      local_30 = (long *)0x0;
      plVar5 = *(long **)(*(long *)(lVar6 + 0x18) + 0x1e8);
      (**(code **)(*plVar5 + 0x1c8))
                (plVar5,1,&local_30,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20));
      *(undefined2 *)(lVar7 + 0xca) = local_28;
      if (local_30 != (long *)0x0) {
        piVar1 = (int *)((long)local_30 + 0x14);
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
          (**(code **)(*local_30 + 0x20))();
        }
      }
      lVar6 = *(long *)(param_1 + 0xe0);
      if (lVar6 == 0) {
        return;
      }
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    if (lVar7 != 0) {
      local_30 = (long *)0x0;
      plVar5 = *(long **)(*(long *)(lVar6 + 0x18) + 0x1e8);
      (**(code **)(*plVar5 + 0x1c8))
                (plVar5,2,&local_30,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20));
      *(undefined2 *)(lVar7 + 0xca) = local_28;
      if (local_30 != (long *)0x0) {
        piVar1 = (int *)((long)local_30 + 0x14);
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
          (**(code **)(*local_30 + 0x20))();
        }
      }
      lVar6 = *(long *)(param_1 + 0xe0);
      if (lVar6 == 0) {
        return;
      }
    }
    lVar7 = *(long *)(param_1 + 0xc0);
    if (lVar7 != 0) {
      local_30 = (long *)0x0;
      plVar5 = *(long **)(*(long *)(lVar6 + 0x18) + 0x1e8);
      (**(code **)(*plVar5 + 0x1c8))
                (plVar5,3,&local_30,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20));
      *(undefined2 *)(lVar7 + 0xca) = local_28;
      if (local_30 != (long *)0x0) {
        piVar1 = (int *)((long)local_30 + 0x14);
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
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  return;
}


