/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c64c0; name: FUN_.text__005c64c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c64c0(long param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long local_70;
  long local_68;
  
  uVar13 = tpidr_el0;
  bVar7 = (byte)((uint)uVar13 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x112);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__005c6584;
  }
  pcVar2 = (char *)(param_1 + 0x113);
  ClearExclusiveLocal();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x110));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__005c6574;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005c6574:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005c6584:
  puVar9 = _DAT_008a5518;
  pbVar8 = _DAT_008a5510;
  puVar12 = (undefined8 *)(param_1 + 0xe0);
  plVar11 = (long *)*puVar12;
  plVar19 = *(long **)(param_1 + 0xe8);
  local_70 = param_2;
  if (plVar11 == plVar19) goto LAB__text__005c686c;
LAB__text__005c65b0:
  do {
    lVar20 = *plVar11;
    if ((lVar20 != 0) && (*(int *)(lVar20 + 0x54) != 0)) {
      piVar3 = (int *)(lVar20 + 0x54);
      iVar17 = *(int *)(lVar20 + 0x54);
      do {
        puVar14 = *(undefined8 **)(lVar20 + 0x58);
        if (((*pbVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar8), iVar10 != 0)) {
          if (((*_DAT_008a0030 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(_DAT_008a0030), iVar10 != 0)) {
            if (((*_DAT_0089f790 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(_DAT_0089f790), iVar10 != 0)) {
              if (((*_DAT_0089f498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(_DAT_0089f498), iVar10 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(_DAT_0089f498);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(_DAT_0089f790);
            }
            *_DAT_008a0038 = _DAT_0089f798;
            __cxa_guard_release(_DAT_008a0030);
          }
          *puVar9 = _DAT_008a0038;
          __cxa_guard_release(pbVar8);
        }
        if (puVar14 != puVar9) {
          do {
            puVar14 = (undefined8 *)*puVar14;
          } while (puVar14 != puVar9 && puVar14 != (undefined8 *)0x0);
          if (puVar14 == (undefined8 *)0x0) break;
        }
        iVar10 = *piVar3;
        if (iVar10 == iVar17) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar20 = *(long *)(lVar20 + 0x60);
            if (lVar20 != 0) {
              if ((local_70 == 0) || (*(uint *)(lVar20 + 0x74) <= *(uint *)(local_70 + 0xc4))) {
                plVar11 = plVar11 + 1;
              }
              else {
                lVar15 = *(long *)(local_70 + 0x58);
                if (lVar15 != 0) {
                  (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
                }
                local_68 = lVar15;
                plVar11 = (long *)FUN__text__005c6970(puVar12,plVar11,&local_68);
                if (local_68 != 0) {
                  (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                }
                plVar19 = *(long **)(param_1 + 0xe8);
                local_70 = 0;
              }
              (**(code **)(*(long *)(lVar20 + -8) + 0x18))((long *)(lVar20 + -8));
              if (plVar11 == plVar19) goto LAB__text__005c686c;
              goto LAB__text__005c65b0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar17 = iVar10;
      } while (iVar10 != 0);
    }
    plVar18 = *(long **)(param_1 + 0xe8);
    plVar16 = plVar11 + 1;
    if (plVar16 == plVar18) {
      plVar19 = plVar11;
      if (plVar16 != plVar11) goto LAB__text__005c680c;
    }
    else {
      plVar16 = plVar11;
      do {
        if (*plVar16 != 0) {
          (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
        }
        plVar19 = plVar16 + 1;
        lVar20 = *plVar19;
        *plVar19 = 0;
        *plVar16 = lVar20;
        plVar4 = plVar16 + 2;
        plVar16 = plVar19;
      } while (plVar4 != plVar18);
      plVar16 = *(long **)(param_1 + 0xe8);
      if (plVar16 != plVar19) {
LAB__text__005c680c:
        do {
          plVar18 = plVar16 + -1;
          if (*plVar18 != 0) {
            (**(code **)(*(long *)(*plVar18 + 0x48) + 0x18))();
            plVar16[-1] = 0;
          }
          plVar16 = plVar18;
        } while (plVar18 != plVar19);
      }
    }
    *(long **)(param_1 + 0xe8) = plVar19;
    if (plVar11 == plVar19) {
LAB__text__005c686c:
      if (local_70 != 0) {
        lVar20 = *(long *)(local_70 + 0x58);
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
        }
        plVar11 = *(long **)(param_1 + 0xe8);
        local_68 = lVar20;
        if (plVar11 < *(long **)(param_1 + 0xf0)) {
          uVar13 = uVar13 & 0xffffffffffffe000;
          if (*(long *)(uVar13 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10();
          }
          *(undefined8 *)(uVar13 + *(long *)(uVar13 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(param_1 + 0xf8);
          *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
          local_68 = 0;
          *plVar11 = lVar20;
          *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
          *(long **)(param_1 + 0xe8) = plVar11 + 1;
        }
        else {
          FUN__text__005cb480(puVar12,&local_68);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          }
        }
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar6) {
          *pbVar1 = 0x4f;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (*(char *)(param_1 + 0x113) != '\0') {
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x110));
      }
      return;
    }
  } while( true );
}


