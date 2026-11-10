/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00120250; name: FUN_.text__00120250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00120250(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      plVar12 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar12) {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
        if (plVar12 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          lVar7 = *(long *)(*(long *)(lVar8 + 0x60) + 0x90);
          goto joined_r0x00120300;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar8 = 0;
  lVar7 = *(long *)(_DAT_00000060 + 0x90);
joined_r0x00120300:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar12 = *(long **)(lVar8 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar12) {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
        if (plVar12 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar11 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          lVar8 = *(long *)(*(long *)(lVar11 + 0x60) + 0x98);
          goto joined_r0x001203c0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar11 = 0;
  lVar8 = *(long *)(_DAT_00000060 + 0x98);
joined_r0x001203c0:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      plVar12 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar12) {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
        if (plVar12 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar7 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x60) + -8) + 0x18))();
            iVar10 = *piVar1;
            goto joined_r0x00120480;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x1b8);
  *(long *)(param_1 + 0x1b8) = lVar8;
  if (lVar11 != 0) goto LAB__text__0012053c;
  goto LAB__text__0012054c;
joined_r0x001205d0:
  do {
    if (iVar10 == 0) {
LAB__text__00120634:
      lVar11 = 0;
      lVar9 = _DAT_00000060;
      goto joined_r0x0012063c;
    }
    plVar12 = *(long **)(lVar8 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar12) {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
      if (plVar12 == (long *)0x0) goto LAB__text__00120634;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00120624;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00120624:
      bVar6 = false;
    }
    iVar10 = iVar2;
  } while (!bVar6);
  lVar11 = 0;
  if (*(long *)(lVar8 + 0x60) != 0) {
    lVar11 = *(long *)(lVar8 + 0x60) + -0x50;
  }
  lVar9 = *(long *)(lVar11 + 0x60);
joined_r0x0012063c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar9 + 0x90);
  *(long *)(lVar9 + 0x90) = lVar7;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  goto LAB__text__0012068c;
joined_r0x00120480:
  do {
    if (iVar10 == 0) {
LAB__text__001204e4:
      lVar11 = 0;
      lVar9 = _DAT_00000060;
      goto joined_r0x001204ec;
    }
    plVar12 = *(long **)(lVar7 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar12) {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
      if (plVar12 == (long *)0x0) goto LAB__text__001204e4;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__001204d4;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__001204d4:
      bVar6 = false;
    }
    iVar10 = iVar2;
  } while (!bVar6);
  lVar11 = 0;
  if (*(long *)(lVar7 + 0x60) != 0) {
    lVar11 = *(long *)(lVar7 + 0x60) + -0x50;
  }
  lVar9 = *(long *)(lVar11 + 0x60);
joined_r0x001204ec:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar9 + 0x98);
  *(long *)(lVar9 + 0x98) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
LAB__text__0012053c:
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
LAB__text__0012054c:
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar12 = *(long **)(lVar8 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar12) {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
        if (plVar12 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar8 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
            iVar10 = *piVar1;
            goto joined_r0x001205d0;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x1c0);
  *(long *)(param_1 + 0x1c0) = lVar7;
  if (lVar11 != 0) {
LAB__text__0012068c:
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar9 = *param_2;
  lVar11 = 0;
  if (lVar9 == 0) {
LAB__text__00120724:
    lVar9 = *(long *)(*(long *)(lVar11 + 0x60) + 0x90);
    *(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x90) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        plVar12 = *(long **)(lVar9 + 0x58);
        plVar4 = (long *)FUN__text__00121c5c();
        if (plVar4 != plVar12) {
          do {
            plVar12 = (long *)*plVar12;
          } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
          if (plVar12 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB__text__00120724;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar11 = 0;
    lVar9 = *(long *)(_DAT_00000060 + 0x90);
    *(undefined8 *)(_DAT_00000060 + 0x90) = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  lVar9 = *param_2;
  lVar11 = 0;
  if (lVar9 == 0) {
LAB__text__001207d8:
    lVar9 = *(long *)(*(long *)(lVar11 + 0x60) + 0x98);
    *(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x98) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        plVar12 = *(long **)(lVar9 + 0x58);
        plVar4 = (long *)FUN__text__00121c5c();
        if (plVar4 != plVar12) {
          do {
            plVar12 = (long *)*plVar12;
          } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
          if (plVar12 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB__text__001207d8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar11 = 0;
    lVar9 = *(long *)(_DAT_00000060 + 0x98);
    *(undefined8 *)(_DAT_00000060 + 0x98) = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


