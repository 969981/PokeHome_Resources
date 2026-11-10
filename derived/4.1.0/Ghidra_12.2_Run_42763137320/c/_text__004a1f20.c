/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1f20; name: FUN_.text__004a1f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a1f20(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  undefined1 uStack_11;
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  piVar1 = (int *)((long)param_1 + 100);
  if ((param_2 & 1) == 0) {
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (0 < iVar2 + -1) goto LAB__text__004a1f8c;
  }
  else {
    *piVar1 = 0;
  }
  plVar6 = _DAT_008a4630;
  FUN__text__004a20f0(*_DAT_008a4630,param_1);
  if (*(int *)(param_1 + 0xc) < 1) {
    FUN__text__004adb30(*plVar6 + 0xa8,*param_1,0);
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    plVar6 = (long *)param_1[10];
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        FUN__text__00411c2c(&uStack_11);
        if (plVar6 != (long *)(param_1[10] + (ulong)*(uint *)(param_1 + 0xb) * 8)) {
          cVar7 = '\x01';
          do {
            plVar5 = (long *)*plVar6;
            piVar1 = (int *)((long)plVar5 + 0x14);
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
              (**(code **)(*plVar5 + 0x20))();
            }
            plVar6 = plVar6 + 1;
          } while ((plVar6 != (long *)(param_1[10] + (ulong)*(uint *)(param_1 + 0xb) * 8)) &&
                  (cVar7 = cVar7 + '\x01', cVar7 != '\0'));
        }
        FUN__text__00411c70(&uStack_11);
        plVar5 = (long *)param_1[10];
      } while (plVar6 != (long *)param_1[10] + *(uint *)(param_1 + 0xb));
    }
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(param_1 + 0xb) = 0;
      FUN__text__00400fc0(0,plVar5);
      param_1[10] = 0;
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
    }
    if (param_1[3] != 0) {
      FUN__text__00400fc0(((*(byte *)(param_1 + 0xd) & 8) >> 3) << 0x1e | 0x20000003);
      param_1[3] = 0;
    }
    FUN__text__004a1b7c(param_1);
    FUN__text__00400fc0(0,param_1);
    return;
  }
LAB__text__004a1f8c:
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
  return;
}


