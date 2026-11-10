/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e42b0; name: FUN_.text__005e42b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__005e42b0(undefined8 *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)((long)param_1 + 0x4a);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005e4364;
  }
  pcVar2 = (char *)((long)param_1 + 0x4b);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 9));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005e4354;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005e4354:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005e4364:
  plVar11 = (long *)param_1[0x17];
  plVar3 = (long *)param_1[0x18];
  if (plVar11 == plVar3) {
    plVar10 = plVar11;
  }
  else {
    do {
      lVar9 = *plVar11;
      plVar10 = plVar3;
      if ((*(long *)(lVar9 + 0xc0) != *(long *)(lVar9 + 200) ||
           *(long *)(lVar9 + 0x60) != *(long *)(lVar9 + 0x68)) ||
         (*(long *)(lVar9 + 0xf0) != *(long *)(lVar9 + 0xf8) ||
          *(long *)(lVar9 + 0x90) != *(long *)(lVar9 + 0x98))) {
        FUN__text__005e77f0(lVar9,*param_1,param_1[1]);
        plVar8 = plVar11;
        if (plVar11 != plVar3) {
          while (plVar11 = plVar11 + 1, plVar10 = plVar8, plVar11 != plVar3) {
            lVar9 = *plVar11;
            if ((*(long *)(lVar9 + 0xc0) == *(long *)(lVar9 + 200) &&
                 *(long *)(lVar9 + 0x60) == *(long *)(lVar9 + 0x68)) &&
               (*(long *)(lVar9 + 0xf0) == *(long *)(lVar9 + 0xf8) &&
                *(long *)(lVar9 + 0x90) == *(long *)(lVar9 + 0x98))) {
              *plVar8 = lVar9;
              plVar8 = plVar8 + 1;
            }
            else {
              FUN__text__005e77f0(lVar9,*param_1,param_1[1]);
            }
          }
        }
        break;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  for (plVar11 = (long *)param_1[0x17]; plVar11 != plVar10; plVar11 = plVar11 + 1) {
    FUN__text__005e77f0(*plVar11,*param_1,param_1[1]);
  }
  param_1[0x18] = param_1[0x17];
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)((long)param_1 + 0x4b) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 9));
  return;
}


