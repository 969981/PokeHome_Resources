/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00459d00; name: FUN_.text__00459d00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00459d00(long param_1)

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
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  
  plVar13 = *(long **)(param_1 + 8);
  if ((*(ushort *)(plVar13 + 0x41) & 1) == 0) {
    (**(code **)(*plVar13 + 0x70))(plVar13,0);
  }
  else {
    (**(code **)(*plVar13 + 0x78))(plVar13);
    if ((*(ushort *)(plVar13 + 0x41) >> 4 & 1) != 0) {
      (**(code **)(*plVar13 + 0x80))(plVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar10 = FUN__text__0047afb8(*(undefined8 *)(param_1 + 8));
  if ((uVar10 & 1) != 0) {
    FUN__text__0047a550(*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 0x38));
    iVar11 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x1d0) + 0x80))();
    plVar13 = _DAT_008a45c8;
    if (*(int *)(param_1 + 0x40) != 0) {
      plVar14 = *(long **)(param_1 + 0x38);
      do {
        if (((*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x58) != *plVar14) || (iVar11 != 10)
            ) || ((int)plVar14[2] == 2)) {
          lVar16 = *plVar13;
          piVar1 = (int *)(lVar16 + 0x78);
          uVar5 = *(uint *)(plVar14 + 1);
          pMVar2 = (MutexType *)(lVar16 + 0x88);
          while( true ) {
            while (iVar4 = *piVar1, -1 < iVar4) {
              while (*piVar1 == iVar4) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar4 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB__text__00459e70;
              }
              ClearExclusiveLocal();
            }
            nn::os::LockMutex(pMVar2);
            if (*piVar1 < 0) break;
            nn::os::UnlockMutex(pMVar2);
          }
LAB__text__00459e70:
          uVar6 = *(uint *)(lVar16 + 0xe0);
          if (uVar6 == 0) {
            plVar15 = (long *)0x0;
          }
          else {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar5 / uVar6;
            }
            plVar15 = *(long **)(*(long *)(lVar16 + 0xd8) + (ulong)(uVar5 - uVar9 * uVar6) * 8);
            if (plVar15 != (long *)0x0) {
LAB__text__00459e90:
              if (*(uint *)(plVar15 + 2) != uVar5) goto code_r0x00459e9c;
              piVar3 = (int *)((long)plVar15 + 0x14);
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
LAB__text__00459ed8:
          while (iVar4 = *piVar1, -1 < iVar4) {
            while (*piVar1 == iVar4) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar4 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') {
                if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar16 + 0xa8))) {
                  nn::os::SignalEvent((EventType *)(lVar16 + 0xb0));
                }
                if (plVar15 == (long *)0x0) goto LAB__text__00459dc0;
                goto LAB__text__00459f18;
              }
            }
            ClearExclusiveLocal();
          }
          nn::os::UnlockMutex(pMVar2);
          if (plVar15 != (long *)0x0) {
LAB__text__00459f18:
            uVar12 = FUN__text__0045df80(plVar15 + -2);
            if ((uVar12 & 1) != 0) {
              FUN__text__00415b28(plVar15 + -2,plVar14,param_1);
            }
            piVar1 = (int *)((long)plVar15 + 0x14);
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
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
        }
LAB__text__00459dc0:
        plVar14 = plVar14 + 4;
      } while (plVar14 !=
               (long *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 0x20));
    }
  }
  return uVar10 & 1;
code_r0x00459e9c:
  plVar15 = (long *)plVar15[1];
  if (plVar15 == (long *)0x0) goto LAB__text__00459ed8;
  goto LAB__text__00459e90;
}


