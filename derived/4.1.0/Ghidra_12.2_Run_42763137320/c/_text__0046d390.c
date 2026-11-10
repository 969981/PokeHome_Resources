/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d390; name: FUN_.text__0046d390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046d390(long *param_1,undefined8 param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  
  plVar10 = _DAT_008a45c8;
  if ((int)param_1[1] != 0) {
    puVar12 = (undefined8 *)*param_1;
    do {
      if (*(char *)((long)*puVar12 + 0xd) == '\x04') {
        lVar13 = *plVar10;
        piVar1 = (int *)(lVar13 + 0x348);
        uVar5 = *(uint *)*puVar12;
        pMVar2 = (MutexType *)(lVar13 + 0x358);
        while( true ) {
          while (iVar4 = *piVar1, -1 < iVar4) {
            while (*piVar1 == iVar4) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar4 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB__text__0046d460;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar2);
          if (*piVar1 < 0) break;
          nn::os::UnlockMutex(pMVar2);
        }
LAB__text__0046d460:
        uVar6 = *(uint *)(lVar13 + 0x3b0);
        if (uVar6 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar5 / uVar6;
          }
          plVar11 = *(long **)(*(long *)(lVar13 + 0x3a8) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
          if (plVar11 != (long *)0x0) {
LAB__text__0046d480:
            if (*(uint *)(plVar11 + 2) != uVar5) goto code_r0x0046d48c;
            piVar3 = (int *)((long)plVar11 + 0x14);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = *piVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
        }
LAB__text__0046d4c4:
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar13 + 0x378))) {
                nn::os::SignalEvent((EventType *)(lVar13 + 0x380));
              }
              if (plVar11 == (long *)0x0) goto LAB__text__0046d3d0;
              goto LAB__text__0046d504;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar2);
        if (plVar11 != (long *)0x0) {
LAB__text__0046d504:
          FUN__text__0046d570(param_2,plVar11);
          piVar1 = (int *)((long)plVar11 + 0x14);
          do {
            iVar4 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar4 + -1 == 0) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
LAB__text__0046d3d0:
      puVar12 = puVar12 + 1;
    } while (puVar12 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8));
  }
  return;
code_r0x0046d48c:
  plVar11 = (long *)plVar11[1];
  if (plVar11 == (long *)0x0) goto LAB__text__0046d4c4;
  goto LAB__text__0046d480;
}


