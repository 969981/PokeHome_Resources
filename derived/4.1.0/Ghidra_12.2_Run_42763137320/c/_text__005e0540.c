/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e0540; name: FUN_.text__005e0540
 */


void FUN__text__005e0540(long *param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_58;
  
  plVar10 = (long *)*param_2;
  uVar9 = tpidr_el0;
  bVar7 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  pbVar1 = (byte *)((long)param_1 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__005e0604;
  }
  pcVar2 = (char *)((long)param_1 + 0xe3);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__005e05f4;
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
LAB__text__005e05f4:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005e0604:
  lVar11 = *param_2;
  (**(code **)(*param_1 + 0x10))(&local_58,param_1);
  lVar8 = *(long *)(lVar11 + 0x68);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(long **)(lVar11 + 0x68) = local_58;
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)0x0;
  if (lVar8 != 0) {
    plVar3 = (long *)(lVar8 + 0x48);
  }
  plVar4 = (long *)param_1[0x1f];
  local_58 = plVar3;
  if (plVar4 < (long *)param_1[0x20]) {
    uVar9 = uVar9 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = param_1[0x21];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    local_58 = (long *)0x0;
    *plVar4 = (long)plVar3;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    param_1[0x1f] = (long)(plVar4 + 1);
  }
  else {
    FUN__text__005e0780(param_1 + 0x1e,&local_58);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)((long)param_1 + 0xe3) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c));
  }
  (**(code **)(*plVar10 + 0x58))(plVar10);
  return;
}


