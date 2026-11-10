/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aaf20; name: FUN_.text__004aaf20
 */


long FUN__text__004aaf20(int *param_1,uint param_2,undefined1 *param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  float fVar15;
  
  FUN__text__00411760();
  *param_3 = 0;
  lVar10 = FUN__text__004c5d1c();
  if (lVar10 != 0) {
    *(uint *)(lVar10 + 0x20) = param_2;
    plVar1 = (long *)(lVar10 + 0x10);
    plVar2 = (long *)(param_1 + 0x18);
    uVar5 = param_1[0x1a];
    if ((uVar5 == 0) || (fVar15 = (float)NEON_ucvtf(param_1[0x1c]), 0.9 < fVar15 / (float)uVar5)) {
      FUN__text__00411870(plVar2);
      uVar5 = param_1[0x1a];
      if (uVar5 == 0) {
        bVar14 = true;
LAB__text__004ab018:
        piVar3 = (int *)(lVar10 + 0x24);
        *(undefined4 *)(lVar10 + 0x20) = 0;
        do {
          iVar4 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
        if (bVar14) {
          lVar10 = 0;
        }
        else {
          uVar5 = param_1[0x1a];
          if (uVar5 == 0) {
            lVar12 = 0;
          }
          else {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = param_2 / uVar5;
            }
            lVar12 = *(long *)(*plVar2 + (ulong)(param_2 - uVar6 * uVar5) * 8);
            if (lVar12 != 0) {
LAB__text__004ab070:
              if (*(uint *)(lVar12 + 0x10) != param_2) goto code_r0x004ab07c;
              piVar3 = (int *)(lVar12 + 0x14);
              do {
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar14) {
                  *piVar3 = *piVar3 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
          }
LAB__text__004ab0a4:
          lVar10 = 0;
          if (lVar12 != 0) {
            lVar10 = lVar12 + -0x10;
          }
        }
        goto LAB__text__004ab0b0;
      }
      uVar6 = *(uint *)(lVar10 + 0x20);
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar6 / uVar5;
      }
      uVar11 = (ulong)(uVar6 - uVar9 * uVar5);
      lVar12 = *(long *)(*plVar2 + uVar11 * 8);
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = param_2 / uVar5;
      }
      uVar11 = (ulong)(param_2 - uVar6 * uVar5);
      lVar12 = *(long *)(*plVar2 + uVar11 * 8);
      uVar6 = param_2;
    }
    if (lVar12 != 0) {
      lVar13 = lVar12;
      do {
        if (*(uint *)(lVar13 + 0x10) == uVar6) {
          bVar14 = false;
          goto LAB__text__004ab018;
        }
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != 0);
    }
    *(long *)(lVar10 + 0x18) = lVar12;
    *(long **)(*(long *)(param_1 + 0x18) + uVar11 * 8) = plVar1;
    param_1[0x1c] = param_1[0x1c] + 1;
    *param_3 = 1;
  }
LAB__text__004ab0b0:
  do {
    iVar4 = *param_1;
    cVar7 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar14) {
      *param_1 = iVar4 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar4 == -1) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return lVar10;
code_r0x004ab07c:
  lVar12 = *(long *)(lVar12 + 8);
  if (lVar12 == 0) goto LAB__text__004ab0a4;
  goto LAB__text__004ab070;
}


