/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00412dc0; name: FUN_.text__00412dc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00412dc0(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  ulong *puVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  long *plVar14;
  bool bVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  int local_70 [4];
  
  plVar14 = _DAT_008a4888;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  if ((int)param_2 < 1) {
    return;
  }
  uVar24 = 0;
  bVar15 = false;
  plVar21 = _DAT_008a4880;
  lVar22 = _DAT_008a4878;
LAB__text__00412e24:
  do {
    uVar23 = *(ulong *)(param_1 + uVar24 * 8);
    if (uVar23 == 0xffffffffffffffff) {
      return;
    }
    lVar17 = *plVar14;
    puVar2 = (uint *)(lVar17 + (uVar23 & 0xfff) * 0x38 + 0x30);
    do {
      uVar16 = *puVar2;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *puVar2 = uVar16 & 0x7fffffff;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if ((uVar16 & 0x7fffffff) == 0) {
      uVar10 = *(uint *)(lVar17 + (uVar23 & 0xfff) * 0x38 + 0x1c);
      uVar16 = uVar10;
      if (uVar10 < 4) {
        uVar16 = 3;
      }
      do {
        uVar7 = uVar16;
        if (*plVar21 != 0) {
          uVar7 = uVar10;
        }
        plVar4 = (long *)(lVar22 + (ulong)uVar7 * 0x20);
        puVar18 = (ulong *)(plVar4 + 3);
        do {
          uVar19 = *puVar18;
          puVar3 = (ulong *)(*plVar4 + (uVar19 & plVar4[1]) * 0x10 + 8);
          uVar20 = *puVar3;
          lVar17 = uVar20 - uVar19;
          while (uVar20 == uVar19) {
            while (*puVar18 == uVar19) {
              cVar12 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(puVar18,0x10);
              if (bVar15) {
                *puVar18 = uVar19 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
              if (cVar12 == '\0') {
                uVar24 = uVar24 + 1;
                *(ulong *)(*plVar4 + (uVar19 & plVar4[1]) * 0x10) = uVar23;
                *puVar3 = uVar19 + 1;
                local_70[uVar10] = local_70[uVar10] + 1;
                bVar15 = true;
                if (uVar24 != param_2) goto LAB__text__00412e24;
                goto LAB__text__00412f2c;
              }
            }
            ClearExclusiveLocal();
            uVar20 = *puVar3;
            lVar17 = uVar20 - uVar19;
          }
        } while (lVar17 < 0 == SBORROW8(uVar20,uVar19));
        FUN__text__00405bf0();
        plVar21 = _DAT_008a4880;
        lVar22 = _DAT_008a4878;
      } while( true );
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 != param_2);
  if (!bVar15) {
    return;
  }
LAB__text__00412f2c:
  lVar22 = _DAT_008a48a8;
  piVar1 = _DAT_008a48a0;
  if (param_3 != 1) {
    if ((local_70[0] != 0) && (*_DAT_008a48a0 == 0)) {
      uVar16 = 3;
      if (*plVar21 != 0) {
        uVar16 = 0;
      }
      uVar24 = (ulong)uVar16;
      piVar5 = _DAT_008a48a0 + uVar24;
      piVar6 = _DAT_008a48a0 + uVar24;
      do {
        iVar9 = *piVar6;
        iVar11 = *(int *)(lVar22 + uVar24 * 4);
        iVar8 = iVar9 + local_70[0];
        if (iVar11 <= iVar9 + local_70[0]) {
          iVar8 = iVar11;
        }
        while (*piVar5 == iVar9) {
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar15) {
            *piVar5 = iVar8;
            cVar12 = ExclusiveMonitorsStatus();
          }
          if (cVar12 == '\0') {
            if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
              if (uVar16 - 3 < 2) {
                nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar16 - 3) * 0x28);
              }
              else {
                (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
              }
            }
            goto LAB__text__00413250;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB__text__00413250:
    lVar22 = _DAT_008a48a8;
    if ((local_70[1] != 0) && (piVar1[1] == 0)) {
      uVar16 = 3;
      if (*plVar21 != 0) {
        uVar16 = 1;
      }
      uVar24 = (ulong)uVar16;
      piVar5 = piVar1 + uVar24;
      do {
        iVar9 = piVar1[uVar24];
        iVar11 = *(int *)(lVar22 + uVar24 * 4);
        iVar8 = iVar9 + local_70[1];
        if (iVar11 <= iVar9 + local_70[1]) {
          iVar8 = iVar11;
        }
        while (*piVar5 == iVar9) {
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar15) {
            *piVar5 = iVar8;
            cVar12 = ExclusiveMonitorsStatus();
          }
          if (cVar12 == '\0') {
            if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
              if (uVar16 == 3) {
                nn::os::SignalEvent(_DAT_008a48b0);
              }
              else {
                (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
              }
            }
            goto LAB__text__0041330c;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB__text__0041330c:
    lVar22 = _DAT_008a48a8;
    if ((local_70[2] != 0) && (piVar1[2] == 0)) {
      uVar16 = 2;
      if (*plVar21 == 0) {
        uVar16 = 3;
      }
      uVar24 = (ulong)uVar16;
      piVar5 = piVar1 + uVar24;
      do {
        iVar9 = piVar1[uVar24];
        iVar11 = *(int *)(lVar22 + uVar24 * 4);
        iVar8 = iVar9 + local_70[2];
        if (iVar11 <= iVar9 + local_70[2]) {
          iVar8 = iVar11;
        }
        while (*piVar5 == iVar9) {
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar15) {
            *piVar5 = iVar8;
            cVar12 = ExclusiveMonitorsStatus();
          }
          if (cVar12 == '\0') {
            if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
              if (uVar16 - 3 < 2) {
                nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar16 - 3) * 0x28);
              }
              else {
                (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
              }
            }
            goto LAB__text__004133b8;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB__text__004133b8:
    lVar22 = _DAT_008a48a8;
    if (local_70[3] == 0) {
      return;
    }
    if (piVar1[3] != 0) {
      return;
    }
    do {
      iVar9 = piVar1[3];
      iVar8 = iVar9 + local_70[3];
      if (*(int *)(lVar22 + 0xc) <= iVar9 + local_70[3]) {
        iVar8 = *(int *)(lVar22 + 0xc);
      }
      while (piVar5 = piVar1 + 3, *piVar5 == iVar9) {
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar15) {
          *piVar5 = iVar8;
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 == '\0') {
          if (iVar8 <= iVar9) {
            return;
          }
          goto LAB__text__00413414;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  if (local_70[0] != 0) {
    uVar16 = 3;
    if (*plVar21 != 0) {
      uVar16 = 0;
    }
    uVar24 = (ulong)uVar16;
    piVar1 = _DAT_008a48a0 + uVar24;
    piVar5 = _DAT_008a48a0 + uVar24;
    do {
      iVar9 = *piVar5;
      iVar11 = *(int *)(lVar22 + uVar24 * 4);
      iVar8 = iVar9 + local_70[0];
      if (iVar11 <= iVar9 + local_70[0]) {
        iVar8 = iVar11;
      }
      while (*piVar1 == iVar9) {
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = iVar8;
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 == '\0') {
          if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
            if (uVar16 - 3 < 2) {
              nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar16 - 3) * 0x28);
            }
            else {
              (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
            }
          }
          goto LAB__text__00413080;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB__text__00413080:
  lVar22 = _DAT_008a48a8;
  if (local_70[1] != 0) {
    uVar16 = 3;
    if (*plVar21 != 0) {
      uVar16 = 1;
    }
    uVar24 = (ulong)uVar16;
    piVar1 = _DAT_008a48a0 + uVar24;
    piVar5 = _DAT_008a48a0 + uVar24;
    do {
      iVar9 = *piVar5;
      iVar11 = *(int *)(lVar22 + uVar24 * 4);
      iVar8 = iVar9 + local_70[1];
      if (iVar11 <= iVar9 + local_70[1]) {
        iVar8 = iVar11;
      }
      while (*piVar1 == iVar9) {
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = iVar8;
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 == '\0') {
          if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
            if (uVar16 == 3) {
              nn::os::SignalEvent(_DAT_008a48b0);
            }
            else {
              (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
            }
          }
          goto LAB__text__0041312c;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB__text__0041312c:
  lVar22 = _DAT_008a48a8;
  if (local_70[2] == 0) {
LAB__text__004131d4:
    lVar22 = _DAT_008a48a8;
    piVar1 = _DAT_008a48a0;
    if (local_70[3] == 0) {
      return;
    }
    piVar5 = _DAT_008a48a0 + 3;
    do {
      iVar9 = *piVar5;
      iVar8 = iVar9 + local_70[3];
      if (*(int *)(lVar22 + 0xc) <= iVar9 + local_70[3]) {
        iVar8 = *(int *)(lVar22 + 0xc);
      }
      while (piVar6 = piVar1 + 3, *piVar6 == iVar9) {
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar15) {
          *piVar6 = iVar8;
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 == '\0') {
          if (iVar8 <= iVar9) {
            return;
          }
LAB__text__00413414:
          nn::os::SignalEvent(_DAT_008a48b0);
          return;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  uVar16 = 2;
  if (*plVar21 == 0) {
    uVar16 = 3;
  }
  uVar24 = (ulong)uVar16;
  piVar1 = _DAT_008a48a0 + uVar24;
  piVar5 = _DAT_008a48a0 + uVar24;
  do {
    iVar9 = *piVar5;
    iVar11 = *(int *)(lVar22 + uVar24 * 4);
    iVar8 = iVar9 + local_70[2];
    if (iVar11 <= iVar9 + local_70[2]) {
      iVar8 = iVar11;
    }
    while (*piVar1 == iVar9) {
      cVar12 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar8;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 == '\0') {
        if (iVar8 - iVar9 != 0 && iVar9 <= iVar8) {
          if (uVar16 - 3 < 2) {
            nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar16 - 3) * 0x28);
          }
          else {
            (*(code *)*plVar21)(_DAT_008a48b8,uVar24,iVar8 - iVar9,plVar21[4]);
          }
        }
        goto LAB__text__004131d4;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


