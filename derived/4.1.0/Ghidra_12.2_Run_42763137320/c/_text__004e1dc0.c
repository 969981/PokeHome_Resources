/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1dc0; name: FUN_.text__004e1dc0
 */


void FUN__text__004e1dc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  FUN__text__00411760();
  if (param_1[0x1a] != 0) {
    plVar8 = (long *)**(undefined8 **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) {
      uVar7 = 0;
      do {
        if (param_1[0x1a] - 1 == uVar7) goto LAB__text__004e1eb0;
        plVar8 = (long *)(*(undefined8 **)(param_1 + 0x18))[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (plVar8 == (long *)0x0);
    }
    else {
      uVar7 = 0;
    }
    do {
      plVar9 = (long *)plVar8[1];
      if (plVar9 == (long *)0x0) {
        uVar4 = param_1[0x1a];
        if (uVar4 <= (int)uVar7 + 1U) {
          uVar4 = (int)uVar7 + 1;
        }
        do {
          if (uVar4 - 1 == (int)uVar7) {
            plVar9 = (long *)0x0;
            uVar7 = (ulong)uVar4;
            iVar3 = (int)plVar8[2];
            goto joined_r0x004e1ea0;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          plVar9 = *(long **)(*(long *)(param_1 + 0x18) + uVar7 * 8);
        } while (plVar9 == (long *)0x0);
      }
      iVar3 = (int)plVar8[2];
joined_r0x004e1ea0:
      if (iVar3 < 0) {
        piVar1 = (int *)((long)plVar8 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
LAB__text__004e1eb0:
  do {
    iVar3 = *param_1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar6) {
      *param_1 = iVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == -1) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  piVar1 = param_1 + 300;
  FUN__text__00411760(piVar1);
  if (param_1[0x146] != 0) {
    plVar8 = (long *)**(undefined8 **)(param_1 + 0x144);
    if (plVar8 == (long *)0x0) {
      uVar7 = 0;
      do {
        if (param_1[0x146] - 1 == uVar7) goto LAB__text__004e1fc0;
        plVar8 = (long *)(*(undefined8 **)(param_1 + 0x144))[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (plVar8 == (long *)0x0);
    }
    else {
      uVar7 = 0;
    }
    do {
      plVar9 = (long *)plVar8[1];
      if (plVar9 == (long *)0x0) {
        uVar4 = param_1[0x146];
        if (uVar4 <= (int)uVar7 + 1U) {
          uVar4 = (int)uVar7 + 1;
        }
        do {
          if (uVar4 - 1 == (int)uVar7) {
            plVar9 = (long *)0x0;
            uVar7 = (ulong)uVar4;
            iVar3 = (int)plVar8[2];
            goto joined_r0x004e1fb0;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          plVar9 = *(long **)(*(long *)(param_1 + 0x144) + uVar7 * 8);
        } while (plVar9 == (long *)0x0);
      }
      iVar3 = (int)plVar8[2];
joined_r0x004e1fb0:
      if (iVar3 < 0) {
        piVar2 = (int *)((long)plVar8 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
LAB__text__004e1fc0:
  do {
    iVar3 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == -1) {
    param_1[0x12e] = 0;
    param_1[0x12f] = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
    return;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


