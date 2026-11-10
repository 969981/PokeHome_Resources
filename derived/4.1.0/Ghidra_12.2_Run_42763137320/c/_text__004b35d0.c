/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b35d0; name: FUN_.text__004b35d0
 */


void FUN__text__004b35d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 != 0) {
    do {
      lVar9 = DAT_00ae9a38;
      if (*(short *)(lVar12 + 0x34) == 0x2103) {
        uVar4 = *(uint *)(lVar12 + 0x30);
        piVar1 = (int *)(DAT_00ae9a38 + 0x168);
        pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x178);
        while( true ) {
          while (iVar10 = *piVar1, -1 < iVar10) {
            while (*piVar1 == iVar10) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar10 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB__text__004b3730;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar2);
          if (*piVar1 < 0) break;
          nn::os::UnlockMutex(pMVar2);
        }
LAB__text__004b3730:
        uVar5 = *(uint *)(lVar9 + 0x1d0);
        if (uVar5 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          uVar8 = 0;
          if (uVar5 != 0) {
            uVar8 = uVar4 / uVar5;
          }
          plVar11 = *(long **)(*(long *)(lVar9 + 0x1c8) + (ulong)(uVar4 - uVar8 * uVar5) * 8);
          if (plVar11 != (long *)0x0) {
LAB__text__004b3750:
            if (*(uint *)(plVar11 + 2) != uVar4) goto code_r0x004b375c;
            piVar3 = (int *)((long)plVar11 + 0x14);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
LAB__text__004b3794:
        while (iVar10 = *piVar1, -1 < iVar10) {
          while (*piVar1 == iVar10) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar10 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              if ((iVar10 + -1 == 0) && (0 < *(int *)(lVar9 + 0x198))) {
                nn::os::SignalEvent((EventType *)(lVar9 + 0x1a0));
              }
              if (plVar11 == (long *)0x0) goto LAB__text__004b3624;
              goto LAB__text__004b37d4;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar2);
        if (plVar11 != (long *)0x0) {
LAB__text__004b37d4:
          FUN__text__004b35d0(param_1,plVar11,param_3,param_4);
          piVar1 = (int *)((long)plVar11 + 0x14);
          do {
            iVar10 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar10 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 + -1 == 0) goto LAB__text__004b3614;
        }
      }
      else if ((*(short *)(lVar12 + 0x34) == 0x403) &&
              (plVar11 = (long *)FUN__text__004ba560(lVar12), plVar11 != (long *)0x0)) {
        iVar10 = (**(code **)(*plVar11 + 0x80))();
        if ((param_4 != 0) && ((iVar10 - 2U < 4 && (DAT_00aeab68 != 0)))) {
          FUN__text__004c1580(DAT_00aeab68,(int)plVar11[4],*(undefined8 *)(param_4 + 0x58),
                              *(undefined4 *)(param_3 + 0x14),param_3 + 0x1c,
                              *(undefined2 *)(param_3 + 0x1a),*(short *)(param_3 + 0x18) != 0);
        }
        piVar1 = (int *)((long)plVar11 + 0x24);
        do {
          iVar10 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 + -1 == 0) {
          plVar11 = plVar11 + 2;
LAB__text__004b3614:
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
LAB__text__004b3624:
      lVar12 = *(long *)(lVar12 + 0x18);
    } while (lVar12 != 0);
  }
  return;
code_r0x004b375c:
  plVar11 = (long *)plVar11[1];
  if (plVar11 == (long *)0x0) goto LAB__text__004b3794;
  goto LAB__text__004b3750;
}


