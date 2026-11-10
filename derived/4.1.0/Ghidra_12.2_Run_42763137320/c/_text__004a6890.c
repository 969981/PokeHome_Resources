/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a6890; name: FUN_.text__004a6890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a6890(long param_1,long param_2)

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
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  plVar10 = _DAT_008a45c8;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar11 = *(long *)(param_2 + 0x18);
    do {
      lVar13 = *(long *)(lVar11 + 0x18);
      if (*(short *)(lVar11 + 0x34) == 0x2103) {
        lVar14 = *plVar10;
        piVar1 = (int *)(lVar14 + 0x168);
        uVar5 = *(uint *)(lVar11 + 0x30);
        pMVar2 = (MutexType *)(lVar14 + 0x178);
        while( true ) {
          while (iVar4 = *piVar1, -1 < iVar4) {
            while (*piVar1 == iVar4) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar4 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB__text__004a6990;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar2);
          if (*piVar1 < 0) break;
          nn::os::UnlockMutex(pMVar2);
        }
LAB__text__004a6990:
        uVar6 = *(uint *)(lVar14 + 0x1d0);
        if (uVar6 == 0) {
          plVar12 = (long *)0x0;
        }
        else {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar5 / uVar6;
          }
          plVar12 = *(long **)(*(long *)(lVar14 + 0x1c8) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
          if (plVar12 != (long *)0x0) {
LAB__text__004a69b0:
            if (*(uint *)(plVar12 + 2) != uVar5) goto code_r0x004a69bc;
            piVar3 = (int *)((long)plVar12 + 0x14);
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
LAB__text__004a69f4:
        while (iVar4 = *piVar1, -1 < iVar4) {
          while (*piVar1 == iVar4) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar14 + 0x198))) {
                nn::os::SignalEvent((EventType *)(lVar14 + 0x1a0));
              }
              if (plVar12 == (long *)0x0) goto LAB__text__004a68d0;
              goto LAB__text__004a6a34;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar2);
        if (plVar12 != (long *)0x0) {
LAB__text__004a6a34:
          FUN__text__004a6890(param_1,plVar12);
          piVar1 = (int *)((long)plVar12 + 0x14);
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
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
        }
      }
      else if (*(short *)(lVar11 + 0x34) == 0x403) {
        FUN__text__00464a20(*(undefined4 *)(lVar11 + 0x30));
        lVar11 = FUN__text__004ada80(param_1 + 0xa8,*(undefined8 *)(lVar11 + 0x38),0);
        if (lVar11 != 0) {
          FUN__text__004a1f20(lVar11,0);
        }
      }
LAB__text__004a68d0:
      lVar11 = lVar13;
    } while (lVar13 != 0);
  }
  return;
code_r0x004a69bc:
  plVar12 = (long *)plVar12[1];
  if (plVar12 == (long *)0x0) goto LAB__text__004a69f4;
  goto LAB__text__004a69b0;
}


