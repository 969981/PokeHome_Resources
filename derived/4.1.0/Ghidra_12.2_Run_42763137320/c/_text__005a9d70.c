/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9d70; name: FUN_.text__005a9d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a9d70(long param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_58;
  long local_38;
  
  uVar9 = tpidr_el0;
  bVar7 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x1a2);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__005a9e34;
  }
  pcVar2 = (char *)(param_1 + 0x1a3);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1a0));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__005a9e24;
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
LAB__text__005a9e24:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005a9e34:
  (**(code **)(*param_2 + 0x10))(&local_58,param_2);
  lVar10 = local_58;
  local_58 = 0;
  local_38 = lVar10;
  plVar4 = *(long **)(param_1 + 0x178);
  if (plVar4 < *(long **)(param_1 + 0x180)) {
    uVar9 = uVar9 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x188);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    local_38 = 0;
    *plVar4 = lVar10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    *(long **)(param_1 + 0x178) = plVar4 + 1;
  }
  else {
    FUN__text__005adc70(param_1 + 0x170,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
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
  if (*(char *)(param_1 + 0x1a3) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1a0));
  }
  lVar10 = param_2[0xe];
  pbVar1 = (byte *)(lVar10 + 0x146);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__005a9fa4;
  }
  pcVar2 = (char *)(lVar10 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__005a9f94;
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
LAB__text__005a9f94:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005a9fa4:
  lVar8 = *(long *)(*_DAT_0089fd80 + 0x50);
  lVar3 = lVar8;
  if (*(long *)(lVar8 + 0x120) != 0) {
    lVar3 = *(long *)(lVar8 + 0x120);
  }
  if (*(long *)(lVar8 + 0x128) != 0) {
    lVar8 = *(long *)(lVar8 + 0x128);
  }
  FUN__text__005e75a4(lVar10,lVar3,lVar8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar10 + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x144));
  }
  return;
}


