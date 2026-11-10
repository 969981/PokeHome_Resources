/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ac4f0; name: FUN_.text__004ac4f0
 */


long * FUN__text__004ac4f0(int *param_1,uint param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  float fVar14;
  
  FUN__text__00411760();
  *param_3 = 0;
  plVar8 = (long *)FUN__text__0042af70();
  if (plVar8 != (long *)0x0) {
    *(uint *)(plVar8 + 2) = param_2;
    plVar9 = (long *)(param_1 + 0x18);
    uVar3 = param_1[0x1a];
    if ((uVar3 == 0) || (fVar14 = (float)NEON_ucvtf(param_1[0x1c]), 0.9 < fVar14 / (float)uVar3)) {
      FUN__text__00411870(plVar9);
      uVar3 = param_1[0x1a];
      if (uVar3 == 0) {
        bVar13 = true;
LAB__text__004ac5e4:
        piVar1 = (int *)((long)plVar8 + 0x14);
        *(undefined4 *)(plVar8 + 2) = 0;
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (bVar13) {
          plVar8 = (long *)0x0;
        }
        else {
          uVar3 = param_1[0x1a];
          if (uVar3 == 0) {
            plVar8 = (long *)0x0;
          }
          else {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = param_2 / uVar3;
            }
            plVar9 = *(long **)(*plVar9 + (ulong)(param_2 - uVar4 * uVar3) * 8);
            if (plVar9 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              do {
                if (*(uint *)(plVar9 + 2) == param_2) {
                  piVar1 = (int *)((long)plVar9 + 0x14);
                  do {
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar13) {
                      *piVar1 = *piVar1 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  plVar8 = plVar9;
                  break;
                }
                plVar9 = (long *)plVar9[1];
                plVar8 = (long *)0x0;
              } while (plVar9 != (long *)0x0);
            }
          }
        }
        goto LAB__text__004ac684;
      }
      uVar4 = *(uint *)(plVar8 + 2);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar4 / uVar3;
      }
      uVar10 = (ulong)(uVar4 - uVar7 * uVar3);
      lVar11 = *(long *)(*plVar9 + uVar10 * 8);
    }
    else {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = param_2 / uVar3;
      }
      uVar10 = (ulong)(param_2 - uVar4 * uVar3);
      lVar11 = *(long *)(*plVar9 + uVar10 * 8);
      uVar4 = param_2;
    }
    if (lVar11 != 0) {
      lVar12 = lVar11;
      do {
        if (*(uint *)(lVar12 + 0x10) == uVar4) {
          bVar13 = false;
          goto LAB__text__004ac5e4;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
    }
    plVar8[1] = lVar11;
    *(long **)(*(long *)(param_1 + 0x18) + uVar10 * 8) = plVar8;
    param_1[0x1c] = param_1[0x1c] + 1;
    *param_3 = 1;
  }
LAB__text__004ac684:
  do {
    iVar2 = *param_1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar13) {
      *param_1 = iVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar2 == -1) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return plVar8;
}


