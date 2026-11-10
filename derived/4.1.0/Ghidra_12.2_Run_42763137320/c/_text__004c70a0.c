/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c70a0; name: FUN_.text__004c70a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004c70a0(uint param_1,long *param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  float fVar18;
  undefined1 uStack_31;
  
  plVar10 = _DAT_008a45c8;
  lVar15 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar15 + 0x618);
  pMVar2 = (MutexType *)(lVar15 + 0x628);
  while( true ) {
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__004c7128;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__004c7128:
  uVar5 = *(uint *)(lVar15 + 0x680);
  if (uVar5 == 0) {
    lVar17 = 0;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = param_1 / uVar5;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0x678) + (ulong)(param_1 - uVar8 * uVar5) * 8);
    if (lVar17 != 0) {
LAB__text__004c7144:
      if (*(uint *)(lVar17 + 0x10) != param_1) goto code_r0x004c7150;
      piVar3 = (int *)(lVar17 + 0x14);
      do {
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
LAB__text__004c7188:
  while (iVar4 = *piVar1, -1 < iVar4) {
    while (*piVar1 == iVar4) {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar16) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar15 + 0x648))) {
          nn::os::SignalEvent((EventType *)(lVar15 + 0x650));
        }
        goto joined_r0x004c71d8;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar2);
joined_r0x004c71d8:
  if (lVar17 != 0) {
    return 1;
  }
  FUN__text__00411c2c(&uStack_31);
  lVar15 = *plVar10;
  piVar1 = (int *)(lVar15 + 0x618);
  FUN__text__00411760(piVar1);
  plVar10 = (long *)FUN__text__00400f80(2,0x38);
  if (plVar10 == (long *)0x0) {
    bVar16 = true;
  }
  else {
    FUN__text__004c700c(plVar10);
    *(uint *)(plVar10 + 2) = param_1;
    plVar11 = (long *)(lVar15 + 0x678);
    uVar5 = *(uint *)(lVar15 + 0x680);
    if ((uVar5 == 0) ||
       (fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar15 + 0x688)), 0.9 < fVar18 / (float)uVar5)) {
      FUN__text__00411870(plVar11);
      uVar5 = *(uint *)(lVar15 + 0x680);
      if (uVar5 == 0) {
        bVar16 = true;
LAB__text__004c72d4:
        piVar3 = (int *)((long)plVar10 + 0x14);
        *(undefined4 *)(plVar10 + 2) = 0;
        do {
          iVar4 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
        if ((!bVar16) && (uVar5 = *(uint *)(lVar15 + 0x680), uVar5 != 0)) {
          uVar8 = 0;
          if (uVar5 != 0) {
            uVar8 = param_1 / uVar5;
          }
          plVar11 = *(long **)(*plVar11 + (ulong)(param_1 - uVar8 * uVar5) * 8);
          if (plVar11 != (long *)0x0) {
            bVar16 = true;
            do {
              if (*(uint *)(plVar11 + 2) == param_1) {
                piVar3 = (int *)((long)plVar11 + 0x14);
                bVar16 = true;
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar7) {
                    *piVar3 = *piVar3 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                plVar10 = plVar11;
                break;
              }
              plVar11 = (long *)plVar11[1];
              plVar10 = (long *)0x0;
            } while (plVar11 != (long *)0x0);
            goto LAB__text__004c7354;
          }
        }
        plVar10 = (long *)0x0;
        bVar16 = true;
        goto LAB__text__004c7354;
      }
      uVar8 = *(uint *)(plVar10 + 2);
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar13 = (ulong)(uVar8 - uVar9 * uVar5);
      lVar17 = *(long *)(*plVar11 + uVar13 * 8);
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = param_1 / uVar5;
      }
      uVar13 = (ulong)(param_1 - uVar8 * uVar5);
      lVar17 = *(long *)(*plVar11 + uVar13 * 8);
      uVar8 = param_1;
    }
    if (lVar17 != 0) {
      lVar14 = lVar17;
      do {
        if (*(uint *)(lVar14 + 0x10) == uVar8) {
          bVar16 = false;
          goto LAB__text__004c72d4;
        }
        lVar14 = *(long *)(lVar14 + 8);
      } while (lVar14 != 0);
    }
    plVar10[1] = lVar17;
    bVar16 = false;
    *(long **)(*(long *)(lVar15 + 0x678) + uVar13 * 8) = plVar10;
    *(int *)(lVar15 + 0x688) = *(int *)(lVar15 + 0x688) + 1;
  }
LAB__text__004c7354:
  do {
    iVar4 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 == -1) {
    *(undefined8 *)(lVar15 + 0x620) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x628));
  if (plVar10 == (long *)0x0) {
    bVar16 = true;
  }
  uVar12 = 0x34;
  if (plVar10 != (long *)0x0) {
    uVar12 = 1;
  }
  if (!bVar16) {
    lVar15 = *param_2;
    lVar17 = param_2[1];
    uVar12 = 1;
    lVar14 = param_2[2];
    *(int *)(plVar10 + 6) = (int)param_2[3];
    plVar10[4] = lVar17;
    plVar10[5] = lVar14;
    plVar10[3] = lVar15;
  }
  FUN__text__00411c70(&uStack_31);
  return uVar12;
code_r0x004c7150:
  lVar17 = *(long *)(lVar17 + 8);
  if (lVar17 == 0) goto LAB__text__004c7188;
  goto LAB__text__004c7144;
}


