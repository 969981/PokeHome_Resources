/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e77f0; name: FUN_.text__005e77f0
 */


void FUN__text__005e77f0(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  size_t sVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  uVar10 = tpidr_el0;
  bVar8 = (byte)((uint)uVar10 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x146);
  while (*pbVar1 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005e78b4;
  }
  pcVar2 = (char *)(param_1 + 0x147);
  ClearExclusiveLocal();
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005e78a4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005e78a4:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005e78b4:
  if (((param_1 != param_2) && (*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 200))) &&
     (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68))) {
    FUN__text__005e6ec0(param_1,param_2);
    plVar3 = *(long **)(param_1 + 0x98);
    for (plVar13 = *(long **)(param_1 + 0x90); plVar13 != plVar3; plVar13 = plVar13 + 1) {
      plVar12 = *(long **)(param_2 + 0x90);
      plVar4 = *(long **)(param_2 + 0x98);
      lVar14 = *plVar13;
      if (plVar12 != plVar4) {
        do {
          if (*plVar12 == lVar14) goto LAB__text__005e7930;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar4);
        plVar12 = plVar4;
      }
LAB__text__005e7930:
      if (plVar12 != plVar4) {
        sVar9 = (long)plVar4 - (long)(plVar12 + 1);
        if (sVar9 != 0) {
          memmove(plVar12,plVar12 + 1,sVar9);
        }
        *(size_t *)(param_2 + 0x98) = (long)plVar12 + sVar9;
        lVar14 = *plVar13;
      }
      plVar12 = *(long **)(lVar14 + 0x60);
      plVar4 = *(long **)(lVar14 + 0x68);
      if (plVar12 != plVar4) {
        do {
          if (*plVar12 == param_2) goto LAB__text__005e798c;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar4);
        plVar12 = plVar4;
      }
LAB__text__005e798c:
      if (plVar12 != plVar4) {
        sVar9 = (long)plVar4 - (long)(plVar12 + 1);
        if (sVar9 != 0) {
          memmove(plVar12,plVar12 + 1,sVar9);
        }
        *(size_t *)(lVar14 + 0x68) = (long)plVar12 + sVar9;
      }
    }
  }
  if (((param_1 != param_3) && (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8))) &&
     (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x98))) {
    FUN__text__005e7660(param_1,param_3);
    plVar3 = *(long **)(param_1 + 0x68);
    for (plVar13 = *(long **)(param_1 + 0x60); plVar13 != plVar3; plVar13 = plVar13 + 1) {
      lVar14 = *plVar13;
      plVar12 = *(long **)(lVar14 + 0x90);
      plVar4 = *(long **)(lVar14 + 0x98);
      if (plVar12 != plVar4) {
        do {
          if (*plVar12 == param_3) goto LAB__text__005e7a2c;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar4);
        plVar12 = plVar4;
      }
LAB__text__005e7a2c:
      if (plVar12 != plVar4) {
        sVar9 = (long)plVar4 - (long)(plVar12 + 1);
        if (sVar9 != 0) {
          memmove(plVar12,plVar12 + 1,sVar9);
        }
        *(size_t *)(lVar14 + 0x98) = (long)plVar12 + sVar9;
        lVar14 = *plVar13;
      }
      plVar12 = *(long **)(param_3 + 0x60);
      plVar4 = *(long **)(param_3 + 0x68);
      if (plVar12 != plVar4) {
        do {
          if (*plVar12 == lVar14) goto LAB__text__005e7a80;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar4);
        plVar12 = plVar4;
      }
LAB__text__005e7a80:
      if (plVar12 != plVar4) {
        sVar9 = (long)plVar4 - (long)(plVar12 + 1);
        if (sVar9 != 0) {
          memmove(plVar12,plVar12 + 1,sVar9);
        }
        *(size_t *)(param_3 + 0x68) = (long)plVar12 + sVar9;
      }
    }
  }
  plVar13 = *(long **)(param_1 + 0xc0);
  plVar3 = *(long **)(param_1 + 200);
  do {
    if (plVar13 == plVar3) {
      plVar13 = *(long **)(param_1 + 0xf0);
      plVar3 = *(long **)(param_1 + 0xf8);
      if (plVar13 != plVar3) {
        do {
          FUN__text__005e7660(param_1,*plVar13);
          plVar4 = *(long **)(param_1 + 0x68);
          for (plVar12 = *(long **)(param_1 + 0x60); plVar12 != plVar4; plVar12 = plVar12 + 1) {
            lVar14 = *plVar12;
            lVar15 = *plVar13;
            plVar11 = *(long **)(lVar14 + 0x90);
            plVar5 = *(long **)(lVar14 + 0x98);
            if (plVar11 != plVar5) {
              do {
                if (*plVar11 == lVar15) goto LAB__text__005e7c1c;
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar5);
              plVar11 = plVar5;
            }
LAB__text__005e7c1c:
            if (plVar11 != plVar5) {
              sVar9 = (long)plVar5 - (long)(plVar11 + 1);
              if (sVar9 != 0) {
                memmove(plVar11,plVar11 + 1,sVar9);
              }
              *(size_t *)(lVar14 + 0x98) = (long)plVar11 + sVar9;
              lVar15 = *plVar13;
              lVar14 = *plVar12;
            }
            plVar11 = *(long **)(lVar15 + 0x60);
            plVar5 = *(long **)(lVar15 + 0x68);
            if (plVar11 != plVar5) {
              do {
                if (*plVar11 == lVar14) goto LAB__text__005e7c7c;
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar5);
              plVar11 = plVar5;
            }
LAB__text__005e7c7c:
            if (plVar11 != plVar5) {
              sVar9 = (long)plVar5 - (long)(plVar11 + 1);
              if (sVar9 != 0) {
                memmove(plVar11,plVar11 + 1,sVar9);
              }
              *(size_t *)(lVar15 + 0x68) = (long)plVar11 + sVar9;
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar3);
        plVar13 = *(long **)(param_1 + 0xf0);
      }
      *(long **)(param_1 + 0xf8) = plVar13;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) & 0xfffffffffffffffb | 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *pbVar1 = 0x4f;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      if (*(char *)(param_1 + 0x147) == '\0') {
        return;
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x144));
      return;
    }
    FUN__text__005e6ec0(param_1,*plVar13);
    plVar4 = *(long **)(param_1 + 0x98);
    for (plVar12 = *(long **)(param_1 + 0x90); plVar12 != plVar4; plVar12 = plVar12 + 1) {
      lVar14 = *plVar13;
      lVar15 = *plVar12;
      plVar11 = *(long **)(lVar14 + 0x90);
      plVar5 = *(long **)(lVar14 + 0x98);
      if (plVar11 != plVar5) {
        do {
          if (*plVar11 == lVar15) goto LAB__text__005e7b1c;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar5);
        plVar11 = plVar5;
      }
LAB__text__005e7b1c:
      if (plVar11 != plVar5) {
        sVar9 = (long)plVar5 - (long)(plVar11 + 1);
        if (sVar9 != 0) {
          memmove(plVar11,plVar11 + 1,sVar9);
        }
        *(size_t *)(lVar14 + 0x98) = (long)plVar11 + sVar9;
        lVar15 = *plVar12;
        lVar14 = *plVar13;
      }
      plVar11 = *(long **)(lVar15 + 0x60);
      plVar5 = *(long **)(lVar15 + 0x68);
      if (plVar11 != plVar5) {
        do {
          if (*plVar11 == lVar14) goto LAB__text__005e7b7c;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar5);
        plVar11 = plVar5;
      }
LAB__text__005e7b7c:
      if (plVar11 != plVar5) {
        sVar9 = (long)plVar5 - (long)(plVar11 + 1);
        if (sVar9 != 0) {
          memmove(plVar11,plVar11 + 1,sVar9);
        }
        *(size_t *)(lVar15 + 0x68) = (long)plVar11 + sVar9;
      }
    }
    plVar13 = plVar13 + 1;
  } while( true );
}


