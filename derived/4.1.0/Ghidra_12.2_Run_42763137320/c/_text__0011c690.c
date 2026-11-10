/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011c690; name: FUN_.text__0011c690
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011c690(long param_1)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x10))(&local_68);
    puVar4 = _DAT_0089ffc0;
    pbVar3 = _DAT_0089ffb8;
    pbVar2 = _DAT_0089f498;
    if (local_68 != 0) {
      lVar9 = local_68;
      if (*(int *)(local_68 + 0x54) == 0) {
LAB__text__0011cd14:
        lVar13 = lVar9;
      }
      else {
        piVar11 = (int *)(local_68 + 0x54);
        iVar15 = *(int *)(local_68 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011cd14;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) break;
            ClearExclusiveLocal();
LAB__text__0011c704:
            iVar15 = iVar6;
            if (iVar6 == 0) goto LAB__text__0011cd14;
          }
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar8) {
            *piVar11 = iVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 != '\0') goto LAB__text__0011c704;
          if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__0011cd14;
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
          iVar15 = *piVar11;
          do {
            if (iVar15 == 0) {
LAB__text__0011c87c:
              lVar10 = *(long *)(_DAT_00000060 + 0x60);
              (**(code **)(_DAT_00000048 + 0x18))();
              goto joined_r0x0011c9c8;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011c87c;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011c7d4;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011c7d4:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          lVar10 = *(long *)(*(long *)(lVar13 + 0x60) + 0x60);
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
joined_r0x0011c9c8:
          if (lVar10 == 0) {
            lVar13 = 0;
            iVar15 = *piVar11;
          }
          else {
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
                lVar10 = 0;
                goto LAB__text__0011c9ec;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0x58);
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                  if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar2);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar4 = _DAT_0089f798;
                __cxa_guard_release(pbVar3);
              }
              if (puVar12 != puVar4) {
                do {
                  puVar12 = (undefined8 *)*puVar12;
                } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
                lVar10 = 0;
                if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011c9ec;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011c8f4;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011c8f4:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
LAB__text__0011c9ec:
            (**(code **)(**(long **)(*(long *)(lVar10 + 0x60) + 0x60) + 0x10))(&local_68);
            lVar13 = local_68;
            local_68 = 0;
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
            iVar15 = *piVar11;
          }
          do {
            if (iVar15 == 0) {
LAB__text__0011cb20:
              iVar15 = *(int *)(_DAT_00000060 + 0x40);
              (**(code **)(_DAT_00000048 + 0x18))();
              goto joined_r0x0011cb64;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011cb20;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011ca78;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011ca78:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar10 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          iVar15 = *(int *)(*(long *)(lVar10 + 0x60) + 0x40);
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
joined_r0x0011cb64:
          if (iVar15 == 0) {
            plVar16 = (long *)(lVar9 + 0x48);
            local_70 = lVar9;
            (**(code **)(*plVar16 + 0x10))(plVar16);
            FUN__text__0011ef40(param_1,&local_70);
            (**(code **)(*plVar16 + 0x18))(plVar16);
            local_70 = 0;
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
LAB__text__0011cc08:
                lVar10 = 0;
                goto LAB__text__0011cc20;
              }
              plVar17 = *(long **)(lVar9 + 0x58);
              plVar16 = (long *)FUN__text__00121c5c();
              if (plVar16 != plVar17) {
                do {
                  plVar17 = (long *)*plVar17;
                } while (plVar17 != plVar16 && plVar17 != (long *)0x0);
                if (plVar17 == (long *)0x0) goto LAB__text__0011cc08;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011cbf8;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011cbf8:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
LAB__text__0011cc20:
            *(undefined4 *)(*(long *)(lVar10 + 0x60) + 0x40) = 1;
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
          }
          if (lVar13 == 0) goto LAB__text__0011cd14;
          plVar16 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          (**(code **)(*plVar16 + 0x18))(plVar16);
          piVar11 = (int *)(lVar13 + 0x54);
          lVar9 = lVar13;
          iVar15 = *(int *)(lVar13 + 0x54);
        } while (*(int *)(lVar13 + 0x54) != 0);
      }
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
  }
  lVar9 = *(long *)(param_1 + 0x1a8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    puVar4 = _DAT_0089ffc0;
    pbVar5 = _DAT_0089ffb8;
    pbVar3 = _DAT_0089f790;
    pbVar2 = _DAT_0089f498;
    if (*(int *)(lVar9 + 0x54) == 0) {
LAB__text__0011d154:
      lVar10 = lVar9;
    }
    else {
      piVar11 = (int *)(lVar9 + 0x54);
      iVar15 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d154;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) break;
          ClearExclusiveLocal();
LAB__text__0011cd78:
          iVar15 = iVar6;
          if (iVar6 == 0) goto LAB__text__0011d154;
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar8) {
          *piVar11 = iVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB__text__0011cd78;
        if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__0011d154;
        (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011cedc:
            lVar13 = 0;
            lVar10 = *(long *)(_DAT_00000060 + 0x80);
            goto joined_r0x0011d020;
          }
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011cedc;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011ce44;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011ce44:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar13 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
        }
        lVar10 = *(long *)(*(long *)(lVar13 + 0x60) + 0x80);
joined_r0x0011d020:
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011d000:
            lVar13 = 0;
            goto LAB__text__0011d038;
          }
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d000;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011cf68;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011cf68:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar13 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
        }
LAB__text__0011d038:
        FUN__text__00123f00(lVar13);
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        plVar16 = (long *)(lVar9 + 0x48);
        local_78 = lVar9;
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN__text__0011f570(param_1,&local_78);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        local_78 = 0;
        if (lVar10 == 0) goto LAB__text__0011d15c;
        plVar17 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        piVar11 = (int *)(lVar10 + 0x54);
        lVar9 = lVar10;
        iVar15 = *(int *)(lVar10 + 0x54);
      } while (*(int *)(lVar10 + 0x54) != 0);
    }
    plVar16 = (long *)(lVar10 + 0x48);
LAB__text__0011d15c:
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  lVar9 = *(long *)(param_1 + 0x198);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    puVar4 = _DAT_0089ffc0;
    pbVar5 = _DAT_0089ffb8;
    pbVar3 = _DAT_0089f790;
    pbVar2 = _DAT_0089f498;
    if (*(int *)(lVar9 + 0x54) == 0) {
LAB__text__0011d6d4:
      lVar10 = lVar9;
    }
    else {
      piVar11 = (int *)(lVar9 + 0x54);
      iVar15 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d6d4;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) break;
          ClearExclusiveLocal();
LAB__text__0011d1c4:
          iVar15 = iVar6;
          if (iVar6 == 0) goto LAB__text__0011d6d4;
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar8) {
          *piVar11 = iVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB__text__0011d1c4;
        if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__0011d6d4;
        (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
            lVar13 = 0;
            lVar10 = *(long *)(_DAT_00000060 + 0x70);
            goto joined_r0x0011d358;
          }
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            lVar13 = 0;
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d350;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011d294;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011d294:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar13 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
        }
LAB__text__0011d350:
        lVar10 = *(long *)(*(long *)(lVar13 + 0x60) + 0x70);
joined_r0x0011d358:
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011d470:
            lVar13 = 0;
            goto LAB__text__0011d488;
          }
          puVar12 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d470;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011d3d8;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011d3d8:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar13 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
        }
LAB__text__0011d488:
        uVar7 = FUN__text__00124698(*(undefined8 *)(lVar13 + 0x60));
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        if ((uVar7 & 1) != 0) {
          iVar15 = *piVar11;
          do {
            if (iVar15 == 0) {
LAB__text__0011d59c:
              lVar13 = 0;
              goto LAB__text__0011d5b4;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(pbVar3);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar5);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d59c;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011d504;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011d504:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
LAB__text__0011d5b4:
          FUN__text__001223b0(lVar13);
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          plVar16 = (long *)(lVar9 + 0x48);
          local_80 = lVar9;
          (**(code **)(*plVar16 + 0x10))(plVar16);
          FUN__text__0011fbe0(param_1,&local_80);
          (**(code **)(*plVar16 + 0x18))(plVar16);
          local_80 = 0;
        }
        if (lVar10 == 0) goto LAB__text__0011d6d4;
        plVar16 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar16 + 0x10))(plVar16);
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        (**(code **)(*plVar16 + 0x18))(plVar16);
        piVar11 = (int *)(lVar10 + 0x54);
        lVar9 = lVar10;
        iVar15 = *(int *)(lVar10 + 0x54);
      } while (*(int *)(lVar10 + 0x54) != 0);
    }
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x10))(&local_68);
    puVar4 = _DAT_0089ffc0;
    pbVar3 = _DAT_0089ffb8;
    pbVar2 = _DAT_0089f498;
    if (local_68 != 0) {
      lVar9 = local_68;
      if (*(int *)(local_68 + 0x54) == 0) {
LAB__text__0011ded4:
        lVar10 = lVar9;
      }
      else {
        piVar11 = (int *)(local_68 + 0x54);
        iVar15 = *(int *)(local_68 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011ded4;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) break;
            ClearExclusiveLocal();
LAB__text__0011d738:
            iVar15 = iVar6;
            if (iVar6 == 0) goto LAB__text__0011ded4;
          }
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar8) {
            *piVar11 = iVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 != '\0') goto LAB__text__0011d738;
          if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__0011ded4;
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
          iVar15 = *piVar11;
          do {
            if (iVar15 == 0) {
LAB__text__0011d8ac:
              lVar10 = *(long *)(_DAT_00000060 + 0x60);
              (**(code **)(_DAT_00000048 + 0x18))();
              goto joined_r0x0011d8f8;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011d8ac;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011d804;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011d804:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          lVar10 = *(long *)(*(long *)(lVar13 + 0x60) + 0x60);
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
joined_r0x0011d8f8:
          if (lVar10 == 0) {
            lVar10 = 0;
            iVar15 = *piVar11;
          }
          else {
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
                lVar13 = 0;
                goto LAB__text__0011da18;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0x58);
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                  if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar2);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar4 = _DAT_0089f798;
                __cxa_guard_release(pbVar3);
              }
              if (puVar12 != puVar4) {
                do {
                  puVar12 = (undefined8 *)*puVar12;
                } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
                lVar13 = 0;
                if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011da18;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011d958;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011d958:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar13 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
            }
LAB__text__0011da18:
            (**(code **)(**(long **)(*(long *)(lVar13 + 0x60) + 0x60) + 0x10))(&local_68);
            lVar10 = local_68;
            local_68 = 0;
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
            iVar15 = *piVar11;
          }
          do {
            if (iVar15 == 0) {
LAB__text__0011db4c:
              lVar13 = 0;
              goto LAB__text__0011db64;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011db4c;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011daa4;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011daa4:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
LAB__text__0011db64:
          uVar7 = FUN__text__00124698(*(undefined8 *)(lVar13 + 0x60));
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          if ((uVar7 & 1) != 0) {
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
LAB__text__0011dc8c:
                cVar1 = *(char *)(_DAT_00000060 + 0x1a);
                (**(code **)(_DAT_00000048 + 0x18))();
                goto joined_r0x0011dcd0;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0x58);
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                  if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar2);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar4 = _DAT_0089f798;
                __cxa_guard_release(pbVar3);
              }
              if (puVar12 != puVar4) {
                do {
                  puVar12 = (undefined8 *)*puVar12;
                } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
                if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011dc8c;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011dbe4;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011dbe4:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar13 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            cVar1 = *(char *)(*(long *)(lVar13 + 0x60) + 0x1a);
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
joined_r0x0011dcd0:
            if (cVar1 != '\0') {
              iVar15 = *piVar11;
              do {
                if (iVar15 == 0) {
LAB__text__0011dd38:
                  lVar13 = 0;
                  goto LAB__text__0011dd50;
                }
                plVar17 = *(long **)(lVar9 + 0x58);
                plVar16 = (long *)FUN__text__00121c5c();
                if (plVar16 != plVar17) {
                  do {
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != plVar16 && plVar17 != (long *)0x0);
                  if (plVar17 == (long *)0x0) goto LAB__text__0011dd38;
                }
                iVar6 = *piVar11;
                if (iVar6 == iVar15) {
                  cVar1 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar8) {
                    *piVar11 = iVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 != '\0') goto LAB__text__0011dd28;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB__text__0011dd28:
                  bVar8 = false;
                }
                iVar15 = iVar6;
              } while (!bVar8);
              lVar13 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
              }
LAB__text__0011dd50:
              *(undefined4 *)(*(long *)(lVar13 + 0x60) + 0x40) = 4;
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
              iVar15 = *piVar11;
              do {
                if (iVar15 == 0) {
LAB__text__0011ddc8:
                  lVar13 = 0;
                  goto LAB__text__0011dde0;
                }
                plVar17 = *(long **)(lVar9 + 0x58);
                plVar16 = (long *)FUN__text__00121c5c();
                if (plVar16 != plVar17) {
                  do {
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != plVar16 && plVar17 != (long *)0x0);
                  if (plVar17 == (long *)0x0) goto LAB__text__0011ddc8;
                }
                iVar6 = *piVar11;
                if (iVar6 == iVar15) {
                  cVar1 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar8) {
                    *piVar11 = iVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 != '\0') goto LAB__text__0011ddb8;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB__text__0011ddb8:
                  bVar8 = false;
                }
                iVar15 = iVar6;
              } while (!bVar8);
              lVar13 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
              }
LAB__text__0011dde0:
              *(undefined1 *)(*(long *)(lVar13 + 0x60) + 0x1a) = 0;
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
            }
          }
          if (lVar10 == 0) goto LAB__text__0011ded4;
          plVar16 = (long *)(lVar10 + 0x48);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          (**(code **)(*plVar16 + 0x18))(plVar16);
          piVar11 = (int *)(lVar10 + 0x54);
          lVar9 = lVar10;
          iVar15 = *(int *)(lVar10 + 0x54);
        } while (*(int *)(lVar10 + 0x54) != 0);
      }
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
  }
  lVar9 = *(long *)(param_1 + 0x1b8);
  if (lVar9 == 0) {
LAB__text__0011e310:
    bVar8 = true;
  }
  else {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    puVar4 = _DAT_0089ffc0;
    pbVar5 = _DAT_0089ffb8;
    pbVar3 = _DAT_0089f790;
    pbVar2 = _DAT_0089f498;
    if (*(int *)(lVar9 + 0x54) == 0) {
      bVar8 = false;
    }
    else {
      piVar11 = (int *)(lVar9 + 0x54);
      lVar13 = lVar9;
      iVar15 = *(int *)(lVar9 + 0x54);
LAB__text__0011df54:
      do {
        puVar12 = *(undefined8 **)(lVar13 + 0x58);
        if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
          if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
            if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
              *_DAT_0089f4a0 = 0;
              __cxa_guard_release(pbVar2);
            }
            *_DAT_0089f798 = _DAT_0089f4a0;
            __cxa_guard_release(pbVar3);
          }
          *puVar4 = _DAT_0089f798;
          __cxa_guard_release(pbVar5);
        }
        if (puVar12 != puVar4) {
          do {
            puVar12 = (undefined8 *)*puVar12;
          } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
          if (puVar12 != (undefined8 *)0x0) goto LAB__text__0011df84;
LAB__text__0011e2dc:
          bVar8 = false;
          lVar9 = lVar13;
          break;
        }
LAB__text__0011df84:
        iVar6 = *piVar11;
        if (iVar6 != iVar15) {
          ClearExclusiveLocal();
LAB__text__0011df44:
          iVar15 = iVar6;
          if (iVar6 == 0) goto LAB__text__0011e2dc;
          goto LAB__text__0011df54;
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar8) {
          *piVar11 = iVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB__text__0011df44;
        if (*(long *)(lVar13 + 0x60) == 0) goto LAB__text__0011e2dc;
        (**(code **)(*(long *)(*(long *)(lVar13 + 0x60) + -8) + 0x18))();
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011e0ac:
            lVar9 = 0;
            goto LAB__text__0011e0c4;
          }
          puVar12 = *(undefined8 **)(lVar13 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011e0ac;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011e014;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011e014:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar9 = 0;
        if (*(long *)(lVar13 + 0x60) != 0) {
          lVar9 = *(long *)(lVar13 + 0x60) + -0x50;
        }
LAB__text__0011e0c4:
        FUN__text__00121e40(lVar9,0);
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011e1dc:
            lVar10 = 0;
            lVar9 = *(long *)(_DAT_00000060 + 0x98);
            goto joined_r0x0011e208;
          }
          puVar12 = *(undefined8 **)(lVar13 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar4 = _DAT_0089f798;
            __cxa_guard_release(pbVar5);
          }
          if (puVar12 != puVar4) {
            do {
              puVar12 = (undefined8 *)*puVar12;
            } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011e1dc;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011e144;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011e144:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar10 = 0;
        if (*(long *)(lVar13 + 0x60) != 0) {
          lVar10 = *(long *)(lVar13 + 0x60) + -0x50;
        }
        lVar9 = *(long *)(*(long *)(lVar10 + 0x60) + 0x98);
joined_r0x0011e208:
        if (lVar9 == 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          goto LAB__text__0011e310;
        }
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        piVar11 = (int *)(lVar9 + 0x54);
        bVar8 = false;
        lVar13 = lVar9;
        iVar15 = *(int *)(lVar9 + 0x54);
      } while (*(int *)(lVar9 + 0x54) != 0);
    }
  }
  lVar13 = *(long *)(param_1 + 0x1c8);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (!bVar8) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  puVar12 = _DAT_0089ffc0;
  pbVar5 = _DAT_0089ffb8;
  puVar4 = _DAT_0089f798;
  pbVar3 = _DAT_0089f790;
  pbVar2 = _DAT_0089f498;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x54) == 0) {
LAB__text__0011e6e8:
      lVar10 = lVar13;
    }
    else {
      piVar11 = (int *)(lVar13 + 0x54);
      iVar15 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          puVar14 = *(undefined8 **)(lVar13 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *puVar4 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar12 = puVar4;
            __cxa_guard_release(pbVar5);
          }
          if (puVar14 != puVar12) {
            do {
              puVar14 = (undefined8 *)*puVar14;
            } while (puVar14 != puVar12 && puVar14 != (undefined8 *)0x0);
            if (puVar14 == (undefined8 *)0x0) goto LAB__text__0011e6e8;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) break;
          ClearExclusiveLocal();
LAB__text__0011e384:
          iVar15 = iVar6;
          if (iVar6 == 0) goto LAB__text__0011e6e8;
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar8) {
          *piVar11 = iVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB__text__0011e384;
        if (*(long *)(lVar13 + 0x60) == 0) goto LAB__text__0011e6e8;
        (**(code **)(*(long *)(*(long *)(lVar13 + 0x60) + -8) + 0x18))();
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011e4dc:
            lVar9 = 0;
            goto LAB__text__0011e4f4;
          }
          puVar14 = *(undefined8 **)(lVar13 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *puVar4 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar12 = puVar4;
            __cxa_guard_release(pbVar5);
          }
          if (puVar14 != puVar12) {
            do {
              puVar14 = (undefined8 *)*puVar14;
            } while (puVar14 != puVar12 && puVar14 != (undefined8 *)0x0);
            if (puVar14 == (undefined8 *)0x0) goto LAB__text__0011e4dc;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011e454;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011e454:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar9 = 0;
        if (*(long *)(lVar13 + 0x60) != 0) {
          lVar9 = *(long *)(lVar13 + 0x60) + -0x50;
        }
LAB__text__0011e4f4:
        FUN__text__00121e40(lVar9,0);
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        iVar15 = *piVar11;
        do {
          if (iVar15 == 0) {
LAB__text__0011e5fc:
            lVar9 = 0;
            lVar10 = *(long *)(_DAT_00000060 + 0x98);
            goto joined_r0x0011e628;
          }
          puVar14 = *(undefined8 **)(lVar13 + 0x58);
          if (((*pbVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar5), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar2);
              }
              *puVar4 = _DAT_0089f4a0;
              __cxa_guard_release(pbVar3);
            }
            *puVar12 = puVar4;
            __cxa_guard_release(pbVar5);
          }
          if (puVar14 != puVar12) {
            do {
              puVar14 = (undefined8 *)*puVar14;
            } while (puVar14 != puVar12 && puVar14 != (undefined8 *)0x0);
            if (puVar14 == (undefined8 *)0x0) goto LAB__text__0011e5fc;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar15) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar8) {
              *piVar11 = iVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__0011e574;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__0011e574:
            bVar8 = false;
          }
          iVar15 = iVar6;
        } while (!bVar8);
        lVar9 = 0;
        if (*(long *)(lVar13 + 0x60) != 0) {
          lVar9 = *(long *)(lVar13 + 0x60) + -0x50;
        }
        lVar10 = *(long *)(*(long *)(lVar9 + 0x60) + 0x98);
joined_r0x0011e628:
        if (lVar10 == 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          lVar10 = lVar9;
          break;
        }
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        piVar11 = (int *)(lVar10 + 0x54);
        lVar13 = lVar10;
        iVar15 = *(int *)(lVar10 + 0x54);
      } while (*(int *)(lVar10 + 0x54) != 0);
    }
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x10))(&local_68);
    puVar4 = _DAT_0089ffc0;
    pbVar3 = _DAT_0089ffb8;
    pbVar2 = _DAT_0089f498;
    if (local_68 != 0) {
      lVar9 = local_68;
      if (*(int *)(local_68 + 0x54) == 0) {
LAB__text__0011eef0:
        lVar13 = lVar9;
      }
      else {
        piVar11 = (int *)(local_68 + 0x54);
        iVar15 = *(int *)(local_68 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011eef0;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) break;
            ClearExclusiveLocal();
LAB__text__0011e748:
            iVar15 = iVar6;
            if (iVar6 == 0) goto LAB__text__0011eef0;
          }
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar8) {
            *piVar11 = iVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 != '\0') goto LAB__text__0011e748;
          if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__0011eef0;
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
          iVar15 = *piVar11;
          do {
            if (iVar15 == 0) {
LAB__text__0011e8bc:
              lVar10 = *(long *)(_DAT_00000060 + 0x60);
              (**(code **)(_DAT_00000048 + 0x18))();
              goto joined_r0x0011ea08;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011e8bc;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011e814;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011e814:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          lVar10 = *(long *)(*(long *)(lVar13 + 0x60) + 0x60);
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
joined_r0x0011ea08:
          if (lVar10 == 0) {
            lVar13 = 0;
            iVar15 = *piVar11;
          }
          else {
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
                lVar10 = 0;
                goto LAB__text__0011ea2c;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0x58);
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                  if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar2);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar4 = _DAT_0089f798;
                __cxa_guard_release(pbVar3);
              }
              if (puVar12 != puVar4) {
                do {
                  puVar12 = (undefined8 *)*puVar12;
                } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
                lVar10 = 0;
                if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011ea2c;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011e934;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011e934:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
LAB__text__0011ea2c:
            (**(code **)(**(long **)(*(long *)(lVar10 + 0x60) + 0x60) + 0x10))(&local_68);
            lVar13 = local_68;
            local_68 = 0;
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
            iVar15 = *piVar11;
          }
          do {
            if (iVar15 == 0) {
LAB__text__0011eb60:
              lVar10 = 0;
              goto LAB__text__0011eb78;
            }
            puVar12 = *(undefined8 **)(lVar9 + 0x58);
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar2);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar4 = _DAT_0089f798;
              __cxa_guard_release(pbVar3);
            }
            if (puVar12 != puVar4) {
              do {
                puVar12 = (undefined8 *)*puVar12;
              } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
              if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011eb60;
            }
            iVar6 = *piVar11;
            if (iVar6 == iVar15) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar8) {
                *piVar11 = iVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 != '\0') goto LAB__text__0011eab8;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB__text__0011eab8:
              bVar8 = false;
            }
            iVar15 = iVar6;
          } while (!bVar8);
          lVar10 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
          }
LAB__text__0011eb78:
          iVar15 = *(int *)(*(long *)(lVar10 + 0x60) + 0x40);
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
          if (iVar15 == 6) {
            iVar15 = *piVar11;
            do {
              if (iVar15 == 0) {
LAB__text__0011ec9c:
                lVar10 = 0;
                lVar18 = *(long *)(_DAT_00000060 + 8);
                goto joined_r0x0011edc8;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0x58);
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
                  if (((*pbVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar2), iVar6 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(pbVar2);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *puVar4 = _DAT_0089f798;
                __cxa_guard_release(pbVar3);
              }
              if (puVar12 != puVar4) {
                do {
                  puVar12 = (undefined8 *)*puVar12;
                } while (puVar12 != puVar4 && puVar12 != (undefined8 *)0x0);
                if (puVar12 == (undefined8 *)0x0) goto LAB__text__0011ec9c;
              }
              iVar6 = *piVar11;
              if (iVar6 == iVar15) {
                cVar1 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar8) {
                  *piVar11 = iVar15 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 != '\0') goto LAB__text__0011ebf4;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB__text__0011ebf4:
                bVar8 = false;
              }
              iVar15 = iVar6;
            } while (!bVar8);
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            lVar18 = *(long *)(*(long *)(lVar10 + 0x60) + 8);
joined_r0x0011edc8:
            if (lVar18 != 0) {
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
            }
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
            plVar16 = (long *)(lVar9 + 0x48);
            local_88 = lVar9;
            (**(code **)(*plVar16 + 0x10))(plVar16);
            FUN__text__00120250(param_1,&local_88);
            (**(code **)(*plVar16 + 0x18))(plVar16);
            local_88 = 0;
            local_90 = lVar9;
            (**(code **)(*plVar16 + 0x10))(plVar16);
            FUN__text__001208c0(param_1,&local_90);
            (**(code **)(*plVar16 + 0x18))(plVar16);
            local_90 = 0;
            if (lVar18 != 0) {
              piVar11 = (int *)(lVar18 + 0x54);
              if (*piVar11 != 0) {
                iVar15 = *piVar11;
                do {
                  if (iVar15 == 0) {
LAB__text__0011eda8:
                    plVar16 = (long *)0x0;
                    goto LAB__text__0011ede0;
                  }
                  plVar17 = *(long **)(lVar18 + 0x58);
                  plVar16 = (long *)FUN__text__00121d4c();
                  if (plVar16 != plVar17) {
                    do {
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != plVar16 && plVar17 != (long *)0x0);
                    if (plVar17 == (long *)0x0) goto LAB__text__0011eda8;
                  }
                  iVar6 = *piVar11;
                  if (iVar6 == iVar15) {
                    cVar1 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                    if (bVar8) {
                      *piVar11 = iVar15 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    if (cVar1 != '\0') goto LAB__text__0011ed98;
                    bVar8 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB__text__0011ed98:
                    bVar8 = false;
                  }
                  iVar15 = iVar6;
                } while (!bVar8);
                plVar16 = (long *)0x0;
                if (*(long *)(lVar18 + 0x60) != 0) {
                  plVar16 = (long *)(*(long *)(lVar18 + 0x60) + -0x50);
                }
LAB__text__0011ede0:
                (**(code **)(*plVar16 + 0x40))(plVar16);
                (**(code **)(plVar16[9] + 0x18))(plVar16 + 9);
              }
              (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
            }
          }
          if (lVar13 == 0) goto LAB__text__0011eef0;
          plVar16 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          (**(code **)(*plVar16 + 0x18))(plVar16);
          piVar11 = (int *)(lVar13 + 0x54);
          lVar9 = lVar13;
          iVar15 = *(int *)(lVar13 + 0x54);
        } while (*(int *)(lVar13 + 0x54) != 0);
      }
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
  }
  return;
}


