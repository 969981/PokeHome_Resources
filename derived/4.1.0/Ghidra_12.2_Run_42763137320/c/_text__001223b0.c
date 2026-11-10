/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001223b0; name: FUN_.text__001223b0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000060 : 0x001228e8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN__text__001223b0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  long local_78;
  long local_70;
  long local_68;
  long local_48;
  
  if (*(uint *)(param_1[0xc] + 0x20) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x001223f0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001223fc +
              (ulong)*(byte *)((ulong)*(uint *)(param_1[0xc] + 0x20) + 0x7217f5) * 4))();
    return;
  }
  plVar6 = (long *)param_1[0xc];
  lVar8 = *plVar6;
  if ((lVar8 != 0) && (plVar6 = (long *)param_1[0xc], *(int *)(lVar8 + 0x54) != 0)) {
    lVar9 = *plVar6;
    lVar8 = 0;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) != 0) {
        piVar15 = (int *)(lVar9 + 0x54);
        iVar10 = *(int *)(lVar9 + 0x54);
        do {
          plVar13 = *(long **)(lVar9 + 0x58);
          plVar6 = (long *)FUN__text__00121b6c();
          if (plVar6 != plVar13) {
            do {
              plVar13 = (long *)*plVar13;
            } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
            if (plVar13 == (long *)0x0) break;
          }
          iVar2 = *piVar15;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB__text__00122754;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__00122754:
            bVar4 = false;
          }
          if (bVar4) {
            lVar8 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB__text__0012277c;
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
      lVar8 = 0;
    }
LAB__text__0012277c:
    (**(code **)(*param_1 + 0x10))(&local_68,param_1);
    local_48 = local_68;
    local_68 = 0;
    FUN__text__00120250(lVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    plVar6 = (long *)param_1[0xc];
  }
  lVar8 = plVar6[6];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar8 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
            lVar8 = *(long *)(param_1[0xc] + 0x30);
            if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) goto LAB__text__001228e8;
            piVar15 = (int *)(lVar8 + 0x54);
            iVar10 = *(int *)(lVar8 + 0x54);
            goto LAB__text__00122884;
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
  if ((*(long *)param_1[0xc] != 0) && (*(int *)(*(long *)param_1[0xc] + 0x54) != 0)) {
    lVar8 = *(long *)param_1[0xc];
    lVar5 = 0;
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x54) != 0) {
        piVar15 = (int *)(lVar8 + 0x54);
        iVar10 = *(int *)(lVar8 + 0x54);
        do {
          plVar13 = *(long **)(lVar8 + 0x58);
          plVar6 = (long *)FUN__text__00121b6c();
          if (plVar6 != plVar13) {
            do {
              plVar13 = (long *)*plVar13;
            } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
            if (plVar13 == (long *)0x0) break;
          }
          iVar2 = *piVar15;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB__text__001229d8;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__001229d8:
            bVar4 = false;
          }
          if (bVar4) {
            lVar5 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar5 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            goto LAB__text__00122a00;
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
      lVar5 = 0;
    }
LAB__text__00122a00:
    (**(code **)(*param_1 + 0x10))(&local_68,param_1);
    local_78 = local_68;
    local_68 = 0;
    FUN__text__00120ec0(lVar5,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    lVar8 = local_68;
    if (local_68 != 0) goto LAB__text__00122a4c;
    goto LAB__text__00122a58;
  }
  goto LAB__text__00122a68;
LAB__text__00122884:
  do {
    plVar13 = *(long **)(lVar8 + 0x58);
    plVar6 = (long *)FUN__text__00121c5c();
    if (plVar6 != plVar13) {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
      if (plVar13 == (long *)0x0) break;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__001228d4;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__001228d4:
      bVar4 = false;
    }
    if (bVar4) {
      lVar9 = 0;
      if (*(long *)(lVar8 + 0x60) != 0) {
        lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
      goto joined_r0x00122bb0;
    }
    iVar10 = iVar2;
  } while (iVar2 != 0);
LAB__text__001228e8:
  lVar9 = 0;
  lVar8 = *(long *)(_DAT_00000060 + 0xa0);
joined_r0x00122bb0:
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB__text__00122c60:
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  else {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00122948;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00122948:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar8 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          }
          lVar8 = *(long *)(param_1[0xc] + 0x38);
          if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) goto LAB__text__00123544;
          piVar15 = (int *)(lVar8 + 0x54);
          iVar10 = *(int *)(lVar8 + 0x54);
          goto LAB__text__00122bf8;
        }
        break;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
    if (lVar9 != 0) goto LAB__text__00122c60;
  }
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  lVar8 = *(long *)(param_1[0xc] + 0x30);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00122ce8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00122ce8:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
        lVar8 = *(long *)(lVar9 + 0x60);
        goto joined_r0x00122f70;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar9 = 0;
  lVar5 = *(long *)(_DAT_00000060 + 0xa0);
  lVar8 = _DAT_00000060;
joined_r0x00122f70:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar5 = local_68;
  local_68 = 0;
  *(long *)(lVar8 + 0xa0) = lVar5;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  lVar8 = *(long *)(param_1[0xc] + 0x30);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00122db8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00122db8:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa8);
        lVar8 = *(long *)(lVar9 + 0x60);
        goto joined_r0x00122f90;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar9 = 0;
  lVar5 = *(long *)(_DAT_00000060 + 0xa8);
  lVar8 = _DAT_00000060;
joined_r0x00122f90:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar5 = local_68;
  local_68 = 0;
  *(long *)(lVar8 + 0xa8) = lVar5;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  lVar8 = param_1[0xc];
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar8 + 0x88);
  *(long *)(lVar8 + 0x88) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(param_1[0xc] + 0x90);
  *(undefined8 *)(param_1[0xc] + 0x90) = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(param_1[0xc] + 0x98);
  *(undefined8 *)(param_1[0xc] + 0x98) = 0;
  goto joined_r0x001238c8;
LAB__text__00123230:
  do {
    plVar13 = *(long **)(lVar8 + 0x58);
    plVar6 = (long *)FUN__text__00121c5c();
    if (plVar6 != plVar13) {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
      if (plVar13 == (long *)0x0) break;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00123278;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00123278:
      bVar4 = false;
    }
    if (bVar4) {
      lVar9 = 0;
      if (*(long *)(lVar8 + 0x60) != 0) {
        lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
      goto joined_r0x00123944;
    }
    iVar10 = iVar2;
  } while (iVar2 != 0);
LAB__text__00123288:
  lVar9 = 0;
  lVar8 = *(long *)(_DAT_00000060 + 0xa0);
joined_r0x00123944:
  if (lVar8 == 0) {
LAB__text__00123948:
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    lVar8 = 0;
    bVar4 = true;
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar15 = (int *)(lVar8 + 0x54);
      lVar5 = lVar8;
      iVar10 = *(int *)(lVar8 + 0x54);
LAB__text__001232cc:
      do {
        plVar13 = *(long **)(lVar5 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        lVar8 = lVar5;
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__00123314;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__00123314:
          bVar4 = false;
        }
        if (bVar4) {
          if (*(long *)(lVar5 + 0x60) == 0) break;
          (**(code **)(*(long *)(*(long *)(lVar5 + 0x60) + -8) + 0x18))();
          iVar10 = *piVar15;
          do {
            if (iVar10 == 0) {
LAB__text__0012339c:
              lVar9 = 0;
              goto LAB__text__001233b4;
            }
            plVar13 = *(long **)(lVar5 + 0x58);
            plVar6 = (long *)FUN__text__00121c5c();
            if (plVar6 != plVar13) {
              do {
                plVar13 = (long *)*plVar13;
              } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
              if (plVar13 == (long *)0x0) goto LAB__text__0012339c;
            }
            iVar2 = *piVar15;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar4) {
                *piVar15 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB__text__0012338c;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0012338c:
              bVar4 = false;
            }
            iVar10 = iVar2;
          } while (!bVar4);
          lVar9 = 0;
          if (*(long *)(lVar5 + 0x60) != 0) {
            lVar9 = *(long *)(lVar5 + 0x60) + -0x50;
          }
LAB__text__001233b4:
          lVar11 = *(long *)(param_1[0xc] + 0x38);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
            piVar1 = (int *)(lVar11 + 0x54);
            iVar10 = *(int *)(lVar11 + 0x54);
            do {
              plVar13 = *(long **)(lVar11 + 0x58);
              plVar6 = (long *)FUN__text__00121c5c();
              if (plVar6 != plVar13) {
                do {
                  plVar13 = (long *)*plVar13;
                } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
                if (plVar13 == (long *)0x0) break;
              }
              iVar2 = *piVar1;
              if (iVar2 == iVar10) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB__text__00123414;
                bVar4 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__00123414:
                bVar4 = false;
              }
              if (bVar4) {
                lVar11 = *(long *)(lVar11 + 0x60);
                if (lVar11 != 0) {
                  bVar4 = lVar9 == lVar11 + -0x50;
                  (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
                  goto LAB__text__00123454;
                }
                break;
              }
              iVar10 = iVar2;
            } while (iVar2 != 0);
          }
          bVar4 = lVar9 == 0;
LAB__text__00123454:
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          }
          if (bVar4) {
            plVar6 = (long *)(lVar5 + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            iVar10 = *piVar15;
            goto joined_r0x00123ab0;
          }
          iVar10 = *piVar15;
          do {
            if (iVar10 == 0) {
              lVar9 = 0;
              goto LAB__text__001234e4;
            }
            plVar13 = *(long **)(lVar5 + 0x58);
            plVar6 = (long *)FUN__text__00121c5c();
            if (plVar6 != plVar13) {
              do {
                plVar13 = (long *)*plVar13;
              } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
              lVar9 = 0;
              if (plVar13 == (long *)0x0) goto LAB__text__001234e4;
            }
            iVar2 = *piVar15;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar4) {
                *piVar15 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB__text__001234bc;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__001234bc:
              bVar4 = false;
            }
            iVar10 = iVar2;
          } while (!bVar4);
          lVar9 = 0;
          if (*(long *)(lVar5 + 0x60) != 0) {
            lVar9 = *(long *)(lVar5 + 0x60) + -0x50;
          }
LAB__text__001234e4:
          lVar8 = *(long *)(*(long *)(lVar9 + 0x60) + 0x98);
          if (lVar8 == 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
            goto LAB__text__00123948;
          }
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          iVar10 = *(int *)(lVar8 + 0x54);
          bVar4 = false;
          piVar15 = (int *)(lVar8 + 0x54);
          lVar5 = lVar8;
          if (iVar10 == 0) goto LAB__text__00123968;
          goto LAB__text__001232cc;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
      bVar4 = false;
      bVar12 = true;
      plVar6 = (long *)param_1[0xc];
      lVar9 = *plVar6;
      lVar5 = 0;
      goto joined_r0x00123bd4;
    }
    bVar4 = false;
  }
LAB__text__00123968:
  bVar12 = true;
  plVar6 = (long *)param_1[0xc];
  lVar9 = *plVar6;
  lVar5 = 0;
joined_r0x00123bd4:
  if ((lVar9 != 0) && (plVar6 = (long *)param_1[0xc], *(int *)(lVar9 + 0x54) != 0)) {
    lVar11 = *plVar6;
    lVar9 = 0;
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x54) != 0) {
        piVar15 = (int *)(lVar11 + 0x54);
        iVar10 = *(int *)(lVar11 + 0x54);
        do {
          plVar13 = *(long **)(lVar11 + 0x58);
          plVar6 = (long *)FUN__text__00121b6c();
          if (plVar6 != plVar13) {
            do {
              plVar13 = (long *)*plVar13;
            } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
            if (plVar13 == (long *)0x0) break;
          }
          iVar2 = *piVar15;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar7) {
              *piVar15 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB__text__001239e0;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__001239e0:
            bVar7 = false;
          }
          if (bVar7) {
            lVar9 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar9 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            goto LAB__text__00123a08;
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
      lVar9 = 0;
    }
LAB__text__00123a08:
    (**(code **)(*param_1 + 0x10))(&local_68,param_1);
    local_70 = local_68;
    local_68 = 0;
    FUN__text__00120ec0(lVar9,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    plVar6 = (long *)param_1[0xc];
  }
  *(undefined4 *)(plVar6 + 5) = 0;
  if (!bVar4) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (!bVar12) goto LAB__text__00122a58;
  goto LAB__text__00122a68;
joined_r0x00123ab0:
  do {
    if (iVar10 == 0) goto LAB__text__00123ba0;
    plVar14 = *(long **)(lVar5 + 0x58);
    plVar13 = (long *)FUN__text__00121c5c();
    if (plVar13 != plVar14) {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14 != plVar13 && plVar14 != (long *)0x0);
      if (plVar14 == (long *)0x0) {
        bVar4 = false;
        plVar6 = (long *)param_1[0xc];
        lVar9 = *plVar6;
        bVar12 = false;
        goto joined_r0x00123bd4;
      }
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00123afc;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00123afc:
      bVar4 = false;
    }
    iVar10 = iVar2;
  } while (!bVar4);
  if (*(long *)(lVar5 + 0x60) == 0) {
LAB__text__00123ba0:
    bVar4 = false;
    bVar12 = false;
    plVar6 = (long *)param_1[0xc];
    lVar9 = *plVar6;
    goto joined_r0x00123bd4;
  }
  (**(code **)(*(long *)(*(long *)(lVar5 + 0x60) + -8) + 0x18))();
  iVar10 = *piVar15;
  do {
    if (iVar10 == 0) {
      lVar8 = 0;
      goto LAB__text__00123bec;
    }
    plVar14 = *(long **)(lVar5 + 0x58);
    plVar13 = (long *)FUN__text__00121c5c();
    if (plVar13 != plVar14) {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14 != plVar13 && plVar14 != (long *)0x0);
      lVar8 = 0;
      if (plVar14 == (long *)0x0) goto LAB__text__00123bec;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00123b88;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00123b88:
      bVar4 = false;
    }
    iVar10 = iVar2;
  } while (!bVar4);
  lVar8 = 0;
  if (*(long *)(lVar5 + 0x60) != 0) {
    lVar8 = *(long *)(lVar5 + 0x60) + -0x50;
  }
LAB__text__00123bec:
  lVar9 = *(long *)(*(long *)(lVar8 + 0x60) + 0x98);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  iVar10 = *piVar15;
  do {
    if (iVar10 == 0) {
LAB__text__00123c8c:
      lVar8 = 0;
      goto LAB__text__00123ca4;
    }
    plVar14 = *(long **)(lVar5 + 0x58);
    plVar13 = (long *)FUN__text__00121c5c();
    if (plVar13 != plVar14) {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14 != plVar13 && plVar14 != (long *)0x0);
      if (plVar14 == (long *)0x0) goto LAB__text__00123c8c;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00123c7c;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00123c7c:
      bVar4 = false;
    }
    iVar10 = iVar2;
  } while (!bVar4);
  lVar8 = 0;
  if (*(long *)(lVar5 + 0x60) != 0) {
    lVar8 = *(long *)(lVar5 + 0x60) + -0x50;
  }
LAB__text__00123ca4:
  lVar16 = *(long *)(lVar8 + 0x60);
  lVar11 = *(long *)(lVar16 + 0x98);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  lVar11 = local_68;
  local_68 = 0;
  *(long *)(lVar16 + 0x98) = lVar11;
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  lVar8 = param_1[0xc];
  lVar11 = *(long *)(lVar8 + 0x30);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar8 + 0x88);
  *(long *)(lVar8 + 0x88) = lVar11;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
  }
  lVar11 = param_1[0xc];
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar6);
  lVar8 = *(long *)(lVar11 + 0x90);
  *(long *)(lVar11 + 0x90) = lVar5;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar8 = param_1[0xc];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar8 + 0x98);
  *(long *)(lVar8 + 0x98) = lVar9;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar15 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      plVar13 = *(long **)(lVar9 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00123dd4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00123dd4:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar9 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
          goto LAB__text__00123ee8;
        }
        break;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  lVar11 = *(long *)(param_1[0xc] + 0x30);
  lVar8 = 0;
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x54) != 0) {
      piVar15 = (int *)(lVar11 + 0x54);
      iVar10 = *(int *)(lVar11 + 0x54);
      do {
        plVar13 = *(long **)(lVar11 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__00123e74;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__00123e74:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar8 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB__text__00123e9c;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
  }
LAB__text__00123e9c:
  lVar16 = *(long *)(lVar8 + 0x60);
  lVar11 = *(long *)(lVar16 + 0xa8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  lVar11 = local_68;
  local_68 = 0;
  *(long *)(lVar16 + 0xa8) = lVar11;
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (lVar9 != 0) {
LAB__text__00123ee8:
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  lVar8 = lVar5;
LAB__text__00122a4c:
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
LAB__text__00122a58:
  plVar6 = (long *)(lVar5 + 0x48);
  lVar8 = *plVar6;
  goto LAB__text__00122a60;
  while (iVar10 = iVar2, iVar2 != 0) {
LAB__text__00122b34:
    plVar13 = *(long **)(lVar8 + 0x58);
    plVar6 = (long *)FUN__text__00121c5c();
    if (plVar6 != plVar13) {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
      if (plVar13 == (long *)0x0) break;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00122b84;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00122b84:
      bVar4 = false;
    }
    if (bVar4) {
      if (*(long *)(lVar8 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
      }
      break;
    }
  }
LAB__text__00122e90:
  lVar8 = *(long *)(param_1[0xc] + 0x98);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00122ef8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00122ef8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar8 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
        }
        break;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  goto LAB__text__00122f20;
  while (iVar10 = iVar2, iVar2 != 0) {
LAB__text__00122bf8:
    plVar13 = *(long **)(lVar8 + 0x58);
    plVar6 = (long *)FUN__text__00121c5c();
    if (plVar6 != plVar13) {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
      if (plVar13 == (long *)0x0) break;
    }
    iVar2 = *piVar15;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00122c48;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00122c48:
      bVar4 = false;
    }
    if (bVar4) {
      if (*(long *)(lVar8 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
        lVar8 = *(long *)(param_1[0xc] + 0x30);
        if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) goto LAB__text__00123288;
        piVar15 = (int *)(lVar8 + 0x54);
        iVar10 = *(int *)(lVar8 + 0x54);
        goto LAB__text__00123230;
      }
      break;
    }
  }
LAB__text__00123544:
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  lVar9 = *(long *)(param_1[0xc] + 0x30);
  lVar8 = 0;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar15 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        plVar13 = *(long **)(lVar9 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__001235b8;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__001235b8:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB__text__001235e0;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
  }
LAB__text__001235e0:
  lVar5 = *(long *)(*(long *)(lVar8 + 0x60) + 0xa0);
  lVar9 = 0;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x54) != 0) {
      piVar15 = (int *)(lVar5 + 0x54);
      iVar10 = *(int *)(lVar5 + 0x54);
      do {
        plVar13 = *(long **)(lVar5 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__00123648;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__00123648:
          bVar4 = false;
        }
        if (bVar4) {
          lVar9 = 0;
          if (*(long *)(lVar5 + 0x60) != 0) {
            lVar9 = *(long *)(lVar5 + 0x60) + -0x50;
          }
          goto LAB__text__00123670;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar9 = 0;
  }
LAB__text__00123670:
  lVar11 = *(long *)(lVar9 + 0x60);
  lVar5 = *(long *)(lVar11 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar5 = local_68;
  local_68 = 0;
  *(long *)(lVar11 + 0x90) = lVar5;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  lVar8 = param_1[0xc];
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar8 + 0x88);
  *(long *)(lVar8 + 0x88) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(param_1[0xc] + 0x90);
  *(undefined8 *)(param_1[0xc] + 0x90) = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar9 = *(long *)(param_1[0xc] + 0x30);
  lVar8 = 0;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar15 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        plVar13 = *(long **)(lVar9 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__0012377c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__0012377c:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB__text__001237a4;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
  }
LAB__text__001237a4:
  lVar9 = param_1[0xc];
  lVar5 = *(long *)(*(long *)(lVar8 + 0x60) + 0xa0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar9 + 0x98);
  *(long *)(lVar9 + 0x98) = lVar5;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  (**(code **)(*param_1 + 0x10))(&local_68,param_1);
  lVar9 = *(long *)(param_1[0xc] + 0x30);
  lVar8 = 0;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar15 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        plVar13 = *(long **)(lVar9 + 0x58);
        plVar6 = (long *)FUN__text__00121c5c();
        if (plVar6 != plVar13) {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
          if (plVar13 == (long *)0x0) break;
        }
        iVar2 = *piVar15;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__00123868;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__00123868:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB__text__00123890;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
  }
LAB__text__00123890:
  lVar5 = *(long *)(lVar8 + 0x60);
  lVar9 = *(long *)(lVar5 + 0xa0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar9 = local_68;
  local_68 = 0;
  *(long *)(lVar5 + 0xa0) = lVar9;
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = local_68;
joined_r0x001238c8:
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 0x48);
    lVar8 = *plVar6;
LAB__text__00122a60:
    (**(code **)(lVar8 + 0x18))(plVar6);
  }
LAB__text__00122a68:
  *(undefined1 *)(param_1[0xc] + 0x18) = 0;
  *(undefined4 *)(param_1[0xc] + 0x44) = 1;
  *(undefined4 *)(param_1[0xc] + 0x4c) = *(undefined4 *)(param_1[0xc] + 0x24);
  *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)(param_1[0xc] + 0x28);
  lVar8 = *(long *)(param_1[0xc] + 0x88);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar15 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar13 = *(long **)(lVar8 + 0x58);
      plVar6 = (long *)FUN__text__00121c5c();
      if (plVar6 != plVar13) {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13 != plVar6 && plVar13 != (long *)0x0);
        if (plVar13 == (long *)0x0) break;
      }
      iVar2 = *piVar15;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar8 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
            lVar8 = *(long *)(param_1[0xc] + 0x90);
            if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) goto LAB__text__00122e90;
            piVar15 = (int *)(lVar8 + 0x54);
            iVar10 = *(int *)(lVar8 + 0x54);
            goto LAB__text__00122b34;
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
LAB__text__00122f20:
  (**(code **)(*param_1 + 0x50))(param_1,*(undefined4 *)(param_1[0xc] + 0x4c));
  return;
}


