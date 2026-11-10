/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00123f00; name: FUN_.text__00123f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00123f00(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_60;
  long local_58;
  long local_38;
  
  lVar8 = *(long *)(param_1[0xc] + 0x88);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
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
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar8 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
            lVar6 = param_1[0xc];
            lVar8 = *(long *)(lVar6 + 0x88);
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
              lVar6 = param_1[0xc];
            }
            lVar9 = *(long *)(lVar6 + 0x90);
            if (lVar9 != 0) {
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              lVar6 = param_1[0xc];
            }
            lVar6 = *(long *)(lVar6 + 0x98);
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
            }
            if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) goto LAB__text__001241f0;
            piVar1 = (int *)(lVar9 + 0x54);
            iVar10 = *(int *)(lVar9 + 0x54);
            goto LAB__text__00124010;
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
  if ((*(long *)param_1[0xc] == 0) || (*(int *)(*(long *)param_1[0xc] + 0x54) == 0))
  goto LAB__text__001244b0;
  lVar6 = *(long *)param_1[0xc];
  lVar8 = 0;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x54) != 0) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar10 = *(int *)(lVar6 + 0x54);
      do {
        plVar11 = *(long **)(lVar6 + 0x58);
        plVar4 = (long *)FUN__text__00121b6c();
        if (plVar4 != plVar11) {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
          if (plVar11 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB__text__001240e8;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB__text__001240e8:
          bVar7 = false;
        }
        if (bVar7) {
          lVar8 = 0;
          if (*(long *)(lVar6 + 0x60) != 0) {
            lVar8 = *(long *)(lVar6 + 0x60) + -0x50;
          }
          goto LAB__text__00124110;
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar8 = 0;
  }
LAB__text__00124110:
  (**(code **)(*param_1 + 0x10))(&local_58,param_1);
  local_38 = local_58;
  local_58 = 0;
  FUN__text__001214f0(lVar8,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  goto LAB__text__001244a0;
joined_r0x00124184:
  do {
    if (iVar10 == 0) {
LAB__text__001241e8:
      lVar12 = 0;
      goto LAB__text__00124638;
    }
    plVar11 = *(long **)(lVar9 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar11) {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
      if (plVar11 == (long *)0x0) goto LAB__text__001241e8;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__001241d8;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__001241d8:
      bVar7 = false;
    }
    iVar10 = iVar2;
  } while (!bVar7);
  lVar12 = 0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
  }
LAB__text__00124638:
  lVar13 = *(long *)(lVar12 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar13 + 0x98);
  *(long *)(lVar13 + 0x98) = lVar6;
  goto joined_r0x00124658;
joined_r0x00124324:
  do {
    if (iVar10 == 0) {
LAB__text__00124388:
      lVar12 = 0;
      goto LAB__text__00124670;
    }
    plVar11 = *(long **)(lVar6 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar11) {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
      if (plVar11 == (long *)0x0) goto LAB__text__00124388;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00124378;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00124378:
      bVar7 = false;
    }
    iVar10 = iVar2;
  } while (!bVar7);
  lVar12 = 0;
  if (*(long *)(lVar6 + 0x60) != 0) {
    lVar12 = *(long *)(lVar6 + 0x60) + -0x50;
  }
LAB__text__00124670:
  lVar13 = *(long *)(lVar12 + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar13 + 0x90);
  *(long *)(lVar13 + 0x90) = lVar9;
  goto joined_r0x00124690;
  while (iVar10 = iVar2, iVar2 != 0) {
LAB__text__00124010:
    plVar11 = *(long **)(lVar9 + 0x58);
    plVar4 = (long *)FUN__text__00121c5c();
    if (plVar4 != plVar11) {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
      if (plVar11 == (long *)0x0) break;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB__text__00124058;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__00124058:
      bVar7 = false;
    }
    if (bVar7) {
      if (*(long *)(lVar9 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        iVar10 = *piVar1;
        goto joined_r0x00124184;
      }
      break;
    }
  }
LAB__text__001241f0:
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
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
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__00124248;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__00124248:
        bVar7 = false;
      }
      if (bVar7) {
        lVar12 = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          lVar12 = *(long *)(lVar8 + 0x60) + -0x50;
        }
        lVar13 = *(long *)(lVar12 + 0x60);
        goto joined_r0x00124604;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar12 = 0;
  lVar13 = _DAT_00000060;
joined_r0x00124604:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar13 + 0xa0);
  *(long *)(lVar13 + 0xa0) = lVar6;
joined_r0x00124658:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar10 = *(int *)(lVar6 + 0x54);
    do {
      plVar11 = *(long **)(lVar6 + 0x58);
      plVar4 = (long *)FUN__text__00121c5c();
      if (plVar4 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__001242f8;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__001242f8:
        bVar7 = false;
      }
      if (bVar7) {
        if (*(long *)(lVar6 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar6 + 0x60) + -8) + 0x18))();
          iVar10 = *piVar1;
          goto joined_r0x00124324;
        }
        break;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
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
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB__text__001243e8;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB__text__001243e8:
        bVar7 = false;
      }
      if (bVar7) {
        lVar12 = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          lVar12 = *(long *)(lVar8 + 0x60) + -0x50;
        }
        lVar13 = *(long *)(lVar12 + 0x60);
        goto joined_r0x00124620;
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  lVar12 = 0;
  lVar13 = _DAT_00000060;
joined_r0x00124620:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar13 + 0xa8);
  *(long *)(lVar13 + 0xa8) = lVar9;
joined_r0x00124690:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  lVar12 = *(long *)(param_1[0xc] + 0x90);
  *(undefined8 *)(param_1[0xc] + 0x90) = 0;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  lVar12 = *(long *)(param_1[0xc] + 0x98);
  *(undefined8 *)(param_1[0xc] + 0x98) = 0;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar8 != 0) {
LAB__text__001244a0:
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
LAB__text__001244b0:
  plVar4 = (long *)param_1[0xc];
  lVar8 = *plVar4;
  if ((lVar8 != 0) && (plVar4 = (long *)param_1[0xc], *(int *)(lVar8 + 0x54) != 0)) {
    lVar6 = *plVar4;
    lVar8 = 0;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x54) != 0) {
        piVar1 = (int *)(lVar6 + 0x54);
        iVar10 = *(int *)(lVar6 + 0x54);
        do {
          plVar11 = *(long **)(lVar6 + 0x58);
          plVar4 = (long *)FUN__text__00121b6c();
          if (plVar4 != plVar11) {
            do {
              plVar11 = (long *)*plVar11;
            } while (plVar11 != plVar4 && plVar11 != (long *)0x0);
            if (plVar11 == (long *)0x0) break;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB__text__00124528;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__00124528:
            bVar7 = false;
          }
          if (bVar7) {
            lVar8 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar8 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            goto LAB__text__00124550;
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
      lVar8 = 0;
    }
LAB__text__00124550:
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    local_60 = local_58;
    local_58 = 0;
    FUN__text__0011ef40(lVar8,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    plVar4 = (long *)param_1[0xc];
  }
  *(undefined1 *)((long)plVar4 + 0x19) = 0;
  *(undefined4 *)(param_1[0xc] + 0x44) = 0;
  *(undefined4 *)(param_1[0xc] + 0x4c) = 0;
  *(undefined4 *)(param_1[0xc] + 0x50) = 0;
  return;
}


