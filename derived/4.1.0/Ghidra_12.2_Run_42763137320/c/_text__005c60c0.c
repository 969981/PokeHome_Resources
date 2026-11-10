/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c60c0; name: FUN_.text__005c60c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c60c0(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long local_80 [3];
  long local_68;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x112);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar12) {
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005c6184;
  }
  pcVar2 = (char *)(param_1 + 0x113);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar12) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x110));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar12) {
            *pbVar1 = bVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005c6174;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar12) {
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005c6174:
  do {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar12) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005c6184:
  FUN__text__005a7f80(local_80,param_2);
  puVar9 = _DAT_008a00e0;
  pbVar8 = _DAT_008a00d8;
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar16 = *(long **)(param_1 + 0xb8);
  if (plVar11 == plVar16) goto LAB__text__005c6464;
  do {
    lVar17 = *plVar11;
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0x54) != 0)) {
      piVar3 = (int *)(lVar17 + 0x54);
      iVar13 = *(int *)(lVar17 + 0x54);
      do {
        puVar15 = *(undefined8 **)(lVar17 + 0x58);
        if (((*pbVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar8), iVar10 != 0)) {
          if (((*_DAT_0089f8b8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(_DAT_0089f8b8), iVar10 != 0)) {
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
            *_DAT_0089f8c0 = _DAT_0089f798;
            __cxa_guard_release(_DAT_0089f8b8);
          }
          *puVar9 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar8);
        }
        lVar7 = local_80[0];
        if (puVar15 != puVar9) {
          do {
            puVar15 = (undefined8 *)*puVar15;
          } while (puVar15 != puVar9 && puVar15 != (undefined8 *)0x0);
          if (puVar15 == (undefined8 *)0x0) break;
        }
        iVar10 = *piVar3;
        if (iVar10 == iVar13) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar17 = *(long *)(lVar17 + 0x60);
            if (lVar17 != 0) {
              lVar14 = *(long *)(lVar17 + 0xe8);
              if (*(long *)(lVar17 + 0x100) == 0) {
                (**(code **)(*(long *)(lVar17 + -8) + 0x18))((long *)(lVar17 + -8));
              }
              else {
                plVar18 = (long *)(*(long *)(lVar17 + 0x100) + 0x48);
                (**(code **)(*plVar18 + 0x10))(plVar18);
                lVar7 = local_80[0];
                (**(code **)(*plVar18 + 0x18))(plVar18);
                (**(code **)(*(long *)(lVar17 + -8) + 0x18))((long *)(lVar17 + -8));
              }
              if (lVar14 == lVar7) goto LAB__text__005c63b0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar10;
      } while (iVar10 != 0);
    }
    plVar11 = plVar11 + 1;
  } while (plVar11 != plVar16);
  plVar11 = plVar16;
LAB__text__005c63b0:
  if (((plVar11 == *(long **)(param_1 + 0xb8)) || (lVar17 = *plVar11, lVar17 == 0)) ||
     (*(int *)(lVar17 + 0x54) == 0)) goto LAB__text__005c6464;
  piVar3 = (int *)(lVar17 + 0x54);
  iVar13 = *(int *)(lVar17 + 0x54);
  do {
    plVar16 = *(long **)(lVar17 + 0x58);
    plVar11 = (long *)FUN__text__003ead60();
    if (plVar11 != plVar16) {
      do {
        plVar16 = (long *)*plVar16;
      } while (plVar16 != plVar11 && plVar16 != (long *)0x0);
      if (plVar16 == (long *)0x0) goto LAB__text__005c6464;
    }
    iVar10 = *piVar3;
    if (iVar10 == iVar13) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar12) {
        *piVar3 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB__text__005c6424;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB__text__005c6424:
      bVar12 = false;
    }
    if (bVar12) {
      lVar17 = *(long *)(lVar17 + 0x60);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + -0x50) + 0x78))((long *)(lVar17 + -0x50),param_2);
        (**(code **)(*(long *)(lVar17 + -8) + 0x18))((long *)(lVar17 + -8));
      }
      goto LAB__text__005c6464;
    }
    iVar13 = iVar10;
    if (iVar10 == 0) {
LAB__text__005c6464:
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      do {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar12) {
          *pbVar1 = 0x4f;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (*(char *)(param_1 + 0x113) != '\0') {
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x110));
      }
      return;
    }
  } while( true );
}


