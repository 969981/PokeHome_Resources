/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001208c0; name: FUN_.text__001208c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001208c0(long param_1,long *param_2)

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
  long lVar13;
  
  lVar7 = *param_2;
  lVar8 = 0;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x54) != 0) {
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
            lVar7 = *param_2;
            goto joined_r0x0012096c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
    lVar7 = *param_2;
joined_r0x0012096c:
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
          if (cVar3 != '\0') goto LAB__text__001209d8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__001209d8:
          bVar6 = false;
        }
        if (bVar6) {
          lVar11 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar11 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          lVar7 = *(long *)(*(long *)(lVar11 + 0x60) + 0x58);
          goto joined_r0x00120e98;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
  }
  lVar11 = 0;
  lVar7 = *(long *)(_DAT_00000060 + 0x58);
joined_r0x00120e98:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    iVar10 = *(int *)(lVar11 + 0x54);
    do {
      plVar12 = *(long **)(lVar11 + 0x58);
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
          lVar13 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar13 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          lVar11 = *(long *)(*(long *)(lVar13 + 0x60) + 0x60);
          goto joined_r0x00120aa0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar13 = 0;
  lVar11 = *(long *)(_DAT_00000060 + 0x60);
joined_r0x00120aa0:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
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
            goto joined_r0x00120b60;
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
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar11;
  if (lVar13 == 0) goto LAB__text__00120c2c;
  goto LAB__text__00120c1c;
joined_r0x00120b60:
  do {
    if (iVar10 == 0) {
LAB__text__00120bc4:
      lVar13 = 0;
      lVar9 = _DAT_00000060;
      goto joined_r0x00120bcc;
    }
    plVar12 = *(long **)(lVar7 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar12) {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12 != plVar4 && plVar12 != (long *)0x0);
      if (plVar12 == (long *)0x0) goto LAB__text__00120bc4;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00120bb4;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00120bb4:
      bVar6 = false;
    }
    iVar10 = iVar2;
  } while (!bVar6);
  lVar13 = 0;
  if (*(long *)(lVar7 + 0x60) != 0) {
    lVar13 = *(long *)(lVar7 + 0x60) + -0x50;
  }
  lVar9 = *(long *)(lVar13 + 0x60);
joined_r0x00120bcc:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar9 + 0x60);
  *(long *)(lVar9 + 0x60) = lVar11;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
LAB__text__00120c1c:
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
LAB__text__00120c2c:
  if (lVar11 == 0) {
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar7;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x60);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(lVar9 + 0x58);
    *(long *)(lVar9 + 0x58) = lVar7;
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  lVar9 = *param_2;
  lVar13 = 0;
  if (lVar9 == 0) {
LAB__text__00120ce8:
    lVar9 = *(long *)(*(long *)(lVar13 + 0x60) + 0x58);
    *(undefined8 *)(*(long *)(lVar13 + 0x60) + 0x58) = 0;
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
            lVar13 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB__text__00120ce8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar13 = 0;
    lVar9 = *(long *)(_DAT_00000060 + 0x58);
    *(undefined8 *)(_DAT_00000060 + 0x58) = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  lVar9 = *param_2;
  lVar13 = 0;
  if (lVar9 == 0) {
LAB__text__00120d98:
    lVar9 = *(long *)(*(long *)(lVar13 + 0x60) + 0x60);
    *(undefined8 *)(*(long *)(lVar13 + 0x60) + 0x60) = 0;
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
            lVar13 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB__text__00120d98;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar13 = 0;
    lVar9 = *(long *)(_DAT_00000060 + 0x60);
    *(undefined8 *)(_DAT_00000060 + 0x60) = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00120e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


