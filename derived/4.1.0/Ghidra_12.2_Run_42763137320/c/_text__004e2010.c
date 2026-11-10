/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2010; name: FUN_.text__004e2010
 */


void FUN__text__004e2010(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  piVar1 = (int *)(param_1 + 0x3c0);
  FUN__text__00411760(piVar1);
  if (*(int *)(param_1 + 0x428) != 0) {
    plVar7 = (long *)**(undefined8 **)(param_1 + 0x420);
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0x428) - 1 == uVar8) goto LAB__text__004e2110;
        plVar7 = (long *)(*(undefined8 **)(param_1 + 0x420))[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (plVar7 == (long *)0x0);
    }
    else {
      uVar8 = 0;
    }
    do {
      plVar9 = (long *)plVar7[1];
      if (plVar9 == (long *)0x0) {
        uVar4 = *(uint *)(param_1 + 0x428);
        if (uVar4 <= (int)uVar8 + 1U) {
          uVar4 = (int)uVar8 + 1;
        }
        do {
          if (uVar4 - 1 == (int)uVar8) {
            plVar9 = (long *)0x0;
            uVar8 = (ulong)uVar4;
            break;
          }
          uVar8 = (ulong)((int)uVar8 + 1);
          plVar9 = *(long **)(*(long *)(param_1 + 0x420) + uVar8 * 8);
        } while (plVar9 == (long *)0x0);
      }
      FUN__text__0048e190(DAT_00ae9a80,*(undefined4 *)((long)plVar7 + 0x6c));
      piVar2 = (int *)((long)plVar7 + 0x14);
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
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      plVar7 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
LAB__text__004e2110:
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
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
    return;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  return;
}


