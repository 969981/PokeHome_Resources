/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5640; name: FUN_.text__005c5640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c5640(long *param_1,ulong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *local_60;
  long *local_58;
  
  FUN__text__005a7c38(param_1,0,0);
  plVar13 = param_1 + 0x16;
  *plVar13 = 0;
  lVar11 = _DAT_008a02e8;
  *param_1 = _DAT_008a02e8 + 0x10;
  param_1[9] = lVar11 + 0xa0;
  param_1[10] = lVar11 + 0xe0;
  uVar9 = tpidr_el0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar3 = uVar9 & 0xffffffffffffe000;
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) ||
     (lVar11 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar11 == 0)) {
    lVar11 = FUN__text__005f52b0();
    param_1[0x1c] = 0;
    param_1[0x19] = lVar11;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    if (uVar3 != 0) goto LAB__text__005c56ec;
  }
  else {
    param_1[0x1c] = 0;
    param_1[0x19] = lVar11;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
LAB__text__005c56ec:
    if ((*(long *)(uVar3 + 0x98) != 0) &&
       (lVar11 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar11 != 0))
    goto LAB__text__005c5704;
  }
  lVar11 = FUN__text__005f52b0();
LAB__text__005c5704:
  param_1[0x1f] = lVar11;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x22,0,1);
  *(undefined1 *)((long)param_1 + 0x112) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x113) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_58 = param_1;
  lVar11 = FUN__text__005c6f0c(&local_60,param_1[1],&local_58);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar11 + 0x268) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
  }
  param_1[0xe] = lVar11;
  FUN__text__005c5ba8(&local_58,param_1[1]);
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
  }
  param_1[0x23] = (long)local_58;
  if ((param_2 & 1) == 0) {
LAB__text__005c5b74:
    FUN__text__005a9d70(*_DAT_0089f5b8,param_1);
    return;
  }
  plVar10 = (long *)FUN__text__00147dec(&local_58,param_1[1],_DAT_0089fc98);
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x10))();
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
  }
  param_1[0x24] = (long)plVar10;
  (**(code **)(*plVar10 + 0x40))(plVar10,param_1[0x23]);
  (**(code **)(*(long *)param_1[0x24] + 0x10))(&local_60);
  plVar10 = local_60;
  local_60 = (long *)0x0;
  local_58 = plVar10;
  puVar5 = (undefined8 *)param_1[0x17];
  if (puVar5 < (undefined8 *)param_1[0x18]) {
    if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__005c5ba4:
      local_60 = (long *)0x0;
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_1[0x19];
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    local_58 = (long *)0x0;
    *puVar5 = plVar10;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    param_1[0x17] = (long)(puVar5 + 1);
  }
  else {
    FUN__text__005c77b0(plVar13,&local_58);
    if (local_58 != (long *)0x0) {
      (**(code **)(local_58[9] + 0x18))();
      local_58 = (long *)0x0;
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(local_60[9] + 0x18))();
  }
  bVar8 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  lVar11 = *(long *)(param_1[0x24] + 0x70);
  pbVar1 = (byte *)(lVar11 + 0x146);
  while (*pbVar1 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005c5954;
  }
  pcVar2 = (char *)(lVar11 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005c5944;
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
LAB__text__005c5944:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005c5954:
  lVar12 = param_1[0xe];
  lVar4 = lVar12;
  if (*(long *)(lVar12 + 0x120) != 0) {
    lVar4 = *(long *)(lVar12 + 0x120);
  }
  if (*(long *)(lVar12 + 0x128) != 0) {
    lVar12 = *(long *)(lVar12 + 0x128);
  }
  FUN__text__005e75a4(lVar11,lVar4,lVar12);
  *(ulong *)(lVar11 + 0x138) = *(ulong *)(lVar11 + 0x138) & 0xfffffffffffffffe;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar11 + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x144));
  }
  FUN__text__00147cfc(&local_58,param_1[1],_DAT_0089fca0);
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
  }
  param_1[0x25] = (long)local_58;
  (**(code **)(*local_58 + 0x40))(local_58,param_1[0x23]);
  (**(code **)(*(long *)param_1[0x25] + 0x10))(&local_60);
  plVar10 = local_60;
  local_60 = (long *)0x0;
  local_58 = plVar10;
  puVar5 = (undefined8 *)param_1[0x17];
  if (puVar5 < (undefined8 *)param_1[0x18]) {
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__005c5ba4;
    *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_1[0x19];
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    local_58 = (long *)0x0;
    *puVar5 = plVar10;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    param_1[0x17] = (long)(puVar5 + 1);
  }
  else {
    FUN__text__005c77b0(plVar13,&local_58);
    if (local_58 != (long *)0x0) {
      (**(code **)(local_58[9] + 0x18))();
      local_58 = (long *)0x0;
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(local_60[9] + 0x18))();
  }
  lVar11 = *(long *)(param_1[0x25] + 0x70);
  pbVar1 = (byte *)(lVar11 + 0x146);
  while (*pbVar1 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005c5b24;
  }
  pcVar2 = (char *)(lVar11 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005c5b14;
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
LAB__text__005c5b14:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005c5b24:
  lVar12 = param_1[0xe];
  lVar4 = lVar12;
  if (*(long *)(lVar12 + 0x120) != 0) {
    lVar4 = *(long *)(lVar12 + 0x120);
  }
  if (*(long *)(lVar12 + 0x128) != 0) {
    lVar12 = *(long *)(lVar12 + 0x128);
  }
  FUN__text__005e75a4(lVar11,lVar4,lVar12);
  *(ulong *)(lVar11 + 0x138) = *(ulong *)(lVar11 + 0x138) & 0xfffffffffffffffe;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar11 + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x144));
  }
  goto LAB__text__005c5b74;
}


