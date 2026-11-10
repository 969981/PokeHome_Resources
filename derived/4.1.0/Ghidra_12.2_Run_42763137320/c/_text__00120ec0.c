/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00120ec0; name: FUN_.text__00120ec0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000060 : 0x00120fdc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN__text__00120ec0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = *(long *)(param_1 + 0x1c8);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      plVar11 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar9) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar7 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x60) + -8) + 0x18))();
            lVar7 = *(long *)(param_1 + 0x1d0);
            if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) goto LAB__text__00120fdc;
            piVar1 = (int *)(lVar7 + 0x54);
            iVar9 = *(int *)(lVar7 + 0x54);
            goto LAB__text__00120f80;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x1c8) = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x1d0);
  *(long *)(param_1 + 0x1d0) = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar8 = *param_2;
  lVar7 = 0;
  if (lVar8 == 0) {
LAB__text__001212c8:
    lVar8 = *(long *)(*(long *)(lVar7 + 0x60) + 0x90);
    *(undefined8 *)(*(long *)(lVar7 + 0x60) + 0x90) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        plVar11 = *(long **)(lVar8 + 0x58);
        plVar4 = (long *)FUN__text__00121c5c();
        if (plVar4 != plVar11) {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
          if (plVar11 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            goto LAB__text__001212c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
    lVar7 = 0;
    lVar8 = *(long *)(_DAT_00000060 + 0x90);
    *(undefined8 *)(_DAT_00000060 + 0x90) = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      plVar11 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar9) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          lVar7 = *(long *)(*(long *)(lVar8 + 0x60) + 0x98);
          *(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x98) = 0;
          goto joined_r0x00121384;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
  lVar8 = 0;
  lVar7 = *(long *)(_DAT_00000060 + 0x98);
  *(undefined8 *)(_DAT_00000060 + 0x98) = 0;
joined_r0x00121384:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
LAB__text__001213ac:
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar7 = *param_2;
joined_r0x001211a0:
  if (lVar7 == 0) {
    lVar7 = *(long *)(_DAT_00000060 + 0x88);
    *(undefined8 *)(_DAT_00000060 + 0x88) = 0;
  }
  else {
    if (*(int *)(lVar7 + 0x54) != 0) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        plVar11 = *(long **)(lVar7 + 0x58);
        plVar4 = (long *)FUN__text__00121c5c();
        if (plVar4 != plVar11) {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
          if (plVar11 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            lVar7 = *(long *)(*(long *)(lVar8 + 0x60) + 0x88);
            *(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x88) = 0;
            goto joined_r0x00121450;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
    lVar7 = *(long *)(_DAT_00000060 + 0x88);
    *(undefined8 *)(_DAT_00000060 + 0x88) = 0;
  }
  lVar8 = 0;
joined_r0x00121450:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x001211dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
LAB__text__00120f80:
  do {
    plVar11 = *(long **)(lVar7 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar11) {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
      if (plVar11 == (long *)0x0) break;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar9) {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00120fc8;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00120fc8:
      bVar6 = false;
    }
    if (bVar6) {
      lVar8 = 0;
      if (*(long *)(lVar7 + 0x60) != 0) {
        lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
      }
      lVar10 = *param_2;
      lVar7 = *(long *)(lVar8 + 0x60);
      goto joined_r0x001214a0;
    }
    iVar9 = iVar2;
  } while (iVar2 != 0);
LAB__text__00120fdc:
  lVar8 = 0;
  lVar10 = *param_2;
  lVar7 = _DAT_00000060;
joined_r0x001214a0:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar7 + 0x98);
  *(long *)(lVar7 + 0x98) = lVar10;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      plVar11 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar9) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00121084;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00121084:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = 0;
        if (*(long *)(lVar7 + 0x60) != 0) {
          lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
        }
        lVar10 = *(long *)(param_1 + 0x1d0);
        lVar7 = *(long *)(lVar8 + 0x60);
        goto joined_r0x001214c0;
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
  lVar8 = 0;
  lVar10 = *(long *)(param_1 + 0x1d0);
  lVar7 = _DAT_00000060;
joined_r0x001214c0:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar7 + 0x90);
  *(long *)(lVar7 + 0x90) = lVar10;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      plVar11 = *(long **)(lVar7 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar9) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00121138;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00121138:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = 0;
        if (*(long *)(lVar7 + 0x60) != 0) {
          lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
        }
        lVar7 = *(long *)(*(long *)(lVar8 + 0x60) + 0x98);
        *(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x98) = 0;
        goto joined_r0x001214e4;
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
  lVar8 = 0;
  lVar7 = *(long *)(_DAT_00000060 + 0x98);
  *(undefined8 *)(_DAT_00000060 + 0x98) = 0;
joined_r0x001214e4:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x1d0);
  *(long *)(param_1 + 0x1d0) = lVar7;
  if (lVar8 == 0) {
    lVar7 = *param_2;
    goto joined_r0x001211a0;
  }
  goto LAB__text__001213ac;
}


