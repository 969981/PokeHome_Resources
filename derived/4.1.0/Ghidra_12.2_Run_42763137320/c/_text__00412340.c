/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00412340; name: FUN_.text__00412340
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00412340(uint *param_1,uint param_2)

{
  int *piVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  long *plVar28;
  ulong *puVar29;
  bool bVar30;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_2 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = nn::os::GetSystemTick();
    lVar13 = lVar13 + (long)(*_DAT_008a46b8 * 0.001) * (ulong)param_2;
  }
  uVar6 = *param_1;
  uVar18 = uVar6;
  if (uVar6 < 4) {
    uVar18 = 3;
  }
  uVar19 = uVar18;
  if (*_DAT_008a4880 != 0) {
    uVar19 = uVar6;
  }
  plVar16 = (long *)(_DAT_008a4878 + (ulong)uVar19 * 0x20);
  puVar29 = (ulong *)(plVar16 + 2);
  do {
    uVar22 = *puVar29;
    uVar24 = uVar22 & plVar16[1];
    puVar27 = (ulong *)(*plVar16 + uVar24 * 0x10 + 8);
    uVar25 = *puVar27;
    while (uVar25 == uVar22 + 1) {
      while (*puVar29 == uVar22) {
        cVar8 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(puVar29,0x10);
        if (bVar30) {
          *puVar29 = uVar25;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') {
          uVar22 = *(ulong *)(*plVar16 + uVar24 * 0x10);
          *puVar27 = plVar16[1] + uVar25;
          plVar16 = _DAT_008a4888;
          lVar17 = _DAT_008a48a0;
          uVar10 = _DAT_008a48c8;
          uVar11 = _DAT_008a48c8;
          plVar12 = _DAT_008a4888;
          goto joined_r0x00412468;
        }
      }
      ClearExclusiveLocal();
      uVar25 = *puVar27;
    }
  } while ((long)uVar22 < (long)uVar25);
  uVar22 = 0xffffffffffffffff;
  plVar16 = _DAT_008a4888;
  lVar17 = _DAT_008a48a0;
  uVar10 = _DAT_008a48c8;
  uVar11 = _DAT_008a48c8;
  plVar12 = _DAT_008a4888;
joined_r0x00412468:
  _DAT_008a4888 = plVar12;
  _DAT_008a48c8 = uVar11;
  uVar11 = _DAT_008a48c8;
  plVar12 = _DAT_008a4888;
  _DAT_008a48c8 = uVar10;
  if (uVar22 != 0xffffffffffffffff) {
    lVar15 = *_DAT_008a4888;
    uVar25 = uVar22 & 0xfff;
    plVar28 = (long *)(lVar15 + uVar25 * 0x38 + 8);
    _DAT_008a4888 = plVar16;
    if ((undefined8 *)*plVar28 == (undefined8 *)0x0) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      (*(code *)**(undefined8 **)*plVar28)(&local_70);
      uVar24 = local_68;
      FUN__text__00414580(uVar11,*plVar28);
      *plVar28 = 0;
      lVar15 = *plVar12;
    }
    lVar20 = lVar15 + uVar25 * 0x38;
    plVar16 = (long *)(lVar20 + 0x28);
    *(ulong *)(lVar20 + 0x20) = uVar24;
    do {
      puVar29 = (ulong *)*plVar16;
      cVar8 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar30) {
        *plVar16 = -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar24 != 0xffffffffffffffff) && (puVar29 != (ulong *)0x0)) {
LAB__text__00412520:
      lVar20 = *plVar12;
      plVar16 = (long *)(lVar20 + (uVar24 & 0xfff) * 0x38 + 0x28);
      do {
        lVar21 = *plVar16;
        cVar8 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar30) {
          *plVar16 = (long)puVar29;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar21 == -1) goto code_r0x00412544;
      if (lVar21 == 0) {
        plVar16 = (long *)(lVar15 + uVar25 * 0x38);
        do {
          cVar8 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar30) {
            *plVar16 = *plVar16 + 0xfff;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        uVar25 = 0xffffffffffffffff;
        local_70 = 0;
        local_68 = 0;
        goto LAB__text__004129b0;
      }
    }
LAB__text__00412590:
    plVar16 = (long *)(lVar15 + uVar25 * 0x38);
    do {
      cVar8 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar30) {
        *plVar16 = *plVar16 + 0xfff;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    local_70 = 0;
    local_68 = 0;
    if (puVar29 == (ulong *)0x0) {
      uVar25 = 0xffffffffffffffff;
    }
    else {
      bVar30 = false;
      uVar25 = 0xffffffffffffffff;
      do {
        uVar24 = *puVar29;
        lVar17 = *plVar12;
        piVar1 = (int *)(lVar17 + (uVar24 & 0xfff) * 0x38 + 0x30);
        do {
          iVar5 = *piVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar5 + -1 == 0) {
          uVar19 = *(uint *)(lVar17 + (uVar24 & 0xfff) * 0x38 + 0x1c);
          if ((uVar25 != 0xffffffffffffffff) || (uVar19 != uVar6)) {
            uVar14 = uVar19;
            if (uVar19 < 4) {
              uVar14 = 3;
            }
            do {
              uVar3 = uVar14;
              if (*_DAT_008a4880 != 0) {
                uVar3 = uVar19;
              }
              plVar16 = (long *)(_DAT_008a4878 + (ulong)uVar3 * 0x20);
              puVar27 = (ulong *)(plVar16 + 3);
              do {
                uVar23 = *puVar27;
                puVar2 = (ulong *)(*plVar16 + (uVar23 & plVar16[1]) * 0x10 + 8);
                uVar26 = *puVar2;
                lVar17 = uVar26 - uVar23;
                while (uVar26 == uVar23) {
                  while (*puVar27 == uVar23) {
                    cVar8 = '\x01';
                    bVar30 = (bool)ExclusiveMonitorPass(puVar27,0x10);
                    if (bVar30) {
                      *puVar27 = uVar23 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                    if (cVar8 == '\0') {
                      bVar30 = true;
                      *(ulong *)(*plVar16 + (uVar23 & plVar16[1]) * 0x10) = uVar24;
                      *puVar2 = uVar23 + 1;
                      *(int *)((long)&local_70 + (ulong)uVar19 * 4) =
                           *(int *)((long)&local_70 + (ulong)uVar19 * 4) + 1;
                      goto LAB__text__004125e4;
                    }
                  }
                  ClearExclusiveLocal();
                  uVar26 = *puVar2;
                  lVar17 = uVar26 - uVar23;
                }
              } while (lVar17 < 0 == SBORROW8(uVar26,uVar23));
              FUN__text__00405bf0();
            } while( true );
          }
          uVar25 = uVar24;
        }
LAB__text__004125e4:
        puVar27 = (ulong *)puVar29[1];
        FUN__text__00414580(uVar11,puVar29);
        lVar17 = _DAT_008a48a0;
        puVar29 = puVar27;
      } while (puVar27 != (ulong *)0x0);
      if (bVar30) {
        if (0 < (int)local_70) {
          uVar19 = 3;
          if (*_DAT_008a4880 != 0) {
            uVar19 = 0;
          }
          uVar24 = (ulong)uVar19;
          piVar1 = (int *)(_DAT_008a48a0 + uVar24 * 4);
          do {
            iVar4 = *(int *)(lVar17 + uVar24 * 4);
            iVar7 = *(int *)(_DAT_008a48a8 + uVar24 * 4);
            iVar5 = iVar4 + (int)local_70;
            if (iVar7 <= iVar4 + (int)local_70) {
              iVar5 = iVar7;
            }
            while (*piVar1 == iVar4) {
              cVar8 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar30) {
                *piVar1 = iVar5;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if (iVar5 - iVar4 == 0 || iVar5 < iVar4) goto LAB__text__004127a0;
                if (uVar19 - 3 < 2) {
                  nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar19 - 3) * 0x28);
                  goto LAB__text__004127a0;
                }
                (*(code *)*_DAT_008a4880)(_DAT_008a48b8,uVar24,iVar5 - iVar4,_DAT_008a4880[4]);
                goto joined_r0x00412868;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
LAB__text__004127a0:
joined_r0x00412868:
        if (0 < local_70._4_4_) {
          uVar19 = 3;
          if (*_DAT_008a4880 != 0) {
            uVar19 = 1;
          }
          uVar24 = (ulong)uVar19;
          piVar1 = (int *)(lVar17 + uVar24 * 4);
          do {
            iVar4 = *(int *)(lVar17 + uVar24 * 4);
            iVar7 = *(int *)(_DAT_008a48a8 + uVar24 * 4);
            iVar5 = iVar4 + local_70._4_4_;
            if (iVar7 <= iVar4 + local_70._4_4_) {
              iVar5 = iVar7;
            }
            while (*piVar1 == iVar4) {
              cVar8 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar30) {
                *piVar1 = iVar5;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
                  if (uVar19 == 3) {
                    nn::os::SignalEvent(_DAT_008a48b0);
                  }
                  else {
                    (*(code *)*_DAT_008a4880)(_DAT_008a48b8,uVar24,iVar5 - iVar4,_DAT_008a4880[4]);
                  }
                }
                goto LAB__text__00412884;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
LAB__text__00412884:
        if (0 < (int)local_68) {
          uVar19 = 2;
          if (*_DAT_008a4880 == 0) {
            uVar19 = 3;
          }
          uVar24 = (ulong)uVar19;
          piVar1 = (int *)(lVar17 + uVar24 * 4);
          do {
            iVar4 = *(int *)(lVar17 + uVar24 * 4);
            iVar7 = *(int *)(_DAT_008a48a8 + uVar24 * 4);
            iVar5 = iVar4 + (int)local_68;
            if (iVar7 <= iVar4 + (int)local_68) {
              iVar5 = iVar7;
            }
            while (*piVar1 == iVar4) {
              cVar8 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar30) {
                *piVar1 = iVar5;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if (iVar5 - iVar4 == 0 || iVar5 < iVar4) goto LAB__text__00412920;
                if (uVar19 - 3 < 2) {
                  nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar19 - 3) * 0x28);
                  goto LAB__text__00412920;
                }
                (*(code *)*_DAT_008a4880)(_DAT_008a48b8,uVar24,iVar5 - iVar4,_DAT_008a4880[4]);
                goto joined_r0x00412954;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
LAB__text__00412920:
joined_r0x00412954:
        if (0 < local_68._4_4_) {
          do {
            iVar4 = *(int *)(lVar17 + 0xc);
            iVar5 = iVar4 + local_68._4_4_;
            if (*(int *)(_DAT_008a48a8 + 0xc) <= iVar4 + local_68._4_4_) {
              iVar5 = *(int *)(_DAT_008a48a8 + 0xc);
            }
            while (*(int *)(lVar17 + 0xc) == iVar4) {
              cVar8 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass((int *)(lVar17 + 0xc),0x10);
              if (bVar30) {
                *(int *)(lVar17 + 0xc) = iVar5;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                if (iVar4 < iVar5) {
                  nn::os::SignalEvent(_DAT_008a48b0);
                }
                goto LAB__text__004129b0;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
      }
    }
LAB__text__004129b0:
    if (((*(ulong *)(param_1 + 2) == 0xffffffffffffffff) || (uVar22 != *(ulong *)(param_1 + 2))) &&
       ((lVar13 < 1 || (lVar15 = nn::os::GetSystemTick(), lVar15 <= lVar13))))
    goto LAB__text__004129e0;
    goto LAB__text__00412a74;
  }
LAB__text__00412b04:
  _DAT_008a4888 = plVar16;
  piVar1 = (int *)(lVar17 + (ulong)uVar6 * 4);
  do {
    iVar5 = *piVar1;
    cVar8 = '\x01';
    bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar30) {
      *piVar1 = iVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar5 + -1 < 0) {
    do {
      cVar8 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar30) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar19 = uVar18;
  if (*_DAT_008a4880 != 0) {
    uVar19 = uVar6;
  }
  plVar16 = (long *)(_DAT_008a4878 + (ulong)uVar19 * 0x20);
  if (*(long *)(*plVar16 + (plVar16[1] & plVar16[2]) * 0x10 + 8) + ~plVar16[2] < 0) {
    return;
  }
  if (*_DAT_008a4880 != 0) {
    uVar18 = uVar6;
  }
  uVar25 = (ulong)uVar18;
  piVar1 = (int *)(lVar17 + uVar25 * 4);
  do {
    iVar4 = *(int *)(lVar17 + uVar25 * 4);
    iVar5 = *(int *)(_DAT_008a48a8 + uVar25 * 4);
    if (iVar4 + 1 < iVar5) {
      iVar5 = iVar4 + 1;
    }
    while (*piVar1 == iVar4) {
      cVar8 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar30) {
        *piVar1 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        if (iVar5 - iVar4 == 0 || iVar5 < iVar4) {
          return;
        }
        if (uVar18 - 3 < 2) {
          nn::os::SignalEvent(_DAT_008a48b0 + (ulong)(uVar18 - 3) * 0x28);
          return;
        }
        (*(code *)*_DAT_008a4880)(_DAT_008a48b8,uVar25,iVar5 - iVar4,_DAT_008a4880[4]);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
code_r0x00412544:
  *plVar16 = -1;
  uVar24 = *(ulong *)(lVar20 + (uVar24 & 0xfff) * 0x38 + 0x20);
  if (uVar24 == 0xffffffffffffffff) goto LAB__text__00412590;
  goto LAB__text__00412520;
LAB__text__004129e0:
  uVar22 = uVar25;
  plVar16 = _DAT_008a4888;
  uVar10 = _DAT_008a48c8;
  if (uVar25 == 0xffffffffffffffff) {
    uVar19 = uVar18;
    if (*_DAT_008a4880 != 0) {
      uVar19 = uVar6;
    }
    plVar16 = (long *)(_DAT_008a4878 + (ulong)uVar19 * 0x20);
    puVar29 = (ulong *)(plVar16 + 2);
    do {
      uVar22 = *puVar29;
      uVar24 = uVar22 & plVar16[1];
      puVar27 = (ulong *)(*plVar16 + uVar24 * 0x10 + 8);
      uVar25 = *puVar27;
      while (uVar25 == uVar22 + 1) {
        while (*puVar29 == uVar22) {
          cVar8 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar30) {
            *puVar29 = uVar25;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            uVar22 = *(ulong *)(*plVar16 + uVar24 * 0x10);
            *puVar27 = plVar16[1] + uVar25;
            plVar16 = _DAT_008a4888;
            uVar10 = _DAT_008a48c8;
            goto joined_r0x00412468;
          }
        }
        ClearExclusiveLocal();
        uVar25 = *puVar27;
      }
    } while ((long)uVar22 < (long)uVar25);
    uVar25 = 0xffffffffffffffff;
LAB__text__00412a74:
    plVar16 = _DAT_008a4888;
    if (uVar25 != 0xffffffffffffffff) {
      do {
        uVar19 = uVar18;
        if (*_DAT_008a4880 != 0) {
          uVar19 = uVar6;
        }
        plVar16 = (long *)(_DAT_008a4878 + (ulong)uVar19 * 0x20);
        puVar29 = (ulong *)(plVar16 + 3);
        do {
          uVar24 = *puVar29;
          puVar27 = (ulong *)(*plVar16 + (uVar24 & plVar16[1]) * 0x10 + 8);
          uVar22 = *puVar27;
          lVar13 = uVar22 - uVar24;
          while (uVar22 == uVar24) {
            while (*puVar29 == uVar24) {
              cVar8 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(puVar29,0x10);
              if (bVar30) {
                *puVar29 = uVar24 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                *(ulong *)(*plVar16 + (uVar24 & plVar16[1]) * 0x10) = uVar25;
                *puVar27 = uVar24 + 1;
                plVar16 = _DAT_008a4888;
                goto LAB__text__00412b04;
              }
            }
            ClearExclusiveLocal();
            uVar22 = *puVar27;
            lVar13 = uVar22 - uVar24;
          }
        } while (lVar13 < 0 == SBORROW8(uVar22,uVar24));
        FUN__text__00405bf0();
      } while( true );
    }
    goto LAB__text__00412b04;
  }
  goto joined_r0x00412468;
}


