/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a56b8; name: FUN_.text__005a56b8
 */


void FUN__text__005a56b8(undefined8 *param_1)

{
  LightEventType *pLVar1;
  byte *pbVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58 [3];
  long local_38;
  
  FUN__text__005e2568();
  param_1[0x4e] = 0;
  uVar4 = tpidr_el0;
  param_1[0x4f] = 0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *param_1 = 0x8954e0;
  param_1[9] = 0x895538;
  param_1[10] = 0x895578;
  if (((uVar4 == 0) || (*(long *)(uVar4 + 0x98) == 0)) ||
     (lVar12 = *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x10), lVar12 == 0)) {
    lVar12 = FUN__text__005f52b0();
  }
  param_1[0x54] = lVar12;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  local_38 = FUN__text__0010feac(local_58,param_1[1]);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__005e7474(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uStack_60 = param_1[0x2a];
  puVar7 = param_1 + 0x51;
  local_6c = 0;
  local_68 = param_1;
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7);
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
  }
  lVar12 = local_58[0];
  uVar11 = tpidr_el0;
  bVar10 = (byte)((uint)uVar11 >> 0xd) & 0x4f;
  pLVar1 = (LightEventType *)(local_58[0] + 0x144);
  pbVar2 = (byte *)(local_58[0] + 0x146);
  param_1[0x4e] = local_58[0];
  while (*pbVar2 == 0x4f) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__005a5884;
  }
  pcVar3 = (char *)(local_58[0] + 0x147);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar2 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*pbVar2 == 0x4f) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar9) {
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__005a5874;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a5874:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a5884:
  puVar5 = param_1;
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
  }
  puVar6 = param_1;
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x25];
  }
  FUN__text__005e75a4(lVar12,puVar5,puVar6);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar12 + 0x147) != '\0') {
    nn::os::SignalLightEvent(pLVar1);
  }
  uStack_60 = param_1[0x2a];
  local_6c = 1;
  local_68 = param_1;
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7);
  if (param_1[0x4f] != 0) {
    (**(code **)(*(long *)(param_1[0x4f] + 0x48) + 0x18))();
  }
  lVar12 = local_58[0];
  pLVar1 = (LightEventType *)(local_58[0] + 0x144);
  pbVar2 = (byte *)(local_58[0] + 0x146);
  param_1[0x4f] = local_58[0];
  while (*pbVar2 == 0x4f) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__005a59a4;
  }
  pcVar3 = (char *)(local_58[0] + 0x147);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar2 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*pbVar2 == 0x4f) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar9) {
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__005a5994;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a5994:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a59a4:
  puVar5 = param_1;
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x24];
  }
  puVar6 = param_1;
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x25];
  }
  FUN__text__005e75a4(lVar12,puVar5,puVar6);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar12 + 0x147) != '\0') {
    nn::os::SignalLightEvent(pLVar1);
  }
  uStack_60 = param_1[0x2a];
  local_6c = 2;
  local_68 = param_1;
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7);
  if (param_1[0x50] != 0) {
    (**(code **)(*(long *)(param_1[0x50] + 0x48) + 0x18))();
  }
  pbVar2 = (byte *)(local_58[0] + 0x146);
  param_1[0x50] = local_58[0];
  while (*pbVar2 == 0x4f) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__005a5ac4;
  }
  pcVar3 = (char *)(local_58[0] + 0x147);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar2 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_58[0] + 0x144));
        while (*pbVar2 == 0x4f) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar9) {
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__005a5ab4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a5ab4:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar9) {
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__005a5ac4:
  puVar7 = param_1;
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[0x24];
  }
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) {
    param_1 = (undefined8 *)param_1[0x25];
  }
  FUN__text__005e75a4(local_58[0],puVar7,param_1);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar9) {
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(local_58[0] + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(local_58[0] + 0x144));
  }
  return;
}


